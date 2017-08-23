#pragma once
#include "player.h"
class field
{
public:
	field();
	~field();
	char map[fieldW][fieldH];
	void PrintField();
	void PlayerSetpos(const player &Player);
	bool GameOver();
	void ReloadField(const player &Player);
};

