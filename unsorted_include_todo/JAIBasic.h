#ifndef _JAIBASIC_H
#define _JAIBASIC_H

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
