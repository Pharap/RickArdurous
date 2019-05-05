#ifndef _ENEMY_H_
#define _ENEMY_H_

#include "Item.h"

class Enemy : public Item
{
public:
	Enemy(int startX, int startY, unsigned char flags, bool isSkeleton);
	virtual bool Update(UpdateStep step);
	
private:
	static constexpr int WALL_COLLISION_DETECTION_DISTANCE = 1;
	static constexpr int MUMMY_HALF_TURN_ANIM_SPEED = 14;
	static constexpr int SKELETON_HALF_TURN_ANIM_SPEED = 5;
	static constexpr int SKELETON_WALK_ANIM_SPEED = 3;
	static constexpr int SCORPION_WALK_ANIM_SPEED = 1;
	static constexpr int DEATH_VELOCITY_X = 9;
	static constexpr int SKELETON_SENSOR = 4;

	enum State
	{
		WALK = 0,
		HALF_TURN,
		WAIT,
		FALL,
		DEATH,
		WAIT_AGAIN,
	};
	
	unsigned char AnimFrameId : 4;
	unsigned char AnimFrameCount : 4;
	unsigned char AnimState : 3;
	unsigned char IsSkeleton : 1;
	unsigned char FallAnimSpeedIndex : 4;
	
	inline bool IsScorpion() { return IsPropertySet(PropertyFlags::SPECIAL); }
	int GetYUnderFeet();
	unsigned char GetWidth();
	unsigned char GetHeight();
	bool IsThereAnyGroundCollisionAt(int yWorld);
	bool IsThereWallCollisionOrGap(bool shouldCheckGap);
	void MoveAccordingToOrientation();
	
	void InitWait();
	void InitWalk();
	void InitFall();
	void InitHalfTurn();
	void UpdateWalk();
	void UpdateHalfTurn();
	void UpdateWait();
	void UpdateFall();
	bool UpdateDeath();
	void UpdateSkeletonBehavior();
	int Draw(unsigned char color);
};

#endif