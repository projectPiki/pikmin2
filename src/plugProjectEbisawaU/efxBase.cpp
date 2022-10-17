#include "JSystem/JGeometry.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAMath.h"
#include "JSystem/JUT/JUTException.h"
#include "ParticleMgr.h"
#include "efx/Arg.h"
#include "efx/Context.h"
#include "efx/TBase.h"
#include "efx/TCallBack_StaticClipping.h"
#include "efx/TChaseMtx.h"
#include "efx/TChasePos.h"
#include "efx/TForever.h"
#include "efx/TOneEmitter.h"
#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TSyncGroup.h"
#include "sysMath.h"
#include "types.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_efxBase_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495880
    lbl_80495880:
        .4byte 0x65667842
        .4byte 0x6173652E
        .4byte 0x63707000
    .global lbl_8049588C
    lbl_8049588C:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx23TChasePosPosLocalYScale
    __vt__Q23efx23TChasePosPosLocalYScale:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx23TChasePosPosLocalYScaleFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx23TChasePosPosLocalYScaleFv
    .global __vt__Q23efx23TChasePosPosLocalZScale
    __vt__Q23efx23TChasePosPosLocalZScale:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx23TChasePosPosLocalZScaleFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx23TChasePosPosLocalZScaleFv
    .global __vt__Q23efx12TChasePosPos
    __vt__Q23efx12TChasePosPos:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx12TChasePosPosFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx12TChasePosPosFv
    .global __vt__Q23efx10TChaseMtxT
    __vt__Q23efx10TChaseMtxT:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TChaseMtxTFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx10TChaseMtxTFv
    .global __vt__Q23efx9TChaseMtx
    __vt__Q23efx9TChaseMtx:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx9TChaseMtxFv"
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
        .4byte __dt__Q23efx9TChaseMtxFv
    .global __vt__Q23efx13TChasePosYRot
    __vt__Q23efx13TChasePosYRot:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TChasePosYRotFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx13TChasePosYRotFv .global __vt__Q23efx9TChasePos
    __vt__Q23efx9TChasePos:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx9TChasePosFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx9TChasePosFv
    .global __vt__Q23efx5TSync
    __vt__Q23efx5TSync:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx5TSyncFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte 0
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx5TSyncFv
    .global __vt__Q23efx11TSimpleMtx4
    __vt__Q23efx11TSimpleMtx4:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx4FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple4Fv
        .4byte fade__Q23efx8TSimple4Fv
    .global __vt__Q23efx11TSimpleMtx3
    __vt__Q23efx11TSimpleMtx3:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global __vt__Q23efx11TSimpleMtx2
    __vt__Q23efx11TSimpleMtx2:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx11TSimpleMtx1
    __vt__Q23efx11TSimpleMtx1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx8TSimple5
    __vt__Q23efx8TSimple5:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple5FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple5Fv
        .4byte fade__Q23efx8TSimple5Fv
    .global __vt__Q23efx8TSimple4
    __vt__Q23efx8TSimple4:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple4FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple4Fv
        .4byte fade__Q23efx8TSimple4Fv
    .global __vt__Q23efx8TSimple3
    __vt__Q23efx8TSimple3:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global __vt__Q23efx8TSimple2
    __vt__Q23efx8TSimple2:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx8TSimple1
    __vt__Q23efx8TSimple1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx17TOneEmitterSimple
    __vt__Q23efx17TOneEmitterSimple:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
        .4byte forceKill__Q23efx17TOneEmitterSimpleFv
        .4byte fade__Q23efx17TOneEmitterSimpleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx17TOneEmitterSimpleFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
        .4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
        .4byte __dt__Q23efx17TOneEmitterSimpleFv
    .global __vt__Q23efx19TOneEmitterChasePos
    __vt__Q23efx19TOneEmitterChasePos:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx19TOneEmitterChasePosFPQ23efx3Arg
        .4byte forceKill__Q23efx19TOneEmitterChasePosFv
        .4byte fade__Q23efx19TOneEmitterChasePosFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx19TOneEmitterChasePosFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx19TOneEmitterChasePosFv
        .4byte endDemoDrawOn__Q23efx19TOneEmitterChasePosFv
        .4byte __dt__Q23efx19TOneEmitterChasePosFv
    .global __vt__Q23efx11TOneEmitter
    __vt__Q23efx11TOneEmitter:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TOneEmitterFPQ23efx3Arg
        .4byte forceKill__Q23efx11TOneEmitterFv
        .4byte fade__Q23efx11TOneEmitterFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TOneEmitterFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx11TOneEmitterFv
        .4byte endDemoDrawOn__Q23efx11TOneEmitterFv
        .4byte __dt__Q23efx11TOneEmitterFv
    .global __vt__Q23efx24TCallBack_StaticClipping
    __vt__Q23efx24TCallBack_StaticClipping:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23efx24TCallBack_StaticClippingFv
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx24TCallBack_StaticClippingFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter

    .section .sbss # 0x80514D80 - 0x80516360
    .global mCallBack_StaticClipping__Q23efx5TBase
    mCallBack_StaticClipping__Q23efx5TBase:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F610
    lbl_8051F610:
        .float 0.5
    .global lbl_8051F614
    lbl_8051F614:
        .4byte 0x00000000
    .global lbl_8051F618
    lbl_8051F618:
        .float 1.0
*/

efx::TCallBack_StaticClipping efx::TBase::mCallBack_StaticClipping;

namespace efx {

/*
 * --INFO--
 * Address:	803AE8B0
 * Size:	00003C
 */
void TCallBack_StaticClipping::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	particleMgr->cullByResFlg(emitter);
}

/*
 * --INFO--
 * Address:	803AE8EC
 * Size:	000048
 */
void TOneEmitter::add(Context* context)
{
	context->del();
	m_context.add(context);
}

/*
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void TOneEmitter::del(efx::Context* context)
{
	// UNUSED FUNCTION
	context->del();
}

/*
 * executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter
 * --INFO--
 * Address:	803AE934
 * Size:	0000C0
 */
