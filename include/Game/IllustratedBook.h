#ifndef _GAME_ILLUSTRATEDBOOK_H
#define _GAME_ILLUSTRATEDBOOK_H

#include "Game/Creature.h"
#include "Game/IconTexture.h"
#include "JSystem/JUT/TColor.h"
#include "Camera.h"
#include "Controller.h"
#include "Color4.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "CNode.h"
#include "Vector3.h"

namespace Game {
namespace IllustratedBook {
struct Camera : public LookAtCamera {
	Camera(Controller*);

	virtual ~Camera();                // _08 (weak)
	virtual void doUpdate();          // _78
	virtual void startVibration(int); // _7C

	void move(const Vector3f&);
	void addFovy(f32);
	void resetControl();
	void setTarget(Creature*);
	void updateCameraShake();
	void updateFocus();

	// Unused/inlined:
	void debugDraw(Graphics&);
	unknown getFocus();
	void setAtOffset(const Vector3f&) const;

	// _00      = VTBL
	// _00-_198 = LookAtCamera
	Controller* _198;  // _198
	Creature* _19C;    // _19C
	Vector3f _1A0;     // _1A0
	Vector3f _1AC;     // _1AC
	Vector3f _1B8;     // _1B8
	f32 _1C4;          // _1C4
	f32 _1C8;          // _1C8
	f32 _1CC;          // _1CC
	f32 _1D0;          // _1D0
	f32 _1D4;          // _1D4
	Vector3f _1D8;     // _1D8
	Vector3f _1E4;     // _1E4
	Vector3f _1F0;     // _1F0
	Vector3f _1FC[10]; // _1FC
	unknown _274;      // _274
	f32 _278;          // _278
	f32 _27C;          // _27C
	f32 _280;          // _280
	f32 _284;          // _284
	f32 _288;          // _288
	f32 _28C;          // _28C
	f32 _290;          // _290
	f32 _294;          // _294
	f32 _298;          // _298
	f32 _29C;          // _29C
	Vector3f _2A0;     // _2A0
	Vector3f _2AC;     // _2AC
	Vector3f _2B8;     // _2B8
	Vector3f _2C4;     // _2C4
	Vector3f _2D0;     // _2D0
	f32 _2DC;          // _2DC
	f32 _2E0;          // _2E0
	f32 _2E4;          // _2E4
	f32 _2E8;          // _2E8
	f32 _2EC;          // _2EC
	f32 _2F0;          // _2F0
	f32 _2F4;          // _2F4
	f32 _2F8;          // _2F8
	f32 _2FC;          // _2FC
	u8 _300[4];        // _300
	f32 _304;          // _304
	f32 _308;          // _308
	f32 _30C;          // _30C
	f32 _310;          // _310
	f32 _314;          // _314
	f32 _318;          // _318
	f32 _31C;          // _31C
	f32 _320;          // _320
};

struct EnemyTexMgr : public IconTexture::Mgr {
	inline EnemyTexMgr();

	virtual ~EnemyTexMgr(); // _08 (weak)

	IconTexture::Loader mLoader;

	// Unused/inlined:
	unknown create(); // might be static?
};

struct CameraParms {
	struct Parms : public Parameters {
		Parms();

		Parm<f32> mRadius;           // _0C, f000
		Parm<f32> mInitialHeight;    // _34, f001
		Parm<f32> mMinHeight;        // _5C, f002
		Parm<f32> mMaxHeight;        // _84, f003
		Parm<f32> mOffsetX;          // _AC, f004
		Parm<f32> mOffsetY;          // _D4, f005
		Parm<f32> mOffsetZ;          // _FC, f006
		Parm<f32> mInitialViewAngle; // _124, f009
		Parm<f32> mMinViewAngle;     // _14C, f007
		Parm<f32> mMaxViewAngle;     // _174, f008
		Parm<f32> mInitialRotation;  // _19C, f010
	};

	CameraParms();

