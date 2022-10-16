#ifndef _EFX_TPK_H
#define _EFX_TPK_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/Toe.h"

#define PKEFF_1     (0x1)
#define PKEFF_2     (0x2)
#define PKEFF_Fire  (0x4)
#define PKEFF_Gas   (0x8)
#define PKEFF_Water (0x10)

namespace efx {
void createSimplePkAp(Vector3f&);
void createSimpleChinka(Vector3f&);
void createSimpleWaterOff(Vector3f&);
void createSimpleGedoku(Vector3f&);
void createSimpleBlackDrop(Vector3f&);

struct TPkAp : public TSimple2 {
	inline TPkAp()
	    : TSimple2(PID_PkAp_1, PID_PkAp_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPkAttackDP : public TSimple1 {
	inline TPkAttackDP()
	    : TSimple1(PID_PkAttackDP)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkBlackDown : public TChasePos {
	inline TPkBlackDown()
	    : TChasePos(PID_PkBlackDown)
	{
	}

	virtual ~TPkBlackDown(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkBlackDrop : public TSimple3 {
	inline TPkBlackDrop()
	    : TSimple3(PID_PkBlackDrop_1, PID_PkBlackDrop_2, PID_PkBlackDrop_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TPkDiveB : public TSimple1 {
	inline TPkDiveB()
	    : TSimple1(PID_EnemyDive_2)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkGlow1 : public TChasePos {
	inline TPkGlow1()
	    : TChasePos(PID_PkGlow1)
	{
	}

	virtual ~TPkGlow1(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkGlow2 : public TSimple2 {
	inline TPkGlow2()
	    : TSimple2(PID_PkGlow2_1, PID_PkGlow2_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPkInstick : public TSimple1 {
	inline TPkInstick()
	    : TSimple1(PID_PkInStick)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkKanden : public TSimple3 {
	inline TPkKanden()
	    : TSimple3(PID_PkKanden_1, PID_PkKanden_2, PID_PkKanden_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TPkMoeA : public TChasePos {
	inline TPkMoeA()
	    : TChasePos(PID_PkMoeA)
	{
	}

	virtual ~TPkMoeA(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkNageBlur : public TChaseMtx {
	inline TPkNageBlur()
	    : TChaseMtx(PID_PkNageBlur_Red, nullptr)
	{
	}

	virtual ~TPkNageBlur(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TPkOneEmitterSimple : public JPAEmitterCallBack {
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual ~TPkOneEmitterSimple();             // _34 (weak)

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
};

struct TPkEffectTane {
	int _00; // _00
	u32 _04; // _04, unknown
	u32 _08; // _08, unknown
	u32 _0C; // _0C, unknown
	u32 _10; // _10, unknown
};

struct TPkEffect {
	TPkEffect();

	void init();
	void update();

	void updateMoeSmoke_();
	void updateHamon_();
	void createKourin_(Vector3f*);
	void killKourin_();
	void createDoping_(Vector3f*);
	void killDoping_();
	void createNage_(Vector3f*, Mtx);
	void killNage_();
	void createMoe_(Vector3f*);
	void killMoe_();
	void createChudoku_(Vector3f*);
	void killChudoku_();
	void createMoeSmoke_(Vector3f*);
	void killMoeSmoke_();
	void createBlackDown_(Vector3f*);
	void killBlackDown_();
	void createWater_(Vector3f*);
	void killWater_();
	void createHamonA_(Vector3f*);
	void killHamonA_();
	void createHamonB_(Vector3f*);
	void killHamonB_();

	inline void setFlag(int flagID) { m_flags |= flagID; }

	inline void resetFlag(int flagID) { m_flags &= ~flagID; }

	inline bool isFlag(int flagID) { return m_flags & flagID; }

	u32 m_flags;              // _00
	u8 _04[4];                // _04, unknown
	int _08;                  // _08, kourin color?
	Vector3f* _0C;            // _0C, kourin position?
	Vector3f* _10;            // _10
	Vector3f* _14;            // _14
	Matrixf* _18;             // _18
	Matrixf* _1C;             // _1C
	u32 _20;                  // _20, unknown
	u32 _24;                  // _24, unknown
	Vector3f _28;             // _28, dive vector?
	TPkNageBlur m_nageBlur;   // _34
	TPkMoeA m_moeA;           // _48
	TPkBlackDown m_blackDown; // _5C
	ToeKourin m_oeKourin;     // _70
	u8 _8C[4];                // _8C, unknown
	ToeDoping m_oeDoping;     // _90
	ToeNagekira m_oeNagekira; // _AC
	ToeMoeBC m_oeMoeBC[2];    // _C8
	ToeChudoku m_oeChudoku;   // _100
	ToeWater m_oeWater[2];    // _11C
	ToeHamonA m_oeHamonA;     // _154
	ToeHamonB m_oeHamonB;     // _170
	ToeMoeSmoke m_oeMoeSmoke; // _18C
};

struct TPkEffectMgr {
	TPkEffectMgr();

	virtual ~TPkEffectMgr(); // _08

	void globalInstance();
	void deleteInstance();
	void Instance();
	void startMgr();
	void exitMgr();

	void resetContextS();
	void createS_Dead(Vector3f&, long);
	void createS_Chinka(Vector3f&);
	void createS_Gedoku(Vector3f&);
	void createS_WaterOff(Vector3f&);
	void createS_Dive(Vector3f&);
	void createS_Chiru(Vector3f&);
	void createS_Inattack(Vector3f&);
	void createS_Walksmoke(Vector3f&);
	void createS_Dig(Vector3f&);
	void createS_ChiruRed(Vector3f&);
	void createS_Gate3Attack(Vector3f&);
	void createS_Walkwater(Vector3f&);
};
} // namespace efx

#endif
