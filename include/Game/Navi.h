#ifndef _GAME_NAVI_H
#define _GAME_NAVI_H

#include "BitFlag.h"
#include "Game/FakePiki.h"
#include "Game/PelletView.h"
#include "Game/StateMachine.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
#include "efx/TNaviEffect.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "Sys/MatBaseAnimation.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "Color4.h"
#include "MonoObjectMgr.h"
#include "CollInfo.h"
#include "Vector3.h"

struct Controller;

enum NaviIndex {
	NAVIID_Olimar    = 0,
	NAVIID_Louie     = 1,
	NAVIID_President = 2,
};

#define GET_OTHER_NAVI(navi) (1 - (navi)->mNaviIndex)

// Louie scale is also used for president
#define OLIMAR_SCALE 1.3f
#define LOUIE_SCALE  1.5f

namespace PSM {
struct DirectorUpdator;
struct Navi;
} // namespace PSM

namespace Game {
struct CPlate;
struct NaviNukuAdjustStateArg;
struct NaviState;
struct NaviParms;

namespace ItemPikihead {
struct Item;
}

enum NaviControlFlags {
	NAVICTRL_InMovie = 0x1,
	NAVICTRL_InOnyon = 0x2,
};

struct NaviFSM : public StateMachine<Navi> {
	virtual void init(Navi*);                    // _08
	virtual void transit(Navi*, int, StateArg*); // _14

	// _00     = VTBL
	// _00-_1C = StateMachine
	int mBackupStateID; // _1C
};

struct NaviWhistle {
	NaviWhistle(Navi*);

	enum WhistleState { Whistle_Inactive, Whistle_Active, Whistle_Timeout };

	void init();
	void updatePosition();
	void start();
	void stop();
	bool timeout();
	void setFaceDir(f32);
	void updateWhistle();
	void update(Vector3f&, bool);

	Vector3f mNaviOffsetVec; // _00
	Vector3f mPosition;      // _0C
	Vector3f mNormal;        // _18
	f32 mRadius;             // _24
	u16 mState;              // _28
	f32 mActiveTime;         // _2C
	bool mIsWhistleActive;   // _30
	Navi* mNavi;             // _34
	Color4 mColor;           // _38
};

#define NAVI_THROWTIMER_LENGTH (10)

struct Navi : public FakePiki, virtual public PelletView {
	typedef NaviState StateType;
	Navi();

	// vtable 1 (Creature)
	virtual Vector3f getPosition();                                     // _08
	virtual void onInit(CreatureInitArg* settings);                     // _30
	virtual void onKill(CreatureKillArg* settings);                     // _34
	virtual void doAnimation();                                         // _3C
	virtual void doEntry();                                             // _40
	virtual void doSetView(int viewportNumber);                         // _44
	virtual void doViewCalc();                                          // _48
	virtual void doSimulation(f32);                                     // _4C
	virtual void doDirectDraw(Graphics& gfx);                           // _50
	virtual void setVelocity(Vector3f& vel);                            // _68 (weak)
	virtual void onSetPosition(Vector3f& dest);                         // _70
	virtual void inWaterCallback(WaterBox* wb);                         // _84
	virtual void outWaterCallback();                                    // _88
	virtual void bounceCallback(Sys::Triangle* tri);                    // _E8
	virtual void collisionCallback(CollEvent& event);                   // _EC
	virtual void platCallback(PlatEvent& event);                        // _F0
	virtual JAInter::Object* getJAIObject();                            // _F4
	virtual PSM::Creature* getPSCreature();                             // _F8
	virtual void on_movie_begin(bool shouldResetAnims);                 // _110
	virtual void on_movie_end(bool shouldResetAnims);                   // _114
	virtual void movieStartAnimation(u32 animIdx);                      // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo* info);     // _11C
	virtual void movieSetTranslation(Vector3f& dest, f32 faceDir);      // _124
	virtual void movieSetFaceDir(f32);                                  // _128
	virtual bool movieGotoPosition(Vector3f& dest);                     // _12C
	virtual void movieUserCommand(u32 command, MoviePlayer* curPlayer); // _130
	virtual void getShadowParam(ShadowParam& settings);                 // _134
	virtual void getLODSphere(Sys::Sphere& lodSphere);                  // _140
	virtual void onStickStart(Creature*);                               // _158
	virtual void onStickEnd(Creature*);                                 // _15C
	virtual bool ignoreAtari(Creature* toIgnore);                       // _190
	virtual bool stimulate(Interaction& data);                          // _1A4
	virtual char* getCreatureName();                                    // _1A8 (weak)
	virtual s32 getCreatureID() { return mNaviIndex; }                  // _1AC (weak)

