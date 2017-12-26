/*
* 리스타트에 대한 컨트롤 담당
* @file		RestartCtrl.h
* @date     Fri Dec 15 16:26:18 2017
* @author   keea
*/

#pragma once
#include "Controller.h"
struct RestartCtrl : public Controller
{
private:
	int state = KEY_MENU_STATE::MENU1;
public:
	virtual void CmdUp();
	virtual void CmdDown();
	int GetState();
	void CmdSelect();
};

