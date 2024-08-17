#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

#include "CarryInfo.h"
#include "Game/DynCreature.h"
#include "Game/DynParticle.h"
#include "ObjectMgr.h"
#include "GenericObjectMgr.h"
#include "Game/Interaction.h"
#include "Game/PelletCarry.h"
#include "Game/pelletConfig.h"
#include "Game/StateMachine.h"
#include "Game/BasePelletMgr.h"
#include "Game/GameSystem.h"
#include "efx/TOrima.h"
#include "SysShape/MotionListener.h"
#include "SysShape/KeyEvent.h"
#include "SysShape/Animator.h"
#include "SysShape/Joint.h"
#include "Sys/Sphere.h"
#include "Sys/Triangle.h"
#include "CarryInfo.h"
#include "TexCaster.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "P2Macros.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "System.h"
#include "Iterator.h"

// pellet carry colors/onion destinations
// for use with Pellet::mPelletColor
#define PELCOLOR_BLUE   (0)
#define PELCOLOR_RED    (1)
#define PELCOLOR_YELLOW (2)
#define PELCOLOR_RANDOM (3)

#define PELCOLOR_SPICY  (0)
#define PELCOLOR_BITTER (1)

#define PELCOLOR_SPECTRALID (0)
#define PELSIZE_SPECTRALID  (1)

// for use with Pellet:mPelletType and getKind()
struct PelletType {
	enum Type {
		Number   = 0,
		Carcass  = 1,
		Berry    = 2,
		Treasure = 3,
		Upgrade  = 4,
		Invalid  = 0xFF,
	};
};

namespace PSM {
struct EventBase;
} // namespace PSM

namespace Game {
struct BasePelletMgr;
struct Pellet;
struct PelletInitArg;
struct PelletView;
struct PelletFSM;
struct PathNode;
struct PelletState;
struct Onyon;

enum PelletBirthType {
	PelBirthType_Normal      = 0,
	PelBirthType_Appear      = 1,
	PelBirthType_ScaleAppear = 2,
	PelBirthType_Piklopedia  = 3,
};

struct PelletMgr : public NodeObjectMgr<GenericObjectMgr> {
	struct OtakaraItemCode {
		OtakaraItemCode(s16 v = 0)
		    : mValue(v)
		{
		}

		operator s16() { return mValue; }

		bool isNull();
		void read(Stream&);
		void write(Stream&);

		s16 mValue; // _00
	};

	PelletMgr();

	// vtable 1
	virtual ~PelletMgr() { }                    // _08 (weak)
	virtual void doAnimation();                 // _64 (weak)
	virtual void doEntry();                     // _68 (weak)
	virtual void doSetView(int viewportNumber); // _6C (weak)
	virtual void doViewCalc();                  // _70 (weak)
	virtual void doSimulation(f32 rate);        // _74 (weak)
	virtual void doDirectDraw(Graphics& gfx);   // _78 (weak)
	virtual char* getMgrName()                  // _80 (weak)
	{
		return "ペレットマネージャ"; // pellet manager
	}
	virtual char* getCaveName(int);       // _84
	virtual int getCaveID(char*);         // _88
	virtual void doSimpleDraw(Viewport*); // _8C (weak)

	void setMovieDraw(bool);

	void createManagers(u32);
	void resetMgrs();
	void setupResources();
	Pellet* birth(PelletInitArg*);
	bool setUse(PelletInitArg*);
	bool makePelletInitArg(PelletInitArg&, char*);
	void makeVsCarryMinMax(PelletInitArg&, char*);
	bool makePelletInitArg(PelletInitArg&, PelletMgr::OtakaraItemCode&);
	void makeOtakaraItemCode(char*, PelletMgr::OtakaraItemCode&);
	void addMgr(BasePelletMgr*);
	void setupSoundViewerAndBas();
	void decode(s32, u8&, int&);
	int encode(u8, int);
	BasePelletMgr* getMgrByID(u8);
	void calcNearestTreasure(Vector3f&, f32);

	static bool mDebug;
	static bool disableDynamics;

	bool mMovieDrawDisabled; // _3C, setMovieDraw sets this to !input
};

struct PelletIterator {
	PelletIterator();

