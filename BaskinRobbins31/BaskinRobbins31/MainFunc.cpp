/*
* 메인함수
* @file		MainFunc.cpp
* @date     Wed Sep 20 16:57:34 2017
* @author   keea
*/

#include <iostream>
#include <time.h>
#include <random>
#include <conio.h>


//숫자를 1개에서 3개까지 말하고 상대에게 넘김.
//진행하다가 마지막 숫자 31을 말하면 짐.
//컴퓨터가 먼저 진행

bool isLose(int num);

void main() {
	srand(time(NULL));

	bool isPlayerTurn = false; //플레이어 턴

	std::cout << "컴퓨터 부터 시작합니다." << std::endl;
	std::cout << "G는 진행, N은 패스" << std::endl;

	int num = 0;
	while (num <= 30)
	{
		//컴퓨터 턴
		if (!isPlayerTurn) 
		{
			std::cout << std::endl;
			int loopNum = rand() % 3 + 1;
			while (loopNum > 0)
			{
				num += 1;
				std::cout << "컴퓨터(" << loopNum << ") : " << num << std::endl;

				if (isLose(num)) {
					num = 31;
					break;
				}

				loopNum -= 1;

				if (loopNum == 0)
					isPlayerTurn = !isPlayerTurn;
			}
		}
		else 
		{
			std::cout << std::endl;
			int loopNum = 3;
			while (loopNum > 0)
			{
				char c = getch();
				if (c == 'G') {
					num += 1;
					std::cout << "플레이어 : " << num << std::endl;
					
					if (isLose(num)) {
						num = 31;
						break;
					}
					loopNum -= 1;

					if (loopNum == 0)
						isPlayerTurn = !isPlayerTurn;
				}
				else if (c == 'N') {
					isPlayerTurn = !isPlayerTurn;
					break;
				}
			}
		}
	}

	std::cout << std::endl;
	if (isPlayerTurn) {
		std::cout << "플레이어가 패배했습니다." << std::endl;
	}
	else {
		std::cout << "컴퓨터가 패배했습니다." << std::endl;
	}

	getch();
}

bool isLose(int num) {
	if (num == 31)
		return true;
	return false;
}