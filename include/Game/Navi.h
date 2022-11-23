#ifndef _GAME_NAVI_H
#define _GAME_NAVI_H

#include "Game/FakePiki.h"
#include "Game/PelletView.h"
#include "Game/StateMachine.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"
#include "efx/TNaviEffect.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAI/JAInter/Object.h"
#include "Sys/MatBaseAnimation.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "Color4.h"
#include "MonoObjectMgr.h"
#include "CollInfo.h"
#include "Vector3.h"

struct Controller;

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

struct NaviDamageArg {
	virtual const char* getName(); // _08 (weak)

	// _00 VTBL
};

struct NaviFSM : public StateMachine<Navi> {
	virtual void init(Navi*);                    // _08
	virtual void transit(Navi*, int, StateArg*); // _14

	// _00     = VTBL
	// _00-_1C = StateMachine
	int _1C; // _1C
};

struct NaviWhistle {
	NaviWhistle(Navi*);

	void init();
	void updatePosition();
	void start();
	void stop();
	void timeout();
	void setFaceDir(f32);
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
	virtual s32 getCreatureID();                                        // _1AC (weak)

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
	void checkBigFountain();
	void checkCave();
	void checkDemoNaviAndPiki(Sys::Sphere&);
	void checkHole();
	void checkOnyon();
	void clearKaisanDisable();
	void clearThrowDisable();
	bool commandOn();
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
	OlimarData* getOlimarData();
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
	void setInvincibleTimer(u8);
	void setLifeMax();
	void setupNukuAdjustArg(ItemPikihead::Item*, NaviNukuAdjustStateArg&);
	void startDamage(f32);
	void startThrowDisable();
	void throwable();
	void throwPiki(Piki*, Vector3f&);
	void updateCursor();
	void updateKaisanDisable();
	void updateThrowDisable();
	void useDope(int);

	inline void setCalcs()
	{
		SysShape::Model* model = m_model;
		model->loopTimer();
		model->m_j3dModel->m_modelData->m_jointTree.m_joints[0]->m_mtxCalc
		    = static_cast<J3DMtxCalcAnmBase*>(m_animator.m_animator2.getCalc());
	}

	// _000      = VTBL
	// _000-_250 = FakePiki
	// _250      = ptr to PelletView
	u32 _250;                                // probably shouldn't be here?
	CPlate* m_cPlateMgr;                     // _254
	u8 _258;                                 // _258
	u8 m_stick;                              // _259
	s32 m_sprayCounts[2];                    // _25C proven signed by Navi::hasDope
	u8 _264[4];                              // _264
	bool m_isAlive;                          // _268
	u8 _269;                                 // _269
	u8 _26A;                                 // _26A
	PSM::Navi* m_soundObj;                   // _26C
	NaviFSM* m_fsm;                          // _270
	NaviState* m_currentState;               // _274
	Controller* m_padinput;                  // _278
	Controller* m_padinput2;                 // _27C
	PlayCamera* m_camera;                    // _280
	PlayCamera* m_camera2;                   // _284
	BitFlag<u16> _288;                       // _288
	NaviWhistle* m_cursor;                   // _28C
	SysShape::Model* m_cursorModel;          // _290
	SysShape::Model* m_markerModel;          // _294
	Sys::MatRepeatAnimator* m_cursorMatAnim; // _298
	// TODO: If this is the same as marker, standardize on one name or the
	// other.
	Sys::MatLoopAnimator* m_arrowMatAnim; // _29C
	// TODO: If this is the same sort of thing as m_health elsewhere, rename to
	// that.
	f32 m_currentLife;     // _2A0
	u8 m_invincibleTimer;  // _2A4
	Piki* m_nextThrowPiki; // _2A8
	u8 _2AC;               // _2AC
	f32 m_holdPikiTimer;   // _2B0
	f32 _2B4;              // _2B4
	f32 _2B8;              // _2B8
	// TODO: PikDecomp calls this "throwable". I think it's disabled when true
	// though?
	bool m_isThrowDisabled;         // _2BC
	SysShape::Joint* m_beaconJoint; // _2C0
	Vector3f m_beaconPosition;      // _2C4
	efx::TNaviEffect* m_effectsObj; // _2D0
	u8 m_disbandTimer;              // _2D4
	Footmarks* m_footmarks;         // _2D8
	BitFlag<u16> m_naviIndex;       // _2DC
	u8 _2DE;                        // _2DE
	Vector3f m_cStickTargetVector;  // _2E0
	Vector3f m_cStickPosition;      // _2EC
	f32 _2F8;                       // _2F8
	u8 _2FC;                        // _2FC
	u8 _2FD;                        // _2FD
	int m_cStickState;              // _300
	int m_cStickIncrement;          // _304
	f32 _308;                       // _308
	bool m_commandOn1;              // _30C
	bool m_commandOn2;              // _30D
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
	virtual void killAll();       // _98
	virtual char* getMgrName();   // _9C (weak)
	virtual bool frozenable();    // _A0 (weak, thunk at _5C in vt 2)
	virtual void loadResources(); // _A4 (weak, thunk at _50 in vt 2)

	void clearDeadCount();
	SysShape::Model* createModel(int);
	void createPSMDirectorUpdator();
	Navi* getActiveNavi();
	int getAliveCount();
	Navi* getAliveOrima(int);
	Navi* getDeadOrima(int);
	void informOrimaDead(int);
	void load();
	void loadResources_f32();
	void setMovieDraw(bool);
	void setupSoundViewerAndBas();
	void setupNavi(Navi*);

	// Unused/inlined:
	unknown init();
	Navi* getSurviveNavi();
	unknown draw2d(J2DGrafContext&);

	// VT 3 pointer is at _30
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
	NaviParms* m_naviParms;         // _C8
	CollPartFactory* _CC;           // _CC
};

extern NaviMgr* naviMgr;
} // namespace Game

#endif
