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
					particle->_18 = JGeometry::TVec3f(v1.x, v1.y, v1.z);
				}
			}
		}
	}
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
void TOneEmitterChasePos::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	for (ContextChasePos* context = (ContextChasePos*)m_context.m_child; context != nullptr; context = (ContextChasePos*)context->m_next) {
		Vector3f* v1 = context->m_position;
		if (particleMgr->cullByResFlg(*v1, m_effectID) == false) {
			int createCount = emitter->getCurrentCreateNumber();
			for (int i = 0; i < createCount; i++) {
				JPABaseParticle* particle = emitter->createParticle();
				if (particle) {
					particle->_18 = JGeometry::TVec3f(v1->x, v1->y, v1->z);
				}
			}
		}
	}
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
void TOneEmitterSimple::executeAfter(JPABaseEmitter* emitter)
{
	particleMgr->setGlobalColor(emitter);
	P2ASSERTLINE(447, _14 <= _18);
	for (int i = 0; i < _14; i++) {
		Vector3f v1 = _10[i];
		if (particleMgr->cullByResFlg(v1, m_effectID) == false) {
			int createCount = (int)emitter->_28;
			for (int i = 0; i < createCount; i++) {
				JPABaseParticle* particle = emitter->createParticle();
				if (particle) {
					particle->_18 = JGeometry::TVec3f(v1.x, v1.y, v1.z);
				}
			}
		}
	}

	_14 = 0;
}

/*
 * create__Q23efx8TSimple1FPQ23efx3Arg
 * --INFO--
 * Address:	803AEF84
 * Size:	000090
 */
bool TSimple1::create(efx::Arg* arg)
{
	P2ASSERTLINE(558, arg);
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
	P2ASSERTLINE(574, arg);
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
bool TSimpleMtx1::create(Arg* arg)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(646, m_mtx);
		for (int i = 0; i < (int)ARRAY_SIZE(m_emitters); i++) {
			JPASetRMtxTVecfromMtx(m_mtx->m_matrix.mtxView, m_emitters[i]->_68, &m_emitters[i]->_A4);
		}
		return true;
	} else {
		return false;
	}
}

/*
 * create__Q23efx11TSimpleMtx2FPQ23efx3Arg
 * --INFO--
 * Address:	803AF398
 * Size:	00011C
 */
bool TSimpleMtx2::create(efx::Arg*)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(660, m_mtx);
		for (int i = 0; i < (int)ARRAY_SIZE(m_emitters); i++) {
			JPASetRMtxTVecfromMtx(m_mtx->m_matrix.mtxView, m_emitters[i]->_68, &m_emitters[i]->_A4);
		}
		return true;
	} else {
		return false;
	}
}

/*
 * create__Q23efx11TSimpleMtx3FPQ23efx3Arg
 * --INFO--
 * Address:	803AF4B4
 * Size:	00011C
 */
bool TSimpleMtx3::create(efx::Arg*)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(674, m_mtx);
		for (int i = 0; i < (int)ARRAY_SIZE(m_emitters); i++) {
			JPASetRMtxTVecfromMtx(m_mtx->m_matrix.mtxView, m_emitters[i]->_68, &m_emitters[i]->_A4);
		}
		return true;
	} else {
		return false;
	}
}

/*
 * create__Q23efx11TSimpleMtx4FPQ23efx3Arg
 * --INFO--
 * Address:	803AF5D0
 * Size:	00011C
 */
bool TSimpleMtx4::create(efx::Arg* arg)
{
	if (setEmitterCallbacks()) {
		P2ASSERTLINE(688, m_mtx != nullptr);
		for (int i = 0; i < (int)ARRAY_SIZE(m_emitters); i++) {
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
	P2ASSERTLINE(785, m_position);
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
	P2ASSERTLINE(794, m_position);
	P2ASSERTLINE(795, m_rotation);
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
	P2ASSERTLINE(829, _10);
	P2ASSERTLINE(830, _14);
	Mtx mtxZ;
	Vector3f vec1 = *_10;
	Vector3f vec2 = *_14;
	makeMtxZAxisAlongPosPos(mtxZ, vec1, vec2);
	JPASetRMtxTVecfromMtx(mtxZ, emitter->_68, &emitter->_A4);
}

/*
 * See Sys::Tube::getAxisVector. Also look at e.g. ec0000f2 ec2100f2 ec4200f2 in general.
 * --INFO--
 * Address:	803AFC80
 * Size:	0000F8
 */
#pragma dont_inline on
void makeMtxZAxisAlongPosPos(Mtx mtx, Vector3f& p2, Vector3f& p3)
{
	Vector3f diff = p3 - p2;
	diff.normalise();
	// some cross product/outer product to generate Mtx
	mtx[0][0] = diff.x;

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
#pragma dont_inline reset

/*
 * doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter
 * --INFO--
 * Address:	803AFD78
 * Size:	00014C
 */
void TChasePosPosLocalZScale::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(848, _10);
	P2ASSERTLINE(849, _14);
	Mtx mtxZ;
	Vector3f vec1 = *_10;
	Vector3f vec2 = *_14;
	makeMtxZAxisAlongPosPos(mtxZ, vec1, vec2);
	JPASetRMtxTVecfromMtx(mtxZ, emitter->_68, &emitter->_A4);
	// needs some extra math here
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
void TChasePosPosLocalYScale::doExecuteEmitterOperation(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(880, _10);
	P2ASSERTLINE(881, _14);
	Mtx mtxZ;
	Vector3f vec1 = *_10;
	Vector3f vec2 = *_14;
	makeMtxZAxisAlongPosPos(mtxZ, vec1, vec2);
	JPASetRMtxTVecfromMtx(mtxZ, emitter->_68, &emitter->_A4);
	// needs some extra math here
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

// /*
//  * __ct__Q23efx9TChasePosFv
//  * --INFO--
//  * Address:	803B02EC
//  * Size:	000058
//  */
// TChasePos::TChasePos()
//     : TSync()
// {
// }

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

} // namespace efx
