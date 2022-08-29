#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

#include "CarryInfo.h"
#include "Game/DynCreature.h"
#include "ObjectMgr.h"
#include "GenericObjectMgr.h"
#include "Game/Interaction.h"
#include "Game/PelletCarry.h"
#include "Game/pelletConfig.h"
#include "Game/Onyon.h"
#include "Game/StateMachine.h"
#include "SysShape/MotionListener.h"
#include "SysShape/KeyEvent.h"
#include "SysShape/Animator.h"
#include "Sys/Sphere.h"
#include "Sys/Triangle.h"
#include "CarryInfo.h"
#include "TexCaster.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "types.h"
#include "JSystem/JUT/JUTException.h"

#define PELLET_BLUE   (0)
#define PELLET_RED    (1)
#define PELLET_YELLOW (2)
#define PELLET_RANDOM (3)

namespace PSM {
struct PelletOtakara;
} // namespace PSM

namespace Game {
struct BasePelletMgr;
struct Pellet;
struct PelletInitArg;

struct PelletMgr : public NodeObjectMgr<GenericObjectMgr> {
	struct OtakaraItemCode {
		OtakaraItemCode(s16 v = 0)
		    : m_value(v)
		{
		}

		bool isNull();

		s16 m_value; // _00
	};

	// vtable 1
	virtual void doAnimation();           // _64 (weak)
	virtual void doEntry();               // _68 (weak)
	virtual void doSetView(int);          // _6C (weak)
	virtual void doViewCalc();            // _70 (weak)
	virtual void doSimulation(float);     // _74 (weak)
	virtual void doDirectDraw(Graphics&); // _78 (weak)
	virtual void getMgrName();            // _80 (weak)
	virtual void getCaveName(int);        // _84
	virtual void getCaveID(char*);        // _88
	virtual void doSimpleDraw(Viewport*); // _8C (weak)

	void setMovieDraw(bool);
	PelletMgr();
	void createManagers(unsigned long);
	void resetMgrs();
	void setupResources();
	Pellet* birth(Game::PelletInitArg*);
	void setUse(Game::PelletInitArg*);
	void makePelletInitArg(Game::PelletInitArg&, char*);
	void makeVsCarryMinMax(Game::PelletInitArg&, char*);
	void makePelletInitArg(Game::PelletInitArg&, Game::PelletMgr::OtakaraItemCode&);
	void makeOtakaraItemCode(char*, Game::PelletMgr::OtakaraItemCode&);
	void addMgr(Game::BasePelletMgr*);
	void setupSoundViewerAndBas();
	void decode(long, unsigned char&, int&);
	void encode(unsigned char, int);
	void getMgrByID(unsigned char);

	u8 _3C; // _3C
};

struct PelletIterator {
	PelletIterator();

	void first();
	bool isDone();
	void next();
	Pellet* operator*();
	void setFirst();

	u32 _00;        // _00 - unknown
	void* _04;      // _04 - unknown pointer
	PelletMgr* _08; // _08 - probably? it's a TObjectNode<GenericObjectMgr>* according to ghidra
	u32 _0C;        // _0C - unknown
};

struct CreatureInitArg {
	virtual const char* getName() = 0; // _08

