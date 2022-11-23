#ifndef _GAME_ENEMYBASE_H
#define _GAME_ENEMYBASE_H

#include "Game/Creature.h"
#include "Game/CollEvent.h"
#include "Game/EnemyStateMachine.h"
#include "Game/MoveInfo.h"
#include "Game/EnemyEffectNode.h"
#include "Game/PelletView.h"
#include "Game/EnemyPelletInfo.h"
#include "Game/pelletMgr.h"

#include "SysShape/MotionListener.h"

#include "PSM/EnemyBase.h"
#include "efx/TEnemyPiyo.h"

#include "trig.h"

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

namespace EnemyStone {
struct Obj;
} // namespace EnemyStone

namespace WalkSmokeEffect {
struct Mgr;
} // namespace WalkSmokeEffect

struct EnemyAnimatorBase;
struct EnemyAnimKeyEvent;
struct EnemyMgrBase;
struct WaterBox;
struct LifeGaugeParam;
struct Interaction;

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
	EB_PS1              = 0x1000000,  // sound-related
	EB_PS2              = 0x2000000,  // sound-related
	EB_PS3              = 0x4000000,  // sound-related
	EB_PS4              = 0x8000000,  // sound-related
	EB_Alive            = 0x10000000, // is alive/can be killed
	EB_30               = 0x20000000,
	EB_31               = 0x40000000,
	EB_32               = 0x80000000
};

enum EnemyEvent2 { EB2_1 = 0x1, EB2_2 = 0x2, EB2_3 = 0x4, EB2_4 = 0x8, EB2_5 = 0x10, EB2_DroppingMassZero = 0x20 };

