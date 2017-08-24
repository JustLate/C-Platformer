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
	if (posY >= fieldW-1)
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
	if (posX <=0)
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
	if (posX >= fieldH-1)
		return false;
	else
	{
		lastY = posY;
		lastX = posX;
		posX++;
	}
}

int player::getPosX()
{
	return posX;
}

int player::getPosY()
{
	return posY;
}

int player::getlastX()
{
	return lastX;
}

int player::getlastY()
{
	return lastY;
}

int player::getHP()
{
	return HP;
}