void TOneEmitter::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	for (Context* context = (Context*)m_context.m_child; context != nullptr; context = (Context*)context->m_next) {
		Vector3f v1 = context->_18;
		if (particleMgr->cullByResFlg(v1, m_effectID) == false) {
			int createCount = emitter->getCurrentCreateNumber();
			for (int i = 0; i < createCount; i++) {
				JPABaseParticle* particle = emitter->createParticle();
				if (particle) {
					// JGeometry::TVec3f v2;
					// v2.x = v1.x;
					// v2.z = v1.z;
					// v2.y = v1.y;
					// particle->_18 = v2;
					// particle->_18 = v1.toTVec();
					// particle->_18 = *reinterpret_cast<JGeometry::TVec3f*>(&v1);
					// particle->_18.x = v1.x;
					// particle->_18.y = v1.y;
					// particle->_18.z = v1.z;
					// JGeometry::TVec3f v2 = v1.toTVec();
					// particle->_18 = v2;
					v1.setTVec(particle->_18);
				}
			}
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	mr       r28, r4
	lwz      r3, particleMgr@sda21(r13)
	bl       setGlobalColor__11ParticleMgrFP14JPABaseEmitter
	lwz      r30, 0x20(r27)
	b        lbl_803AE9D8

lbl_803AE95C:
	lfs      f0, 0x18(r30)
	addi     r4, r1, 8
	lwz      r3, particleMgr@sda21(r13)
	stfs     f0, 8(r1)
	lfs      f0, 0x1c(r30)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x20(r30)
	stfs     f0, 0x10(r1)
	lhz      r5, 0xc(r27)
	bl       "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AE9D4
	mr       r3, r28
	bl       getCurrentCreateNumber__14JPABaseEmitterCFv
	mr       r31, r3
	li       r29, 0
	b        lbl_803AE9CC

lbl_803AE9A0:
	mr       r3, r28
	bl       createParticle__14JPABaseEmitterFv
	cmplwi   r3, 0
	beq      lbl_803AE9C8
	lfs      f2, 0x10(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f2, 0x20(r3)

lbl_803AE9C8:
	addi     r29, r29, 1

lbl_803AE9CC:
	cmpw     r29, r31
	blt      lbl_803AE9A0

lbl_803AE9D4:
	lwz      r30, 4(r30)

lbl_803AE9D8:
	cmplwi   r30, 0
	bne      lbl_803AE95C
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * create__Q23efx11TOneEmitterFPQ23efx3Arg
 * --INFO--
 * Address:	803AE9F4
 * Size:	0000A8
 */
bool TOneEmitter::create(efx::Arg*)
{
	if (m_emitter) {
		return false;
	}
	m_emitter = particleMgr->create(m_effectID, Vector3f::zero, 0);
	if (m_emitter) {
		m_emitter->_F4 |= 0x40;
		m_emitter->_F4 |= 0x01;
		m_emitter->m_emitterCallback = this;
	}
	return (m_emitter != nullptr);
}

/*
 * fade__Q23efx11TOneEmitterFv
 * --INFO--
 * Address:	803AEA9C
 * Size:	000058
 */
void TOneEmitter::fade()
{
	m_context.clearRelations();
	if (m_emitter) {
		particleMgr->fade(m_emitter);
		m_emitter = nullptr;
	}
}

/*
 * forceKill__Q23efx11TOneEmitterFv
 * --INFO--
 * Address:	803AEAF4
 * Size:	000058
 */
void TOneEmitter::forceKill()
{
	m_context.clearRelations();
	if (m_emitter) {
		particleMgr->forceKill(m_emitter);
		m_emitter = nullptr;
	}
}

/*
 * add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
 * --INFO--
 * Address:	803AEB4C
 * Size:	000048
 */
void TOneEmitterChasePos::add(efx::ContextChasePos* context)
{
	context->del();
	m_context.add(context);
}

/*
 * del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos
 * --INFO--
 * Address:	803AEB94
 * Size:	000024
 */
void TOneEmitterChasePos::del(efx::ContextChasePos* context) { context->del(); }

/*
 * create__Q23efx19TOneEmitterChasePosFPQ23efx3Arg
 * --INFO--
 * Address:	803AEBB8
 * Size:	0000A8
 */
bool TOneEmitterChasePos::create(efx::Arg* arg)
{
	if (m_emitter) {
		return false;
	}
	m_emitter = particleMgr->create(m_effectID, Vector3f::zero, 0);
	if (m_emitter) {
		m_emitter->_F4 |= 0x40;
		m_emitter->_F4 |= 0x01;
		m_emitter->m_emitterCallback = this;
	}
	return (m_emitter != nullptr);
}

/*
 * executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter
 * --INFO--
 * Address:	803AEC60
 * Size:	0000AC
 */
void TOneEmitterChasePos::executeAfter(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	lwz      r3, particleMgr@sda21(r13)
	bl       setGlobalColor__11ParticleMgrFP14JPABaseEmitter
	lwz      r30, 0x18(r26)
	b        lbl_803AECF0

lbl_803AEC88:
	lwz      r29, 0x18(r30)
	lwz      r3, particleMgr@sda21(r13)
	lhz      r5, 0x28(r26)
	mr       r4, r29
	bl       "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AECEC
	mr       r3, r27
	bl       getCurrentCreateNumber__14JPABaseEmitterCFv
	mr       r31, r3
	li       r28, 0
	b        lbl_803AECE4

lbl_803AECB8:
	mr       r3, r27
	bl       createParticle__14JPABaseEmitterFv
	cmplwi   r3, 0
	beq      lbl_803AECE0
	lfs      f2, 8(r29)
	lfs      f1, 4(r29)
	lfs      f0, 0(r29)
	stfs     f0, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f2, 0x20(r3)

lbl_803AECE0:
	addi     r28, r28, 1

lbl_803AECE4:
	cmpw     r28, r31
	blt      lbl_803AECB8

lbl_803AECEC:
	lwz      r30, 4(r30)

lbl_803AECF0:
	cmplwi   r30, 0
	bne      lbl_803AEC88
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * fade__Q23efx19TOneEmitterChasePosFv
 * --INFO--
 * Address:	803AED0C
 * Size:	000058
 */
void TOneEmitterChasePos::fade()
{
	m_context.clearRelations();
	if (m_emitter) {
		particleMgr->fade(m_emitter);
		m_emitter = nullptr;
	}
}

/*
 * forceKill__Q23efx19TOneEmitterChasePosFv
 * --INFO--
 * Address:	803AED64
 * Size:	000058
 */
void TOneEmitterChasePos::forceKill()
{
	m_context.clearRelations();
	if (m_emitter) {
		particleMgr->forceKill(m_emitter);
		m_emitter = nullptr;
	}
}

/*
 * create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
 * --INFO--
 * Address:	803AEDBC
 * Size:	0000BC
 */
bool TOneEmitterSimple::create(efx::Arg* arg)
{
	_14 = 0;
	if (m_emitter) {
		return false;
	}
	m_emitter = particleMgr->create(m_effectID, Vector3f::zero, 0);
	if (m_emitter) {
		m_emitter->_F4 |= 0x40;
		m_emitter->_F4 |= 0x01;
		m_emitter->_24               = 0;
		m_emitter->m_emitterCallback = this;
	}
	return (m_emitter != nullptr);
}

/*
 * executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
 * --INFO--
 * Address:	803AEE78
 * Size:	00010C
 */
void TOneEmitterSimple::executeAfter(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r26, 0x28(r1)
	mr       r26, r3
	mr       r27, r4
	lwz      r3, particleMgr@sda21(r13)
	bl       setGlobalColor__11ParticleMgrFP14JPABaseEmitter
	lwz      r3, 0x14(r26)
	lwz      r0, 0x18(r26)
	cmpw     r3, r0
	ble      lbl_803AEEC4
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x1bf
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AEEC4:
	li       r30, 0
	li       r31, 0
	b        lbl_803AEF5C

lbl_803AEED0:
	lwz      r0, 0x10(r26)
	addi     r4, r1, 8
	lwz      r3, particleMgr@sda21(r13)
	add      r5, r0, r31
	lfs      f0, 0(r5)
	stfs     f0, 8(r1)
	lfs      f0, 4(r5)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r5)
	stfs     f0, 0x10(r1)
	lhz      r5, 0xc(r26)
	bl       "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AEF54
	lfs      f0, 0x28(r27)
	li       r28, 0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r29, 0x1c(r1)
	b        lbl_803AEF4C

lbl_803AEF20:
	mr       r3, r27
	bl       createParticle__14JPABaseEmitterFv
	cmplwi   r3, 0
	beq      lbl_803AEF48
	lfs      f2, 0x10(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f2, 0x20(r3)

lbl_803AEF48:
	addi     r28, r28, 1

lbl_803AEF4C:
	cmpw     r28, r29
	blt      lbl_803AEF20

lbl_803AEF54:
	addi     r31, r31, 0xc
	addi     r30, r30, 1

lbl_803AEF5C:
	lwz      r0, 0x14(r26)
	cmpw     r30, r0
	blt      lbl_803AEED0
	li       r0, 0
	stw      r0, 0x14(r26)
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * create__Q23efx8TSimple1FPQ23efx3Arg
 * --INFO--
 * Address:	803AEF84
 * Size:	000090
 */
bool TSimple1::create(efx::Arg* arg)
{
	P2ASSERTLINE(558, arg != nullptr);
	for (int i = 0; i < 1; i++) {
		m_emitters[i] = particleMgr->create(m_effectIDs[i], arg->m_position, 0);
		if (m_emitters[i]) {
			m_emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/*
 * create__Q23efx8TSimple2FPQ23efx3Arg
 * --INFO--
 * Address:	803AF014
 * Size:	0000A8
 */
bool TSimple2::create(efx::Arg* arg)
{
	P2ASSERTLINE(574, arg != nullptr);
	for (int i = 0; i < 2; i++) {
		m_emitters[i] = particleMgr->create(m_effectIDs[i], arg->m_position, 0);
		if (m_emitters[i]) {
			m_emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/*
 * create__Q23efx8TSimple3FPQ23efx3Arg
 * --INFO--
 * Address:	803AF0BC
 * Size:	0000A8
 */
bool TSimple3::create(efx::Arg* arg)
{
	P2ASSERTLINE(591, arg != nullptr);
	// return TBase::create(m_emitters, arg->m_position, m_effectIDs, 3);
	// return TBase::create(m_emitters, m_effectIDs, arg->m_position, 3);
	// return TBase::create(m_emitters, 3, m_effectIDs, arg->m_position);
	// return TBase::create(m_emitters, 3, arg, m_effectIDs);
	// return TBase::create(arg, m_emitters, m_effectIDs, 3);
	// TBase::create(3, m_emitters, arg->m_position, m_effectIDs);
	// return TBase::create(3, arg->m_position, m_effectIDs, m_emitters);
	// return createEmitters(arg, m_emitters, m_effectIDs, 3);
	for (int i = 0; i < 3; i++) {
		m_emitters[i] = particleMgr->create(m_effectIDs[i], arg->m_position, 0);
		if (m_emitters[i]) {
			m_emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/*
 * create__Q23efx8TSimple4FPQ23efx3Arg
 * --INFO--
 * Address:	803AF164
 * Size:	0000A8
 */
bool TSimple4::create(efx::Arg* arg)
{
	P2ASSERTLINE(608, arg != nullptr);
	// return _create(*arg);
	for (int i = 0; i < 4; i++) {
		m_emitters[i] = particleMgr->create(m_effectIDs[i], arg->m_position, 0);
		if (m_emitters[i]) {
			m_emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/*
 * create__Q23efx8TSimple5FPQ23efx3Arg
 * --INFO--
 * Address:	803AF20C
 * Size:	0000A8
 */
bool TSimple5::create(efx::Arg* arg)
{
	P2ASSERTLINE(625, arg != nullptr);
	for (int i = 0; i < 5; i++) {
		m_emitters[i] = particleMgr->create(m_effectIDs[i], arg->m_position, 0);
		if (m_emitters[i]) {
			m_emitters[i]->m_emitterCallback = &mCallBack_StaticClipping;
		} else {
			return false;
		}
	}
	return true;
}

/*
 * TODO: This and other TSimpleMtx* creates use a fabricated inlined method.
 *       Said method is incompatible with their respective parent classes' create().
 * create__Q23efx11TSimpleMtx1FPQ23efx3Arg
 * --INFO--
 * Address:	803AF2B4
 * Size:	0000E4
 */
bool TSimpleMtx1::create(efx::Arg* arg)
{
	// TODO: The above loops might be an inlined func.
	// If so, this might call that in like an if condition
	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "zero__10Vector3<f>"@ha
	lis      r5, __vt__Q23efx3Arg@ha
	stw      r0, 0x24(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	addi     r5, r1, 0xc
	li       r6, 0
	stw      r31, 0x1c(r1)
	addi     r31, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
	stw      r30, 0x18(r1)
	mr       r30, r3
	lfsu     f2, "zero__10Vector3<f>"@l(r4)
	stw      r0, 8(r1)
	lfs      f1, 4(r4)
	lfs      f0, 8(r4)
	stfs     f2, 0xc(r1)
	lwz      r3, particleMgr@sda21(r13)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	lhz      r4, 4(r30)
	bl       "create__11ParticleMgrFUsR10Vector3<f>Uc"
	stw      r3, 8(r30)
	lwz      r3, 8(r30)
	cmplwi   r3, 0
	beq      lbl_803AF324
	stw      r31, 0xec(r3)
	b        lbl_803AF32C

lbl_803AF324:
	li       r0, 0
	b        lbl_803AF330

lbl_803AF32C:
	li       r0, 1

lbl_803AF330:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803AF37C
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_803AF360
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x286
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AF360:
	lwz      r5, 8(r30)
	lwz      r3, 0xc(r30)
	addi     r4, r5, 0x68
	addi     r5, r5, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	li       r3, 1
	b        lbl_803AF380

lbl_803AF37C:
	li       r3, 0

lbl_803AF380:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * create__Q23efx11TSimpleMtx2FPQ23efx3Arg
 * --INFO--
 * Address:	803AF398
 * Size:	00011C
 */
bool TSimpleMtx2::create(efx::Arg*)
{
	return false;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "zero__10Vector3<f>"@ha
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r31, r3
	addi     r3, r4, "zero__10Vector3<f>"@l
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r26, r1, 0xc
	mr       r28, r31
	mr       r27, r31
	li       r29, 0
	addi     r30, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
	lfs      f2, 0(r3)
	lfs      f1, 4(r3)
	lfs      f0, 8(r3)
	stw      r0, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)

lbl_803AF3EC:
	lwz      r3, particleMgr@sda21(r13)
	mr       r5, r26
	lhz      r4, 4(r28)
	li       r6, 0
	bl       "create__11ParticleMgrFUsR10Vector3<f>Uc"
	stw      r3, 8(r27)
	lwz      r3, 8(r27)
	cmplwi   r3, 0
	beq      lbl_803AF418
	stw      r30, 0xec(r3)
	b        lbl_803AF420

lbl_803AF418:
	li       r0, 0
	b        lbl_803AF438

lbl_803AF420:
	addi     r29, r29, 1
	addi     r27, r27, 4
	cmpwi    r29, 2
	addi     r28, r28, 2
	blt      lbl_803AF3EC
	li       r0, 1

lbl_803AF438:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803AF49C
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	bne      lbl_803AF468
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x294
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AF468:
	li       r26, 0
	mr       r27, r31

lbl_803AF470:
	lwz      r5, 8(r27)
	lwz      r3, 0x10(r31)
	addi     r4, r5, 0x68
	addi     r5, r5, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	addi     r26, r26, 1
	addi     r27, r27, 4
	cmpwi    r26, 2
	blt      lbl_803AF470
	li       r3, 1
	b        lbl_803AF4A0

lbl_803AF49C:
	li       r3, 0

lbl_803AF4A0:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * create__Q23efx11TSimpleMtx3FPQ23efx3Arg
 * --INFO--
 * Address:	803AF4B4
 * Size:	00011C
 */
bool TSimpleMtx3::create(efx::Arg*)
{
	return false;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "zero__10Vector3<f>"@ha
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r31, r3
	addi     r3, r4, "zero__10Vector3<f>"@l
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r26, r1, 0xc
	mr       r28, r31
	mr       r27, r31
	li       r29, 0
	addi     r30, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
	lfs      f2, 0(r3)
	lfs      f1, 4(r3)
	lfs      f0, 8(r3)
	stw      r0, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)

lbl_803AF508:
	lwz      r3, particleMgr@sda21(r13)
	mr       r5, r26
	lhz      r4, 4(r28)
	li       r6, 0
	bl       "create__11ParticleMgrFUsR10Vector3<f>Uc"
	stw      r3, 0xc(r27)
	lwz      r3, 0xc(r27)
	cmplwi   r3, 0
	beq      lbl_803AF534
	stw      r30, 0xec(r3)
	b        lbl_803AF53C

lbl_803AF534:
	li       r0, 0
	b        lbl_803AF554

lbl_803AF53C:
	addi     r29, r29, 1
	addi     r27, r27, 4
	cmpwi    r29, 3
	addi     r28, r28, 2
	blt      lbl_803AF508
	li       r0, 1

lbl_803AF554:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803AF5B8
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	bne      lbl_803AF584
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x2a2
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AF584:
	li       r26, 0
	mr       r27, r31

lbl_803AF58C:
	lwz      r5, 0xc(r27)
	lwz      r3, 0x18(r31)
	addi     r4, r5, 0x68
	addi     r5, r5, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	addi     r26, r26, 1
	addi     r27, r27, 4
	cmpwi    r26, 3
	blt      lbl_803AF58C
	li       r3, 1
	b        lbl_803AF5BC

lbl_803AF5B8:
	li       r3, 0

lbl_803AF5BC:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * create__Q23efx11TSimpleMtx4FPQ23efx3Arg
 * --INFO--
 * Address:	803AF5D0
 * Size:	00011C
 */
bool TSimpleMtx4::create(efx::Arg* arg)
{
	// bool result = true;
	// Vector3f position = Vector3f::zero;
	// Arg parentArg(&position);
	Arg parentArg(Vector3f::zero);
	if (_create(parentArg)) {
		P2ASSERTLINE(688, m_mtx != nullptr);
		for (int i = 0; i < 4; i++) {
			JPASetRMtxTVecfromMtx(m_mtx->m_matrix.mtxView, m_emitters[i]->_68, &m_emitters[i]->_A4);
		}
		return true;
	} else {
		return false;
	}
}

/*
 * create__Q23efx5TSyncFPQ23efx3Arg
 * --INFO--
 * Address:	803AF6EC
 * Size:	0000DC
 */
bool TSync::create(efx::Arg* arg)
{
	if (m_emitter) {
		return false;
	}
	Vector3f position;
	if (arg) {
		position = arg->m_position;
	} else {
		position = Vector3f::zero;
	}
	m_emitter = particleMgr->create(m_effectID, position, 0);
	if (m_emitter) {
		m_emitter->m_emitterCallback = this;
		m_emitter->_F4 |= 0x40;
	} else {
		return false;
	}
	m_flags = 0;
	return true;
}

/*
 * execute__Q23efx5TSyncFP14JPABaseEmitter
 * --INFO--
 * Address:	803AF7C8
 * Size:	00006C
 */
void TSync::execute(JPABaseEmitter* emitter)
{
	bool check = false;
	// TODO: This "check" is probably an inlined function or macro...
	if ((emitter->_F4 & 8) != 0 && (emitter->_D0 + emitter->_DC == 0)) {
		check = true;
	}
	if (check) {
		fade();
	} else {
		doExecuteEmitterOperation(emitter);
	}
}

/*
 * executeAfter__Q23efx5TSyncFP14JPABaseEmitter
 * --INFO--
 * Address:	803AF834
 * Size:	000090
 */
void TSync::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	if (particleMgr->cullByResFlg(emitter) == 0) {
		if (m_flags & 1) {
			emitter->_F4 |= 4;
		} else {
			emitter->_F4 &= ~4;
		}
	}
	doExecuteAfter(emitter);
}

/*
 * forceKill__Q23efx5TSyncFv
 * --INFO--
 * Address:	803AF8C4
 * Size:	00003C
 */
void TSync::forceKill(void)
{
	particleMgr->forceKill(m_emitter);
	m_emitter = nullptr;
}

/*
 * fade__Q23efx5TSyncFv
 * --INFO--
 * Address:	803AF900
 * Size:	000070
 */
void TSync::fade(void)
{
	if (m_emitter) {
		if (m_flags & 1) {
			forceKill();
		} else {
			m_emitter->m_emitterCallback = &mCallBack_StaticClipping;
			particleMgr->fade(m_emitter);
			m_emitter = nullptr;
		}
	}
}

/*
 * doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
 * --INFO--
 * Address:	803AF970
 * Size:	000078
 */
void TChasePos::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(785, m_position != nullptr);
	Vector3f* position = m_position;
	emitter->_A4.x     = position->x;
	emitter->_A4.y     = position->y;
	emitter->_A4.z     = position->z;
}

/*
 * doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
 * --INFO--
 * Address:	803AF9E8
 * Size:	0000D8
 */
void TChasePosYRot::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(794, m_position != nullptr);
	P2ASSERTLINE(795, m_rotation != nullptr);
	Matrixf mtx;
	PSMTXRotRad(mtx.m_matrix.mtxView, 0x79, *m_rotation);
	Vector3f* translation = m_position;
	PSMTXRotRad(mtx.m_matrix.mtxView, 0x79, *m_rotation);
	mtx.setTranslation(*translation);
	JPASetRMtxTVecfromMtx(mtx.m_matrix.mtxView, emitter->_68, &emitter->_A4);
}

/*
 * doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
 * --INFO--
 * Address:	803AFAC0
 * Size:	00006C
 */
void TChaseMtx::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(809, m_mtx != nullptr);
	JPASetRMtxTVecfromMtx(m_mtx->m_matrix.mtxView, emitter->_68, &emitter->_A4);
}

/*
 * doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
 * --INFO--
 * Address:	803AFB2C
 * Size:	000078
 */
void TChaseMtxT::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(818, m_mtx != nullptr);
	Vector3f translation;
	m_mtx->getTranslation(translation);
	emitter->_A4.x = translation.x;
	emitter->_A4.y = translation.y;
	emitter->_A4.z = translation.z;
}

/*
 * doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
 * --INFO--
 * Address:	803AFBA4
 * Size:	0000DC
 */
void TChasePosPos::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	stw      r30, 0x58(r1)
	mr       r30, r3
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_803AFBE8
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x33d
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AFBE8:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803AFC10
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x33e
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AFC10:
	lwz      r6, 0x10(r30)
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	lfs      f0, 0(r6)
	stfs     f0, 0x14(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x18(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x1c(r1)
	lwz      r6, 0x14(r30)
	lfs      f0, 0(r6)
	stfs     f0, 8(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x10(r1)
	bl       "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
	addi     r3, r1, 0x20
	addi     r4, r31, 0x68
	addi     r5, r31, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * See Sys::Tube::getAxisVector. Also look at e.g. ec0000f2 ec2100f2 ec4200f2 in general.
 * --INFO--
 * Address:	803AFC80
 * Size:	0000F8
 */
void makeMtxZAxisAlongPosPos(float (*mtx)[4], Vector3f& p2, Vector3f& p3)
{
	float distance = qdist3(p2.x, p2.y, p2.z, p3.x, p3.y, p3.z);
	if (0.0f < distance) {
		distance = 1.0f / distance;
	}
	/*
	lfs      f0, 4(r4)
	lfs      f2, 4(r5)
	lfs      f4, 8(r4)
	fsubs    f1, f2, f0
	lfs      f7, 8(r5)
	lfs      f8, 0(r4)
	fadds    f6, f0, f2
	fsubs    f2, f7, f4
	lfs      f9, 0(r5)
	fsubs    f0, f9, f8
	lfs      f5, lbl_8051F610@sda21(r2)
	fadds    f7, f4, f7
	lfs      f3, lbl_8051F614@sda21(r2)
	fmuls    f10, f1, f1
	fmuls    f11, f2, f2
	fadds    f8, f8, f9
	fmadds   f4, f0, f0, f10
	fmuls    f7, f7, f5
	fmuls    f6, f6, f5
	fadds    f4, f11, f4
	fmuls    f11, f8, f5
	fcmpo    cr0, f4, f3
	ble      lbl_803AFCEC
	ble      lbl_803AFCF0
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_803AFCF0

lbl_803AFCEC:
	fmr      f4, f3

lbl_803AFCF0:
	lfs      f3, lbl_8051F614@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_803AFD10
	lfs      f3, lbl_8051F618@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_803AFD10:
	lfs      f4, lbl_8051F614@sda21(r2)
	lfs      f5, lbl_8051F618@sda21(r2)
	fmuls    f3, f4, f2
	fmuls    f10, f4, f1
	fmsubs   f9, f4, f0, f3
	fmsubs   f8, f5, f2, f10
	fnmsubs  f10, f5, f0, f10
	fmuls    f5, f2, f9
	fmuls    f3, f1, f8
	stfs     f8, 0(r3)
	fmuls    f4, f0, f10
	fmsubs   f5, f1, f10, f5
	fmsubs   f3, f0, f9, f3
	fmsubs   f4, f2, f8, f4
	stfs     f5, 4(r3)
	stfs     f0, 8(r3)
	stfs     f11, 0xc(r3)
	stfs     f9, 0x10(r3)
	stfs     f4, 0x14(r3)
	stfs     f1, 0x18(r3)
	stfs     f6, 0x1c(r3)
	stfs     f10, 0x20(r3)
	stfs     f3, 0x24(r3)
	stfs     f2, 0x28(r3)
	stfs     f7, 0x2c(r3)
	blr
	*/
}

/*
 * doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter
 * --INFO--
 * Address:	803AFD78
 * Size:	00014C
 */
void TChasePosPosLocalZScale::doExecuteEmitterOperation(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_803AFDC4
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x350
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AFDC4:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803AFDEC
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x351
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AFDEC:
	lwz      r6, 0x10(r30)
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	lfs      f0, 0(r6)
	stfs     f0, 0x14(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x18(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x1c(r1)
	lwz      r6, 0x14(r30)
	lfs      f0, 0(r6)
	stfs     f0, 8(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x10(r1)
	bl       "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
	lfs      f1, 0xc(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 0x10(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0x14(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_8051F614@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_803AFE84
	ble      lbl_803AFE88
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_803AFE88

lbl_803AFE84:
	fmr      f31, f0

lbl_803AFE88:
	addi     r3, r1, 0x20
	addi     r4, r31, 0x68
	addi     r5, r31, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	lfs      f0, 0x18(r30)
	fdivs    f2, f31, f0
	stfs     f2, 8(r31)
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter
 * --INFO--
 * Address:	803AFEC4
 * Size:	00014C
 */
void TChasePosPosLocalYScale::doExecuteEmitterOperation(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_803AFF10
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x370
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AFF10:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803AFF38
	lis      r3, lbl_80495880@ha
	lis      r5, lbl_8049588C@ha
	addi     r3, r3, lbl_80495880@l
	li       r4, 0x371
	addi     r5, r5, lbl_8049588C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AFF38:
	lwz      r6, 0x10(r30)
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	lfs      f0, 0(r6)
	stfs     f0, 0x14(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x18(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x1c(r1)
	lwz      r6, 0x14(r30)
	lfs      f0, 0(r6)
	stfs     f0, 8(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x10(r1)
	bl       "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
	lfs      f1, 0xc(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 0x10(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0x14(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_8051F614@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_803AFFD0
	ble      lbl_803AFFD4
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_803AFFD4

lbl_803AFFD0:
	fmr      f31, f0

lbl_803AFFD4:
	addi     r3, r1, 0x20
	addi     r4, r31, 0x68
	addi     r5, r31, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	lfs      f0, 0x18(r30)
	fdivs    f2, f31, f0
	stfs     f2, 4(r31)
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * __ct__Q23efx9TForever2FUsUs
 * --INFO--
 * Address:	803B0010
 * Size:	000098
 */
TForever2::TForever2(unsigned short effectID1, unsigned short effectID2)
    : TSyncGroup2<TForever>()
{
	m_items[0].m_effectID = effectID1;
	m_items[1].m_effectID = effectID2;
}

/*
 * @generatedAndInlined{__dt__Q23efx28TSyncGroup2<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup2<TForever>::~TSyncGroup2()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q23efx8TForeverFv
 * --INFO--
 * Address:	803B00A8
 * Size:	000058
 */
TForever::TForever()
    : TSync()
{
}

/*
 * __ct__Q23efx9TForever3FUsUsUs
 * --INFO--
 * Address:	803B0100
 * Size:	0000A8
 */
TForever3::TForever3(unsigned short effectID1, unsigned short effectID2, unsigned short effectID3)
    : TSyncGroup3<TForever>()
{
	m_items[0].m_effectID = effectID1;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_effectID = effectID3;
}

/*
 * @generatedAndInlined{__dt__Q23efx28TSyncGroup3<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup3<TForever>::~TSyncGroup3()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q23efx9TForever4FUsUsUsUs
 * --INFO--
 * Address:	803B01A8
 * Size:	000098
 */
TForever4::TForever4(unsigned short effectID1, unsigned short effectID2, unsigned short effectID3, unsigned short effectID4)
    : TSyncGroup4<TForever>()
{
	m_items[0].m_effectID = effectID1;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_effectID = effectID3;
	m_items[3].m_effectID = effectID4;
}

/*
 * @generatedAndInlined{__dt__Q23efx28TSyncGroup4<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup4<TForever>::~TSyncGroup4()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q23efx10TChasePos2FP10Vector3<f>UsUs
 * --INFO--
 * Address:	803B0240
 * Size:	0000AC
 */
TChasePos2::TChasePos2(Vector3f* position, unsigned short effectID1, unsigned short effectID2)
    : TSyncGroup2<TChasePos>()
{
	m_items[0].m_position = position;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_position = position;
	m_items[1].m_effectID = effectID2;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup2<TChasePos>::~TSyncGroup2()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q23efx9TChasePosFv
 * --INFO--
 * Address:	803B02EC
 * Size:	000058
 */
TChasePos::TChasePos()
    : TSync()
{
}

/*
 * setPosptr__Q23efx10TChasePos2FP10Vector3<f>
 * --INFO--
 * Address:	803B0344
 * Size:	00000C
 */
void TChasePos2::setPosptr(Vector3f* position)
{
	m_items[0].m_position = position;
	m_items[1].m_position = position;
}

/*
 * __ct__Q23efx10TChasePos3FP10Vector3<f>UsUsUs
 * --INFO--
 * Address:	803B0350
 * Size:	0000A0
 */
TChasePos3::TChasePos3(Vector3f* position, unsigned short effectID1, unsigned short effectID2, unsigned short effectID3)
    : TSyncGroup3<TChasePos>()
{
	m_items[0].m_position = position;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_position = position;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_position = position;
	m_items[2].m_effectID = effectID3;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup3<TChasePos>::~TSyncGroup3()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setPosptr__Q23efx10TChasePos3FP10Vector3<f>
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void TChasePos3::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	m_items[0].m_position = position;
	m_items[1].m_position = position;
	m_items[2].m_position = position;
}

/*
 * __ct__Q23efx10TChasePos4FP10Vector3<f>UsUsUsUs
 * --INFO--
 * Address:	803B03F0
 * Size:	0000AC
 */
TChasePos4::TChasePos4(Vector3f* position, unsigned short effectID1, unsigned short effectID2, unsigned short effectID3,
                       unsigned short effectID4)
    : TSyncGroup4<TChasePos>()
{
	m_items[0].m_position = position;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_position = position;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_position = position;
	m_items[2].m_effectID = effectID3;
	m_items[3].m_position = position;
	m_items[3].m_effectID = effectID4;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup4<TChasePos>::~TSyncGroup4()
// {
// 	// UNUSED FUNCTION
// }

/*
 * @matchedSize
 * setPosptr__Q23efx10TChasePos4FP10Vector3<f>
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void TChasePos4::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	m_items[0].m_position = position;
	m_items[1].m_position = position;
	m_items[2].m_position = position;
	m_items[3].m_position = position;
}

/*
 * __ct__Q23efx10TChaseMtx2FPA4_fUsUs
 * --INFO--
 * Address:	803B049C
 * Size:	0000AC
 */
TChaseMtx2::TChaseMtx2(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2)
    : TSyncGroup2<TChaseMtx>()
{
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup2<TChaseMtx>::~TSyncGroup2()
// {
// 	// UNUSED FUNCTION
// }

/*
 * @generated{__ct__Q23efx9TChaseMtxFv}
 * --INFO--
 * Address:	803B0548
 * Size:	000058
 */
// TChaseMtx::TChaseMtx(void) { }

/*
 * setMtxptr__Q23efx10TChaseMtx2FPA4_f
 * --INFO--
 * Address:	803B05A0
 * Size:	00000C
 */
void TChaseMtx2::setMtxptr(float (*mtx)[4])
{
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
}

/*
 * --INFO--
 * Address:	803B05AC
 * Size:	0000A0
 */
TChaseMtx3::TChaseMtx3(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2, unsigned short effectID3)
    : TSyncGroup3<TChaseMtx>()
{
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_mtx      = (Matrixf*)mtx;
	m_items[2].m_effectID = effectID3;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup3<TChaseMtx>::~TSyncGroup3()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setMtxptr__Q23efx10TChaseMtx3FPA4_f
 * --INFO--
 * Address:	803B064C
 * Size:	000010
 */
void TChaseMtx3::setMtxptr(float (*mtx)[4])
{
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
	m_items[2].m_mtx = (Matrixf*)mtx;
}

/*
 * --INFO--
 * Address:	803B065C
 * Size:	0000AC
 */
TChaseMtx4::TChaseMtx4(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2, unsigned short effectID3,
                       unsigned short effectID4)
    : TSyncGroup4<TChaseMtx>()
{
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_mtx      = (Matrixf*)mtx;
	m_items[2].m_effectID = effectID3;
	m_items[3].m_mtx      = (Matrixf*)mtx;
	m_items[3].m_effectID = effectID4;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup4<TChaseMtx>::~TSyncGroup4()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setMtxptr__Q23efx10TChaseMtx4FPA4_f
 * --INFO--
 * Address:	803B0708
 * Size:	000014
 */
void TChaseMtx4::setMtxptr(float (*mtx)[4])
{
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
	m_items[2].m_mtx = (Matrixf*)mtx;
	m_items[3].m_mtx = (Matrixf*)mtx;
}

/*
 * @matchedSize
 * __ct__Q23efx10TChaseMtx5FPA4_fUsUsUsUsUs
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
TChaseMtx5::TChaseMtx5(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2, unsigned short effectID3,
                       unsigned short effectID4, unsigned short effectID5)
    : TSyncGroup5<TChaseMtx>()
{
	// UNUSED FUNCTION
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_mtx      = (Matrixf*)mtx;
	m_items[2].m_effectID = effectID3;
	m_items[3].m_mtx      = (Matrixf*)mtx;
	m_items[3].m_effectID = effectID4;
	m_items[4].m_mtx      = (Matrixf*)mtx;
	m_items[4].m_effectID = effectID5;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup5<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup5<TChaseMtx>::~TSyncGroup5()
// {
// 	// UNUSED FUNCTION
// }

/*
 * @matchedSize
 * setMtxptr__Q23efx10TChaseMtx5FPA4_f
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void TChaseMtx5::setMtxptr(float (*mtx)[4])
{
	// UNUSED FUNCTION
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
	m_items[2].m_mtx = (Matrixf*)mtx;
	m_items[3].m_mtx = (Matrixf*)mtx;
	m_items[4].m_mtx = (Matrixf*)mtx;
}

/*
 * __ct__Q23efx10TChaseMtx6FPA4_fUsUsUsUsUsUs
 * --INFO--
 * Address:	803B071C
 * Size:	0000C4
 */
TChaseMtx6::TChaseMtx6(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2, unsigned short effectID3,
                       unsigned short effectID4, unsigned short effectID5, unsigned short effectID6)
    : TSyncGroup6<TChaseMtx>()
{
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_mtx      = (Matrixf*)mtx;
	m_items[2].m_effectID = effectID3;
	m_items[3].m_mtx      = (Matrixf*)mtx;
	m_items[3].m_effectID = effectID4;
	m_items[4].m_mtx      = (Matrixf*)mtx;
	m_items[4].m_effectID = effectID5;
	m_items[5].m_mtx      = (Matrixf*)mtx;
	m_items[5].m_effectID = effectID6;
}

/*
 * @generatedAndInlined{__dt__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup6<TChaseMtx>::~TSyncGroup6()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setMtxptr__Q23efx10TChaseMtx6FPA4_f
 * --INFO--
 * Address:	803B07E0
 * Size:	00001C
 */
void TChaseMtx6::setMtxptr(float (*mtx)[4])
{
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
	m_items[2].m_mtx = (Matrixf*)mtx;
	m_items[3].m_mtx = (Matrixf*)mtx;
	m_items[4].m_mtx = (Matrixf*)mtx;
	m_items[5].m_mtx = (Matrixf*)mtx;
}

/*
 * __ct__Q23efx11TChaseMtxT2FPA4_fUsUs
 * --INFO--
 * Address:	803B07FC
 * Size:	0000AC
 */
TChaseMtxT2::TChaseMtxT2(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2)
    : TSyncGroup2<TChaseMtxT>()
{
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
}

/*
 * @generatedAndInlined{__dt__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup2<TChaseMtxT>::~TSyncGroup2()
// {
// 	// UNUSED FUNCTION
// }

/*
 * @generated{__ct__Q23efx10TChaseMtxTFv}
 * --INFO--
 * Address:	803B08A8
 * Size:	000058
 */
// TChaseMtxT::TChaseMtxT() { }

/*
 * setMtxptr__Q23efx11TChaseMtxT2FPA4_f
 * --INFO--
 * Address:	803B0900
 * Size:	00000C
 */
void TChaseMtxT2::setMtxptr(float (*mtx)[4])
{
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
}

/*
 * @matchedSize
 * __ct__Q23efx11TChaseMtxT3FPA4_fUsUsUs
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
TChaseMtxT3::TChaseMtxT3(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2, unsigned short effectID3)
    : TSyncGroup3<TChaseMtxT>()
{
	// UNUSED FUNCTION
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_mtx      = (Matrixf*)mtx;
	m_items[2].m_effectID = effectID3;
}

/*
 * @generatedAndInlined{__dt__Q23efx31TSyncGroup3<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup3<TChaseMtxT>::~TSyncGroup3()
// {
// 	// UNUSED FUNCTION
// }

/*
 * @matchedSize
 * setMtxptr__Q23efx11TChaseMtxT3FPA4_f
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void TChaseMtxT3::setMtxptr(float (*mtx)[4])
{
	// UNUSED FUNCTION
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
	m_items[2].m_mtx = (Matrixf*)mtx;
}

/*
 * __ct__Q23efx11TChaseMtxT4FPA4_fUsUsUsUs
 * --INFO--
 * Address:	803B090C
 * Size:	0000AC
 */
TChaseMtxT4::TChaseMtxT4(float (*mtx)[4], unsigned short effectID1, unsigned short effectID2, unsigned short effectID3,
                         unsigned short effectID4)
    : TSyncGroup4<TChaseMtxT>()
{
	m_items[0].m_mtx      = (Matrixf*)mtx;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_mtx      = (Matrixf*)mtx;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_mtx      = (Matrixf*)mtx;
	m_items[2].m_effectID = effectID3;
	m_items[3].m_mtx      = (Matrixf*)mtx;
	m_items[3].m_effectID = effectID4;
}

/*
 * @generatedAndInlined{__dt__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup4<TChaseMtxT>::~TSyncGroup4()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setMtxptr__Q23efx11TChaseMtxT4FPA4_f
 * --INFO--
 * Address:	803B09B8
 * Size:	000014
 */
void TChaseMtxT4::setMtxptr(float (*mtx)[4])
{
	m_items[0].m_mtx = (Matrixf*)mtx;
	m_items[1].m_mtx = (Matrixf*)mtx;
	m_items[2].m_mtx = (Matrixf*)mtx;
	m_items[3].m_mtx = (Matrixf*)mtx;
}

/*
 * __ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs
 * --INFO--
 * Address:	803B09CC
 * Size:	0000A0
 */
TChasePosYRot2::TChasePosYRot2(Vector3f* p1, float* p2, unsigned short effectID1, unsigned short effectID2)
    : TSyncGroup2<TChasePosYRot>()
{
	m_items[0].m_position = p1;
	m_items[0].m_rotation = p2;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_position = p1;
	m_items[1].m_rotation = p2;
	m_items[1].m_effectID = effectID2;
}

/*
 * @generatedAndInlined{__dt__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup2<TChasePosYRot>::~TSyncGroup2()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q23efx13TChasePosYRotFv
 * --INFO--
 * Address:	803B0A6C
 * Size:	000058
 */
TChasePosYRot::TChasePosYRot()
    : TSync()
{
}

/*
 * @matchedSize
 * setPosptr__Q23efx14TChasePosYRot2FP10Vector3<f>
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void TChasePosYRot2::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	m_items[0].m_position = position;
	m_items[1].m_position = position;
}

/*
 * @matchedSize
 * setYRot__Q23efx14TChasePosYRot2FPf
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void TChasePosYRot2::setYRot(float* rotation)
{
	// UNUSED FUNCTION
	m_items[0].m_rotation = rotation;
	m_items[1].m_rotation = rotation;
}

/*
 * __ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs
 * --INFO--
 * Address:	803B0AC4
 * Size:	0000B0
 */
TChasePosYRot3::TChasePosYRot3(Vector3f* p1, float* p2, unsigned short effectID1, unsigned short effectID2, unsigned short effectID3)
    : TSyncGroup3<TChasePosYRot>()
{
	m_items[0].m_position = p1;
	m_items[0].m_rotation = p2;
	m_items[0].m_effectID = effectID1;
	m_items[1].m_position = p1;
	m_items[1].m_rotation = p2;
	m_items[1].m_effectID = effectID2;
	m_items[2].m_position = p1;
	m_items[2].m_rotation = p2;
	m_items[2].m_effectID = effectID3;
}

/*
 * @generatedAndInlined{__dt__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup3<TChasePosYRot>::~TSyncGroup3()
// {
// 	// UNUSED FUNCTION
// }

/*
 * @matchedSize
 * setPosptr__Q23efx14TChasePosYRot3FP10Vector3<f>
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void TChasePosYRot3::setPosptr(Vector3f* position)
{
	// UNUSED FUNCTION
	m_items[0].m_position = position;
	m_items[1].m_position = position;
	m_items[2].m_position = position;
}

/*
 * @matchedSize
 * setYRot__Q23efx14TChasePosYRot3FPf
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void TChasePosYRot3::setYRot(float* rotation)
{
	// UNUSED FUNCTION
	m_items[0].m_rotation = rotation;
	m_items[1].m_rotation = rotation;
	m_items[2].m_rotation = rotation;
}

/*
 * @matchedSize
 * __ct__Q23efx24TChasePosPosLocalYScale2FP10Vector3<f>P10Vector3<f>fUsUs
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
TChasePosPosLocalYScale2::TChasePosPosLocalYScale2(Vector3f* p1, Vector3f* p2, float p3, unsigned short effectID1, unsigned short effectID2)
    : TSyncGroup2<TChasePosPosLocalYScale>()
{
	// UNUSED FUNCTION
	m_items[0]._10        = p1;
	m_items[0]._14        = p2;
	m_items[0]._18        = p3;
	m_items[0].m_effectID = effectID1;
	m_items[1]._10        = p1;
	m_items[1]._14        = p2;
	m_items[1]._18        = p3;
	m_items[1].m_effectID = effectID2;
}

/*
 * @generatedAndInlined{__dt__Q23efx44TSyncGroup2<Q23efx23TChasePosPosLocalYScale>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup2<TChasePosPosLocalYScale>::~TSyncGroup2()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q23efx23TChasePosPosLocalYScaleFv
 * --INFO--
 * Address:	803B0B74
 * Size:	000058
 */
TChasePosPosLocalYScale::TChasePosPosLocalYScale()
    : TSync()
{
}

/*
 * @matchedSize
 * setPosptr__Q23efx24TChasePosPosLocalYScale2FP10Vector3<f>P10Vector3<f>
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void TChasePosPosLocalYScale2::setPosptr(Vector3f* p1, Vector3f* p2)
{
	// UNUSED FUNCTION
	m_items[0]._10 = p1;
	m_items[0]._14 = p2;
	m_items[1]._10 = p1;
	m_items[1]._14 = p2;
}

/*
 * __ct__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>fUsUsUs
 * --INFO--
 * Address:	803B0BCC
 * Size:	0000C8
 */
TChasePosPosLocalYScale3::TChasePosPosLocalYScale3(Vector3f* p1, Vector3f* p2, float p3, unsigned short effectID1, unsigned short effectID2,
                                                   unsigned short effectID3)
    : TSyncGroup3<TChasePosPosLocalYScale>()
{
	m_items[0]._10        = p1;
	m_items[0]._14        = p2;
	m_items[0]._18        = p3;
	m_items[0].m_effectID = effectID1;
	m_items[1]._10        = p1;
	m_items[1]._14        = p2;
	m_items[1]._18        = p3;
	m_items[1].m_effectID = effectID2;
	m_items[2]._10        = p1;
	m_items[2]._14        = p2;
	m_items[2]._18        = p3;
	m_items[2].m_effectID = effectID3;
}

/*
 * @generatedAndInlined{__dt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup3<TChasePosPosLocalYScale>::~TSyncGroup3()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setPosptr__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>
 * --INFO--
 * Address:	803B0C94
 * Size:	00001C
 */
void TChasePosPosLocalYScale3::setPosptr(Vector3f* p1, Vector3f* p2)
{
	m_items[0]._10 = p1;
	m_items[0]._14 = p2;
	m_items[1]._10 = p1;
	m_items[1]._14 = p2;
	m_items[2]._10 = p1;
	m_items[2]._14 = p2;
}

/*
 * @matchedSize
 * __ct__Q23efx24TChasePosPosLocalZScale2FP10Vector3<f>P10Vector3<f>fUsUs
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
TChasePosPosLocalZScale2::TChasePosPosLocalZScale2(Vector3f* p1, Vector3f* p2, float p3, unsigned short effectID1, unsigned short effectID2)
    : TSyncGroup2<TChasePosPosLocalZScale>()
{
	// UNUSED FUNCTION
	m_items[0]._10        = p1;
	m_items[0]._14        = p2;
	m_items[0]._18        = p3;
	m_items[0].m_effectID = effectID1;
	m_items[1]._10        = p1;
	m_items[1]._14        = p2;
	m_items[1]._18        = p3;
	m_items[1].m_effectID = effectID2;
}

/*
 * @generatedAndInlined{__dt__Q23efx44TSyncGroup2<Q23efx23TChasePosPosLocalZScale>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup2<TChasePosPosLocalZScale>::~TSyncGroup2()
// {
// 	// UNUSED FUNCTION
// }

/*
 * __ct__Q23efx23TChasePosPosLocalZScaleFv
 * --INFO--
 * Address:	803B0CB0
 * Size:	000058
 */
TChasePosPosLocalZScale::TChasePosPosLocalZScale()
    : TSync()
{
}

/*
 * @matchedSize
 * setPosptr__Q23efx24TChasePosPosLocalZScale2FP10Vector3<f>P10Vector3<f>
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void TChasePosPosLocalZScale2::setPosptr(Vector3f* p1, Vector3f* p2)
{
	// UNUSED FUNCTION
	m_items[0]._10 = p1;
	m_items[0]._14 = p2;
	m_items[1]._10 = p1;
	m_items[1]._14 = p2;
}

/*
 * __ct__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>fUsUsUs
 * --INFO--
 * Address:	803B0D08
 * Size:	0000C8
 */
TChasePosPosLocalZScale3::TChasePosPosLocalZScale3(Vector3f* p1, Vector3f* p2, float p3, unsigned short effectID1, unsigned short effectID2,
                                                   unsigned short effectID3)
    : TSyncGroup3<TChasePosPosLocalZScale>()
{
	m_items[0]._10        = p1;
	m_items[0]._14        = p2;
	m_items[0]._18        = p3;
	m_items[0].m_effectID = effectID1;
	m_items[1]._10        = p1;
	m_items[1]._14        = p2;
	m_items[1]._18        = p3;
	m_items[1].m_effectID = effectID2;
	m_items[2]._10        = p1;
	m_items[2]._14        = p2;
	m_items[2]._18        = p3;
	m_items[2].m_effectID = effectID3;
}

/*
 * @generatedAndInlined{__dt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv}
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// TSyncGroup3<TChasePosPosLocalZScale>::~TSyncGroup3()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>
 * --INFO--
 * Address:	803B0DD0
 * Size:	00001C
 */
void TChasePosPosLocalZScale3::setPosptr(Vector3f* p1, Vector3f* p2)
{
	m_items[0]._10 = p1;
	m_items[0]._14 = p2;
	m_items[1]._10 = p1;
	m_items[1]._14 = p2;
	m_items[2]._10 = p1;
	m_items[2]._14 = p2;
}

/*
 * __dt__Q23efx19TOneEmitterChasePosFv
 * --INFO--
 * Address:	803B0DEC
 * Size:	00008C
 */
TOneEmitterChasePos::~TOneEmitterChasePos()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803B0E5C
	lis      r3, __vt__Q23efx19TOneEmitterChasePos@ha
	addic.   r0, r30, 8
	addi     r3, r3, __vt__Q23efx19TOneEmitterChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_803B0E40
	lis      r4, __vt__Q23efx15ContextChasePos@ha
	addi     r3, r30, 8
	addi     r0, r4, __vt__Q23efx15ContextChasePos@l
	li       r4, 0
	stw      r0, 8(r30)
	bl       __dt__5CNodeFv

lbl_803B0E40:
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__18JPAEmitterCallBackFv
	extsh.   r0, r31
	ble      lbl_803B0E5C
	mr       r3, r30
	bl       __dl__FPv

lbl_803B0E5C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * startDemoDrawOff__Q23efx19TOneEmitterChasePosFv
 * --INFO--
 * Address:	803B0E78
 * Size:	00001C
 */
void TOneEmitterChasePos::startDemoDrawOff()
{
	if (m_emitter == nullptr) {
		return;
	}
	m_emitter->_F4 |= 4;
}

/*
 * endDemoDrawOn__Q23efx19TOneEmitterChasePosFv
 * --INFO--
 * Address:	803B0E94
 * Size:	00001C
 */
void TOneEmitterChasePos::endDemoDrawOn()
{
	if (m_emitter == nullptr) {
		return;
	}
	m_emitter->_F4 &= ~4;
}

/*
 * __dt__Q23efx24TCallBack_StaticClippingFv
 * --INFO--
 * Address:	803B0EB0
 * Size:	000060
 */
TCallBack_StaticClipping::~TCallBack_StaticClipping() { }

/*
 * @generated{create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B0F10
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup6<efx::TChaseMtx> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B0F8C
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B0FE4
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B103C
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B1094
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup6<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup5<efx::TChaseMtx> FPQ23efx3Arg(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup5<efx::TChaseMtx> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * @generated{create__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B10EC
 * Size:	00007C
 */
// void create__Q23efx31TSyncGroup4<efx::TChaseMtxT> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B1168
 * Size:	000058
 */
// void fade__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B11C0
 * Size:	000058
 */
// void forceKill__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B1218
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B1270
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx31TSyncGroup4<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B12C8
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup4<efx::TChaseMtx> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B1344
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B139C
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B13F4
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B144C
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup4<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B14A4
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup4<efx::TChasePos> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B1520
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B1578
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B15D0
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B1628
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup4<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B1680
 * Size:	00007C
 */
// void create__Q23efx28TSyncGroup4<efx::TForever> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B16FC
 * Size:	000058
 */
// void fade__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B1754
 * Size:	000058
 */
// void forceKill__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B17AC
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B1804
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx28TSyncGroup4<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B185C
 * Size:	00007C
 */
// void create__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv}
 * --INFO--
 * Address:	803B18D8
 * Size:	000058
 */
// void fade__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv}
 * --INFO--
 * Address:	803B1930
 * Size:	000058
 */
// void forceKill__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv}
 * --INFO--
 * Address:	803B1988
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv}
 * --INFO--
 * Address:	803B19E0
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx44TSyncGroup3<efx::TChasePosPosLocalZScale> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B1A38
 * Size:	00007C
 */
// void create__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv}
 * --INFO--
 * Address:	803B1AB4
 * Size:	000058
 */
// void fade__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv}
 * --INFO--
 * Address:	803B1B0C
 * Size:	000058
 */
// void forceKill__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv}
 * --INFO--
 * Address:	803B1B64
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv}
 * --INFO--
 * Address:	803B1BBC
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx44TSyncGroup3<efx::TChasePosPosLocalYScale> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B1C14
 * Size:	00007C
 */
// void create__Q23efx34TSyncGroup3<efx::TChasePosYRot> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B1C90
 * Size:	000058
 */
// void fade__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B1CE8
 * Size:	000058
 */
// void forceKill__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B1D40
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B1D98
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx34TSyncGroup3<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
// void create__Q23efx31TSyncGroup3<efx::TChaseMtxT> FPQ23efx3Arg(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void fade__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void forceKill__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx31TSyncGroup3<efx::TChaseMtxT> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * @generated{create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B1DF0
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup3<efx::TChaseMtx> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B1E6C
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B1EC4
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B1F1C
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B1F74
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup3<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B1FCC
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup3<efx::TChasePos> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B2048
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B20A0
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B20F8
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B2150
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup3<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx28TSyncGroup3<Q23efx8TForever>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B21A8
 * Size:	00007C
 */
// void create__Q23efx28TSyncGroup3<efx::TForever> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx28TSyncGroup3<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B2224
 * Size:	000058
 */
// void fade__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx28TSyncGroup3<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B227C
 * Size:	000058
 */
// void forceKill__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx28TSyncGroup3<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B22D4
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx28TSyncGroup3<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B232C
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx28TSyncGroup3<efx::TForever> Fv(void)
// {
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
// void create__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> FPQ23efx3Arg(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void fade__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void forceKill__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx44TSyncGroup2<efx::TChasePosPosLocalZScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
// void create__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> FPQ23efx3Arg(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void fade__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void forceKill__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx44TSyncGroup2<efx::TChasePosPosLocalYScale> Fv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * @generated{create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B2384
 * Size:	00007C
 */
// void create__Q23efx34TSyncGroup2<efx::TChasePosYRot> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B2400
 * Size:	000058
 */
// void fade__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B2458
 * Size:	000058
 */
// void forceKill__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B24B0
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv}
 * --INFO--
 * Address:	803B2508
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx34TSyncGroup2<efx::TChasePosYRot> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B2560
 * Size:	00007C
 */
// void create__Q23efx31TSyncGroup2<efx::TChaseMtxT> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B25DC
 * Size:	000058
 */
// void fade__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B2634
 * Size:	000058
 */
// void forceKill__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B268C
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv}
 * --INFO--
 * Address:	803B26E4
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx31TSyncGroup2<efx::TChaseMtxT> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B273C
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup2<efx::TChaseMtx> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B27B8
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B2810
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B2868
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv}
 * --INFO--
 * Address:	803B28C0
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup2<efx::TChaseMtx> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B2918
 * Size:	00007C
 */
// void create__Q23efx29TSyncGroup2<efx::TChasePos> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B2994
 * Size:	000058
 */
// void fade__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B29EC
 * Size:	000058
 */
// void forceKill__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B2A44
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv}
 * --INFO--
 * Address:	803B2A9C
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx29TSyncGroup2<efx::TChasePos> Fv(void)
// {
// }

/*
 * @generated{create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg}
 * --INFO--
 * Address:	803B2AF4
 * Size:	00007C
 */
// void create__Q23efx28TSyncGroup2<efx::TForever> FPQ23efx3Arg(void)
// {
// }

/*
 * @generated{fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B2B70
 * Size:	000058
 */
// void fade__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B2BC8
 * Size:	000058
 */
// void forceKill__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B2C20
 * Size:	000058
 */
// void startDemoDrawOff__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
// {
// }

/*
 * @generated{endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv}
 * --INFO--
 * Address:	803B2C78
 * Size:	000058
 */
// void endDemoDrawOn__Q23efx28TSyncGroup2<efx::TForever> Fv(void)
// {
// }

/*
 * --INFO--
 * Address:	803B2CD0
 * Size:	00004C
 */
// void __sinit_efxBase_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r4, __vt__18JPAEmitterCallBack@ha
// 	lis      r3, __vt__Q23efx24TCallBack_StaticClipping@ha
// 	stw      r0, 0x14(r1)
// 	addi     r0, r4, __vt__18JPAEmitterCallBack@l
// 	lis      r4, __dt__Q23efx24TCallBack_StaticClippingFv@ha
// 	stw      r0, mCallBack_StaticClipping__Q23efx5TBase@sda21(r13)
// 	addi     r0, r3, __vt__Q23efx24TCallBack_StaticClipping@l
// 	lis      r3, lbl_804F7C10@ha
// 	addi     r4, r4, __dt__Q23efx24TCallBack_StaticClippingFv@l
// 	stw      r0, mCallBack_StaticClipping__Q23efx5TBase@sda21(r13)
// 	addi     r5, r3, lbl_804F7C10@l
// 	addi     r3, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * @generated{@4@executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter}
 * --INFO--
 * Address:	803B2D1C
 * Size:	000008
 */
// void @4 @efx::TOneEmitter::executeAfter(JPABaseEmitter*)
// {
// }

/*
 * @generated{@4@__dt__Q23efx11TOneEmitterFv}
 * --INFO--
 * Address:	803B2D24
 * Size:	000008
 */
// @4 @efx::TOneEmitter::~TOneEmitter(void)
// {
// }

/*
 * @generated{@4@executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter}
 * --INFO--
 * Address:	803B2D2C
 * Size:	000008
 */
// void @4 @efx::TOneEmitterChasePos::executeAfter(JPABaseEmitter*)
// {
// }

/*
 * @generated{@4@__dt__Q23efx19TOneEmitterChasePosFv}
 * --INFO--
 * Address:	803B2D34
 * Size:	000008
 */
// @4 @efx::TOneEmitterChasePos::~TOneEmitterChasePos(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx17TOneEmitterSimpleFv}
 * --INFO--
 * Address:	803B2D3C
 * Size:	000008
 */
// @4 @efx::TOneEmitterSimple::~TOneEmitterSimple(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx5TSyncFv}
 * --INFO--
 * Address:	803B2D44
 * Size:	000008
 */
// @4 @efx::TSync::~TSync(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx9TChasePosFv}
 * --INFO--
 * Address:	803B2D4C
 * Size:	000008
 */
// @4 @efx::TChasePos::~TChasePos(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx13TChasePosYRotFv}
 * --INFO--
 * Address:	803B2D54
 * Size:	000008
 */
// @4 @efx::TChasePosYRot::~TChasePosYRot(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx9TChaseMtxFv}
 * --INFO--
 * Address:	803B2D5C
 * Size:	000008
 */
// @4 @efx::TChaseMtx::~TChaseMtx(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx10TChaseMtxTFv}
 * --INFO--
 * Address:	803B2D64
 * Size:	000008
 */
// @4 @efx::TChaseMtxT::~TChaseMtxT(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx12TChasePosPosFv}
 * --INFO--
 * Address:	803B2D6C
 * Size:	000008
 */
// @4 @efx::TChasePosPos::~TChasePosPos(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx23TChasePosPosLocalZScaleFv}
 * --INFO--
 * Address:	803B2D74
 * Size:	000008
 */
// @4 @efx::TChasePosPosLocalZScale::~TChasePosPosLocalZScale(void)
// {
// }

/*
 * @generated{@4@__dt__Q23efx23TChasePosPosLocalYScaleFv}
 * --INFO--
 * Address:	803B2D7C
 * Size:	000008
 */
// @4 @efx::TChasePosPosLocalYScale::~TChasePosPosLocalYScale(void)
// {
// }

} // namespace efx
