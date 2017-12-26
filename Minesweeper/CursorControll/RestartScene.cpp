/*
* 다시 시작
* @file		RestartScene.cpp
* @date     Mon Nov 20 17:54:05 2017
* @author   keea
*/

#include "RestartScene.h"
#include "Data.h"
#include "InputHandler.h"
#include "RestartCtrl.h"

int RestartScene::Update()
{
	view.Init();

	InputHandler inputHandler;
	RestartCtrl ctrl;

	while (ctrl.GetIsNotEnd())
	{
		Command * command = inputHandler.handlerInput();
		if (command != NULL)
			command->execute(&ctrl);

		view.SetKey(ctrl.GetState());
		view.Display();
	}

	view.DeleteDisplay();
	return ctrl.GetNextState();
}
