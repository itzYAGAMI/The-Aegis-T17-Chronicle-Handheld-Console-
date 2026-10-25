#include "Platformer.h"
#include <Adafruit_SSD1306.h>

#define BTN_LEFT    2
#define BTN_MIDDLE  3
#define BTN_RIGHT   4
#define BUZZER_PIN  9

static unsigned long lastFrameTime = 0;

struct Player{
  float x;
  float y;
  float width;
  float height;
  float vel_x;
  float vel_y;
  float gravity;
  float jump_force;
  float move_speed;
  bool grounded;
};

struct Platform{
  float x;
  float y;
  float width;
  float height;
};

struct Door{
  float x;
  float y;
  float width;
  float height;
};
static Player player;
//static Platform plat1;
//static Platform level1[3];
static Platform activePlatforms[15];
static int actualPlatforms;
static Door checkpoint;
static int currentLevel = 1;
static bool button_pressed_before;

void LoadLevel(){
  switch(currentLevel){
    case 1:

      player.x = 4;
      player.y = 62-player.height;
      
      actualPlatforms = 4;
      activePlatforms[0].x = 0;
      activePlatforms[0].y = 62;
      activePlatforms[0].width=128;
      activePlatforms[0].height=20;

      activePlatforms[1].x = 30;
      activePlatforms[1].y = 51;
      activePlatforms[1].width=15;
      activePlatforms[1].height=2;

      activePlatforms[2].x = 50;
      activePlatforms[2].y = 42;
      activePlatforms[2].width=17;
      activePlatforms[2].height=2;

      activePlatforms[3].x = 75;
      activePlatforms[3].y = 51;
      activePlatforms[3].width=19;
      activePlatforms[3].height=2;

      checkpoint.x = 112;
      checkpoint.y = 65;
      checkpoint.width=4;
      checkpoint.height=6;

      break;
    case 2:

      player.x = 4;
      player.y = 62-player.height;
      
      actualPlatforms = 4;
      activePlatforms[0].x = 0;
      activePlatforms[0].y = 62;
      activePlatforms[0].width=128;
      activePlatforms[0].height=20;

      activePlatforms[1].x = 30;
      activePlatforms[1].y = 51;
      activePlatforms[1].width=15;
      activePlatforms[1].height=2;

      activePlatforms[2].x = 50;
      activePlatforms[2].y = 42;
      activePlatforms[2].width=17;
      activePlatforms[2].height=2;

      activePlatforms[3].x = 75;
      activePlatforms[3].y = 51;
      activePlatforms[3].width=19;
      activePlatforms[3].height=2;

      checkpoint.x = 112;
      checkpoint.y = 65;
      checkpoint.width=4;
      checkpoint.height=6;

      break;
    case 3:

      break;
    case 4:

      break;
    case 5:

      break;
  }
}

void initPlatformer(){
  /*level1[0].x = 0;
  level1[0].y = 62;
  level1[0].width=128;
  level1[0].height=20;

  level1[1].x = 30;
  level1[1].y = 50;
  level1[1].width=30;
  level1[1].height=2;

  level1[2].x = 70;
  level1[2].y = 35;
  level1[2].width=30;
  level1[2].height=2;
  */
  player.width=4;
  player.height=4;
  player.x = 4;
  player.y = 62-player.height;
  player.vel_x=0.0;
  player.vel_y = 0.0;
  player.gravity = 1.5;
  player.jump_force=-7.0;
  player.move_speed=2;

  button_pressed_before = false;

  LoadLevel();
}


bool runPlatformer(Adafruit_SSD1306 &display){
  if(millis()-lastFrameTime>33){
    
    player.grounded=false;

    if(digitalRead(BTN_LEFT)==LOW){
      player.vel_x = -player.move_speed;
      button_pressed_before = true;
    }
    if(digitalRead(BTN_RIGHT)==LOW){
      player.vel_x = player.move_speed;
      button_pressed_before = true;
    }
    if(digitalRead(BTN_LEFT)==LOW && digitalRead(BTN_RIGHT)==LOW){
      player.vel_x = 0;
    }
    if(button_pressed_before = true && digitalRead(BTN_LEFT)==HIGH && digitalRead(BTN_RIGHT)==HIGH){
      player.vel_x *= 0.5;
      button_pressed_before = false;
    }
    if(abs(player.vel_x) < 0.1) player.vel_x = 0;
    player.x += player.vel_x;

    for(int i = 0; i < actualPlatforms; i++){
      //if (player.x <= level[i].x+level[i].width && player.x+player.width >= level[i].x && player.y <= level[i].y+level[i].height && player.y+player.height >= level[i].y){
      if (player.x < activePlatforms[i].x + activePlatforms[i].width && player.x + player.width > activePlatforms[i].x){
        if(player.y + 0.1 < activePlatforms[i].y+activePlatforms[i].height && player.y+player.height - 0.1 > activePlatforms[i].y){
          if(player.vel_x > 0){
            player.x = activePlatforms[i].x - player.width;
            player.vel_x=0;
          }
          else if (player.vel_x < 0){
            player.x = activePlatforms[i].x + activePlatforms[i].width;
            player.vel_x=0;
          }
        }
      }
    }
    if (player.x < 0) player.x = 0;
    if (player.x+player.width > 128) player.x = 128-player.width;

    player.vel_y += player.gravity;
    if(player.vel_y > 5.0) player.vel_y = 5.0;
    player.y += player.vel_y;

    for(int i = 0; i < actualPlatforms; i++){
      //if (player.x <= level[i].x+level[i].width && player.x+player.width >= level[i].x && player.y <= level[i].y+level[i].height && player.y+player.height >= level[i].y){
      if (player.x + 0.1 < activePlatforms[i].x + activePlatforms[i].width && player.x + player.width - 0.1 > activePlatforms[i].x){
        if(player.y < activePlatforms[i].y+activePlatforms[i].height && player.y+player.height > activePlatforms[i].y){
          if(player.vel_y > 0){
            player.y = activePlatforms[i].y - player.height;
            player.vel_y=0;
            player.grounded=true;
          }
          else if (player.vel_y < 0){
            player.y = activePlatforms[i].y + activePlatforms[i].height;
            player.vel_y=0;
          }
        }
      }
    }

    if(digitalRead(BTN_MIDDLE)==LOW && player.grounded){
      player.vel_y = player.jump_force;
    }

    /*if (player.y+player.height > 62){
      player.y = level1[0].y-player.height;
      player.vel_y = 0.0;
    }*/
    

    display.clearDisplay();
    display.fillRect((int)player.x,(int)player.y,player.width,player.height,SSD1306_WHITE);
    //display.fillRect((int)level1[0].x,(int)level1[0].y,level1[0].width,level1[0].height,SSD1306_WHITE);

    for(int i = 0; i < actualPlatforms; i++){
      display.fillRect((int)activePlatforms[i].x,(int)activePlatforms[i].y,activePlatforms[i].width,activePlatforms[i].height,SSD1306_WHITE);
    }

    if(player.x < checkpoint.x + checkpoint.width && player.x + player.width > checkpoint.x && player.y < checkpoint.y + checkpoint.height && player.y + player.height > checkpoint.y){
      //currentLevel++;
      LoadLevel();
    }

    display.drawRect(checkpoint.x, checkpoint.y, checkpoint.width, checkpoint.height, SSD1306_WHITE);

    display.display();
    lastFrameTime = millis();
  }
  return true;
}










