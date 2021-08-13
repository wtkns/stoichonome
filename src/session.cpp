// my_class.cpp
#include <Arduino.h>
#include "session.h" // header in local directory

using namespace Stoichonome;

void Session::initialize()
{
    int id {100};
    bool playing {false};
    Serial.println("Initializing");
}

void Session::play()
{
    playing = true;
    Serial.println("playing patch.");
}

void Session::status()
{
    Serial.println("id");
    Serial.println("playing");

}
