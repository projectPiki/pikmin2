#ifndef _PSSYSTEM_ENVSEBASE_H
#define _PSSYSTEM_ENVSEBASE_H

/*
    __vt__Q28PSSystem9EnvSeBase:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem9EnvSeBaseFv
    .4byte play__Q28PSSystem9EnvSeBaseFv
    .4byte getCastType__Q28PSSystem9EnvSeBaseFv
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

#endif
