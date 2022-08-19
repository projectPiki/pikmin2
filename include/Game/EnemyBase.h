#ifndef _GAME_ENEMYBASE_H
#define _GAME_ENEMYBASE_H

#include "BitFlag.h"
#include "Game/AILODParm.h"
#include "Game/CollEvent.h"
#include "Game/Creature.h"
#include "Game/CurrTriInfo.h"
#include "Game/EnemyPelletInfo.h"
#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/PelletView.h"
#include "Game/pelletMgr.h"
#include "Game/WalkSmokeEffect.h"
#include "Dolphin/rand.h"
#include "Game/enemyInfo.h"
#include "JSystem/JAI/JAInter/Object.h"
#include "Matrix3f.h"
#include "Sys/Sphere.h"
#include "SysShape/MotionListener.h"
#include "Vector3.h"
#include "efx/TEnemyPiyo.h"
#include "efx/TEnemyWalkSmoke.h"
#include "types.h"
#include "Game/MoveInfo.h"
#include "Game/EnemyStone.h"
#include "Game/EnemyEffectNode.h"
#include "trig.h"
#include "Vector2.h"

#define EMOTE_None       (0)
#define EMOTE_Caution    (1)
#define EMOTE_Excitement (2)

struct MouthSlots;

namespace PSM {
struct EnemyBase;
} // namespace PSM

namespace Game {
struct EnemyBase;

namespace EnemyBaseFSM {
struct StateMachine;
} // namespace EnemyBaseFSM

struct EnemyAnimatorBase;
struct EnemyAnimKeyEvent;
struct EnemyMgrBase;
struct WaterBox;
struct LifeGaugeParam;
struct Interaction;
struct StateMachine;

enum EnemyEvent {
	EB_Vulnerable       = 0x1, // can take damage or not
	EB_Damage           = 0x2, // currently taking damage
	EB_3                = 0x4,
	EB_Flying           = 0x8,  // is ignored by pikmin
	EB_Collision        = 0x10, // is colliding
	EB_DropMassSet      = 0x20,
	EB_Cullable         = 0x40, // can be culled/deloaded
	EB_LeaveCarcass     = 0x80, // leaves carcass upon death
	EB_9                = 0x100,
	EB_Bittered         = 0x200, // currently bittered
	EB_Constraint       = 0x400,
	EB_LifegaugeVisible = 0x800, // has visible lifegauge
	EB_13               = 0x1000,
	EB_SoundCullable    = 0x2000, // sounds can be culled/deloaded
	EB_15               = 0x4000,
	EB_16               = 0x8000,
	EB_17               = 0x10000,
	EB_18               = 0x20000,
	EB_HardConstraint   = 0x40000,
	EB_20               = 0x80000,
	EB_21               = 0x100000,
	EB_22               = 0x200000,
	EB_BitterImmune     = 0x400000, // immune to being bittered
	EB_24               = 0x800000,
	EB_PS1              = 0x1000000, // sound-related
	EB_PS2              = 0x2000000, // sound-related
	EB_PS3              = 0x4000000, // sound-related
	EB_PS4              = 0x8000000, // sound-related
	EB_29               = 0x10000000,
	EB_30               = 0x20000000,
	EB_31               = 0x40000000,
	EB_32               = 0x80000000
};

enum EnemyEvent2 { EB2_1 = 0x1, EB2_2 = 0x2, EB2_3 = 0x4, EB2_4 = 0x8, EB2_5 = 0x10, EB2_DroppingMassZero = 0x20 };

/**
 * @todo Split this into a separate type PelplantInitialParam?
 */
struct EnemyInitialParamBase {
	u8 _00;
	u8 _01;
	u8 _02;
};

struct EnemyKillArg : public CreatureKillArg {
	inline EnemyKillArg(int p1)
	    : CreatureKillArg(p1)
	{
	}

