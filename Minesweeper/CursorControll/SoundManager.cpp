/*
* 사운드 관리
* @file		SoundManager.cpp
* @date     Sat Dec 16 15:55:52 2017
* @author   keea
*/

#include "SoundManager.h"

SoundManager * SoundManager::instance = nullptr;

SoundManager::SoundManager() 
{
	CreateSoundSystem();
	bgm = LoadSound("Do_Do_Do.mp3", true);
	boomSound = LoadSound("fire.mp3", false);
	clear = LoadSound("clear.wav", false);
}

SoundManager::~SoundManager()
{
	ReleaseSound(bgm);
	ReleaseSound(boomSound);
	ReleaseSound(clear);
	DestroySoundSystem();
}

SoundManager * SoundManager::GetInstance()
{
	if (instance == nullptr) {
		instance = new SoundManager();
	}
	return instance;
}

void SoundManager::PurgeInstance()
{
	delete instance;
	instance = nullptr;
}

void SoundManager::PlayBgm()
{
	Play(bgm);
}

void SoundManager::PlayBoomSound()
{
	Play(boomSound);
}

void SoundManager::PlayClear()
{
	Play(clear);
}


