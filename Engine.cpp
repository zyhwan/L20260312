#include "Engine.h"
#include <iostream>
#include <conio.h>

using namespace std;

char Map[ROW][COL];

void init(int x, int y)
{
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			Map[i][j] = '*';
		}
	}

	for (int i = 1; i < ROW - 1; ++i)
	{
		for (int j = 1; j < COL - 1; ++j)
		{
			Map[i][j] = ' ';
		}
	}

	Map[y][x] = 'P';

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			cout << Map[i][j];
		}
		cout << endl;
	}

}

void Move(int* y, int* x)
{
	int Temp;
	Temp = _getch();

	if (Temp == 'w' || Temp == 'W') //wŰ
	{
		if (Map[*y - 1][*x] == ' ')
		{
			Map[*y][*x] = ' ';
			Map[*y - 1][*x] = 'P';
			*y -= 1;
		}
	}
	if (Temp == 's' || Temp == 'S') //sŰ
	{
		if (Map[*y + 1][*x] == ' ')
		{
			Map[*y][*x] = ' ';
			Map[*y + 1][*x] = 'P';
			*y += 1;
		}
	}
	if (Temp == 'a' || Temp == 'A') //aŰ
	{
		if (Map[*y][*x - 1] == ' ')
		{
			Map[*y][*x] = ' ';
			Map[*y][*x - 1] = 'P';
			*x -= 1;
		}
	}
	if (Temp == 'd' || Temp == 'D') //dŰ
	{
		if (Map[*y][*x + 1] == ' ')
		{
			Map[*y][*x] = ' ';
			Map[*y][*x + 1] = 'P';
			*x += 1;
		}
	}

}

void Render()
{
	system("cls");

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			cout << Map[i][j];
		}
		cout << endl;
	}
}