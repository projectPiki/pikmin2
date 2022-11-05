#ifndef _GAME_ENTITIES_KOGANE_H
#define _GAME_ENTITIES_KOGANE_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyParmsBase.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "JSystem/JUT/JUTNameTab.h"

/**
 * --Header for Beetle Base Class (Kogane)--
 * Derived Classes:
 * Fart			= Doodlebug
 * Koganemushi 	= Iridescent Flint Beetle
 * Wealthy	  	= Iridescent Glint Beetle
 */

namespace Game {
namespace Kogane {
struct FSM;

struct Obj : public EnemyBase {
	Obj();

	//////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);          // _30
	virtual void onKill(CreatureKillArg* settings);          // _34
	virtual void doDirectDraw(Graphics& gfx);                // _50
	virtual void inWaterCallback(WaterBox* wb);              // _84 (weak)
	virtual void outWaterCallback();                         // _88 (weak)
	virtual void getShadowParam(ShadowParam& settings);      // _134
	virtual ~Obj() { }                                       // _1BC (weak)
	virtual void setInitialSetting(EnemyInitialParamBase*);  // _1C4
	virtual void doUpdate();                                 // _1CC
	virtual void doUpdateCommon();                           // _1D0
	virtual void doDebugDraw(Graphics&);                     // _1EC
	virtual void changeMaterial() = 0;                       // _200
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID();      // _258 (weak)
	virtual bool pressCallBack(Creature*, f32, CollPart*);   // _27C
	virtual bool hipdropCallBack(Creature*, f32, CollPart*); // _284
	virtual bool earthquakeCallBack(Creature*, f32);         // _28C
	virtual void doStartStoneState();                        // _2A4
	virtual void doFinishStoneState();                       // _2A8
	virtual void wallCallback(const MoveInfo&);              // _2E8
	virtual void doStartMovie();                             // _2F0
	virtual void doEndMovie();                               // _2F4
	virtual void setFSM(FSM*);                               // _2F8
	virtual void createItem() { }                            // _2FC (weak)
	virtual void resetFartTimer();                           // _300 (weak)
	virtual void startBodyEffect() { }                       // _304 (weak)
	virtual void finishBodyEffect() { }                      // _308 (weak)
	virtual void createFartEffect() { }                      // _30C (weak)
	virtual void effectDrawOn();                             // _310 (weak)
	virtual void effectDrawOff();                            // _314 (weak)
	virtual void createPressSENormal() { }                   // _318 (weak)
	virtual void createPressSESpecial() { }                  // _31C (weak)
	//////////////// VTABLE END

	void transitDamageState(f32);
	bool transitDisappear();
	Vector3f getBodyJointPos();
	void koganeScaleUp();
	bool koganeScaleDown();
	void setTargetPosition(Vector3f*);
	void resetAppearTimer();
	bool isAppear();
	void resetMoveTimer(f32, f32);
	bool createTreasureItem();
	void createPellet(int initArg, int amount);
	void createDoping(u8 initArg, int amount);

	// _00 		= VTBL
	// _00-_2BC	= EnemyBase
	FSM* m_FSM;                // _2BC
	int m_flipTally;           // _2C0
	f32 m_appearTimer;         // _2C4
	f32 m_moveTimer;           // _2C8
	f32 m_scaleTimer;          // _2CC
	Vector3f m_targetPosition; // _2D0
	                           // _2DC = body effect
};

struct Mgr : public EnemyMgrBase {
	Mgr(int objLimit, u8 modelType);

	// virtual ~Mgr();                                     // _58 (weak)
	virtual SysShape::Model* createModel();            // _B0
	virtual void loadModelData();                      // _C8
	virtual void loadAnimData();                       // _CC
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_Kogane;
	}
	virtual J3DModelData* doLoadBmd(void* filename) // _D4 (weak)
	{
		return J3DModelLoaderDataBase::load(filename, 0x00240030);
	}
	virtual ResTIMG* getChangeTexture() = 0; // _E0

