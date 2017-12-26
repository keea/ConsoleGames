/*
* 사운드 관리
* @file		SoundManager.h
* @date     Sat Dec 16 15:47:27 2017
* @author   keea
*/

#pragma once
#include "sound.h"

struct SoundManager
{
private:
	SoundManager();
	~SoundManager();

	static SoundManager * instance;
	FMOD::Sound * bgm;
	FMOD::Sound * boomSound;
	FMOD::Sound * clear;

public:
	static SoundManager * GetInstance();
	static void PurgeInstance();
	void PlayBgm();
	void PlayBoomSound();
	void PlayClear();
};

