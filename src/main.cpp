
#include "Arduino.h"
#include "session.h"
 
using namespace Stoichonome;

// Static definitions
int Session::patchID; 
bool Session::playing;

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
  delay(1000);
  session.status();
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  session.play();
  session.status();
  delay(1000);
  session.stop();
  session.status();

}