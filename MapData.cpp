﻿/*
 * This is a generated file, use the Editor to modify it.
 */

#include "MapData.h"
#include "SpriteData.h"
#include "MapManager.h"
#include "ArrowLauncher.h"
#include "Spike.h"
#include "Statuette.h"
#include "Dynamite.h"
#include "DynamiteCrate.h"
#include "Graal.h"
#include "BulletCrate.h"
#include "Enemy.h"
#include "DestroyableBlock.h"
#include "Stalactite.h"
#include "Stalagmite.h"
#include "Progress.h"
#include <avr/pgmspace.h>

#define ID(id1,id2) ((id1<< 4) | id2)

const unsigned char MapManager::Level[] PROGMEM = {
	ID(3,2),ID(1,2),ID(1,3),ID(1,3),ID(1,2),ID(1,2),ID(3,1),ID(2,2),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),
	ID(1,1),ID(4,10),ID(15,1),ID(10,10),ID(10,15),ID(1,10),ID(15,1),ID(4,4),ID(15,1),ID(4,1),ID(5,15),ID(14,5),
	ID(2,4),ID(15,13),ID(10,0),ID(15,14),ID(5,0),
	ID(10,15),ID(15,0),ID(15,14),ID(5,0),
	ID(15,15),ID(15,1),ID(0,15),ID(14,5),
	ID(15,14),ID(4,3),ID(5,15),ID(14,5),
	ID(13,15),ID(11,4),ID(2,1),ID(2,5),ID(15,15),
	ID(5,5),ID(4,15),ID(15,15),ID(14,0),
	ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(0,15),ID(14,5),
	ID(5,15),ID(15,0),ID(15,14),ID(5,0),
	ID(5,15),ID(13,11),ID(15,15),ID(15,1),ID(5,0),
	ID(5,15),ID(4,5),ID(5,12),ID(15,6),ID(11,15),ID(15,15),ID(1,5),
	ID(5,15),ID(6,11),ID(15,6),ID(11,15),ID(3,4),ID(3,4),ID(15,10),ID(5,0),
	ID(6,13),ID(15,5),ID(11,15),ID(6,11),ID(15,2),ID(4,2),ID(1,2),ID(15,10),ID(5,0),
	ID(5,15),ID(6,11),ID(15,6),ID(11,15),ID(1,4),ID(1,1),ID(2,2),ID(15,10),ID(5,0),
	ID(5,5),ID(6,5),ID(5,6),ID(5,5),ID(6,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),ID(5,5),
};

const unsigned int MapManager::LevelLineIndex[] PROGMEM = {0,16,28,33,37,41,45,50,54,64,68,73,80,88,97,106,122,};

const unsigned char MapManager::LEVEL_WIDTH = 32;
const unsigned char MapManager::LEVEL_HEIGHT = 16;

Graal graal1;
Stalagmite stalagmite1;
Stalagmite stalagmite2;

void InitScreen0(bool shouldRespawn)
{
	// Add a checkpoint if we need to

	// init all the item of the current puzzle screen
	stalagmite1.Init(13, 48, Item::PropertyFlags::NONE, shouldRespawn);
	stalagmite2.Init(117, 32, Item::PropertyFlags::NONE, shouldRespawn);
}

void InitScreen1(bool shouldRespawn)
{
	// Add a checkpoint if we need to
	MapManager::MemorizeCheckPoint(40, 106);

	// init all the item of the current puzzle screen
}

void InitScreen2(bool shouldRespawn)
{
	// Add a checkpoint if we need to

	// init all the item of the current puzzle screen
	graal1.Init(158, 87, Item::PropertyFlags::NONE, shouldRespawn);
}

// The array that contains all the items
ItemInitFunction MapManager::ItemInitFunctions[] = {
	&InitScreen0, &InitScreen1, &InitScreen2, 
};

// compute the number of items
const unsigned char MapManager::PUZZLE_SCREEN_COUNT = sizeof(MapManager::ItemInitFunctions) / sizeof(ItemInitFunction);

// this function is to init the progress of the living items in eeprom
void MapManager::InitProgress()
{
	Progress::InitItem(&graal1, 0);
	Progress::InitItem(&stalagmite1, 1);
	Progress::InitItem(&stalagmite2, 2);
}
