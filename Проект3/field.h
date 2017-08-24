#pragma once
#include "player.h"
class field
{
public:
	field();
	~field();
	const char FIELD_FLOOR = '0';
	char map[fieldW][fieldH];
	void PrintField();
	void PlayerSetpos(player &Player);
	bool GameOver();
	void ReloadField(player &Player);
};

