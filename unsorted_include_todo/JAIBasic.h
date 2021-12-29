#ifndef _JAIBASIC_H
#define _JAIBASIC_H

/*
    __vt__8JAIBasic:
    .4byte 0
    .4byte 0
    .4byte makeSequence__8JAIBasicFv
    .4byte makeSe__8JAIBasicFv
    .4byte makeStream__8JAIBasicFv
    .4byte getMapInfoFxline__8JAIBasicFUl
    .4byte getMapInfoGround__8JAIBasicFUl
    .4byte getMapInfoFxParameter__8JAIBasicFUl
    .4byte setSeExtParameter__8JAIBasicFP8JAISound
    .4byte setRegisterTrackCallback__8JAIBasicFv
*/

struct JAIBasic {
	virtual void makeSequence();                       // _00
	virtual void makeSe();                             // _04
	virtual void makeStream();                         // _08
	virtual void getMapInfoFxline(unsigned long);      // _0C
	virtual void getMapInfoGround(unsigned long);      // _10
	virtual void getMapInfoFxParameter(unsigned long); // _14
	virtual void setSeExtParameter(JAISound*);         // _18
	virtual void setRegisterTrackCallback();           // _1C

	// _00 VTBL
};

#endif
