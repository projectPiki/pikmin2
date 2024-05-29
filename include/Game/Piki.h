#ifndef _GAME_PIKI_H
#define _GAME_PIKI_H

#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/JUtility/TColor.h"
#include "PSM/Piki.h"
#include "Game/FakePiki.h"
#include "Game/StateMachine.h"

#define MAX_PIKI_COUNT (100) // Maximum number of pikmin allowed out of the onyon/in a cave

namespace efx {
struct Context;
struct TPkEffect;
} // namespace efx

namespace PikiAI {
struct Brain;
struct ActTransportArg;
struct Action;
} // namespace PikiAI

namespace Sys {
struct Sphere;
} // namespace Sys

namespace SysShape {
struct AnimInfo;
struct Joint;
} // namespace SysShape

namespace Game {
struct Navi;
struct MoviePlayer;
struct ShadowParam;
struct Interaction;
struct Piki;
struct PikiState;
struct PikiParms;

typedef enum EPikiKind {
	AllPikminCalcs = -1, // used for gameStat calcs
	FirstPikmin    = 0,
	Blue           = 0,
	Red            = 1,
	Yellow         = 2,
	LastOnyon      = 2,
	OnyonCount,
	Purple              = 3,
	White               = 4,
	LastStoredPikiColor = White,
	StoredPikiCount,
	AllPikmin = StoredPikiCount,
	Bulbmin   = 5,
	Carrot    = 6,
	PikiColorCount, // 7
} EPikiKind;

typedef enum EPikiHappa {
	Leaf          = 0,
	Bud           = 1,
	Flower        = 2,
	MaxHappaStage = Flower,
	PikiGrowthStageCount,

	Bud_Red    = 3,
	Flower_Red = 4,
	PikiHappaCount, // 5
} EPikiHappa;       // Aka headtype

typedef enum EMovieUserCommands {
	ForceOnionPikis = 100, // Calls enterAllPikis and forceEnterPikis based on moviePlayer flags
	EnterCave       = 102, // Going into cave via the hole
	ExitCave        = 103, // Exit using fountain
	RemoveShadow    = 104,
	StopFX          = 105,
	ResetFX         = 106,
	AddShadow       = 107
} EMovieUserCommands;

struct PikiInitArg : public CreatureInitArg {
	inline PikiInitArg(int stateID)
	    : mLeader(nullptr)
	    , mState(stateID)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "PikiInitArg";
	}

	// _00 VTBL
	int mState;        // _04, state to start in
	Creature* mLeader; // _08
};

struct PikiKillArg : public CreatureKillArg {
	inline PikiKillArg(int flags)
	    : CreatureKillArg(flags)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "PikiKillArg";
	}

	// _00		 = VTBL
	// _00-_08 = CreatureKillArg
};

struct PikiFSM : public StateMachine<Piki> {
	virtual void init(Piki*);                    // _08
	virtual void transit(Piki*, int, StateArg*); // _14

	void transitForce(Piki*, int, StateArg*);

	// _00			= VTBL
	// _00-_1C	= StateMachine
	int mStateID; // _1C, state ID?
};

enum PikiWeight {
	PW_Weightless   = 0,
	PW_NormalWeight = 1,
	PW_PurpleWeight = 10,
};

struct Piki : public FakePiki {
	typedef PikiState StateType;
	struct InvokeAIFreeArg {
		InvokeAIFreeArg()
		    : mDoForceInvoke(false)
		    , mDoSimpleCheck(false)
		{
		}

		bool mDoForceInvoke; // _00, check whether piki is updateable or not
		bool mDoSimpleCheck; // _01, just check if an action is available without actually starting it
	};

	Piki();

	// vtable 1 (Creature)
	virtual bool deferPikiCollision() { return true; }              // _20 (weak)
	virtual void onInit(CreatureInitArg* settings);                 // _30
	virtual void onKill(CreatureKillArg* settings);                 // _34
	virtual void doAnimation();                                     // _3C
	virtual void doDirectDraw(Graphics& gfx);                       // _50
	virtual void inWaterCallback(WaterBox* wb);                     // _84
	virtual void outWaterCallback();                                // _88
	virtual bool isAlive();                                         // _A8
	virtual void bounceCallback(Sys::Triangle* tri);                // _E8
	virtual void collisionCallback(CollEvent& event);               // _EC
	virtual void platCallback(PlatEvent& event);                    // _F0
	virtual JAInter::Object* getJAIObject();                        // _F4
	virtual PSM::Creature* getPSCreature();                         // _F8
	virtual void on_movie_begin(bool shouldResetAnims);             // _110
	virtual void on_movie_end(bool shouldResetAnims);               // _114
	virtual void movieStartAnimation(u32 animIdx);                  // _118
	virtual void movieStartDemoAnimation(SysShape::AnimInfo* info); // _11C
	virtual void movieSetTranslation(Vector3f& dest, f32 faceDir);  // _124
	virtual bool movieGotoPosition(Vector3f& dest);                 // _12C
	virtual void movieUserCommand(u32 command,
	                              MoviePlayer* curPlayer); // _130, check EMoviePlayerCommands enum for possible values
	virtual void getShadowParam(ShadowParam& settings);    // _134
	virtual void getLODSphere(Sys::Sphere& lodSphere);     // _140
	virtual void onStickStartSelf(Creature* c);            // _160
	virtual void onStickEndSelf(Creature* c);              // _164
	virtual bool ignoreAtari(Creature* toIgnore);          // _190
	virtual bool stimulate(Interaction& data);             // _1A4
	virtual char* getCreatureName() { return "pikmin"; }   // _1A8 (weak)
	virtual s32 getCreatureID() { return mMgrIndex; }      // _1AC (weak)
	// vtable 2 (MotionListener + FakePiki + self)
	virtual int getDownfloorMass();           // _1BC
	virtual bool isPikmin();                  // _1C0
	virtual void doColorChange();             // _1C4
	virtual void doDebugDL();                 // _1C8
	virtual void update();                    // _1CC
	virtual void wallCallback(Vector3f& pos); // _204
	virtual void startMotion(int anim1Idx, int anim2Idx, SysShape::MotionListener* ml1,
	                         SysShape::MotionListener* ml2);  // _208
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _20C
	virtual void do_updateLookCreature();                     // _214
	virtual void onSetPosition();                             // _218
	virtual bool isWalking();                                 // _21C

