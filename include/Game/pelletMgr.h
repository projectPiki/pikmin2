#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

#include "CarryInfo.h"
#include "Game/DynCreature.h"
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
#include "types.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "System.h"
#include "Iterator.h"

// pellet carry colors/onion destinations
// for use with Pellet::m_pelletColor
#define PELCOLOR_BLUE   (0)
#define PELCOLOR_RED    (1)
#define PELCOLOR_YELLOW (2)
#define PELCOLOR_RANDOM (3)

// pellet types
// for use with Pellet:m_pelletType and getKind()
#define PELTYPE_NUMBER   (0)
#define PELTYPE_CARCASS  (1)
#define PELTYPE_BERRY    (2)
#define PELTYPE_TREASURE (3)
#define PELTYPE_UPGRADE  (4)

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

struct PelletMgr : public NodeObjectMgr<GenericObjectMgr> {
	struct OtakaraItemCode {
		OtakaraItemCode(s16 v = 0)
		    : m_value(v)
		{
		}

		bool isNull();
		void read(Stream&);
		void write(Stream&);

		s16 m_value; // _00
	};

	PelletMgr();

	// vtable 1
	virtual ~PelletMgr() { }                    // _08 (weak)
	virtual void doAnimation();                 // _64 (weak)
	virtual void doEntry();                     // _68 (weak)
	virtual void doSetView(int viewportNumber); // _6C (weak)
	virtual void doViewCalc();                  // _70 (weak)
	virtual void doSimulation(float rate);      // _74 (weak)
	virtual void doDirectDraw(Graphics& gfx);   // _78 (weak)
	virtual char* getMgrName()                  // _80 (weak)
	{
		return "ペレットマネージャ"; // pellet manager
	}
	virtual char* getCaveName(int);       // _84
	virtual u8 getCaveID(char*);          // _88
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
	void decode(long, u8&, int&);
	int encode(u8, int);
	BasePelletMgr* getMgrByID(u8);

	static bool mDebug;
	static bool disableDynamics;

	bool m_movieDrawDisabled; // _3C, setMovieDraw sets this to !input
};

struct PelletIterator {
	PelletIterator();

	void first();
	bool isDone();
	void next();
	Pellet* operator*();
	void setFirst();

	u32 _00;                               // _00 - unknown
	FixedSizePelletMgr<Pellet>* m_mgr;     // _04
	TObjectNode<GenericObjectMgr>* m_node; // _08
	int m_index;                           // _0C
};

/**
 * @size{0x28}
 */
struct PelletInitArg : public CreatureInitArg {
	PelletInitArg()
	{
		_1C           = 0;
		_14           = 0;
		m_pelletType  = 0xFF;
		_18           = nullptr;
		_17           = 0;
		_04           = true;
		_1D           = 0;
		m_maxCarriers = -1;
		m_minCarriers = -1;
		_1E           = 0;
		_1F           = 0;
	}

	/**
	 * @reifiedAddress{80107C2C}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "PelletInitArg";
	}

	bool _04;               // _04
	char* m_textIdentifier; // _08
	int _0C;                // _0C
	int _10;                // _10
	u16 _14;                // _14
	u8 m_pelletType;        // _16
	u8 _17;                 // _17
	PelletView* _18;        // _18
	u8 _1C;                 // _1C
	u8 _1D;                 // _1D
	u8 _1E;                 // _1E
	u8 _1F;                 // _1F
	int m_minCarriers;      // _20
	int m_maxCarriers;      // _24
};

struct PelletIndexInitArg : public PelletInitArg {
	PelletIndexInitArg(int);

	u8 _28[0x8]; // _28, unknown
};

struct PelletNumberInitArg : public PelletInitArg {
	PelletNumberInitArg(int size, int);
};

struct PelletKillArg : public CreatureKillArg {
	u8 _08; // _08
};

/**
 * @size = 0x458
 */
struct Pellet : public DynCreature, public SysShape::MotionListener, public CarryInfoOwner {
	Pellet();