	void first();
	bool isDone();
	void next();
	Pellet* operator*();
	void setFirst();

	u32 mType;                            // _00, always 0, if its anything else the game will crash, so thats probably good
	FixedSizePelletMgr<Pellet>* mMgr;     // _04
	TObjectNode<GenericObjectMgr>* mNode; // _08
	int mIndex;                           // _0C
};

/**
 * @size{0x28}
 */
struct PelletInitArg : public CreatureInitArg {
	PelletInitArg()
	{
		mDoSkipCreateModel    = false;
		mState                = PelBirthType_Normal;
		mPelletType           = PelletType::Invalid;
		mPelView              = nullptr;
		mDontCheckCollected   = 0;
		mUnusedFlag           = true;
		mAdjustWeightForSquad = 0;
		mMaxCarriers          = -1;
		mMinCarriers          = -1;
		mUnusedFlag2          = false;
		mFromEnemy            = 0;
	}

	/**
	 * @reifiedAddress{80107C2C}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "PelletInitArg";
	}

	bool mUnusedFlag;         // _04, always true, never used
	char* mTextIdentifier;    // _08
	int mPelletColor;         // _0C, for number pellets
	int mPelletIndex;         // _10
	u16 mState;               // _14
	u8 mPelletType;           // _16, use PelletType:: struct
	u8 mDontCheckCollected;   // _17, true = dont check if you already have it before spawning, never true
	PelletView* mPelView;     // _18
	u8 mDoSkipCreateModel;    // _1C, true for corpses, or breadbug drops since those were already loaded
	u8 mAdjustWeightForSquad; // _1D, should Item decrease weight for piki squads that are less than minimum carry weight
	u8 mUnusedFlag2;          // _1E, always false, never used
	u8 mFromEnemy;            // _1F
	int mMinCarriers;         // _20
	int mMaxCarriers;         // _24
};

struct PelletIndexInitArg : public PelletInitArg {
	PelletIndexInitArg(int);
};

struct PelletNumberInitArg : public PelletInitArg {
	PelletNumberInitArg(int size, int);
};

struct PelletKillArg : public CreatureKillArg {
	inline PelletKillArg()
	    : CreatureKillArg(CKILL_NULL)
	{
		mDoRevive = true;
	}

	// _00     = VTBL
	// _00-_08 = CreatureKillArg
	u8 mDoRevive; // _08
};

/**
 * @size = 0x458
 */
struct Pellet : public DynCreature, public SysShape::MotionListener, public CarryInfoOwner {
	typedef PelletState StateType;

	struct PelletSlots {
		PelletSlots()
		{
			for (int i = 0; i < 16; i++) {
				mSlots[i] = 0;
			}
		}

		u8 mSlots[16]; // _00
	};

	Pellet();

	enum PelletFlag {
		FLAG_LOOZY            = 0,
		FLAG_NAVI_NAPSACK     = 1,
		FLAG_NONE             = 2,
		FLAG_VS_CHERRY        = 3,
		FLAG_VS_BEDAMA_RED    = 4,
		FLAG_VS_BEDAMA_BLUE   = 5,
		FLAG_VS_BEDAMA_YELLOW = 6
	};

