/*
* 아이템 키 눌렸을 때 동작
* @file		ItemCommand.cpp
* @date     Sun Dec 17 17:28:42 2017
* @author   keea
*/

#include "ItemCommand.h"

void ItemCommand::execute(Controller * ctrl)
{
	ctrl->CmdItem();
}
