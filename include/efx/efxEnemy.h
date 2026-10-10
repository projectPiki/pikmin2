#ifndef _EFX_ENEMY_H
#define _EFX_ENEMY_H

#include "efx/TChasePos.h"
#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChaseMtx.h"
#include "efx/TForever.h"
#include "efx/TOneEmitter.h"
#include "efx/TChasePosYRot.h"

namespace efx {

//////////////////////////////////
//// FART (DOODLEBUG) EFFECTS ////
//////////////////////////////////

struct TBabaFly_ver01 : public TChasePos {
	TBabaFly_ver01(Vector3f* position)
	    : TChasePos(PID_BabaFly, position)
	{
	}

	virtual bool create(Arg*);    // _08
	virtual ~TBabaFly_ver01() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TBabaHe : public TSimple2 {
	TBabaHe()
	    : TSimple2(PID_BabaHe_1, PID_BabaHe_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

//////////////////////////////////////
//// BABY (BULBORB LARVA) EFFECTS ////
//////////////////////////////////////

struct TBabyBecha : public TSimple1 {
	inline TBabyBecha()
	    : TSimple1(PID_BabyBecha)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TBabyBorn : public TChasePos {
	TBabyBorn(Vector3f* pos)
	    : TChasePos(pos, PID_BabyBorn)
	{
	}

	virtual ~TBabyBorn() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

///////////////////////////
//// BOMB ROCK EFFECTS ////
///////////////////////////

struct TBombrockABCD : public TSimple4 {
	inline TBombrockABCD()
	    : TSimple4(PID_BombrockABCD_1, PID_BombrockABCD_2, PID_BombrockABCD_3, PID_BombrockABCD_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrockEFGH : public TSimple4 {
	inline TBombrockEFGH()
	    : TSimple4(PID_BombrockEFGH_1, PID_BombrockEFGH_2, PID_BombrockEFGH_3, PID_BombrockEFGH_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TBombrock : public TBase {
	inline TBombrock() { }

	virtual bool create(Arg* arg) // _08 (weak)
	{
		bool result = false;
		if ((&mEfxBombABCD)->create(arg) && (&mEfxBombEFGH)->create(arg)) {
			result = true;
		}
		return result;
	}
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00      = VTBL
	TBombrockABCD mEfxBombABCD; // _04
	TBombrockEFGH mEfxBombEFGH; // _20
};

struct TBombrockLight : public TChaseMtxT {
	inline TBombrockLight()
	    : TChaseMtxT(PID_BombrockLight)
	{
	}

	virtual ~TBombrockLight() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtxT
};

/////////////////////////////////////////////////
//// BOMBSARAI (CAREENING DIRIGIBUG) EFFECTS ////
/////////////////////////////////////////////////

struct TBsaraiDead : public TSimple2 {
	inline TBsaraiDead()
	    : TSimple2(PID_BSaraiDead_1, PID_BSaraiDead_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TBsaraiSupli : public TChaseMtx {
	inline TBsaraiSupli()
	    : TChaseMtx(PID_BSaraiSupli, nullptr)
	{
	}

	virtual ~TBsaraiSupli() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

////////////////////////////////////////
//// CHIBI (GATLING GROINK) EFFECTS ////
////////////////////////////////////////

struct TChibiCharge : public TChaseMtx {
	TChibiCharge()
	    : TChaseMtx(PID_ChibiCharge, nullptr)
	{
	}

	virtual ~TChibiCharge() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TChibiDeadLight : public TChaseMtx {
	TChibiDeadLight()
	    : TChaseMtx(PID_ChibiDeadLight, nullptr)
	{
	}

	virtual ~TChibiDeadLight() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TChibiDeadMouth : public TSimpleMtx1 {
	inline TChibiDeadMouth(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_ChibiDeadMouth)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TChibiDeadSe : public TSimpleMtx2 {
	inline TChibiDeadSe(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_ChibiDeadSe_1, PID_ChibiDeadSe_2)
	{
	}

	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TChibiHit : public TSimple4 {
	inline TChibiHit()
	    : TSimple4(PID_ChibiHit_1, PID_ChibiHit_2, PID_ChibiHit_3, PID_ChibiHit_4)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TChibiShell : public TChasePos {
	TChibiShell()
	    : TChasePos(PID_ChibiShell)
	{
	}

	virtual ~TChibiShell() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TChibiShoot : public TSimpleMtx3 {
	inline TChibiShoot(Matrixf* mat)
	    : TSimpleMtx3(mat, PID_ChibiShoot_1, PID_ChibiShoot_2, PID_ChibiShoot_3)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimpleMtx3
};

struct TChibiSmokeL : public TSimpleMtx1 {
	inline TChibiSmokeL(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_ChibiSmokeL)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TChibiSmokeS : public TSimpleMtx1 {
	inline TChibiSmokeS(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_ChibiSmokeS)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

///////////////////////////////////
//// CHOU (SPECTRALID) EFFECTS ////
///////////////////////////////////

struct TChouDown : public TChasePos {
	inline TChouDown(Vector3f* pos)
	    : TChasePos(pos, PID_SyncDefault)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TChouDown() { }   // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TChouHit : public TSimple1 {
	inline TChouHit()
	    : TSimple1(PID_ChouHit)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

///////////////////////////////////////////
//// DENKIHIBA (ELECTRIC WIRE) EFFECTS ////
///////////////////////////////////////////

struct TDenkiHiba : public TForever3 {
	inline TDenkiHiba()
	    : TForever3(PID_DenkiHiba_1, PID_DenkiHiba_2, PID_DenkiHiba_3)
	{
	}

	virtual bool create(Arg*); // _08

	// unused/inlined:
	void setRateLOD(int);

	// _00      = VTBL
	// _00-_34  = TForever3
};

struct TDenkiPole : public TForever2 {
	TDenkiPole()
	    : TForever2(PID_DenkiPole_1, PID_DenkiPole_2)
	{
	}

	~TDenkiPole() { }

	// _00      = VTBL
	// _00-_24  = TForever2
};

struct TDenkipoleSign : public TForever {
	TDenkipoleSign()
	    : TForever(PID_DenkiPoleSign)
	{
	}

	virtual ~TDenkipoleSign() { } // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TForever
};

struct TDenkiHibaMgr : public TBase {
	inline TDenkiHibaMgr() { }

	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C
	virtual void fade();       // _10

	bool createHiba(int);
	void setRateLOD(int);

	// unused/inlined:
	bool createHiba();

	// _00  = VTBL
	TDenkiHiba mHiba;                 // _04
	TDenkiPole mPoles[2];             // _38
	TDenkipoleSign mPolesigns[2];     // _80
	Vector3f mOwnerPosition;          // _A0
	Vector3f mTargetCreaturePosition; // _AC
};

/////////////////////////////////
//// FROG (WOLLYWOG) EFFECTS ////
/////////////////////////////////

struct TFrogDive : public TSimple4 {
	inline TFrogDive()
	    : TSimple4(PID_FrogDive_1, PID_FrogDive_2, PID_FrogDive_3, PID_FrogDive_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TFrogLanddrop : public TSimple2 {
	inline TFrogLanddrop()
	    : TSimple2(PID_FrogLandDrop_1, PID_FrogLandDrop_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TFrogPota : public TChasePos {
	inline TFrogPota()
	    : TChasePos(PID_FrogPota)
	{
	}

	virtual ~TFrogPota() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

////////////////////////////////////////
//// ELECBUG (ANODE BEETLE) EFFECTS ////
////////////////////////////////////////

struct TDnkmsHoudenA : public TChasePos {
	inline TDnkmsHoudenA()
	    : TChasePos(PID_DnkmsHoudenA)
	{
	}

	virtual ~TDnkmsHoudenA() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDnkmsHoudenB : public TChasePos {
	inline TDnkmsHoudenB()
	    : TChasePos(PID_DnkmsHoudenB)
	{
	}

	virtual ~TDnkmsHoudenB() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDnkmsThunderA : public TSync {
	inline TDnkmsThunderA()
	    : TSync(PID_DnkmsThunderA)
	{
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TDnkmsThunderA() { }                            // _48 (weak)

	inline void setupEffect(Vector3f* pos, Vector3f* partnerPos)
	{
		mPosition        = pos;
		mPartnerPosition = partnerPos;
	}

	// _00      = VTBL
	// _00-_10  = TSync
	Vector3f* mPosition;        // _10
	Vector3f* mPartnerPosition; // _14
};

struct TDnkmsThunderB : public TSync {
	inline TDnkmsThunderB()
	    : TSync(PID_DnkmsThunderB)
	{
		// mEffectID = PID_DnkmsThunderB;
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TDnkmsThunderB() { }                            // _48 (weak)

	inline void setupEffect(Vector3f* pos, Vector3f* partnerPos)
	{
		mPosition        = pos;
		mPartnerPosition = partnerPos;
	}

	// _00      = VTBL
	// _00-_10  = TSync
	Vector3f* mPosition;        // _10
	Vector3f* mPartnerPosition; // _14
};

struct TDnkmsEffect {
	TDnkmsEffect()
	    : mHoudenA1()
	    , mHoudenA2()
	    , mHoudenB()
	    , mThunderA()
	    , mThunderB()
	{
	}

	inline void startCharge()
	{
		mHoudenB.mPosition = mPosition;
		mHoudenB.create(nullptr);
	}

	inline void startDischarge(Vector3f* partnerPos)
	{
		mPartnerPosition = partnerPos;

		mHoudenA1.mPosition = mPosition;
		mHoudenA1.create(nullptr);
		mHoudenA2.mPosition = mPartnerPosition;
		mHoudenA2.create(nullptr);

		mThunderA.setupEffect(mPosition, mPartnerPosition);
		mThunderB.setupEffect(mPosition, mPartnerPosition);

		mThunderA.create(nullptr);
		mThunderB.create(nullptr);
	}

	inline void fade()
	{
		mHoudenA1.fade();
		mHoudenA2.fade();
		mHoudenB.fade();
		mThunderA.fade();
		mThunderB.fade();
	}

	inline void effectDrawOn()
	{
		mHoudenA1.endDemoDrawOn();
		mHoudenA2.endDemoDrawOn();
		mHoudenB.endDemoDrawOn();
		mThunderA.endDemoDrawOn();
		mThunderB.endDemoDrawOn();
	}

	inline void effectDrawOff()
	{
		mHoudenA1.startDemoDrawOff();
		mHoudenA2.startDemoDrawOff();
		mHoudenB.startDemoDrawOff();
		mThunderA.startDemoDrawOff();
		mThunderB.startDemoDrawOff();
	}

	Vector3f* mPosition;        // _00
	Vector3f* mPartnerPosition; // _04
	TDnkmsHoudenA mHoudenA1;    // _08, discharge effect (self)
	TDnkmsHoudenA mHoudenA2;    // _1C, discharge effect (partner)
	TDnkmsHoudenB mHoudenB;     // _30, charge effect
	TDnkmsThunderA mThunderA;   // _44
	TDnkmsThunderB mThunderB;   // _5C
};

/////////////////////
//// EGG EFFECTS ////
/////////////////////

struct TEggdown : public TSimple1 {
	TEggdown()
	    : TSimple1(PID_EggDown)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

//////////////////////////////////////////
//// FUEFUKI (ANTENNA BEETLE) EFFECTS ////
//////////////////////////////////////////

struct TFuebugOnpa : public TChasePos {
	inline TFuebugOnpa()
	    : TChasePos(PID_FueBugOnpa)
	{
	}

	virtual ~TFuebugOnpa() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

///////////////////////////////////////
//// FUSEN (PUFFY BLOWHOG) EFFECTS ////
///////////////////////////////////////

struct TFusenAir : public TChaseMtx3 {
	TFusenAir()
	    : TChaseMtx3(nullptr, PID_FusenAir_Mar_1, PID_FusenAir_Mar_2, PID_FusenAir_Mar_3)
	{
	}

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

struct TFusenAirhit : public TChasePosYRot2 {
	inline TFusenAirhit(Vector3f* pos, f32* faceDir)
	    : TChasePosYRot2(pos, faceDir, PID_FusenAirHit_Mar_1, PID_FusenAirHit_Mar_2)
	{
	}

	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TFusenDead : public TChaseMtx2 {
	inline TFusenDead()
	    : TChaseMtx2(nullptr, PID_FusenDead_1, PID_FusenDead_2)
	{
	}
	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
};

struct TFusenhAir : public TChaseMtx3 {
	inline TFusenhAir()
	    : TChaseMtx3(nullptr, PID_FusenAir_Hana_1, PID_FusenAir_Hana_2, PID_FusenAir_Hana_3)
	{
	}

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

struct TFusenhAirhit : public TChasePosYRot2 {
	inline TFusenhAirhit(Vector3f* pos, f32* faceDir)
	    : TChasePosYRot2(pos, faceDir, PID_FusenAirHit_Hana_1, PID_FusenAirHit_Hana_2)
	{
	}

	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TFusenSui : public TChaseMtx {
	inline TFusenSui()
	    : TChaseMtx(PID_FusenSui, nullptr)
	{
	}
	virtual ~TFusenSui() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

///////////////////////////////////////////
//// GASHIBA (POISON GAS PIPE) EFFECTS ////
///////////////////////////////////////////

struct TGasuHiba : public TForever2 {
	inline TGasuHiba()
	    : TForever2(PID_GasuHiba_1, PID_GasuHiba_2)
	{
	}
	virtual bool create(Arg*); // _08

	void setRateLOD(int);

	// _00      = VTBL
	// _00-_24  = TForever2
};

////////////////////////////////////////
//// FIREHIBA (FIRE GEYSER) EFFECTS ////
////////////////////////////////////////

struct THibaFire : public TForever4 {
	inline THibaFire()
	    : TForever4(PID_HibaFire_1, PID_HibaFire_2, PID_HibaFire_3, PID_HibaFire_4)
	{
	}

	void setRateLOD(int);

	// _00      = VTBL
	// _00-_44  = TForever4
};

///////////////////////////////////////
//// CHAPPY/HANA (BULBORB) EFFECTS ////
///////////////////////////////////////

struct THanachoN : public TChaseMtx {
	inline THanachoN()
	    : TChaseMtx(PID_HanachoN, nullptr)
	{
	}

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct THanachoY : public TChaseMtx {
	inline THanachoY()
	    : TChaseMtx(PID_HanachoY, nullptr)
	{
	}

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct THanaMiss : public TSimpleMtx2 {
	THanaMiss(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_HanaMiss_1, PID_HanaMiss_2)
	{
	}
	// _00      = VTBL
	// _00-_14  = TSimpleMtx2
};

struct TKechappyOff : public TSimpleMtx1 {
	TKechappyOff(Matrixf* mat)
	    : TSimpleMtx1(mat, PID_KechappyOff)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TKechappyTest : public TChaseMtx3 {
	TKechappyTest()
	    : TChaseMtx3(0, PID_KechappyTest_1, PID_KechappyTest_2, PID_KechappyTest_3)
	{
	}

	void setGlobalAlpha(u8 alpha);
	void setGlobalParticleScale(f32 scale);
	void setAwayFromCenterSpeed(f32 speed);
	void setSpread(f32 spread);
	void setGlobalDynamicsScale(Vector3f& scale);

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
};

//////////////////////////////////////////
//// IMOMUSHI (WHISKERPILLAR) EFFECTS ////
//////////////////////////////////////////

struct TImoEat : public TChaseMtx {
	inline TImoEat()
	    : TChaseMtx(PID_ImoEat_1, nullptr)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TImoEat() { }     // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TImoSmoke : public TChasePos {
	inline TImoSmoke(Vector3f* pos)
	    : TChasePos(pos, PID_ImoSmoke)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TImoSmoke() { }   // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

/////////////////////////////////////////
//// JIGUMO (HERMIT CRAWMAD) EFFECTS ////
/////////////////////////////////////////

struct TJgmAttack : public TChasePos2 {
	inline TJgmAttack(Vector3f* pos)
	    : TChasePos2(pos, PID_JgmAttack_1, PID_JgmAttack_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TJgmAttackW : public TChasePosYRot3 {
	inline TJgmAttackW(Vector3f* pos, f32* dir)
	    : TChasePosYRot3(pos, dir, PID_JgmAttackW_1, PID_JgmAttackW_2, PID_JgmAttackW_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TJgmBack : public TChasePos {
	inline TJgmBack(Vector3f* pos)
	    : TChasePos(pos, PID_JgmBACK)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TJgmBack() { }    // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TJgmBackW : public TChasePosYRot2 {
	inline TJgmBackW(Vector3f* pos, f32* dir)
	    : TChasePosYRot2(pos, dir, PID_JgmBACKW_1, PID_JgmBACKW_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_34  = TChasePosYRot2
};

struct TJgmBubble : public TSimple1 {
	inline TJgmBubble()
	    : TSimple1(PID_JgmBUBBLE)
	{
	}

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

///////////////////////////////////////
//// KABUTO (CANNON LARVA) EFFECTS ////
///////////////////////////////////////

struct TKabutoAttack : public TSimpleMtx1 {
	inline TKabutoAttack(Matrixf* mtx)
	    : TSimpleMtx1(mtx, PID_KabutoAttack)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimpleMtx1
};

struct TKkabutoRot : public TChasePos {
	inline TKkabutoRot(Vector3f* position = nullptr)
	    : TChasePos(PID_KKabutoRot, position)
	{
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TKkabutoRot() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChasePos
};

struct TKkabutoWait : public TChasePos {
	inline TKkabutoWait(Vector3f* position = nullptr)
	    : TChasePos(PID_KKabutoWait, position)
	{
	}

	// vtable 1 (TBase)
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TKkabutoWait() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChasePos
};

///////////////////////////////////////
//// KOGANE (FLINT BEETLE) EFFECTS ////
///////////////////////////////////////

struct TKoganeDive : public TSimple2 {
	inline TKoganeDive()
	    : TSimple2(PID_KoganeDive_1, PID_KoganeDive_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		 = VTBL
	// _00-_10 = TSimple2
};

struct TKoganeHit : public TSimple2 {
	inline TKoganeHit()
	    : TSimple2(PID_KoganeHit_1, PID_KoganeHit_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		 = VTBL
	// _00-_10 = TSimple2
};

struct TOoganeKira : public TChaseMtx {
	inline TOoganeKira()
	    : TChaseMtx(PID_OoganeKira, nullptr)
	{
	}

	virtual ~TOoganeKira() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

////////////////////////////////////////////
//// KURAGE (LESSER JELLYFLOAT) EFFECTS ////
////////////////////////////////////////////
// Kurage is actually for OniKurage, NewKurage is for normal Kurage

struct TKurageBomb : public TSimple2 {
	inline TKurageBomb()
	    : TSimple2(PID_KurageBomb_1, PID_KurageBomb_2)
	{
	}

	// _00		 = VTBL
	// _00-_10 = TSimple2
};

struct TKurageDeadrun : public TChaseMtxT {
	inline TKurageDeadrun()
	    : TChaseMtxT(PID_KurageDeadRun)
	{
	}

	virtual ~TKurageDeadrun() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtxT
};

struct TKurageEye : public TChaseMtx {
	inline TKurageEye()
	    : TChaseMtx(PID_KurageEye, nullptr)
	{
	}

	virtual ~TKurageEye() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtx
};

struct TKurageFlick : public TSimple1 {
	inline TKurageFlick()
	    : TSimple1(PID_KurageFlick)
	{
	}

	// _00		 = VTBL
	// _00-_0C = TSimple1
};

struct TKurageGepu : public TChasePos {
	inline TKurageGepu(Vector3f* pos)
	    : TChasePos(PID_KurageGepu, pos)
	{
	}

	virtual ~TKurageGepu() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChasePos
};

struct TKurageHire : public TChaseMtx3 {
	inline TKurageHire()
	    : TChaseMtx3(0, PID_KurageHire_1, PID_KurageHire_2, PID_KurageHire_3)
	{
	}

	void setLifeTime(s16);

	// _00		 = VTBL
	// _00-_40 = TChaseMtx3
};

struct TKurageKira : public TChasePos {
	inline TKurageKira(Vector3f* pos)
	    : TChasePos(PID_KurageKira, pos)
	{
	}

	virtual ~TKurageKira() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChasePos
};

struct TKurageSui : public TForever2 {
	inline TKurageSui()
	    : TForever2(PID_KurageSui_1, PID_KurageSui_2)
	{
	}

	void setGlobalTranslation(Vector3f&);

	// _00		 = VTBL
	// _00-_24 = TForever2
};

struct TNewkurageBomb : public TSimple2 {
	inline TNewkurageBomb()
	    : TSimple2(PID_NewKurageBomb_1, PID_NewKurageBomb_2)
	{
	}

	// _00		 = VTBL
	// _00-_10 = TSimple2
};

struct TNewkurageDeadrun : public TChaseMtxT {
	inline TNewkurageDeadrun()
	    : TChaseMtxT(PID_NewKurageDeadRun)
	{
	}

	virtual ~TNewkurageDeadrun() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtxT
};

struct TNewkurageEye : public TChaseMtx {
	inline TNewkurageEye()
	    : TChaseMtx(PID_NewKurageEye, nullptr)
	{
	}

	virtual ~TNewkurageEye() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChaseMtx
};

struct TNewkurageFlick : public TSimple1 {
	inline TNewkurageFlick()
	    : TSimple1(PID_NewKurageFlick)
	{
	}

	// _00		 = VTBL
	// _00-_0C = TSimple1
};

struct TNewkurageHire : public TChaseMtx3 {
	inline TNewkurageHire()
	    : TChaseMtx3(0, PID_NewKurageHire_1, PID_NewKurageHire_2, PID_NewKurageHire_3)
	{
	}

	void setLifeTime(s16);

	// _00		 = VTBL
	// _00-_40 = TChaseMtx3
};

struct TNewkurageKira : public TChasePos {
	inline TNewkurageKira(Vector3f* posPtr)
	    : TChasePos(PID_NewKurageKira, posPtr)
	{
	}

	virtual ~TNewkurageKira() { } // _48 (weak)

	// _00		 = VTBL
	// _00-_14 = TChasePos
};

struct TNewkurageSui : public TForever2 {
	inline TNewkurageSui()
	    : TForever2(PID_NewKurageSui_1, PID_NewKurageSui_2)
	{
	}

	void setGlobalTranslation(Vector3f&);

	// _00		 = VTBL
	// _00-_24 = TForever2
};

/////////////////////////////////
//// MIULIN (MAMUTA) EFFECTS ////
/////////////////////////////////

struct TMiuAttack : public TSimple2 {
	inline TMiuAttack()
	    : TSimple2(PID_MiuAttack_1, PID_MiuAttack_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

///////////////////////////////////
//// OTAKARA (DWEEVIL) EFFECTS ////
///////////////////////////////////

struct TOtaChargeelec : public TChaseMtxT2 {
	inline TOtaChargeelec()
	    : TChaseMtxT2(0, PID_OtaChargeelec_1, PID_OtaChargeelec_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargefire : public TChaseMtxT2 {
	inline TOtaChargefire()
	    : TChaseMtxT2(0, PID_OtaChargefire_1, PID_OtaChargefire_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargegas : public TChaseMtxT2 {
	inline TOtaChargegas()
	    : TChaseMtxT2(0, PID_OtaChargegas_1, PID_OtaChargegas_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaChargewat : public TChaseMtxT2 {
	inline TOtaChargewat()
	    : TChaseMtxT2(0, PID_OtaChargewat_1, PID_OtaChargewat_2)
	{
	}

	// _00      = VTBL
	// _00-_2C  = TChaseMtxT2
};

struct TOtaElec : public TSimple3 {
	inline TOtaElec()
	    : TSimple3(PID_OtaElec_1, PID_OtaElec_2, PID_OtaElec_3)
	{
	}
	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TOtaFire : public TSimple5 {
	inline TOtaFire()
	    : TSimple5(PID_OtaFire_1, PID_OtaFire_2, PID_OtaFire_3, PID_OtaFire_4, PID_OtaFire_5)
	{
	}

	// _00      = VTBL
	// _00-_24  = TSimple5
};

struct TOtaGas : public TSimple2 {
	inline TOtaGas()
	    : TSimple2(PID_OtaGas_1, PID_OtaGas_2)
	{
	}

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TOtaWat : public TSimple4 {
	inline TOtaWat()
	    : TSimple4(PID_OtaWat_1, PID_OtaWat_2, PID_OtaWat_3, PID_OtaWat_4)
	{
	}

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TOtaPartsoff : public TSimple1 {
	inline TOtaPartsoff()
	    : TSimple1(PID_OtaPartsOff)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

//////////////////////////////////////
//// PANMODOKI (BREADBUG) EFFECTS ////
//////////////////////////////////////

struct TPanApp : public TSimple1 {
	inline TPanApp()
	    : TSimple1(PID_PanApp)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPanHide : public TForever {
	inline TPanHide()
	    : TForever(PID_PanHide)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TPanHide() { }    // _48 (weak)

	// _00     = VTBL
	// _00-_10 = TForever
};

struct TPanSmoke : public TChasePos {
	inline TPanSmoke(Vector3f* pos)
	    : TChasePos(pos, PID_PanSmoke)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~TPanSmoke() { }   // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

////////////////////////////////////
//// POM (CANDYPOP BUD) EFFECTS ////
////////////////////////////////////

struct TPonDead : public TSimple1 {
	inline TPonDead()
	    : TSimple1(PID_PonDead)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

/////////////////////////////////////
//// QURIONE (HONEYWISP) EFFECTS ////
/////////////////////////////////////

struct TQuriApp : public TChaseMtxT {
	inline TQuriApp()
	    : TChaseMtxT(PID_QuriApp)
	{
	}

	virtual ~TQuriApp() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TQuriDisap : public TChaseMtxT {
	inline TQuriDisap()
	    : TChaseMtxT(PID_QuriDisap)
	{
	}

	virtual ~TQuriDisap() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TQuriGlow : public TChaseMtxT {
	inline TQuriGlow()
	    : TChaseMtxT(PID_QuriGlow)
	{
	}

	virtual ~TQuriGlow() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TQuriHit : public TSimple2 {
	inline TQuriHit()
	    : TSimple2(PID_QuriHit_1, PID_QuriHit_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TQuriHit
};

////////////////////////////////////
//// UJINKO (SHEARGRUB) EFFECTS ////
////////////////////////////////////

struct TUjinkoAp_Imo : public TSimpleMtx2 {
	inline TUjinkoAp_Imo(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_UjinkoAp_1, PID_UjinkoAp_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TUjinkoAp : public TSimpleMtx2 {
	inline TUjinkoAp(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_UjinkoAp_1, PID_UjinkoAp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TUjinkoEat : public TSimple1 {
	inline TUjinkoEat()
	    : TSimple1(PID_UjinkoEat)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TUjinkoHd_Imo : public TSimpleMtx2 {
	inline TUjinkoHd_Imo(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_UjinkoHd_1, PID_UjinkoHd_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TUjinkoHd : public TSimpleMtx2 {
	inline TUjinkoHd(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_UjinkoHd_1, PID_UjinkoHd_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TUjinkoPkate : public TSimple1 {
	inline TUjinkoPkate()
	    : TSimple1(PID_UjinkoPkate)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

//////////////////////////////////////
//// FALLING/ROLLING ROCK EFFECTS ////
//////////////////////////////////////

struct TRockDead : public TSimple3 {
	inline TRockDead()
	    : TSimple3(PID_RockDead_1, PID_RockDead_2, PID_RockDead_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TRockGrRun : public TChasePos {
	inline TRockGrRun()
	    : TChasePos(PID_RockGrRun, nullptr)
	{
	}

	virtual ~TRockGrRun() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TRockRun : public TChasePos {
	inline TRockRun()
	    : TChasePos(PID_RockRun, nullptr)
	{
	}

	virtual ~TRockRun() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TRockWRunChasePos : public TChasePos3 {
	inline TRockWRunChasePos(Vector3f* pos)
	    : TChasePos3(pos, PID_RockWRunChasePos_1, PID_RockWRunChasePos_2, PID_RockWRunChasePos_3)
	{
	}

	// _00     = VTBL
	// _00-_40 = TChasePos3
};

struct TRockWRun : public TBase {
	inline TRockWRun()
	    : mChasePos(&mPosition)
	    , mIsActive(false)
	{
	}

	virtual bool create(Arg*) // _08 (weak)
	{
		mIsActive = true;
		return true;
	}
	virtual void forceKill() // _0C (weak)
	{
		mChasePos.forceKill();
		mIsActive = false;
	}
	virtual void fade() // _10 (weak)
	{
		mChasePos.fade();
		mIsActive = false;
	}

	// _00 VTBL
	TRockWRunChasePos mChasePos; // _04
	f32 mSeaHeight;              // _44, might be part of TRockWRunChasePos
	Vector3f mPosition;          // _48
	bool mIsActive;              // _54
};

////////////////////////////////////////
//// PELPLANT (PELLET POSY) EFFECTS ////
////////////////////////////////////////

struct TPplGrow1 : public TSimple2 {
	inline TPplGrow1()
	    : TSimple2(PID_PplGrow1_1, PID_PplGrow1_2)
	{
	}

	// _00  = VTABLE
};

struct TPplGrow2 : public TSimple3 {
	inline TPplGrow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_PplGrow2_3)
	{
	}

	// _00  = VTABLE
};

struct TPpl5Grow2 : public TSimple3 {
	inline TPpl5Grow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_Ppl5Grow2)
	{
	}

	// _00  = VTABLE
};

struct TPpl10Grow2 : public TSimple3 {
	inline TPpl10Grow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_Ppl10Grow2)
	{
	}

	// _00  = VTABLE
};

struct TPpl20Grow2 : public TSimple3 {
	inline TPpl20Grow2()
	    : TSimple3(PID_PplGrow2_1, PID_PplGrow2_2, PID_Ppl20Grow2)
	{
	}

	// _00  = VTABLE
};

//////////////////////////////////////
//// TAMAGOMUSHI (MITITE) EFFECTS ////
//////////////////////////////////////

struct TTamagoAp : public TSimpleMtx2 {
	inline TTamagoAp(Matrixf* mtx)
	    : TSimpleMtx2(mtx, PID_TamagoAp_1, PID_TamagoAp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

/////////////////////////////////////////////
//// TANK (FIERY/WATERY BLOWHOG) EFFECTS ////
/////////////////////////////////////////////

struct TTankFireHit;
struct TTankWatHit;
struct TTankWat;

struct TParticleCallBack_TankFire : public JPAParticleCallBack {
	TParticleCallBack_TankFire()
	    : mMaxDistance(1000.0f)
	    , mEfxHit(nullptr)
	{
	}

	virtual ~TParticleCallBack_TankFire() { }                // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _14

	// _00      = VTBL
	f32 mMaxDistance;      // _04
	TTankFireHit* mEfxHit; // _08
};

struct TTankFireHit : public TOneEmitterSimple {
	TTankFireHit()
	    : TOneEmitterSimple(PID_TankFireHit)
	{
	}

	virtual ~TTankFireHit() { } // _3C (weak)

	// _00      = VTBL
	// _00-_18  = TOneEmitterSimple
};

struct TTankFireABC : public TChaseMtx3 {
	inline TTankFireABC(Mtx mtx)
	    : TChaseMtx3(mtx, PID_TankFireABC_1, PID_TankFireABC_2, PID_TankFireABC_3)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		TChaseMtx3::forceKill();
		if (mParticleCallBack.mEfxHit != nullptr) {
			mParticleCallBack.mEfxHit->forceKill();
		}
	}
	virtual void fade() // _10 (weak)
	{
		TChaseMtx3::fade();
		if (mParticleCallBack.mEfxHit) {
			mParticleCallBack.mEfxHit->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		TChaseMtx3::startDemoDrawOff();
		mEfxFireHit.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		TChaseMtx3::endDemoDrawOn();
		mEfxFireHit.endDemoDrawOn();
	}

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
	TParticleCallBack_TankFire mParticleCallBack; // _40
	TTankFireHit mEfxFireHit;                     // _4C
};

struct TTankFireIND : public TChaseMtx {
	TTankFireIND(Mtx mtx)
	    : TChaseMtx(PID_TankFireIND, (Matrixf*)mtx)
	{
	}

	virtual bool create(Arg*);  // _08
	virtual ~TTankFireIND() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
	TParticleCallBack_TankFire mParticleCallBack;
};

struct TTankFire : public TBase {
	TTankFire(Mtx mtx)
	    : mEfxABC(mtx)
	    , mEfxIND(mtx)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()
	{
		mEfxABC.forceKill();
		mEfxIND.forceKill();
	} // _0C (weak)
	virtual void fade() // _10 (weak)
	{
		mEfxABC.fade();
		mEfxIND.fade();
	}

	// _00      = VTBL
	TTankFireABC mEfxABC; // _04
	TTankFireIND mEfxIND; // _6C
};

struct TTankFireYodare : public TChaseMtx {
	TTankFireYodare(Mtx mtx)
	    : TChaseMtx(PID_TankFireYodare, (Matrixf*)mtx)
	{
	}

	virtual ~TTankFireYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TTankEffect {
	TTankEffect(Mtx mtx)
	    : mEfxFire(mtx)
	    , mEfxFireYodare(mtx)
	{
	}

	TTankFire mEfxFire;             // _00
	TTankFireYodare mEfxFireYodare; // _8C
};

struct TTankWatHit : public TOneEmitterSimple {
	TTankWatHit()
	    : TOneEmitterSimple(PID_TankWatHit)
	{
	}

	virtual ~TTankWatHit() { } // _3C (weak)

	// _00      = VTBL
	// _00-_18  = TOneEmitterSimple
};

struct TTankWatYodare : public TChaseMtx {
	TTankWatYodare(Mtx mtx)
	    : TChaseMtx(PID_TankWatYodare, (Matrixf*)mtx)
	{
	}

	virtual ~TTankWatYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TTankWat : public TChaseMtx4 {
	inline TTankWat(Mtx mtx)
	    : TChaseMtx4(mtx, PID_TankWat_1, PID_TankWat_2, PID_TankWat_3, PID_TankWat_4)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()
	{
		TSyncGroup4::forceKill();
		if (mParticleCallBack.mEfxHit != nullptr) {
			mParticleCallBack.mEfxHit->forceKill();
		}
	} // _0C (weak)
	virtual void fade() // _10 (weak)
	{
		TChaseMtx4::fade();
		if (mParticleCallBack.mEfxHit) {
			mParticleCallBack.mEfxHit->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		TChaseMtx4::startDemoDrawOff();
		mEfxHit.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		TChaseMtx4::endDemoDrawOn();
		mEfxHit.endDemoDrawOn();
	}

	// _00      = VTBL
	// _00-_54  = TChaseMtx4
	TParticleCallBack_TankFire mParticleCallBack; // _54
	TTankWatHit mEfxHit;                          // _60
};

struct TWtankEffect {
	inline TWtankEffect(Mtx mtx)
	    : mEfxWat(mtx)
	    , mEfxWatYodare(mtx)
	{
	}

	TTankWat mEfxWat;             // _00
	TTankWatYodare mEfxWatYodare; // _8C
};

////////////////////////////////////////////
//// FIRECHAPPY (FIERY BULBLAX) EFFECTS ////
////////////////////////////////////////////

struct TYakiBody : public TChaseMtx4 {
	inline TYakiBody()
	    : TChaseMtx4(nullptr, PID_YakiBody_1, PID_YakiBody_2, PID_YakiBody_3, PID_YakiBody_4)
	{
	}

	void setRateLOD(int);

	// _00     = VTBL
	// _00-_54 = TChaseMtx4
};

struct TYakiDeadsmoke : public TChaseMtxT {
	inline TYakiDeadsmoke()
	    : TChaseMtxT(PID_YakiDeadSmoke)
	{
	}

	virtual ~TYakiDeadsmoke() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtxT
};

struct TYakiFlick : public TChaseMtx {
	inline TYakiFlick()
	    : TChaseMtx(PID_YakiFlick, nullptr)
	{
	}

	virtual ~TYakiFlick() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TYakiSteam : public TChaseMtx {
	inline TYakiSteam()
	    : TChaseMtx(PID_YakiSteam, nullptr)
	{
	}

	virtual ~TYakiSteam() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

////////////////////////////////////////////
//// YOROI (CLOAKING BURROWNIT) EFFECTS ////
////////////////////////////////////////////

struct TYoroiAp : public TSimpleMtx2 {
	inline TYoroiAp(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_YoroiAp_1, PID_YoroiAp_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

struct TYoroiAttack : public TChaseMtx {
	inline TYoroiAttack()
	    : TChaseMtx(PID_YoroiAttack, nullptr)
	{
	}

	virtual ~TYoroiAttack() { } // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TYoroiAttackhit : public TSimple1 {
	inline TYoroiAttackhit()
	    : TSimple1(PID_YoroiAttackHit)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TYoroiEat : public TSimple1 {
	inline TYoroiEat()
	    : TSimple1(PID_YoroiEat)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

// burrownit hide/disappear effect
struct TYoroiHd : public TSimpleMtx2 {
	inline TYoroiHd(Matrixf* mat)
	    : TSimpleMtx2(mat, PID_YoroiHd_1, PID_YoroiHd_2)
	{
	}

	// _00     = VTBL
	// _00-_14 = TSimpleMtx2
};

////////////////////////////////////////////
//// WATAGE (SEEDING DANDELION) EFFECTS ////
////////////////////////////////////////////

struct TWatage : public TSimple1 {
	inline TWatage()
	    : TSimple1(PID_Watage)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

}; // namespace efx

#endif
