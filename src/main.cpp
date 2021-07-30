/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

int delayTime;
int brightness;

const int knobPin = 15;

const int trackOne = 3;
const int trackTwo = 4;
const int trackThree = 5;
const int trackFour = 6;
const int trackFive = 23;
const int trackSix = 22;
const int trackSeven = 21;
const int trackEight = 20;

void setup()
{
  Serial.begin(9600); 
  
  // initialize LED digital pin as an output.
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  pinMode(20, OUTPUT);  
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);      

}

void loop()
{
  delayTime = analogRead(knobPin)/2;  // read the input pin
  brightness = analogRead(knobPin);  // read the input pin
  
  Serial.println(delayTime); 
  Serial.println(brightness);

  analogWrite(trackOne, brightness);
  analogWrite(trackEight, 0);
  delay(delayTime);
 
  analogWrite(trackTwo, brightness);
  analogWrite(trackOne, 0);
  delay(delayTime);
 
  analogWrite(trackThree, brightness);
  analogWrite(trackTwo, 0);
  delay(delayTime);

  analogWrite(trackFour, brightness);
  analogWrite(trackThree, 0);
  delay(delayTime);

  analogWrite(trackFive, brightness);
  analogWrite(trackFour, 0);
  delay(delayTime);

  analogWrite(trackSix, brightness);
  analogWrite(trackFive, 0);
  delay(delayTime);

  analogWrite(trackSeven, brightness);
  analogWrite(trackSix, 0);
  delay(delayTime);

  analogWrite(trackEight, brightness);
  analogWrite(trackSeven, 0);
  delay(delayTime);

}
