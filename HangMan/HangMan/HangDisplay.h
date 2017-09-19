/*
* 행맨의 모습을 보여준다.
* @file		HangDisplay.h
* @date     Fri Sep 15 19:13:38 2017
* @author   keea
*/

#ifndef __HANGDISPLAY_H__
#define __HANGDISPLAY_H__

#include "Man.h"

enum
{
	MAN_SIZE = 7,
};

class HangDisplay {
private:
	Man dyingMan[MAN_SIZE];
	int cnt = -1;

	void ShowMan(int idx);
public:
	void Init();
	void ShowDanDo();
	void ShowMans(int idx);
	void gotoxy(int x, int y);
	void ShowMans();
	void SetNum(int num);
	int GetMenSize();
};

#endif // !__HANGDISPLAY_H__