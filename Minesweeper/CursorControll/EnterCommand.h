/*
* ����Ű�� ������ �� ����
* @file		EnterCommand.h
* @date     Tue Nov 28 13:50:17 2017
* @author   keea
*/

#pragma once
#include "Command.h"

struct EnterCommand : public Command
{
public:
	virtual void execute(Controller * ctrl);
};

