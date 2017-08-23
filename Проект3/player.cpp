#include "player.h"



player::player()
{
	lastX = 5;
	lastY = 5;
	posX = 5;
	posY = 5;
}


player::~player()
{
}

bool player::moveDown()
{
	if (posY >= fieldW)
		return false;
	else
	{
		lastY = posY;
		lastX = posX;
		posY++;
	}
}

bool player::moveUp()
{
	if (posY <=0)
		return false;
	else
	{
		lastY = posY;
		lastX = posX;
		posY--;
	}
}

bool player::moveLeft()
{
	if (posY <=0)
		return false;
	else
	{
		lastY = posY;
		lastX = posX;
		posX--;
	}
}

bool player::moveRight()
{
	if (posY >= fieldH)
		return false;
	else
	{
		lastY = posY;
		lastX = posX;
		posX++;
	}
}
