#ifndef _BULLET_H_
#define _BULLET_H_

#include "Item.h"

class Bullet : public Item
{
public:
	Bullet();
	Bullet(int startX, int startY);
	virtual bool Update(UpdateStep step);
	void Fire(int x, int y, bool isMovingToLeft);

private:
	const int BULLET_SPEED = 3;
	const int BULLET_WIDTH = 3;
	const int SPARKS_ANIM_SPEED = 3;

	// the frame id to play sparks when the bullet hit the wall
	unsigned char SparksAnimFrameId;
	
	void GetStartAndEndX(unsigned char &startX, unsigned char &endX);
	void DrawBulletRay(unsigned char color);
	bool ImpactBulletFound();
};

#endif