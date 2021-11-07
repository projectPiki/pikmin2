#ifndef _PSGAME_ENVSE_AUTOPAN_H
#define _PSGAME_ENVSE_AUTOPAN_H

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();        // _00
	virtual void play();        // _04
	virtual void getCastType(); // _08

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct EnvSe_AutoPan : public EnvSeBase {
	virtual void exec();                    // _00
	virtual void play();                    // _04
	virtual void getCastType();             // _08
	virtual void setPanAndDolby(JAISound*); // _0C

	// _00 VTBL
};
} // namespace PSGame

#endif
