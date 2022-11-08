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

	virtual void play(); // _0C

	// _10     = VTBL
	// _00-_3C = PSSystem::EnvSeBase
	Vec _3C; // _3C
};

/**
 * @size{0x48}
 */
struct EnvSe_Pan : public PSSystem::EnvSeBase {
	virtual void setPanAndDolby(JAISound*); // _14

	// _10     = VTBL
	// _00-_3C = PSSystem::EnvSeBase
	Vec _3C; // _3C
};

struct EnvSe_AutoPan : public EnvSe_Pan {
	EnvSe_AutoPan(u32, f32, f32, f32, f32, f32);

	virtual void setPanAndDolby(JAISound*); // _14

	void setDirection(bool, bool);

	// _10     = VTBL
	// _00-_48 = EnvSe_Pan
	f32 _48; // _48
	u8 _4C;  // _4C
	u8 _4D;  // _4D
};

// dev spelling.
struct Builder_EvnSe_Perspective : public JKRDisposer {
	Builder_EvnSe_Perspective(JGeometry::TBox3f);

	virtual ~Builder_EvnSe_Perspective();       // _08
	virtual void onBuild(PSSystem::EnvSeBase*); // _0C (weak)
	virtual void newSeObj(u32, f32, Vec);       // _10

	void build(f32, PSSystem::EnvSeMgr*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	u8 _18;                  // _18
	u32 _1C;                 // _1C, unknown
	u32 _20;                 // _20, unknown
	JGeometry::TBox3f m_box; // _24
	f32 _3C;                 // _3C
	JSUPtrList _40;          // _40
};
} // namespace PSGame

#endif
