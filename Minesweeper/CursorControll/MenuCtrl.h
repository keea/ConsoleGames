/*
* 메뉴에 대한 컨트롤 담당
* @file		MenuCtrl.h
* @date     Tue Nov 21 12:48:59 2017
* @author   keea
*/

#pragma once
#include "Controller.h"

class MenuCtrl : public Controller
{
private:
	int state = KEY_MENU_STATE::MENU1;
public:
	virtual void CmdUp();
	virtual void CmdDown();
	int GetState();
	void CmdSelect();
};

