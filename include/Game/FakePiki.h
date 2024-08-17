#ifndef _GAME_FAKEPIKI_H
#define _GAME_FAKEPIKI_H

#include "Game/WaterBox.h"
#include "Game/Creature.h"
#include "Game/EnemyParmsBase.h"
#include "Game/shadowMgr.h"
#include "SysShape/MotionListener.h"
#include "Vector3.h"
#include "PikiAnimator.h"

struct J3DJoint;

namespace Sys {
struct TriIndexList;
} // namespace Sys

namespace Game {
struct IPikiAnims {
	enum PikiAnims {
		NULLANIM   = -1,
		AKUBI      = 0, // yawn
		ASIBUMI    = 1, // stepping
		ATTACK1    = 2,
		CHATTING   = 3,
		DAMAGE     = 4,
		DEAD       = 5,
		DEAD2      = 6,
		DEAD3      = 7,
		ESA        = 8, // eaten
		FALL       = 9,
		FUE        = 10, // whistle
		FURIMUKU   = 11, // look over shoulder
		GAKKARI    = 12, // disappointed
		GATTU      = 13, // agree
		GETUP      = 14,
		GFURI1     = 15, // shake1
		GFURI2     = 16, // shake2
		GNUKE      = 17, // evade?
		GROWUP1    = 18, // nectar (high jump)
		GROWUP2    = 19, // nectar (low jump)
		HNOBORU    = 20, // climb
		IRAIRA     = 21, // frustrated
		JHIT       = 22,
		JKOKE      = 23, // moss?
		JOB1       = 24,
		JOB2       = 25,
		KOROBU     = 26, // fall over
		KUTTUKU    = 27, // go together
		NIGERU     = 28, // run away
		RUN2       = 29,
		WALK       = 30,
		WAIT       = 31,
		KIZUKU     = 32, // build
		THROW      = 33,
		THROWWWAIT = 34,
		ROLLJUMP   = 35, // throwing spin animation
		HANG       = 36,
		TYAKUSUI   = 37, // drowning
		OBORERU    = 38, // learn
		SIZUMU     = 39, // feel depressed
		PICKLOOP   = 40,
		PICK_PUT   = 41,
		NUKU       = 42, // pull out
		NUKU3      = 43,
		NUKARERU   = 44, // to be removed from
		NUKARE3    = 45, // swept away
		KAIFUKU    = 46,
		KAIFUKU3   = 47,
		KAIFUKU2   = 48,
		MIZUAGE    = 49,
		JUMP       = 50,
		JUMPB1     = 51,
		JUMPR1     = 52,
		SAGASU     = 53, // search
		SAGASU2    = 54, // search2
		MIZUNOMI   = 55, // drinking
		SUWARU     = 56, // sit
		NERU       = 57, // sleep
		HORU       = 58, // leave alone? throw away
		DOSIN      = 59,
		KOROBU2    = 60, // falldown2
		GASDEAD    = 61,
		GDEAD      = 62,
		SUWARERU   = 63, // stabbed
		PUNCH      = 64,
		PUNCH2     = 65,
		PUNCH3     = 66,
	};
};

enum FakePikiDynamics {
	FPFLAGS_MoveRotationDisabled   = 0x1,  // do not rotate
	FPFLAGS_UpdateTrMatrixDisabled = 0x2,  // do not update mBaseTrMatrix
	FPFLAGS_MoveVelocityDisabled   = 0x4,  // do not move
	FPFLAGS_MapCollisionDisabled   = 0x8,  // do not care about map collision
	FPFLAGS_PikiBeingPlucked       = 0x10, // piki currently being plucked
	FPFLAGS_Zikatu                 = 0x20, // wild piki
	FPFLAGS_PikiEnteringCave       = 0x40, // piki flagged as entering a cave (in party, right color if SC, etc)
	FPFLAGS_WasZikatu     = 0x80,  // was previously wild - used so louie can't whistle olimar's pikis til the bag's down on day 1 lol
	FPFLAGS_IsWildBulbmin = 0x100, // bulbmin that haven't been whistled yet
};

struct FakePiki : public Creature, public SysShape::MotionListener {
	FakePiki();

	// these are here so they can be used in vtable methods
	inline void setFPFlag(u32 flag) { mFakePikiFlags.typeView |= flag; }
	inline void resetFPFlag(u32 flag) { mFakePikiFlags.typeView &= ~flag; }
	inline bool isFPFlag(u32 flag) { return mFakePikiFlags.typeView & flag; }