	////////////// VTABLE 1 (DYNCREATURE)
	virtual Vector3f getPosition() // _08 (weak)
	{
		return m_pelletPosition;
	}
	virtual void getBoundingSphere(Sys::Sphere& boundSphere);         // _10
	virtual bool deferPikiCollision() { return true; }                // _20 (weak)
	virtual void constructor();                                       // _2C
	virtual void onInit(CreatureInitArg* settings);                   // _30 (weak)
	virtual void onKill(CreatureKillArg* settings);                   // _34
	virtual void doAnimation();                                       // _3C
	virtual void doEntry();                                           // _40
	virtual void doSetView(int viewportNumber);                       // _44
	virtual void doViewCalc();                                        // _48
	virtual void doSimulation(float rate);                            // _4C
	virtual void doDirectDraw(Graphics& gfx);                         // _50
	virtual float getFaceDir() { return m_faceDir; }                  // _64 (weak)
	virtual void setVelocity(Vector3f& vel);                          // _68
	virtual Vector3f getVelocity();                                   // _6C
	virtual void onSetPosition(Vector3f& dest);                       // _70 (weak)
	virtual void updateTrMatrix();                                    // _78
	virtual bool inWater() { return m_isInWater; }                    // _8C (weak)
	virtual void onStartCapture();                                    // _94
	virtual void onUpdateCapture(Matrixf&);                           // _98
	virtual void onEndCapture();                                      // _9C
	virtual void doSave(Stream&);                                     // _E0
	virtual void doLoad(Stream&);                                     // _E4
	virtual void bounceCallback(Sys::Triangle* tri);                  // _E8
	virtual JAInter::Object* getJAIObject();                          // _F4
	virtual PSM::Creature* getPSCreature();                           // _F8
	virtual Vector3f* getSound_PosPtr() { return &m_pelletPosition; } // _100 (weak)
	virtual void getShadowParam(ShadowParam& settings);               // _134
	virtual bool needShadow();                                        // _138
	virtual void getLODSphere(Sys::Sphere& lodSphere);                // _140
	virtual void startPick();                                         // _148
	virtual void endPick(bool);                                       // _14C
	virtual bool isSlotFree(short);                                   // _168
	virtual short getFreeStickSlot();                                 // _16C
	virtual short getNearFreeStickSlot(Vector3f&);                    // _170
	virtual short getRandomFreeStickSlot();                           // _174
	virtual void onSlotStickStart(Creature*, short);                  // _178
	virtual void onSlotStickEnd(Creature*, short);                    // _17C
	virtual void calcStickSlotGlobal(short, Vector3f&);               // _180
	virtual bool stimulate(Interaction& data);                        // _1A4
	virtual char* getCreatureName();                                  // _1A8
	virtual s32 getCreatureID();                                      // _1AC
	virtual void onSetPosition();                                     // _1B0
	////////////// VTABLE 1 END (DYNCREATURE)

	////////////// VTABLE 2  (MOTIONLISTENER)
	// --- (only thunk)
	////////////// VTABLE 2 END (MOTIONLISTENER)

	////////////// VTABLE 3 (CARRYINFOOWNER + SELF)
	// getCarryInfoParam thunk at _1C8
	virtual void do_onInit(CreatureInitArg*) { }                // _1CC (weak)
	virtual void onCreateShape() { }                            // _1D0 (weak)
	virtual void theEntry();                                    // _1D4
	virtual void onBounce() { }                                 // _1D8 (weak)
	virtual void shadowOn();                                    // _1DC
	virtual void shadowOff();                                   // _1E0
	virtual bool isPickable();                                  // _1E4
	virtual s32 getBedamaColor() { return -1; }                 // _1E8 (weak)
	virtual void do_update() { }                                // _1EC (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent& keyEvent) // _1F0 (weak, thunk at _1BC)
	{
		if ((keyEvent.m_type == 1000U) && (_41C.m_flags & 2)) {
			_41C.startAnim(0, this);
			if (_3D0 & 1) {
				_438 = 30.0f * sys->m_deltaTime;
				return;
			}
			_438 = 0.0f;
		}
	}
	virtual u8 getKind() = 0;                                 // _1F4
	virtual void changeMaterial() { }                         // _1F8 (weak)
	virtual void createKiraEffect(Vector3f&) { }              // _1FC (weak)
	virtual void getCarryInfoParam(CarryInfoParam& infoParam) // _200 (weak, thunk at _1C8)
	{
		infoParam.m_useType    = 0;
		infoParam.m_position   = m_rigid.m_configs[0]._00;
		infoParam.m_yOffsetMax = 30.0f + m_config->m_params.m_height.m_data;
		infoParam._14          = 1;
		infoParam.m_isTopFirst = 1;
		infoParam.m_value2     = getTotalCarryPikmins();

		int minVal;
		if (_3D8 > 0) {
			minVal = _3D8;
		} else {
			minVal = m_config->m_params.m_min.m_data;
		}
		infoParam.m_value1 = minVal;

		infoParam.m_color = m_carryColor;
	}
	virtual bool isCarried();                    // _204
	virtual bool isPicked() { return _3D0 & 1; } // _208 (weak)
	virtual void sound_otakaraEventStart() { }   // _20C (weak)
	virtual void sound_otakaraEventRestart() { } // _210 (weak)
	virtual void sound_otakaraEventStop() { }    // _214 (weak)
	virtual void sound_otakaraEventFinish() { }  // _218 (weak)