	void attachRadar(bool);
	bool canVsBattle();
	void changeHappa(int);
	void changeShape(int);
	bool checkInvokeAI(bool);
	void clearCurrAction();
	void clearDope();
	bool doped();
	void extendDopeTime();
	bool gasInvicible();
	f32 getAttackDamage();
	f32 getBaseScale();
	PikiAI::Action* getCurrAction();
	int getCurrActionID();
	int getFormationSlotID();
	f32 getPelletCarryPower();
	f32 getSpeed(f32);
	f32 getSpeed(f32, f32);
	int getStateID();
	f32 getThrowHeight();
	Piki* getVsBattlePiki();
	int graspSituation_Fast(Creature**);
	int graspSituation(Creature**);
	void initColor();
	bool invokeAI();
	bool invokeAI(CollEvent*, bool);
	bool invokeAI(PlatEvent*);
	bool invokeAIFree(InvokeAIFreeArg&);
	bool isMyPikmin(Creature*);
	bool isTekiFollowAI();
	bool isThrowable();
	bool might_bury();
	bool setActTransportArg(PikiAI::ActTransportArg&);
	void setDopeEffect(bool);
	void setFreeLightEffect(bool);
	void setGasInvincible(u8);
	void setPastel(bool);
	void setSpeed(f32, Vector3f&, f32);
	void setSpeed(f32, Vector3f&);
	void setTekiKillID(int);
	bool startDope(int);
	void startSound(Creature*, u32, bool);
	void startSound(Creature*, u32, PSGame::SeMgr::SetSeId);
	void startSound(u32, bool);
	void startSound(u32, PSGame::SeMgr::SetSeId);
	bool surviveDayEnd();
	void updateGasInvincible();
	void updateDope();
	void updateColor();

	inline PikiParms* getParms() { return static_cast<PikiParms*>(mParms); }
	inline int getKind() const { return mPikiKind; }
	inline int getHappa() const { return mHappaKind; }

	inline bool isSearchable()
	{
		bool result = false;
		if (isPikmin() && isAlive() && !isStickToMouth()) {
			result = true;
		}

		return result;
	}

	inline efx::TPkEffect* getEffectObj() { return mEffectsObj; }

	inline f32 getAnimSpeed() const { return mAnimSpeed; }

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	static Color4 pikiColors[PikiColorCount + 1];
	static Color4 pikiColorsCursor[PikiColorCount + 1];
	static u8 sGraspSituationOptimise;

	// _000			 = VTBL
	// _000-_24C = FakePiki
	PSM::Piki* mSoundObj;             // _250
	f32 mTargetLookTimer;             // _254
	efx::TPkEffect* mEffectsObj;      // _258
	Vector3f mLeafStemOffset;         // _25C
	SysShape::Joint* mLeafStemJoint;  // _268
	Vector3f mLeafStemPosition;       // _26C
	SysShape::Joint* mHappaJoint1;    // _278
	efx::Context* mEffectsContext;    // _27C
	u8 _280[4];                       // _280
	s16 mIsDoped;                     // _284
	f32 mDopeTime;                    // _288
	PikiFSM* mFsm;                    // _28C
	PikiState* mCurrentState;         // _290
	PikiAI::Brain* mBrain;            // _294
	UpdateContext mPikiUpdateContext; // _298
	s16 mTekiKillID;                  // _2A4
	u8 mGasInvincible;                // _2A6
	Color4 mDefaultColor;             // _2A7
	Color4 mOldDefaultColor;          // _2AB
	Color4 mPikiColor;                // _2AF
	f32 mColorFloat;                  // _2B4
	u8 mPikiKind;                     // _2B8, aka Piki kind (Blue, Yellow, Red, etc.)
	u8 mHappaKind;                    // _2B9, aka Happa kind (leaf, bud, flower)
	SysShape::Model* mLeafModel;      // _2BC
	int mMgrIndex;                    // _2C0
	Navi* mNavi;                      // _2C4
};
} // namespace Game

#endif
