#ifndef _GAME_ILLUSTRATEDBOOK_H
#define _GAME_ILLUSTRATEDBOOK_H

#include "Game/Creature.h"
#include "Game/IconTexture.h"
#include "Game/enemyInfo.h"
#include "JSystem/JUtility/TColor.h"
#include "Camera.h"
#include "Controller.h"
#include "Color4.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "CNode.h"
#include "Vector3.h"

namespace Game {

namespace SingleGame {
struct ZukanState;
}
namespace IllustratedBook {
struct Camera : public LookAtCamera {
	Camera(Controller*);

	virtual ~Camera() { }             // _08 (weak)
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
	f32 getFocus();
	void setAtOffset(const Vector3f&);

	inline void setMinMaxHeight(f32 min, f32 max)
	{
		mMinHeight = min;
		mMaxHeight = max;
	}

	inline void setViewAngleParms(f32 fov, f32 min, f32 max)
	{
		mViewAngle     = fov;
		mCurrViewAngle = fov;
		mMinViewAngle  = min;
		mMaxViewAngle  = max;
	}

	// _00      = VTBL
	// _00-_198 = LookAtCamera
	Controller* mController;          // _198
	Creature* mTargetObject;          // _19C
	Vector3f mBasePhysicalPosition;   // _1A0 - current true position of camera, not accounting for random movement
	Vector3f mTrueCurrentPhysicalPos; // _1AC - true position, including the random swaying
	Vector3f mCameraLastMoveDest;     // _1B8 - set to position of target when initially loading an enemy/pellet, still gets used after
	f32 mHorizontalAngle;             // _1C4
	f32 mObjectRadius;                // _1C8
	f32 mCurrentHeight;               // _1CC
	f32 mMinHeight;                   // _1D0
	f32 mMaxHeight;                   // _1D4
	Vector3f mGoalPosition;           // _1D8
	Vector3f mObjectOffset;           // _1E4
	Vector3f mMovementVelocity;       // _1F0 - used to control speed of camera movement
	Vector3f mPositionList[10];       // _1FC
	int mCurrentPositionIndex;        // _274
	f32 mHorizontalInputDampened;     // _278 - moves toward value below, with a curve to the rate of change
	f32 mCurrentHorizontalInput;      // _27C - ranges from -100 to 100 based directly on analog input
	f32 mVerticalInputDampened;       // _280
	f32 mCurrentVerticalInput;        // _284
	f32 mCurrViewAngle;               // _288
	f32 mMinViewAngle;                // _28C
	f32 mMaxViewAngle;                // _290
	f32 mFocusLevel;                  // _294
	f32 mCurrentBlurLevel;            // _298
	f32 mDefaultMaxFocus;             // _29C
	Vector3f mCurrentShakeMagnitude;  // _2A0
	Vector3f mShakeTargetPosition;    // _2AC
	Vector3f mShakeUpdateVelocity;    // _2B8
	Vector3f mCameraShakeOffsetPos;   // _2C4
	Vector3f mVibrationForce;         // _2D0
	f32 mCameraShakeFrequency;        // _2DC - how often should random small camera shakes happen
	f32 mCameraShakeBaseMagnitude;    // _2E0 - how strong should random small camera shakes be
	f32 mPassiveShakeBlurLevel;       // _2E4 - how much to blur the camera when doing random shakes
	f32 mStrongShakeChance;           // _2E8 - chance for a random camera shake to be boosted
	f32 mStrongShakePower;            // _2EC - how much stronger should a random super-shake be
	f32 mShakeAccelRate;              // _2F0 - how fast shakes generally move
	f32 mShakeDecelRate;              // _2F4 - how fast shakes lose their momentum
	f32 mCStickMoveModifierX;         // _2F8 - how fast the camera should turn with cstick, horizontal
	f32 mCStickMoveModifierY;         // _2FC - how fast the camera should turn with cstick, vertical
	f32 mCStickMoveAccelRate;         // _300 - how fast the cstick rotation accels/decels
	f32 mFovChangeSpeed;              // _304 - how fast the FOV changes with the dpad
	f32 mFovChangeAccel;              // _308 - how fast FOV change accels/decels
	f32 mAnalogMoveSpeed;             // _30C - how fast to move to follow analog stick input
	f32 mAnalogMoveAccel;             // _310 - how fast moving the view accels/decels
	f32 mVibrationForceMultiplier;    // _314
	f32 mVibrationModX;               // _318
	f32 mVibrationModY;               // _31C
	f32 mVibrationModZ;               // _320
};

struct EnemyTexMgr : public IconTexture::Mgr {
	inline EnemyTexMgr();

