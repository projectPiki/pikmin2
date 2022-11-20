#ifndef _GAME_ONYON_H
#define _GAME_ONYON_H

#include "types.h"
#include "Vector3.h"
#include "Sys/MatBaseAnimator.h"
#include "SysShape/Joint.h"
#include "SysShape/KeyEvent.h"
#include "Game/BaseItem.h"

namespace Game::efx {
// (almost) all of these need headers
struct Container;
struct ContainerAct;
struct TForever2;
struct TPodOpenA;
struct TPodOpenB;
struct TChasePosYRot2;
struct TPodKira;
struct TChaseMtx2;
struct TUfoPodOpenSuck;
struct TUfoGasIn;
struct TUfoGasOut;
struct TPodSpot;
struct TUfoSpot;
struct TUfoPodOpen;
struct TUfoSpotAct_ver01;
} // namespace efx

// this isnt part of any namespace
struct ModelEffect;

enum OnyonTypes {
	ONYON_TYPE_BLUE = 0,
	ONYON_TYPE_RED,
	ONYON_TYPE_YELLOW,
	ONYON_TYPE_POD  = 3,
	ONYON_TYPE_SHIP = 4,
};

enum OnyonObjects {
	ONYON_OBJECT_ONYON = 0,
	ONYON_OBJECT_POD,
	ONYON_OBJECT_SHIP,
};

namespace Game {
struct Piki;
struct WayPoint;

struct Onyon : public BaseItem {
	struct cSpotState; // struct? enum?

	/////////////// VTABLE
	virtual void onInit(CreatureInitArg* settings);                     // _30
	virtual void onKill(CreatureKillArg* settings);                     // _34
	virtual void doDirectDraw(Graphics& gfx);                           // _50
	virtual float getFaceDir();                                         // _64 (weak)
	virtual bool sound_culling();                                       // _104
	virtual void on_movie_end(bool shouldResetAnims);                   // _114
	virtual void movieUserCommand(u32 command, MoviePlayer* curPlayer); // _130
	virtual void getShadowParam(ShadowParam& settings);                 // _134
	virtual bool needShadow();                                          // _138
	virtual void getLODCylinder(Sys::Cylinder&);                        // _144
	virtual Vector3f getSuckPos();                                      // _194
	virtual Vector3f getGoalPos();                                      // _198
	virtual bool isSuckReady();                                         // _19C
	virtual BOOL isSuckArriveWait();                                    // _1A0
	virtual bool stimulate(Interaction& data);                          // _1A4
	virtual char* getCreatureName();                                    // _1A8 (weak)
	virtual void makeTrMatrix();                                        // _1C4
	virtual void doAI();                                                // _1C8
	virtual void changeMaterial();                                      // _1D0
	virtual void do_updateLOD();                                        // _1D4
	virtual void do_doAnimation();                                      // _20C
	virtual void onSetPosition();                                       // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event);           // _220 (weak)
	virtual void onKeyEvent_UFO(const SysShape::KeyEvent&);             // _224
	virtual void onKeyEvent_Onyon(const SysShape::KeyEvent&);           // _228
	/////////////// VTABLE END

	void setType(int);
	void setupTevRegAnim(int);
	void startPropera();
	void stopPropera();
	void setSpotState(cSpotState);
	void forceClose();
	void startWaitMotion();
	void getFlagSetPos();
	void vsChargePikmin();
	void doEmit(Creature*, bool);
	void getLegPart(int);
	void getFootPart(int);
	void setSpotEffect(bool);
	void setSpotEffectActive(bool);
	void efxSuikomi();
	void efxPafuPafu();
	void efxPafuKira();
	void getStoreCount();
	void enterPiki(Piki*);
	void exitPikis(int, int);
	void exitPiki();
	void insideAccessArea(Vector3f&);
	void getInEnd_UFO();
	void getInStart_UFO();
	void getOutStart_UFO();
	void getPMotionSpeed(int);
	void getPAnimator(int);
	void update_pmotions();

	// _00 		= VTBL
	// _00-_1D8	= BaseItem
	u32 m_pikisToWithdraw;                   // _1D8, red/blue/yellow pikmin queued to exit the onion
	f32 m_releasePikisTimer;             	 // _1DC
	u8 m_isReleasingPikis;                 	 // _1E0
	u32 m_white_toWithdraw;                  // _1E4, white pikmin queued to exit the ship
	u32 m_black_toWithdraw;                  // _1E8, purple pikmin queued to exit the ship
	efx::Container* m_efxContainer;          // _1EC
	efx::ContainerAct* m_efxContainerAct;    // _1F0
	ModelEffect* m_spotbeam_model;           // _1F4
	efx::TPodOpenA* m_podOpenA;              // _1F8
	efx::TPodOpenB* m_podOpenB;              // _1FC
	efx::TPodSpot* m_efxPodSpot;             // _200
	efx::TPodKira* m_podKira;                // _204
	efx::TUfoSpot* m_ufoSpot;                // _208
	efx::TUfoSpotAct_ver01* m_ufoSpotAct01;  // _20C
	efx::TUfoPodOpen* m_ufoPodOpen;          // _210
	efx::TUfoPodOpenSuck* m_ufoPodOpenSuck;  // _214
	efx::TUfoGasIn* m_ufoGasIn;              // _218
	efx::TUfoGasOut* m_ufoGasOut;            // _21C
	f32 m_timer;                             // _220
	u8 m_spotState;                          // _224
	f32 m_faceDir;                           // _228
	u16 m_toBirth;                           // _22C, used to track how many pikmin need to be spawned
	u16 m_onyonType;                         // _22E
	u16 m_pikminType;                        // _230
	// u8 _232[0x2];                         // _232, padding
	Sys::MatLoopAnimator* m_matAnim1;        // _234, for the pistons
	Sys::MatBaseAnimator* m_matAnim2;        // _238, for the glowing lights
	WayPoint* m_goalWayPoint;                // _23C
	u8 m_suckState;                          // _240
	//u8 _241[0x3];                          // _241, padding
	f32 m_suckTimer;                         // _244
	SysShape::Joint* m_pikiInJoint;          // _248, what pikmin target when entering the ship
	SysShape::Joint* m_pikiOutJoint;         // _24C, what pikmin appear from when exiting the ship
	u32 m_pMotionCount;                      // _250, number of pMotions to use, always 3 (for the ship) normally
	SysShape::Animator* m_pMotionList;       // _254, list of pAnim objects
	f32* m_pMotionSpeeds;                    // _258
	f32 m_propera;                           // _25C, controls speed of one of the ships pMotions
};
} // namespace Game

#endif
