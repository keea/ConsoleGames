/*
* 화살표 키 오른쪽을 눌렸을 때 동작
* @file		RightCommand.cpp
* @date     Mon Nov 27 18:12:02 2017
* @author   keea
*/

#include "RightCommand.h"

void RightCommand::execute(Controller * ctrl)
{
	ctrl->CmdRight();
}
