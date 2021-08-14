
#include "Arduino.h"
#include "session.h"
 
using namespace Stoichonome;

void setup()
{
  Session::Initialize(); 
}

void loop()
{  
  delay(1000);
  Session::Play();
  Session::PrintStatus();
  delay(1000);
  Session::Stop();
  Session::PrintStatus();
  Session::StorePatch();

}