// Interface for specific overrides (e.g. PelplantInitialParams)
struct EnemyInitialParamBase {
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
	virtual const char* getName() // _08 (weak)
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
	virtual void constructor();                         // _2C
	virtual void onInit(CreatureInitArg* settings);     // _30
	virtual void onKill(CreatureKillArg* settings);     // _34
	virtual void onInitPost(CreatureInitArg* settings); // _38
	virtual void doAnimation();                         // _3C
	virtual void doEntry();                             // _40
	virtual void doSetView(int viewportNumber);         // _44
	virtual void doViewCalc();                          // _48
	virtual void doSimulation(f32 simSpeed);            // _4C
	virtual f32 getBodyRadius()                         // _54 (weak)
	{
		return static_cast<EnemyParmsBase*>(m_parms)->m_general.m_pikminDamageRadius();
	}
	virtual f32 getCellRadius() // _58 (weak)
	{
		return static_cast<EnemyParmsBase*>(m_parms)->m_general.m_cellRadius();
	}
	virtual f32 getFaceDir() // _64 (weak)
	{
		return m_faceDir;
	}
	virtual void setVelocity(Vector3f& velocity) // _68 (weak)
	{
		m_impVelocity = velocity;
	}
	virtual Vector3f getVelocity() // _6C (weak)
	{
		return m_impVelocity;
	}
	virtual void onSetPosition(Vector3f& position) // _70 (weak)
	{
		m_position = position;
	}
	virtual void onSetPositionPost(Vector3f& position) // _74 (weak)
	{
		updateSpheres();
	}
	virtual void updateTrMatrix(); // _78
	virtual bool isTeki()          // _7C (weak)
	{
		return true;
	}
	virtual void inWaterCallback(WaterBox* wbInsideOf); // _84
	virtual void outWaterCallback();                    // _88
	virtual bool inWater()                              // _8C (weak)
	{
		return (m_waterBox != nullptr);
	}
	virtual bool isFlying() // _CC (weak)
	{
		return (m_events.m_flags[0].typeView >> 2) & 1;
	}
	virtual void collisionCallback(CollEvent& coll); // _EC
	virtual JAInter::Object* getJAIObject();         // _F4
	virtual PSM::Creature* getPSCreature();          // _F8
	virtual Vector3f* getSound_PosPtr()              // _100 (weak)
	{
		return &m_position;
	}
	virtual bool sound_culling() // _104 (weak)
	{
		bool culling = false;
		if (m_events.m_flags[0].typeView & 0x2000) {
			if (!(m_lod.m_flags & AILOD_FLAG_NEED_SHADOW) && !(m_lod.m_flags & AILOD_FLAG_UNKNOWN4)) {
				culling = true;
			}
		}
		return culling;
	}
	virtual f32 getSound_CurrAnimFrame() // _108 (weak)
	{
		return m_animator->getAnimator().m_timer;
	}
	virtual f32 getSound_CurrAnimSpeed() // _10C (weak)
	{
		return m_animator->m_animSpeed;
	}
	virtual bool needShadow();                                // _138
	virtual void getLifeGaugeParam(LifeGaugeParam& settings); // _13C
	virtual void getLODSphere(Sys::Sphere& lodSphere)         // _140 (weak)
	{
		lodSphere = m_curLodSphere;
	}
	virtual void onStickStart(Creature* sticker);                   // _158
	virtual void onStickEnd(Creature* sticker);                     // _15C
	virtual void getVelocityAt(Vector3f& velSrc, Vector3f& velDest) // _184 (weak)
	{
		velSrc  = m_impVelocity;
		velDest = m_impVelocity;
	}
	virtual bool stimulate(Interaction& interaction); // _1A4
	virtual char* getCreatureName()                   // _1A8 (weak)
	{
		return EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}
	virtual s32 getCreatureID() // _1AC (weak)
	{
		return m_creatureID;
	}
	// vtable 2 (MotionListener+self)
	// virtual void onKeyEvent(const SysShape::KeyEvent& event); - thunk _1B8
	virtual ~EnemyBase() { }                                             // _1BC (weak)
	virtual void birth(Vector3f& position, f32 faceDirection);           // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase* settings) = 0; // _1C4
	virtual void update();                                               // _1C8
	virtual void doUpdate() = 0;                                         // _1CC
	virtual void doUpdateCommon();                                       // _1D0
	virtual void doUpdateCarcass();                                      // _1D4
	virtual void doAnimationUpdateAnimator();                            // _1D8
	virtual void doAnimationCullingOff();                                // _1DC
	virtual void doAnimationCullingOn();                                 // _1E0
	virtual void doAnimationStick();                                     // _1E4
	virtual void doSimulationCarcass(f32);                               // _1E8
	virtual void doDebugDraw(Graphics& gfx);                             // _1EC
	virtual void doSimpleDraw(Viewport* vp) { }                          // _1F0 (weak)
	virtual void doSimulationGround(f32 simSpeed);                       // _1F4
	virtual void doSimulationFlying(f32 simSpeed);                       // _1F8
	virtual void doSimulationStick(f32 simSpeed);                        // _1FC
	virtual void changeMaterial();                                       // _200
	virtual void getCommonEffectPos(Vector3f& effectPos);                // _204
	virtual Vector3f* getFitEffectPos();                                 // _208
	virtual SysShape::Model* viewGetShape();                             // _20C (weak)
	virtual void view_start_carrymotion();                               // _210 (weak)
	virtual void view_finish_carrymotion();                              // _214 (weak)
	virtual void viewStartPreCarryMotion();                              // _218 (weak)
	virtual void viewStartCarryMotion();                                 // _21C (weak)
	virtual void viewOnPelletKilled();                                   // _220 (weak)
	virtual Vector3f getOffsetForMapCollision()                          // _224 (weak)
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
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _238 (weak)
	virtual bool injure();                                    // _23C
	virtual void setCollEvent(CollEvent& newEvent);           // _240
	virtual void getEfxHamonPos(Vector3f* pos)                // _244 (weak)
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
	virtual void doGetLifeGaugeParam(LifeGaugeParam& settings);     // _260
	virtual void throwupItem();                                     // _264
	virtual void getThrowupItemPosition(Vector3f* throwupPosition); // _268
	virtual void getThrowupItemVelocity(Vector3f* throwupVelocity); // _26C
	virtual void throwupItemInDeathProcedure() { throwupItem(); }   // _270 (weak)
	virtual void setLODSphere(Sys::Sphere& sphere)                  // _274 (weak)
	{
		m_curLodSphere = sphere;
	}
	virtual bool damageCallBack(Creature* source, f32 damage, CollPart* part);       // _278
	virtual bool pressCallBack(Creature* source, f32 damage, CollPart* part);        // _27C
	virtual bool flyCollisionCallBack(Creature* source, f32 damage, CollPart* part); // _280
	virtual bool hipdropCallBack(Creature* source, f32 damage, CollPart* part);      // _284
	virtual bool dropCallBack(Creature* source);                                     // _288
	virtual bool earthquakeCallBack(Creature* source, f32 bounceFactor);             // _28C
	virtual bool farmCallBack(Creature* source, f32 power);                          // _290
	virtual bool bombCallBack(Creature* source, Vector3f& direction, f32 damage);    // _294
	virtual bool eatWhitePikminCallBack(Creature* source, f32 damage);               // _298
	virtual bool dopeCallBack(Creature* source, int sprayType);                      // _29C
	virtual bool doDopeCallBack(Creature* source, int sprayType) { return true; }    // _2A0 (weak)
	virtual void doStartStoneState();                                                // _2A4
	virtual void doFinishStoneState();                                               // _2A8
	virtual f32 getDamageCoeStoneState()                                             // _2AC (weak)
	{
		return 1.5f;
	}
	virtual void doStartEarthquakeState(f32 yVelocityScale); // _2B0
	virtual void doFinishEarthquakeState();                  // _2B4
	virtual void doStartEarthquakeFitState();                // _2B8
	virtual void doFinishEarthquakeFitState();               // _2BC
	virtual void lifeRecover();                              // _2C0
	virtual void startCarcassMotion()                        // _2C4 (weak)
	{
		SysShape::MotionListener* listener = this;

		EnemyAnimatorBase* animator = m_animator;
		animator->m_flags.typeView &= ~0x3;
		animator->m_progress = 1.0f;
		animator->getAnimator(0).startAnim(0, listener);

		resetEvent(0, EB_PS1 + EB_PS2 + EB_PS3 + EB_PS4);
		setEvent(0, EB_PS1);

		if (isEvent(0, EB_PS1)) {
			int idx = getCurrAnimIndex();
			// SysShape::Animator anim      = m_animator->getAnimator(0);
			SysShape::AnimInfo* info
			    = static_cast<SysShape::AnimInfo*>(m_animator->getAnimator(0).m_animMgr->m_animInfo.m_child)->getInfoByID(idx);
			JAIAnimeFrameSoundData* file = info->m_basFile;

			if (file) {
				SysShape::KeyEvent* event1 = info->getAnimKeyByType(0);
				SysShape::KeyEvent* event2 = info->getAnimKeyByType(1);

				if (event1 != nullptr && event2) {
					f32 val1 = (f32)event1->m_frame;
					f32 val2 = (f32)event2->m_frame;
					m_soundObj->setAnime((JAIAnimeSoundData*)file, 1, val1, val2);
					return;
				}

				m_soundObj->setAnime((JAIAnimeSoundData*)file, 1, 0.0f, 0.0f);
				return;
			}

			m_soundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
			return;
		}

		if (isEvent(0, EB_PS2)) {
			m_soundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
			return;
		}

		if (isEvent(0, EB_PS3)) {
			m_soundObj->setAnime((JAIAnimeSoundData*)-1, 1, 0.0f, 0.0f);
			return;
		}

		m_soundObj->setAnime(nullptr, 1, 0.0f, 0.0f);
	}
	virtual void setCarcassArg(PelletViewArg& settings); // _2C8
	virtual f32 getCarcassArgHeight()                    // _2CC (weak)
	{
		return m_boundingSphere.m_radius;
	}
	virtual bool doBecomeCarcass();                     // _2D0
	virtual void startWaitingBirthTypeDrop();           // _2D4
	virtual void finishWaitingBirthTypeDrop();          // _2D8
	virtual bool isFinishableWaitingBirthTypeDrop();    // _2DC
	virtual void doStartWaitingBirthTypeDrop();         // _2E0
	virtual void doFinishWaitingBirthTypeDrop();        // _2E4
	virtual void wallCallback(const MoveInfo& info) { } // _2E8 (weak)
	virtual f32 getDownSmokeScale();                    // _2EC
	virtual void doStartMovie() { }                     // _2F0 (weak)
	virtual void doEndMovie() { }                       // _2F4 (weak)
	// vtable 3 (PelletView)

