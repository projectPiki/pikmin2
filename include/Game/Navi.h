#ifndef _GAME_NAVI_H
#define _GAME_NAVI_H

#include "Color4.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JSupport/JSUList.h"
#include "MonoObjectMgr.h"
#include "Sys/MatBaseAnimation.h"
#include "SysShape/Model.h"
#include "efx/TChaseMtx.h"
#include "Game/FakePiki.h"
#include "Game/PelletView.h"
#include "Game/StateMachine.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"

#include "JSystem/JAI/JAInter/Object.h"
#include "SysShape/Joint.h"

#include "Dolphin/mtx.h"

#include "CollInfo.h"
#include "Vector3.h"

struct Controller;

namespace PSM {
struct DirectorUpdator;
struct Navi;
} // namespace PSM

namespace Sys {
struct MatRepeatAnimator;
struct MatLoopAnimator;
struct Sphere;
struct Triangle;
} // namespace Sys

namespace SysShape {
struct AnimInfo;
struct Joint;
struct KeyEvent;
} // namespace SysShape

namespace efx {
struct TFueactCircle {
	~TFueactCircle();
};

struct TFueactBiriBase {
	~TFueactBiriBase();
};

struct TFueactBiri1 {
	~TFueactBiri1();
};

struct TFueactBiri2 {
	~TFueactBiri2();
};

struct TNaviEffect {
	TNaviEffect();

	enum enumNaviType { _00 = 0 };

	void setNaviType(enumNaviType);
	void createLight_(float (*)[4]);

	void createLight()
	{
		m_flags |= 2;
		createLight_(m_beaconMtx->m_matrix.mtxView);
	}

	u32 m_flags;          // _00
	u32 _04;              // _04
	Vector3f* _08;        // _08
	Vector3f* _0C;        // _0C
	Matrixf* m_beaconMtx; // _10
	Matrixf* m_headMtx;   // _14
	u8 _18[0x98];         // _18
	float _AC;            // _AC
	u8 _B0[52];           // _B0
	u32 _E4;              // _34
	u8 _E8[576];          // _38
	float _328;           // _328
	float _32C;           // _32C
	float _330;           // _330
	float _334;           // _334
	float _338;           // _338
	u8 _33C[0x60];        // _33C
	TChaseMtx2* _39C;     // _39C
};
} // namespace efx

// No namespace for this class
struct ContextChasePos {
	ContextChasePos();
	~ContextChasePos();
};

namespace Game {
struct CellObject;
struct CollEvent;
struct CPlate;
struct Creature;
struct Interaction;
struct MoviePlayer;
struct NaviNukuAdjustStateArg;
struct NaviFSM;
struct NaviWhistle;
struct Piki;
struct PlatEvent;
struct PlayCamera;
struct ShadowParam;
struct StateArg;
struct WaterBox;

struct ItemPikihead {
	struct Item;
};

struct NaviState {
	void onKeyEvent(struct Navi*, const SysShape::KeyEvent&);
};

struct NaviWhistle {
	NaviWhistle(Navi*);

	void init();
	void updatePosition();
	void start();
	void stop();
	void timeout();
	void setFaceDir(float);
	void updateWhistle();
	void update(Vector3f&, bool);

	Vector3f _00; // _00
	Vector3f _0C; // _0C
	Vector3f _18; // _18
	f32 _24;      // _24
	u16 _28;      // _28
	f32 _2C;      // _2C
	u32 _30;      // _30
	Navi* m_navi; // _34
	Color4 _38;   // _38
};

struct Navi : public FakePiki, virtual public PelletView {
	Navi();

