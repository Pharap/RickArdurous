/**
* Rick Ardurous is a freeware Game for Arduboy platform written by Alban Nanty
*/

#include "RickArdurous.h"
#include "Input.h"
#include "MapManager.h"
#include "HUD.h"

// instance of the arduboy class
CustomArduboy arduboy;

void setup()
{
	// init the debug serial communication
//	Serial.begin(9600);
//	while(!Serial);
  
	arduboy.beginNoLogo();
//	arduboy.begin();
	arduboy.clear();
	
	// call init function of some managers
	MapManager::Init();
}

void loop()
{
	// early exit if the frame is not ready
	if (!arduboy.nextFrame())
		return;

	// clear the screen
	arduboy.clear();

	// update the input
	Input::Update();
	
	// update the managers
	MapManager::Update();
	
	// update the HUD
	HUD::Update();
	
	// draw the frame buffer
	arduboy.display();
}
