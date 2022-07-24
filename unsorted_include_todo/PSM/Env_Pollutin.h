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

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct EnvSe_AutoPan {
	virtual void _08() = 0;                 // _08
	virtual void _0C() = 0;                 // _0C
	virtual void _10() = 0;                 // _10
	virtual void setPanAndDolby(JAISound*); // _14

	// _00 VTBL
};
} // namespace PSGame

namespace PSM {
struct Env_Pollutin : public EnvSeBase, public EnvSe_AutoPan {
	virtual void play();        // _0C
	virtual void getCastType(); // _10

	// _00 VTBL
};
} // namespace PSM

#endif
