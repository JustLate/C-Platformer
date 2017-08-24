#include "interf.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;



interf::interf()
{
	setlocale(LC_ALL, "Russian");
	system("cls");
	int menu;
	cout << "1. Начать игру" << endl;
	cout << "2. Настройки" << endl;
	cout << "3. Выход" << endl;
	cin >> menu;
	switch (menu)
	{
		case 1: interf::StartGame();
		case 2: 
		case 3: interf::~interf();
	}

}


interf::~interf()
{
}

bool interf::isKeyPressed(player &Player, field &Field)
{
	int button;
	if (_kbhit())
	{
		button = _getch();
		switch (button)
		{
			case KEY_UP: //w
				Player.moveUp();
				return true;
				break;
			case KEY_DOWN: //s
				Player.moveDown();
				return true;
				break;
			case KEY_LEFT: //a
				Player.moveLeft();
				return true;
				break;
			case KEY_RIGHT: //d
				Player.moveRight();
				return true;
				break;
			case KEY_FIRE:
				Shooting();
				return true;
				break;
		}
	}
}

bool interf::Shooting()
{
	
}

void interf::StartGame()
{
	field *Field = new field;
	player *Player = new player;

	while (!Field->GameOver())
	{
		if (isKeyPressed(*Player, *Field))
			Field->ReloadField(*Player);
		
	}

}


