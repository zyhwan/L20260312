#include<iostream>

using namespace std;

// 주머니에 45개의 공이 있고 그 중 6개를 랜덤하게 뽑는 프로그램.

void init(int* Balls, int TotalBallCount)
{
	for (int i = 0; i < TotalBallCount; ++i)
	{
		Balls[i] = i + 1;
	}
}

void Shuffle(int* Balls, int TotalBallCount)
{
	srand((unsigned int)time(nullptr));

	for (int i = 0; i < TotalBallCount * 10; ++i)
	{
		int FirstIndex = rand() % TotalBallCount;
		int SecondIndex = rand() % TotalBallCount;

		int Temp = Balls[FirstIndex];
		Balls[FirstIndex] = Balls[SecondIndex];
		Balls[SecondIndex] = Temp;
	}
}

void RandomChose(int* Balls, int TotalBallCount)
{
	for (int i = 0; i < TotalBallCount; ++i)
	{
		cout << Balls[i] << " ";
	}
}

int main()
{
	int TotalBallCount = 45;
	int ChoseBallCount = 6;
	int* Balls = new int[TotalBallCount];

	init(Balls, TotalBallCount);
	Shuffle(Balls, TotalBallCount);
	RandomChose(Balls, ChoseBallCount);

	delete[] Balls;
	Balls = nullptr;
}