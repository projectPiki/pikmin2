#ifndef _PSGAME_ENVSE_H
#define _PSGAME_ENVSE_H

#include "Dolphin/vec.h"
#include "PSSystem/EnvSeBase.h"
#include "types.h"
#include "Vector3.h"

struct J3DAnmBase;

namespace PSGame {
/**
 * @size{0x48}
 */
struct EnvSe_Perspective : public PSSystem::EnvSeBase {
	EnvSe_Perspective(u32, f32, Vec);

	virtual JAISound* play(); // _0C

	// _10     = VTBL
	// _00-_3C = PSSystem::EnvSeBase
	Vec mVec; // _3C
};

/**
 * @size{0x48}
 */
struct EnvSe_Pan : public PSSystem::EnvSeBase {
	enum PanDolby {
		PD_Pan   = 0,
		PD_Dolby = 1,
		PD_Count, // 2
	};

	EnvSe_Pan(u32 soundID, f32 volume, f32 pan, f32 dolby)
	    : EnvSeBase(soundID, volume)
	{
		mPanDolby[PD_Pan]   = pan;
		mPanDolby[PD_Dolby] = dolby;
	}

	virtual void setPanAndDolby(JAISound*); // _14

	// _10     = VTBL
	// _00-_3C = PSSystem::EnvSeBase
	f32 mPanDolby[PD_Count]; // _3C, 0=pan, 1=dolby
};

struct EnvSe_AutoPan : public EnvSe_Pan {
	EnvSe_AutoPan(u32 soundID, f32 pan, f32 dolby, f32 volume, f32 panInc, f32 dolbyInc);

	virtual void setPanAndDolby(JAISound*); // _14

	void setDirection(bool, bool);

	// _10     = VTBL
	// _00-_48 = EnvSe_Pan
	f32 mStepValues[PD_Count];    // _44
	bool mIsIncreasing[PD_Count]; // _4C
};

// dev spelling.
struct Builder_EvnSe_Perspective : public JKRDisposer {
	Builder_EvnSe_Perspective(JGeometry::TBox3f);

	virtual ~Builder_EvnSe_Perspective();               // _08
	virtual void onBuild(PSSystem::EnvSeBase*) { }      // _0C (weak)
	virtual EnvSe_Perspective* newSeObj(u32, f32, Vec); // _10

	void build(f32, PSSystem::EnvSeMgr*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	u8 _18;                           // _18
	u32 _1C;                          // _1C, unknown
	u32 _20;                          // _20, unknown
	JGeometry::TBox3f mBox;           // _24
	f32 _3C;                          // _3C
	JSUList<EnvSe_Perspective> mList; // _40
};
} // namespace PSGame

#endif
