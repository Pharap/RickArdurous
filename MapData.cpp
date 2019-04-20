/*
 * This file contains all the level data.
*/

#include "MapData.h"
#include "SpriteData.h"
#include "Spike.h"
#include "Statuette.h"
#include "Dynamite.h"
#include "DynamiteCrate.h"
#include "BulletCrate.h"
#include "Mummy.h"
#include <avr/pgmspace.h>

const unsigned char MapManager::Level[LEVEL_SIZE_Y][LEVEL_SIZE_X] PROGMEM = {
	{ 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 1, 2, 3, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ 1, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 2, 3, 0, 1, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ 0, 2, 3, 29, 31, 29, 255, 255, 255, 255, 255, 255, 255, 1, 2, 3, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ 0, 255, 255, 255, 30, 29, 29, 255, 255, 255, 255, 255, 255, 2, 3, 1, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ 1, 255, 255, 255, 30, 255, 255, 255, 255, 255, 29, 29, 29, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ 2, 255, 255, 29, 31, 29, 255, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ SpriteData::BLOCK_8_8_SPLIT, 30, 255, 255, 30, 255, 255, 255, 255, 255, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ SpriteData::BLOCK_16_8_LEFT, 30, 29, SpriteData::BLOCK_16_8_RIGHT, SpriteData::BLOCK_16_8_LEFT, SpriteData::BLOCK_16_8_RIGHT, 255, 255, SpriteData::BLOCK_16_8_LEFT, SpriteData::BLOCK_16_8_RIGHT, SpriteData::BLOCK_16_8_LEFT, SpriteData::BLOCK_16_8_RIGHT, SpriteData::BLOCK_16_8_LEFT, SpriteData::BLOCK_16_8_RIGHT, SpriteData::BLOCK_16_8_LEFT, SpriteData::BLOCK_16_8_RIGHT, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 255, 255, 255, 255, 0,},
	{ 0, 30, 255, 255, 255, 0, 255, 255, 0, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 255, 255, 255, 255, 0,},
	{ 0, 30, 255, 255, 255, 0, 255, 255, 0, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 29, 31, 29, 0,},
	{ 0, 30, 255, 255, 255, 0, 255, 255, 0, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 255, 30, 255, 0,},
	{ 0, 30, 255, 30, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 30, 255, 0,},
	{ 0, 0, 0, 30, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 30, 255, 0,},
	{ 0, 255, 255, 30, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0,},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
};

// below is the instances of all the Items
Spike	sp1(116,80, Item::PropertyFlags::SPECIAL | Item::PropertyFlags::MIRROR_X);
Spike	sp2(100,80, Item::PropertyFlags::MIRROR_X);
Spike	sp3(100,90, Item::PropertyFlags::NONE);
Statuette	st(40,25);
DynamiteCrate	dc(140, 50);
BulletCrate		bc(200, 40);
Mummy		mum(80, 40);

// The array that contains all the items
Item * MapManager::Items[] = {
	&sp1, &sp2, &sp3, &st, &dc, &bc, &mum,
	};

// compute the number of items
const unsigned int MapManager::ITEM_COUNT = sizeof(MapManager::Items) >> 1;