	// vtable 1 (Creature)
	virtual Vector3f getPosition() { return mPosition; }                                        // _08
	virtual void getBoundingSphere(Sys::Sphere& boundSphere) { boundSphere = mBoundingSphere; } // _10 (weak)
	virtual void doAnimation();                                                                 // _3C
	virtual void doEntry();                                                                     // _40
	virtual void doSimulation(f32);                                                             // _4C
	virtual void updateTrMatrix();                                                              // _78
	virtual bool inWater() { return (mWaterBox != nullptr); }                                   // _8C (weak)
	virtual void movieSetFaceDir(f32);                                                          // _128
	// vtable 2 (MotionListener + self)
	// virtual void onKeyEvent(const SysShape::KeyEvent& event); // _1B8 thunk
	virtual int getDownfloorMass() { return 0; }                                       // _1BC (weak)
	virtual bool isPikmin() { return true; }                                           // _1C0 (weak)
	virtual void doColorChange() { }                                                   // _1C4 (weak)
	virtual void doDebugDL() { }                                                       // _1C8 (weak)
	virtual void update() { }                                                          // _1CC (weak)
	virtual void move(f32);                                                            // _1D0
	virtual bool useMoveRotation() { return !isFPFlag(FPFLAGS_MoveRotationDisabled); } // _1D4 (weak)
	virtual void setMoveRotation(bool useMoveRotation)                                 // _1D8 (weak)
	{
		if (!useMoveRotation) {
			setFPFlag(FPFLAGS_MoveRotationDisabled);
		} else {
			resetFPFlag(FPFLAGS_MoveRotationDisabled);
		}
	}
	virtual bool useUpdateTrMatrix() { return !isFPFlag(FPFLAGS_UpdateTrMatrixDisabled); } // _1DC (weak)
	virtual void setUpdateTrMatrix(bool useUpdateTrMatrix)                                 // _1E0 (weak)
	{
		if (!useUpdateTrMatrix) {
			setFPFlag(FPFLAGS_UpdateTrMatrixDisabled);
		} else {
			resetFPFlag(FPFLAGS_UpdateTrMatrixDisabled);
		}
	}
	virtual bool useMoveVelocity() { return !isFPFlag(FPFLAGS_MoveVelocityDisabled); } // _1E4 (weak)
	virtual void setMoveVelocity(bool useMoveVelocity)                                 // _1E8 (weak)
	{
		if (!useMoveVelocity) {
			setFPFlag(FPFLAGS_MoveVelocityDisabled);
		} else {
			resetFPFlag(FPFLAGS_MoveVelocityDisabled);
		}
	}
	virtual bool useMapCollision() { return !isFPFlag(FPFLAGS_MapCollisionDisabled); } // _1EC (weak)
	virtual void setMapCollision(bool useMapCollision)                                 // _1F0 (weak)
	{
		if (!useMapCollision) {
			setFPFlag(FPFLAGS_MapCollisionDisabled);
		} else {
			resetFPFlag(FPFLAGS_MapCollisionDisabled);
		}
	}
	virtual bool isZikatu()
	{
		return isFPFlag(FPFLAGS_Zikatu);
	}                                       // _1F4 (weak), is this a Wild Piki? (before type discovery, useless Pikmin)
	virtual void setZikatu(bool makeZikatu) // _1F8 (weak)
	{
		if (makeZikatu) {
			setFPFlag(FPFLAGS_Zikatu);
		} else {
			resetFPFlag(FPFLAGS_Zikatu);
		}

		if (makeZikatu) {
			setFPFlag(FPFLAGS_WasZikatu);
		}
	}
	virtual bool wasZikatu() { return isFPFlag(FPFLAGS_WasZikatu); } // _1FC (weak)
	virtual void inWaterCallback(WaterBox* wb) { }                   // _84 (weak)
	virtual void outWaterCallback() { }                              // _88 (weak)
	virtual f32 getMapCollisionRadius() { return 8.5f; }             // _200 (weak)
	virtual void wallCallback(Vector3f&) { }                         // _204 (weak)
	virtual void startMotion(int anim1Idx, int anim2Idx, SysShape::MotionListener* ml1,
	                         SysShape::MotionListener* ml2);     // _208
	virtual void onKeyEvent(const SysShape::KeyEvent& event) { } // _20C (weak)
	virtual void updateLookCreature();                           // _210
	virtual void do_updateLookCreature();                        // _214
	virtual void onSetPosition(Vector3f& dest)                   // _70 (weak)
	{
		mPosition = dest;
		onSetPosition();
	}
	virtual f32 getFaceDir() { return mFaceDir; }                                 // _64 (weak)
	virtual Vector3f getVelocity() { return mVelocity; }                          // _6C (weak)
	virtual void setVelocity(Vector3f& vel) { mVelocity = vel; }                  // _68 (weak)
	virtual void getVelocityAt(Vector3f& vec, Vector3f& vel) { vel = mVelocity; } // _184 (weak)
	virtual Vector3f* getSound_PosPtr() { return &mPosition; }                    // _100 (weak)
	virtual void onSetPosition() { }                                              // _218 (weak)
	virtual bool isWalking() { return false; }                                    // _21C (weak)

	bool assertMotion(int);

	void initFakePiki();
	void killFakePiki();

	void initAnimator();

	void initCaptureStomach();
	void startCaptureStomach(CollPart*);
	void endCaptureStomach();
	void updateStomach();

	void enableMotionBlend();
	void finishMotion();

	void setDoAnimCallback(IDelegate*);
	void clearDoAnimCallback();
	void updateWalkAnimation();

	static bool sNeckCallback(J3DJoint*, int);

	void startLookCreature(Creature*);
	void finishLook();
	void updateLook();

