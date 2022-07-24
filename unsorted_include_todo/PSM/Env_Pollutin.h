#ifndef _PSM_ENV_POLLUTIN_H
#define _PSM_ENV_POLLUTIN_H

/*
    __vt__Q23PSM12Env_Pollutin:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem9EnvSeBaseFv
    .4byte play__Q23PSM12Env_PollutinFv
    .4byte getCastType__Q23PSM12Env_PollutinFv
    .4byte setPanAndDolby__Q26PSGame13EnvSe_AutoPanFP8JAISound
*/

namespace PSSystem {
struct EnvSeBase {
	virtual void exec(); // _08
};
} // namespace PSSystem

namespace PSGame {
struct EnvSe_AutoPan {
	virtual void _08() = 0;                 // _08
	virtual void play();                    // _0C
	virtual void getCastType();             // _10 (inline)
	virtual void setPanAndDolby(JAISound*); // _14
};
} // namespace PSGame

namespace PSM {
struct Env_Pollutin : public EnvSeBase, public EnvSe_AutoPan {
	virtual void play();        // _0C
	virtual void getCastType(); // _10 (inline)
};
} // namespace PSM

#endif
