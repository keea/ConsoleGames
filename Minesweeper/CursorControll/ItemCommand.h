/*
* 아이템 키 눌렸을 때 동작
* @file		ItemCommand.h
* @date     Sun Dec 17 17:27:49 2017
* @author   keea
*/

#pragma once
#include "Command.h"
struct ItemCommand : public Command
{
public:
	virtual void execute(Controller * ctrl);
};

