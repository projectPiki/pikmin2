#include "Dolphin/os.h"
#include "Game/CPlate.h"
#include "Game/Piki.h"
#include "Game/Navi.h"
#include "P2Macros.h"

namespace Game {

/*
 * --INFO--
 * Address:	80194FF4
 * Size:	000014
 */
Creature* CPlate::get(void* index) { return mSlots[(int)index].mCreature; }

/*
 * --INFO--
 * Address:	80195008
 * Size:	00003C
 */
void* CPlate::getNext(void* index)
{
	getEnd();
	return (void*)((int)index + 1); // the void* pointer cast stuff is for Container compatibility.
}

/*
 * --INFO--
 * Address:	80195044
 * Size:	000008
 */
void* CPlate::getStart() { return nullptr; }

/*
 * --INFO--
 * Address:	8019504C
 * Size:	000008
 */
void* CPlate::getEnd() { return (void*)mSlotCount; }

/*
 * --INFO--
 * Address:	80195054
 * Size:	00000C
 */
void CPlate::shrink() { _100 = 10; }

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void CPlate::updateShrink()
{
	// UNUSED FUNCTION
}

/*
 * ct__
 * --INFO--
 * Address:	80195060
 * Size:	0001F0
 */
CPlate::CPlate(int slotLimit)
    : Container<Creature>()
    , mParms()
    , mSlotLimit(slotLimit)
{
	_B4        = 10.0f;
	_B0        = 10.0f;
	mPosition  = Vector3f(0.0f);
	_F0        = 0.0f;
	mSlots     = new Slot[mSlotLimit];
	_BC        = 0;
	mSlotCount = 0;
	_110       = 0;
	_111       = 1;
	_F4        = 0.0f;
	_F8        = 0.0f;
	_FC        = 0.0f;
	for (int i = 0; i < ARRAY_SIZE(_104); i++) {
		_104[i] = 0;
	}
	mVelocity = Vector3f(0.0f);
	_D8       = Vector3f(0.0f);
	_100      = 0;
}

/*
 * --INFO--
 * Address:	801952EC
 * Size:	000210
 */
void CPlate::setPos(Vector3f& position, f32 angle, Vector3f& velocity, f32 p4)
{
	f32 offset = mParms.p000();
	offset *= p4;

	if (mVelocity.length2D() > 5.0f) {
		offset = 0.0f;
	}

	f32 rad = _B0 + offset;

	_F0       = angle;
	mPosition = position;

	Vector3f dir = Vector3f(rad * sinf(angle), 0.0f, rad * cosf(angle));
	_D8          = mPosition + dir;
	mVelocity    = velocity;

	Vector3f secondDir = Vector3f(_B8 * sinf(angle), 0.0f, _B8 * cosf(angle));
	_A4                = position + secondDir;
	_111               = 0;
}

/*
 * --INFO--
 * Address:	801954FC
 * Size:	00020C
 */
void CPlate::setPosGray(Vector3f& position, f32 angle, Vector3f& velocity, f32 p4)
{
	f32 offset = mParms.p000();
	offset *= p4;

	if (mVelocity.length2D() > 5.0f) {
		offset = 0.0f;
	}

	f32 rad = _B0 + offset;

	mPosition = position;

	Vector3f dir = Vector3f(rad * sinf(angle), 0.0f, rad * cosf(angle));
	_D8          = mPosition + dir;
	mVelocity    = velocity;

	Vector3f secondDir = Vector3f(_B8 * sinf(angle), 0.0f, _B8 * cosf(angle));
	_A4                = position + secondDir;
	_111               = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void CPlate::setPosNeutral(Vector3f& p1, f32 p2, Vector3f& p3, f32 p4)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80195708
 * Size:	0000A8
 */
int CPlate::getSlot(Creature* piki, SlotChangeListener* listener, bool p3)
{
	if (!p3) {
		static_cast<Piki*>(piki)->mNavi->getOlimarData();
		if (mSlotCount >= 100) {
			return -1;
		}
	}

	_104[static_cast<Piki*>(piki)->mHappaKind]++;
	int slot               = mSlotCount;
	mSlots[slot].mCreature = piki;
	mSlots[slot].mListener = listener;
	mSlotCount++;

	return slot;
}

/*
 * --INFO--
 * Address:	801957B0
 * Size:	0000B8
 */
void CPlate::changeFlower(Creature* creature)
{
	P2ASSERTLINE(312, creature->isPiki());
	int happa     = static_cast<Piki*>(creature)->mHappaKind;
	int prevHappa = (happa + (PikiGrowthStageCount - 1)) % PikiGrowthStageCount;
	/* EpochFlame explains:
	 * PikiGrowthStageCount is 3 in vanilla, so here's how this code works. Hopefully this scales as I thought.
	 * Let's say happa is 2 (flower), so (happa + (PikiGrowthStageCount-1)) resolves to 2 + 3-1 = 4
	 * 4 % PikiGrowthStageCount is 4 % 3. 4/3 has a remainder of 1, which is Bud, so the previous happa is Bud.
	 * I think
	 */
	_104[happa]++;
	_104[prevHappa]--;
}

/*
 * --INFO--
 * Address:	80195868
 * Size:	000128
 */
void CPlate::releaseSlot(Creature* creature, int idx)
{
	Slot& slot = mSlots[idx];
	JUT_ASSERTLINE(331, slot.mCreature == creature, " sorry ...\n");
	_104[static_cast<Piki*>(creature)->mHappaKind]--;
	slot.mCreature = nullptr;
	mSlotCount--;
	_BC--;
	if (mSlotCount < 0) {
		creature->getTypeName();
	}

	for (int i = idx; i < mSlotCount; i++) {
		mSlots[i].mCreature = nullptr;
		mSlots[i].mCreature = mSlots[i + 1].mCreature;
		mSlots[i].mListener = mSlots[i + 1].mListener;
		mSlots[i].mListener->inform(i);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void CPlate::swapSlot(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80195990
 * Size:	000024
 */
bool CPlate::validSlot(int index)
{
	if (0 > index || index >= mSlotCount) {
		return false;
	}
	return true;
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void getPriority(int*, int)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	801959B4
 * Size:	0004A0
 */
void CPlate::sortByColor(Creature* piki, int happaType)
{
	int kind  = static_cast<Piki*>(piki)->getKind();
	int happa = static_cast<Piki*>(piki)->getHappa();

	int pikiCounts[PikiColorCount];
	for (int i = 0; i < PikiColorCount; i++) {
		pikiCounts[i] = (kind + i) % PikiColorCount;
	}

	int happaSlots[PikiHappaCount];
	if (happaType != -1) {
		happaSlots[happaType]                        = Leaf;
		happaSlots[(happaType + 1) % PikiHappaCount] = Bud;
		happaSlots[(happaType + 2) % PikiHappaCount] = Flower;
	}

	for (int i = 0; i < mSlotCount; i++) {
		for (int j = 0; j < mSlotCount; j++) {
			Piki* iPiki = static_cast<Piki*>(mSlots[i].mCreature);
			Piki* jPiki = static_cast<Piki*>(mSlots[j].mCreature);
			int iKind   = iPiki->getKind();
			int jKind   = jPiki->getKind();

			if (iKind != jKind) {
				int nextType;
				for (int k = 0; k < PikiColorCount; k++) {
					if (iKind == pikiCounts[k]) {
						nextType = pikiCounts[k];
						break;
					}
				}
			} else {
			}
		}
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, 0x92492493@ha
	stw      r0, 0x64(r1)
	addi     r10, r6, 0x92492493@l
	stmw     r22, 0x38(r1)
	mr       r30, r5
	mr       r29, r3
	cmpwi    r30, -1
	lbz      r11, 0x2b8(r4)
	lbz      r31, 0x2b9(r4)
	mulhw    r7, r10, r11
	addi     r8, r11, 1
	addi     r0, r11, 4
	addi     r6, r11, 2
	addi     r4, r11, 3
	addi     r27, r11, 5
	mulhw    r5, r10, r8
	add      r7, r7, r11
	addi     r24, r11, 6
	srawi    r9, r7, 2
	srwi     r12, r9, 0x1f
	add      r5, r5, r8
	srawi    r25, r5, 2
	add      r9, r9, r12
	mulhw    r7, r10, r6
	srwi     r26, r25, 0x1f
	add      r12, r7, r6
	add      r7, r25, r26
	srawi    r25, r12, 2
	mulhw    r5, r10, r4
	srwi     r26, r25, 0x1f
	add      r12, r5, r4
	add      r5, r25, r26
	srawi    r26, r12, 2
	mulhw    r3, r10, r0
	srwi     r28, r26, 0x1f
	mulhw    r12, r10, r27
	add      r25, r3, r0
	add      r3, r26, r28
	srawi    r25, r25, 2
	mulhw    r10, r10, r24
	srwi     r26, r25, 0x1f
	add      r12, r12, r27
	add      r28, r25, r26
	srawi    r25, r12, 2
	mulli    r5, r5, 7
	add      r10, r10, r24
	srwi     r26, r25, 0x1f
	subf     r5, r5, r6
	srawi    r10, r10, 2
	mulli    r3, r3, 7
	stw      r5, 0x1c(r1)
	srwi     r12, r10, 0x1f
	add      r25, r25, r26
	mulli    r5, r28, 7
	add      r10, r10, r12
	subf     r3, r3, r4
	stw      r3, 0x20(r1)
	subf     r0, r5, r0
	mulli    r9, r9, 7
	stw      r0, 0x24(r1)
	mulli    r7, r7, 7
	subf     r9, r9, r11
	stw      r9, 0x14(r1)
	mulli    r3, r25, 7
	subf     r7, r7, r8
	stw      r7, 0x18(r1)
	mulli    r0, r10, 7
	subf     r3, r3, r27
	stw      r3, 0x28(r1)
	subf     r0, r0, r24
	stw      r0, 0x2c(r1)
	beq      lbl_80195B3C
	lis      r3, 0x55555556@ha
	addi     r7, r30, 1
	addi     r0, r3, 0x55555556@l
	addi     r4, r30, 2
	mulhw    r6, r0, r7
	slwi     r3, r30, 2
	addi     r9, r1, 8
	li       r5, 0
	stwx     r5, r9, r3
	li       r8, 1
	mulhw    r3, r0, r4
	srwi     r0, r6, 0x1f
	li       r5, 2
	add      r0, r6, r0
	mulli    r6, r0, 3
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r3, r6, r7
	slwi     r3, r3, 2
	subf     r0, r0, r4
	stwx     r8, r9, r3
	slwi     r0, r0, 2
	stwx     r5, r9, r0

lbl_80195B3C:
	li       r25, 0
	li       r26, 0
	b        lbl_80195E34

lbl_80195B48:
	li       r24, 0
	li       r27, 0
	b        lbl_80195E20

lbl_80195B54:
	lwz      r3, 0xc0(r29)
	addi     r0, r3, 0x18
	add      r5, r3, r27
	lwzx     r4, r26, r0
	lwz      r7, 0x18(r5)
	lbz      r6, 0x2b8(r4)
	lbz      r28, 0x2b8(r7)
	cmpw     r6, r28
	beq      lbl_80195D54
	lwz      r0, 0x14(r1)
	cmpw     r6, r0
	bne      lbl_80195B8C
	li       r23, 0
	b        lbl_80195C24

lbl_80195B8C:
	lwz      r0, 0x18(r1)
	cmpw     r6, r0
	bne      lbl_80195BA0
	li       r23, 1
	b        lbl_80195C24

lbl_80195BA0:
	lwz      r0, 0x1c(r1)
	cmpw     r6, r0
	bne      lbl_80195BB4
	li       r23, 2
	b        lbl_80195C24

lbl_80195BB4:
	lwz      r0, 0x20(r1)
	cmpw     r6, r0
	bne      lbl_80195BC8
	li       r23, 3
	b        lbl_80195C24

lbl_80195BC8:
	lwz      r0, 0x24(r1)
	cmpw     r6, r0
	bne      lbl_80195BDC
	li       r23, 4
	b        lbl_80195C24

lbl_80195BDC:
	lwz      r0, 0x28(r1)
	cmpw     r6, r0
	bne      lbl_80195BF0
	li       r23, 5
	b        lbl_80195C24

lbl_80195BF0:
	lwz      r0, 0x2c(r1)
	cmpw     r6, r0
	bne      lbl_80195C04
	li       r23, 6
	b        lbl_80195C24

lbl_80195C04:
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F018@ha
	addi     r5, r4, lbl_8047F018@l
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x195
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r23, 0x80

lbl_80195C24:
	lwz      r0, 0x14(r1)
	cmpw     r28, r0
	bne      lbl_80195C38
	li       r0, 0
	b        lbl_80195CD4

lbl_80195C38:
	lwz      r0, 0x18(r1)
	cmpw     r28, r0
	bne      lbl_80195C4C
	li       r0, 1
	b        lbl_80195CD4

lbl_80195C4C:
	lwz      r0, 0x1c(r1)
	cmpw     r28, r0
	bne      lbl_80195C60
	li       r0, 2
	b        lbl_80195CD4

lbl_80195C60:
	lwz      r0, 0x20(r1)
	cmpw     r28, r0
	bne      lbl_80195C74
	li       r0, 3
	b        lbl_80195CD4

lbl_80195C74:
	lwz      r0, 0x24(r1)
	cmpw     r28, r0
	bne      lbl_80195C88
	li       r0, 4
	b        lbl_80195CD4

lbl_80195C88:
	lwz      r0, 0x28(r1)
	cmpw     r28, r0
	bne      lbl_80195C9C
	li       r0, 5
	b        lbl_80195CD4

lbl_80195C9C:
	lwz      r0, 0x2c(r1)
	cmpw     r28, r0
	bne      lbl_80195CB0
	li       r0, 6
	b        lbl_80195CD4

lbl_80195CB0:
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F018@ha
	addi     r5, r4, lbl_8047F018@l
	mr       r6, r28
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x195
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r0, 0x80

lbl_80195CD4:
	cmpw     r24, r25
	ble      lbl_80195E18
	cmpw     r0, r23
	bge      lbl_80195E18
	lwz      r3, 0xc0(r29)
	li       r0, 0
	mr       r4, r24
	add      r6, r3, r27
	add      r22, r3, r26
	lwz      r28, 0x18(r6)
	lwz      r23, 0x1c(r6)
	lwz      r5, 0x18(r22)
	lwz      r3, 0x1c(r22)
	stw      r0, 0x18(r6)
	stw      r5, 0x18(r6)
	stw      r3, 0x1c(r6)
	lwz      r3, 0x1c(r6)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x18(r22)
	stw      r28, 0x18(r22)
	stw      r23, 0x1c(r22)
	lwz      r3, 0x1c(r22)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80195E18

lbl_80195D54:
	cmpwi    r30, -1
	bne      lbl_80195D88
	lbz      r4, 0x2b9(r4)
	lbz      r0, 0x2b9(r7)
	subf     r6, r31, r4
	subf     r4, r4, r31
	or       r6, r6, r4
	subf     r4, r31, r0
	subf     r0, r0, r31
	or       r0, r4, r0
	srwi     r4, r6, 0x1f
	srwi     r0, r0, 0x1f
	b        lbl_80195DA4

lbl_80195D88:
	lbz      r4, 0x2b9(r4)
	addi     r6, r1, 8
	lbz      r0, 0x2b9(r7)
	slwi     r4, r4, 2
	slwi     r0, r0, 2
	lwzx     r4, r6, r4
	lwzx     r0, r6, r0

lbl_80195DA4:
	cmpw     r24, r25
	ble      lbl_80195E18
	cmpw     r0, r4
	bge      lbl_80195E18
	add      r28, r3, r26
	lwz      r23, 0x18(r5)
	lwz      r22, 0x1c(r5)
	li       r0, 0
	lwz      r6, 0x18(r28)
	mr       r4, r24
	lwz      r3, 0x1c(r28)
	stw      r0, 0x18(r5)
	stw      r6, 0x18(r5)
	stw      r3, 0x1c(r5)
	lwz      r3, 0x1c(r5)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x18(r28)
	stw      r23, 0x18(r28)
	stw      r22, 0x1c(r28)
	lwz      r3, 0x1c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80195E18:
	addi     r27, r27, 0x20
	addi     r24, r24, 1

lbl_80195E20:
	lwz      r0, 0xc8(r29)
	cmpw     r24, r0
	blt      lbl_80195B54
	addi     r26, r26, 0x20
	addi     r25, r25, 1

lbl_80195E34:
	lwz      r0, 0xc8(r29)
	cmpw     r25, r0
	blt      lbl_80195B48
	lmw      r22, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80195E54
 * Size:	0001E0
 */
void CPlate::rearrangeSlot(Vector3f& p1, f32 p2, Vector3f& p3)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stmw     r24, 0x20(r1)
	mr       r27, r3
	lwz      r3, 0xc8(r3)
	lfs      f31, lbl_80518EF4@sda21(r2)
	mr       r28, r4
	addi     r30, r3, -1
	b        lbl_80196008

lbl_80195E8C:
	mr       r29, r30
	slwi     r31, r30, 5
	b        lbl_80195FFC

lbl_80195E98:
	lwz      r4, 0xc0(r27)
	addi     r0, r31, 0x18
	addi     r3, r1, 0x14
	lwzx     r4, r4, r0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r28)
	lfs      f0, 0x18(r1)
	lfs      f3, 8(r28)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r1)
	lfs      f1, 0(r28)
	lfs      f0, 0x14(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f0, f1, f0
	fmuls    f1, f2, f2
	fmadds   f0, f0, f0, f3
	fadds    f30, f1, f0
	fcmpo    cr0, f30, f31
	ble      lbl_80195F04
	ble      lbl_80195F08
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_80195F08

lbl_80195F04:
	fmr      f30, f31

lbl_80195F08:
	lwz      r4, 0xc0(r27)
	addi     r0, r31, -8
	addi     r3, r1, 8
	lwzx     r4, r4, r0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r28)
	lfs      f0, 0xc(r1)
	lfs      f3, 0(r28)
	fsubs    f4, f1, f0
	lfs      f2, 8(r1)
	lfs      f1, 8(r28)
	lfs      f0, 0x10(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	fmadds   f0, f2, f2, f3
	fmuls    f1, f1, f1
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_80195F74
	ble      lbl_80195F78
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_80195F78

lbl_80195F74:
	fmr      f0, f31

lbl_80195F78:
	fcmpo    cr0, f30, f0
	bge      lbl_80195FF4
	addi     r0, r29, -1
	lwz      r5, 0xc0(r27)
	slwi     r3, r0, 5
	li       r0, 0
	add      r6, r5, r31
	mr       r4, r29
	add      r24, r5, r3
	lwz      r25, 0x18(r6)
	lwz      r26, 0x1c(r6)
	lwz      r5, 0x18(r24)
	lwz      r3, 0x1c(r24)
	stw      r0, 0x18(r6)
	stw      r5, 0x18(r6)
	stw      r3, 0x1c(r6)
	lwz      r3, 0x1c(r6)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r4, r29, -1
	stw      r0, 0x18(r24)
	stw      r25, 0x18(r24)
	stw      r26, 0x1c(r24)
	lwz      r3, 0x1c(r24)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80195FF4:
	addi     r31, r31, -32
	addi     r29, r29, -1

lbl_80195FFC:
	cmpwi    r29, 1
	bge      lbl_80195E98
	addi     r30, r30, -1

lbl_80196008:
	cmpwi    r30, 1
	bge      lbl_80195E8C
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80196034
 * Size:	0000C4
 */
// void getSlotPosition__Q24Game6CPlateFiR10Vector3f()
void CPlate::getSlotPosition(int p1, Vector3f& p2)
{
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
	blt      lbl_80196068
	lwz      r0, 0xc8(r29)
	cmpw     r30, r0
	blt      lbl_80196070

lbl_80196068:
	li       r0, 0
	b        lbl_80196074

lbl_80196070:
	li       r0, 1

lbl_80196074:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8019609C
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F030@ha
	addi     r5, r4, lbl_8047F030@l
	mr       r6, r30
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x273
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019609C:
	slwi     r3, r30, 5
	lwz      r0, 0xc0(r29)
	addi     r3, r3, 0xc
	lfs      f0, 0xd8(r29)
	add      r3, r0, r3
	lfs      f2, 0xdc(r29)
	lfs      f1, 0(r3)
	lfs      f3, 4(r3)
	fadds    f0, f1, f0
	lfs      f4, 8(r3)
	lfs      f1, 0xe0(r29)
	fadds    f2, f3, f2
	stfs     f0, 0(r31)
	fadds    f0, f4, f1
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801960F8
 * Size:	0001B8
 */
void CPlate::refresh(int, f32)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518F0C@sda21(r2)
	stw      r0, 0x14(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80196118
	fmr      f1, f0
	b        lbl_80196128

lbl_80196118:
	lfs      f0, lbl_80518EF4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80196128
	fmr      f1, f0

lbl_80196128:
	lwz      r5, 0xbc(r3)
	cmpw     r4, r5
	bge      lbl_80196144
	lwz      r0, 0xc8(r3)
	subf     r5, r4, r5
	subf     r0, r5, r0
	stw      r0, 0xc8(r3)

lbl_80196144:
	stw      r4, 0xbc(r3)
	lbz      r0, 0x100(r3)
	lfs      f2, 0x90(r3)
	cmplwi   r0, 0
	beq      lbl_80196160
	lfs      f0, lbl_80518F20@sda21(r2)
	b        lbl_80196164

lbl_80196160:
	lfs      f0, lbl_80518F0C@sda21(r2)

lbl_80196164:
	xoris    r5, r4, 0x8000
	lis      r0, 0x4330
	stw      r5, 0xc(r1)
	fmuls    f0, f2, f0
	lfd      f5, lbl_80518F38@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_80518F24@sda21(r2)
	lfd      f4, 8(r1)
	lfs      f2, lbl_80518EF4@sda21(r2)
	fsubs    f4, f4, f5
	fdivs    f4, f4, f3
	fcmpo    cr0, f4, f2
	ble      lbl_801961A8
	ble      lbl_801961AC
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_801961AC

lbl_801961A8:
	fmr      f4, f2

lbl_801961AC:
	lfs      f3, lbl_80518F28@sda21(r2)
	lfs      f2, lbl_80518F2C@sda21(r2)
	fmuls    f3, f3, f0
	fmuls    f5, f2, f0
	fmuls    f2, f3, f4
	stfs     f2, 0xb8(r3)
	lfs      f2, 0xb8(r3)
	fcmpo    cr0, f5, f2
	ble      lbl_801961D8
	fmr      f4, f5
	b        lbl_801961E0

lbl_801961D8:
	fmr      f4, f2
	fmr      f2, f5

lbl_801961E0:
	fsubs    f3, f4, f2
	lfs      f2, lbl_80518EF4@sda21(r2)
	fneg     f3, f3
	fmadds   f3, f1, f3, f4
	stfs     f3, 0xb4(r3)
	lfs      f3, 0xb4(r3)
	fcmpu    cr0, f2, f3
	bne      lbl_8019620C
	lfs      f2, lbl_80518F00@sda21(r2)
	stfs     f2, 0xb0(r3)
	b        lbl_80196248

lbl_8019620C:
	xoris    r5, r4, 0x8000
	lis      r0, 0x4330
	stw      r5, 0xc(r1)
	lfs      f2, lbl_80518F24@sda21(r2)
	stw      r0, 8(r1)
	lfd      f4, lbl_80518F38@sda21(r2)
	fmuls    f2, f2, f3
	lfd      f3, 8(r1)
	lfs      f5, lbl_80518F30@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f3, f5, f3
	fmuls    f3, f3, f0
	fmuls    f3, f0, f3
	fdivs    f2, f3, f2
	stfs     f2, 0xb0(r3)

lbl_80196248:
	lfs      f4, 0x68(r3)
	lfs      f2, 0xb0(r3)
	fcmpo    cr0, f2, f4
	ble      lbl_8019629C
	xoris    r4, r4, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfd      f3, lbl_80518F38@sda21(r2)
	stw      r0, 8(r1)
	lfs      f5, lbl_80518F30@sda21(r2)
	lfd      f2, 8(r1)
	stfs     f4, 0xb0(r3)
	fsubs    f4, f2, f3
	lfs      f3, lbl_80518F24@sda21(r2)
	lfs      f2, 0xb0(r3)
	fmuls    f4, f5, f4
	fmuls    f2, f3, f2
	fmuls    f3, f4, f0
	fmuls    f0, f0, f3
	fdivs    f0, f0, f2
	stfs     f0, 0xb4(r3)

lbl_8019629C:
	bl       refreshSlot__Q24Game6CPlateFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801962B0
 * Size:	0002EC
 */
void CPlate::refreshSlot(f32)
{
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stfd     f24, 0xd0(r1)
	psq_st   f24, 216(r1), 0, qr0
	stfd     f23, 0xc0(r1)
	psq_st   f23, 200(r1), 0, qr0
	stfd     f22, 0xb0(r1)
	psq_st   f22, 184(r1), 0, qr0
	stmw     r25, 0x94(r1)
	mr       r29, r3
	lfs      f2, lbl_80518EF4@sda21(r2)
	lfs      f3, 0xb0(r3)
	fmr      f24, f1
	lfs      f1, 0xf0(r3)
	addi     r3, r1, 0x44
	lfs      f0, lbl_80518F0C@sda21(r2)
	fneg     f26, f3
	stfs     f2, 0x38(r1)
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x38
	stfs     f1, 0x3c(r1)
	li       r31, 0
	stfs     f2, 0x40(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lbz      r0, 0x100(r29)
	lfs      f2, 0x90(r29)
	cmplwi   r0, 0
	beq      lbl_80196370
	lfs      f1, lbl_80518F20@sda21(r2)
	b        lbl_80196374

lbl_80196370:
	lfs      f1, lbl_80518F0C@sda21(r2)

lbl_80196374:
	lfs      f0, lbl_80518EF4@sda21(r2)
	fmuls    f25, f2, f1
	addi     r3, r1, 0x44
	addi     r4, r1, 0x20
	stfs     f0, 0x20(r1)
	addi     r5, r1, 0x14
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       PSMTXMultVec
	lfs      f1, 0x18(r1)
	li       r30, 1
	lfs      f2, 0x1c(r1)
	li       r26, 0
	lfs      f0, 0x14(r1)
	lis      r28, 0x4330
	lfs      f28, lbl_80518F40@sda21(r2)
	stfs     f0, 0xf4(r29)
	fmuls    f27, f28, f25
	lfs      f29, lbl_80518EF4@sda21(r2)
	stfs     f1, 0xf8(r29)
	lfs      f30, lbl_80518F44@sda21(r2)
	stfs     f2, 0xfc(r29)
	lfd      f31, lbl_80518F38@sda21(r2)
	b        lbl_8019652C

lbl_801963D4:
	lfs      f2, 0xb0(r29)
	fmuls    f1, f26, f26
	fmuls    f0, f2, f2
	fsubs    f0, f0, f1
	fcmpo    cr0, f0, f29
	ble      lbl_80196404
	fmsubs   f1, f2, f2, f1
	fcmpo    cr0, f1, f29
	ble      lbl_80196408
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80196408

lbl_80196404:
	fmr      f1, f29

lbl_80196408:
	lfs      f0, 0xb4(r29)
	fmuls    f0, f0, f1
	fdivs    f0, f0, f2
	fdivs    f0, f0, f27
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r3, 0x7c(r1)
	cmpwi    r3, 0
	bge      lbl_80196430
	li       r3, 0

lbl_80196430:
	fcmpo    cr0, f24, f30
	bge      lbl_80196450
	cmpwi    r3, 0
	bne      lbl_80196450
	subf     r0, r31, r0
	cmpwi    r0, 1
	ble      lbl_80196450
	li       r3, 1

lbl_80196450:
	xoris    r0, r3, 0x8000
	xoris    r4, r30, 0x8000
	stw      r0, 0x84(r1)
	slwi     r3, r3, 1
	mr       r27, r26
	stw      r28, 0x80(r1)
	addi     r25, r3, 1
	lfd      f0, 0x80(r1)
	stw      r4, 0x8c(r1)
	fsubs    f1, f0, f31
	stw      r28, 0x88(r1)
	lfd      f0, 0x88(r1)
	fmuls    f1, f1, f25
	stw      r4, 0x7c(r1)
	fsubs    f0, f0, f31
	stw      r28, 0x78(r1)
	fmuls    f1, f28, f1
	lfd      f2, 0x78(r1)
	fmuls    f0, f0, f25
	fsubs    f2, f2, f31
	fmuls    f23, f28, f0
	fmuls    f22, f2, f1
	b        lbl_8019651C

lbl_801964AC:
	lwz      r0, 0xbc(r29)
	cmpw     r31, r0
	bge      lbl_80196514
	lwz      r0, 0xc0(r29)
	addi     r3, r1, 0x44
	lfs      f0, lbl_80518EF4@sda21(r2)
	addi     r5, r1, 8
	add      r4, r0, r27
	stfs     f22, 0(r4)
	stfs     f0, 4(r4)
	stfs     f26, 8(r4)
	lwz      r0, 0xc0(r29)
	add      r4, r0, r27
	bl       PSMTXMultVec
	lwz      r0, 0xc0(r29)
	addi     r3, r27, 0xc
	lfs      f1, 0xc(r1)
	addi     r26, r26, 0x20
	lfs      f2, 0x10(r1)
	add      r3, r0, r3
	lfs      f0, 8(r1)
	addi     r27, r27, 0x20
	addi     r31, r31, 1
	stfs     f0, 0(r3)
	stfs     f1, 4(r3)
	stfs     f2, 8(r3)

lbl_80196514:
	fsubs    f22, f22, f23
	addi     r25, r25, -1

lbl_8019651C:
	cmpwi    r25, 0
	bgt      lbl_801964AC
	fadds    f26, f26, f27
	mulli    r30, r30, -1

lbl_8019652C:
	lwz      r0, 0xbc(r29)
	cmpw     r31, r0
	blt      lbl_801963D4
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	psq_l    f24, 216(r1), 0, qr0
	lfd      f24, 0xd0(r1)
	psq_l    f23, 200(r1), 0, qr0
	lfd      f23, 0xc0(r1)
	psq_l    f22, 184(r1), 0, qr0
	lfd      f22, 0xb0(r1)
	lmw      r25, 0x94(r1)
	lwz      r0, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/*
 * update__Q24Game6CPlateFv
 *
 * --INFO--
 * Address:	8019659C
 * Size:	000018
 */
void CPlate::update()
{
	if (_100 == 0) {
		return;
	}
	_100--;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void CPlate::directDraw(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game
