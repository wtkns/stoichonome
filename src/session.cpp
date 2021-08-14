// my_class.cpp
#include <Arduino.h>
#include "session.h" // header in local directory

using namespace Stoichonome;

// Static definitions
int Session::patchID {0}; 
bool Session::playing {false};


void Session::Initialize()
{
    //loadPatch(getLastPatchID())
    patchID = 100;
    playing = false;
    Serial.println("Initializing");
}

void Session::Play()
{
    Session::playing = true;
    Serial.println("playing patch.");
}

void Session::Stop()
{
    Session::playing = false;
    Serial.println("stopping patch.");
}

void Session::Status()
{
    Serial.println(patchID);
    Serial.println(playing);
    digitalWrite(LED_BUILTIN, HIGH);
}
