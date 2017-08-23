#pragma once
#include "player.h"
#include "Settings.h"
#include "field.h"
class interf
{
public:
	interf();
	~interf();
	void StartGame();
	bool isKeyPressed(player &Player);

};

