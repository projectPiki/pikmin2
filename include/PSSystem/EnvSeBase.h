#ifndef _PSSYSTEM_ENVSEBASE_H
#define _PSSYSTEM_ENVSEBASE_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "SoundID.h"

struct JAISound;

namespace PSSystem {

struct EnvSeBase : JSULink<EnvSeBase> {
	EnvSeBase(unsigned long, float);

	virtual void exec();                    // _08
	virtual void play();                    // _0C
	virtual u32 getCastType();              // _10 (weak)
	virtual void setPanAndDolby(JAISound*); // _14 (weak)

	// _00 - _10: JSULink
	// VTBL _10
	float _14;         // _14
	u32 _18;           // _18
	int _1C;           // _1C
	u8 _20;            // _20
	SoundID m_soundID; // _24
	float _28;         // _28
	float _2C;         // _2C
	float _30;         // _30
	JAISound* m_sound; // _34
	u8 _38;            // _38
	u8 _39;            // _39
	u8 _3A;            // _3A
};
} // namespace PSSystem

#endif
