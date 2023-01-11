#include "efx/TPk.h"
#include "efx/TDopingSmoke.h"
#include "efx/TOrima.h"
#include "efx/TCursor.h"
#include "efx/TFueact.h"
#include "efx/TNaviEffect.h"
#include "efx/TEnemyDead.h"
#include "efx/TGate.h"
#include "efx/TStoneAttack.h"
#include "efx/TBridge.h"
#include "game/Piki.h"
#include "trig.h"
#include "Game/MapMgr.h"
#include "JSystem/JPA/JPAMath.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495A28
    lbl_80495A28:
        .4byte 0x65667850
        .4byte 0x696B6D69
        .4byte 0x6E2E6370
        .4byte 0x70000000
    .global lbl_80495A38
    lbl_80495A38:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41726744
        .4byte 0x6F70696E
        .4byte 0x67536D6F
        .4byte 0x6B650000
        .4byte 0x41726743
        .4byte 0x7572736F
        .4byte 0x72000000
        .4byte 0x41726753
        .4byte 0x63616C65
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx12TStoneAttack
    __vt__Q23efx12TStoneAttack:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx13TBridgeAttack
    __vt__Q23efx13TBridgeAttack:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx12TGate2Attack
    __vt__Q23efx12TGate2Attack:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx10TPkInstick
    __vt__Q23efx10TPkInstick:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx12TGate1Attack
    __vt__Q23efx12TGate1Attack:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx12TPkBlackDrop
    __vt__Q23efx12TPkBlackDrop:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global __vt__Q23efx15TFueactBiriBase
    __vt__Q23efx15TFueactBiriBase:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx15TFueactBiriBaseFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx15TFueactBiriBaseFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx15TFueactBiriBaseFv .global __vt__Q23efx13TFueactCircle
    __vt__Q23efx13TFueactCircle:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx13TFueactCircleFPQ23efx3Arg
        .4byte forceKill__Q23efx13TFueactCircleFv
        .4byte fade__Q23efx13TFueactCircleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TFueactCircleFv"
        .4byte "@4@execute__Q23efx13TFueactCircleFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q23efx13TFueactCircleFv"
        .4byte
   "@8@execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle"
        .4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
        .4byte execute__Q23efx13TFueactCircleFP14JPABaseEmitter
        .4byte
   execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle .4byte
   executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter .4byte
   __dt__Q23efx13TFueactCircleFv .global __vt__Q23efx7TCursor
    __vt__Q23efx7TCursor:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx7TCursorFPQ23efx3Arg
        .4byte forceKill__Q23efx7TCursorFv
        .4byte fade__Q23efx7TCursorFv
    .global __vt__Q23efx14TOrimaLightAct
    __vt__Q23efx14TOrimaLightAct:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx14TOrimaLightActFPQ23efx3Arg
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx11TOrimaLight
    __vt__Q23efx11TOrimaLight:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TOrimaLightFPQ23efx3Arg
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx12TDopingSmoke
    __vt__Q23efx12TDopingSmoke:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx12TDopingSmokeFPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx11TPkNageBlur
    __vt__Q23efx11TPkNageBlur:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TPkNageBlurFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TPkNageBlurFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx11TPkNageBlurFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F670
    lbl_8051F670:
        .4byte 0x00000000
    .global lbl_8051F674
    lbl_8051F674:
        .4byte 0x41726754
        .4byte 0x79706500
    .global lbl_8051F67C
    lbl_8051F67C:
        .float 1.0
    .global lbl_8051F680
    lbl_8051F680:
        .4byte 0x40C90FDB
    .global lbl_8051F684
    lbl_8051F684:
        .4byte 0x40490FDB
    .global lbl_8051F688
    lbl_8051F688:
        .4byte 0x40000000
    .global lbl_8051F68C
    lbl_8051F68C:
        .4byte 0x43A2F983
    .global lbl_8051F690
    lbl_8051F690:
        .4byte 0xC3A2F983
        .4byte 0x00000000
    .global lbl_8051F698
    lbl_8051F698:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051F6A0
    lbl_8051F6A0:
        .4byte 0x42000000
    .global lbl_8051F6A4
    lbl_8051F6A4:
        .float 0.5
    .global lbl_8051F6A8
    lbl_8051F6A8:
        .4byte 0x40400000
    .global lbl_8051F6AC
    lbl_8051F6AC:
        .4byte 0x432F0000
    .global lbl_8051F6B0
    lbl_8051F6B0:
        .4byte 0x42C80000
    .global lbl_8051F6B4
    lbl_8051F6B4:
        .4byte 0x41400000
    .global lbl_8051F6B8
    lbl_8051F6B8:
        .4byte 0x41B00000
*/

