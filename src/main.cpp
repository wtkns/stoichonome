
#include "Arduino.h"
#include "session.h"
 
using namespace Stoichonome;
 
void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    Session session;
    session.initialize();
    Serial.println(session.playing);
    session.patch();
    Serial.println(session.playing);

  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hello Computer");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(1000);
}