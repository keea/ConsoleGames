/*
* 뷰 최상위 클래스
* @file		View.h
* @date     Tue Nov 21 10:37:27 2017
* @author   keea
*/

#pragma once

#include "DoubleBuffer.h"

class View
{
private:
	DoubleBuffer dBuffer;
public:
	void Init();
	virtual void Display() = 0;
	void DeleteDisplay();
	void DisplayDevInfo(); //개발 정보 출력
	DoubleBuffer GetBuffer();
};

