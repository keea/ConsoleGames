/*
* 화살표 키 위를 눌렸을 때 동작
* @file		Upcommand.cpp
* @date     Mon Nov 20 19:48:52 2017
* @author   keea
*/

#include "UpCommand.h"


void UpCommand::execute(Controller * ctrl)
{
	ctrl->CmdUp();
}
