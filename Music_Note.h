#pragma once
#include "stdafx.h"
class Music_Note
{
public:

	Music_Note(double f) : frequency(f)
	{
	}

	~Music_Note()
	{
	}

	void play()
	{
		Beep(frequency, duration);
	}
private:
	DWORD frequency;
	const DWORD duration = 200UL;//temp const
};

Music_Note DO{ 261.63 }, RE{ 293.66 }, MI{ 329.63 }, FA{ 349.23 }, SO{ 392 }, LA{ 440 }, TI{ 493.88 }, DO1{ 523.25 }, RE1{ 587.33 }, MI1{ 659.26 };