	// vtable 2 (MotionListener + FakePiki + self)
	virtual int getDownfloorMass();                           // _1BC
	virtual void update();                                    // _1CC
	virtual f32 getMapCollisionRadius();                      // _200
	virtual void wallCallback(Vector3f& pos);                 // _204
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _20C (weak)
	virtual void do_updateLookCreature();                     // _214
	virtual bool isWalking();                                 // _21C
	virtual void viewEntryShape(Matrixf&, Vector3f&);         // _220 (weak)
	virtual SysShape::Model* viewGetShape();                  // _224 (weak)
	virtual f32 viewGetBaseScale();                           // _228 (weak)
	virtual void transit(int, StateArg*);                     // _22C

	// vtable 3 (PelletView) gets a few methods thunked by methods in vtable 2,
	// but no direct overrides.

	void addDamage(f32, bool);
	void applyDopes(int, Vector3f&);
	void applyDopeSmoke(CellObject*);
	void callPikis();
	ItemBigFountain::Item* checkBigFountain();
	ItemCave::Item* checkCave();
	FakePiki* checkDemoNaviAndPiki(Sys::Sphere&);
	ItemHole::Item* checkHole();
	Onyon* checkOnyon();
	void clearKaisanDisable();
	void clearThrowDisable();
	bool commandOn();
	void control();
	bool demoCheck();
	void demowaitAllPikis();
	void disableController();
	void enterAllPikis();
	void findNextThrowPiki();
	bool formationable();
	void fountainonAllPikis(Vector3f&);
	int getDopeCount(int);
	f32 getLifeRatio();
	OlimarData* getOlimarData();
	int getStateID();
	bool hasDope(int);
	void holeinAllPikis(Vector3f&);

	// Increase the amount of sprays in sprayType (use enum SPRAY_TYPE)
	void incDopeCount(int sprayType);
	bool invincible();
	bool isCStickNetural();
	void makeCStick(bool);
	void makeVelocity();
	u32 ogGetNextThrowPiki();
	bool procActionButton();
	bool releasePikis();
	void reviseController(Vector3f&);
	void set_movie_draw(bool);
	void setDeadLaydown();
	void setInvincibleTimer(u8);
	void setLifeMax();
	void setupNukuAdjustArg(ItemPikihead::Item*, NaviNukuAdjustStateArg&);
	void startDamage(f32);
	void startThrowDisable();
	bool throwable();
	void throwPiki(Piki*, Vector3f&);
	void updateCursor();
	void updateKaisanDisable();
	void updateThrowDisable();
	void useDope(int);

	inline void setCalcs()
	{
		SysShape::Model* model = mModel;
		model->loopTimer();
		model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = static_cast<J3DMtxCalcAnmBase*>(mAnimator.mBoundAnimator.getCalc());
	}

	inline void setCamera(PlayCamera* cam)
	{
		mCamera  = cam;
		mCamera2 = cam;
	}

	inline void setController(Controller* control)
	{
		mController1 = control;
		mController2 = control;
	}

	// inline NaviState* getCurrentState() { return mCurrentState; }

	inline void setControlFlag(u16 flag) { mNaviControlFlag.typeView |= flag; }
	inline void resetControlFlag(u16 flag) { mNaviControlFlag.typeView &= ~flag; }
	inline bool isControlFlag(u16 flag) { return mNaviControlFlag.typeView & flag; }