	void addDamage(f32 damageAmt, f32 flickSpeed);

	void bounceProcedure(Sys::Triangle* triangle);

	void collisionMapAndPlat(f32 simSpeed);

	PSM::EnemyBase* createPSEnemyBase();
	void createEffects();
	void createBounceEffect(const Vector3f& position, f32 scale);
	void createDeadBombEffect();
	void createDropEffect(const Vector3f& position, f32 scale);
	void createSplashDownEffect(const Vector3f& position, f32 scale);
	void fadeEffects();

	void doEntryCarcass();
	void doEntryLiving();
	void doSimulationConstraint(f32 simSpeed);
	void hardConstraintOn();
	void hardConstraintOff();
	void constraintOff();

	void finishDropping(bool lockToFloor);

	void deathProcedure();
	void gotoHell();

	bool isCullingOff();

	void startMotion();
	void startMotion(int animIdx, SysShape::MotionListener* mListener);
	void finishMotion();
	void stopMotion();
	bool isFinishMotion();
	bool isStopMotion();
	f32 getFirstKeyFrame();
	f32 getMotionFrame();
	f32 getMotionFrameMax();
	void setMotionFrame(f32 frame);

	int getCurrAnimIndex();
	void setAnimSpeed(f32 speed);
	void resetAnimSpeed();

