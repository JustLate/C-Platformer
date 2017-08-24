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

void field::PlayerSetpos(player &Player)
{
	map[Player.getPosY()][Player.getPosX()] = Player.FIELD_PLAYER;
	map[Player.getlastY()][Player.getlastX()] = FIELD_FLOOR;
}

bool field::GameOver()
{
	return false;
}

void field::ReloadField(player &Player)
{
	system("cls");
	PlayerSetpos(Player);
	PrintField();

	cout << endl;
	cout << Player.getPosX() << " : " << Player.getPosY() << endl;
	
}
