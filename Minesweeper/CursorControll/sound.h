#pragma once

#include "./fmod/inc/fmod.hpp"
#include "./fmod/inc/fmod_errors.h"

int CreateSoundSystem();
FMOD::Sound *LoadSound(char *sound, bool isLoop);
void Play(FMOD::Sound *pSound);
void Update();
void ReleaseSound(FMOD::Sound *pSound);
void DestroySoundSystem();