	u8 getWallTimer();
	void clearClaim();
	void sendClaim();
	void updateClaim();
	float getBuryDepthMax();
	float getBuryDepth();
	float getBuryRadius(float);

	float getBottomRadius();
	float getPickRadius();
	float getCylinderHeight();
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
	void setPanModokiRotation(float);
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
		m_pelletColor = color;
	}

	inline void setSlotOccupied(int slot)
	{
		if (slot < 128) {
			u32 index = slot >> 3;
			u32 flag  = 1 << slot - index * 8;
			m_slots[15 - index] |= flag;
		}
	}

	inline void setSlotFree(int slot)
	{
		if (slot < 128) {
			u32 index = slot >> 3;
			u32 flag  = 1 << slot - index * 8;
			m_slots[15 - index] &= ~flag;
		}
	}

	inline void animate_pmotions(SysShape::Animator* animator)
	{
		for (int i = 0; i < m_numPMotions; i++) {
			animator->animate(1.0f);

			char jointName[128];
			sprintf(jointName, "pmotion");

			SysShape::Joint* joint = m_model->getJoint(jointName);

			if (joint) {
				u16 index               = joint->m_jointIndex;
				SysShape::Model* model  = m_model;
				J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(animator->getCalc());

				model->m_j3dModel->m_modelData->m_jointTree.m_joints[index]->m_mtxCalc = calc;
			}
		}
	}

	inline bool isTreasurePosition() // this probably needs a better name; used in Pellet::onSetPosition
	{
		bool check = false;
		if ((m_captureMatrix == nullptr) && (PelletMgr::mDebug == false) && (m_config->m_params.m_depth.m_data > 0.0f) && (_3C4 == 0)) {
			check = true;
		}
		if ((gameSystem->m_mode == GSM_VERSUS_MODE) && (m_captureMatrix == nullptr) && (_3C4 == 0)) {
			u8 test = _32C;
			if (test == 4) {
				check = false;
			} else if (test == 5) {
				check = false;
			} else if (test == 6 && getStateID() != 5) {
				check = true;
			}
		}
		return check;
	}

	inline int getPokoValue() { return m_config->m_params.m_money.m_data; }

	// _00		= VTABLE 1
	// _04-_314	= DYNCREATURE
	// _318 	= VTABLE 2? 3?
	float m_radius;               // _31C
	float m_depth;                // _320
	u8 _324;                      // _324 - unknown
	bool m_isInWater;             // _325
	u8 _326[0x2];                 // _326 - could be padding
	TexCaster::Caster* m_caster;  // _328
	u8 _32C;                      // _32C - unknown
	u8 m_discoverDisable;         // _32D
	u8 _32E[0x2];                 //  _32E - could be padding
	PSM::EventBase* m_soundMgr;   // _330
	PelletCarry* m_pelletCarry;   // _334
	u8 m_numPMotions;             // _338
	u8 _339[0x3];                 // _339, unknown/padding
	SysShape::Animator _33C;      // _33C
	PelletView* m_pelletView;     // _358
	PelletConfig* m_config;       // _35C
	int _360;                     // _360
	u8 _364;                      // _364
	u8 _365[0x33];                // _365 - unknown
	CarryInfoMgr* m_carryInfoMgr; // _398
	u8 _39C;                      // _39C - unknown
	u8 _39D[0xF];                 // _39D - unknown
	Vector3f m_pelletPosition;    // _3AC
	float m_faceDir;              // _3B8
	u8 m_wallTimer;               // _3BC
	u8 _3BD[0x3];                 // _3BD - possibly padding
	u32 m_claim;                  // _3C0
	bool _3C4;                    // _3C4
	u8 _3C5[0x3];                 // _3C5 - unknown
	PelletFSM* m_pelletSM;        // _3C8
	PelletState* m_pelletState;   // _3CC
	u8 _3D0;                      // _3D0
	u8 _3D1[0x3];                 // _3D1 - unknown
	int m_carryColor;             // _3D4
	int _3D8;                     // _3D8, to do with pikmin number
	int _3DC;                     // _3DC
	float _3E0;                   // _3E0
	u8 m_slots[16];               // _3E4
	short m_slotCount;            // _3F4
	u8 _3F6;                      // _3F6
	u8 _3F7;                      // _3F7 - unknown, maybe padding
	u32 m_pikminCount[7];         // _3F8, TODO: likely [PikiColorCount]
	u32 _414;                     // _414 - unknown
	float m_carryPower;           // _418
	SysShape::Animator _41C;      // _41C
	float _438;                   // _438
	u16 _43C;                     // _43C
	u16 m_pelletColor;            // _43E
	int m_slotIndex;              // _440
	Sys::Sphere m_lodSphere;      // _444
	BasePelletMgr* m_mgr;         // _454