	// vtable 1 (Creature)
	virtual Vector3f getPosition();                            // _00
	virtual void onInit(CreatureInitArg*);                     // _28
	virtual void onKill(CreatureKillArg*);                     // _2C
	virtual void doAnimation();                                // _34
	virtual void doEntry();                                    // _38
	virtual void doSetView(int);                               // _3C
	virtual void doViewCalc();                                 // _40
	virtual void doSimulation(float);                          // _44
	virtual void doDirectDraw(Graphics&);                      // _48
	virtual void setVelocity(Vector3f&);                       // _60
	virtual void onSetPosition(Vector3f&);                     // _68
	virtual void inWaterCallback(WaterBox*);                   // _7C
	virtual void outWaterCallback();                           // _80
	virtual void bounceCallback(Sys::Triangle*);               // _E0
	virtual void collisionCallback(CollEvent&);                // _E4
	virtual void platCallback(PlatEvent&);                     // _E8
	virtual JAInter::Object* getJAIObject();                   // _EC
	virtual PSM::Creature* getPSCreature();                    // _F0
	virtual void on_movie_begin(bool);                         // _108
	virtual void on_movie_end(bool);                           // _10C
	virtual void movieStartAnimation(u32);                     // _110
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*); // _114
	virtual void movieSetTranslation(Vector3f&, float);        // _11C
	virtual void movieSetFaceDir(float);                       // _120
	virtual bool movieGotoPosition(Vector3f&);                 // _124
	virtual void movieUserCommand(u32, MoviePlayer*);          // _128
	virtual void getShadowParam(ShadowParam&);                 // _12C
	virtual void getLODSphere(Sys::Sphere&);                   // _138
	virtual void onStickStart(Creature*);                      // _150
	virtual void onStickEnd(Creature*);                        // _154
	virtual bool ignoreAtari(Creature*);                       // _188
	virtual bool stimulate(Interaction&);                      // _19C
	virtual char* getCreatureName();                           // _1A0
	virtual s32 getCreatureID();                               // _1A4

	// vtable 2 (MotionListener + FakePiki + self)
	virtual int getDownfloorMass();                     // _1B4
	virtual void update();                              // _1C4
	virtual float getMapCollisionRadius();              // _1F8
	virtual void wallCallback(Vector3f&);               // _1FC
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _204
	virtual void do_updateLookCreature();               // _20C
	virtual bool isWalking();                           // _214
	virtual void viewEntryShape(Matrixf&, Vector3f&);   // _218
	virtual SysShape::Model* viewGetShape();            // _21C
	virtual float viewGetBaseScale();                   // _220
	virtual void transit(int, StateArg*);               // _224

	// vtable 3 (PelletView) gets a few methods thunked by methods in vtable 2,
	// but no direct overrides.

	void addDamage(float, bool);
	void applyDopes(int, Vector3f&);
	void applyDopeSmoke(CellObject*);
	void callPikis();
	void checkBigFountain();
	void checkCave();
	void checkDemoNaviAndPiki(Sys::Sphere&);
	void checkHole();
	void checkOnyon();
	void clearKaisanDisable();
	void clearThrowDisable();
	void commandOn();
	void control();
	void demoCheck();
	void demowaitAllPikis();
	void disableController();
	void enterAllPikis();
	void findNextThrowPiki();
	bool formationable();
	void fountainonAllPikis(Vector3f&);
	int getDopeCount(int);
	void getLifeRatio();
	void getOlimarData();
	int getStateID();
	bool hasDope(int);
	void holeinAllPikis(Vector3f&);
	void incDopeCount(int);
	bool invincible();
	bool isCStickNetural();
	void makeCStick(bool);
	void makeVelocity();
	void ogGetNextThrowPiki();
	void procActionButton();
	void releasePikis();
	void reviseController(Vector3f&);
	void set_movie_draw(bool);
	void setDeadLaydown();
	void setInvincibleTimer(unsigned char);
	void setLifeMax();
	void setupNukuAdjustArg(ItemPikihead::Item*, NaviNukuAdjustStateArg&);
	void startDamage(float);
	void startThrowDisable();
	void throwable();
	void throwPiki(Game::Piki*, Vector3f&);
	void updateCursor();
	void updateKaisanDisable();
	void updateThrowDisable();
	void useDope(int);

	// FakePiki: _000 - _24C
	// MotionListener: _24C - _250
	// ptr to PelletView: _250
	u32 _250;
	CPlate* m_cPlateMgr;       // _254
	u8 _258;                   // _258
	u8 m_stick;                // _259
	s32 m_sprayCounts[2];      // _25C proven signed by Navi::hasDope
	u8 _264[4];                // _264
	bool m_isAlive;            // _268
	u8 _269;                   // _269
	u8 _26A;                   // _26A
	PSM::Navi* m_soundObj;     // _26C
	NaviFSM* m_fsm;            // _270
	NaviState* m_currentState; // _274
	Controller* m_padinput;    // _278
	Controller* m_padinput2;   // _27C
	PlayCamera* m_camera;      // _280
	PlayCamera* m_camera2;     // _284
	union {
		u16 m_shortView;