	// _00 		= VTBL
	// _00-_44	= EnemyMgrBase
	ResTIMG* m_changeTexture; // _44
};

struct Parms : public EnemyParmsBase {
	struct ProperParms : Parameters {
		ProperParms()
		    : Parameters(nullptr, "EnemyParmsBase")
		    , m_fp01(this, 'fp01', "èoåªéûä‘(Min)", 15.0f, 0.0f, 100.0f)
		    , m_fp02(this, 'fp02', "èoåªéûä‘(Max)", 30.0f, 0.0f, 100.0f)
		    , m_fp10(this, 'fp10', "à⁄ìÆéûä‘(Min)", 0.5f, 0.0f, 10.0f)
		    , m_fp11(this, 'fp11', "à⁄ìÆéûä‘(Max)", 2.0f, 0.0f, 10.0f)
		    , m_fp20(this, 'fp20', "í‚é~éûä‘(Min)", 0.5f, 0.0f, 10.0f)
		    , m_fp21(this, 'fp21', "í‚é~éûä‘(Max)", 2.0f, 0.0f, 10.0f)
		    , m_fp30(this, 'fp30', "å¸Ç´ïœÇ¶äpìx", 45.0f, 0.0f, 90.0f)
		    , m_fp40(this, 'fp40', "ÉXÉPÅ[Éã", 0.8f, 0.0f, 5.0f)
		{
		}

		Parm<f32> m_fp01; // _804
		Parm<f32> m_fp02; // _82C
		Parm<f32> m_fp10; // _854
		Parm<f32> m_fp11; // _87C
		Parm<f32> m_fp20; // _8A4
		Parm<f32> m_fp21; // _8CC
		Parm<f32> m_fp30; // _8F4
		Parm<f32> m_fp40; // _91C
	};

	Parms() { }

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		m_general.read(stream);
		m_properParms.read(stream);
	}

	// _00-_7F8	= EnemyParmsBase
	ProperParms m_properParms; // _7F8
};

struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() { }                                    // _08
	virtual void setAnimMgr(SysShape::AnimMgr* mgr);                 // _0C
	virtual SysShape::Animator& getAnimator() { return m_animator; } // _10
	virtual SysShape::Animator& getAnimator(int idx);                // _14

	// _00 		= VTBL
	// _00-_10	= EnemyAnimatorBase
	SysShape::Animator m_animator; // _10
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	KOGANE_Appear    = 0,
	KOGANE_Disappear = 1,
	KOGANE_Move      = 2,
	KOGANE_Wait      = 3,
	KOGANE_Press     = 4,
	KOGANE_Count,
};

struct FSM : public EnemyStateMachine {
	virtual void init(EnemyBase*); // _08

	// _00		= VTBL
	// _00-_1C	= EnemyStateMachine
};

struct State : public EnemyFSMState {
	inline State(u16 stateID, const char* name)
	    : EnemyFSMState(stateID)
	{
		m_name = name;
	}

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateAppear : public State {
	inline StateAppear()
	    : State(KOGANE_Appear, "appear")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateDisappear : public State {
	inline StateDisappear()
	    : State(KOGANE_Disappear, "disappear")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateMove : public State {
	inline StateMove()
	    : State(KOGANE_Move, "move")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StatePress : public State {
	inline StatePress()
	    : State(KOGANE_Press, "press")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};

struct StateWait : public State {
	inline StateWait()
	    : State(KOGANE_Wait, "wait")
	{
	}

	virtual void init(EnemyBase*, StateArg*); // _08
	virtual void exec(EnemyBase*);            // _0C
	virtual void cleanup(EnemyBase*);         // _10

	// _00		= VTBL
	// _00-_10 	= EnemyFSMState
};
/////////////////////////////////////////////////////////////////
} // namespace Kogane
} // namespace Game

#endif
