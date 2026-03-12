#include "Engine.h"

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