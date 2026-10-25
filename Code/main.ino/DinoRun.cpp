#include "DinoRun.h"
#include <Arduino.h>

#define BTN_LEFT    2
#define BTN_MIDDLE  3
#define BTN_RIGHT   4
#define BUZZER_PIN  9

static unsigned long lastFrameTime = 0;

const unsigned char dino_bitmap[] PROGMEM = {
  0b00000000, 0b00011111, 0b11100000,
  0b00000000, 0b00111111, 0b11110000,
  0b00000000, 0b00110011, 0b11110000,
  0b00000000, 0b00110011, 0b11110000,
  0b00000000, 0b00111111, 0b11110000,
  0b00000000, 0b00111111, 0b11110000,
  0b00000000, 0b00111110, 0b00000000,
  0b00000000, 0b00111111, 0b11000000,
  0b10000000, 0b01111100, 0b00000000,
  0b10000000, 0b11111100, 0b00000000,
  0b11000011, 0b11111111, 0b00000000,
  0b11100111, 0b11111101, 0b00000000,
  0b11111111, 0b11111100, 0b00000000,
  0b11111111, 0b11111100, 0b00000000,
  0b01111111, 0b11111000, 0b00000000,
  0b00111111, 0b11111000, 0b00000000,
  0b00011111, 0b11110000, 0b00000000,
  0b00001111, 0b11100000, 0b00000000,
  0b00000111, 0b01100000, 0b00000000,
  0b00000110, 0b00100000, 0b00000000,
  0b00000100, 0b00100000, 0b00000000,
  0b00000110, 0b00110000, 0b00000000
};

const unsigned char cactus_bitmap[] PROGMEM = {
  0b00110000,
  0b00110000,
  0b00110100,
  0b00110100,
  0b00110100,
  0b10110100,
  0b10110100,
  0b10111100,
  0b10110000,
  0b11110000,
  0b00110000,
  0b00110000,
  0b00110000,
  0b00110000,
  0b00110000
};

struct Dino {
  float x;
  float y;
  int width;
  int height;
  float velocity;
  float jump_force;
  float gravity;
  const unsigned char* sprite;
};

static Dino dino;

struct Cactus {
  float x;
  float y;
  int width;
  int height;
  float velocity;
  float acceleration;
  const unsigned char* sprite;
};

static Cactus cact;

static int ground_level;
static boolean collision;
static unsigned long start_time;
static unsigned long highest_score;
static int currentScore;
void initDinoRun(){
  dino.width = 20;
  dino.height = 22;
  //dino.x = (128-dino.width)/2;
  dino.x=16;
  dino.y = 64-dino.height;
  dino.velocity = 0.0;
  dino.gravity = 1.5;
  dino.jump_force=-10.0;
  dino.sprite = dino_bitmap;

  cact.width = 6;
  cact.height = 15;
  cact.x = 128;
  cact.y = 64-cact.height;
  cact.velocity=4;
  cact.sprite = cactus_bitmap;
  cact.acceleration = 0.01;
  ground_level = 64-dino.height;
  collision = false;

  start_time = millis();
  currentScore = 0;
}

bool runDinoGame(Adafruit_SSD1306 &display){
   if(millis()-lastFrameTime > 33){
      

      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(SSD1306_WHITE);

      if (dino.x <= cact.x+(float)cact.width && dino.x+(float)dino.width >= cact.x && dino.y <= cact.y+(float)cact.height && dino.y+(float)dino.height >= cact.y) collision = true;


      if (!collision){
        currentScore = (millis()-start_time)/100;
        if (highest_score <= currentScore) highest_score = currentScore;

        if(digitalRead(BTN_RIGHT)==LOW && dino.y >= ground_level){
          dino.velocity = dino.jump_force;
        }
        dino.velocity += dino.gravity;
        dino.y += dino.velocity;
        if (dino.y > ground_level){
          dino.y = ground_level;
          dino.velocity = 0.0;
        }
        if(cact.x<=0) cact.x = 128;
        cact.velocity+= cact.acceleration;
        cact.x -= cact.velocity;

        display.setCursor(90,0);
        //display.print("Highest Score:");
        display.println(highest_score);
        //display.print("Current Score:");
        display.setCursor(90,8);
        display.println(currentScore);
        
        display.drawBitmap((int)cact.x, (int)cact.y, cact.sprite, cact.width, cact.height, SSD1306_WHITE);
        display.drawBitmap((int)dino.x, (int)dino.y, dino.sprite, dino.width, dino.height, SSD1306_WHITE);
        //display.fillRect((int)cact.x,(int)cact.y,cact.width,cact.height,SSD1306_WHITE);
        //display.fillRect((int)dino.x,(int)dino.y,dino.width,dino.height,SSD1306_WHITE);
      }
      else{
        //display.clearDisplay();
        display.setCursor(33, 25);
        display.println("GAME OVER!");
        display.setCursor(16,33);
        display.print("Highest Score:");
        display.println(highest_score);
        display.setCursor(16,41);
        display.print("Current Score:");
        display.println(currentScore);
        display.setCursor(0,56);
        display.print("[MENU] [RETRY] [JUMP]");


        if(digitalRead(BTN_MIDDLE)==LOW) initDinoRun();
        if(digitalRead(BTN_LEFT)==LOW) return false;
      }

      display.display();
      lastFrameTime = millis();
   }
   return true;
}