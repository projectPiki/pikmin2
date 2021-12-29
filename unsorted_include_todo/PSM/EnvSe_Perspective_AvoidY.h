#ifndef _PSM_ENVSE_PERSPECTIVE_AVOIDY_H
#define _PSM_ENVSE_PERSPECTIVE_AVOIDY_H

/*
    __vt__Q23PSM24EnvSe_Perspective_AvoidY:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem9EnvSeBaseFv
    .4byte play__Q23PSM24EnvSe_Perspective_AvoidYFv
    .4byte getCastType__Q23PSM24EnvSe_Perspective_AvoidYFv
    .4byte setPanAndDolby__Q28PSSystem9EnvSeBaseFP8JAISound
*/

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();                    // _00
	virtual void play();                    // _04
	virtual void getCastType();             // _08
	virtual void setPanAndDolby(JAISound*); // _0C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSM {
struct EnvSe_Perspective_AvoidY : public EnvSeBase {
	virtual void exec();                    // _00
	virtual void play();                    // _04
	virtual void getCastType();             // _08
	virtual void setPanAndDolby(JAISound*); // _0C

	// _00 VTBL
};
} // namespace PSM

#endif
