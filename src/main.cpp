
#include "Arduino.h"
#include "session.h"
 
using namespace Stoichonome;

void setup()
{
  Session::Initialize();
  Session::Status();

  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{  
  delay(1000);
  Session::Status();
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Session::Play();
  Session::Status();
  delay(1000);
  Session::Stop();
  Session::Status();
}