#include "GameCtrl.h"
#include "PlayerView.h"
#include "MapView.h"
#include "PlayDataView.h"
#include "SoundManager.h"
void GameCtrl::Init()
{
	playerCtrl = new PlayerCtrl((MAP_WIDTH - 1) / 2, (MAP_HEIGHT - 1) / 2);
	mapCtrl = new MapCtrl();

	mapCtrl->CreateMap(playerCtrl->GetPosition().x, 
		playerCtrl->GetPosition().y);

	data.SetExistBoom(mapCtrl->GetMap()->BoomNum()); //맵 만들기 후 호출

	view.AddView(new PlayerView(playerCtrl->GetPlayer()));
	view.AddView(new MapView(mapCtrl->GetMap()));
	view.AddView(new PlayDataView(&data));
}

void GameCtrl::CmdSelect()
{
	if (!mapCtrl->IsBlockOpen(playerCtrl->GetPosition().x,
		playerCtrl->GetPosition().y)) //블록 오픈이 안되면
	{
		bool isEnd = mapCtrl->BlockOpen(playerCtrl->GetPosition().x,
			playerCtrl->GetPosition().y);

		if (isEnd)
		{
			SoundManager::GetInstance()->PlayBoomSound();
			SetNextState(STATE::RESTART_SCENE);
			SetEnd();
		}
		else 
		{
			data.SubtractBlock();
		}

		if (data.GetOaddmentBlock() == 0)
		{
			SetNextState(STATE::CLEAR_SCENE);
			SetEnd();
		}

	}
}

void GameCtrl::CmdItem()
{
	if (!mapCtrl->IsBlockOpen(playerCtrl->GetPosition().x,
		playerCtrl->GetPosition().y)) //블록 오픈이 안되면
	{
		bool isBoom = mapCtrl->BlockOpen(playerCtrl->GetPosition().x,
			playerCtrl->GetPosition().y);

		if (!isBoom) 
		{
			data.SubtractBlock();
			data.SubtractHp();
			if (data.GetHp() == 0)
			{
				SetNextState(STATE::RESTART_SCENE);
				SetEnd();
			}
		}

		if (data.GetOaddmentBlock() == 0)
		{
			SetNextState(STATE::CLEAR_SCENE);
			SetEnd();
		}
	}
}

GameSceneView * GameCtrl::GetView()
{
	return &view;
}


void GameCtrl::CmdUp()
{
	playerCtrl->Move(0, -1);
}

void GameCtrl::CmdDown()
{
	playerCtrl->Move(0, 1);
}

void GameCtrl::CmdLeft()
{
	playerCtrl->Move(-1, 0);
}

void GameCtrl::CmdRight()
{
	playerCtrl->Move(1, 0);
}