	////////////// VTABLE 1 (DYNCREATURE)
	virtual Vector3f getPosition() // _08 (weak)
	{
		return mPelletPosition;
	}
	virtual void getBoundingSphere(Sys::Sphere& boundSphere); // _10
	virtual bool deferPikiCollision() { return true; }        // _20 (weak)
	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg* settings);           // _30 (weak)
	virtual void onKill(CreatureKillArg* settings);           // _34
	virtual void doAnimation();                               // _3C
	virtual void doEntry();                                   // _40
	virtual void doSetView(int viewportNumber);               // _44
	virtual void doViewCalc();                                // _48
	virtual void doSimulation(f32 rate);                      // _4C
	virtual void doDirectDraw(Graphics& gfx);                 // _50
	virtual f32 getFaceDir() { return mFaceDir; }             // _64 (weak)
	virtual void setVelocity(Vector3f& vel);                  // _68
	virtual Vector3f getVelocity();                           // _6C
	virtual void onSetPosition(Vector3f& dest)                // _70 (weak)
	{
		mPelletPosition = dest;
		onSetPosition();
	}
	virtual void updateTrMatrix();                                   // _78
	virtual bool inWater() { return mIsInWater; }                    // _8C (weak)
	virtual void onStartCapture();                                   // _94
	virtual void onUpdateCapture(Matrixf& mtx);                      // _98
	virtual void onEndCapture();                                     // _9C
	virtual void doSave(Stream& stream);                             // _E0
	virtual void doLoad(Stream& stream);                             // _E4
	virtual void bounceCallback(Sys::Triangle* tri);                 // _E8
	virtual JAInter::Object* getJAIObject();                         // _F4
	virtual PSM::Creature* getPSCreature();                          // _F8
	virtual Vector3f* getSound_PosPtr() { return &mPelletPosition; } // _100 (weak)
	virtual void getShadowParam(ShadowParam& settings);              // _134
	virtual bool needShadow();                                       // _138
	virtual void getLODSphere(Sys::Sphere& lodSphere);               // _140
	virtual void startPick();                                        // _148
	virtual void endPick(bool);                                      // _14C
	virtual bool isSlotFree(s16);                                    // _168
	virtual s16 getFreeStickSlot();                                  // _16C
	virtual s16 getNearFreeStickSlot(Vector3f&);                     // _170
	virtual s16 getRandomFreeStickSlot();                            // _174
	virtual void onSlotStickStart(Creature*, s16);                   // _178
	virtual void onSlotStickEnd(Creature*, s16);                     // _17C
	virtual void calcStickSlotGlobal(s16, Vector3f&);                // _180
	virtual bool stimulate(Interaction& data);                       // _1A4
	virtual char* getCreatureName();                                 // _1A8
	virtual s32 getCreatureID();                                     // _1AC
	virtual void onSetPosition();                                    // _1B0
	////////////// VTABLE 1 END (DYNCREATURE)

	////////////// VTABLE 2  (MOTIONLISTENER)
	// --- (only thunk)
	////////////// VTABLE 2 END (MOTIONLISTENER)

	////////////// VTABLE 3 (CARRYINFOOWNER + SELF)
	// getCarryInfoParam thunk at _1C8
	virtual void do_onInit(CreatureInitArg*) { }                 // _1CC (weak)
	virtual void onCreateShape() { }                             // _1D0 (weak)
	virtual void theEntry();                                     // _1D4
	virtual void onBounce() { }                                  // _1D8 (weak)
	virtual void shadowOn();                                     // _1DC
	virtual void shadowOff();                                    // _1E0
	virtual bool isPickable();                                   // _1E4
	virtual s32 getBedamaColor() { return -1; }                  // _1E8 (weak)
	virtual void do_update() { }                                 // _1EC (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent& keyEvent); // _1F0 (weak, thunk at _1BC)
	virtual u8 getKind() = 0;                                    // _1F4
	virtual void changeMaterial() { }                            // _1F8 (weak)
	virtual void createKiraEffect(Vector3f&) { }                 // _1FC (weak)
	virtual void getCarryInfoParam(CarryInfoParam& infoParam);   // _200 (not weak, thunk at _1C8)
	virtual bool isCarried();                                    // _204
	virtual bool isPicked() { return mPickFlags & 1; }           // _208 (weak)
	virtual void sound_otakaraEventStart() { }                   // _20C (weak)
	virtual void sound_otakaraEventRestart() { }                 // _210 (weak)
	virtual void sound_otakaraEventStop() { }                    // _214 (weak)
	virtual void sound_otakaraEventFinish() { }                  // _218 (weak)

	u8 getWallTimer();
	void clearClaim();
	void sendClaim();
	void updateClaim();
	f32 getBuryDepthMax();
	f32 getBuryDepth();
	f32 getBuryRadius(f32);