	/**
	 * @reifiedAddress{80107C38}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "EnemyKillArg";
	}
};

struct EnemyBase : public Creature, public SysShape::MotionListener, virtual public Game::PelletView {
	EnemyBase();

	// vtable 1 (Creature)
	virtual Vector3f getPosition() // _08 (weak)
	{
		return m_position;
	}
	virtual void getBoundingSphere(Sys::Sphere& sphere) // _10 (weak)
	{
		sphere = m_boundingSphere;
	}
	virtual void constructor();                // _2C
	virtual void onInit(CreatureInitArg*);     // _30
	virtual void onKill(CreatureKillArg*);     // _34
	virtual void onInitPost(CreatureInitArg*); // _38
	virtual void doAnimation();                // _3C
	virtual void doEntry();                    // _40
	virtual void doSetView(int);               // _44
	virtual void doViewCalc();                 // _48
	virtual void doSimulation(float);          // _4C
	virtual float getBodyRadius()              // _54 (weak)
	{
		return static_cast<EnemyParmsBase*>(m_parms)->m_general.m_pikminDamageRadius();
	}
	virtual float getCellRadius() // _58 (weak)
	{
		return static_cast<EnemyParmsBase*>(m_parms)->m_general.m_cellRadius();
	}
	virtual float getFaceDir() // _64 (weak)
	{
		return m_faceDir;
	}
	virtual void setVelocity(Vector3f& velocity) // _68 (weak)
	{
		m_velocity = velocity;
	}
	virtual Vector3f getVelocity() // _6C (weak)
	{
		return m_velocity;
	}
	virtual void onSetPosition(Vector3f& position) // _70 (weak)
	{
		m_position = position;
	}
	virtual void onSetPositionPost(Vector3f&) // _74 (weak)
	{
		updateSpheres();
	}
	virtual void updateTrMatrix(); // _78
	virtual bool isTeki()          // _7C (weak)
	{
		return true;
	}
	virtual void inWaterCallback(WaterBox*); // _84
	virtual void outWaterCallback();         // _88
	virtual bool inWater()                   // _8C (weak)
	{
		return (m_waterBox != nullptr);
	}
	virtual bool isFlying() // _CC (weak)
	{
		return (m_events.m_flags[0].typeView >> 2) & 1;
	}
	virtual void collisionCallback(CollEvent&); // _EC
	virtual JAInter::Object* getJAIObject();    // _F4
	virtual PSM::Creature* getPSCreature();     // _F8
	virtual Vector3f* getSound_PosPtr()         // _100 (weak)
	{
		return &m_position;
	}
	virtual bool sound_culling() // _104 (weak)
	{
		bool culling = false;
		if (m_events.m_flags[0].typeView & 0x2000) {
			if (!(m_lod.m_flags & AILOD::FLAG_NEED_SHADOW) && !(m_lod.m_flags & AILOD::FLAG_UNKNOWN4)) {
				culling = true;
			}
		}
		return culling;
	}
	virtual float getSound_CurrAnimFrame() // _108 (weak)
	{
		return m_animator->getAnimator().m_timer;
	}
	virtual float getSound_CurrAnimSpeed() // _10C (weak)
	{
		return m_animator->m_animSpeed;
	}
	virtual bool needShadow();                       // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&); // _13C
	virtual void getLODSphere(Sys::Sphere& sphere)   // _140 (weak)
	{
		sphere = m_lodRange;
	}
	virtual void onStickStart(Creature*);                  // _158
	virtual void onStickEnd(Creature*);                    // _15C
	virtual void getVelocityAt(Vector3f& p1, Vector3f& p2) // _184 (weak)
	{
		p1 = m_velocity;
		p2 = m_velocity;
	}
	virtual bool stimulate(Interaction&); // _1A4
	virtual char* getCreatureName()       // _1A8 (weak)
	{
		return EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}
	virtual s32 getCreatureID() // _1AC (weak)
	{
		return m_enemyIndexForType;
	}
	// vtable 2 (MotionListener+self)
	// virtual void onKeyEvent(const SysShape::KeyEvent&); - thunk _1B8
	virtual ~EnemyBase() { }                                    // _1BC (weak)
	virtual void birth(Vector3f&, float);                       // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*) = 0; // _1C4
	virtual void update();                                      // _1C8
	virtual void doUpdate() = 0;                                // _1CC
	virtual void doUpdateCommon();                              // _1D0
	virtual void doUpdateCarcass();                             // _1D4
	virtual void doAnimationUpdateAnimator();                   // _1D8
	virtual void doAnimationCullingOff();                       // _1DC
	virtual void doAnimationCullingOn();                        // m_events
	virtual void doAnimationStick();                            // _1E4
	virtual void doSimulationCarcass(float);                    // _1E8
	virtual void doDebugDraw(Graphics&);                        // _1EC
	virtual void doSimpleDraw(Viewport*) { }                    // _1F0 (weak)
	virtual void doSimulationGround(float);                     // _1F4
	virtual void doSimulationFlying(float);                     // _1F8
	virtual void doSimulationStick(float);                      // _1FC
	virtual void changeMaterial();                              // _200
	virtual void getCommonEffectPos(Vector3f&);                 // _204
	virtual Vector3f* getFitEffectPos();                        // _208
	virtual SysShape::Model* viewGetShape();                    // _20C (weak)
	virtual void view_start_carrymotion();                      // _210 (weak)
	virtual void view_finish_carrymotion();                     // _214 (weak)
	virtual void viewStartPreCarryMotion();                     // _218 (weak)
	virtual void viewStartCarryMotion();                        // _21C (weak)
	virtual void viewOnPelletKilled();                          // _220 (weak)
	virtual Vector3f getOffsetForMapCollision()                 // _224 (weak)
	{
		return Vector3f(0.0f);
	}
	virtual void setParameters();                         // _228
	virtual void initMouthSlots() { }                     // _22C (weak)
	virtual void initWalkSmokeEffect() { }                // _230 (weak)
	virtual WalkSmokeEffect::Mgr* getWalkSmokeEffectMgr() // _234 (weak)
	{
		return nullptr;
	}
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _238 (weak)
	virtual bool injure();                              // _23C
	virtual void setCollEvent(CollEvent&);              // _240
	virtual void getEfxHamonPos(Vector3f* pos)          // _244 (weak)
	{
		*pos = m_position;
	}
	virtual void createInstanceEfxHamon();                  // _248
	virtual void updateEfxHamon();                          // _24C
	virtual void createEfxHamon();                          // _250
	virtual void fadeEfxHamon();                            // _254
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() = 0; // _258
	virtual MouthSlots* getMouthSlots()                     // _25C (weak)
	{
		return nullptr;
	}
	virtual void doGetLifeGaugeParam(LifeGaugeParam&);            // _260
	virtual void throwupItem();                                   // _264
	virtual void getThrowupItemPosition(Vector3f*);               // _268
	virtual void getThrowupItemVelocity(Vector3f*);               // _26C
	virtual void throwupItemInDeathProcedure() { throwupItem(); } // _270 (weak)
	virtual void setLODSphere(Sys::Sphere& sphere)                // _274 (weak)
	{
		m_lodRange = sphere;
	}
	virtual bool damageCallBack(Creature*, float, CollPart*);       // _278
	virtual bool pressCallBack(Creature*, float, CollPart*);        // _27C
	virtual bool flyCollisionCallBack(Creature*, float, CollPart*); // _280
	virtual bool hipdropCallBack(Creature*, float, CollPart*);      // _284
	virtual bool dropCallBack(Creature*);                           // _288
	virtual bool earthquakeCallBack(Creature*, float);              // _28C
	virtual bool farmCallBack(Creature*, float);                    // _290
	virtual bool bombCallBack(Creature*, Vector3f&, float);         // _294
	virtual bool eatWhitePikminCallBack(Creature*, float);          // _298
	virtual bool dopeCallBack(Creature*, int);                      // _29C
	virtual bool doDopeCallBack(Creature*, int) { return true; }    // _2A0 (weak)
	virtual void doStartStoneState();                               // _2A4
	virtual void doFinishStoneState();                              // _2A8
	virtual float getDamageCoeStoneState()                          // _2AC (weak)
	{
		return 1.5f;
	}
	virtual void doStartEarthquakeState(float); // _2B0
	virtual void doFinishEarthquakeState();     // _2B4
	virtual void doStartEarthquakeFitState();   // _2B8
	virtual void doFinishEarthquakeFitState();  // _2BC
	virtual void lifeRecover();                 // _2C0
	virtual void startCarcassMotion();          // _2C4 (weak)
	virtual void setCarcassArg(PelletViewArg&); // _2C8
	virtual float getCarcassArgHeight()         // _2CC (weak)
	{
		return m_boundingSphere.m_radius;
	}
	virtual bool doBecomeCarcass();                  // _2D0
	virtual void startWaitingBirthTypeDrop();        // _2D4
	virtual void finishWaitingBirthTypeDrop();       // _2D8
	virtual bool isFinishableWaitingBirthTypeDrop(); // _2DC
	virtual void doStartWaitingBirthTypeDrop();      // _2E0
	virtual void doFinishWaitingBirthTypeDrop();     // _2E4
	virtual void wallCallback(const MoveInfo&) { }   // _2E8 (weak)
	virtual float getDownSmokeScale();               // _2EC
	virtual void doStartMovie() { }                  // _2F0 (weak)
	virtual void doEndMovie() { }                    // _2F4 (weak)
	// vtable 3 (PelletView)

	void addDamage(float, float);

	void bounceProcedure(Sys::Triangle*);

	void collisionMapAndPlat(float);

	PSM::EnemyBase* createPSEnemyBase();
	void createEffects();
	void createBounceEffect(const Vector3f&, float);
	void createDeadBombEffect();
	void createDropEffect(const Vector3f&, float);
	void createSplashDownEffect(const Vector3f&, float);
	void fadeEffects();

	void doEntryCarcass();
	void doEntryLiving();
	void doSimulationConstraint(float);
	void hardConstraintOn();
	void hardConstraintOff();
	void constraintOff();

	void finishDropping(bool);

	void deathProcedure();
	void gotoHell();

	bool isCullingOff();

	void startMotion();
	void startMotion(int, SysShape::MotionListener*);
	void finishMotion();
	void stopMotion();
	bool isFinishMotion();
	bool isStopMotion();
	float getFirstKeyFrame();
	float getMotionFrame();
	float getMotionFrameMax();
	void setMotionFrame(float);

	int getCurrAnimIndex();
	void setAnimSpeed(float);
	void resetAnimSpeed();

	void setEmotionCaution();
	void setEmotionExcitement();
	void setEmotionNone();

	void setAnimMgr(SysShape::AnimMgr*);
	void setOtakaraCode(PelletMgr::OtakaraItemCode&);
	void setPSEnemyBaseAnime();
	void setZukanVisible(bool);

	void startBlend(int, int, SysShape::BlendFunction*, float, SysShape::MotionListener*);
	void endBlend();

	void show();
	void hide();

	int getStateID();
	bool isBeforeAppearState();
	void startStoneState();

	void scaleDamageAnim();
	void finishScaleDamageAnim();

	void updateSpheres();
	void getWaterSphere(Sys::Sphere*);
	void updateWaterBox();

	void startMovie();
	void endMovie();

	bool isBirthTypeDropGroup();
	bool checkBirthTypeDropEarthquake();
	void setDroppingMassZero();
	void resetDroppingMassZero();

	void resetCollEvent();

	void becomeCarcass();

	inline void getSeparation(Creature* creature, Vector2f& sep)
	{
		sep.x = getPosition().x - creature->getPosition().x;
		sep.y = getPosition().z - creature->getPosition().z;
	}

	inline void setEnemyIndexForType(u8 idx) { m_enemyIndexForType = idx; }

	inline void setEvent(int i, u32 flag) { m_events.m_flags[i].typeView |= flag; }

	inline void resetEvent(int i, u32 flag) { m_events.m_flags[i].typeView &= ~flag; }

	inline bool isEvent(int i, u32 flag) { return m_events.m_flags[i].typeView & flag; }

	// Creature: _000 - _178
	// MotionListener: _178 - _17C
	// ptr to PelletView: _17C
	EnemyMgrBase* m_mgr;                // _180
	EnemyAnimatorBase* m_animator;      // _184
	EnemyAnimKeyEvent* m_animKeyEvent;  // _188
	Vector3f m_position;                // _18C
	Vector3f m_homePosition;            // _198
	Matrix3f _1A4;                      // _1A4
	Vector3f m_velocity;                // _1C8
	Vector3f m_velocity2;               // _1D4
	BitFlagArray<u32, 2> m_events;      // _1E0
	BitFlagArray<u32, 2> m_eventBuffer; // _1E8
	u8 m_emotion;                       // _1F0
	u8 m_enemyIndexForType;             // _1F1
	u8 _1F2;                            // _1F2
	bool m_inPiklopedia;                // _1F3
	int m_stickPikminCount;             // _1F4
	float m_scaleModifier;              // _1F8
	float m_faceDir;                    // _1FC
	float m_health;                     // _200
	float m_maxHealth;                  // _204
	float m_instantDamage;              // _208
	float m_toFlick;                    // _20C
	float _210;                         // _210
	// TODO: Name is from PikDecomp. Sodium called this "purpleStunTimer". Which
	// name is more accurate?
	float m_scaleTimer;                          // _214
	float m_friction;                            // _218
	float m_stoneTimer;                          // _21C
	Sys::Sphere m_boundingSphere;                // _220
	Creature* m_targetCreature;                  // _230
	CollEvent m_collEvent;                       // _234
	Vector3f m_commonEffectOffset;               // _240
	EnemyStone::Obj* m_enemyStoneObj;            // _24C
	PelletMgr::OtakaraItemCode m_pelletDropCode; // _250
	Pellet* m_heldPellet;                        // _254
	EnemyPelletInfo m_pelletInfo;                // _258
	AILODParm m_lodParm;                         // _264
	Sys::Sphere m_lodRange;                      // _270
	WaterBox* m_waterBox;                        // _280
	EnemyEffectNodeHamon* m_effectNodeHamon;     // _284
	Sys::Triangle* _288;                         // _288
	PSM::EnemyBase* m_soundObj;                  // _28C
	CNode m_effectNodeHamonRoot;                 // _290 - treat as EnemyEffectNodeBase with EnemyEffectNodeHamon nodes
	float _2A8;                                  // _2A8
	float _2AC;                                  // _2AC
	s8 m_dropGroup;                              // _2B0
	EnemyFSMState* m_currentLifecycleState;      // _2B4
	EnemyBaseFSM::StateMachine* m_lifecycleFSM;  // _2B8
	                                             // PelletView: _2BC - _2C8
};
namespace EnemyBaseFSM {
enum StateID {
	EBS_Drop = 0,
	EBS_DropPikmin,
	EBS_DropOlimar,
	EBS_DropTreasure,
	EBS_DropEarthquake,
	EBS_Appear,
	EBS_Living,
	EBS_Stone,
	EBS_Earthquake,
	EBS_Fit
};

/**
 * Generic lifecycle state.
 */
struct State : public Game::EnemyFSMState {
	inline State(int stateID)
	    : EnemyFSMState(stateID)
	{
	}

