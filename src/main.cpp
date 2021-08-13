
#include "Arduino.h"
#include "session.h"
 
using namespace Stoichonome;

Session session;

void setup()
{
  session.initialize();
  session.status();

  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{  
  session.status();

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}