	f32 getBottomRadius();
	f32 getPickRadius();
	f32 getCylinderHeight();
	int getConfigIndex();
	char* getConfigName();
	int getPelletConfigMin();
	int getPelletConfigMax();
	void setupParticles();
	void setupParticles_simple();
	void setupParticles_tall();
	bool panmodokiCarryable();
	void finishDisplayCarryInfo();
	void setCarryColor(int);
	void clearCarryColor();
	void allocateTexCaster();
	void setPanModokiRotation(f32);
	void setOrientation(Matrixf&);
	int getStateID();
	void update();
	void getPikiBirthCount(int&, int&);
	void entryShape();
	void init_pmotions();
	void update_pmotions();
	void start_pmotions();
	void stop_carrymotion();
	void finish_carrymotion();
	int getSpeicalSlot();
	Onyon* getPelletGoal();
	int getTotalPikmins();
	int getTotalCarryPikmins();
	int getPikmins(int);
	int getFace();
	void clearDiscoverDisable();
	void startDiscoverDisable(u8);
	void updateDiscoverDisable();
	bool discoverDisabled();

	inline void setValidColor(u16 color)
	{
		P2ASSERTLINE(909, !(color > 2));
		mPelletColor = color;
	}

	inline void setSlotOccupied(int slot)
	{
		if (slot < 128) {
			u32 index = slot >> 3;
			u32 flag  = 1 << slot - index * 8;
			mSlots.mSlots[15 - index] |= flag;
		}
	}

	inline void setSlotFree(int slot)
	{
		if (slot < 128) {
			u32 index = slot >> 3;
			u32 flag  = 1 << slot - index * 8;
			mSlots.mSlots[15 - index] &= ~flag;
		}
	}

	inline void animate_pmotions(SysShape::Animator* animator)
	{
		for (int i = 0; i < mNumPMotions; i++) {
			animator->animate(1.0f);

			char jointName[128];
			sprintf(jointName, "pmotion");

			SysShape::Joint* joint = mModel->getJoint(jointName);

			if (joint) {
				u16 index               = joint->mJointIndex;
				SysShape::Model* model  = mModel;
				J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(animator->getCalc());

				model->mJ3dModel->mModelData->mJointTree.mJoints[index]->mMtxCalc = calc;
			}
		}
	}

	inline bool isTreasurePosition() // this probably needs a better name; used in Pellet::onSetPosition
	{
		bool check = false;
		if ((mCaptureMatrix == nullptr) && (PelletMgr::mDebug == false) && (mConfig->mParams.mDepth.mData > 0.0f) && (mIsCaptured == 0)) {
			check = true;
		}
		if (gameSystem->isVersusMode() && (mCaptureMatrix == nullptr) && (mIsCaptured == 0)) {
			u8 test = mPelletFlag;
			if (test == FLAG_VS_BEDAMA_RED) {
				check = false;
			} else if (test == FLAG_VS_BEDAMA_BLUE) {
				check = false;
			} else if (test == FLAG_VS_BEDAMA_YELLOW && getStateID() != 5) {
				check = true;
			}
		}
		return check;
	}

	inline int getPokoValue() { return mConfig->mParams.mMoney.mData; }

	inline f32 getStickRadius() { return mConfig->mParams.mRadius.mData; }

	inline StateType* getCurrState() { return mCurrentState; }

	inline void setCurrState(StateType* state) { mCurrentState = state; }

	inline void setupDynParticle(int idx, f32 height, Vector3f& rotation)
	{
		mRotation                           = mRotation + rotation;
		mDynParticle->getAt(idx)->mRotation = rotation;
		mDynParticle->getAt(idx)->mRadius   = height;
	}

	inline bool checkBedamaColor(int color)
	{
		int bedamaColor = getBedamaColor();
		return bedamaColor != color;
	}

	inline Vector3f getOffset() { return mConfig->mParams.mOffset.mData; }

