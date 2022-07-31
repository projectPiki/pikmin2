#ifndef _JAIANIMESOUND_H
#define _JAIANIMESOUND_H

/*
    __vt__13JAIAnimeSound:
    .4byte 0
    .4byte 0
    .4byte __dt__13JAIAnimeSoundFv
    .4byte startSound__Q27JAInter6ObjectFUlUl
    .4byte startSound__Q27JAInter10ObjectBaseFUcUlUl
    .4byte startSound__Q27JAInter10ObjectBaseFPP8JAISoundUlUl
    .4byte stopAllSound__Q27JAInter10ObjectBaseFv
    .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
    .4byte enable__Q27JAInter10ObjectBaseFv
    .4byte disable__Q27JAInter6ObjectFv
    .4byte dispose__Q27JAInter10ObjectBaseFv
    .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
    .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
    .4byte handleStop__13JAIAnimeSoundFUcUl
    .4byte loop__Q27JAInter6ObjectFv
    .4byte playActorAnimSound__13JAIAnimeSoundFPQ27JAInter5ActorfUc
    .4byte startAnimSound__13JAIAnimeSoundFUlPP8JAISoundPQ27JAInter5ActorUc
    .4byte setSpeedModifySound__13JAIAnimeSoundFP8JAISoundP22JAIAnimeFrameSoundDataf
*/

namespace JAInter {
struct Object {
	virtual ~Object();                                     // _08 (weak)
	virtual void startSound(unsigned long, unsigned long); // _0C
	virtual void _10() = 0;                                // _10
	virtual void _14() = 0;                                // _14
	virtual void _18() = 0;                                // _18
	virtual void _1C() = 0;                                // _1C
	virtual void _20() = 0;                                // _20
	virtual void disable();                                // _24
	virtual void _28() = 0;                                // _28
	virtual void _2C() = 0;                                // _2C
	virtual void _30() = 0;                                // _30
	virtual void handleStop(unsigned char, unsigned long); // _34
	virtual void loop();                                   // _38
};
} // namespace JAInter

namespace JAInter {
struct ObjectBase {
	virtual ~ObjectBase();                                                // _08 (weak)
	virtual void _0C() = 0;                                               // _0C
	virtual void startSound(unsigned char, unsigned long, unsigned long); // _10
	virtual void startSound(JAISound**, unsigned long, unsigned long);    // _14
	virtual void stopAllSound();                                          // _18
	virtual void stopSound(unsigned long, unsigned long);                 // _1C
	virtual void enable();                                                // _20 (weak)
	virtual void _24() = 0;                                               // _24
	virtual void dispose();                                               // _28
	virtual void getFreeSoundHandlePointer();                             // _2C
	virtual void getUseSoundHandlePointer(unsigned long);                 // _30
};
} // namespace JAInter

struct JAIAnimeSound : public Object, public ObjectBase {
	virtual ~JAIAnimeSound();                                                               // _08 (weak)
	virtual void handleStop(unsigned char, unsigned long);                                  // _34
	virtual void playActorAnimSound(JAInter::Actor*, float, unsigned char);                 // _3C
	virtual void startAnimSound(unsigned long, JAISound**, JAInter::Actor*, unsigned char); // _40
	virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*, float);            // _44

	JAIAnimeSound(Vec*, JKRHeap*, unsigned char);
	void initActorAnimSound(JAIAnimeSoundData*, unsigned long, float, float);
	void checkLoopStartCount(float);
	void checkLoopEndCount(float);
	void setAnimSoundActor(JAInter::Actor*, float, float, unsigned char);
};

#endif