	virtual void update(EnemyBase*) { }                          // _24 (weak)
	virtual void entry(EnemyBase*) { }                           // _28 (weak)
	virtual void simulation(EnemyBase*, float) { }               // _2C (weak)
	virtual void bounceProcedure(EnemyBase*, Sys::Triangle*) { } // _30 (weak)
	virtual void animation(EnemyBase*);                          // _34

	// _00 VTBL
	// _04 int stateID
	// _08 EnemyStateMachine* m_stateMachine
	// _0C const char* m_name
};

/**
 * Generic birth-by-dropping state.
 */
struct BirthTypeDropState : public State {
	inline BirthTypeDropState(int stateID)
	    : State(stateID)
	{
		m_name = "BirthTypeDrop";
	}

	virtual void init(EnemyBase*, StateArg*);                  // _08
	virtual void cleanup(EnemyBase*);                          // _10
	virtual void update(EnemyBase*);                           // _24
	virtual void entry(EnemyBase*) { }                         // _28 (weak)
	virtual void simulation(EnemyBase*, float) { }             // _2C (weak)
	virtual void animation(EnemyBase*) { }                     // _34 (weak)
	virtual bool isFinishableWaitingBirthTypeDrop(EnemyBase*); // _38
};

struct BirthTypeDropPikminState : public BirthTypeDropState {
	inline BirthTypeDropPikminState()
	    : BirthTypeDropState(EBS_DropPikmin)
	{
		m_name = "BirthTypeDropPikmin";
	}

