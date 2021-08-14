// my_class.cpp
#include <Arduino.h>
#include "session.h" // header in local directory

using namespace Stoichonome;

void Session::initialize()
{
    //loadPatch(getLastPatchID())
    patchID = 100;
    playing = false;
    Serial.println("Initializing");
}

void Session::play()
{
    Session::playing = true;
    Serial.println("playing patch.");
}

void Session::stop()
{
    Session::playing = false;
    Serial.println("stopping patch.");
}

void Session::status()
{
    Serial.println(patchID);
    Serial.println(playing);
    digitalWrite(LED_BUILTIN, HIGH);
}
