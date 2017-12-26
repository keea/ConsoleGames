/*
* 화살표 키 왼쪽을 눌렸을 떄 동작
* @file		LeftCommand.h
* @date     Mon Nov 27 18:02:47 2017
* @author   keea
*/

#pragma once
#include "Command.h"
struct LeftCommand : public Command
{
public:
	virtual void execute(Controller * ctrl);
};