	virtual void read(Stream&); // _08

	Parms mParms; // _00
};

struct ColorSetting : public CNode {
	ColorSetting();

	virtual ~ColorSetting();    // _08 (weak)
	virtual void read(Stream&); // _10

	void update();

	// _00     = VTBL
	// _00-_18 = CNode
	Color4 _18[10];       // _18
	Color4 _40[5];        // _40
	JUtility::TColor _54; // _54
	JUtility::TColor _58; // _58
	JUtility::TColor _5C; // _5C
};

struct DebugParms : public CNode {
	virtual ~DebugParms(); // _08 (weak)
	// potential something at _10?

	// _00     = VTBL
	// _00-_18 = CNode
	u8 _18[0x20]; // _18, unknown
};

struct PositionParms : public CNode {
	struct Parms : public Parameters {
		inline Parms();

		Parm<f32> _24; // _24, somethingX?
		Parm<f32> _4C; // _4C, somethingY?
		Parm<f32> _74; // _74, somethingZ?
	};

	PositionParms();

	virtual ~PositionParms();   // _08 (weak)
	virtual void read(Stream&); // _10

	// _00     = VTBL
	// _00-_18 = CNode
	Parms mParms; // _18
	u8 _A0[0x20]; // _A0, unknown
};

struct PositionParmsList : public CNode {

	virtual ~PositionParmsList(); // _08 (weak)
	virtual void read(Stream&);   // _10

	// _00     = VTBL
	// _00-_18 = CNode
	PositionParms mParms[10]; // _18
};

struct EnemyParms : public CNode {
	struct Parms : public Parameters {
		inline Parms(); // probably

		Parm<f32> mF001; // _24
		Parm<f32> mF002; // _4C
		Parm<int> mI001; // _74
	};

	EnemyParms();

	virtual ~EnemyParms();      // _08 (weak)
	virtual void read(Stream&); // _10

	// _00     = VTBL
	// _00-_18 = CNode
	Parms mParms;                     // _18
	u8 _A0[0x4];                      // _A0, unknown
	CameraParms mCameraParms;         // _A4
	PositionParmsList* mPosParmsList; // _270
};

struct EnemyModeParms : public CNode {
	virtual ~EnemyModeParms();  // _08 (weak)
	virtual void read(Stream&); // _10

	// _00     = VTBL
	// _00-_18 = CNode
	EnemyParms mEnemyParms[102]; // _18, array of parms for each enemy, 0-101
};

struct ItemParms : public CNode {
	struct Parms : public Parameters {
		inline Parms(); // probably

		Parm<f32> mF000; // _24
		Parm<f32> mF001; // _4C
		Parm<f32> mF002; // _74
	};

	ItemParms();

	virtual ~ItemParms();       // _08 (weak)
	virtual void read(Stream&); // _10

	// _00     = VTBL
	// _00-_18 = CNode
	Parms mParms;                     // _18
	u8 _A0[0x4];                      // _A0, unknown
	CameraParms mCameraParms;         // _A4
	PositionParmsList* mPosParmsList; // _270
	int mIndex;                       // _274
};

struct ItemModeParms : public CNode {
	virtual ~ItemModeParms();   // _08 (weak)
	virtual void read(Stream&); // _10

	// _00     = VTBL
	// _00-_18 = CNode
	ItemParms* mItemParms; // _18, array of parms for each treasure
	u32 mItemCount;        // _1C, number of items in mItemParms array
};

struct Parms : public CNode {
	Parms();

	virtual ~Parms();           // _08 (weak)
	virtual void read(Stream&); // _10

	void loadFile(JKRArchive*);

	// _00     = VTBL
	// _00-_18 = CNode
	ColorSetting mColorSetting;       // _18
	PositionParmsList mPositionParms; // _78
	EnemyModeParms mEnemyParms;       // _810
	ItemModeParms mItemParms;         // _10260
};
} // namespace IllustratedBook
} // namespace Game

#endif
