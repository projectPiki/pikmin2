#ifndef _GAME_NAVI_H
#define _GAME_NAVI_H

#include "Game/FakePiki.h"
#include "Game/PelletView.h"
#include "types.h"
#include "Vector3.h"

struct Controller;

namespace efx {
struct TNaviEffect;
} // namespace efx

namespace PSM {
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

namespace Game {
struct CellObject;
struct CollEvent;
struct CPlate;
struct Creature;
struct Interaction;
struct MoviePlayer;
struct NaviFSM;
struct NaviNukuAdjustStateArg;
struct NaviState;
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
	virtual void getJAIObject();                               // _EC
	virtual PSM::Creature* getPSCreature();                    // _F0
	virtual void on_movie_begin(bool);                         // _108
	virtual void on_movie_end(bool);                           // _10C
	virtual void movieStartAnimation(ulong);                   // _110
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*); // _114
	virtual void movieSetTranslation(Vector3f&, float);        // _11C
	virtual void movieSetFaceDir(float);                       // _120
	virtual bool movieGotoPosition(Vector3f&);                 // _124
	virtual void movieUserCommand(ulong, MoviePlayer*);        // _128
	virtual void getShadowParam(ShadowParam&);                 // _12C
	virtual void getLODSphere(Sys::Sphere&);                   // _138
	virtual void onStickStart(Creature*);                      // _150
	virtual void onStickEnd(Creature*);                        // _154
	virtual bool ignoreAtari(Creature*);                       // _188
	virtual void stimulate(Interaction&);                      // _19C
	virtual char* getCreatureName();                           // _1A0
	virtual int getCreatureID();                               // _1A4

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
	void formationable();
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
	CPlate* m_cPlateMgr;                     // _254
	u8 _258;                                 // _258
	u8 m_stick;                              // _259
	uint m_sprayCounts[2];                   // _25C
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
	u16 _288;                             // _288
	NaviWhistle* m_cursor;                   // _28C
	SysShape::Model* m_cursorModel;          // _290
	SysShape::Model* m_markerModel;          // _294
	Sys::MatRepeatAnimator* m_cursorMatAnim; // _298
	// TODO: If this is the same as marker, standardize on one name or the
	// other.
	Sys::MatLoopAnimator* m_arrowMatAnim; // _29C
	// TODO: If this is the same sort of thing as m_health elsewhere, rename to
	// that.
	float m_currentLife;     // _2A0
	u8 m_invincibleTimer; // _2A4
	Piki* m_nextThrowPiki;   // _2A8
	u8 _2AC[4];              // _2AC
	float m_holdPikiTimer;   // _2B0
	float _2B4;              // _2B4
	float _2B8;              // _2B8
	// TODO: PikDecomp calls this "throwable". I think it's disabled when true
	// though?
	bool m_isThrowDisabled;         // _2BC
	SysShape::Joint* m_beaconJoint; // _2C0
	Vector3f m_beaconPosition;      // _2C4
	efx::TNaviEffect* m_effectsObj; // _2D0
	u8 m_disbandTimer;              // _2D4
	Footmarks* m_footmarks;         // _2D8
	short m_naviIndex;              // _2DC
	Vector3f m_cStickTargetVector;  // _2E0
	Vector3f m_cStickPosition;      // _2EC
	float _2F8;                     // _2F8
	u8 _2FC;                        // _2FC
	u8 _2FD;                        // _2FD
	int m_cStickState;              // _300
	int m_cStickIncrement;          // _304
	float _308;                     // _308
	bool m_commandOn1;              // _30C
	bool m_commandOn2;              // _30D
	                                // PelletView: _310 - _320
};
} // namespace Game

#endif
