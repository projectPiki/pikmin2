#ifndef _JAIANIMESOUND_H
#define _JAIANIMESOUND_H

namespace JAInter {
struct Object {
	virtual void _00() = 0;                                // _00
	virtual void startSound(unsigned long, unsigned long); // _04
	virtual void _08() = 0;                                // _08
	virtual void _0C() = 0;                                // _0C
	virtual void _10() = 0;                                // _10
	virtual void _14() = 0;                                // _14
	virtual void _18() = 0;                                // _18
	virtual void disable();                                // _1C
	virtual void _20() = 0;                                // _20
	virtual void _24() = 0;                                // _24
	virtual void _28() = 0;                                // _28
	virtual void _2C() = 0;                                // _2C
	virtual void loop();                                   // _30

	// _00 VTBL
};
} // namespace JAInter

namespace JAInter {
struct ObjectBase {
	virtual void _00() = 0;                                               // _00
	virtual void _04() = 0;                                               // _04
	virtual void startSound(unsigned char, unsigned long, unsigned long); // _08
	virtual void startSound(JAISound**, unsigned long, unsigned long);    // _0C
	virtual void stopAllSound();                                          // _10
	virtual void stopSound(unsigned long, unsigned long);                 // _14
	virtual void enable();                                                // _18
	virtual void _1C() = 0;                                               // _1C
	virtual void dispose();                                               // _20
	virtual void getFreeSoundHandlePointer();                             // _24
	virtual void getUseSoundHandlePointer(unsigned long);                 // _28

	// _00 VTBL
};
} // namespace JAInter

struct JAIAnimeSound : public Object, public ObjectBase {
	virtual ~JAIAnimeSound();                                             // _00
	virtual void startSound(unsigned long, unsigned long);                // _04
	virtual void startSound(unsigned char, unsigned long, unsigned long); // _08
	virtual void startSound(JAISound**, unsigned long, unsigned long);    // _0C
	virtual void stopAllSound();                                          // _10
	virtual void stopSound(unsigned long, unsigned long);                 // _14
	virtual void enable();                                                // _18
	virtual void disable();                                               // _1C
	virtual void dispose();                                               // _20
	virtual void getFreeSoundHandlePointer();                             // _24
	virtual void getUseSoundHandlePointer(unsigned long);                 // _28
	virtual void handleStop(unsigned char, unsigned long);                // _2C
	virtual void loop();                                                  // _30
	virtual void playActorAnimSound(JAInter::Actor*, float,
	                                unsigned char); // _34
	virtual void startAnimSound(unsigned long, JAISound**, JAInter::Actor*,
	                            unsigned char); // _38
	virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*,
	                                 float); // _3C

	// _00 VTBL
};

#endif
