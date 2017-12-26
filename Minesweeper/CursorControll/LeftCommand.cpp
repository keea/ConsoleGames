/*
* 화살표 키 왼쪽을 눌렸을 때 동작
* @file		LeftCommand.cpp
* @date     Mon Nov 27 18:02:07 2017
* @author   keea
*/

#include "LeftCommand.h"

void LeftCommand::execute(Controller * ctrl)
{
	ctrl->CmdLeft();
}
