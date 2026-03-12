#include <iostream>
#include<conio.h>

#define COL		10
#define ROW		10


using namespace std;

//int Temp;
//Temp = _getch();

char Map[ROW][COL];

void init(int x, int y);
void Move(int* x, int* y);
void Render();

int main()
{
	int PlayerX = 1;
	int PlayerY = 1;
	// 맵 생성
	init(PlayerX, PlayerY);
	for (;;)
	{
		// 이동 로직
		Move(&PlayerY, &PlayerX);
		// 렌더
		Render();
	}
}

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

void Move(int* x, int* y)
{
	int Temp;
	Temp = _getch();

	if (Temp == 'w' || Temp == 'W') //w키
	{
		if (Map[*y - 1][*x] == ' ')
		{
			Map[*y][*x] = ' ';
			Map[*y - 1][*x] = 'P';
			*y -= 1;
		}
	}
	if (Temp == 's' || Temp == 'S') //s키
	{
		if (Map[*y + 1][*x] == ' ')
		{
			Map[*y][*x] = ' ';
			Map[*y + 1][*x] = 'P';
			*y += 1;
		}
	}
	if (Temp == 'a' || Temp == 'A') //a키
	{
		if (Map[*y][*x - 1] == ' ')
		{
			Map[*y][*x] = ' ';
			Map[*y][*x - 1] = 'P';
			*x -= 1;
		}
	}
	if (Temp == 'd' || Temp == 'D') //d키
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