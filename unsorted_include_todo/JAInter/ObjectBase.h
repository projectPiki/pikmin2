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
*/

namespace JAInter {
struct ObjectBase {
	virtual ~ObjectBase();                                                // _08
	virtual void startSound(unsigned long, unsigned long);                // _0C
	virtual void startSound(unsigned char, unsigned long, unsigned long); // _10
	virtual void startSound(JAISound**, unsigned long, unsigned long);    // _14
	virtual void stopAllSound();                                          // _18
	virtual void stopSound(unsigned long, unsigned long);                 // _1C
	virtual void enable();                                                // _20
	virtual void disable();                                               // _24
	virtual void dispose();                                               // _28
	virtual void getFreeSoundHandlePointer();                             // _2C
	virtual void getUseSoundHandlePointer(unsigned long);                 // _30
	virtual void handleStop(unsigned char, unsigned long);                // _34

	// _00 VTBL
};
} // namespace JAInter

#endif
