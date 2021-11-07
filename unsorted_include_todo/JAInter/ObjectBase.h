#ifndef _JAINTER_OBJECTBASE_H
#define _JAINTER_OBJECTBASE_H

namespace JAInter {
struct ObjectBase {
	virtual ~ObjectBase();                                                // _00
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
	virtual void _30() = 0;                                               // _30

	// _00 VTBL
};
} // namespace JAInter

#endif
