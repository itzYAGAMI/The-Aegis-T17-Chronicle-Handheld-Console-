#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "DinoRun.h"
#include "FlappyBird.h"
#include "Platformer.h"
#include "tamagotchi.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define BTN_LEFT    2
#define BTN_MIDDLE  3
#define BTN_RIGHT   4
#define BUZZER_PIN  9

#define SDA_PIN     6
#define SCL_PIN     7

enum ScreenState {
  MENU,
  TAMAGOTCHI,
  FLAPPY_BIRD,
  DINO_RUN,
  PLATFORMER,
};

ScreenState currentScreen = MENU;
void drawBar(int x, int y, int value) {
  int barWidth = 100;
  int barHeight = 6;
  int fillWidth = map(value, 0, 100, 0, barWidth);

  display.drawRect(x, y, barWidth, barHeight, SSD1306_WHITE);       // outline
  display.fillRect(x, y, fillWidth, barHeight, SSD1306_WHITE);      // filled portion
}
void setup() {
  pinMode(BTN_LEFT, INPUT_PULLUP);
  pinMode(BTN_MIDDLE, INPUT_PULLUP);
  pinMode(BTN_RIGHT, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);

  Wire.begin(SDA_PIN, SCL_PIN);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  delay(500);
  unsigned long start = millis();
  unsigned long loading = 3000;
  while (millis() - start <= loading){
    display.clearDisplay();
    display.setCursor(35, 25);
    display.println("Loading...");
    drawBar(14, 35, ((millis() - start) * 100) / loading);
    display.display();
  }
}

bool left_pressed_before = false;
bool right_pressed_before = false;
bool middle_pressed_before = false;

int game_number = 0;

void runMainMenu(){
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("MENU:");
  display.setTextSize(1);
  display.println();
  display.println();
  switch (game_number){
    case 0 :
      display.println(">TAMAGOTCHI");
      display.println("FLAPPY BIRD");
      display.println("DINO RUN");
      display.println("PLATFORMER");
      break;
    case 1 :
      display.println("TAMAGOTCHI");
      display.println(">FLAPPY BIRD");
      display.println("DINO RUN");
      display.println("PLATFORMER");
      break;
    case 2 :
      display.println("TAMAGOTCHI");
      display.println("FLAPPY BIRD");
      display.println(">DINO RUN");
      display.println("PLATFORMER");
      break;
    case 3 :
      display.println("TAMAGOTCHI");
      display.println("FLAPPY BIRD");
      display.println("DINO RUN");
      display.println(">PLATFORMER");
      break;
  }
  //display.println((if(game_number==0)">":"")+"TAMAGOTCHI")
  //display.println((if(game_number==1)">":"")+"FLAPPY BIRD")
  //display.println((if(game_number==2)">":"")+"DINO RUN")
  //display.println((if(game_number==3)">":"")+"PLATFORMER")

  if (digitalRead(BTN_LEFT)==LOW && !left_pressed_before){
    game_number = (game_number+3)%4;
    left_pressed_before = true;
  }
  else if (digitalRead(BTN_LEFT)==HIGH && left_pressed_before) left_pressed_before = false;
  
  if (digitalRead(BTN_RIGHT)==LOW && !right_pressed_before){
    game_number = (game_number+1)%4;
    right_pressed_before = true;
  }
  else if (digitalRead(BTN_RIGHT)==HIGH && right_pressed_before) right_pressed_before = false;

  if (digitalRead(BTN_MIDDLE)==LOW && !middle_pressed_before){
    if (game_number == 0){
      initTamagotchi();
      currentScreen = TAMAGOTCHI;
    }
    else if (game_number == 1){
      initFlappyBirdRun();
      currentScreen = FLAPPY_BIRD;
    }
    else if (game_number == 2){
      initDinoRun();
      currentScreen = DINO_RUN;
    } 
    else if (game_number == 3){
      initPlatformer();
      currentScreen = PLATFORMER;
    }
    else currentScreen = MENU;
    middle_pressed_before=true;
  }
  else if (digitalRead(BTN_MIDDLE)==HIGH && middle_pressed_before) middle_pressed_before = false;

  display.display();
}

void loop() {
  switch(currentScreen){
    case MENU:
      runMainMenu();
      break;
    case TAMAGOTCHI:
      if (runTamagotchi(display) == false){
        currentScreen = MENU;
      }
      break;
    case FLAPPY_BIRD:
      if (runFlappyBird(display) == false){
        currentScreen = MENU;
      }
      break;
    case DINO_RUN:
      if (runDinoGame(display) == false){
        currentScreen = MENU;
      }
      break;
    case PLATFORMER:
      if (runPlatformer(display) == false){
        currentScreen = MENU;
      }
      break;
  }
}

