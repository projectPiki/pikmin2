#include "efx/TOtakara.h"
#include "efx/TTsuyuGrow.h"
#include "efx/Container.h"
#include "efx/TEgate.h"
#include "efx/TKouhai.h"
#include "efx/TPelkira.h"
#include "efx/WarpZone.h"
#include "JSystem/JPA/JPAMath.h"
#include "Game/Entities/ItemOnyon.h"

namespace efx {

static void _Printf(char* format) { OSReport(format, __FILE__); }

/*
 * --INFO--
 * Address:	803B57BC
 * Size:	000108
 */
bool TOtakaraDive::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(123, argCheck);
	f32 scale = static_cast<ArgScale*>(arg)->m_scale;
	scale     = scale / 35.0f;

	if (TSimple3::create(arg)) {
		m_emitters[0]->setScale(scale);
		m_emitters[1]->setScale(scale);
		m_emitters[2]->setScale(scale);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803B58C4
 * Size:	000108
 */
bool TTsuyuGrow0::create(Arg* arg)
{
	bool argCheck = strcmp("ArgRotY", arg->getName()) == 0;
	P2ASSERTLINE(143, argCheck);
	Matrixf mtxRot;
	Vector3f pos = arg->m_position;
	PSMTXRotRad(mtxRot.m_matrix.mtxView, 'y', static_cast<ArgRotY*>(arg)->m_faceDir);
	mtxRot.setBasis(3, pos);

	if (TSimple1::create(arg)) {
		JPASetRMtxTVecfromMtx(mtxRot.m_matrix.mtxView, m_emitters[0]->_68, &m_emitters[0]->_A4);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803B59CC
 * Size:	000100
 */
bool TOtakaraApL::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(166, argCheck);
	ArgScale* argScale = static_cast<ArgScale*>(arg);
	f32 scale          = argScale->m_scale;

	if (TSimple3::create(argScale)) {
		m_emitters[0]->setScale(scale);
		m_emitters[1]->setScale(scale);
		m_emitters[2]->setScale(scale);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803B5ACC
 * Size:	0000E8
 */
bool TOtakaraApS::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(183, argCheck);
	ArgScale* argScale = static_cast<ArgScale*>(arg);
	f32 scale          = argScale->m_scale;

	if (TSimple2::create(argScale)) {
		m_emitters[0]->setScale(scale);
		m_emitters[1]->setScale(scale);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803B5BB4
 * Size:	000314
 */
bool TOtakaraAp::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(200, argCheck);
	f32 oldScale = static_cast<ArgScale*>(arg)->m_scale;
	Vector3f pos = arg->m_position;
	f32 newScale = oldScale / 35.0f;

	if (oldScale < 35.0f) {
		TOtakaraApS apS;
		ArgScale argScaleS(pos, newScale);
		return apS.create(&argScaleS);

	} else {
		TOtakaraApL apL;
		ArgScale argScaleL(pos, newScale);
		return apL.create(&argScaleL);
	}
}

/*
 * --INFO--
 * Address:	803B5EC8
 * Size:	000124
 */
bool TEgateBC::create(Arg* arg)
{
	bool argCheck = strcmp("ArgRotY", arg->getName()) == 0;
	P2ASSERTLINE(223, argCheck);
	Matrixf mtxRot;
	Vector3f pos = arg->m_position;
	PSMTXRotRad(mtxRot.m_matrix.mtxView, 'y', static_cast<ArgRotY*>(arg)->m_faceDir);
	mtxRot.setBasis(3, pos);

	if (TForever2::create(arg)) {
		for (int i = 0; i < (int)ARRAY_SIZE(m_items); i++) {
			if (m_items[i].m_emitter) {
				JPASetRMtxTVecfromMtx(mtxRot.m_matrix.mtxView, m_items[i].m_emitter->_68, &m_items[i].m_emitter->_A4);
			}
		}
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803B5FEC
 * Size:	000124
 */
bool TKouhaiDamage::create(Arg* arg)
{
	bool argCheck = strcmp("ArgKouhai", arg->getName()) == 0;
	P2ASSERTLINE(249, argCheck);

	ArgKouhai* argKouhai = static_cast<ArgKouhai*>(arg);
	int p1               = argKouhai->_10;

	if (TSimple1::create(argKouhai)) {
		Vector2f scale;
		f32 scaleXY;
		f32 scaleZ;
		switch (p1) {
		case 0:
			scale = Vector2f(0.35f, 0.35f);
			break;
		case 1:
			scale = Vector2f(0.6f, 0.6f);
			break;
		case 2:
			scale = Vector2f(1.0f, 1.0f);
			break;
		}

		m_emitters[0]->setScale(scale.x, scale.y);

		return true;
	} else {
		return false;
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r3, r30
	lis      r4, lbl_80495988@ha
	lwz      r12, 0(r30)
	addi     r31, r4, lbl_80495988@l
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x28
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803B6064
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0xf9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B6064:
	lwz      r31, 0x10(r30)
	mr       r3, r29
	mr       r4, r30
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803B60E0
	cmpwi    r31, 1
	beq      lbl_803B60AC
	bge      lbl_803B6094
	cmpwi    r31, 0
	bge      lbl_803B60A0
	b        lbl_803B60C0

lbl_803B6094:
	cmpwi    r31, 3
	bge      lbl_803B60C0
	b        lbl_803B60B8

lbl_803B60A0:
	lfs      f31, lbl_8051F65C@sda21(r2)
	fmr      f30, f31
	b        lbl_803B60C0

lbl_803B60AC:
	lfs      f31, lbl_8051F660@sda21(r2)
	fmr      f30, f31
	b        lbl_803B60C0

lbl_803B60B8:
	lfs      f31, lbl_8051F664@sda21(r2)
	fmr      f30, f31

lbl_803B60C0:
	lwz      r4, 8(r29)
	li       r3, 1
	stfs     f31, 0x98(r4)
	stfs     f31, 0x9c(r4)
	stfs     f30, 0xa0(r4)
	stfs     f31, 0xb0(r4)
	stfs     f31, 0xb4(r4)
	b        lbl_803B60E4

lbl_803B60E0:
	li       r3, 0

lbl_803B60E4:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B6110
 * Size:	0000E8
 */
bool TPelkira_ver01::create(Arg* arg)
{
	bool argCheck = strcmp("ArgPelType", arg->getName()) == 0;
	P2ASSERTLINE(275, argCheck);

	ArgPelType* argpel = static_cast<ArgPelType*>(arg);

	switch (argpel->m_type) {
	case 0:
		m_effectID = PID_PelKira_1;
		break;
	case 1:
		m_effectID = PID_PelKira_4;
		break;
	case 2:
		m_effectID = PID_PelKira_2;
		break;
	case 3:
		m_effectID = PID_PelKira_3;
		break;
	}
	return TSync::create(arg);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	lis      r4, lbl_80495988@ha
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	addi     r31, r4, lbl_80495988@l
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x34
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803B6178
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x113
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B6178:
	lwz      r0, 0x10(r30)
	mr       r4, r30
	cmpwi    r0, 2
	beq      lbl_803B61C0
	bge      lbl_803B619C
	cmpwi    r0, 0
	beq      lbl_803B61A8
	bge      lbl_803B61B4
	b        lbl_803B61D4

lbl_803B619C:
	cmpwi    r0, 4
	bge      lbl_803B61D4
	b        lbl_803B61CC

lbl_803B61A8:
	li       r0, 0x142
	sth      r0, 0xc(r29)
	b        lbl_803B61D4

lbl_803B61B4:
	li       r0, 0x145
	sth      r0, 0xc(r29)
	b        lbl_803B61D4

lbl_803B61C0:
	li       r0, 0x143
	sth      r0, 0xc(r29)
	b        lbl_803B61D4

lbl_803B61CC:
	li       r0, 0x144
	sth      r0, 0xc(r29)

lbl_803B61D4:
	mr       r3, r29
	bl       create__Q23efx5TSyncFPQ23efx3Arg
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
 * Address:	803B61F8
 * Size:	0000D0
 */
bool Container::create(efx::Arg* arg)
{
	bool argCheck = strcmp("ArgType", arg->getName()) == 0;
	P2ASSERTLINE(301, argCheck);

	ArgType* argtype = static_cast<ArgType*>(arg);

	switch (argtype->m_onyonType) {
	case ONYON_TYPE_BLUE:
		m_effectID = PID_Container_Blue;
		break;
	case ONYON_TYPE_RED:
		m_effectID = PID_Container_Red;
		break;
	case ONYON_TYPE_YELLOW:
		m_effectID = PID_Container_Yellow;
		break;
	}
	return TSync::create(arg);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r2, lbl_8051F668@sda21
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803B625C
	lis      r3, lbl_80495988@ha
	lis      r5, lbl_804959A4@ha
	addi     r3, r3, lbl_80495988@l
	li       r4, 0x12d
	addi     r5, r5, lbl_804959A4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B625C:
	lhz      r0, 0x10(r31)
	mr       r4, r31
	cmpwi    r0, 1
	beq      lbl_803B6294
	bge      lbl_803B627C
	cmpwi    r0, 0
	bge      lbl_803B6288
	b        lbl_803B62A8

lbl_803B627C:
	cmpwi    r0, 3
	bge      lbl_803B62A8
	b        lbl_803B62A0

lbl_803B6288:
	li       r0, 0x105
	sth      r0, 0xc(r30)
	b        lbl_803B62A8

lbl_803B6294:
	li       r0, 0x106
	sth      r0, 0xc(r30)
	b        lbl_803B62A8

lbl_803B62A0:
	li       r0, 0x107
	sth      r0, 0xc(r30)

lbl_803B62A8:
	mr       r3, r30
	bl       create__Q23efx5TSyncFPQ23efx3Arg
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
 * Address:	803B62C8
 * Size:	0000E8
 */
bool ContainerAct::create(efx::Arg* arg)
{
	bool argCheck = strcmp("ArgType", arg->getName()) == 0;
	P2ASSERTLINE(322, argCheck);

	ArgType* argtype = static_cast<ArgType*>(arg);

	switch (argtype->m_onyonType) {
	case ONYON_TYPE_BLUE:
		m_items[0].m_effectID = PID_ContainerAct_Blue_1;
		m_items[1].m_effectID = PID_ContainerAct_Blue_2;
		break;
	case ONYON_TYPE_RED:
		m_items[0].m_effectID = PID_ContainerAct_Red_1;
		m_items[1].m_effectID = PID_ContainerAct_Red_2;
		break;
	case ONYON_TYPE_YELLOW:
		m_items[0].m_effectID = PID_ContainerAct_Yellow_1;
		m_items[1].m_effectID = PID_ContainerAct_Yellow_2;
		break;
	}
	return TSyncGroup2<TForever>::create(arg);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r2, lbl_8051F668@sda21
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803B632C
	lis      r3, lbl_80495988@ha
	lis      r5, lbl_804959A4@ha
	addi     r3, r3, lbl_80495988@l
	li       r4, 0x142
	addi     r5, r5, lbl_804959A4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803B632C:
	lhz      r0, 0x10(r31)
	mr       r4, r31
	cmpwi    r0, 1
	beq      lbl_803B636C
	bge      lbl_803B634C
	cmpwi    r0, 0
	bge      lbl_803B6358
	b        lbl_803B6390

lbl_803B634C:
	cmpwi    r0, 3
	bge      lbl_803B6390
	b        lbl_803B6380

lbl_803B6358:
	li       r3, 0xf8
	li       r0, 0xf9
	sth      r3, 0x10(r30)
	sth      r0, 0x20(r30)
	b        lbl_803B6390

lbl_803B636C:
	li       r3, 0xfa
	li       r0, 0xfb
	sth      r3, 0x10(r30)
	sth      r0, 0x20(r30)
	b        lbl_803B6390

lbl_803B6380:
	li       r3, 0xfc
	li       r0, 0xfd
	sth      r3, 0x10(r30)
	sth      r0, 0x20(r30)

lbl_803B6390:
	mr       r3, r30
	bl       "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"
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
 * Address:	803B63B0
 * Size:	0001B0
 */
void WarpZone::setRateLOD(int offs, bool flag)
{
	JPABaseEmitter* emit;
	if (flag) {
		emit         = m_items[0].m_emitter;
		f32 data[12] = { 0.3f, 0.25f, 0.15f, 0.06f, 0.05f, 0.04f, 0.0f, 0.0f, 0.0f, 0.1f, 0.08f, 0.06f };
		if (emit) {
			emit->_28 = data[offs];
		}
		emit = m_items[1].m_emitter;
		if (emit) {
			emit->_28 = data[offs + 3];
		}
		emit = m_items[2].m_emitter;
		if (emit) {
			emit->_28 = data[offs + 6];
		}
		emit = m_items[3].m_emitter;
		if (emit) {
			emit->_28 = data[offs + 9];
		}
	} else {
		emit         = m_items[0].m_emitter;
		f32 data[12] = { 0.3f, 0.25f, 0.15f, 0.06f, 0.05f, 0.04f, 0.225f, 0.2f, 0.15f, 0.1f, 0.08f, 0.06f };
		if (emit) {
			emit->_28 = data[offs];
		}
		emit = m_items[1].m_emitter;
		if (emit) {
			emit->_28 = data[offs + 3];
		}
		emit = m_items[2].m_emitter;
		if (emit) {
			emit->_28 = data[offs + 6];
		}
		emit = m_items[3].m_emitter;
		if (emit) {
			emit->_28 = data[offs + 9];
		}
	}
	/*
	stwu     r1, -0x80(r1)
	clrlwi.  r0, r5, 0x18
	stmw     r27, 0x6c(r1)
	bne      lbl_803B648C
	lis      r5, lbl_804959C8@ha
	lwz      r28, 0xc(r3)
	addi     r31, r5, lbl_804959C8@l
	slwi     r0, r4, 2
	addi     r27, r1, 0x38
	lwz      r30, 0(r31)
	lwz      r29, 4(r31)
	add      r27, r27, r0
	lwz      r12, 8(r31)
	cmplwi   r28, 0
	lwz      r11, 0xc(r31)
	lwz      r10, 0x10(r31)
	lwz      r9, 0x14(r31)
	lwz      r8, 0x18(r31)
	lwz      r7, 0x1c(r31)
	lwz      r6, 0x20(r31)
	lwz      r5, 0x24(r31)
	lwz      r4, 0x28(r31)
	lwz      r0, 0x2c(r31)
	stw      r30, 0x38(r1)
	stw      r29, 0x3c(r1)
	stw      r12, 0x40(r1)
	stw      r11, 0x44(r1)
	stw      r10, 0x48(r1)
	stw      r9, 0x4c(r1)
	stw      r8, 0x50(r1)
	stw      r7, 0x54(r1)
	stw      r6, 0x58(r1)
	stw      r5, 0x5c(r1)
	stw      r4, 0x60(r1)
	stw      r0, 0x64(r1)
	beq      lbl_803B6448
	lfs      f0, 0(r27)
	stfs     f0, 0x28(r28)

lbl_803B6448:
	lwz      r28, 0x1c(r3)
	cmplwi   r28, 0
	beq      lbl_803B645C
	lfs      f0, 0xc(r27)
	stfs     f0, 0x28(r28)

lbl_803B645C:
	addi     r3, r3, 0x20
	lwz      r28, 0xc(r3)
	cmplwi   r28, 0
	beq      lbl_803B6474
	lfs      f0, 0x18(r27)
	stfs     f0, 0x28(r28)

lbl_803B6474:
	lwz      r28, 0x1c(r3)
	cmplwi   r28, 0
	beq      lbl_803B6554
	lfs      f0, 0x24(r27)
	stfs     f0, 0x28(r28)
	b        lbl_803B6554

lbl_803B648C:
	lis      r5, lbl_804959F8@ha
	lwz      r28, 0xc(r3)
	addi     r29, r5, lbl_804959F8@l
	slwi     r0, r4, 2
	addi     r27, r1, 8
	lwz      r30, 0(r29)
	lwz      r31, 4(r29)
	add      r27, r27, r0
	lwz      r12, 8(r29)
	cmplwi   r28, 0
	lwz      r11, 0xc(r29)
	lwz      r10, 0x10(r29)
	lwz      r9, 0x14(r29)
	lwz      r8, 0x18(r29)
	lwz      r7, 0x1c(r29)
	lwz      r6, 0x20(r29)
	lwz      r5, 0x24(r29)
	lwz      r4, 0x28(r29)
	lwz      r0, 0x2c(r29)
	stw      r30, 8(r1)
	stw      r31, 0xc(r1)
	stw      r12, 0x10(r1)
	stw      r11, 0x14(r1)
	stw      r10, 0x18(r1)
	stw      r9, 0x1c(r1)
	stw      r8, 0x20(r1)
	stw      r7, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r4, 0x30(r1)
	stw      r0, 0x34(r1)
	beq      lbl_803B6514
	lfs      f0, 0(r27)
	stfs     f0, 0x28(r28)

lbl_803B6514:
	lwz      r28, 0x1c(r3)
	cmplwi   r28, 0
	beq      lbl_803B6528
	lfs      f0, 0xc(r27)
	stfs     f0, 0x28(r28)

lbl_803B6528:
	addi     r3, r3, 0x20
	lwz      r28, 0xc(r3)
	cmplwi   r28, 0
	beq      lbl_803B6540
	lfs      f0, 0x18(r27)
	stfs     f0, 0x28(r28)

lbl_803B6540:
	lwz      r28, 0x1c(r3)
	cmplwi   r28, 0
	beq      lbl_803B6554
	lfs      f0, 0x24(r27)
	stfs     f0, 0x28(r28)

lbl_803B6554:
	lmw      r27, 0x6c(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	803B6560
 * Size:	00009C
 */
Container::~Container(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803B65E0
	lis      r3, __vt__Q23efx9Container@ha
	addi     r3, r3, __vt__Q23efx9Container@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_803B65D0
	lis      r3, __vt__Q23efx8TForever@ha
	addi     r3, r3, __vt__Q23efx8TForever@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_803B65D0
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_803B65D0:
	extsh.   r0, r31
	ble      lbl_803B65E0
	mr       r3, r30
	bl       __dl__FPv

lbl_803B65E0:
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
 * --INFO--
 * Address:	803B65FC
 * Size:	00009C
 */
TPelkira_ver01::~TPelkira_ver01()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803B667C
	lis      r3, __vt__Q23efx14TPelkira_ver01@ha
	addi     r3, r3, __vt__Q23efx14TPelkira_ver01@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_803B666C
	lis      r3, __vt__Q23efx9TChasePos@ha
	addi     r3, r3, __vt__Q23efx9TChasePos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_803B666C
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_803B666C:
	extsh.   r0, r31
	ble      lbl_803B667C
	mr       r3, r30
	bl       __dl__FPv

lbl_803B667C:
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
 * --INFO--
 * Address:	803B6698
 * Size:	000004
 */
void TOtakaraAp::forceKill() { }

/*
 * --INFO--
 * Address:	803B669C
 * Size:	000004
 */
void TOtakaraAp::fade() { }

} // namespace efx
