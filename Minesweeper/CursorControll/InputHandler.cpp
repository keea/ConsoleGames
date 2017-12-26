/*
*
* @file		InputHandler.cpp
* @date     Tue Nov 21 08:49:30 2017
* @author   keea
*/

#include <conio.h>
#include "InputHandler.h"
#include "UpCommand.h"
#include "DownCommand.h"
#include "RightCommand.h"
#include "LeftCommand.h"
#include "EnterCommand.h"
#include "ItemCommand.h"
#include "Data.h"

InputHandler::InputHandler()
{
	buttonUp = new UpCommand;
	buttonDown = new DownCommand;
	buttonRight = new RightCommand;
	buttonLeft = new LeftCommand;
	buttonEnter = new EnterCommand;
	buttonItem = new ItemCommand;
}

Command * InputHandler::handlerInput()
{
	if (_kbhit())
	{
		char input = _getch();
		if (input == INPUT_KEY::ARROW_KEY)
			input = _getch();

		switch (input)
		{
		case INPUT_KEY::UP_KEY:
			return buttonUp;

		case INPUT_KEY::DOWN_KEY:
			return buttonDown;

		case INPUT_KEY::RIGHT_KEY:
			return buttonRight;

		case INPUT_KEY::LEFT_KEY:
			return buttonLeft;

		case INPUT_KEY::ENTER:
			return buttonEnter;

		case INPUT_KEY::ITEM_KEY:
			return buttonItem;

		default:
			break;
		}
	}
	return NULL;
}


InputHandler::~InputHandler()
{
	delete buttonUp;
	delete buttonDown;
	delete buttonRight;
	delete buttonLeft;
	delete buttonEnter;
	delete buttonItem;
}
