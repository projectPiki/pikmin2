#ifndef _EFX_ENEMYBOSS_H
#define _EFX_ENEMYBOSS_H

#include "efx/TSimple.h"
#include "efx/TForever.h"
#include "efx/TOneEmitter.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChaseMtx.h"
#include "efx/TChasePos.h"
#include "efx/TChasePosPos.h"
#include "efx/TChasePosYRot.h"

namespace efx {

/////////////////////////////////////////
//// QUEEN (EMPRESS BULBLAX) EFFECTS ////
/////////////////////////////////////////

struct TQueenCrashL : public TChasePosYRot {
	inline TQueenCrashL(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_QueenCrashL)
	{
	}

	virtual ~TQueenCrashL() { } // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenCrashR : public TChasePosYRot {
	inline TQueenCrashR(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_QueenCrashR)
	{
	}

	virtual ~TQueenCrashR() { } // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenCrashRock : public TChasePosYRot {
	inline TQueenCrashRock(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_QueenCrashRock)
	{
	}

	virtual ~TQueenCrashRock() { } // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenDamage : public TChasePosYRot {
	inline TQueenDamage(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_QueenDamage)
	{
	}

	virtual ~TQueenDamage() { } // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenDead : public TChaseMtx4 {
	inline TQueenDead()
	    : TChaseMtx4(nullptr, PID_QueenDead_1, PID_QueenDead_2, PID_QueenDead_3, PID_QueenDead_4)
	{
	}

