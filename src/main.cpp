/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

int delayTime;

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
  // pinMode(knobPin, INPUT);      

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
  delayTime = analogRead(knobPin);  // read the input pin
  Serial.println(delayTime); 

  digitalWrite(trackOne, HIGH);
  digitalWrite(trackEight, LOW);
  delay(delayTime);
 
  digitalWrite(trackTwo, HIGH);
  digitalWrite(trackOne, LOW);
  delay(delayTime);
 
  digitalWrite(trackThree, HIGH);
  digitalWrite(trackTwo, LOW);
  delay(delayTime);

  digitalWrite(trackFour, HIGH);
  digitalWrite(trackThree, LOW);
  delay(delayTime);

  digitalWrite(trackFive, HIGH);
  digitalWrite(trackFour, LOW);
  delay(delayTime);

  digitalWrite(trackSix, HIGH);
  digitalWrite(trackFive, LOW);
  delay(delayTime);

  digitalWrite(trackSeven, HIGH);
  digitalWrite(trackSix, LOW);
  delay(delayTime);

  digitalWrite(trackEight, HIGH);
  digitalWrite(trackSeven, LOW);
  delay(delayTime);

}