	virtual bool isFinishableWaitingBirthTypeDrop(EnemyBase*); // _38
};

struct BirthTypeDropOlimarState : public BirthTypeDropState {
	inline BirthTypeDropOlimarState()
	    : BirthTypeDropState(EBS_DropOlimar)
	{
		m_name = "BirthTypeDropOlimar";
	}

	virtual bool isFinishableWaitingBirthTypeDrop(EnemyBase*); // _38
};

struct BirthTypeDropTreasureState : public BirthTypeDropState {
	inline BirthTypeDropTreasureState()
	    : BirthTypeDropState(EBS_DropTreasure)
	{
		m_name = "BirthTypeDropTreasure";
	}

	virtual bool isFinishableWaitingBirthTypeDrop(EnemyBase*); // _38
};

struct BirthTypeDropEarthquakeState : public BirthTypeDropState {
	inline BirthTypeDropEarthquakeState()
	    : BirthTypeDropState(EBS_DropEarthquake)
	{
		m_name = "BirthTypeDropEarthquake";
	}

	virtual bool isFinishableWaitingBirthTypeDrop(EnemyBase*); // _38
};

/**
 * Birth-without-dropping state?
 */
struct AppearState : public State {
	inline AppearState()
	    : State(EBS_Appear)
	{
		m_name = "Appear";
	}

