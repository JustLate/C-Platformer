#pragma once
#include "Settings.h"
class player
{
public:
	player();
	~player();
	int posX;
	int posY;
	int lastX;
	int lastY;
	bool moveDown();
	bool moveUp();
	bool moveLeft();
	bool moveRight();

};