	void turnTo(Vector3f&);
	void moveRotation();
	void moveVelocity();

	bool debugShapeDL(char*);

	inline void setCurrVelocity(Vector3f& vel) { mTargetVelocity = vel; }

	// _000      = VTBL
	// _000-_178 = Creature
	// _178-_17C = MotionListener
	BitFlag<u32> mFakePikiFlags;            // _17C
	f32 mTraceMoveRadius;                   // _180, 0.0f for everything except carrot pikmin, which is 0.3f
	u32 mDontUseWallCallback;               // _184
	IDelegate* mDoAnimCallback;             // _188
	s16 mRoomIndex;                         // _18C
	WaterBox* mWaterBox;                    // _190
	CollPart* mTargetCollObj;               // _194
	f32 mNeckTheta;                         // _198
	f32 mNeckPhi;                           // _19C
	Vector3f* mLookAtPosition;              // _1A0
	u8 mLookAtTimer;                        // _1A4
	Creature* mLookAtTargetCreature;        // _1A8
	PikiAnimator mAnimator;                 // _1AC
	Vector3f mTargetVelocity;               // _1E4
	Vector3f mSimPosition;                  // _1F0, unused
	f32 mFaceDir;                           // _1FC
	Vector3f mVelocity;                     // _200
	Vector3f mPosition;                     // _20C
	Sys::Sphere mBoundingSphere;            // _218, was mShadowParam.mBoundingSphere
	int mBoundAnimIdx;                      // _228, current animIdx for held/bound object
	int _22C;                               // _22C, anim id of some description?
	int _230;                               // _230, anim id of some description?
	f32 mAnimSpeed;                         // _234
	Vector3f mPreviousPosition;             // _238, used to check what movements was made each frame
	f32 mFaceDirOffset;                     // _244
	Sys::Triangle* mFakePikiBounceTriangle; // _248
	Sys::TriIndexList* mTriList;            // _24C

	static f32 sCurrNeckTheta;
	static f32 sCurrNeckPhi;
};

struct FakePikiParms : public CreatureParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "FakePiki::Parms")
		    , mStepStartSpeed(this, 'fp01', "ASIBUMI 開始スピード", 5.0f, 0.0f, 500.0f)                 // 'ASIBUMI start speed' (stepping?)
		    , mWalkStartSpeed(this, 'fp02', "WALK 開始スピード", 8.0f, 0.0f, 500.0f)                    // 'WALK start speed'
		    , mRunStartSpeed(this, 'fp03', "RUN 開始スピード", 20.0f, 0.0f, 500.0f)                     // 'RUN start speed'
		    , mEscapeStartSpeed(this, 'fp04', "ESCAPE 開始スピード", 95.0f, 0.0f, 500.0f)               // 'ESCAPE start speed'
		    , mWalkPlaybackFrameCountMin(this, 'fp04', "WALK 再生フレーム数(min)", 60.0f, 0.0f, 300.0f) // 'WALK playback frame count (min)'
		    , mWalkPlaybackFrameCountMax(this, 'fp05', "WALK 再生フレーム数(max)", 90.0f, 0.0f,
		                                 300.0f)                                                      // 'WALK  playback frame count (max)'
		    , mRunPlaybackFrameCountMin(this, 'fp06', "RUN 再生フレーム数(min)", 40.0f, 0.0f, 300.0f) // 'RUN playback frame count (min)'
		    , mRunPlaybackFrameCountMax(this, 'fp07', "RUN 再生フレーム数(max)", 60.0f, 0.0f, 300.0f) // 'RUN playback frame count (max)'
		    , mEscapePlaybackFrameCountMin(this, 'fp08', "ESCAPE 再生フレーム数(min)", 60.0f, 0.0f,
		                                   300.0f) // 'ESCAPE playback frame count (min)'
		    , mEscapePlaybackFrameCountMax(this, 'fp09', "ESCAPE 再生フレーム数(max)", 90.0f, 0.0f,
		                                   300.0f) // 'ESCAPE playback frame count (max)'
		{
		}

		// _DC-_E8 = Parameters
		Parm<f32> mStepStartSpeed;              // _0E8
		Parm<f32> mWalkStartSpeed;              // _110
		Parm<f32> mRunStartSpeed;               // _138
		Parm<f32> mEscapeStartSpeed;            // _160
		Parm<f32> mWalkPlaybackFrameCountMin;   // _188
		Parm<f32> mWalkPlaybackFrameCountMax;   // _1B0
		Parm<f32> mRunPlaybackFrameCountMin;    // _1D8
		Parm<f32> mRunPlaybackFrameCountMax;    // _200
		Parm<f32> mEscapePlaybackFrameCountMin; // _228
		Parm<f32> mEscapePlaybackFrameCountMax; // _250
		                                        // _278 = IParameters ptr
	};

	FakePikiParms()
	    : mFakePikiParms()
	{
	}

	virtual void read(Stream& stream)
	{
		CreatureParms::read(stream);
		mFakePikiParms.read(stream);
	} // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8 		 = VTBL
	Parms mFakePikiParms; // _DC
};

} // namespace Game

#endif