	void setEmotionCaution();
	void setEmotionExcitement();
	void setEmotionNone();

	void setAnimMgr(SysShape::AnimMgr* animMgr);
	void setOtakaraCode(PelletMgr::OtakaraItemCode& code);
	void setPSEnemyBaseAnime();
	void setZukanVisible(bool updateTekiDeathInfo);

	void startBlend(int srcAnimIdx, int destAnimIdx, SysShape::BlendFunction* blendFunc, f32 frameRate, SysShape::MotionListener* listener);
	void endBlend();

	void show();
	void hide();

	int getStateID();
	bool isBeforeAppearState();
	void startStoneState();

	void scaleDamageAnim();
	void finishScaleDamageAnim();

	void updateSpheres();
	void getWaterSphere(Sys::Sphere* waterSphere);
	void updateWaterBox();

	void startMovie();
	void endMovie();

	bool isBirthTypeDropGroup();
	bool checkBirthTypeDropEarthquake();
	void setDroppingMassZero();
	void resetDroppingMassZero();

	void resetCollEvent();

	void becomeCarcass(bool);

	inline void setCreatureID(u8 idx) { m_creatureID = idx; }

	inline void setEvent(int i, u32 flag) { m_events.m_flags[i].typeView |= flag; }

	inline void resetEvent(int i, u32 flag) { m_events.m_flags[i].typeView &= ~flag; }

	inline bool isEvent(int i, u32 flag) { return m_events.m_flags[i].typeView & flag; }

	inline bool checkSecondary()
	{ // needs a better name eventually, used in doSimulationGround
		return (isEvent(1, EB2_1) || isEvent(1, EB2_5));
	}

	inline f32 getAccelerationScale(f32 constraint)
	{
		return constraint / static_cast<EnemyParmsBase*>(m_parms)->m_creatureProps.m_props.m_accel.m_value;
	}

	inline void getDistance2D(Vector3f& point, Vector2f& sep)
	{
		sep.x = m_position.x - point.x;
		sep.y = m_position.z - point.z;
	}