	// _00		= VTABLE 1
	// _04-_314	= DYNCREATURE
	// _318 	= VTABLE 2? 3?
	f32 mRadius;                      // _31C
	f32 mDepth;                       // _320
	bool mIsBounced;                  // _324
	bool mIsInWater;                  // _325
	TexCaster::Caster* mCaster;       // _328
	u8 mPelletFlag;                   // _32C
	u8 mDiscoverDisable;              // _32D
	PSM::EventBase* mSoundMgr;        // _330
	PelletCarry* mPelletCarry;        // _334
	u8 mNumPMotions;                  // _338
	SysShape::Animator mPmotionAnim;  // _33C
	PelletView* mPelletView;          // _358
	PelletConfig* mConfig;            // _35C
	int mMaxCollParticle;             // _360
	u8 mDynamicType;                  // _364, 2 = never, 1 = lod, 0 = always
	u8 _365[0x33];                    // _365 - unknown
	CarryInfoList* mCarryInfoList;    // _398
	u8 mIsDynamic;                    // _39C - unknown
	u8 _39D[0xF];                     // _39D - unknown
	Vector3f mPelletPosition;         // _3AC
	f32 mFaceDir;                     // _3B8
	u8 mWallTimer;                    // _3BC
	int mClaim;                       // _3C0
	bool mIsCaptured;                 // _3C4, might be more like "is alive"
	PelletFSM* mPelletSM;             // _3C8
	PelletState* mCurrentState;       // _3CC
	u8 mPickFlags;                    // _3D0
	int mCarryColor;                  // _3D4
	int mMinCarriers;                 // _3D8, to do with pikmin number
	int mMaxCarriers;                 // _3DC
	f32 mAngleOffset;                 // _3E0
	PelletSlots mSlots;               // _3E4
	s16 mSlotCount;                   // _3F4
	u8 mIsAlwaysCarried;              // _3F6, is never set to true, probably testing
	u32 mPikminCount[PikiColorCount]; // _3F8
	u32 mTotalCarriers;               // _414, might be for non-pikmin carriers?
	f32 mCarryPower;                  // _418
	SysShape::Animator mCarryAnim;    // _41C
	f32 mAnimSpeed;                   // _438
	u16 mPelletSizeType;              // _43C, used for number pellets
	u16 mPelletColor;                 // _43E, this reflects pellet color for Number pellets, and the color of berries
	int mSlotIndex;                   // _440
	Sys::Sphere mLodSphere;           // _444
	BasePelletMgr* mMgr;              // _454

	static bool sFromTekiEnable;
};

struct PelletFSM : public StateMachine<Pellet> {
	virtual void init(Pellet*); // _08

	// _00 		= VTABLE
	// _04-_1C 	= StateMachine<Pellet>
};

enum StateID {
	PELSTATE_Normal      = 0,
	PELSTATE_Goal        = 1,
	PELSTATE_Bury        = 2,
	PELSTATE_Up          = 3,
	PELSTATE_Appear      = 4,
	PELSTATE_ScaleAppear = 5,
	PELSTATE_Zukan       = 6,
	PELSTATE_GoalWait    = 7,
	PELSTATE_Return      = 8,
	PELLET_STATE_COUNT, // 9
};

struct PelletGoalStateArg : public StateArg {
	inline PelletGoalStateArg(Creature* creature) { mCreature = creature; }

	Creature* mCreature; // _00
	// _04 = VTBL

	virtual char* getName() { return "PelletGoalStateArg"; } // _08 (weak)
};

struct PelletReturnStateArg : public StateArg {
	inline PelletReturnStateArg(Vector3f& pos) { mPosition = pos; }

	Vector3f mPosition; // _00
};

struct PelletState : public FSMState<Pellet> {
	PelletState(int id)
	    : FSMState<Pellet>(id)
	{
	}

	virtual bool isBuried() { return false; }   // _20 (weak)
	virtual bool appeared() { return true; }    // _24 (weak)
	virtual bool isPickable() { return false; } // _28 (weak)

	u8 _0C[0x4]; // _0C
};

struct PelletAppearState : public PelletState {
	PelletAppearState()
	    : PelletState(PELSTATE_Appear)
	{
	}

	virtual void init(Pellet*, StateArg*);    // _08
	virtual void exec(Pellet*);               // _0C
	virtual void cleanup(Pellet*);            // _10
	virtual bool appeared() { return false; } // _24 (weak)