		struct {
			u8 a;
			u8 b;
		} m_byteView;
	} _288;                                  // _288
	NaviWhistle* m_cursor;                   // _28C
	SysShape::Model* m_cursorModel;          // _290
	SysShape::Model* m_markerModel;          // _294
	Sys::MatRepeatAnimator* m_cursorMatAnim; // _298
	// TODO: If this is the same as marker, standardize on one name or the
	// other.
	Sys::MatLoopAnimator* m_arrowMatAnim; // _29C
	// TODO: If this is the same sort of thing as m_health elsewhere, rename to
	// that.
	float m_currentLife;   // _2A0
	u8 m_invincibleTimer;  // _2A4
	Piki* m_nextThrowPiki; // _2A8
	u8 _2AC;               // _2AC
	float m_holdPikiTimer; // _2B0
	float _2B4;            // _2B4
	float _2B8;            // _2B8
	// TODO: PikDecomp calls this "throwable". I think it's disabled when true
	// though?
	bool m_isThrowDisabled;         // _2BC
	SysShape::Joint* m_beaconJoint; // _2C0
	Vector3f m_beaconPosition;      // _2C4
	efx::TNaviEffect* m_effectsObj; // _2D0
	u8 m_disbandTimer;              // _2D4
	Footmarks* m_footmarks;         // _2D8
	union {
		u16 m_shortView;

		struct {
			u8 a;
			u8 b;
		} m_byteView;
	} m_naviIndex;                 // _2DC
	u8 _2DE;                       // _2DE
	Vector3f m_cStickTargetVector; // _2E0
	Vector3f m_cStickPosition;     // _2EC
	float _2F8;                    // _2F8
	u8 _2FC;                       // _2FC
	u8 _2FD;                       // _2FD
	int m_cStickState;             // _300
	int m_cStickIncrement;         // _304
	float _308;                    // _308
	bool m_commandOn1;             // _30C
	bool m_commandOn2;             // _30D
	                               // PelletView: _310 - _320
};

struct NaviFSM : public StateMachine<Navi> {
	virtual void start(struct Navi*, int, StateArg*);
};

/**
 * @size{0xC64}
 * TODO
 */
struct NaviParms {
	NaviParms();
};

/**
 * @fabricatedName
 */
struct INaviMgr {
	virtual void killAll()       = 0; // _00
	virtual char* getMgrName()   = 0; // _04
	virtual bool frozenable()    = 0; // _08
	virtual void loadResources() = 0; // _0C
};

struct NaviMgr : MonoObjectMgr<Navi> {
	NaviMgr();

	// vtable 1
	virtual ~NaviMgr(); // _00

	// vtable 2
	virtual void doAnimation();          // _30 (thunk at _00)
	virtual void doEntry();              // _34 (thunk at _04)
	virtual void doSimulation(float p1); // _40 (thunk at _10)
	virtual Navi* birth();               // _48
	virtual void resetMgr();             // _4C (thunk at _20)

	// vtable 3 ("INaviMgr")
	virtual void killAll();       // _00
	virtual char* getMgrName();   // _04
	virtual bool frozenable();    // _08  (thunk at _28 of vt 2)
	virtual void loadResources(); // _0C (thunk at _1C of vt 2)

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

	// VT 3 pointer is at _30
	JKRHeap* _34;                   // _34
	JSUPtrLink _38;                 // _38
	unknown _48;                    // _48
	PSM::DirectorUpdator* _4C;      // _4C
	int m_naviCount;                // _50
	int naviIndexArray[2];          // _54
	u8 _5C;                         // _5C
	Sys::MatTevRegAnimation _60[2]; // _60
	Sys::MatTevRegAnimation _88[2]; // _88
	J3DModelData* _B0;              // _B0
	J3DModelData* _B4;              // _B4
	J3DModelData* _B8;              // _B8
	u8 _BC[8];                      // _BC
	J3DModelData* _C4;              // _C4
	NaviParms* _C8;                 // _C8
	CollPartFactory* _CC;           // _CC
};

extern NaviMgr* naviMgr;
} // namespace Game

#endif
