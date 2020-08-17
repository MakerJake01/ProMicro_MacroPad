//libs
#include <Keyboard.h>
#include <Adafruit_NeoPixel.h>

//neo-pixel setup
#define PIN        9
#define NUMPIXELS  16
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//Time till light turns off after push
int delayval = 25;
//extra time for the function keys
int delA = 150;

//switches and text
int but8 = 0;
const int but8pin = 10; 
const char *mess8 = "Put Text Here";

int but7 = 0;
const int but7pin = 16;
const char *mess7 = "Put Text Here #2";


int but6 = 0;
const int but6pin = 14;
const char *mess6 = "Put Text Here #3";

int but5 = 0;
const int but5pin = 15;
const char *mess5 = "Put Text Here #4";

int but4 = 0;
const int but4pin = A0;

int but3 = 0;
const int but3pin = A1;

int but2 = 0;
const int but2pin = A2;

int but1 = 0;
const int but1pin = A3;

//Colors
uint32_t on = pixels.Color(255, 0, 255);

uint32_t base0  = pixels.Color(78,  202, 230);
uint32_t base1  = pixels.Color(171, 243, 114);
uint32_t base2  = pixels.Color(255, 241,  42);
uint32_t base3  = pixels.Color(255, 154, 116);
uint32_t base4  = pixels.Color(176, 150, 255);
uint32_t base5  = pixels.Color(80,  204, 225);
uint32_t base6  = pixels.Color(173, 244, 111);
uint32_t base7  = pixels.Color(252, 245,  42);
uint32_t base8  = pixels.Color(255, 186,  84);
uint32_t base9  = pixels.Color(255, 147, 123);
uint32_t base10 = pixels.Color(255, 119, 152);
uint32_t base11 = pixels.Color(255, 74,  198);
uint32_t base12 = pixels.Color(65,  167, 255);
uint32_t base13 = pixels.Color(84,  141, 255);
uint32_t base14 = pixels.Color(123, 103, 255);
uint32_t base15 = pixels.Color(140, 88,  255);

/*

*/

void setup() {
  // put your setup code here, to run once:
  
  //pin declaration
  pinMode(but8pin, INPUT);
  pinMode(but7pin, INPUT);
  pinMode(but6pin, INPUT);
  pinMode(but5pin, INPUT);
  pinMode(but4pin, INPUT);
  pinMode(but3pin, INPUT);
  pinMode(but2pin, INPUT);
  pinMode(but1pin, INPUT);

  Keyboard.begin(); //Init keyboard emulation

  //neopixels started
  pixels.begin();
  pixels.setBrightness(75);

  pixels.setPixelColor(0, base0);
  pixels.setPixelColor(1, base1);
  pixels.setPixelColor(2, base2);
  pixels.setPixelColor(3, base3);
  pixels.setPixelColor(4, base4);
  pixels.setPixelColor(5, base5);
  pixels.setPixelColor(6, base6);
  pixels.setPixelColor(7, base7);
  pixels.setPixelColor(8, base8);
  pixels.setPixelColor(9, base9);
  pixels.setPixelColor(10, base10);
  pixels.setPixelColor(11, base11);
  pixels.setPixelColor(12, base12);
  pixels.setPixelColor(13, base13);
  pixels.setPixelColor(14, base14);
  pixels.setPixelColor(15, base15);
  pixels.show();

}

void loop() {
  // put your main code here, to run repeatedly:

  //start reading inputs
  but8 = digitalRead(but8pin);
  but7 = digitalRead(but7pin);
  but6 = digitalRead(but6pin);
  but5 = digitalRead(but5pin);
  but4 = digitalRead(but4pin);
  but3 = digitalRead(but3pin);
  but2 = digitalRead(but2pin);
  but1 = digitalRead(but1pin);

  //switch 8
  if (but8 == HIGH) {
    pixels.setPixelColor(4, on);
    pixels.show();
    Keyboard.write(' ');
    for (int mess8idx = 0; mess8idx < strlen(mess8); mess8idx++) {
      Keyboard.write(mess8[mess8idx]);
    }
    Keyboard.releaseAll();
    Keyboard.write(' ');
    delay(delayval);
    pixels.setPixelColor(4, base4);
    pixels.show();
  }

  //switch 7
  if (but7 == HIGH) {
    pixels.setPixelColor(5, on);
    pixels.show();
    Keyboard.write(' ');
    for (int mess7idx = 0; mess7idx < strlen(mess7); mess7idx++) {
      Keyboard.write(mess7[mess7idx]);
    }
    Keyboard.write(' ');
    delay(delayval);
    pixels.setPixelColor(5, base5);
    pixels.show();
  }

  //switch 6
  
  if (but6 == HIGH) {
    pixels.setPixelColor(6, on);
    pixels.show();
    Keyboard.write(' ');
     for(int mess6idx = 0; mess6idx < strlen(mess6); mess6idx++){
      Keyboard.write(mess6[mess6idx]);
    }
    Keyboard.write(' ');
    delay(delayval);
    pixels.setPixelColor(6, base6);
    pixels.show();
  }

  //switch 5
  if(but5 == HIGH){
    pixels.setPixelColor(7,on);
    pixels.show();
    Keyboard.write(' ');
    for(int mess5idx = 0; mess5idx < strlen(mess5); mess5idx++){
      Keyboard.write(mess5[mess5idx]);
    }
    Keyboard.write(' ');
    delay(delayval);
    pixels.setPixelColor(7,base7);
    pixels.show();
  }

  //switch 4
  if (but4 == HIGH) {
    pixels.setPixelColor(0, on);
    pixels.show();
    Keyboard.press(KEY_F18);
    delay(delayval + delA);
    Keyboard.releaseAll();
    pixels.setPixelColor(0, base0);
    pixels.show();
  }

  //switch 3
  if (but3 == HIGH) {
    pixels.setPixelColor(1, on);
    pixels.show();
    Keyboard.press(KEY_F18);
    delay(delayval + delA);
    Keyboard.releaseAll();
    pixels.setPixelColor(1, base1);
    pixels.show();
  }

  //switch 2
  if (but2 == HIGH) {
    pixels.setPixelColor(2, on);
    pixels.show();
    Keyboard.press(KEY_F17);
    delay(delayval + delA);
    Keyboard.releaseAll();
    pixels.setPixelColor(2, base2);
    pixels.show();
  }

  //switch 1
  if (but1 == HIGH) {
    pixels.setPixelColor(3, on);
    pixels.show();
    Keyboard.press(KEY_F16);
    delay(delayval + delA);
    Keyboard.releaseAll();
    pixels.setPixelColor(3, base3);
    pixels.show();
  }
