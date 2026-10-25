#include "tamagotchi.h"
#include <Arduino.h>

#define BTN_LEFT    2
#define BTN_MIDDLE  3
#define BTN_RIGHT   4
#define BUZZER_PIN  9

struct Pet {
  int hunger;       // 0 to 100 (0 = starving, 100 = full)
  int happiness;    // 0 to 100 (0 = sad, 100 = happy)
  int energy;       // 0 to 100 (0 = exhausted, 100 = fully rested)
  unsigned long age; //seconds the pet has been alive
};

enum Screen {
  SCREEN_MAIN,
  SCREEN_FEED,
  SCREEN_PLAY,
  SCREEN_SLEEP
};

static Pet pet;
static Screen currentScreen = SCREEN_MAIN;
static unsigned long lastUpdate = 0;
static unsigned long lastButtonPress = 0;
static unsigned long lastFrameTime = 0;


void initTamagotchi() {
  pet.hunger = 80;
  pet.happiness = 80;
  pet.energy = 80;
  pet.age = 0;
  currentScreen = SCREEN_MAIN;
  lastUpdate = millis();
}

static void updatePet() {
  if (millis() - lastUpdate > 5000) {  // every 5 seconds
    pet.hunger--;
    pet.happiness--;
    pet.energy--;

    if (pet.hunger < 0) pet.hunger = 0;
    if (pet.happiness < 0) pet.happiness = 0;
    if (pet.energy < 0) pet.energy = 0;

    pet.age += 5;
    lastUpdate = millis();
  }
}

static void checkButtons() {
  if (millis() - lastButtonPress < 200) return;  // debounce: ignore presses within 200ms

  if (digitalRead(BTN_LEFT) == LOW) {
    currentScreen = SCREEN_FEED;
    tone(BUZZER_PIN, 1000, 50);
    lastButtonPress = millis();
  }
  else if (digitalRead(BTN_MIDDLE) == LOW) {
    currentScreen = SCREEN_PLAY;
    tone(BUZZER_PIN, 1200, 50);
    lastButtonPress = millis();
  }
  else if (digitalRead(BTN_RIGHT) == LOW) {
    currentScreen = SCREEN_SLEEP;
    tone(BUZZER_PIN, 800, 50);
    lastButtonPress = millis();
  }
}

static void handleScreenLogic() {
  switch(currentScreen) {

    case SCREEN_FEED:
      pet.hunger += 10;
      if (pet.hunger > 100) pet.hunger = 100;
      currentScreen = SCREEN_MAIN;
      break;

    case SCREEN_PLAY:
      pet.happiness += 10;
      pet.energy -= 5;
      if (pet.happiness > 100) pet.happiness = 100;
      if (pet.energy < 0) pet.energy = 0;
      currentScreen = SCREEN_MAIN;
      break;

    case SCREEN_SLEEP:
      pet.energy += 15;
      if (pet.energy > 100) pet.energy = 100;
      currentScreen = SCREEN_MAIN;
      break;

    case SCREEN_MAIN:
      break;
  }
}

static const unsigned char PROGMEM petHappy[] = {
  0b00000000, 0b00000000,
  0b00011111, 0b11111000,
  0b00100000, 0b00000100,
  0b01000000, 0b00000010,
  0b01001100, 0b00110010,
  0b01001100, 0b00110010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b01000100, 0b00100010,
  0b01000011, 0b11000010,
  0b01000000, 0b00000010,
  0b00100000, 0b00000100,
  0b00011111, 0b11111000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000
};

static const unsigned char PROGMEM petSad[] = {
  0b00000000, 0b00000000,
  0b00011111, 0b11111000,
  0b00100000, 0b00000100,
  0b01000000, 0b00000010,
  0b01001100, 0b00110010,
  0b01001100, 0b00110010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b01000011, 0b11000010,
  0b01000100, 0b00100010,
  0b00100000, 0b00000100,
  0b00011111, 0b11111000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000
};

static const unsigned char PROGMEM petNeutral[] = {
  0b00000000, 0b00000000,
  0b00011111, 0b11111000,
  0b00100000, 0b00000100,
  0b01000000, 0b00000010,
  0b01001100, 0b00110010,
  0b01001100, 0b00110010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b01000111, 0b11100010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b00100000, 0b00000100,
  0b00011111, 0b11111000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000
};

static const unsigned char PROGMEM petSleep[] = {
  0b00000000, 0b00000000,
  0b00011111, 0b11111000,
  0b00100000, 0b00000100,
  0b01000000, 0b00000010,
  0b01001111, 0b01110010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b01000011, 0b11000010,
  0b01000000, 0b00000010,
  0b01000000, 0b00000010,
  0b00100000, 0b00000100,
  0b00011111, 0b11111000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000,
  0b00000000, 0b00000000
};

static void drawBar(int x, int y, int value, Adafruit_SSD1306 &display) {
  int barWidth = 100;
  int barHeight = 6;
  int fillWidth = map(value, 0, 100, 0, barWidth);

  display.drawRect(x, y, barWidth, barHeight, SSD1306_WHITE);     
  display.fillRect(x, y, fillWidth, barHeight, SSD1306_WHITE);      
}

static void render(Adafruit_SSD1306 &display) {
  display.clearDisplay();

  const unsigned char* sprite;
  if (pet.hunger < 30 || pet.happiness < 30 || pet.energy < 30) {
    sprite = petSad;
  } else if (pet.hunger > 50 && pet.happiness > 50 && pet.energy > 50) {
    sprite = petHappy;
  } else {
    sprite = petNeutral;
  }

  display.drawBitmap(56, 2, sprite, 16, 16, SSD1306_WHITE);

  display.setTextSize(1);

  display.setCursor(0, 24);
  display.print("HUN ");
  drawBar(24, 24, pet.hunger, display);

  display.setCursor(0, 34);
  display.print("HAP ");
  drawBar(24, 34, pet.happiness, display);

  display.setCursor(0, 44);
  display.print("ENG ");
  drawBar(24, 44, pet.energy, display);

  display.setCursor(0, 56);
  display.println("[Feed] [Play] [Sleep]");

  display.display();
}

bool runTamagotchi(Adafruit_SSD1306 &display){
  if (digitalRead(BTN_LEFT) == LOW && digitalRead(BTN_RIGHT) == LOW) {
    return false; 
  }

  if (millis() - lastFrameTime > 100) {
    checkButtons();
    updatePet();
    handleScreenLogic();
    render(display);
    lastFrameTime = millis();
  }
  
  return true;
}