	f32 mTime;      // _10
	f32 mTimeSine;  // _14
	f32 mGoalScale; // _18
	f32 _1C;        // _1C
	f32 _20;        // _20
	f32 mDuration;  // _24
	f32 mMagnitude; // _28
	bool mEfxMade;  // _29
};

struct PelletBuryState : public PelletState {
	PelletBuryState()
	    : PelletState(PELSTATE_Bury)
	{
	}

	virtual void init(Pellet*, StateArg*);   // _08
	virtual void exec(Pellet*);              // _0C
	virtual void cleanup(Pellet*);           // _10
	virtual bool isBuried() { return true; } // _20 (weak)
};

struct PelletGoalState : public PelletState {
	PelletGoalState()
	    : PelletState(PELSTATE_Goal)
	{
	}

	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	bool checkMovie(Pellet*);

	Creature* mOnyon;  // _10
	f32 _14;           // _14
	f32 mDistance;     // _18
	f32 mSuckDelay;    // _1C
	f32 mScale;        // _20
	f32 mSuckTime;     // _24
	Vector3f mCurrPos; // _28
	bool mStartSuck;   // _34
	f32 mTimer;        // _38
	u8 mInDemo;        // _3C
	u8 mIsWaiting;     // _3D
	u8 mDidSuikomi;    // _3E
};

struct PelletGoalWaitState : public PelletState {
	PelletGoalWaitState()
	    : PelletState(PELSTATE_GoalWait)
	{
	}

	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	Creature* mObj; // _10
};

struct PelletNormalState : public PelletState {
	PelletNormalState()
	    : PelletState(PELSTATE_Normal)
	{
	}

	virtual void init(Pellet*, StateArg*);     // _08
	virtual void exec(Pellet*);                // _0C
	virtual void cleanup(Pellet*);             // _10
	virtual bool isPickable() { return true; } // _28 (weak)
};

struct PelletReturnArg : StateArg {
	inline PelletReturnArg(Vector3f& vec) { m_endPos = vec; }

	Vector3f m_endPos;
};

struct PelletReturnState : public PelletState {
	PelletReturnState();

	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	int initPathfinding(Pellet*);
	u32 execPathfinding(Pellet*);
	u32 execMove(Pellet*);
	u32 execMoveGoal(Pellet*);

	void flick(Pellet*);
	void getWayPont(int);

	f32 mTimer;                     // _10
	f32 mPeltYScale;                // _14
	u8 mDoEfx;                      // _18
	u8 mDoFlick;                    // _19
	u16 mState;                     // _1A
	u32 mPathCheckID;               // _1C
	Vector3f mGoalPos;              // _20
	PathNode* mPathNode;            // _2C
	PathNode* mPathNodePrev;        // _30
	int mPathNodes;                 // _34
	::efx::TOrimaLight* mEfx;       // _38
	::efx::TOrimaLightAct* mEfxAct; // _3C
};

struct PelletScaleAppearState : public PelletState {
	PelletScaleAppearState()
	    : PelletState(PELSTATE_ScaleAppear)
	{
	}

	// might inherit PelletAppearState or vice versa?
	virtual void init(Pellet*, StateArg*);    // _08
	virtual void exec(Pellet*);               // _0C
	virtual void cleanup(Pellet*);            // _10
	virtual bool appeared() { return false; } // _24 (weak)

	f32 mTime;      // _10
	f32 mAngle;     // _14
	f32 mGoalScale; // _18
	f32 _1C;        // _1C
	f32 _20;        // _20
	f32 mDuration;  // _24
	f32 mMagnitude; // _28
	bool mEfxMade;  // _2C
};

struct PelletUpState : public PelletState {
	PelletUpState()
	    : PelletState(PELSTATE_Up)
	{
	}

	virtual void init(Pellet*, StateArg*);   // _08
	virtual void exec(Pellet*);              // _0C
	virtual void cleanup(Pellet*);           // _10
	virtual bool isBuried() { return true; } // _20 (weak)
};

struct PelletZukanState : public PelletState {
	PelletZukanState()
	    : PelletState(PELSTATE_Zukan)
	{
	}

	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	f32 mTimer; // _10
};

extern PelletMgr* pelletMgr;

} // namespace Game

#endif
