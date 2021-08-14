// my_class.cpp
#include <Arduino.h>
#include "session.h" // header in local directory
#include <EEPROM.h>
#include <stdlib.h>     /* srand, rand */


using namespace Stoichonome;

// Static definitions
int Session::patchID {0}; 
bool Session::playing {false};
int Session::randSeed {100};


void Session::Initialize()
{
    srand(randSeed);
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
    int address = 0;
    return EEPROM.read(address);
}

void Session::SetLastPatchID(int patchID)
{
    int address = 0;
 
    return EEPROM.write(address, patchID);
}

void Session::StorePatch()
{
    patchID = rand()%256;
    Session::SetLastPatchID(patchID);
}