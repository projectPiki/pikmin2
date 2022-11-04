#ifndef _JSYSTEM_JAI_JAIANIMESOUND_H
#define _JSYSTEM_JAI_JAIANIMESOUND_H

#include "JSystem/JAI/JAInter/Object.h"
#include "JSystem/JAI/JAInter.h"

struct JAIBasic;

/**
 * @fabricated
 * @size{0x20}
 */
struct JAIAnimeSoundData_0xC {
	f32 _00;      // _00
	u8 _04[0x1C]; // _04 - unknown
};

struct JAIAnimeSoundData {
	u16 _00; // _00
	u32 : 0;
	u8 _04[8];                  // _04 - unknown
	JAIAnimeSoundData_0xC* _0C; // _0C
	u8 _10[8];                  // _10 - unknown
	u8 _18;                     // _18
};

struct JAIAnimeFrameSoundData;

struct JAIAnimeSound : public JAInter::Object {
	JAIAnimeSound(Vec*, JKRHeap*, unsigned char);

	virtual ~JAIAnimeSound() { }                                                 // _08 (weak)
	virtual void handleStop(u8, u32);                                            // _34
	virtual void playActorAnimSound(JAInter::Actor*, float, u8);                 // _3C
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*, u8);           // _40
	virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*, float); // _44

	void initActorAnimSound(JAIAnimeSoundData*, unsigned long, float, float);
	int checkLoopStartCount(float);
	void checkLoopEndCount(float);
	void setAnimSoundActor(JAInter::Actor*, float, float, unsigned char);

	// Unused/inlined:
	void initActorAnimSound(JAIAnimeSoundData*, JAInter::Actor, unsigned long, float, float);
	void setLoopStartFrame(float);
	void setLoopEndFrame(float);
	void setLoopFrame(float, float);
	void setAnimSound(float, float, unsigned char);
	void setAnimSound(JAIBasic*, float, float, unsigned char);
	void setAnimObjectSound(float, float, unsigned char);
	void setAnimSoundVec(Vec*, float, float, unsigned long, unsigned char);
	void setAnimSoundVec(JAIBasic*, Vec*, float, float, unsigned long, unsigned char);

	// _00 VTBL
	u8* _40;                        // _40
	void** _44;                     // _44
	u32 _48;                        // _48
	u32 _4C;                        // _4C
	u32 _50;                        // _50
	u32 _54;                        // _54
	u8 _58;                         // _58
	u32 _5C;                        // _5C
	u8 _60[8];                      // _60
	u32 _68;                        // _68
	int _6C;                        // _6C
	float _70;                      // _70
	float _74;                      // _74
	JAIAnimeSoundData* m_soundData; // _78
};

#endif
