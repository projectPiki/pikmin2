#ifndef _PSSYSTEM_SYSIF_H
#define _PSSYSTEM_SYSIF_H

struct JAIBasic {
	virtual void _00() = 0;                            // _00
	virtual void _04() = 0;                            // _04
	virtual void _08() = 0;                            // _08
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
