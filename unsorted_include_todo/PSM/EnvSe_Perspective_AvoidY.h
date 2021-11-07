#ifndef _PSM_ENVSE_PERSPECTIVE_AVOIDY_H
#define _PSM_ENVSE_PERSPECTIVE_AVOIDY_H

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();                    // _00
	virtual void _04() = 0;                 // _04
	virtual void _08() = 0;                 // _08
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
