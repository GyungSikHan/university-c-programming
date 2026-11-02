// ConsoleApplication5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include"game.h"

int main()
{
	C_GAME cGame{};

	cGame.add(1);
	cGame.add(1);
	cGame.add(3);
	cGame.add(1);
	cGame.add(6);
	cGame.add(5);

	cGame.print();
}
