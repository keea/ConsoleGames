/*
* ������ Ű ������ �� ����
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

