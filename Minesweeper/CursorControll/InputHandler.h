/*
*
* @file		InputHandler.h
* @date     Tue Nov 21 08:44:20 2017
* @author   keea
*/

#pragma once

#include "Command.h"


struct InputHandler
{
private:
	Command * buttonUp;
	Command * buttonDown;
	Command * buttonRight;
	Command * buttonLeft;
	Command * buttonEnter;
	Command * buttonItem;
public:
	InputHandler();
	Command * handlerInput();
	~InputHandler();
};

