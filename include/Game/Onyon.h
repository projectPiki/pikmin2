#ifndef _GAME_ONYON_H
#define _GAME_ONYON_H

#include "types.h"
#include "Vector3.h"
#include "Sys/MatBaseAnimator.h"
#include "SysShape/Joint.h"
#include "SysShape/KeyEvent.h"
#include "Game/BaseItem.h"

namespace efx {
// (almost) all of these need headers
struct Container;
struct TForever2;
struct TPodOpenA;
struct TPodOpenB;
struct TChasePosYRot2;
struct TPodKira;
struct TChaseMtx2;
struct TUfoPodOpenSuck;
struct TUfoGasIn;
struct TUfoGasOut;
} // namespace efx

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
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual void onKill(CreatureKillArg*);                    // _34
	virtual void doDirectDraw(Graphics&);                     // _50
	virtual float getFaceDir();                               // _64 (weak)
	virtual bool sound_culling();                             // _104
	virtual void on_movie_end(bool);                          // _114
	virtual void movieUserCommand(u32, MoviePlayer*);         // _130
	virtual void getShadowParam(ShadowParam&);                // _134
	virtual bool needShadow();                                // _138
	virtual void getLODCylinder(Sys::Cylinder&);              // _144
	virtual Vector3f getSuckPos();                            // _194
	virtual Vector3f getGoalPos();                            // _198
	virtual bool isSuckReady();                               // _19C
	virtual BOOL isSuckArriveWait();                          // _1A0
	virtual bool stimulate(Interaction&);                     // _1A4
	virtual char* getCreatureName();                          // _1A8 (weak)
	virtual void makeTrMatrix();                              // _1C4
	virtual void doAI();                                      // _1C8
	virtual void changeMaterial();                            // _1D0
	virtual void do_updateLOD();                              // _1D4
	virtual void do_doAnimation();                            // _20C
	virtual void onSetPosition();                             // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent&);       // _220 (weak)
	virtual void onKeyEvent_UFO(const SysShape::KeyEvent&);   // _224
	virtual void onKeyEvent_Onyon(const SysShape::KeyEvent&); // _228
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
	u8 _1D8[0xC];                            // _1D8, unknown
	int _1E4;                                // _1E4
	int _1E8;                                // _1E8
	efx::Container* m_efxContainer;          // _1EC
	efx::TForever2* _1F0;                    // _1F0
	u32 _1F4;                                // _1F4, unknown
	efx::TPodOpenA* m_podOpenA;              // _1F8
	efx::TPodOpenB* m_podOpenB;              // _1FC
	efx::TChasePosYRot2* _200;               // _200
	efx::TPodKira* m_podKira;                // _204
	efx::TChaseMtx2* _208;                   // _208, possibly TUfoSpot?
	efx::TChaseMtx2* _20C;                   // _20C, possibly TUfoSpotact_ver01?
	efx::TChaseMtx2* _210;                   // _210, possibly TUfoPodOpen?
	efx::TUfoPodOpenSuck* m_podOpenSuck;     // _214
	efx::TUfoGasIn* m_ufoGasIn;              // _218
	efx::TUfoGasOut* m_ufoGasOut;            // _21C
	u8 _220[0x8];                            // _220
	float _228;                              // _228, faceDir?
	short _22C;                              // _22C
	u16 m_onyonType;                         // _22E
	u16 m_pikminType;                        // _230
	u8 _232[0x2];                            // _232, unknown/padding
	Sys::MatLoopAnimator* m_matLoopAnimator; // _234
	Sys::MatBaseAnimator* m_matAnimator;     // _238
	WayPoint* m_wayPoint;                    // _23C
	u8 m_carcassType;                        // _240
	u8 _241[0x3];                            // _241, unknown/padding
	float _244;                              // _244
	SysShape::Joint* _248;                   // _248
	SysShape::Joint* _24C;                   // _24C
	int _250;                                // _250
	SysShape::Animator* _254;                // _254
	float* _258;                             // _258
	float _25C;                              // _25C
};
} // namespace Game

#endif
