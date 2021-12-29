#ifndef _PSGAME_ENVSE_PAN_H
#define _PSGAME_ENVSE_PAN_H

/*
    __vt__Q26PSGame9EnvSe_Pan:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem9EnvSeBaseFv
    .4byte play__Q28PSSystem9EnvSeBaseFv
    .4byte getCastType__Q28PSSystem9EnvSeBaseFv
    .4byte setPanAndDolby__Q26PSGame9EnvSe_PanFP8JAISound
*/

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
