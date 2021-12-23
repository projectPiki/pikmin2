#ifndef _JSYSTEM_JAI_JAIANIMESOUND_H
#define _JSYSTEM_JAI_JAIANIMESOUND_H

#include "JAInter/Object.h"

struct JAIAnimeSoundData;
struct JAIAnimeFrameSoundData;

namespace JAInter {
struct Actor;
} // namespace JAInter

struct JAIAnimeSound : public JAInter::Object {
	virtual ~JAIAnimeSound();              // _00
	virtual void handleStop(uchar, ulong); // _2C
	virtual void playActorAnimSound(JAInter::Actor*, float,
	                                uchar); // _34
	virtual void startAnimSound(ulong, JAISound**, JAInter::Actor*,
	                            uchar); // _38
	virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*,
	                                 float); // _3C

	// _00 VTBL
	void* _40;                      // _40
	void* _44;                      // _44
	u8 _48[0x14];                   // _48
	ulong _5C;                      // _5C
	u8 _60[8];                      // _60
	uint _68;                       // _68
	int _6C;                        // _6C
	float _70;                      // _70
	float _74;                      // _74
	JAIAnimeSoundData* m_soundData; // _78
};

#endif
