// my_class.cpp
#include <Arduino.h>
#include "session.h" // header in local directory

using namespace Stoichonome;

// Static definitions
int Session::patchID {0}; 
bool Session::playing {false};


void Session::Initialize()
{
    Session::LoadPatch(Session::GetLastPatchID());
    playing = false;

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

void Session::PrintStatus()
{
    Serial.println(patchID);
    Serial.println(playing);
}

void Session::LoadPatch(int p)
{
    patchID = p;

}

int Session::GetLastPatchID()
{
    return 100;
}