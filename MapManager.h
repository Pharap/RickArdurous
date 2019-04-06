#ifndef _MAP_MANAGER_H_
#define _MAP_MANAGER_H_

class Item;

namespace MapManager
{
	void Init();
	void Update();
	
	// function to add or remove the items currently updated
	void AddItem(Item * item);
	void RemoveItem(Item * item);
	
	// function to get local coordinates
	int GetXOnScreen(int worldX);
	int GetYOnScreen(int worldY);
	
	// Check if there's a solid sprite (static collision) at the specified world coodinates
	bool IsThereStaticCollisionAt(int xWorld, int yWorld);
}

#endif