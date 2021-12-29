#ifndef _JAINTER_OBJECTBASE_H
#define _JAINTER_OBJECTBASE_H

/*
    __vt__Q27JAInter10ObjectBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JAInter10ObjectBaseFv
    .4byte startSound__Q27JAInter10ObjectBaseFUlUl
    .4byte startSound__Q27JAInter10ObjectBaseFUcUlUl
    .4byte startSound__Q27JAInter10ObjectBaseFPP8JAISoundUlUl
    .4byte stopAllSound__Q27JAInter10ObjectBaseFv
    .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
    .4byte enable__Q27JAInter10ObjectBaseFv
    .4byte disable__Q27JAInter10ObjectBaseFv
    .4byte dispose__Q27JAInter10ObjectBaseFv
    .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
    .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
    .4byte handleStop__Q27JAInter10ObjectBaseFUcUl
    .4byte 0
*/

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