	virtual ~EnemyTexMgr() { } // _08 (weak)

	IconTexture::Loader mLoader;

	// Unused/inlined:
	void create(); // might be static?
};

struct CameraParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "cameraParms")
		    , mRadius(this, 'f000', "半径", 350.0f, 0.0f, 2000.0f)                // 'radius'
		    , mInitialHeight(this, 'f001', "高さ　初期値", 500.0f, 0.0f, 1000.0f) // 'height initial value'
		    , mMinHeight(this, 'f002', "高さ　最小値", 0.0f, 0.0f, 1000.0f)       // 'height min value'
		    , mMaxHeight(this, 'f003', "高さ　最大値", 700.0f, 0.0f, 1000.0f)     // 'height max value'
		    , mOffsetX(this, 'f004', "オフセット　ｘ", 0.0f, -500.0f, 500.0f)     // 'offset X'
		    , mOffsetY(this, 'f005', "オフセット　ｙ", 0.0f, -500.0f, 500.0f)     // 'offset Y'
		    , mOffsetZ(this, 'f006', "オフセット　ｚ", 0.0f, -500.0f, 500.0f)     // 'offset Z'
		    , mInitialViewAngle(this, 'f009', "画角　初期値", 30.0f, 0.0f, 90.0f) // 'view angle initial value'
		    , mMinViewAngle(this, 'f007', "画角　最小値", 0.1f, 0.0f, 90.0f)      // 'view angle min value'
		    , mMaxViewAngle(this, 'f008', "画角　最大値", 90.0f, 0.0f, 90.0f)     // 'view angle max value'
		    , mInitialRotation(this, 'f010', "回転　初期値", 0.0f, 0.0f, 360.0f)  // 'rotation initial value'
		{
		}

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

	CameraParms()
	    : mParms()
	{
	}

	// _1C8 = VTBL
	Parms mParms; // _00

	virtual void read(Stream&); // _08
};

struct ColorSetting : public CNode {
	ColorSetting();

	virtual ~ColorSetting() { } // _08 (weak)
	virtual void read(Stream&); // _10

	void update();

	JUtility::TColor getActiveColorA()
	{
		JUtility::TColor outColor;
		outColor.set(mActiveColorA.r, mActiveColorA.g, mActiveColorA.b, mActiveColorA.a);
		return outColor;
	}

	JUtility::TColor getActiveColorB()
	{
		JUtility::TColor outColor;
		outColor.set(mActiveColorB.r, mActiveColorB.g, mActiveColorB.b, mActiveColorB.a);
		return outColor;
	}

	// _00     = VTBL
	// _00-_18 = CNode
	Color4 mColorListA[5][2]; // _18
	Color4 mColorListB[5];    // _40
	GXColor mActiveColorA;    // _54
	GXColor mActiveColorB;    // _58
	Color4 mActiveColorC;     // _5C
};

struct DebugParms : public CNode {
	DebugParms();

	virtual ~DebugParms() { } // _08 (weak)
	// potential something at _10?

	// _00     = VTBL
	// _00-_18 = CNode
	Color4 _18;          // _18
	f32 _1C[6];          // _1C
	BitFlag<u16> mFlags; // _34
};

