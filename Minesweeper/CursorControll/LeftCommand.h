/*
* ȭ��ǥ Ű ������ ������ �� ����
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

