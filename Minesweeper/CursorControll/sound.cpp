#include "sound.h"

#include <stdio.h>
#include <process.h>



static FMOD::System     *g_system;

void ERRCHECK(FMOD_RESULT result)
{
	if (result != FMOD_OK)
	{
		printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
		exit(-1);
	}
}

int CreateSoundSystem()
{

	FMOD_RESULT       result;
	unsigned int      version;

	result = FMOD::System_Create(&g_system);
	ERRCHECK(result);

	result = g_system->getVersion(&version);
	ERRCHECK(result);

	if (version < FMOD_VERSION)
	{
		printf("Error!  You are using an old version of FMOD %08x.  This program requires %08x\n", version, FMOD_VERSION);
		return -1;
	}

	result = g_system->init(32, FMOD_INIT_NORMAL, 0);
	ERRCHECK(result);

	return 0;
}


FMOD::Sound *LoadSound(char *sound, bool isLoop)
{
	FMOD::Sound      *pSound;

	FMOD_RESULT result = g_system->createSound(sound, FMOD_HARDWARE, 0, &pSound);
	ERRCHECK(result);

	if (isLoop == false)
		pSound->setMode(FMOD_LOOP_OFF);
	else
		pSound->setMode(FMOD_LOOP_NORMAL);
	//pSound->setLoopCount(1);

	return pSound;
}

void Play(FMOD::Sound *pSound)
{
	FMOD_RESULT result;
	FMOD::Channel    *channel = 0;

	result = g_system->playSound(FMOD_CHANNEL_FREE, pSound, false, &channel);
	ERRCHECK(result);
}

void Update()
{
	g_system->update();
}

void ReleaseSound(FMOD::Sound *pSound)
{
	if (pSound)
	{
		FMOD_RESULT result = pSound->release();
		ERRCHECK(result);
	}
}

void DestroySoundSystem()
{
	if (g_system)
	{
		FMOD_RESULT result;

		result = g_system->close();
		ERRCHECK(result);

		result = g_system->release();
		ERRCHECK(result);
	}
}