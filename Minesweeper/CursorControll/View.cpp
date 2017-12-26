/*
* 뷰를 담당한다.
* @file		View.cpp
* @date     Tue Nov 21 10:45:20 2017
* @author   keea
*/

#include "View.h"


void View::Init()
{
	dBuffer.CreateDoubleBuffer();
	dBuffer.SetCursor(0);
}

void View::DeleteDisplay()
{
	dBuffer.DeleteBuffer();
}

void View::DisplayDevInfo()
{
	dBuffer.DrawString(67, 1, "@author keea");
	dBuffer.DrawString(55, 0, "https://github.com/keea/");
}

DoubleBuffer View::GetBuffer() {
	return dBuffer;
}