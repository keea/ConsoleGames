/*
* 게임 클리어에 대한 컨트롤 담당
* @file		GameClearCtrl.h
* @date     Sat Dec 16 17:07:44 2017
* @author   keea
*/

#pragma once
#include "Controller.h"
class GameClearCtrl : public Controller
{
private:
	int state = KEY_MENU_STATE::MENU1;
public:
	virtual void CmdUp();
	virtual void CmdDown();
	int GetState();
	void CmdSelect();
};