	inline f32 changeFaceDir(Vector3f& XYZ)
	{
		f32 approxSpeed;
		f32 rotSpeed;
		f32 rotAccel;
		f32 x;
		f32 z;

		EnemyParmsBase* parms = static_cast<EnemyParmsBase*>(m_parms);
		rotSpeed              = parms->m_general.m_rotationalSpeed.m_value;
		rotAccel              = parms->m_general.m_rotationalAccel.m_value;

		Vector3f pos = getPosition();
		x            = XYZ.x;
		z            = XYZ.z;

		f32 angleDist = angDist(_angXZ(x, z, pos.x, pos.z), getFaceDir());

		f32 limit   = (DEG2RAD * rotSpeed) * PI;
		approxSpeed = angleDist * rotAccel;
		if (FABS(approxSpeed) > limit) {
			approxSpeed = (approxSpeed > 0.0f) ? limit : -limit;
		}

		m_faceDir    = roundAng(approxSpeed + getFaceDir());
		m_rotation.y = m_faceDir;
		return angleDist;
	}

	inline f32 changeFaceDir(Vector2f& XZ)
	{
		f32 approxSpeed;
		f32 rotSpeed;
		f32 rotAccel;
		f32 x;
		f32 z;

		EnemyParmsBase* parms = static_cast<EnemyParmsBase*>(m_parms);
		rotSpeed              = parms->m_general.m_rotationalSpeed.m_value;
		rotAccel              = parms->m_general.m_rotationalAccel.m_value;

		Vector3f pos = getPosition();
		x            = XZ.x;
		z            = XZ.y;

		f32 angleDist = angDist(_angXZ(x, z, pos.x, pos.z), getFaceDir());

		f32 limit   = (DEG2RAD * rotSpeed) * PI;
		approxSpeed = angleDist * rotAccel;
		if (FABS(approxSpeed) > limit) {
			approxSpeed = (approxSpeed > 0.0f) ? limit : -limit;
		}

		m_faceDir    = roundAng(approxSpeed + getFaceDir());
		m_rotation.y = m_faceDir;
		return angleDist;
	}

	inline f32 changeFaceDir(Creature* target)
	{
		f32 approxSpeed;
		f32 rotSpeed;
		f32 rotAccel;

		EnemyParmsBase* parms = static_cast<EnemyParmsBase*>(m_parms);
		rotSpeed              = parms->m_general.m_rotationalSpeed.m_value;
		rotAccel              = parms->m_general.m_rotationalAccel.m_value;

		Vector3f targetPos = target->getPosition();
		Vector3f pos       = getPosition();

		f32 angleDist = angDist(angXZ(targetPos, pos), getFaceDir());

		f32 limit   = (DEG2RAD * rotSpeed) * PI;
		approxSpeed = angleDist * rotAccel;
		if (FABS(approxSpeed) > limit) {
			approxSpeed = (approxSpeed > 0.0f) ? limit : -limit;
		}

		m_faceDir    = roundAng(approxSpeed + getFaceDir());
		m_rotation.y = m_faceDir;
		return angleDist;
	}

	inline f32 getDamageAnimFrac(f32 scale) { return (m_damageAnimTimer / scale); }

	inline f32 getSqrHomeRadius()
	{
		f32 homeRad = static_cast<EnemyParmsBase*>(m_parms)->m_general.m_homeRadius.m_value;
		return homeRad * homeRad;
	}

	inline efx::Arg createFXArg() { return efx::Arg(m_position); }