	virtual void init(EnemyBase*, StateArg*);      // _08
	virtual void cleanup(EnemyBase*);              // _10
	virtual void update(EnemyBase*);               // _24
	virtual void entry(EnemyBase*);                // _28
	virtual void simulation(EnemyBase*, float) { } // _2C (weak)
};

/**
 * Generic "alive" state.
 * @size = 0x10
 */
struct LivingState : public State {
	inline LivingState(int state = EBS_Living)
	    : State(state)
	{
		m_name = "Living";
	}

	// might need a different name once flags are done
	// used in EnemyBaseFSM::LivingState::simulation
	inline bool isLiving(EnemyBase* enemy)
	{
		return ((enemy->m_events.m_flags[0].typeView & 0x400) || ((enemy->m_events.m_flags[0].typeView & 0x40000)));
	}

	virtual void update(EnemyBase*);            // _24
	virtual void entry(EnemyBase*);             // _28
	virtual void simulation(EnemyBase*, float); // _2C
	virtual void updateCullingOff(EnemyBase*);  // _38
	virtual void updateAlways(EnemyBase*);      // _3C
};

/**
 * Bittered state.
 * @size = 0x10
 */
struct StoneState : public LivingState {
	inline StoneState()
	    : LivingState(EBS_Stone)
	{
		m_name = "Stone";
	}

