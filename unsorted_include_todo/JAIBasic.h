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
	virtual void makeSequence();                       // _08
	virtual void makeSe();                             // _0C
	virtual void makeStream();                         // _10
	virtual void getMapInfoFxline(unsigned long);      // _14
	virtual void getMapInfoGround(unsigned long);      // _18
	virtual void getMapInfoFxParameter(unsigned long); // _1C
	virtual void setSeExtParameter(JAISound*);         // _20
	virtual void setRegisterTrackCallback();           // _24
};

#endif
