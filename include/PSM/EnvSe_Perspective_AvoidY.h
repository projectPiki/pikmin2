#ifndef _PSM_ENVSE_PERSPECTIVE_AVOIDY_H
#define _PSM_ENVSE_PERSPECTIVE_AVOIDY_H

#include "PSGame/EnvSe.h"

namespace PSM {
struct EnvSe_Perspective_AvoidY : public PSGame::EnvSe_Perspective {
	virtual void play();       // _04
	virtual u32 getCastType(); // _08

	float _48; // _48
	float _4C; // _4C
	u8 _50[4]; // _50
	float _54; // _54
	float _58; // _58
	float _5C; // _5C
};
} // namespace PSM

#endif
