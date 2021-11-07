#ifndef _PSGAME_ENVSE_PAN_H
#define _PSGAME_ENVSE_PAN_H

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();        // _00
	virtual void play();        // _04
	virtual void getCastType(); // _08

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct EnvSe_Pan : public EnvSeBase {
	virtual void exec();                    // _00
	virtual void play();                    // _04
	virtual void getCastType();             // _08
	virtual void setPanAndDolby(JAISound*); // _0C

	// _00 VTBL
};
} // namespace PSGame

#endif