	static bool sFromTekiEnable;
};

struct PelletFSM : public StateMachine<Pellet> {
	virtual void init(Pellet*); // _08

	// _00 		= VTABLE
	// _04-_1C 	= StateMachine<Pellet>
};

struct PelletGoalStateArg : public StateArg {
	inline PelletGoalStateArg(Creature* creature) { m_creature = creature; }

	Creature* m_creature; // _00
	// _04 = VTBL

	virtual char* getName() { return "PelletGoalStateArg"; } // _08 (weak)
};

struct PelletState : public FSMState<Pellet> {
	virtual bool isBuried();                    // _20 (weak)
	virtual bool appeared();                    // _24 (weak)
	virtual bool isPickable() { return false; } // _28 (weak)

	u8 _0C[0x4]; // _0C
};

struct PelletAppearState : public PelletState {
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10
	virtual bool appeared();               // _24 (weak)

	float _10;   // _10
	float _14;   // _14
	float _18;   // _18
	float _1C;   // _1C
	float _20;   // _20
	float _24;   // _24
	float _28;   // _28
	u8 _2C;      // _29
	u8 _2D[0x3]; // _2A, unknown/maybe padding
};

struct PelletBuryState : public PelletState {
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10
	virtual bool isBuried();               // _20 (weak)
};

struct PelletGoalState : public PelletState {
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	void checkMovie(Pellet*);

	Creature* m_creature; // _10
	float _14;            // _14
	float _18;            // _18
	float _1C;            // _1C
	float _20;            // _20
	u8 _24[0x18];         // _24, unknown
	u8 _3C;               // _3C, unknown
	u8 _3D;               // _3D
	u8 _3E[0x2];          // _3E, unknown/maybe padding
};

struct PelletGoalWaitState : public PelletState {
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	u8 _10[0x4]; // _10, unknown
};

struct PelletNormalState : public PelletState {
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10
	virtual bool isPickable();             // _28 (weak)
};

struct PelletReturnState : public PelletState {
	PelletReturnState();

	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	void initPathfinding(Pellet*);
	void execPathfinding(Pellet*);
	void execMove(Pellet*);
	void execMoveGoal(Pellet*);

	float _10;                  // _10
	float _14;                  // _14
	u8 _18[0x2];                // _18
	u16 _1A;                    // _1A
	u32 _1C;                    // _1C
	u8 _20[0xC];                // _20, unknown
	PathNode* _24;              // _24
	PathNode* _28;              // _28
	int _2C;                    // _2C, maybe count of nodes traversed?
	::efx::TOrimaLight* _30;    // _30
	::efx::TOrimaLightAct* _34; // _34
};

struct PelletScaleAppearState : public PelletState {
	// might inherit PelletAppearState or vice versa?
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10
	virtual bool appeared();               // _24 (weak)

	float _10;   // _10
	float _14;   // _14
	float _18;   // _18
	float _1C;   // _1C
	float _20;   // _20
	float _24;   // _24
	float _28;   // _28
	u8 _2C;      // _2C
	u8 _2D[0x3]; // _2D, unknown/maybe padding
};

struct PelletUpState : public PelletState {
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10
	virtual bool isBuried();               // _20 (weak)
};

struct PelletZukanState : public PelletState {
	virtual void init(Pellet*, StateArg*); // _08
	virtual void exec(Pellet*);            // _0C
	virtual void cleanup(Pellet*);         // _10

	float _10; // _10
};

extern PelletMgr* pelletMgr;

} // namespace Game

#endif
