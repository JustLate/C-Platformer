#include "field.h"
#include <iostream>

using namespace std;



field::field()
{
	for (int i = 0; i < fieldW; i++)
		for (int j = 0; j < fieldH; j++)
			map[i][j] = '0';
}


field::~field()
{
}

void field::PrintField()
{
	for (int i = 0; i < fieldW; i++)
	{
		for (int j = 0; j < fieldH; j++)
			cout << map[i][j];
		cout << endl;
	}
}

void field::PlayerSetpos(const player &Player)
{
	map[Player.posY][Player.posX] = '*';
	map[Player.lastY][Player.lastX] = '0';
}

bool field::GameOver()
{
	return false;
}

void field::ReloadField(const player &Player)
{
	system("cls");
	PlayerSetpos(Player);
	PrintField();
	
}
