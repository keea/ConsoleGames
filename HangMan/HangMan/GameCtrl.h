/*
* 게임 컨트롤을 담당
* @file		GameCtrl.h
* @date     Fri Sep 15 16:13:30 2017
* @author   keea
*/
#ifndef __GAMECTRL_H__
#define __GAMECTRL_H__


#include "InputCtrl.h"
#include "HangCtrl.h"
#include "HangDisplay.h"

class GameCtrl {
private:
	InputCtrl inputCtrl;
	HangCtrl hangCtrl;
	HangDisplay Hangdis;

public:
	void Init();
	void Update();
	void DefaultDisplay();
};

#endif // !__GAMECTRL_H__
