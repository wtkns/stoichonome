// my_class.cpp
#include <Arduino.h>
#include "session.h" // header in local directory

using namespace Stoichonome;

void Session::initialize()
{
    bool playing {false};
    Serial.println("Initializing");
}

void Session::patch()
{
    playing = true;
    Serial.println("updating patch");
}
