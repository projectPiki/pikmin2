#ifndef _GAME_ENTITIES_ITEMONYON_H
#define _GAME_ENTITIES_ITEMONYON_H

#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "SysShape/Joint.h"
#include "SysShape/KeyEvent.h"
#include "efx/Arg.h"
#include "CollInfo.h"
#include "Vector3.h"

enum OnyonTypes {
	ONYON_TYPE_BLUE   = 0,
	ONYON_TYPE_RED    = 1,
	ONYON_TYPE_YELLOW = 2,
	ONYON_TYPE_MAX,
	ONYON_TYPE_POD = ONYON_TYPE_MAX,
	ONYON_TYPE_SHIP,
};

enum OnyonObjects {
	ONYON_OBJECT_ONYON = 0,
	ONYON_OBJECT_POD   = 1,
	ONYON_OBJECT_SHIP  = 2,
};

struct ModelEffect;

namespace efx {
struct Container;
struct ContainerAct;
struct TForever2;
struct TPodOpenA;
struct TPodOpenB;
struct TChasePosYRot2;
struct TPodKira;
struct TChaseMtx2;
struct TUfoPodOpenSuck;
struct TUfoGasIn;
struct TUfoGasOut;
struct TPodSpot;
struct TUfoSpot;
struct TUfoPodOpen;
struct TUfoSpotact_ver01;
} // namespace efx

namespace Game {
struct Piki;
struct WayPoint;

struct Onyon : public BaseItem {
	enum cSpotState {
		SPOTSTATE_Closed  = 0,
		SPOTSTATE_Closing = 1,
		SPOTSTATE_Opening = 2,
		SPOTSTATE_Opened  = 3,
	};

	enum cSuckState {
		SUCKSTATE_Opening    = 0, // begin the hatch opening animation
		SUCKSTATE_Opened     = 1, // hatch is done opening
		SUCKSTATE_GetPellet  = 2, // set when pellet reaches ship
		SUCKSTATE_IdleOpen   = 3, // ship waiting for more pellets (3 seconds)
		SUCKSTATE_Closing    = 4, // begin hatch closing animation
		SUCKSTATE_IdleClosed = 5, // default idle state
	};

	Onyon();
	Onyon(int); // this should be inline

	/////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                     // _30
	virtual void onKill(CreatureKillArg* settings);                     // _34
	virtual void doDirectDraw(Graphics& gfx);                           // _50
	virtual f32 getFaceDir() { return mFaceDir; }                       // _64 (weak)
	virtual bool sound_culling();                                       // _104
	virtual void on_movie_end(bool shouldResetAnims);                   // _114
	virtual void movieUserCommand(u32 command, MoviePlayer* curPlayer); // _130
	virtual void getShadowParam(ShadowParam& settings);                 // _134
	virtual bool needShadow();                                          // _138
	virtual void getLODCylinder(Sys::Cylinder&);                        // _144
	virtual Vector3f getSuckPos();                                      // _194
	virtual Vector3f getGoalPos();                                      // _198
	virtual bool isSuckReady();                                         // _19C
	virtual BOOL isSuckArriveWait();                                    // _1A0
	virtual bool stimulate(Interaction& data);                          // _1A4
	virtual char* getCreatureName() { return "Onyon"; }                 // _1A8 (weak)
	virtual void makeTrMatrix();                                        // _1C4
	virtual void doAI();                                                // _1C8
	virtual void changeMaterial();                                      // _1D0
	virtual void do_updateLOD();                                        // _1D4
	virtual void do_doAnimation();                                      // _20C
	virtual void onSetPosition();                                       // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event);           // _220
	virtual void onKeyEvent_UFO(const SysShape::KeyEvent&);             // _224
	virtual void onKeyEvent_Onyon(const SysShape::KeyEvent&);           // _228
	/////////////// VTABLE END

	void setType(int);
	void setupTevRegAnim(int);
	void startPropera();
	void stopPropera();
	void setSpotState(cSpotState);
	void forceClose();
	void startWaitMotion();
	Vector3f getFlagSetPos();
	void vsChargePikmin();
	void doEmit(Creature*, bool);
	CollPart* getLegPart(int);
	CollPart* getFootPart(int);
	void setSpotEffect(bool);
	void setSpotEffectActive(bool);
	void efxSuikomi();
	void efxPafuPafu();
	void efxPafuKira();
	int getStoreCount();
	void enterPiki(Piki*);
	void exitPikis(int, int);
	Creature* exitPiki();
	bool insideAccessArea(Vector3f&);
	Vector3f getInEnd_UFO();
	Vector3f getInStart_UFO();
	Vector3f getOutStart_UFO();
	f32& getPMotionSpeed(int);
	SysShape::Animator& getPAnimator(int);
	void update_pmotions();

	void updateSpot();
	void initTube();
	void init_pmotions();

	inline Vector3f getJointPosition(SysShape::Joint* joint)
	{
		Vec outVec;
		Vector3f offs = Vector3f(0.0f, 0.0f, 7.0f);

		PSMTXMultVec(joint->getWorldMatrix()->mMatrix.mtxView, (Vec*)&offs, &outVec);
		offs = Vector3f(outVec);
		return offs;
	}

