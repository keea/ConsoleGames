/*
* 엔터키를 눌렸을 때 동작
* @file		EnterCommand.cpp
* @date     Tue Nov 28 13:50:17 2017
* @author   keea
*/

#include "EnterCommand.h"

void EnterCommand::execute(Controller * ctrl)
{
	ctrl->CmdSelect();
}
