
#include "Arduino.h"
#include "session.h"
 
using namespace Stoichonome;

void setup()
{
  
  Session::Initialize();
  
  Session::PrintStatus();

}

void loop()
{  
  delay(1000);
  Session::PrintStatus();
  delay(1000);
  Session::Play();
  Session::PrintStatus();
  delay(1000);
  Session::Stop();
  Session::PrintStatus();
}