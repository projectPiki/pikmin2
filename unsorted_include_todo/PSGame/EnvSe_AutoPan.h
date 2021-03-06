#ifndef _PSGAME_ENVSE_AUTOPAN_H
#define _PSGAME_ENVSE_AUTOPAN_H

/*
    __vt__Q26PSGame13EnvSe_AutoPan:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem9EnvSeBaseFv
    .4byte play__Q28PSSystem9EnvSeBaseFv
    .4byte getCastType__Q28PSSystem9EnvSeBaseFv
    .4byte setPanAndDolby__Q26PSGame13EnvSe_AutoPanFP8JAISound
*/

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();        // _08
	virtual void play();        // _0C
	virtual void getCastType(); // _10

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct EnvSe_AutoPan : public EnvSeBase {
	virtual void setPanAndDolby(JAISound*); // _14

	// _00 VTBL
};
} // namespace PSGame

#endif
