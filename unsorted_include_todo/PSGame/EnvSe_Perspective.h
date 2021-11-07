#ifndef _PSGAME_ENVSE_PERSPECTIVE_H
#define _PSGAME_ENVSE_PERSPECTIVE_H

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();                    // _00
	virtual void _04() = 0;                 // _04
	virtual void getCastType();             // _08
	virtual void setPanAndDolby(JAISound*); // _0C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct EnvSe_Perspective : public EnvSeBase {
	virtual void exec();                    // _00
	virtual void play();                    // _04
	virtual void getCastType();             // _08
	virtual void setPanAndDolby(JAISound*); // _0C

	// _00 VTBL
};
} // namespace PSGame

#endif
