#pragma once
#include "Settings.h"
#include "bullet.h"
#include "field.h"
class player
{
public:
	player();
	~player();
	const char FIELD_PLAYER = '*';
	bool moveDown();
	bool moveUp();
	bool moveLeft();
	bool moveRight();
	int getPosX();
	int getPosY();
	int getlastX();
	int getlastY();
	int getHP();
private:
	int posX;
	int posY;
	int lastX;
	int lastY;
	int HP;
	
};

