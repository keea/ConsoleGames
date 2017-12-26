/*
* 화살표 키 아래를 눌렸을 때 동작
* @file		DownCommand.cpp
* @date     Tue Nov 21 13:15:32 2017
* @author   keea
*/

#include "DownCommand.h"

void DownCommand::execute(Controller * ctrl)
{
	ctrl->CmdDown();
}
