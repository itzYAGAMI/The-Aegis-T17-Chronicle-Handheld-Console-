#include "FlappyBird.h"
#include <Arduino.h>

#define BTN_LEFT    2
#define BTN_MIDDLE  3
#define BTN_RIGHT   4
#define BUZZER_PIN  9

static unsigned long lastFrameTime = 0;

const unsigned char PROGMEM flappy_bird_bitmap[] = {
  0b00011100,
  0b00100010,
  0b01001001,
  0b10000011,
  0b01000100,
  0b00100011,
  0b00011100
};

struct Bird {
  float x;
  float y;
  int width;
  int height;
  float velocity;
  float jump_force;
  float gravity;
  const unsigned char* sprite;
};

struct Pipe {
  float x;
  int width;
  float velocity;
  int gap_y;
  int gap_size;
  bool passed;
};

static Bird bird;
static Pipe pipeA;
static Pipe pipeB; 
static Pipe pipeC;

static bool collision;
static int ground_level;
static unsigned long highest_score;
static unsigned long currentScore;
void initFlappyBirdRun(){
  bird.width = 8;
  bird.height = 7;
  bird.x = (128-bird.width)/2;
  bird.y = (64-bird.height)/2;
  bird.velocity = 0;
  bird.gravity = 0.4;
  bird.jump_force = -2.5;
  bird.sprite = flappy_bird_bitmap;

  pipeA.x = 128.0;
  pipeA.width = 8;
  pipeA.velocity = 2;
  pipeA.gap_y = random(5,35); 
  pipeA.gap_size = 25;
  pipeA.passed = false;

  pipeB.x = 171.0;
  pipeB.width = 8;
  pipeB.velocity = 2;
  pipeB.gap_y = random(5,35); 
  pipeB.gap_size = 25;
  pipeB.passed = false;

  pipeC.x = 214.0;
  pipeC.width = 8;
  pipeC.velocity = 2;
  pipeC.gap_y = random(5,35); 
  pipeC.gap_size = 25;
  pipeC.passed=false;

  collision = false;
  ground_level = 64 - bird.height;
  currentScore = 0;
}

bool runFlappyBird(Adafruit_SSD1306 &display){
  if(millis() - lastFrameTime >= 33){
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);

    if (!collision){

      if (highest_score <= currentScore) highest_score = currentScore;

      if(digitalRead(BTN_RIGHT)==LOW){
          bird.velocity = bird.jump_force;
      }
      bird.velocity += bird.gravity;
      bird.y += bird.velocity;
      if (bird.y >= ground_level || bird.y <= 0){
        delay(1000);
        collision = true;
      }

      if(pipeA.x<=0){
        pipeA.x = 128;
        pipeA.gap_y = random(5,34);
        pipeA.passed=false;
      }
      pipeA.x -= pipeA.velocity;

      if (bird.x <= pipeA.x + pipeA.width && bird.x + bird.width >= pipeA.x){
      //if((bird.x <= pipeA.x+pipeA.width && bird.x >= pipeA.x) || (bird.x+bird.width>= pipeA.x && bird.x+bird.width<= pipeA.x+pipeA.width)){
        if(bird.y <= pipeA.gap_y || bird.y+bird.height >= pipeA.gap_y+pipeA.gap_size){
          collision = true;
        }
      }
      if(bird.x>pipeA.x+pipeA.width && !pipeA.passed){
        currentScore++;
        pipeA.passed=true;
      }

      if(pipeB.x<=0){
        pipeB.x = 128;
        pipeB.gap_y = random(5,34);
        pipeB.passed=false;
      }
      pipeB.x -= pipeB.velocity;

      if (bird.x <= pipeB.x + pipeB.width && bird.x + bird.width >= pipeB.x){
      //if((bird.x <= pipeB.x+pipeB.width && bird.x >= pipeB.x) || (bird.x+bird.width>= pipeB.x && bird.x+bird.width<= pipeB.x+pipeB.width)){
        if(bird.y <= pipeB.gap_y || bird.y+bird.height >= pipeB.gap_y+pipeB.gap_size){
          collision = true;
        }
      }
      if(bird.x>pipeB.x+pipeB.width && !pipeB.passed){
        currentScore++;
        pipeB.passed=true;
      }

      if(pipeC.x<=0){
        pipeC.x = 128;
        pipeC.gap_y = random(5,34);
        pipeC.passed=false;
      }
      pipeC.x -= pipeC.velocity;

      if (bird.x <= pipeC.x + pipeC.width && bird.x + bird.width >= pipeC.x){
      //if((bird.x <= pipeC.x+pipeC.width && bird.x >= pipeC.x) || (bird.x+bird.width>= pipeC.x && bird.x+bird.width<= pipeC.x+pipeC.width)){
        if(bird.y <= pipeC.gap_y || bird.y+bird.height >= pipeC.gap_y+pipeC.gap_size){
          collision = true;
        }
      }
      if(bird.x>pipeC.x+pipeC.width && !pipeC.passed){
        currentScore++;
        pipeC.passed=true;
      }
      display.setTextColor(SSD1306_WHITE);
      display.setCursor(105,0);
      display.println(highest_score);
      display.setCursor(105,8);
      display.println(currentScore);

      display.drawBitmap((int)bird.x, (int)bird.y, bird.sprite, bird.width, bird.height, SSD1306_WHITE);
      //display.fillRect((int)bird.x,(int)bird.y,bird.width,bird.height,SSD1306_WHITE);
      display.fillRect((int)pipeA.x,0,pipeA.width,pipeA.gap_y,SSD1306_WHITE);
      display.fillRect((int)pipeB.x,0,pipeB.width,pipeB.gap_y,SSD1306_WHITE);
      display.fillRect((int)pipeC.x,0,pipeC.width,pipeC.gap_y,SSD1306_WHITE);
      display.fillRect((int)pipeA.x,pipeA.gap_y+pipeA.gap_size, pipeA.width,64-(pipeA.gap_y+pipeA.gap_size),SSD1306_WHITE);
      display.fillRect((int)pipeB.x,pipeB.gap_y+pipeB.gap_size, pipeB.width,64-(pipeB.gap_y+pipeB.gap_size),SSD1306_WHITE);
      display.fillRect((int)pipeC.x,pipeC.gap_y+pipeC.gap_size, pipeC.width,64-(pipeC.gap_y+pipeC.gap_size),SSD1306_WHITE);
    }
    else{
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


      if(digitalRead(BTN_MIDDLE)==LOW) initFlappyBirdRun();
      if(digitalRead(BTN_LEFT)==LOW) return false;
    }

    display.display();
    lastFrameTime = millis();
  }
  return true;
}