	// Creature: _000 - _178
	// MotionListener: _178 - _17C
	// ptr to PelletView: _17C
	EnemyMgrBase* m_mgr;                         // _180
	EnemyAnimatorBase* m_animator;               // _184
	EnemyAnimKeyEvent* m_curAnim;                // _188
	Vector3f m_position;                         // _18C, aka translation
	Vector3f m_homePosition;                     // _198
	Vector3f m_rotation;                         // _1A4, mainly used for face dir on Y axis
	Vector3f m_damageAnimRotation;               // _1B0
	Vector3f m_stunAnimRotation;                 // _1BC
	Vector3f m_impVelocity;                      // _1C8, impulse velocity
	Vector3f m_simVelocity;                      // _1D4, simulation velocity (only used on simulation)
	BitFlagArray<u32, 2> m_events;               // _1E0
	BitFlagArray<u32, 2> m_eventBuffer;          // _1E8
	u8 m_sfxEmotion;                             // _1F0, the 'emotion' used for bg music
	u8 m_creatureID;                             // _1F1
	u8 _1F2;                                     // _1F2
	bool m_inPiklopedia;                         // _1F3
	int m_stuckPikminCount;                      // _1F4
	f32 m_scaleModifier;                         // _1F8
	f32 m_faceDir;                               // _1FC
	f32 m_health;                                // _200
	f32 m_maxHealth;                             // _204
	f32 m_instantDamage;                         // _208
	f32 m_toFlick;                               // _20C,
	f32 m_damageAnimTimer;                       // _210, timer of the damage animation
	f32 m_stunAnimTimer;                         // _214, timer of the stun animation
	f32 m_friction;                              // _218, related to mass
	f32 m_stoneTimer;                            // _21C, timer of the bitter spray stone state
	Sys::Sphere m_boundingSphere;                // _220
	Creature* m_targetCreature;                  // _230
	CollEvent m_collEvent;                       // _234
	Vector3f m_commonEffectOffset;               // _240
	EnemyStone::Obj* m_enemyStoneObj;            // _24C
	PelletMgr::OtakaraItemCode m_pelletDropCode; // _250
	Pellet* m_heldPellet;                        // _254
	EnemyPelletInfo m_pelletInfo;                // _258
	AILODParm m_lodParm;                         // _264
	Sys::Sphere m_curLodSphere;                  // _270
	WaterBox* m_waterBox;                        // _280
	EnemyEffectNodeHamon* m_effectNodeHamon;     // _284
	Sys::Triangle* m_curWallTri;                 // _288
	PSM::EnemyBase* m_soundObj;                  // _28C
	CNode m_effectNodeHamonRoot;                 // _290 - treat as EnemyEffectNodeBase with EnemyEffectNodeHamon nodes
	f32 m_existTimer;                            // _2A8, how long cherry-spawned enemy has existed in 2P battle
	f32 m_maxExistTime;                          // _2AC, how long cherry-spawned enemy should exist in 2P battle
	s8 m_dropGroup;                              // _2B0
	EnemyFSMState* m_currentLifecycleState;      // _2B4
	EnemyBaseFSM::StateMachine* m_lifecycleFSM;  // _2B8
	                                             // PelletView: _2BC - _2C8
};

struct EarthquakeStateArg : public StateArg {
	f32 m_bounceFactor; // _00, weighting to scale vertical velocity by
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
	virtual void simulation(EnemyBase*, f32) { }                 // _2C (weak)
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
	virtual void simulation(EnemyBase*, f32) { }               // _2C (weak)
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

	virtual void init(EnemyBase*, StateArg*);    // _08
	virtual void cleanup(EnemyBase*);            // _10
	virtual void update(EnemyBase*);             // _24
	virtual void entry(EnemyBase*);              // _28
	virtual void simulation(EnemyBase*, f32) { } // _2C (weak)
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

	virtual void update(EnemyBase*);           // _24
	virtual void entry(EnemyBase*);            // _28
	virtual void simulation(EnemyBase*, f32);  // _2C
	virtual void updateCullingOff(EnemyBase*); // _38
	virtual void updateAlways(EnemyBase*);     // _3C
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
	virtual void update(EnemyBase*);          // _24
	virtual void entry(EnemyBase*);           // _28
	virtual void simulation(EnemyBase*, f32); // _2C
	virtual void animation(EnemyBase* enemy)  // _30 (weak)
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

// defined here to avoid include loop
namespace efx {
inline Arg::Arg(Game::EnemyBase* enemy) { m_position = enemy->m_position; }
} // namespace efx

#endif
