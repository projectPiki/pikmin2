#ifndef _PSSYSTEM_SYSIF_H
#define _PSSYSTEM_SYSIF_H

/*
    __vt__Q28PSSystem5SysIF:
    .4byte 0
    .4byte 0
    .4byte makeSequence__Q28PSSystem5SysIFFv
    .4byte makeSe__Q28PSSystem5SysIFFv
    .4byte makeStream__Q28PSSystem5SysIFFv
    .4byte getMapInfoFxline__8JAIBasicFUl
    .4byte getMapInfoGround__8JAIBasicFUl
    .4byte getMapInfoFxParameter__8JAIBasicFUl
    .4byte setSeExtParameter__8JAIBasicFP8JAISound
    .4byte setRegisterTrackCallback__8JAIBasicFv
    .4byte initIF__Q28PSSystem5SysIFFRCQ28PSSystem8SetupArg
    .4byte 0
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

namespace PSSystem {
struct SysIF : public JAIBasic {
	virtual void makeSequence();                       // _00
	virtual void makeSe();                             // _04
	virtual void makeStream();                         // _08
	virtual void getMapInfoFxline(unsigned long);      // _0C
	virtual void getMapInfoGround(unsigned long);      // _10
	virtual void getMapInfoFxParameter(unsigned long); // _14
	virtual void setSeExtParameter(JAISound*);         // _18
	virtual void setRegisterTrackCallback();           // _1C
	virtual void initIF(const SetupArg&);              // _20
	virtual void _24() = 0;                            // _24

	// _00 VTBL
};
} // namespace PSSystem

#endif
