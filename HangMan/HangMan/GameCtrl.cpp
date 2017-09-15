/*
* ���� ��Ʈ���� ���.
* @file		GameCtrl.cpp
* @date     Fri Sep 15 16:19:37 2017
* @author   keea
*/

#include <iostream>
#include "GameCtrl.h"

//���� �ʱ�ȭ
void GameCtrl::Init() {
	
	Hangdis.Init();
	
}

void GameCtrl::Update() {
	char q = 1;
	char alpha;
	int worngNum = 0; //Ʋ����ȣ Ƚ��
	while (q != 0)
	{
		DefaultDisplay();
		alpha = inputCtrl.GetAlpha();
		int isNotHang = hangCtrl.IsNotHang(alpha);

		if (isNotHang) {
			//hangCtrl.ShowPlayInput();
			if (hangCtrl.IsClear()) {
				std::cout << "���� Ŭ���� �߽��ϴ�." << std::endl;
				q = 0;
			}
		}
		else {
			std::cout << "Ʋ�Ⱦ��." << std::endl;
			Hangdis.SetNum(worngNum);
			worngNum++;
			if (worngNum >= 7) { //�����ϱ�. �ʹ� �ϵ��ڵ���.
				std::cout << "���ӿ���" << std::endl;
				Hangdis.ShowDanDo();
				Hangdis.ShowMans();

				q = 0;
			}
		}
	}
}

void GameCtrl::DefaultDisplay() {
	inputCtrl.ClearDisplay();
	Hangdis.gotoxy(0, 2);
	hangCtrl.ShowPlayInput();
	Hangdis.ShowDanDo();
	Hangdis.ShowMans();
	Hangdis.gotoxy(0, 0);
}

