/*
* 게임 컨트롤을 담당.
* @file		GameCtrl.cpp
* @date     Fri Sep 15 16:19:37 2017
* @author   keea
*/

#include <iostream>
#include "GameCtrl.h"

//게임 초기화
void GameCtrl::Init() {
	Hangdis.Init();
}

void GameCtrl::Update() {
	char q = 1;
	char alpha;
	int worngNum = 0; //틀린번호 횟수
	while (q != 0)
	{
		DefaultDisplay();
		alpha = inputCtrl.GetAlpha();

		if (alpha == 27) {
			exit(0);
		}

		int isNotHang = hangCtrl.IsNotHang(alpha);

		if (isNotHang) {
			//hangCtrl.ShowPlayInput();
			if (hangCtrl.IsClear()) {
				std::cout << "게임 클리어 했습니다." << std::endl;
				hangCtrl.ShowPlayInput();
				q = 0;
			}
		}
		else {
			std::cout << "틀렸어요." << std::endl;
			Hangdis.SetNum(worngNum);
			worngNum++;
			if (worngNum >= Hangdis.GetMenSize()) {
				std::cout << "게임오버" << std::endl;
				Hangdis.ShowDanDo();
				Hangdis.ShowMans();

				q = 0;
			}
		}
	}
}

void GameCtrl::DefaultDisplay() {
	inputCtrl.ClearDisplay();
	Hangdis.gotoxy(0, 3);
	hangCtrl.ShowPlayInput();
	Hangdis.ShowDanDo();
	Hangdis.ShowMans();
	Hangdis.gotoxy(0, 0);
}