	// _00     = VTBL
	// _00-_54 = TChaseMtx4
};

struct TQueenFlick : public TChasePosYRot2 {
	inline TQueenFlick(Vector3f* pos, f32* rot)
	    : TChasePosYRot2(pos, rot, PID_QueenFlick_1, PID_QueenFlick_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TQueenHanacho : public TChaseMtx {
	inline TQueenHanacho()
	    : TChaseMtx(PID_QueenHanacho, nullptr)
	{
	}

	virtual ~TQueenHanacho() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TQueenLay : public TChaseMtx {
	inline TQueenLay()
	    : TChaseMtx(PID_QueenLay, nullptr)
	{
	}

	virtual ~TQueenLay() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TQueenRoll : public TChasePosYRot2 {
	inline TQueenRoll(Vector3f* pos, f32* rot)
	    : TChasePosYRot2(pos, rot, PID_QueenRoll_1, PID_QueenRoll_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TQueenRollCL : public TChasePosYRot3 {
	inline TQueenRollCL(Vector3f* pos, f32* rot)
	    : TChasePosYRot3(pos, rot, PID_QueenRollCL_1, PID_QueenRollCL_2, PID_QueenRollCL_3)
	{
	}

	// _00     = VTBL
	// _00-_4C = TChasePosYRot3
};

struct TQueenRollCR : public TChasePosYRot3 {
	inline TQueenRollCR(Vector3f* pos, f32* rot)
	    : TChasePosYRot3(pos, rot, PID_QueenRollCR_1, PID_QueenRollCR_2, PID_QueenRollCR_3)
	{
	}

	// _00     = VTBL
	// _00-_4C = TChasePosYRot3
};

struct TQueenWakeup : public TChasePosYRot {
	inline TQueenWakeup(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_QueenWakeup)
	{
	}

	virtual ~TQueenWakeup() { } // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

///////////////////////////////////////////////
//// SNAKECROW (BURROWING SNAGRET) EFFECTS ////
///////////////////////////////////////////////

struct THebiAphd_base : public TSimple4 {
	inline THebiAphd_base(u16 effectID1, u16 effectID2, u16 effectID3, u16 effectID4, u32 duration)
	    : TSimple4(effectID1, effectID2, effectID3, effectID4)
	    , mMaxDuration(duration) // this is from the THebiAphd_dive ctor
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
	u32 mMaxDuration; // _1C
};

struct THebiAphd_appear1 : public THebiAphd_base {
	inline THebiAphd_appear1()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 40)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_first : public THebiAphd_base {
	inline THebiAphd_appear2_first()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 65)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_appear2_late : public THebiAphd_base {
	inline THebiAphd_appear2_late()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 35)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_dive : public THebiAphd_base {
	inline THebiAphd_dive()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 30)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_kkabuto_appear : public THebiAphd_base {
	inline THebiAphd_kkabuto_appear()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 30)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiAphd_kkabuto_dive : public THebiAphd_base {
	inline THebiAphd_kkabuto_dive()
	    : THebiAphd_base(PID_HebiAphd_Dive_1, PID_HebiAphd_Dive_2, PID_HebiAphd_Dive_3, PID_HebiAphd_Dive_4, 17)
	{
	}

	// _00      = VTBL
	// _00-_1C  = THebiAphd_base
};

struct THebiDead : public TChaseMtxT4 {
	inline THebiDead()
	    : TChaseMtxT4(nullptr, PID_HebiDead_1, PID_HebiDead_2, PID_HebiDead_3, PID_HebiDead_4)
	{
	}

	// _00      = VTBL
	// _00-_54  = TChaseMtxT4
};

struct THebiDeadHane_ver01 : public TSimple1 {
	inline THebiDeadHane_ver01()
	    : TSimple1(PID_HebiDeadHane)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct THebiRot : public TForever {
	inline THebiRot()
	    : TForever(PID_HebiROT)
	{
	}

	virtual ~THebiRot() { } // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct THebiWait : public TForever {
	inline THebiWait()
	    : TForever(PID_HebiWAIT)
	{
	}

	virtual ~THebiWait() { } // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

//////////////////////////////////////////////
//// KINGCHAPPY (EMPEROR BULBLAX) EFFECTS ////
//////////////////////////////////////////////

struct TKchApSand : public TSimple3 {
	inline TKchApSand()
	    : TSimple3(PID_KchApSand_1, PID_KchApSand_2, PID_KchApSand_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TKchApWat : public TSimple5 {
	inline TKchApWat()
	    : TSimple5(PID_KchApWat_1, PID_KchApWat_2, PID_KchApWat_3, PID_KchApWat_4, PID_KchApWat_5)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TSimple5
};

struct TKchCryAB : public TChasePos2 {
	inline TKchCryAB(Vector3f* position)
	    : TChasePos2(position, PID_KchCryAB_1, PID_KchCryAB_2)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TKchCryInd : public TChaseMtxT {
	inline TKchCryInd()
	    : TChaseMtxT(PID_KchCryInd)
	{
	}

	virtual ~TKchCryInd() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtxT
};

struct TKchDamage : public TSimpleMtx4 {
	inline TKchDamage(Matrixf* mtx)
	    : TSimpleMtx4(mtx, PID_KchDamage_1, PID_KchDamage_2, PID_KchDamage_3, PID_KchDamage_4)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TKchDeadHana : public TChaseMtx2 {
	inline TKchDeadHana()
	    : TChaseMtx2(nullptr, PID_KchDeadHana_1, PID_KchDeadHana_2)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
};

struct TKchDiveSand : public TChasePosYRot3 {
	inline TKchDiveSand(Vector3f* position, f32* rotation)
	    : TChasePosYRot3(position, rotation, PID_KchDiveSand_1, PID_KchDiveSand_2, PID_KchDiveSand_3)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TKchDiveWat : public TChasePosYRot3 {
	inline TKchDiveWat(Vector3f* position, f32* rotation)
	    : TChasePosYRot3(position, rotation, PID_KchDiveWat_1, PID_KchDiveWat_2, PID_KchDiveWat_3)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TKchDownsmoke : public TSimple1 {
	inline TKchDownsmoke()
	    : TSimple1(PID_KchDownSmoke)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TKchFlickSand : public TSimple2 {
	inline TKchFlickSand()
	    : TSimple2(PID_KchFlickSand_1, PID_KchFlickSand_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TKchSmokeHana : public TChaseMtx {
	inline TKchSmokeHana()
	    : TChaseMtx(PID_KchSmokeHana, nullptr)
	{
	}

	virtual ~TKchSmokeHana() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TKchYodareHitGr : public TOneEmitterSimple {
	inline TKchYodareHitGr()
	    : TOneEmitterSimple(PID_KchYodareHitGr)
	{
	}

	virtual ~TKchYodareHitGr() { } // _3C (weak)

	// _00      = VTBL
	// _00-_1C  = TOneEmitterSimple
};

struct TKchYodareHitWat : public TOneEmitterSimple {
	inline TKchYodareHitWat()
	    : TOneEmitterSimple(PID_KchYodareHitWat)
	{
	}

	virtual ~TKchYodareHitWat() { } // _3C (weak)

	// _00      = VTBL
	// _00-_1C  = TOneEmitterSimple
};

struct TParticleCallBack_KchYodare : public JPAParticleCallBack {
	inline TParticleCallBack_KchYodare() { }

	virtual ~TParticleCallBack_KchYodare() { }               // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _14

	// _00 VTBL
	TKchYodareHitGr mHitGround; // _04 (size 0x1c)
	TKchYodareHitWat mHitWater; // _20
	f32 mGroundYPos;            // _3C
};

struct TKchYodareBaseChaseMtx : public TChaseMtx {
	inline TKchYodareBaseChaseMtx(Mtx mtx, u16 effectID)
	    : TChaseMtx(effectID, (Matrixf*)mtx)
	{
		mParticleCallBack.mGroundYPos = 0.0f;
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		TChaseMtx::forceKill();
		mParticleCallBack.mHitGround.forceKill();
		mParticleCallBack.mHitWater.forceKill();
	}
	virtual void fade() // _10 (weak)
	{
		TChaseMtx::fade();
		mParticleCallBack.mHitGround.fade();
		mParticleCallBack.mHitWater.fade();
	}
	virtual void startDemoDrawOff() // _40 (weak)
	{
		mFlags |= 1;
		mParticleCallBack.mHitGround.startDemoDrawOff();
		mParticleCallBack.mHitWater.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _44 (weak)
	{
		mFlags &= ~1;
		mParticleCallBack.mHitGround.endDemoDrawOn();
		mParticleCallBack.mHitWater.endDemoDrawOn();
	}
	virtual ~TKchYodareBaseChaseMtx() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtx
	TParticleCallBack_KchYodare mParticleCallBack; // _14
};

struct TKchAttackYodare : public TKchYodareBaseChaseMtx {
	TKchAttackYodare(Mtx mtx)
	    : TKchYodareBaseChaseMtx(mtx, PID_KchYodareBase_1)
	{
		FORCE_DONT_INLINE;
	}

	virtual ~TKchAttackYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_44  = TKchYodareBaseChaseMtx
};

struct TKchDeadYodare : public TKchYodareBaseChaseMtx {
	TKchDeadYodare(Mtx mtx)
	    : TKchYodareBaseChaseMtx(mtx, PID_KchYodareBase_Dead)
	{
		FORCE_DONT_INLINE;
	}

	virtual ~TKchDeadYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_44  = TKchYodareBaseChaseMtx
};

struct TKchYodare : public TKchYodareBaseChaseMtx {
	TKchYodare(Mtx mtx)
	    : TKchYodareBaseChaseMtx(mtx, PID_KchYodareBase_2)
	{
		FORCE_DONT_INLINE;
	}

	// virtual ~TKchYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_44  = TKchYodareBaseChaseMtx
};

////////////////////////////////////////////
//// DAMAGUMO (BEADY LONG LEGS) EFFECTS ////
////////////////////////////////////////////

struct TDamaDeadBomb : public TSimple1 {
	inline TDamaDeadBomb()
	    : TSimple1(PID_DamaDeadBomb)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TDamaDeadElecA : public TChasePosPos {
	inline TDamaDeadElecA()
	    : TChasePosPos(PID_DamaDeadElecA)
	{
	}

	virtual ~TDamaDeadElecA() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadElecB : public TChasePos {
	inline TDamaDeadElecB()
	    : TChasePos(PID_DamaDeadElecB)
	{
	}

	virtual ~TDamaDeadElecB() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaDeadHahenA : public TChasePosPos {
	inline TDamaDeadHahenA()
	    : TChasePosPos(PID_DamaDeadHahenA)
	{
	}

	virtual ~TDamaDeadHahenA() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadHahenB : public TChasePosPos {
	inline TDamaDeadHahenB()
	    : TChasePosPos(PID_DamaDeadHahenB)
	{
	}

	virtual ~TDamaDeadHahenB() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaDeadHahenC1 : public TChaseMtx {
	inline TDamaDeadHahenC1()
	    : TChaseMtx(PID_DamaDeadHahenC1, nullptr)
	{
	}

	virtual ~TDamaDeadHahenC1() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDamaDeadHahenC2 : public TChaseMtx {
	inline TDamaDeadHahenC2()
	    : TChaseMtx(PID_DamaDeadHahenC2, nullptr)
	{
	}

	virtual ~TDamaDeadHahenC2() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDamaFoot : public TChasePos2 {
	inline TDamaFoot()
	    : TChasePos2(nullptr, PID_DamaFoot_1, PID_DamaFoot_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TDamaFootw : public TChasePos {
	inline TDamaFootw()
	    : TChasePos(nullptr, PID_DamaFootW)
	{
	}

	virtual ~TDamaFootw() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaHahen : public TChasePosPos {
	inline TDamaHahen()
	    : TChasePosPos(PID_DamaHahen)
	{
	}

	virtual ~TDamaHahen() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosPos
};

struct TDamaSmoke : public TChasePos {
	inline TDamaSmoke()
	    : TChasePos(nullptr, PID_DamaSmoke)
	{
	}

	virtual ~TDamaSmoke() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDamaWalk : public TSimple2 {
	inline TDamaWalk()
	    : TSimple2(PID_DamaWalk_1, PID_DamaWalk_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDamaWalkw : public TSimple3 {
	inline TDamaWalkw()
	    : TSimple3(PID_DamaWalkW_1, PID_DamaWalkW_2, PID_DamaWalkW_3)
	{
	}

	// _00      = VTBL
	// _00-_18  = TSimple3
};

///////////////////////////////////////////////
//// SNAKEWHOLE (PILEATED SNAGRET) EFFECTS ////
///////////////////////////////////////////////

struct TCphebiDead : public TChaseMtx4 {
	inline TCphebiDead()
	    : TChaseMtx4(nullptr, PID_CphebiDead_1, PID_CphebiDead_2, PID_CphebiDead_3, PID_CphebiDead_4)
	{
	}

	// _00      = VTBL
	// _00-_54  = TChaseMtx4
};

struct TCphebiDeadHane : public TSimple1 {
	inline TCphebiDeadHane()
	    : TSimple1(PID_CphebiDeadHane)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

//////////////////////////////////////
//// HOUDAI (MAN AT LEGS) EFFECTS ////
//////////////////////////////////////

struct THdamaDeadbomb : public TChaseMtx4 {
	inline THdamaDeadbomb()
	    : TChaseMtx4(nullptr, PID_HDamaDeadBomb_1, PID_HDamaDeadBomb_2, PID_HDamaDeadBomb_3, PID_HDamaDeadBomb_4)
	{
	}

	// _00		= VTBL
	// _00-_54	= TChaseMtx4
};

struct THdamaDeadHahen1 : public TSimple1 {
	inline THdamaDeadHahen1()
	    : TSimple1(PID_HDamaDeadHahen1)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaDeadHahen2 : public TSimple2 {
	inline THdamaDeadHahen2()
	    : TSimple2(PID_HDamaDeadHahen2_1, PID_HDamaDeadHahen2_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_10	= TSimple2
};

struct THdamaDeadSteam : public TChaseMtx2 {
	inline THdamaDeadSteam()
	    : TChaseMtx2(nullptr, PID_HDamaDeadSteam_1, PID_HDamaDeadSteam_2)
	{
	}

	// _00		= VTBL
	// _00-_2C	= TChaseMtx2
};

struct THdamaDeadSteamT : public TSimple1 {
	inline THdamaDeadSteamT()
	    : TSimple1(PID_HDamaDeadSteamT)
	{
	}

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaHahen : public TChasePosPos {
	inline THdamaHahen()
	    : TChasePosPos(PID_HDamaHahen)
	{
	}

	virtual ~THdamaHahen() { } // _48 (weak)

	// _00		= VTBL
	// _00-_18	= TChasePosPos
};

struct THdamaHit1 : public TSimple5 {
	inline THdamaHit1() // needs fixing
	    : TSimple5(PID_HDamaHit1_1, PID_HDamaHit1_2, PID_HDamaHit1_3, PID_HDamaHit1_4, PID_HDamaShootA)
	{
	}

	// _00		= VTBL
	// _00-_24	= TSimple5
};

struct THdamaHit2 : public TSimple4 {
	inline THdamaHit2() // needs fixing
	    : TSimple4(PID_HDamaHit2_1, PID_HDamaHit2_2, PID_HDamaHit2_3, PID_HDamaShootA)
	{
	}

	// _00		= VTBL
	// _00-_1C	= TSimple4
};

struct THdamaHit2W : public TSimple3 {
	inline THdamaHit2W()
	    : TSimple3(PID_HDamaHit2W_1, PID_HDamaHit2W_2, PID_HDamaHit2W_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_18	= TSimple3
};

struct THdamaHit3 : public TSimple4 {
	inline THdamaHit3() // needs fixing
	    : TSimple4(PID_HDamaHit3_1, PID_HDamaHit3_2, PID_HDamaHit3_3, PID_HDamaHit3_4)
	{
	}

	// _00		= VTBL
	// _00-_1C	= TSimple4
};

struct THdamaOnHahen1 : public TChaseMtx {
	inline THdamaOnHahen1()
	    : TChaseMtx(PID_HDamaOnHahen1, nullptr)
	{
	}

	virtual ~THdamaOnHahen1() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChaseMtx
};

struct THdamaOnHahen2 : public TChasePosPos {
	inline THdamaOnHahen2()
	    : TChasePosPos(PID_HDamaOnHahen2)
	{
	}

	virtual ~THdamaOnHahen2() { } // _48 (weak)

	// _00		= VTBL
	// _00-_18  = TChasePosPos
};

struct THdamaOnSmoke : public TSimple2 {
	inline THdamaOnSmoke()
	    : TSimple2(PID_HDamaOnSmoke_1, PID_HDamaOnSmoke_2)
	{
	}

	// _00		= VTBL
	// _00-_10	= TSimple2
};

struct THdamaOnSteam1 : public TChaseMtxT {
	inline THdamaOnSteam1()
	    : TChaseMtxT(PID_HDamaOnSteam1)
	{
	}

	virtual ~THdamaOnSteam1() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChaseMtxT
};

struct THdamaOnSteam2 : public TSimple1 {
	inline THdamaOnSteam2()
	    : TSimple1(PID_HDamaOnSteam2)
	{
	}

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaOpen : public TSimple1 {
	inline THdamaOpen()
	    : TSimple1(PID_HDamaOpen)
	{
	}

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaShell : public TChasePos {
	inline THdamaShell()
	    : TChasePos(PID_HDamaShell)
	{
	}

	virtual bool create(Arg*); // _08

	// virtual ~THdamaShell() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChasePos
};

struct THdamaShoot : public TSimpleMtx3 {
	inline THdamaShoot(Matrixf* mtx)
	    : TSimpleMtx3(mtx, PID_HDamaShoot_1, PID_HDamaShoot_2, PID_HDamaShoot_3)
	{
	}

	// _00		= VTBL
	// _00-_1C	= TSimpleMtx3
};

struct THdamaShootA : public TSimple1 {
	THdamaShootA()
	    : TSimple1(PID_HDamaShootA)
	{
	}
	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaSight : public TForever {
	inline THdamaSight()
	    : TForever(PID_HDamaSight)
	{
	}

	virtual ~THdamaSight() { } // _48 (weak)

	void setPosNrm(Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_10	= TForever
};

struct THdamaSteam : public TChaseMtx {
	inline THdamaSteam()
	    : TChaseMtx(PID_HDamaSteam, nullptr)
	{
	}

	virtual ~THdamaSteam() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtx
};

struct THdamaSteamBd : public TChaseMtxT {
	inline THdamaSteamBd()
	    : TChaseMtxT(PID_HDamaSteamBd)
	{
	}

	virtual ~THdamaSteamBd() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtxT
};

struct THdamaSteamSt : public TChaseMtx {
	inline THdamaSteamSt()
	    : TChaseMtx(PID_HDamaSteamSt, nullptr)
	{
	}

	virtual ~THdamaSteamSt() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtx
};

/////////////////////////////////////////////
//// UMIMUSHI (RANGING BLOYSTER) EFFECTS ////
/////////////////////////////////////////////

struct TUmiAttack : public TSimpleMtx1 {
	inline TUmiAttack(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_UmiAttack)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TUmiDeadawa : public TChaseMtx {
	inline TUmiDeadawa()
	    : TChaseMtx(PID_UmiDeadAwa, nullptr)
	{
	}

	virtual ~TUmiDeadawa() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUmiDeadmelt : public TSimple1 {
	inline TUmiDeadmelt()
	    : TSimple1(PID_UmiDeadMelt)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TUmiEat : public TChaseMtx {
	inline TUmiEat()
	    : TChaseMtx(PID_UmiEat, nullptr)
	{
	}

	virtual ~TUmiEat() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TUmiEyeBlue : public TChaseMtx2 {
	inline TUmiEyeBlue()
	    : TChaseMtx2(nullptr, PID_UmiEyeBlue_1, PID_UmiEyeBlue_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUmiEyeRed : public TChaseMtx2 {
	inline TUmiEyeRed()
	    : TChaseMtx2(nullptr, PID_UmiEyeRed_1, PID_UmiEyeRed_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUmiFlick : public TSimple3 {
	inline TUmiFlick()
	    : TSimple3(PID_UmiFlick_1, PID_UmiFlick_2, PID_UmiFlick_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TUmiHamon : public TChasePos2 {
	inline TUmiHamon(Vector3f* pos)
	    : TChasePos2(pos, PID_UmiHamon_1, PID_UmiHamon_2)
	{
	}

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TUmiWeakBlue : public TChaseMtx2 {
	inline TUmiWeakBlue()
	    : TChaseMtx2(nullptr, PID_UmiWeakBlue_1, PID_UmiWeakBlue_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

struct TUmiWeakRed : public TChaseMtx2 {
	inline TUmiWeakRed()
	    : TChaseMtx2(nullptr, PID_UmiWeakRed_1, PID_UmiWeakRed_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChaseMtx2
};

////////////////////////////////////////
//// BLACKMAN (WATERWRAITH) EFFECTS ////
////////////////////////////////////////

struct TKageBend1 : public TSimpleMtx2 {
	inline TKageBend1(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_KageBend_1, PID_KageBend_2)
	{
	}

	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TKageDead1 : public TChaseMtx {
	inline TKageDead1()
	    : TChaseMtx(PID_KageDead1, nullptr)
	{
	}

	virtual ~TKageDead1() { } // _48 (weak)

	void setGlobalPrmColor(Color4&);

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TKageDead2 : public TSimple1 {
	inline TKageDead2()
	    : TSimple1(PID_KageDead2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TKageFlick : public TChasePos {
	inline TKageFlick(Vector3f* chasePos)
	    : TChasePos(chasePos, PID_KageFlick)
	{
	}

	virtual ~TKageFlick() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TKageMove : public TChasePosYRot {

	inline TKageMove(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_KageMove)
	{
	}
	virtual ~TKageMove() { } // _48 (weak)

	void setGlobalPrmColor(Color4&);

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};

struct TKageRecov : public TSimple2 {
	TKageRecov()
	    : TSimple2(PID_KageRecov_1, PID_KageRecov_2)
	{
	}
	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TKageRun : public TChasePosYRot {
	inline TKageRun(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_KageRun)
	{
	}
	virtual ~TKageRun() { } // _48 (weak)

	void setGlobalPrmColor(Color4&);

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};

struct TKageTyredead : public TSimple3 {
	TKageTyredead()
	    : TSimple3(PID_KageTyreDead_1, PID_KageTyreDead_2, PID_KageTyreDead_3)
	{
	}
	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TKageTyresmoke : public TChasePosYRot {
	TKageTyresmoke(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_KageTyreSmoke)
	{
	}
	virtual ~TKageTyresmoke() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};

struct TKageTyreup : public TChasePosYRot {
	inline TKageTyreup(Vector3f* pos, f32* rot)
	    : TChasePosYRot(pos, rot, PID_KageTyreUp)
	{
	}
	virtual ~TKageTyreup() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TChasePosYRot
};

//////////////////////////////////////////////////
//// DANGOMUSHI (SEGMENTED CRAWBSTER) EFFECTS ////
//////////////////////////////////////////////////

struct TDangoAttack2 : public TChaseMtx {
	inline TDangoAttack2()
	    : TChaseMtx(PID_DangoAttack2, nullptr)
	{
	}

	virtual ~TDangoAttack2() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TDangoCrash : public TSimple2 {
	inline TDangoCrash()
	    : TSimple2(PID_DangoCrash_1, PID_DangoCrash_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDangoDamage : public TSimpleMtx1 {
	inline TDangoDamage(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DangoDamage)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDangoDead : public TSimpleMtx2 {
	inline TDangoDead(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_DangoDead_1, PID_DangoDead_2)
	{
	}

	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TDangoDeadSmoke : public TSimpleMtx1 {
	inline TDangoDeadSmoke(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_DangoDeadSmoke)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TDangoFly : public TSimple3 {
	inline TDangoFly()
	    : TSimple3(PID_DangoFly_1, PID_DangoFly_2, PID_DangoFly_3)
	{
	}

	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TDangoRun : public TChasePos2 {
	inline TDangoRun()
	    : TChasePos2(nullptr, PID_DangoRun_1, PID_DangoRun_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TDangoTurn : public TSimple2 {
	TDangoTurn()
	    : TSimple2(PID_DangoTurn_1, PID_DangoTurn_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TDangoWallBreak : public TChaseMtx {
	inline TDangoWallBreak()
	    : TChaseMtx(PID_DangoWallBreak, nullptr)
	{
	}

	virtual ~TDangoWallBreak() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

//////////////////////////////////////////
//// ODAMA (RAGING LONG LEGS) EFFECTS ////
//////////////////////////////////////////

struct TOdamaDeadHahenA : public TChasePosPos {
	inline TOdamaDeadHahenA()
	    : TChasePosPos(PID_ODamaDeadHahenA, nullptr, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenA() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_18	= TChasePosPos
};

struct TOdamaDeadHahenB : public TChasePosPos {
	inline TOdamaDeadHahenB()
	    : TChasePosPos(PID_ODamaDeadHahenB, nullptr, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenB() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_18	= TChasePosPos
};

struct TOdamaDeadHahenC1 : public TChaseMtx {
	inline TOdamaDeadHahenC1()
	    : TChaseMtx(PID_ODamaDeadHahenC1, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenC1() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaDeadHahenC2 : public TChaseMtx {
	inline TOdamaDeadHahenC2()
	    : TChaseMtx(PID_ODamaDeadHahenC2, nullptr)
	{
	}

	virtual ~TOdamaDeadHahenC2() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaFoot : public TChasePos2 {
	inline TOdamaFoot()
	    : TChasePos2(nullptr, PID_ODamaFoot, PID_DamaFoot_2)
	{
	}

	// _00		  = VTBL
	// _00-_2C	= TChasePos2
};

struct TOdamaFur1 : public TChaseMtx {
	inline TOdamaFur1()
	    : TChaseMtx(PID_ODamaFur1, nullptr)
	{
	}

	virtual ~TOdamaFur1() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaFur2 : public TChaseMtx {
	inline TOdamaFur2()
	    : TChaseMtx(PID_ODamaFur2, nullptr)
	{
	}

	virtual ~TOdamaFur2() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00		  = VTBL
	// _00-_14	= TChaseMtx
};

struct TOdamaHahen : public TChasePosPos {
	inline TOdamaHahen()
	    : TChasePosPos(PID_ODamaHahen, nullptr, nullptr)
	{
	}

	virtual ~TOdamaHahen() { } // _48 (weak)

	// _00		  = VTBL
	// _00-_18	= TChasePosPos
};

struct TOdamaWalk : public TSimple2 {
	inline TOdamaWalk()
	    : TSimple2(PID_ODamaWalk_1, PID_ODamaWalk_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

///////////////////////////////////////////
//// OOOTAKARA (TITAN DWEEVIL) EFFECTS ////
///////////////////////////////////////////

struct TOootaBombBody : public TSimple1 {
	inline TOootaBombBody()
	    : TSimple1(PID_OoOtaBombBody)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaBombLeg : public TSimple1 {
	inline TOootaBombLeg()
	    : TSimple1(PID_OoOtaBombLeg)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaChangeBody : public TChaseMtx {
	inline TOootaChangeBody()
	    : TChaseMtx(PID_OoOtaChangeBody, nullptr)
	{
	}

	virtual ~TOootaChangeBody() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TOootaChangeLeg : public TChasePosPosLocalYScale {
	inline TOootaChangeLeg()
	    : TChasePosPosLocalYScale(PID_OoOtaChangeLeg, 100.0f)
	{
	}

	virtual ~TOootaChangeLeg() { } // _48 (weak)

	// _00     = VTBL
	// _00-_1C = TChasePosPosLocalYScale
};

struct TOootaDeadAwa : public TChaseMtx {
	inline TOootaDeadAwa()
	    : TChaseMtx(PID_OoOtaDeadAwa, nullptr)
	{
	}

	virtual ~TOootaDeadAwa() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TOootaDeadBody : public TChaseMtx3 {
	inline TOootaDeadBody()
	    : TChaseMtx3(nullptr, PID_OoOtaDeadBody_1, PID_OoOtaDeadBody_2, PID_OoOtaDeadBody_3)
	{
	}

	// _00     = VTBL
	// _00-_40 = TChaseMtx3
};

struct TOootaDeadLeg : public TChasePosPosLocalYScale3 {
	inline TOootaDeadLeg()
	    : TChasePosPosLocalYScale3(nullptr, nullptr, 100.0f, PID_OoOtaDeadLeg_1, PID_OoOtaDeadLeg_2, PID_OoOtaDeadLeg_3)
	{
	}

	// _00     = VTBL
	// _00-_58 = TChasePosPosLocalYScale3
};

struct TOootaElec : public TChasePosPosLocalZScale3 {
	inline TOootaElec()
	    : TChasePosPosLocalZScale3(nullptr, nullptr, 300.0f, PID_OoOtaElec_1, PID_OoOtaElec_2, PID_OoOtaElec_3)
	{
	}

	// _00     = VTBL
	// _00-_58 = TChasePosPosLocalZScale3
};

struct TOootaElecAttack1 : public TChasePos {
	inline TOootaElecAttack1()
	    : TChasePos(PID_OoOtaElecAttack1, nullptr)
	{
	}

	virtual ~TOootaElecAttack1() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TOootaElecAttack2 : public TChasePos2 {
	inline TOootaElecAttack2()
	    : TChasePos2(nullptr, PID_OoOtaElecAttack2_1, PID_OoOtaElecAttack2_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TOootaElecLeg : public TChasePosPosLocalZScale {
	inline TOootaElecLeg()
	    : TChasePosPosLocalZScale(PID_OoOtaElecLeg, 100.0f)
	{
	}

	virtual ~TOootaElecLeg() { } // _48 (weak)

	// _00     = VTBL
	// _00-_1C = TChasePosPosLocalZScale
};

struct TOootaElecparts : public TChasePos {
	inline TOootaElecparts(Vector3f* pos)
	    : TChasePos(PID_OoOtaElecParts, pos)
	{
	}

	virtual ~TOootaElecparts() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TOootaFire : public TChaseMtx6 {
	inline TOootaFire()
	    : TChaseMtx6(nullptr, PID_OoOtaFire_1, PID_OoOtaFire_2, PID_OoOtaFire_3, PID_OoOtaFire_4, PID_OoOtaFire_6, PID_OoOtaFire_5)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_7C = TChaseMtx6
};

struct TOootaFoot : public TChasePos2 {
	inline TOootaFoot()
	    : TChasePos2(nullptr, PID_OoOtaFoot_1, PID_OoOtaFoot_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TOootaGas : public TChasePosYRot2 {
	inline TOootaGas(Vector3f* pos, f32* rot)
	    : TChasePosYRot2(pos, rot, PID_OoOtaGas_1, PID_OoOtaGas_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TOootaParticle : public TChasePos {
	inline TOootaParticle()
	    : TChasePos(PID_OoOtaParticle, nullptr)
	{
	}

	virtual ~TOootaParticle() { } // _48 (weak)

	void setGlobalDynamicsScale(f32);

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TOootaPartsoff : public TSimple1 {
	inline TOootaPartsoff()
	    : TSimple1(PID_OoOtaPartsOff)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaPdead : public TSimple1 {
	inline TOootaPdead()
	    : TSimple1(PID_OoOtaPDead)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaPhouden : public TChasePos2 {
	inline TOootaPhouden(Vector3f* pos)
	    : TChasePos2(pos, PID_OoOtaPHouden_1, PID_OoOtaPHouden_2)
	{
	}

	// _00     = VTBL
	// _00-_2C = TChasePos2
};

struct TOootaStartBody : public TChaseMtx {
	inline TOootaStartBody()
	    : TChaseMtx(PID_OoOtaStartBody, nullptr)
	{
	}

	virtual ~TOootaStartBody() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TOootaStartLeg : public TChasePosPosLocalYScale {
	inline TOootaStartLeg()
	    : TChasePosPosLocalYScale(PID_OoOtaStartLeg, 100.0f)
	{
	}

	virtual ~TOootaStartLeg() { } // _48 (weak)

	// _00     = VTBL
	// _00-_1C = TChasePosPosLocalYScale
};

struct TOootaStartOta : public TChaseMtxT {
	inline TOootaStartOta()
	    : TChaseMtxT(PID_OoOtaStartOta)
	{
	}

	virtual ~TOootaStartOta() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TOootaStartSmoke : public TSimple1 {
	inline TOootaStartSmoke()
	    : TSimple1(PID_OoOtaStartSmoke)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TOootaWalk : public TSimple2 {
	inline TOootaWalk()
	    : TSimple2(PID_OoOtaWalk_1, PID_OoOtaWalk_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TOootaWbHit : public TSimple4 {
	inline TOootaWbHit()
	    : TSimple4(PID_OoOtaWbHit_1, PID_OoOtaWbHit_2, PID_OoOtaWbHit_3, PID_OoOtaWbHit_4)
	{
	}

	// _00     = VTBL
	// _00-_1C = TSimple4
};

struct TOootaWbomb : public TChasePos4 {
	inline TOootaWbomb(Vector3f* pos)
	    : TChasePos4(pos, PID_OoOtaWbomb_1, PID_OoOtaWbomb_2, PID_OoOtaWbomb_3, PID_OoOtaWbomb_4)
	{
	}

	// _00     = VTBL
	// _00-_54 = TChasePos4
};

struct TOootaWbShot : public TSimpleMtx2 {
	inline TOootaWbShot(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_OoOtaWbShot_1, PID_OoOtaWbShot_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};
}; // namespace efx

#endif