	// _00 		= VTBL
	// _00-_1D8	= BaseItem
	u32 mPikisToWithdraw;                    // _1D8, red/blue/yellow pikmin queued to exit the onion
	f32 mReleasePikisTimer;                  // _1DC
	bool mIsReleasingPikis;                  // _1E0
	u32 mWhitesToWithdraw;                   // _1E4, white pikmin queued to exit the ship
	u32 mPurplesToWithdraw;                  // _1E8, purple pikmin queued to exit the ship
	::efx::Container* mContainer;            // _1EC
	::efx::ContainerAct* mContainerAct;      // _1F0
	ModelEffect* mSpotbeamModel;             // _1F4
	::efx::TPodOpenA* mPodOpenA;             // _1F8
	::efx::TPodOpenB* mPodOpenB;             // _1FC
	::efx::TPodSpot* mPodSpot;               // _200
	::efx::TPodKira* mPodKira;               // _204
	::efx::TUfoSpot* mUfoSpot;               // _208
	::efx::TUfoSpotact_ver01* mUfoSpotAct01; // _20C
	::efx::TUfoPodOpen* mUfoPodOpen;         // _210
	::efx::TUfoPodOpenSuck* mUfoPodOpenSuck; // _214
	::efx::TUfoGasIn* mUfoGasIn;             // _218
	::efx::TUfoGasOut* mUfoGasOut;           // _21C
	f32 mSpotGrowTimer;                      // _220
	u8 mSpotState;                           // _224
	f32 mFaceDir;                            // _228
	u16 mToBirth;                            // _22C, used to track how many pikmin need to be spawned
	u16 mOnyonType;                          // _22E
	u16 mPikminType;                         // _230
	Sys::MatLoopAnimator* mMatAnim1;         // _234, for the pistons
	Sys::MatBaseAnimator* mMatAnim2;         // _238, for the glowing lights
	WayPoint* mGoalWayPoint;                 // _23C
	u8 mSuckState;                           // _240
	f32 mSuckTimer;                          // _244
	SysShape::Joint* mPikiInJoint;           // _248, what pikmin target when entering the ship
	SysShape::Joint* mPikiOutJoint;          // _24C, what pikmin appear from when exiting the ship
	int mPMotionCount;                       // _250, number of pMotions to use, always 3 (for the ship) normally
	SysShape::Animator* mPMotionList;        // _254, list of pAnim objects
	f32* mPMotionSpeeds;                     // _258
	f32 mPropera;                            // _25C, controls speed of one of the ships pMotions
};

namespace ItemOnyon {

// TODO: cull reinterpret_cast
struct Mgr : public BaseItemMgr, public Container<Onyon> {
	Mgr();

	virtual u32 generatorGetID() { return 'onyn'; }                                                       // _58 (weak)
	virtual u32 generatorLocalVersion() { return '0001'; }                                                // _68 (weak)
	virtual void doAnimation() { TO_ITEMMGR(mNodeObjectMgr)->doAnimation(); }                             // _08 (weak)
	virtual void doEntry() { TO_ITEMMGR(mNodeObjectMgr)->doEntry(); }                                     // _0C (weak)
	virtual void doSetView(int viewportNumber) { TO_ITEMMGR(mNodeObjectMgr)->doSetView(viewportNumber); } // _10 (weak)
	virtual void doViewCalc() { TO_ITEMMGR(mNodeObjectMgr)->doViewCalc(); }                               // _14 (weak)
	virtual void doSimulation(f32 constraint) { TO_ITEMMGR(mNodeObjectMgr)->doSimulation(constraint); }   // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx) { TO_ITEMMGR(mNodeObjectMgr)->doDirectDraw(gfx); }           // _1C (weak)
	virtual ~Mgr();                                                                                       // _A0
	virtual void initDependency();                                                                        // _38
	virtual void setupSoundViewerAndBas();                                                                // _44
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*);                                 // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                                                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);                                               // _64
	virtual J3DModelData* generatorGetShape(GenItemParm*);                                                // _6C
	virtual GenItemParm* generatorNewItemParm();                                                          // _70
	virtual Onyon* get(void* index) { return static_cast<Onyon*>(mNodeObjectMgr.get(index)); }            // _A4 (weak)
	virtual void* getNext(void* index) { return mNodeObjectMgr.getNext(index); }                          // _A8 (weak)
	virtual void* getStart() { return mNodeObjectMgr.getStart(); }                                        // _AC (weak)
	virtual void* getEnd() { return mNodeObjectMgr.getEnd(); }                                            // _B0 (weak)

	Onyon* birth(int, int);
	Onyon* getOnyon(int);
	void init();
	void load();

	// _00      = VTBL
	// _00-_30  = BaseItemMgr
	// _30-_48  = Container
	// _48      = ptr to _BaseItemMgrParent2 or something?
	NodeObjectMgr<Onyon> mNodeObjectMgr;                   // _4C
	SysShape::AnimMgr* mAnimMgrFiles[3];                   // _88, indexed by ONYON_OBJECT_TYPE
	CollPartFactory* mCollFactories[3];                    // _94, indexed by ONYON_OBJECT_TYPE
	Onyon* mOnyons[ONYON_TYPE_MAX];                        // _A0, blue (0), red (1) and yellow (2) onyon objects
	Onyon* mPod;                                           // _AC, (cave) pod
	Onyon* mUfo;                                           // _B0, ufo (ship)
	Sys::MatTevRegAnimation mOnyonTevAnim[ONYON_TYPE_MAX]; // _B4, blue (0), red (1) and yellow (2)
	Sys::MatTevRegAnimation mUfoTevAnim[2];                // _F0, ship lights/pistons
};

extern Mgr* mgr;
} // namespace ItemOnyon
} // namespace Game

struct GenOnyonParm : public Game::GenItemParm {
	inline GenOnyonParm()
	    : mOnyonIndex(0)
	    , mIsAfterBoot(true)
	{
	}

	// _00     = VTBL
	int mOnyonIndex;   // _04
	bool mIsAfterBoot; // _08
};

namespace efx {
inline ArgType::ArgType(Game::Onyon* onyon)
{
	mType     = onyon->mOnyonType;
	mPosition = onyon->mPosition;
}
} // namespace efx

#endif