	virtual void init(EnemyBase*, StateArg*);                 // _08
	virtual void cleanup(EnemyBase*);                         // _10
	virtual void bounceProcedure(EnemyBase*, Sys::Triangle*); // _30
	virtual void updateCullingOff(EnemyBase*);                // _38
	virtual void updateAlways(EnemyBase*);                    // _3C
};

/**
 * @size = 0x14
 */
struct EarthquakeState : public LivingState {
	inline EarthquakeState()
	    : LivingState(EBS_Earthquake)
	    , _10(0)
	{
		m_name = "Earthquake";
	}

	virtual void init(EnemyBase*, StateArg*);  // _08
	virtual void cleanup(EnemyBase*);          // _10
	virtual void updateCullingOff(EnemyBase*); // _38

	int _10; // _10
};

/**
 * @size = 0x24
 */
struct FitState : public LivingState {
	inline FitState()
	    : LivingState(EBS_Fit)
	    , m_enemyPiyo()
	{
		m_name = "Fit";
	}

	virtual void init(EnemyBase*, StateArg*);  // _08
	virtual void cleanup(EnemyBase*);          // _10
	virtual void updateCullingOff(EnemyBase*); // _38
	virtual void updateAlways(EnemyBase*);     // _3C

	efx::TEnemyPiyo m_enemyPiyo; // _10
};

/**
 * Generic lifecycle FSM that every teki has, often in addition to a more
 * specific FSM derived from Game::StateMachine.
 */
struct StateMachine : public Game::EnemyStateMachine {
	virtual void init(EnemyBase*);                  // _08
	virtual EnemyFSMState* getCurrState(EnemyBase*) // _1C (weak)
	{
		return m_state;
	}
	virtual void setCurrState(EnemyBase* enemy, EnemyFSMState* state) // _20 (weak)
	{
		m_state = static_cast<State*>(state);
	}
	virtual void update(EnemyBase*);            // _24
	virtual void entry(EnemyBase*);             // _28
	virtual void simulation(EnemyBase*, float); // _2C
	virtual void animation(EnemyBase* enemy)    // _30 (weak)
	{
		m_state->animation(enemy);
	}
	virtual void bounceProcedure(EnemyBase* enemy, Sys::Triangle* triangle) // _34 (weak)
	{
		m_state->bounceProcedure(enemy, triangle);
	}

	State* m_state; // _1C
};
} // namespace EnemyBaseFSM
} // namespace Game

#endif
