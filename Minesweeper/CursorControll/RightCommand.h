/*
* 화살표 키 오른쪽를 눌렸을 떄 동작
* @file		RightCommand.h
* @date     Mon Nov 27 18:10:39 2017
* @author   keea
*/

#pragma once
#include "Command.h"
class RightCommand : public Command
{
public:
	void execute(Controller * ctrl);
};

