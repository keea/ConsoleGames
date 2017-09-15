/*
* 행맨컨트롤 담당
* @file		HangManCtrl.h
* @date     Fri Sep 15 16:39:43 2017
* @author   keea
*/
#ifndef __HANGCTRL_H__
#define __HANGCTRL_H__


#include "HangData.h"

class HangCtrl : HangData{
private:
public:
	HangCtrl();
	~HangCtrl();
	void ShowPlayInput();
	bool IsClear();
	bool IsNotHang(char ch);
};

#endif // !__HANGCTRL_H__