namespace efx {

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TParticleCallBack_Yodare::init(JPABaseEmitter*, JPABaseParticle*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void TParticleCallBack_Yodare::execute(JPABaseEmitter*, JPABaseParticle*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void TTestYodareGen::create(Arg*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B66B0
 * Size:	0000F0
 */
bool TPkNageBlur::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgType", arg->getName()) == 0;
	P2ASSERTLINE(319, nameCheck);
	ArgType* targ = static_cast<ArgType*>(arg);
	switch (targ->m_type) {
	case Game::Blue:
		m_effectID = PID_PkNageBlur_Blue;
		break;
	case Game::Red:
		m_effectID = PID_PkNageBlur_Red;
		break;
	case Game::Yellow:
		m_effectID = PID_PkNageBlur_Yellow;
		break;
	case Game::Purple:
		m_effectID = PID_PkNageBlur_Purple;
		break;
	case Game::White:
		m_effectID = PID_PkNageBlur_White;
		break;
	}
	TSync::create(arg);
}

/*
 * --INFO--
 * Address:	803B67A0
 * Size:	0001E0
 */
bool TDopingSmoke::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgDopingSmoke", arg->getName()) == 0;
	P2ASSERTLINE(349, nameCheck);
	ArgDopingSmoke* targ = static_cast<ArgDopingSmoke*>(arg);
	switch (targ->m_dopeType) {
	case 0:
		m_effectIDs[0] = PID_DopingSmoke_3;
		break;
	case 1:
		m_effectIDs[0] = PID_DopingSmoke_1;
		break;
	default:
		m_effectIDs[0] = PID_DangoFly_2;
	}
	if (TSimple1::create(arg)) {
		volatile Vector3f temp = targ->m_dopePos.normalise();
		m_emitters[0]->setAngle(temp.x, temp.y, temp.z);
		if (targ->m_dopeType == 0) {
			JPABaseEmitter* emit = particleMgr->create(PID_DopingSmoke_2, arg->m_position, 0);
			if (emit) {
				emit->m_emitterCallback = &mCallBack_StaticClipping;
				emit->setAngle(temp.x, temp.y, temp.z);
			} else {
				return false;
			}
		}
		return true;
	}
	return false;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r4
	lis      r4, lbl_80495A28@ha
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r3, r30
	addi     r31, r4, lbl_80495A28@l
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x1c
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803B6808
	addi     r3, r31, 0
	addi     r5, r31, 0x10
	li       r4, 0x15d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B6808:
	lhz      r0, 0x1c(r30)
	cmpwi    r0, 1
	beq      lbl_803B6830
	bge      lbl_803B683C
	cmpwi    r0, 0
	bge      lbl_803B6824
	b        lbl_803B683C

lbl_803B6824:
	li       r0, 0x45
	sth      r0, 4(r29)
	b        lbl_803B6844

lbl_803B6830:
	li       r0, 0x43
	sth      r0, 4(r29)
	b        lbl_803B6844

lbl_803B683C:
	li       r0, 0x2b2
	sth      r0, 4(r29)

lbl_803B6844:
	mr       r3, r29
	mr       r4, r30
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803B6960
	lfs      f4, 0x10(r30)
	lfs      f3, 0x14(r30)
	fmuls    f0, f4, f4
	lfs      f2, 0x18(r30)
	fmuls    f5, f3, f3
	lfs      f1, lbl_8051F670@sda21(r2)
	fmuls    f6, f2, f2
	stfs     f4, 8(r1)
	fadds    f0, f0, f5
	stfs     f3, 0xc(r1)
	stfs     f2, 0x10(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803B68AC
	fmadds   f0, f4, f4, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_803B68B0
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_803B68B0

lbl_803B68AC:
	fmr      f3, f1

lbl_803B68B0:
	lfs      f0, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_803B68E8
	lfs      f0, lbl_8051F67C@sda21(r2)
	lfs      f2, 8(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_803B68E8:
	lwz      r3, 8(r29)
	lfs      f0, 8(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x1c(r3)
	stfs     f0, 0x20(r3)
	lhz      r0, 0x1c(r30)
	cmplwi   r0, 0
	bne      lbl_803B6958
	lwz      r3, particleMgr@sda21(r13)
	addi     r5, r30, 4
	li       r4, 0x44
	li       r6, 0
	bl       "create__11ParticleMgrFUsR10Vector3<f>Uc"
	cmplwi   r3, 0
	beq      lbl_803B6950
	addi     r0, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
	lfs      f0, 8(r1)
	stw      r0, 0xec(r3)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x1c(r3)
	stfs     f0, 0x20(r3)
	b        lbl_803B6958

lbl_803B6950:
	li       r3, 0
	b        lbl_803B6964

lbl_803B6958:
	li       r3, 1
	b        lbl_803B6964

lbl_803B6960:
	li       r3, 0

lbl_803B6964:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B6980
 * Size:	000060
 */
bool TOrimaLight::create(Arg* arg)
{
	switch (m_naviType) {
	case 0:
		m_items[0].m_effectID = PID_OrimaLight_Orima_1;
		m_items[1].m_effectID = PID_OrimaLight_Orima_2;
		break;
	case 1:
		m_items[0].m_effectID = PID_OrimaLight_Loozy_1;
		m_items[1].m_effectID = PID_OrimaLight_Loozy_2;
		break;
	}
	return TSyncGroup2::create(arg);
}

/*
 * --INFO--
 * Address:	803B69E0
 * Size:	000060
 */
bool TOrimaLightAct::create(Arg* arg)
{
	switch (m_naviType) {
	case 0:
		m_items[0].m_effectID = PID_OrimaLightAct_Orima_1;
		m_items[1].m_effectID = PID_OrimaLightAct_Orima_2;
		break;
	case 1:
		m_items[0].m_effectID = PID_OrimaLightAct_Loozy_1;
		m_items[1].m_effectID = PID_OrimaLightAct_Loozy_2;
		break;
	}
	return TSyncGroup2::create(arg);
}

/*
 * --INFO--
 * Address:	803B6A40
 * Size:	000078
 */
void TCursor::init(long whistleType, long cNum)
{
	if (cNum <= 0 || cNum > 16) {
		cNum = 16;
	}
	m_contextNum = cNum;
	m_angleSpeed = kAngleSpeed;

	// Louie and President whistles are unused in vanilla as whistleType is always 0 for navis
	switch (whistleType) {
	case 0:
		m_oneEmitter.m_effectID = PID_Cursor_Olimar;
		break;
	case 1:
		m_oneEmitter.m_effectID = PID_Cursor_President;
		break;
	case 2:
		m_oneEmitter.m_effectID = PID_Cursor_Louie;
		break;
	case 3:
		m_oneEmitter.m_effectID = PID_WhistleFuebug;
		break;
	}
}

/*
 * --INFO--
 * Address:	803B6AB8
 * Size:	000154
 */
bool TCursor::create(Arg* arg)
{
	m_angleTimer = 0.0f;

	bool nameCheck = strcmp("ArgCursor", arg->getName()) == 0;
	P2ASSERTLINE(459, nameCheck);
	ArgCursor* targ = static_cast<ArgCursor*>(arg);

	m_position = arg->m_position;
	f32 scale  = targ->m_scale;
	for (int i = 0; i < m_contextNum; i++) {
		Vector3f pos;
		calcPos_(&pos, scale, i);
		m_contextArray[i].m_position = pos;
	}

	for (int i = 0; i < m_contextNum; i++) {
		m_oneEmitter.add(&m_contextArray[i]);
	}
	m_oneEmitter.create(arg);
	return true;
}

/*
 * --INFO--
 * Address:	803B6C0C
 * Size:	000100
 */
void TCursor::update(Arg* arg)
{
	P2ASSERTLINE(480, arg);
	ArgCursor* targ = static_cast<ArgCursor*>(arg);

	f32 scale  = targ->m_scale;
	m_position = targ->m_position;

	m_angleTimer -= m_angleSpeed;
	if (m_angleTimer < 0.0f) {
		m_angleTimer += TAU;
	}

	for (int i = 0; i < m_contextNum; i++) {
		Vector3f pos;
		calcPos_(&pos, scale, i);
		m_contextArray[i].m_position = pos;
	}
}

/*
 * --INFO--
 * Address:	803B6D0C
 * Size:	000148
 */
void TCursor::calcPos_(Vector3f* pos, f32 mag, long id)
{
	Vector3f position = *pos;
	f32 angle         = (m_angleTimer + (f32)id * 2.0f * PI) / (f32)m_contextNum;

	position.x = mag * pikmin2_sinf(angle) + m_position.x;
	position.z = mag * pikmin2_cosf(angle) + m_position.z;
	if (Game::mapMgr) {
		position.y = Game::mapMgr->getMinY(position);
	} else {
		position.y = m_position.y;
	}
}

/*
 * --INFO--
 * Address:	803B6E54
 * Size:	0000AC
 */
bool TFueactCircle::create(Arg* arg)
{
	if (m_emitter) {
		return false;
	} else {
		m_emitter = particleMgr->create(PID_FueActCircle, Vector3f::zero, 0);
		if (m_emitter) {
			m_emitter->m_emitterCallback  = this;
			m_emitter->m_particleCallback = this;
			m_emitter->m_flags |= 0x40;
			return true;
		} else {
			return false;
		}
	}
}

/*
 * --INFO--
 * Address:	803B6F00
 * Size:	000124
 */
void TFueactCircle::execute(JPABaseEmitter* emit)
{
	P2ASSERTLINE(530, m_mtx);
	P2ASSERTLINE(531, m_pos);

	Vector3f ang = *m_pos - m_mtx->getBasis(0);
	ang.normalise();
	emit->setAngle(ang.x, ang.y, ang.z);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803B6F44
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x212
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B6F44:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_803B6F6C
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x213
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B6F6C:
	lwz      r5, 0x10(r30)
	lis      r3, __float_epsilon@ha
	lwz      r4, 0xc(r30)
	lfs      f1, 4(r5)
	lfs      f0, 0x1c(r4)
	lfs      f2, 0(r5)
	fsubs    f5, f1, f0
	lfs      f0, 0xc(r4)
	lfs      f1, 8(r5)
	fsubs    f4, f2, f0
	lfs      f0, 0x2c(r4)
	fmuls    f2, f5, f5
	fsubs    f6, f1, f0
	lfs      f1, lbl_8051F6A0@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmadds   f2, f4, f4, f2
	fmuls    f0, f1, f0
	fmadds   f7, f6, f6, f2
	fcmpo    cr0, f7, f0
	cror     2, 0, 2
	beq      lbl_803B7000
	lfs      f0, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f7, f0
	cror     2, 0, 2
	bne      lbl_803B6FD4
	b        lbl_803B6FF4

lbl_803B6FD4:
	frsqrte  f3, f7
	lfs      f2, lbl_8051F6A4@sda21(r2)
	lfs      f0, lbl_8051F6A8@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f7, f1, f0
	fmuls    f7, f2, f0

lbl_803B6FF4:
	fmuls    f4, f4, f7
	fmuls    f5, f5, f7
	fmuls    f6, f6, f7

lbl_803B7000:
	stfs     f4, 0x18(r31)
	stfs     f5, 0x1c(r31)
	stfs     f6, 0x20(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B7024
 * Size:	0002CC
 */
void TFueactCircle::execute(JPABaseEmitter*, JPABaseParticle* prt)
{
	P2ASSERTLINE(530, m_mtx);
	P2ASSERTLINE(531, m_pos);

	Vector3f ang = *m_pos - m_mtx->getBasis(0);
	if (ang.normalise() > 175.0f) {
		ang.normalise();
		ang *= 175.0f;
	}

	prt->_18.x = ang.x;
	prt->_18.x = ang.y;
	prt->_18.x = ang.z;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r5
	stw      r30, 0x58(r1)
	mr       r30, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803B7068
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x223
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B7068:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_803B7090
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x224
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B7090:
	lwz      r3, 0x10(r30)
	lwz      r4, 0xc(r30)
	lfs      f0, 0(r3)
	lfs      f1, 4(r3)
	stfs     f0, 0x38(r1)
	lfs      f0, 8(r3)
	stfs     f1, 0x3c(r1)
	lwz      r0, 0x38(r1)
	lwz      r3, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lfs      f5, 0xc(r4)
	stw      r0, 0x14(r1)
	lwz      r0, 0x40(r1)
	stw      r3, 0x18(r1)
	lfs      f1, 0x1c(r4)
	lfs      f2, 0x14(r1)
	lfs      f0, 0x18(r1)
	stw      r0, 0x1c(r1)
	fsubs    f3, f2, f5
	fsubs    f4, f0, f1
	lfs      f0, 0x2c(r4)
	lfs      f2, 0x1c(r1)
	stfs     f3, 0x14(r1)
	fsubs    f3, f2, f0
	lfs      f2, lbl_8051F670@sda21(r2)
	stfs     f4, 0x18(r1)
	lwz      r0, 0x14(r1)
	lwz      r3, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stw      r0, 0x2c(r1)
	lwz      r0, 0x1c(r1)
	stw      r3, 0x30(r1)
	lfs      f4, 0x2c(r1)
	lfs      f3, 0x30(r1)
	stw      r0, 0x34(r1)
	fmuls    f4, f4, f4
	fmuls    f3, f3, f3
	lfs      f6, 0x34(r1)
	stfs     f5, 0x44(r1)
	fmuls    f5, f6, f6
	fadds    f3, f4, f3
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	fadds    f6, f5, f3
	fcmpo    cr0, f6, f2
	cror     2, 0, 2
	bne      lbl_803B7154
	fmr      f3, f6
	b        lbl_803B7178

lbl_803B7154:
	frsqrte  f5, f6
	lfs      f4, lbl_8051F6A4@sda21(r2)
	lfs      f2, lbl_8051F6A8@sda21(r2)
	frsp     f5, f5
	fmuls    f3, f5, f5
	fmuls    f4, f4, f5
	fnmsubs  f2, f6, f3, f2
	fmuls    f2, f4, f2
	fmuls    f3, f6, f2

lbl_803B7178:
	lfs      f2, lbl_8051F6AC@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_803B728C
	lis      r3, __float_epsilon@ha
	lfs      f3, lbl_8051F6A0@sda21(r2)
	lfs      f2, __float_epsilon@l(r3)
	fmuls    f2, f3, f2
	fcmpo    cr0, f6, f2
	cror     2, 0, 2
	beq      lbl_803B71F8
	lfs      f2, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f6, f2
	cror     2, 0, 2
	bne      lbl_803B71B4
	b        lbl_803B71D4

lbl_803B71B4:
	frsqrte  f5, f6
	lfs      f4, lbl_8051F6A4@sda21(r2)
	lfs      f2, lbl_8051F6A8@sda21(r2)
	frsp     f5, f5
	fmuls    f3, f5, f5
	fmuls    f4, f4, f5
	fnmsubs  f2, f6, f3, f2
	fmuls    f6, f4, f2

lbl_803B71D4:
	lfs      f4, 0x2c(r1)
	lfs      f3, 0x30(r1)
	lfs      f2, 0x34(r1)
	fmuls    f4, f4, f6
	fmuls    f3, f3, f6
	fmuls    f2, f2, f6
	stfs     f4, 0x2c(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)

lbl_803B71F8:
	lwz      r4, 0x44(r1)
	lwz      r3, 0x48(r1)
	lwz      r0, 0x4c(r1)
	stw      r4, 8(r1)
	lfs      f5, 0x2c(r1)
	lfs      f4, lbl_8051F6AC@sda21(r2)
	lfs      f3, 0x30(r1)
	lfs      f2, 0x34(r1)
	fmuls    f7, f5, f4
	stw      r3, 0xc(r1)
	fmuls    f6, f3, f4
	fmuls    f5, f2, f4
	lfs      f2, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f3, 0xc(r1)
	fadds    f4, f2, f7
	lfs      f2, 0x10(r1)
	fadds    f3, f3, f6
	stfs     f7, 0x2c(r1)
	fadds    f2, f2, f5
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	lwz      r4, 8(r1)
	stfs     f2, 0x10(r1)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x10(r1)
	stw      r4, 0x20(r1)
	stw      r3, 0x24(r1)
	lfs      f4, 0x20(r1)
	stw      r0, 0x28(r1)
	lfs      f3, 0x24(r1)
	lfs      f2, 0x28(r1)
	stfs     f6, 0x30(r1)
	stfs     f5, 0x34(r1)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x40(r1)

lbl_803B728C:
	lwz      r0, 0x7c(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_803B72D8
	lfs      f6, 0x84(r31)
	lfs      f2, lbl_8051F67C@sda21(r2)
	lfs      f4, 0x38(r1)
	lfs      f3, 0x3c(r1)
	fsubs    f7, f2, f6
	lfs      f2, 0x40(r1)
	fmuls    f4, f4, f6
	lfs      f5, 0x44(r1)
	fmuls    f3, f3, f6
	fmuls    f2, f2, f6
	fmadds   f4, f5, f7, f4
	fmadds   f1, f1, f7, f3
	fmadds   f0, f0, f7, f2
	stfs     f4, 0x18(r31)
	stfs     f1, 0x1c(r31)
	stfs     f0, 0x20(r31)

lbl_803B72D8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B72F0
 * Size:	0001D4
 */
void TFueactBiriBase::doExecuteEmitterOperation(JPABaseEmitter* emit)
{
	P2ASSERTLINE(530, m_mtx);
	P2ASSERTLINE(531, m_pos);

	Vector3f ang = *m_pos - m_mtx->getBasis(0);
	ang.normalise();
	Matrixf mtx; // i cant even
	JPASetRMtxTVecfromMtx(mtx.m_matrix.mtxView, m_mtx->m_matrix.mtxView, m_pos);
	emit->setAngle(ang.x, ang.y, ang.z);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_803B733C
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x243
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B733C:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803B7364
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x244
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B7364:
	lwz      r4, 0x14(r30)
	lwz      r3, 0x10(r30)
	lfs      f0, 4(r4)
	lfs      f3, 0x1c(r3)
	lfs      f1, 8(r4)
	fsubs    f0, f0, f3
	lfs      f2, 0x2c(r3)
	lfs      f4, 0(r4)
	lfs      f10, 0xc(r3)
	fsubs    f1, f1, f2
	fmuls    f6, f0, f0
	fsubs    f8, f4, f10
	lfs      f31, lbl_8051F670@sda21(r2)
	fmuls    f7, f1, f1
	fmadds   f4, f8, f8, f6
	fadds    f9, f7, f4
	fcmpo    cr0, f9, f31
	ble      lbl_803B73C0
	ble      lbl_803B73BC
	frsqrte  f4, f9
	fmuls    f31, f4, f9
	b        lbl_803B73C0

lbl_803B73BC:
	fmr      f31, f9

lbl_803B73C0:
	lfs      f5, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f9, f5
	ble      lbl_803B73E8
	fmadds   f4, f8, f8, f6
	fadds    f6, f7, f4
	fcmpo    cr0, f6, f5
	ble      lbl_803B73EC
	frsqrte  f4, f6
	fmuls    f6, f4, f6
	b        lbl_803B73EC

lbl_803B73E8:
	fmr      f6, f5

lbl_803B73EC:
	lfs      f4, lbl_8051F670@sda21(r2)
	fcmpo    cr0, f6, f4
	ble      lbl_803B740C
	lfs      f4, lbl_8051F67C@sda21(r2)
	fdivs    f4, f4, f6
	fmuls    f8, f8, f4
	fmuls    f0, f0, f4
	fmuls    f1, f1, f4

lbl_803B740C:
	lfs      f5, lbl_8051F670@sda21(r2)
	addi     r3, r1, 8
	lfs      f6, lbl_8051F67C@sda21(r2)
	addi     r4, r31, 0x68
	fmuls    f9, f5, f0
	stfs     f8, 0x10(r1)
	fmuls    f4, f5, f1
	addi     r5, r31, 0xa4
	stfs     f10, 0x14(r1)
	fnmsubs  f7, f6, f8, f9
	fmsubs   f6, f6, f1, f9
	stfs     f0, 0x20(r1)
	fmsubs   f9, f5, f8, f4
	fmuls    f4, f8, f7
	stfs     f3, 0x24(r1)
	fmuls    f3, f0, f6
	fmuls    f5, f1, f9
	stfs     f6, 8(r1)
	fmsubs   f4, f1, f6, f4
	fmsubs   f3, f8, f9, f3
	stfs     f9, 0x18(r1)
	fmsubs   f0, f0, f7, f5
	stfs     f4, 0x1c(r1)
	stfs     f0, 0xc(r1)
	stfs     f7, 0x28(r1)
	stfs     f3, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	lfs      f0, lbl_8051F6AC@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_803B7490
	fmr      f31, f0

lbl_803B7490:
	lfs      f0, lbl_8051F6B0@sda21(r2)
	fdivs    f0, f31, f0
	stfs     f0, 0x98(r31)
	stfs     f0, 0x9c(r31)
	stfs     f0, 0xa0(r31)
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B74C4
 * Size:	00010C
 */
void createSimpleDead(Vector3f& pos, long type)
{
	P2ASSERTLINE(618, pkEffectMgr);
	switch (type) {
	case Game::Bulbmin:
		TEnemyDead_ArgScale efx;
		ArgScale arg(pos, 0.5f);
		efx.create(&arg);
		break;
	default:
		pkEffectMgr->createS_Dead(pos, type);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void createSimpleAttack(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void createSimpleAttackDp(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void createSimpleKanden(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B75D0
 * Size:	00005C
 */
void createSimpleChinka(Vector3f& pos)
{
	P2ASSERTLINE(656, pkEffectMgr);
	pkEffectMgr->createS_Chinka(pos);
}

/*
 * --INFO--
 * Address:	803B762C
 * Size:	00005C
 */
void createSimpleGedoku(Vector3f& pos)
{
	P2ASSERTLINE(662, pkEffectMgr);
	pkEffectMgr->createS_Gedoku(pos);
}

/*
 * --INFO--
 * Address:	803B7688
 * Size:	000098
 */
void createSimpleBlackDrop(Vector3f& pos)
{
	Arg arg(pos);
	TPkBlackDrop efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7720
 * Size:	00008C
 */
void createSimpleGate1Attack(Vector3f& pos)
{
	Arg arg(pos);
	TGate1Attack efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B77AC
 * Size:	00008C
 */
void createSimplePkAp(Vector3f& pos)
{
	Arg arg(pos);
	TPkAp efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7838
 * Size:	00005C
 */
void createSimpleWaterOff(Vector3f& pos)
{
	P2ASSERTLINE(689, pkEffectMgr);
	pkEffectMgr->createS_WaterOff(pos);
}

/*
 * --INFO--
 * Address:	803B7894
 * Size:	00005C
 */
void createSimpleDive(Vector3f& pos)
{
	P2ASSERTLINE(695, pkEffectMgr);
	pkEffectMgr->createS_Dive(pos);
}

/*
 * --INFO--
 * Address:	803B78F0
 * Size:	000098
 */
void createSimpleChiru(Vector3f& pos, long type)
{
	P2ASSERTLINE(701, pkEffectMgr);
	switch (type) {
	case Game::Blue:
	case Game::Red:
	case Game::Yellow:
		pkEffectMgr->createS_Chiru(pos);
		break;
	case Game::Purple:
	case Game::White:
		pkEffectMgr->createS_ChiruRed(pos);
		break;
	}
}

/*
 * --INFO--
 * Address:	803B7988
 * Size:	00005C
 */
void createSimpleInattack(Vector3f& pos)
{
	P2ASSERTLINE(717, pkEffectMgr);
	pkEffectMgr->createS_Inattack(pos);
}

/*
 * --INFO--
 * Address:	803B79E4
 * Size:	000080
 */
void createSimpleInstick(Vector3f& pos)
{
	Arg arg(pos);
	TPkInstick efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7A64
 * Size:	00008C
 */
void createSimpleGate2Attack(Vector3f& pos)
{
	Arg arg(pos);
	TGate2Attack efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7AF0
 * Size:	000080
 */
void createSimpleBridgeAttack(Vector3f& pos)
{
	Arg arg(pos);
	TBridgeAttack efx;
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7B70
 * Size:	00005C
 */
void createSimpleWalksmoke(Vector3f& pos)
{
	P2ASSERTLINE(744, pkEffectMgr);
	pkEffectMgr->createS_Walksmoke(pos);
}

/*
 * --INFO--
 * Address:	803B7BCC
 * Size:	00008C
 */
void createSimpleGlow2(Vector3f& pos)
{
	TPkGlow2 efx;
	Arg arg(pos);
	efx.create(&arg);
}

/*
 * --INFO--
 * Address:	803B7C58
 * Size:	000080
 */
void createSimpleStoneAttack(Vector3f& pos)
{
	TStoneAttack efx;
	Arg arg(pos);
	efx.create(&arg);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x34(r1)
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx12TStoneAttack@ha
	li       r7, 0x1af
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	li       r6, 0
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r5, r5, __vt__Q23efx12TStoneAttack@l
	addi     r4, r1, 8
	sth      r7, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	lfs      f0, 0(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 4(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 8(r3)
	addi     r3, r1, 0x18
	stfs     f0, 0x14(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B7CD8
 * Size:	00005C
 */
void createSimpleDig(Vector3f& pos)
{
	P2ASSERTLINE(764, pkEffectMgr);
	pkEffectMgr->createS_Dig(pos);
}

/*
 * --INFO--
 * Address:	803B7D34
 * Size:	00005C
 */
void createSimpleGate3Attack(Vector3f& pos)
{
	P2ASSERTLINE(770, pkEffectMgr);
	pkEffectMgr->createS_Gate3Attack(pos);
}

/*
 * --INFO--
 * Address:	803B7D90
 * Size:	00005C
 */
void createSimpleWalkwater(Vector3f& pos)
{
	P2ASSERTLINE(776, pkEffectMgr);
	pkEffectMgr->createS_Walkwater(pos);
}

/*
 * --INFO--
 * Address:	803B7DEC
 * Size:	000038
 */
void TNaviEffect::init(Vector3f* pos, Mtx mtx, Vector3f* naviPos, enumNaviType naviType)
{
	m_pos = naviPos;
	// m_beaconMtx = mtx;
	m_naviPos = naviPos;
	m_height  = nullptr;
	setNaviType(naviType);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r4, 0x8(r3)
	  mr        r4, r7
	  stw       r5, 0x10(r3)
	  stw       r6, 0xC(r3)
	  stw       r0, 0x18(r3)
	  bl        .loc_0x38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x38:
	*/
}

/*
 * --INFO--
 * Address:	803B7E24
 * Size:	0000D8
 */
void TNaviEffect::setNaviType(enumNaviType type)
{
	switch (type) {
	case NAVITYPE_Olimar:
		m_cursor.m_contextNum            = WHISTLE_CONTEXT_NUM;
		m_cursor.m_angleSpeed            = TCursor::kAngleSpeed;
		m_cursor.m_oneEmitter.m_effectID = PID_Cursor_Olimar;
		m_light.m_naviType               = 0;
		m_lightAct.m_naviType            = 0;
		break;
	case NAVITYPE_Louie:
		m_cursor.m_contextNum            = WHISTLE_CONTEXT_NUM;
		m_cursor.m_angleSpeed            = TCursor::kAngleSpeed;
		m_cursor.m_oneEmitter.m_effectID = PID_Cursor_Louie;
		m_light.m_naviType               = 1;
		m_lightAct.m_naviType            = 1;
		break;
	case NAVITYPE_President:
		m_cursor.m_contextNum            = WHISTLE_CONTEXT_NUM;
		m_cursor.m_angleSpeed            = TCursor::kAngleSpeed;
		m_cursor.m_oneEmitter.m_effectID = PID_Cursor_President;
		m_light.m_naviType               = 0;
		m_lightAct.m_naviType            = 0;
		break;
	default:
		m_cursor.m_contextNum            = WHISTLE_CONTEXT_NUM;
		m_cursor.m_angleSpeed            = TCursor::kAngleSpeed;
		m_cursor.m_oneEmitter.m_effectID = PID_Cursor_Olimar;
		m_light.m_naviType               = 1;
		m_lightAct.m_naviType            = 1;
		break;
	}
	/*
	cmpwi    r4, 2
	beq      lbl_803B7EA4
	bge      lbl_803B7E40
	cmpwi    r4, 0
	beq      lbl_803B7E4C
	bge      lbl_803B7E78
	blr

lbl_803B7E40:
	cmpwi    r4, 4
	bgelr
	b        lbl_803B7ED0

lbl_803B7E4C:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x19
	li       r0, 0
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr

lbl_803B7E78:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x19
	li       r0, 1
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr

lbl_803B7EA4:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x1b
	li       r0, 0
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr

lbl_803B7ED0:
	li       r0, 0x10
	cmpwi    r0, 0
	stw      r0, 0xe4(r3)
	li       r4, 0x1a
	li       r0, 1
	lfs      f0, kAngleSpeed__Q23efx7TCursor@sda21(r13)
	stfs     f0, 0x338(r3)
	sth      r4, 0xbc(r3)
	stw      r0, 0x368(r3)
	stw      r0, 0x398(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B7EFC
 * Size:	000020
 */
void TNaviEffect::update() { updateHamon_(); }

/*
 * --INFO--
 * Address:	803B7F1C
 * Size:	0000D8
 */
void TNaviEffect::updateHamon_()
{
	if (m_height && m_pos && isFlag(NAVIFX_InWater)) {
		Vector3f temp(m_pos->x, *m_height, m_pos->z);
		m_hamonPosition = temp;
		f32 diff        = *m_height - m_pos->y;
		if (diff < 12.0f) {
			createHamonA_(&m_hamonPosition);
		} else {
			killHamonA_();
		}

		if (diff < 22.0f) {
			createHamonB_(&m_hamonPosition);
		} else {
			killHamonB_();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_803B7FD8
	lwz      r4, 8(r31)
	cmplwi   r4, 0
	beq      lbl_803B7FD8
	lwz      r0, 0(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803B7FD8
	lfs      f0, 0(r4)
	stfs     f0, 0x1c(r31)
	lwz      r4, 0x18(r31)
	lfs      f0, 0(r4)
	stfs     f0, 0x20(r31)
	lwz      r4, 8(r31)
	lfs      f0, 8(r4)
	stfs     f0, 0x24(r31)
	b        lbl_803B7F84
	b        lbl_803B7FD8

lbl_803B7F84:
	lwz      r5, 0x18(r31)
	lwz      r4, 8(r31)
	lfs      f2, 0(r5)
	lfs      f1, 4(r4)
	lfs      f0, lbl_8051F6B4@sda21(r2)
	fsubs    f31, f2, f1
	fcmpo    cr0, f31, f0
	bge      lbl_803B7FB0
	addi     r4, r31, 0x1c
	bl       "createHamonA___Q23efx11TNaviEffectFP10Vector3<f>"
	b        lbl_803B7FB4

lbl_803B7FB0:
	bl       killHamonA___Q23efx11TNaviEffectFv

lbl_803B7FB4:
	lfs      f0, lbl_8051F6B8@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_803B7FD0
	mr       r3, r31
	addi     r4, r31, 0x1c
	bl       "createHamonB___Q23efx11TNaviEffectFP10Vector3<f>"
	b        lbl_803B7FD8

lbl_803B7FD0:
	mr       r3, r31
	bl       killHamonB___Q23efx11TNaviEffectFv

lbl_803B7FD8:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B7FF4
 * Size:	000060
 */
void TNaviEffect::createHamonA_(Vector3f* pos)
{
	P2ASSERTLINE(863, pos);
	m_hamonA.create(pos);
}

/*
 * --INFO--
 * Address:	803B8054
 * Size:	000024
 */
void TNaviEffect::killHamonA_() { m_hamonA.kill(); }

/*
 * --INFO--
 * Address:	803B8078
 * Size:	000060
 */
void TNaviEffect::createHamonB_(Vector3f* pos)
{
	P2ASSERTLINE(874, pos);
	m_hamonB.create(pos);
}

/*
 * --INFO--
 * Address:	803B80D8
 * Size:	000024
 */
void TNaviEffect::killHamonB_() { m_hamonB.kill(); }

/*
 * --INFO--
 * Address:	803B80FC
 * Size:	000078
 */
void TNaviEffect::createLight_(Mtx mtx)
{
	P2ASSERTLINE(886, mtx);
	m_light.setMtxptr(mtx);
	m_light.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8174
 * Size:	00002C
 */
void TNaviEffect::killLight_() { m_light.fade(); }

/*
 * --INFO--
 * Address:	803B81A0
 * Size:	000078
 */
void TNaviEffect::createLightAct_(Mtx mtx)
{
	P2ASSERTLINE(899, mtx);
	m_lightAct.setMtxptr(mtx);
	m_lightAct.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8218
 * Size:	00002C
 */
void TNaviEffect::killLightAct_() { m_lightAct.fade(); }

/*
 * --INFO--
 * Address:	803B8244
 * Size:	000064
 */
void TNaviEffect::createCursor_(Vector3f pos, f32 scale)
{
	ArgCursor arg(pos, scale);
	m_cursor.create(&arg);
}

/*
 * --INFO--
 * Address:	803B82A8
 * Size:	00002C
 */
void TNaviEffect::killCursor_() { m_cursor.fade(); }

/*
 * --INFO--
 * Address:	803B82D4
 * Size:	000284
 */
void TNaviEffect::updateCursor_(Vector3f pos, f32 scale)
{
	ArgCursor arg(pos, scale);
	m_cursor.update(&arg);
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stmw     r27, 0x5c(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lfs      f3, 0(r4)
	addi     r0, r5, __vt__Q23efx3Arg@l
	lfs      f2, 4(r4)
	lfs      f0, 8(r4)
	lis      r4, __vt__Q23efx9ArgCursor@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, __vt__Q23efx9ArgCursor@l
	addic.   r0, r1, 0x14
	mr       r28, r3
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stw      r4, 0x14(r1)
	stfs     f1, 0x24(r1)
	bne      lbl_803B8370
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x1e0
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B8370:
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f1, 0x328(r28)
	lfs      f1, 0x20(r1)
	stfs     f0, 0x32c(r28)
	lfs      f0, lbl_8051F670@sda21(r2)
	stfs     f1, 0x330(r28)
	lfs      f26, 0x24(r1)
	lfs      f2, 0x334(r28)
	lfs      f1, 0x338(r28)
	fsubs    f1, f2, f1
	stfs     f1, 0x334(r28)
	lfs      f1, 0x334(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_803B83B8
	lfs      f0, lbl_8051F680@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x334(r28)

lbl_803B83B8:
	lis      r3, sincosTable___5JMath@ha
	lfs      f27, lbl_8051F684@sda21(r2)
	lfs      f28, lbl_8051F688@sda21(r2)
	addi     r29, r28, 0xac
	lfd      f29, lbl_8051F698@sda21(r2)
	addi     r27, r3, sincosTable___5JMath@l
	lfs      f30, lbl_8051F670@sda21(r2)
	li       r30, 0
	lfs      f31, lbl_8051F68C@sda21(r2)
	lis      r31, 0x4330
	b        lbl_803B8508

lbl_803B83E4:
	xoris    r3, r30, 0x8000
	xoris    r0, r0, 0x8000
	stw      r3, 0x2c(r1)
	lfs      f2, 0x334(r28)
	stw      r31, 0x28(r1)
	lfd      f0, 0x28(r1)
	stw      r0, 0x34(r1)
	fsubs    f0, f0, f29
	stw      r31, 0x30(r1)
	fmuls    f1, f28, f0
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f29
	fmuls    f1, f27, f1
	fdivs    f0, f1, f0
	fadds    f2, f2, f0
	fmr      f0, f2
	fcmpo    cr0, f2, f30
	bge      lbl_803B8430
	fneg     f0, f2

lbl_803B8430:
	fmuls    f1, f0, f31
	lfs      f0, 0x328(r28)
	fcmpo    cr0, f2, f30
	fctiwz   f1, f1
	stfd     f1, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r27, r0
	lfs      f1, 4(r3)
	fmadds   f0, f26, f1, f0
	stfs     f0, 8(r1)
	bge      lbl_803B848C
	lfs      f0, lbl_8051F690@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_803B84AC

lbl_803B848C:
	fmuls    f0, f2, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_803B84AC:
	lfs      f0, 0x330(r28)
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmadds   f0, f26, f1, f0
	cmplwi   r3, 0
	stfs     f0, 0x10(r1)
	beq      lbl_803B84E0
	lwz      r12, 4(r3)
	addi     r4, r1, 8
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xc(r1)
	b        lbl_803B84E8

lbl_803B84E0:
	lfs      f0, 0x32c(r28)
	stfs     f0, 0xc(r1)

lbl_803B84E8:
	lfs      f0, 8(r1)
	addi     r30, r30, 1
	stfs     f0, 0x54(r29)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x58(r29)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x5c(r29)
	addi     r29, r29, 0x24

lbl_803B8508:
	lwz      r0, 0xe4(r28)
	cmpw     r30, r0
	blt      lbl_803B83E4
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	lmw      r27, 0x5c(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B8558
 * Size:	0000B4
 */
void TNaviEffect::createFueact_(Mtx mtx, Vector3f* pos)
{
	P2ASSERTLINE(930, pos);
	P2ASSERTLINE(931, mtx);

	m_fueact.m_circle.m_pos = pos;
	m_fueact.m_circle.m_mtx = (Matrixf*)mtx;
	m_fueact.m_biri1.m_pos  = (JGeometry::TVec3f*)pos;
	m_fueact.m_biri1.m_mtx  = (Matrixf*)mtx;
	m_fueact.m_biri2.m_pos  = (JGeometry::TVec3f*)pos;
	m_fueact.m_biri2.m_mtx  = (Matrixf*)mtx;
	m_fueact.create(nullptr);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_803B859C
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x3a2
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B859C:
	cmplwi   r31, 0
	bne      lbl_803B85C0
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x3a3
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B85C0:
	stw      r30, 0x70(r29)
	addi     r3, r29, 0x60
	li       r4, 0
	stw      r31, 0x74(r29)
	stw      r30, 0x8c(r29)
	stw      r31, 0x90(r29)
	stw      r30, 0xa4(r29)
	stw      r31, 0xa8(r29)
	lwz      r12, 0x60(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B860C
 * Size:	00002C
 */
void TNaviEffect::killFueact_() { m_fueact.fade(); }

/*
 * --INFO--
 * Address:	803B8638
 * Size:	000078
 */
void TNaviEffect::createOrimadamage_(Mtx mtx)
{
	P2ASSERTLINE(945, mtx);
	m_damage.setMtxptr(mtx);
	m_damage.create(nullptr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TNaviEffect::killOrimadamage_()
{
	m_damage.fade();
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B86B0
 * Size:	00003C
 */
void TPkEffect::init()
{
	m_pikiColor     = -1;
	_0C             = nullptr;
	m_hamonPosPtr   = nullptr;
	_14             = nullptr;
	_18             = nullptr;
	_1C             = nullptr;
	m_height        = nullptr;
	m_moeSmokeTimer = 0;
	m_flags.clear();
}

/*
 * --INFO--
 * Address:	803B86EC
 * Size:	000034
 */
void TPkEffect::update()
{
	updateMoeSmoke_();
	updateHamon_();
}

/*
 * --INFO--
 * Address:	803B8720
 * Size:	000038
 */
void TPkEffect::updateMoeSmoke_()
{
	if (!m_moeSmokeTimer) {
		killMoeSmoke_();
	} else {
		m_moeSmokeTimer--;
	}
}

/*
 * --INFO--
 * Address:	803B8758
 * Size:	0000D0
 */
void TPkEffect::updateHamon_()
{
	if (m_height && m_hamonPosPtr && isFlag(0x20)) {
		Vector3f temp(m_hamonPosPtr->x, *m_height, m_hamonPosPtr->z);
		m_hamonPosition = temp;
		f32 diff        = *m_height - m_hamonPosPtr->y;
		if (diff < 12.0f) {
			createHamonA_(&m_hamonPosition);
		} else {
			killHamonA_();
		}

		if (diff < 22.0f) {
			createHamonB_(&m_hamonPosition);
		} else {
			killHamonB_();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, 0x20(r3)
	cmplwi   r5, 0
	beq      lbl_803B880C
	lwz      r4, 0x10(r31)
	cmplwi   r4, 0
	beq      lbl_803B880C
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_803B880C
	lfs      f2, 8(r4)
	lfs      f1, 0(r5)
	lfs      f0, 0(r4)
	stfs     f0, 0x28(r31)
	stfs     f1, 0x2c(r31)
	stfs     f2, 0x30(r31)
	b        lbl_803B87B8
	b        lbl_803B880C

lbl_803B87B8:
	lwz      r5, 0x20(r31)
	lwz      r4, 0x10(r31)
	lfs      f2, 0(r5)
	lfs      f1, 4(r4)
	lfs      f0, lbl_8051F6B4@sda21(r2)
	fsubs    f31, f2, f1
	fcmpo    cr0, f31, f0
	bge      lbl_803B87E4
	addi     r4, r31, 0x28
	bl       "createHamonA___Q23efx9TPkEffectFP10Vector3<f>"
	b        lbl_803B87E8

lbl_803B87E4:
	bl       killHamonA___Q23efx9TPkEffectFv

lbl_803B87E8:
	lfs      f0, lbl_8051F6B8@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_803B8804
	mr       r3, r31
	addi     r4, r31, 0x28
	bl       "createHamonB___Q23efx9TPkEffectFP10Vector3<f>"
	b        lbl_803B880C

lbl_803B8804:
	mr       r3, r31
	bl       killHamonB___Q23efx9TPkEffectFv

lbl_803B880C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B8828
 * Size:	000064
 */
void TPkEffect::createKourin_(Vector3f* pos)
{
	P2ASSERTLINE(1019, pos);
	m_oeKourin.create(pos, m_pikiColor);
}

/*
 * --INFO--
 * Address:	803B888C
 * Size:	000024
 */
void TPkEffect::killKourin_() { m_oeKourin.kill(); }

/*
 * --INFO--
 * Address:	803B88B0
 * Size:	000060
 */
void TPkEffect::createDoping_(Vector3f* pos)
{
	P2ASSERTLINE(1033, pos);
	m_oeDoping.create(pos);
}

/*
 * --INFO--
 * Address:	803B8910
 * Size:	000024
 */
void TPkEffect::killDoping_() { m_oeDoping.kill(); }

/*
 * --INFO--
 * Address:	803B8934
 * Size:	0000F8
 */
void TPkEffect::createNage_(Vector3f* pos, Mtx mtx)
{
	P2ASSERTLINE(1046, pos);
	m_oeNagekira.create(pos);
	P2ASSERTLINE(1049, mtx);
	ArgType arg(Vector3f::zero);
	arg.m_type       = m_pikiColor;
	m_nageBlur.m_mtx = (Matrixf*)mtx;
	m_nageBlur.create(&arg);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	or.      r29, r4, r4
	bne      lbl_803B8978
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x416
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B8978:
	mr       r4, r29
	addi     r3, r31, 0xac
	bl       "create__Q23efx11ToeNagekiraFP10Vector3<f>"
	cmplwi   r30, 0
	bne      lbl_803B89A8
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x419
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B89A8:
	lis      r3, "zero__10Vector3<f>"@ha
	lwz      r6, 8(r31)
	addi     r4, r3, "zero__10Vector3<f>"@l
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f0, 0(r4)
	addi     r5, r3, __vt__Q23efx3Arg@l
	lfs      f1, 4(r4)
	lfs      f2, 8(r4)
	lis      r3, __vt__Q23efx7ArgType@ha
	stfs     f0, 0xc(r1)
	addi     r0, r3, __vt__Q23efx7ArgType@l
	addi     r3, r31, 0x34
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	stw      r0, 8(r1)
	sth      r6, 0x18(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	stw      r30, 0x44(r31)
	lwz      r12, 0x34(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B8A2C
 * Size:	000044
 */
void TPkEffect::killNage_()
{
	m_oeNagekira.kill();
	m_nageBlur.fade();
}

/*
 * --INFO--
 * Address:	803B8A70
 * Size:	00007C
 */
void TPkEffect::createMoe_(Vector3f* pos)
{
	P2ASSERTLINE(1066, pos);
	m_oeMoeBC->create(pos);
	m_moeA.m_position = pos;
	m_moeA.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8AEC
 * Size:	000044
 */
void TPkEffect::killMoe_()
{
	m_oeMoeBC->kill();
	m_moeA.fade();
}

/*
 * --INFO--
 * Address:	803B8B30
 * Size:	000060
 */
void TPkEffect::createChudoku_(Vector3f* pos)
{
	P2ASSERTLINE(1083, pos);
	m_oeChudoku.create(pos);
}

/*
 * --INFO--
 * Address:	803B8B90
 * Size:	000024
 */
void TPkEffect::killChudoku_() { m_oeChudoku.kill(); }

/*
 * --INFO--
 * Address:	803B8BB4
 * Size:	000060
 */
void TPkEffect::createMoeSmoke_(Vector3f* pos)
{
	P2ASSERTLINE(1097, pos);
	m_oeMoeSmoke.create(pos);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803B8BF0
	lis      r3, lbl_80495A28@ha
	lis      r5, lbl_80495A38@ha
	addi     r3, r3, lbl_80495A28@l
	li       r4, 0x449
	addi     r5, r5, lbl_80495A38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B8BF0:
	mr       r4, r31
	addi     r3, r30, 0x18c
	bl       "create__Q23efx11ToeMoeSmokeFP10Vector3<f>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B8C14
 * Size:	000024
 */
void TPkEffect::killMoeSmoke_()
{
	m_oeMoeSmoke.kill();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x18c
	stw      r0, 0x14(r1)
	bl       kill__Q23efx11ToeMoeSmokeFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B8C38
 * Size:	000070
 */
void TPkEffect::createBlackDown_(Vector3f* pos)
{
	P2ASSERTLINE(1111, pos);
	m_blackDown.m_position = pos;
	m_blackDown.create(nullptr);
}

/*
 * --INFO--
 * Address:	803B8CA8
 * Size:	00002C
 */
void TPkEffect::killBlackDown_() { m_blackDown.fade(); }

/*
 * --INFO--
 * Address:	803B8CD4
 * Size:	000060
 */
void TPkEffect::createWater_(Vector3f* pos)
{
	P2ASSERTLINE(1125, pos);
	m_oeWater[0].create(pos);
}

/*
 * --INFO--
 * Address:	803B8D34
 * Size:	000024
 */
void TPkEffect::killWater_()
{
	m_oeWater[0].kill();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x11c
	stw      r0, 0x14(r1)
	bl       kill__Q23efx8ToeWaterFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B8D58
 * Size:	000060
 */
void TPkEffect::createHamonA_(Vector3f* pos)
{
	P2ASSERTLINE(1137, pos);
	m_oeHamonA.create(pos);
}

/*
 * --INFO--
 * Address:	803B8DB8
 * Size:	000024
 */
void TPkEffect::killHamonA_() { m_oeHamonA.kill(); }

/*
 * --INFO--
 * Address:	803B8DDC
 * Size:	000060
 */
void TPkEffect::createHamonB_(Vector3f* pos)
{
	P2ASSERTLINE(1148, pos);
	m_oeHamonB.create(pos);
}

/*
 * --INFO--
 * Address:	803B8E3C
 * Size:	000024
 */
void TPkEffect::killHamonB_() { m_oeHamonB.kill(); }

/*
 * --INFO--
 * Address:	803B8E60
 * Size:	000020
 */
void TPkEffectTane::init()
{
	m_pikiColor = -1;
	m_pos       = nullptr;
	m_pos2      = nullptr;
	_08         = nullptr;
	_10         = nullptr;
}

/*
 * --INFO--
 * Address:	803B8E80
 * Size:	000060
 */
void TPkEffectTane::createTanekira_(Vector3f* pos)
{
	P2ASSERTLINE(1174, pos);
	m_oeKira.create(pos);
}

/*
 * --INFO--
 * Address:	803B8EE0
 * Size:	000024
 */
void TPkEffectTane::killTanekira_() { m_oeKira.kill(); }

/*
 * --INFO--
 * Address:	803B8F04
 * Size:	000064
 */
void TPkEffectTane::createKourin_(Vector3f* pos)
{
	P2ASSERTLINE(1189, pos);
	m_oeKourin.create(pos, m_pikiColor);
}

/*
 * --INFO--
 * Address:	803B8F68
 * Size:	000024
 */
void TPkEffectTane::killKourin_() { m_oeKourin.kill(); }

/*
 * --INFO--
 * Address:	803B8F8C
 * Size:	000070
 */
void TPkEffectTane::createGlow1_(Vector3f* pos)
{
	P2ASSERTLINE(1202, pos);
	m_glow.m_position = pos;
	m_glow.create(nullptr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TPkEffectTane::killGlow1_()
{
	m_glow.fade();
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B8FFC
 * Size:	000004
 */
void TFueactCircle::executeAfter(JPABaseEmitter*) { }

/*
 * --INFO--
 * Address:	803B9000
 * Size:	00002C
 */
void TCursor::forceKill() { m_oneEmitter.forceKill(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
TTestYodareGen::~TTestYodareGen()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TTestYodareGen::forceKill()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TTestYodareGen::fade()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
TTestYodareHit::~TTestYodareHit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
TParticleCallBack_Yodare::~TParticleCallBack_Yodare()
{
	// UNUSED FUNCTION
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
//@4 @efx::TTestYodareHit::~TTestYodareHit(void)
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
//@4 @efx::TTestYodareGen::~TTestYodareGen(void)
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	803B902C
 * Size:	000008
 */
//@4 @efx::TPkNageBlur::~TPkNageBlur(void)
//{
/*
addi     r3, r3, -4
b        __dt__Q23efx11TPkNageBlurFv
*/
//}

/*
 * --INFO--
 * Address:	803B9034
 * Size:	000008
 */
// void @4 @TFueactCircle::executeAfter(JPABaseEmitter*)
//{
/*
addi     r3, r3, -4
b        executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter
*/
//}

/*
 * --INFO--
 * Address:	803B903C
 * Size:	000008
 */
// void @4 @TFueactCircle::execute(JPABaseEmitter*)
//{
/*
addi     r3, r3, -4
b        execute__Q23efx13TFueactCircleFP14JPABaseEmitter
*/
//}

/*
 * --INFO--
 * Address:	803B9044
 * Size:	000008
 */
//@4 @TFueactCircle::~TFueactCircle()
//{
/*
addi     r3, r3, -4
b        __dt__Q23efx13TFueactCircleFv
*/
//}

/*
 * --INFO--
 * Address:	803B904C
 * Size:	000008
 */
// void @8 @TFueactCircle::execute(JPABaseEmitter*, JPABaseParticle*)
//{
/*
addi     r3, r3, -8
b        execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle
*/
//}

/*
 * --INFO--
 * Address:	803B9054
 * Size:	000008
 */
//@8 @TFueactCircle::~TFueactCircle(void)
//{
/*
addi     r3, r3, -8
b        __dt__Q23efx13TFueactCircleFv
*/
//}

/*
 * --INFO--
 * Address:	803B905C
 * Size:	000008
 */
//@4 @efx::TFueactBiriBase::~TFueactBiriBase(void)
//{
/*
addi     r3, r3, -4
b        __dt__Q23efx15TFueactBiriBaseFv
*/
//}