	// _00 VTBL
};

/**
 * @size{0x28}
 */
struct PelletInitArg : CreatureInitArg {
	/**
	 * @reifiedAddress{80107C2C}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "PelletInitArg";
	}

	char* m_textIdentifier; // _08
	int _0C;                // _0C
	int _10;                // _10
	short _14;              // _14
	u8 m_pelletType;        // _16
	u8 _17;                 // _17
	u32 _18;                // _18
	u8 _1C;                 // _1C
	u8 _1D;                 // _1D
	u8 _1E;                 // _1E
	u8 _1F;                 // _1F
	int m_minCarriers;      // _20
	int m_maxCarriers;      // _24
};

struct PelletNumberInitArg : public PelletInitArg {
	PelletNumberInitArg(int, int);
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
	virtual void getBoundingSphere(Sys::Sphere&);       // _10
	virtual bool deferPikiCollision();                  // _20 (weak)
	virtual void constructor();                         // _2C
	virtual void onInit(CreatureInitArg*);              // _30 (weak)
	virtual void onKill(CreatureKillArg*);              // _34
	virtual void doAnimation();                         // _3C
	virtual void doEntry();                             // _40
	virtual void doSetView(int);                        // _44
	virtual void doViewCalc();                          // _48
	virtual void doSimulation(float);                   // _4C
	virtual void doDirectDraw(Graphics&);               // _50
	virtual float getFaceDir();                         // _64 (weak)
	virtual void setVelocity(Vector3f&);                // _68
	virtual Vector3f getVelocity();                     // _6C
	virtual void onSetPosition(Vector3f&);              // _70 (weak)
	virtual void updateTrMatrix();                      // _78
	virtual bool inWater();                             // _8C (weak)
	virtual void onStartCapture();                      // _94
	virtual void onUpdateCapture(Matrixf&);             // _98
	virtual void onEndCapture();                        // _9C
	virtual void doSave(Stream&);                       // _E0
	virtual void doLoad(Stream&);                       // _E4
	virtual void bounceCallback(Sys::Triangle*);        // _E8
	virtual JAInter::Object* getJAIObject();            // _F4
	virtual PSM::Creature* getPSCreature();             // _F8
	virtual Vector3f* getSound_PosPtr();                // _100 (weak)
	virtual void getShadowParam(ShadowParam&);          // _134
	virtual bool needShadow();                          // _138
	virtual void getLODSphere(Sys::Sphere&);            // _140
	virtual void startPick();                           // _148
	virtual void endPick(bool);                         // _14C
	virtual bool isSlotFree(short);                     // _168
	virtual int getFreeStickSlot();                     // _16C
	virtual int getNearFreeStickSlot(Vector3f&);        // _170
	virtual int getRandomFreeStickSlot();               // _174
	virtual void onSlotStickStart(Creature*, short);    // _178
	virtual void onSlotStickEnd(Creature*, short);      // _17C
	virtual void calcStickSlotGlobal(short, Vector3f&); // _180
	virtual bool stimulate(Interaction&);               // _1A4
	virtual char* getCreatureName();                    // _1A8
	virtual s32 getCreatureID();                        // _1AC
	virtual void onSetPosition();                       // _1B0
	////////////// VTABLE 1 END (DYNCREATURE)

	////////////// VTABLE 2  (MOTIONLISTENER)
	// --- (only thunk)
	////////////// VTABLE 2 END (MOTIONLISTENER)

	////////////// VTABLE 3 (CARRYINFOOWNER + SELF)
	// getCarryInfoParam thunk at _1C8
	virtual void do_onInit(CreatureInitArg*);           // _1CC (weak)
	virtual void onCreateShape();                       // _1D0 (weak)
	virtual void theEntry();                            // _1D4
	virtual void onBounce();                            // _1D8 (weak)
	virtual void shadowOn();                            // _1DC
	virtual void shadowOff();                           // _1E0
	virtual bool isPickable();                          // _1E4
	virtual void getBedamaColor();                      // _1E8 (weak)
	virtual void do_update();                           // _1EC (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _1F0 (weak, thunk at _1BC)
	virtual void getKind() = 0;                         // _1F4
	virtual void changeMaterial();                      // _1F8 (weak)
	virtual void createKiraEffect(Vector3f&) { }        // _1FC (weak)
	virtual void getCarryInfoParam(CarryInfoParam&);    // _200 (weak, thunk at _1C8)
	virtual bool isCarried();                           // _204
	virtual bool isPicked();                            // _208 (weak)
	virtual void sound_otakaraEventStart();             // _20C (weak)
	virtual void sound_otakaraEventRestart();           // _210 (weak)
	virtual void sound_otakaraEventStop();              // _214 (weak)
	virtual void sound_otakaraEventFinish();            // _218 (weak)

	void getWallTimer();
	void clearClaim();
	void sendClaim();
	void updateClaim();
	void getBuryDepthMax();
	void getBuryDepth();
	void getBuryRadius(float);

	void getBottomRadius();
	float getPickRadius();
	float getCylinderHeight();
	int getConfigIndex();
	void getConfigName();
	void getPelletConfigMin();
	void getPelletConfigMax();
	void setupParticles();
	void setupParticles_simple();
	void setupParticles_tall();
	void panmodokiCarryable();
	void finishDisplayCarryInfo();
	void setCarryColor(int);
	void clearCarryColor();
	void allocateTexCaster();
	void setPanModokiRotation(float);
	void setOrientation(Matrixf&);
	void getStateID();
	void update();
	void getPikiBirthCount(int&, int&);
	void entryShape();
	void init_pmotions();
	void update_pmotions();
	void start_pmotions();
	void stop_carrymotion();
	void finish_carrymotion();
	void getSpeicalSlot();
	void getPelletGoal();
	void getTotalPikmins();
	void getTotalCarryPikmins();
	void getPikmins(int);
	void getFace();
	void clearDiscoverDisable();
	void startDiscoverDisable(u8);
	void updateDiscoverDisable();
	void discoverDisabled();

	inline void setValidColor(u16 color)
	{
		P2ASSERTLINE(909, !(color > 2));
		m_pelletColor = color;
	}

	// _00		= VTABLE 1
	// _04-_314	= DYNCREATURE
	// _318 	= VTABLE 2? 3?
	float m_radius;                         // _31C
	float m_depth;                          // _320
	u8 _324;                                // _324 - unknown
	bool m_isInWater;                       // _325
	u8 _326[0x2];                           // _326 - could be padding
	TexCaster::Caster* m_caster;            // _328
	u8 _32C;                                // _32C - unknown
	bool m_discoverDisable;                 // _32D - could be u8?
	u8 _32E[0x2];                           //  _32E - could be padding
	PSM::PelletOtakara* m_soundMgr;         // _330
	PelletCarry* m_pelletCarry;             // _334
	u8 _338[0x4];                           // _unknown
	SysShape::Animator _33C;                // _33C
	u32 _358;                               // _340 - unknown
	PelletConfig* m_config;                 // _35C
	int _360;                               // _360
	u8 _364;                                // _364
	u8 _365[0x33];                          // _365 - unknown
	CarryInfoMgr* m_carryInfoMgr;           // _398
	u8 _39C;                                // _39C - unknown
	u8 _39D[0xF];                           // _39D - unknown
	Vector3f m_pelletPosition;              // _3AC
	float m_faceDir;                        // _3B8
	u8 m_wallTimer;                         // _3BC
	u8 _3BD[0x3];                           // _3BD - possibly padding
	u32 _3C0;                               // _3C0 - 'claim'?
	u8 _3C4;                                // _3C4
	u8 _3C5[0x3];                           // _3C5 - unknown
	StateMachine<Game::Pellet>* m_pelletSM; // _3C8
	u8 _3CC[0x4];                           // _3CC - unknown
	u8 _3D0;                                // _3D0
	u8 _3D1[0x3];                           // _3D1 - unknown
	u32 _3D4;                               // _3D4 - possibly carry color?
	u8 _3D8[0x4];                           // _3D8 - unknown
	int _3DC;                               // _3DC
	float _3E0;                             // _3E0
	u8 _3E4[0x10];                          // _3E4 - unknown
	short _3F4;                             // _3F4
	u8 _3F6;                                // _3F6
	u8 _3F7;                                // _3F7 - unknown, maybe padding
	u8 _3F8[0x20];                          // _3F8 - unknown
	float _418;                             // _418 - 'total pellet carry power?'
	SysShape::Animator _41C;                // _41C
	float _438;                             // _438
	u8 _43C[0x2];                           // _43C - unknown
	u16 m_pelletColor;                      // _43E
	int m_slotIndex;                        // _440
	Sys::Sphere m_lodSphere;                // _444
	BasePelletMgr* m_mgr;                   // _454
};

extern PelletMgr* pelletMgr;

} // namespace Game

#endif