struct PositionParms : public CNode {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "PositionParms")
		    , mAppearPosX(this, 'f000', "出現位置　ｘ", 0.0f, -10000.0f, 10000.0f) // 'appearance position X'
		    , mAppearPosY(this, 'f001', "出現位置　ｙ", 0.0f, -10000.0f, 10000.0f) // 'appearance position Y'
		    , mAppearPosZ(this, 'f002', "出現位置　ｚ", 0.0f, -10000.0f, 10000.0f) // 'appearance position Z'
		{
		}

		Parm<f32> mAppearPosX; // _24, f000
		Parm<f32> mAppearPosY; // _4C, f001
		Parm<f32> mAppearPosZ; // _74, f002
	};

	PositionParms();

	virtual ~PositionParms() { } // _08 (weak)
	virtual void read(Stream&);  // _10

	// _00     = VTBL
	// _00-_18 = CNode
	Parms mParms;          // _18
	char mEnemyName[0x20]; // _A0
};

struct PositionParmsList : public CNode {
	PositionParmsList();

	virtual ~PositionParmsList() { } // _08 (weak)
	virtual void read(Stream&);      // _10

	// _00     = VTBL
	// _00-_18 = CNode
	PositionParms mParms[10]; // _18
};

struct EnemyParms : public CNode {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "enemyParms")
		    , mSize(this, 'f001', "大きさ", 10.0f, 0.0f, 1000.0f)         // 'size'
		    , mAppearRange(this, 'f000', "出現範囲", 0.0f, 0.0f, 1000.0f) // 'occurence range'
		    , mAppearNum(this, 'i000', "出現数", 1, 1, 99)
		{
		}

		Parm<f32> mSize;        // _24, f001
		Parm<f32> mAppearRange; // _4C, f000
		Parm<int> mAppearNum;   // _74, i000
	};

	EnemyParms();

	virtual ~EnemyParms() { }   // _08 (weak)
	virtual void read(Stream&); // _10

	// _00     = VTBL
	// _00-_18 = CNode
	Parms mParms;                     // _18
	u8 mGroupID;                      // _A0
	CameraParms mCameraParms;         // _A4
	PositionParmsList* mPosParmsList; // _270
};

struct EnemyModeParms : public CNode {
	EnemyModeParms(PositionParmsList* list);

	virtual ~EnemyModeParms() { } // _08 (weak)
	virtual void read(Stream&);   // _10

	// _00     = VTBL
	// _00-_18 = CNode
	EnemyParms mEnemyParms[EnemyTypeID::EnemyID_COUNT]; // _18, array of parms for each enemy, 0-101
};

struct ItemParms : public CNode {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "enemyParms")
		    , mOffsetX(this, 'f000', "オフセットｘ", 0.0f, -10000.0f, 10000.0f)
		    , mOffsetY(this, 'f001', "オフセットｙ", 0.0f, -10000.0f, 10000.0f)
		    , mOffsetZ(this, 'f002', "オフセットｚ", 0.0f, -10000.0f, 10000.0f)
		{
		}

		Parm<f32> mOffsetX; // _24, f000
		Parm<f32> mOffsetY; // _4C, f001
		Parm<f32> mOffsetZ; // _74, f002
	};

	ItemParms();

	virtual ~ItemParms() { }    // _08 (weak)
	virtual void read(Stream&); // _10

	// _00     = VTBL
	// _00-_18 = CNode
	Parms mParms;                     // _18
	u8 mGroupID;                      // _A0
	CameraParms mCameraParms;         // _A4
	PositionParmsList* mPosParmsList; // _270
	int mIndex;                       // _274
};

struct ItemModeParms : public CNode {
	ItemModeParms(PositionParmsList*);

	virtual ~ItemModeParms() { } // _08 (weak)
	virtual void read(Stream&);  // _10

	// _00     = VTBL
	// _00-_18 = CNode
	ItemParms* mItemParms; // _18, array of parms for each treasure
	u32 mItemCount;        // _1C, number of items in mItemParms array
};

struct Parms : public CNode {
	Parms();

	virtual ~Parms() { }        // _08 (weak)
	virtual void read(Stream&); // _10

	void loadFile(JKRArchive*);

	// _00     = VTBL
	// _00-_18 = CNode
	ColorSetting mColorSetting;      // _18
	PositionParmsList mPosParmsList; // _78
	EnemyModeParms mEnemyParms;      // _810
	ItemModeParms mItemParms;        // _10260

	static Camera* sCamera;
	static Game::SingleGame::ZukanState* sZukanState;
};
} // namespace IllustratedBook
} // namespace Game

#endif
