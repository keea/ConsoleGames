/*
* 게임 동작 처리
* @file		GameCtrl.h
* @date     Tue Nov 28 16:54:17 2017
* @author   keea
*/

#pragma once

#include "GameSceneView.h"
#include "Controller.h"
#include "PlayerCtrl.h"
#include "MapCtrl.h"
#include "GamePlayData.h"


struct GameCtrl : public Controller
{
private:
	PlayerCtrl * playerCtrl;
	MapCtrl * mapCtrl;
	GameSceneView view;
	GamePlayData data;
public:
	void Init();
	virtual void CmdUp();
	virtual void CmdDown();
	virtual void CmdLeft();
	virtual void CmdRight();
	virtual void CmdSelect();
	virtual void CmdItem();
	GameSceneView * GetView();
};

