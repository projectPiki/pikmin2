#ifndef _PSSYSTEM_ENVSEBASE_H
#define _PSSYSTEM_ENVSEBASE_H

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();                    // _00
	virtual void play();                    // _04
	virtual void getCastType();             // _08
	virtual void setPanAndDolby(JAISound*); // _0C

	// _00 VTBL
};
} // namespace PSSystem

#endif
