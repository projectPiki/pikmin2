#ifndef _GAME_ENTITIES_SHIJIMICHOU_H
#define _GAME_ENTITIES_SHIJIMICHOU_H

#include "Game/EnemyStateMachine.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyBase.h"
#include "Game/updateMgr.h"
#include "Collinfo.h"

/**
 * --Header for Unmarked Spectralids (ShijimiChou)--
 */

namespace PSM {
struct Cluster;
} // namespace PSM

namespace efx {
struct TChouDown;
} // namespace efx

namespace Game {
namespace ShijimiChou {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);          // _30
	virtual void onKill(CreatureKillArg* settings);          // _34
	virtual void doAnimation();                              // _3C
	virtual void doEntry();                                  // _40
	virtual void doSimulation(f32);                          // _4C
	virtual void doDirectDraw(Graphics& gfx);                // _50
	virtual void collisionCallback(CollEvent&);              // _EC
	virtual void getShadowParam(ShadowParam&);               // _134
	virtual bool ignoreAtari(Creature*);                     // _190 (weak)
	virtual ~Obj();                                          // _1BC (weak)
	virtual void birth(Vector3f&, f32);                      // _1C0
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4 (weak)
	virtual void doUpdate();                                 // _1CC
	virtual void doAnimationCullingOff();                    // _1DC
	virtual void doAnimationCullingOn();                     // _1E0
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial();                           // _200
	virtual void setParameters();                            // _228
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();      // _258 (weak)
	virtual bool damageCallBack(Creature*, f32, CollPart*);  // _278
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C (weak)
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284 (weak)
	virtual bool earthquakeCallBack(Creature*, f32);         // _28C (weak)
	virtual void doStartStoneState();                        // _2A4
	virtual void startCarcassMotion();                       // _2C4
	virtual void wallCallback(const MoveInfo&);              // _2E8
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM*);                               // _2F8 (weak)
	//////////////// VTABLE END

	void genItem();
	void checkFlyStart();
	void fly();
	void restFly();
	void restCheck();
	void checkRestOn();
	void checkRestOff();
	void resetRestPos();
	void leave();
	void leaveInit();
	void setNextGoal();
	void setTraceGoal();
	void isFallEnd();
	void deadEffect();
	void fallBehavior();
	void updateCluster();
	void getFlyType();
	void leaderInit();
	void createAppearEffect();
	void fadeAppearEffect();

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	/*
	 * Ghidra has the struct offset for EnemyBase inheritance wrong here
	 * so proceed with caution if using, may be off by 0x4 up or down.
	 * Overall size is 0x34C, 0x10 of which is PelletView at the end.
	 * 		- HP
	 */
	u32 m_specType;                // _2BC, SpectralidType enum?
	u32 m_spawnSource;             // _2C0, SpectralidSpawnSource enum?
	u8 _2C4[0x4];                  // _2C4, unknown
	EnemyBase* m_spawningEnemy;    // _2C8
	Vector3f _2CC;                 // _2CC
	FSM* m_FSM;                    // _2D8
	UpdateContext m_updateContext; // _2DC
	Obj* m_self;                   // _2E8, self for some reason?
	u8 _2EC[0x4];                  // _2EC, unknown
	f32 _2F0;                      // _2F0
	f32 _2F4;                      // _2F4
	f32 _2F8;                      // _2F8
	u8 _2FC[0x8];                  // _2FC, unknown
	Vector3f _304;                 // _304
	Sys::Sphere _310;              // _310
	u8 _320;                       // _320
	u8 _321;                       // _321
	u8 _322[0x2];                  // _322, unknown/padding maybe
	u8 _324[0x8];                  // _324, unknown
	u32 _32C;                      // _32C, fly type maybe?
	u8 _330[0x4];                  // _330, unknown
	efx::TChouDown* m_efxDown;     // _334
	PSM::Cluster* m_soundCluster;  // _338
	                               // _33C = PelletView
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	//////////////// VTABLE
	virtual ~Mgr();                                     // _58 (weak)
	virtual EnemyBase* birth(EnemyBirthArg&);           // _70
	virtual void createObj(int);                        // _A0 (weak)
	virtual EnemyBase* getEnemy(int idx);               // _A4 (weak)
	virtual void doAlloc();                             // _A8
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _AC (weak)
	virtual SysShape::Model* createModel();             // _B0
	virtual void loadModelData();                       // _C8
	//////////////// VTABLE END

	void fetch(J3DModel*, f32);
	void createGroup(Obj*, int);
	void createGroupByBigFoot(EnemyBirthArg&, int);
	void createGroupByPlants(EnemyBirthArg&, int);
	void createGroupByEnemy(EnemyBirthArg&, EnemyBase*, int, bool);

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	UpdateMgr* m_updateMgr; // _44
	Obj* _48;               // _48
	u32 _4C;                // _4C, J3DUMtxCacheRef<J3DUMtxAnmCacheTable>* according to Ghidra
	Obj* _50;               // _50
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : public Parameters {
		ProperParms(); // (weak)

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp08; // _82C
		Parm<f32> m_fp02; // _854
		Parm<f32> m_fp03; // _87C
		Parm<f32> m_fp04; // _8A4
		Parm<f32> m_fp05; // _8CC
		Parm<f32> m_fp06; // _8F4
		Parm<f32> m_fp07; // _91C
	};

	Parms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
	u8 _948;                   // _948, maybe fly type?
	u8 _949;                   // _949, unknown
	u8 _94A;                   // _94A, unknown
	u8 _94B;                   // _94B, unknown
	u8 _94C;                   // _94C, unknown
	u8 _94D;                   // _94D, unknown
	u8 _94E[0x2];              // _94E, unknown/maybe padding
	u8 _950[0x8];              // _950, unknown
	f32 _958;                  // _958
	u8 _95C[0x4];              // _95C, unknown
	f32 _960;                  // _960
	f32 _964;                  // _964
	u8 _968[0xC];              // _968, unknown
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                     // _08 (weak)
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                  // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _10 (weak)
	virtual SysShape::Animator& getAnimator(int idx);                 // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(int); // likely

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDead : public State {
	StateDead(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFall : public State {
	StateFall(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateFly : public State {
	StateFly(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateLeave : public State {
	StateLeave(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateRest : public State {
	StateRest(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	StateWait(int);

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace ShijimiChou
} // namespace Game

#endif
