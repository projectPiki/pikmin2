#ifndef _PSGAME_ENVSE_PERSPECTIVE_H
#define _PSGAME_ENVSE_PERSPECTIVE_H

/*
    __vt__Q26PSGame17EnvSe_Perspective:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem9EnvSeBaseFv
    .4byte play__Q26PSGame17EnvSe_PerspectiveFv
    .4byte getCastType__Q28PSSystem9EnvSeBaseFv
    .4byte setPanAndDolby__Q28PSSystem9EnvSeBaseFP8JAISound
*/

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();                    // _08
	virtual void play();                    // _0C
	virtual void getCastType();             // _10 (inline)
	virtual void setPanAndDolby(JAISound*); // _14 (inline)
};
} // namespace PSSystem

namespace PSGame {
struct EnvSe_Perspective : public EnvSeBase {
	virtual void play(); // _0C

	EnvSe_Perspective();
};
} // namespace PSGame

#endif
