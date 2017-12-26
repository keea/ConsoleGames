/*
* 화살표 키 아래를 눌렸을 때 동작
* @file		DownCommand.h
* @date     Tue Nov 21 13:14:10 2017
* @author   keea
*/

#pragma once
#include "Command.h"
struct DownCommand : public Command
{
public:
	virtual void execute(Controller * ctrl);
};

