#ifndef _EFX_OBJECT_H
#define _EFX_OBJECT_H

#include "efx/TForever.h"
#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChaseMtx.h"
#include "efx/TChasePos.h"
#include "efx/TChasePosYRot.h"
#include "ModelEffect.h"
#include "sys/MatBaseAnimator.h"
#include "sys/MatBaseAnimation.h"

namespace efx {

///////////////////////
//// GATE EFFECTS /////
///////////////////////

struct TGate1Attack : public TSimple2 {
	TGate1Attack()
	    : TSimple2(PID_Gate1Attack_1, PID_Gate1Attack_2)
	{
	}
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TGate1Down : public TSimpleMtx2 {
	TGate1Down(Matrixf* matrix)
	    : TSimpleMtx2(matrix, PID_Gate1Down_1, PID_Gate1Down_2)
	{
	}
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TGate2Attack : public TSimple2 {
	TGate2Attack()
	    : TSimple2(PID_Gate2Attack_1, PID_Gate2Attack_2)
	{
	}
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TGate2Down : public TSimpleMtx2 {
	TGate2Down(Matrixf* matrix)
	    : TSimpleMtx2(matrix, PID_Gate2Down_1, PID_Gate2Down_2)
	{
	}
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TEgateA : public TChaseMtx {
	inline TEgateA()
	    : TChaseMtx(PID_EgateA, nullptr)
	{
	}
	virtual ~TEgateA() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TEgateBC : public TForever2 {
	inline TEgateBC()
	    : TForever2(PID_EgateBC1, PID_EgateBC2)
	{
	}
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TForever2
};

/////////////////////////////////
//// HONEY (Nectar) EFFECTS /////
/////////////////////////////////

struct THoneydownB : public TSimple1 {
	inline THoneydownB()
	    : TSimple1(PID_HoneyDownB)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THoneydownR : public TSimple1 {
	inline THoneydownR()
	    : TSimple1(PID_HoneyDownR)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THoneydownY : public TSimple1 {
	inline THoneydownY()
	    : TSimple1(PID_HoneyDownY)
	{
	}
	// _00      = VTBL
	// _00-_0C  = TSimple1
};

/////////////////////////
//// GEYSER EFFECTS /////
/////////////////////////

struct TGeyserAct : public TForever3 {
	inline TGeyserAct()
	    : TForever3(PID_GeyserAct_1, PID_GeyserAct_2, PID_GeyserAct_3)
	{
	}

	// _00      = VTBL
	// _00-_34  = TForever3
};

struct TGeyserSet : public TForever2 {
	inline TGeyserSet()
	    : TForever2(PID_GeyserSet_1, PID_GeyserSet_2)
	{
	}

	// _00      = VTBL
	// _00-_24  = TForever2
};

//////////////////////////////////////////
//// DOWNFLOOR (SCALE BLOCK) EFFECTS /////
//////////////////////////////////////////

struct TDownf1On : public TSimpleMtx1 {
	inline TDownf1On(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1On)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf1Updown : public TSimpleMtx1 {
	inline TDownf1Updown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1Updown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf1WOn : public TSimpleMtx1 {
	inline TDownf1WOn(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1WOn)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf1WUpdown : public TSimpleMtx1 {
	inline TDownf1WUpdown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF1WUpdown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2On : public TSimpleMtx1 {
	inline TDownf2On(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2On)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2Updown : public TSimpleMtx1 {
	inline TDownf2Updown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2Updown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2WOn : public TSimpleMtx1 {
	inline TDownf2WOn(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2WOn)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf2WUpdown : public TSimpleMtx1 {
	inline TDownf2WUpdown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF2WUpdown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf3Updown : public TSimpleMtx1 {
	inline TDownf3Updown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF3Updown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf3WOn : public TSimpleMtx1 {
	inline TDownf3WOn(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF3WOn)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDownf3WUpdown : public TSimpleMtx1 {
	inline TDownf3WUpdown(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DownF3WUpdown)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TPbagDown : public TSimpleMtx3 {
	inline TPbagDown(Matrixf* mtx)
	    : TSimpleMtx3(mtx, PID_PbagDown_1, PID_PbagDown_2, PID_PbagDown_3)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimpleMtx3
};

struct TPbagOn : public TSimpleMtx2 {
	inline TPbagOn(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_PbagOn_1, PID_PbagOn_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

//////////////////////////////////////
//// WEED (NECTAR GRASS) EFFECTS /////
//////////////////////////////////////

struct TWeedPull : public TSimple3 {
	inline TWeedPull()
	    : TSimple3(PID_WeedPull, PID_PkAp_1, PID_PkAp_2)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TStoneAttack : public TSimple1 {
	inline TStoneAttack()
	    : TSimple1(PID_StoneAttack)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

/////////////////////////////////////
//// BARREL (CLOG ROCK) EFFECTS /////
/////////////////////////////////////

struct TBarrelDead : public TSimple3 {
	inline TBarrelDead()
	    : TSimple3(PID_BarrelDead_1, PID_BarrelDead_2, PID_BarrelDead_3)
	{
	}

	// _00      = VTBL
	// _00-_18  = TSimple3
};

////////////////////////////
//// CAVE HOLE EFFECTS /////
////////////////////////////

struct WarpZone : public TForever4 {
	inline WarpZone()
	    : TForever4(PID_WarpZone_1, PID_WarpZone_2, PID_WarpZone_3, PID_WarpZone_4)
	{
	}

	void setRateLOD(int, bool);

	// _00		= VTBL
	// _00-_44	= TForever4
};

////////////////////////////////
//// AREA WEATHER EFFECTS /////
///////////////////////////////
// Not really an object but idk where else to put these

struct TTutorialSnow : public TChasePos {
	inline TTutorialSnow()
	    : TChasePos(PID_TutorialSnow, nullptr)
	{
	}

	virtual ~TTutorialSnow() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TForestSakura : public TChasePos {
	inline TForestSakura()
	    : TChasePos(PID_ForestSakura, nullptr)
	{
	}

	virtual ~TForestSakura() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TLastMomiji : public TChasePos {
	inline TLastMomiji()
	    : TChasePos(PID_LastMomiji, nullptr)
	{
	}

	virtual ~TLastMomiji() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

////////////////////////
//// PELLET EFFECTS ////
////////////////////////

struct TPelkira_ver01 : public TChasePos {
	TPelkira_ver01(Vector3f* pos)
	    : TChasePos(PID_SyncDefault, pos)
	{
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	// 	_0C-_14
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TPelkira_ver01() { } // _48 (weak)
};

struct TOtakaraApL : public TSimple3 {
	inline TOtakaraApL()
	    : TSimple3(PID_OtakaraApL_1, PID_OtakaraApL_2, PID_OtakaraApL_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TOtakaraApS : public TSimple2 {
	inline TOtakaraApS()
	    : TSimple2(PID_OtakaraApS_1, PID_OtakaraApS_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TOtakaraAp : public TBase {
	TOtakaraAp()
	    : TBase()
	{
	}
	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00 VTBL
};

struct TOtakaraDive : public TSimple3 {
	inline TOtakaraDive()
	    : TSimple3(PID_OtakaraDive_1, PID_OtakaraDive_2, PID_OtakaraDive_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_18 = TSimple3
};

///////////////////////////////////////////
//// PLANT/FRUIT (SPIDERWORTS) EFFECTS ////
///////////////////////////////////////////

struct TFruitsDownR : public TSimple2 {
	inline TFruitsDownR()
	    : TSimple2(PID_FruitsDownR_1, PID_FruitsDownR_2)
	{
	}
};

struct TFruitsDownP : public TSimple2 {
	inline TFruitsDownP()
	    : TSimple2(PID_FruitsDownP_1, PID_FruitsDownP_2)
	{
	}
};

struct TTsuyuGrow0 : public TSimple1 {
	inline TTsuyuGrow0()
	    : TSimple1(PID_TsuyuGrow0)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TTsuyuGrow1 : public TSimpleMtx2 {
	inline TTsuyuGrow1()
	    : TSimpleMtx2(nullptr, PID_TsuyuGrow1_1, PID_TsuyuGrow1_2)
	{
	}

	inline TTsuyuGrow1(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_TsuyuGrow1_1, PID_TsuyuGrow1_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TTsuyuGrow2 : public TSimpleMtx2 {
	inline TTsuyuGrow2()
	    : TSimpleMtx2(nullptr, PID_TsuyuGrow2_1, PID_TsuyuGrow2_2)
	{
	}

	inline TTsuyuGrow2(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_TsuyuGrow2_1, PID_TsuyuGrow2_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TTsuyuGrowon : public TSimple1 {
	inline TTsuyuGrowon()
	    : TSimple1(PID_TsuyuGrowOn)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

//////////////////////////////////////////
//// KOUHAI (SPIDERWORT MOLD) EFFECTS ////
//////////////////////////////////////////

struct TKouhai1 : public TForever2 {
	inline TKouhai1()
	    : TForever2(PID_Kouhai1_1, PID_Kouhai1_2)
	{
	}

	// _00     = VTBL
	// _00-_24 = TForever2
};

struct TKouhai2 : public TForever2 {
	inline TKouhai2()
	    : TForever2(PID_Kouhai2_1, PID_Kouhai2_2)
	{
	}

	// _00     = VTBL
	// _00-_24 = TForever2
};

struct TKouhai3 : public TForever2 {
	inline TKouhai3()
	    : TForever2(PID_Kouhai3_1, PID_Kouhai3_2)
	{
	}

	// _00     = VTBL
	// _00-_24 = TForever2
};

struct TKouhaiDamage : public TSimple1 {
	inline TKouhaiDamage()
	    : TSimple1(PID_KouhaiDamage)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TKouhaiFuku : public TSimple2 {
	inline TKouhaiFuku()
	    : TSimple2(PID_KouhaiFuku_1, PID_KouhaiFuku_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

////////////////////////
//// ONION EFFECTS /////
////////////////////////

struct TOnyonEatAB : public TSimpleMtx2 {
	inline TOnyonEatAB(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_OnyonEatAB_1, PID_OnyonEatAB_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TOnyonEatC : public TSimpleMtx1 {
	inline TOnyonEatC(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_OnyonEatC)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimpleMtx1
};

struct TOnyonLay : public TSimple2 {
	inline TOnyonLay()
	    : TSimple2(PID_OnyonLay_1, PID_OnyonLay_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TOnyonPuffKira : public TSimple1 {
	inline TOnyonPuffKira()
	    : TSimple1(PID_OnyonPuffKira)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOnyonPuffPuff : public TSimpleMtx1 {
	inline TOnyonPuffPuff(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_OnyonPuffPuff)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimpleMtx1
};

struct Container : public TForever {
	inline Container()
	    : TForever(PID_Container_Blue)
	{
	}
	virtual bool create(Arg*); // _08
	virtual ~Container() { }   // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct ContainerAct : public TForever2 {
	inline ContainerAct()
	    : TForever2(PID_ContainerAct_Blue_1, PID_ContainerAct_Blue_2)
	{
	}
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TForever2
};

struct OnyonSpot;

struct OnyonSpotArg : public ModelEffectCreateArg {
	inline OnyonSpotArg(Vector3f& orig, u32 onyonType)
	    : mOnyonType(onyonType)
	{
		mOrig = orig;
	}

	virtual u64 getID() { return 'ONY_SPOT'; } // _08 (weak)

	// _00 		= VTBL
	Vector3f mOrig; // _04
	u32 mOnyonType; // _10
};

struct OnyonSpotData : public ModelEffectData {
	virtual ~OnyonSpotData() { }                              // _08 (weak)
	virtual void loadResources();                             // _10
	virtual u64 getID() { return 'ONY_SPOT'; }                // _14 (weak)
	virtual ModelEffect* onCreate(ModelEffectCreateArg* arg); // _18

	int mTexAnimCount;                  // _20
	Sys::MatTexAnimation* mTexAnims;    // _24
	int mTevAnimCount;                  // _28
	Sys::MatTevRegAnimation* mTevAnims; // _2C
};

struct OnyonSpot : public ModelEffect {
	virtual void changeMaterial();                     // _1C
	virtual void getLODSphere(Sys::Sphere& lodSphere); // _20
	virtual bool useCylinderLOD() { return true; }     // _24 (weak)
	virtual void getLODCylinder(Sys::Cylinder&);       // _28

	// unused/inlined
	void initAnimators(Sys::MatTexAnimation*, Sys::MatTevRegAnimation*);

	Sys::MatLoopAnimator mAnim1; // _3C
	Sys::MatLoopAnimator mAnim2; // _48
};

///////////////////////////
//// SHIP POD EFFECTS /////
///////////////////////////

struct TPodGepu : public TSimple2 {
	inline TPodGepu()
	    : TSimple2(PID_PodGepu_1, PID_PodGepu_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPodKira : public TChaseMtx {
	inline TPodKira(Matrixf* mtx)
	    : TChaseMtx(PID_PodKira, mtx)
	{
	}

	virtual ~TPodKira() { }; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TPodOpenA : public TForever {
	inline TPodOpenA()
	    : TForever(PID_PodOpenA)
	{
	}

	// virtual ~TPodOpenA() {}; // _48 (weak)

	// _00     = VTBL
	// _00-_10 = TForever
};

struct TPodOpenB : public TChaseMtx {
	inline TPodOpenB(Matrixf* mtx)
	    : TChaseMtx(PID_PodOpenB, mtx)
	{
	}

	virtual ~TPodOpenB() { }; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TPodSpot : public TChasePosYRot2 {
	inline TPodSpot(Vector3f* position, f32* faceDir)
	    : TChasePosYRot2(position, faceDir, PID_PodSpot_1, PID_PodSpot_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TPodSuck : public TSimple2 {
	inline TPodSuck()
	    : TSimple2(PID_PodSuck_1, PID_PodSuck_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TPodSuck
};

/////////////////////////////////
//// UFO (THE SHIP) EFFECTS /////
/////////////////////////////////

struct TUfoGasIn : public TChaseMtx {
	inline TUfoGasIn(Matrixf* mtx)
	    : TChaseMtx(PID_UfoGasIn, mtx)
	{
	}

	virtual ~TUfoGasIn() { }; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoGasOut : public TChaseMtx {
	inline TUfoGasOut(Matrixf* mtx)
	    : TChaseMtx(PID_UfoGasOut, mtx)
	{
	}

	virtual ~TUfoGasOut() { }; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoPodGepu : public TSimpleMtx2 {
	inline TUfoPodGepu(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_UfoPodGeku_1, PID_UfoPodGeku_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TUfoPodOpen : public TChaseMtx2 {
	inline TUfoPodOpen(Mtx mtx)
	    : TChaseMtx2(mtx, PID_UfoPodOpen_1, PID_UfoPodOpen_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUfoPodOpenSuck : public TChaseMtx {
	inline TUfoPodOpenSuck(Matrixf* mtx)
	    : TChaseMtx(PID_UfoPodOpenSuck, mtx)
	{
	}

	virtual ~TUfoPodOpenSuck() { }; // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUfoPodSuck : public TSimpleMtx1 {
	inline TUfoPodSuck(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_UfoPodSuck)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx1
};

struct TUfoSpot : public TChaseMtx2 {
	inline TUfoSpot(Mtx mat)
	    : TChaseMtx2(mat, PID_UfoSpot_1, PID_UfoSpot_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUfoSpotact_ver01 : public TChaseMtx2 {
	inline TUfoSpotact_ver01(Mtx mtx)
	    : TChaseMtx2(mtx, PID_UfoSpotAct_1, PID_UfoSpotAct_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};
} // namespace efx

#endif