	// _000      = VTBL
	// _000-_250 = FakePiki
	// _250      = ptr to PelletView
	// u32 _250;                                // probably shouldn't be here?
	CPlate* mCPlateMgr;                     // _254
	u8 _258;                                // _258
	u8 mStickCount;                         // _259
	s32 mSprayCounts[2];                    // _25C proven signed by Navi::hasDope
	u8 _264[4];                             // _264
	bool mIsAlive;                          // _268
	u8 _269;                                // _269
	u8 _26A;                                // _26A
	PSM::Navi* mSoundObj;                   // _26C
	NaviFSM* mFsm;                          // _270
	NaviState* mCurrentState;               // _274
	Controller* mController1;               // _278
	Controller* mController2;               // _27C
	PlayCamera* mCamera;                    // _280
	PlayCamera* mCamera2;                   // _284
	BitFlag<u16> mNaviControlFlag;          // _288
	NaviWhistle* mWhistle;                  // _28C
	SysShape::Model* mMarkerModel;          // _290
	SysShape::Model* mCursorModel;          // _294
	Sys::MatRepeatAnimator* mCursorMatAnim; // _298
	Sys::MatLoopAnimator* mArrowMatAnim;    // _29C
	f32 mHealth;                            // _2A0
	u8 mInvincibleTimer;                    // _2A4
	Piki* mNextThrowPiki;                   // _2A8
	u8 _2AC;                                // _2AC
	f32 mHoldPikiTimer;                     // _2B0
	f32 _2B4;                               // _2B4
	f32 _2B8;                               // _2B8
	u8 mThrowTimer;                         // _2BC, use NAVI_THROWSTATE enum
	SysShape::Joint* mBeaconJoint;          // _2C0
	Vector3f mBeaconPosition;               // _2C4
	efx::TNaviEffect* mEffectsObj;          // _2D0
	s8 mDisbandTimer;                       // _2D4
	Footmarks* mFootmarks;                  // _2D8
	u16 mNaviIndex;                         // _2DC
	u8 _2DE;                                // _2DE
	Vector3f mCStickTargetVector;           // _2E0
	Vector3f mCStickPosition;               // _2EC
	f32 _2F8;                               // _2F8
	u8 _2FC;                                // _2FC
	u8 _2FD;                                // _2FD
	int mCStickState;                       // _300
	int mCStickIncrement;                   // _304
	f32 mSceneAnimationTimer;               // _308
	bool mCommandOn1;                       // _30C
	bool mCommandOn2;                       // _30D
	                                        // PelletView: _310 - _320
};

struct NaviMgr : public MonoObjectMgr<Navi>, public JKRDisposer {
	NaviMgr();

	// vtable 1 (CNode, _00)
	virtual ~NaviMgr(); // _08 (weak)

	// vtable 2 (MonoObjectMgr, _00)
	virtual void doAnimation();        // _64 (weak, thunk at _34)
	virtual void doEntry();            // _68 (weak, thunk at _38)
	virtual void doSimulation(f32 p1); // _74 (weak, thunk at _44)
	virtual Navi* birth();             // _7C
	virtual void resetMgr();           // _80 (weak, thunk at _54)

	// vtable 3 (JKRDisposer + self, _30)
	virtual void killAll();                          // _98
	virtual char* getMgrName() { return "NaviMgr"; } // _9C (weak)
	virtual bool frozenable() { return false; }      // _A0 (weak, thunk at _5C in vt 2)
	virtual void loadResources();                    // _A4 (weak, thunk at _50 in vt 2)

	void clearDeadCount();
	SysShape::Model* createModel(int);
	void createPSMDirectorUpdator();
	Navi* getActiveNavi();
	int getAliveCount();
	Navi* getAliveOrima(int);
	Navi* getDeadOrima(int);
	void informOrimaDead(int);
	void load();
	void loadResources_float();
	void setMovieDraw(bool);
	void setupSoundViewerAndBas();
	void setupNavi(Navi*);

	// Unused/inlined:
	unknown init();
	Navi* getSurviveNavi();
	unknown draw2d(J2DGrafContext&);

	static SysShape::AnimMgr* animMgr;

	// VT 3 pointer is at _30
	PSM::DirectorUpdator* _48;               // _48 (appears to be completely unused)
	PSM::DirectorUpdator* mPSMMgr;           // _4C (used for damage taking bgm mix)
	int mDeadNavis;                          // _50
	int mNaviDeadFlags[2];                   // _54 (seems to translate the order of killed captains to their ids?)
	BitFlag<u8> mFlags;                      // _5C
	Sys::MatTevRegAnimation mCursorAnims[2]; // _60
	Sys::MatTevRegAnimation mMarkerAnims[2]; // _88
	J3DModelData* mOlimarModel;              // _B0
	J3DModelData* mLouieModel;               // _B4 (also president model)
	J3DModelData* mCursorModelData;          // _B8
	u8 _BC[8];                               // _BC
	J3DModelData* mMarkerModelData;          // _C4
	NaviParms* mNaviParms;                   // _C8
	CollPartFactory* mCollData;              // _CC
};

extern NaviMgr* naviMgr;
} // namespace Game

namespace og {
namespace Screen {
void DataNavi::update(int naviIdx)
{
	Game::Navi* navi = Game::naviMgr->getAt(naviIdx);
	mFollowPikis     = Game::GameStat::formationPikis.mCounter[naviIdx];
	mNextThrowPiki   = navi->ogGetNextThrowPiki();
	mDope1Count      = navi->getDopeCount(1);
	mDope0Count      = navi->getDopeCount(0);
	mNaviLifeRatio   = navi->getLifeRatio();
}
} // namespace Screen
} // namespace og

#endif
