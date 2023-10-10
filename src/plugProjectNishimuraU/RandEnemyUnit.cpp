#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {
/*
 * --INFO--
 * Address:	80248914
 * Size:	0000A8
 */
RandEnemyUnit::RandEnemyUnit(MapUnitGenerator* generator, bool isVersusHiba)
{
	mGenerator  = generator;
	mTotalCount = 0;
	if (mGenerator->mFloorInfo) {
		mMaxEnemies = mGenerator->mFloorInfo->getTekiMax();
	} else {
		mMaxEnemies = 0;
	}

	mMapTile   = nullptr;
	mSpawn     = nullptr;
	mEnemyUnit = nullptr;

	if (isVersusHiba && mGenerator->mIsVersusMode) {
		mIsVersusHiba = true;
	} else {
		mIsVersusHiba = false;
	}

	setEnemyTypeWeight();
}

/*
 * --INFO--
 * Address:	802489BC
 * Size:	000008
 */
void RandEnemyUnit::setManageClassPtr(RandMapScore* score) { mMapScore = score; }

/*
 * --INFO--
 * Address:	802489C4
 * Size:	000054
 */
void RandEnemyUnit::setEnemySlot()
{
	if (mTotalCount < mMaxEnemies) {
		setEnemyTypeC();
		setEnemyTypeF();
		setEnemyTypeB();
		setEnemyTypeA();
	}
}

/*
 * --INFO--
 * Address:	80248A18
 * Size:	000278
 */
void RandEnemyUnit::setEnemyTypeWeight()
{
	int totalWeights = 0;

	for (int i = 0; i < 4; i++) {
		mTypeCount[i] = 0;
		mTypeMax[i]   = 0;
	}

	int enemyTypes[4] = { BaseGen::TekiA__Easy, BaseGen::TekiB__Hard, BaseGen::Seam__Door, BaseGen::TekiF__Special }; // _38

	int weightList[4]; // _28
	int countList[4];  // _18

	for (int i = 0; i < 4; i++) {
		weightList[i] = 0;
		countList[i]  = 0;
	}

	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* tekiInfo = currEnemy->getTekiInfo();
		if (tekiInfo) {
			for (int i = 0; i < 4; i++) {
				if (tekiInfo->mType == enemyTypes[i]) {
					int weight = tekiInfo->mWeight % 10;
					int num    = tekiInfo->mWeight / 10;
					if (weight) {
						totalWeights += weight;
						weightList[i] += weight;
					}
					if (num) {
						mTypeMax[i] += num;
						countList[i] += num;
					}
				}
			}
		}
	}

	int tallyWeights[4];
	tallyWeights[1] = weightList[0] + weightList[1];
	tallyWeights[2] = weightList[0] + weightList[1] + weightList[2];
	tallyWeights[0] = weightList[0];
	tallyWeights[3] = weightList[0] + weightList[1] + weightList[2] + weightList[3];

	int totalNum = countList[0];
	for (int i = 1; i < 4; i++) {
		totalNum += countList[i];
	}

	for (totalNum; totalNum < mMaxEnemies; totalNum++) {
		int randEnemy = totalWeights * randFloat();
		for (int i = 0; i < 4; i++) {
			if (randEnemy < tallyWeights[i]) {
				mTypeMax[i]++;
				break;
			}
		}
	}
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stmw     r27, 0x6c(r1)
	mr       r30, r3
	li       r3, 0
	lwz      r10, 0(r30)
	lis      r4, lbl_804840C0@ha
	lwzu     r7, lbl_804840C0@l(r4)
	addi     r0, r1, 0x28
	lwz      r10, 0x14(r10)
	addi     r8, r1, 0x18
	lwz      r6, 4(r4)
	li       r9, 0
	lwz      r5, 8(r4)
	lwz      r4, 0xc(r4)
	stw      r3, 0x28(r1)
	stw      r3, 0x10(r30)
	stw      r3, 0x20(r30)
	stw      r3, 0x14(r30)
	stw      r3, 0x24(r30)
	stw      r3, 0x18(r30)
	stw      r3, 0x28(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x2c(r30)
	stw      r7, 0x38(r1)
	lwz      r10, 0x10(r10)
	stw      r6, 0x3c(r1)
	stw      r5, 0x40(r1)
	stw      r4, 0x44(r1)
	stw      r3, 0x18(r1)
	stw      r3, 0x2c(r1)
	stw      r3, 0x1c(r1)
	stw      r3, 0x30(r1)
	stw      r3, 0x20(r1)
	stw      r3, 0x34(r1)
	stw      r3, 0x24(r1)
	b        lbl_80248B74

lbl_80248AC0:
	lwz      r3, 0x18(r10)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80248B70
	li       r11, 4
	mr       r5, r0
	mr       r6, r30
	mr       r7, r8
	addi     r4, r1, 0x38
	mtctr    r11

lbl_80248AE8:
	lwz      r12, 0x20(r3)
	lwz      r11, 0(r4)
	cmpw     r12, r11
	bne      lbl_80248B5C
	lis      r11, 0x66666667@ha
	lwz      r29, 0x1c(r3)
	addi     r11, r11, 0x66666667@l
	mulhw    r11, r11, r29
	srawi    r12, r11, 2
	srwi     r28, r12, 0x1f
	srawi    r11, r11, 2
	add      r12, r12, r28
	mulli    r28, r12, 0xa
	srwi     r12, r11, 0x1f
	add      r31, r11, r12
	subf.    r12, r28, r29
	beq      lbl_80248B3C
	lwz      r11, 0(r5)
	add      r9, r9, r12
	add      r11, r11, r12
	stw      r11, 0(r5)

lbl_80248B3C:
	cmpwi    r31, 0
	beq      lbl_80248B5C
	lwz      r12, 0x20(r6)
	lwz      r11, 0(r7)
	add      r12, r12, r31
	add      r11, r11, r31
	stw      r12, 0x20(r6)
	stw      r11, 0(r7)

lbl_80248B5C:
	addi     r4, r4, 4
	addi     r5, r5, 4
	addi     r6, r6, 4
	addi     r7, r7, 4
	bdnz     lbl_80248AE8

lbl_80248B70:
	lwz      r10, 4(r10)

lbl_80248B74:
	cmplwi   r10, 0
	bne      lbl_80248AC0
	lwz      r4, 0x28(r1)
	addi     r31, r1, 8
	lwz      r0, 0x2c(r1)
	xoris    r29, r9, 0x8000
	lwz      r5, 0x18(r1)
	lis      r28, 0x4330
	lwz      r3, 0x1c(r1)
	add      r6, r4, r0
	lwz      r0, 0x30(r1)
	stw      r6, 0xc(r1)
	add      r5, r5, r3
	lwz      r3, 0x20(r1)
	add      r6, r6, r0
	lwz      r0, 0x34(r1)
	stw      r6, 0x10(r1)
	add      r5, r5, r3
	lwz      r3, 0x24(r1)
	add      r6, r6, r0
	stw      r4, 8(r1)
	add      r5, r5, r3
	lfd      f30, lbl_8051A790@sda21(r2)
	stw      r6, 0x14(r1)
	mr       r27, r5
	lfs      f31, lbl_8051A788@sda21(r2)
	b        lbl_80248C60

lbl_80248BE0:
	bl       rand
	xoris    r3, r3, 0x8000
	stw      r28, 0x48(r1)
	li       r0, 4
	mr       r4, r31
	stw      r3, 0x4c(r1)
	li       r5, 0
	lfd      f0, 0x48(r1)
	stw      r29, 0x54(r1)
	fsubs    f0, f0, f30
	stw      r28, 0x50(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r3, 0x5c(r1)
	mtctr    r0

lbl_80248C2C:
	lwz      r0, 0(r4)
	cmpw     r3, r0
	bge      lbl_80248C50
	slwi     r3, r5, 2
	addi     r4, r3, 0x20
	lwzx     r3, r30, r4
	addi     r0, r3, 1
	stwx     r0, r30, r4
	b        lbl_80248C5C

lbl_80248C50:
	addi     r4, r4, 4
	addi     r5, r5, 1
	bdnz     lbl_80248C2C

lbl_80248C5C:
	addi     r27, r27, 1

lbl_80248C60:
	lwz      r0, 0xc(r30)
	cmpw     r27, r0
	blt      lbl_80248BE0
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80248C90
 * Size:	0000F0
 */
void RandEnemyUnit::setEnemyTypeC()
{
	if (mGenerator->mIsVersusMode) {
		setVersusHibaTypeC();
	}

	if (mTypeCount[TEKITYPE_C] < mTypeMax[TEKITYPE_C]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEnemyTypeC();
		}
		if (mTypeCount[TEKITYPE_C] < mTypeMax[TEKITYPE_C]) {
			for (int i = 0; i < 100; i++) {
				int slot = -1;
				setSlotEnemyTypeC(slot, -1);
				setUnitRandEnemyTypeC();
				if (mMapTile && slot >= 0 && mEnemyUnit) {
					makeSetEnemyTypeC(mMapTile, slot, mEnemyUnit);
					if (mTypeCount[TEKITYPE_C] < mTypeMax[TEKITYPE_C]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80248D80
 * Size:	0000CC
 */
void RandEnemyUnit::setEnemyTypeF()
{
	if (mTypeCount[TEKITYPE_F] < mTypeMax[TEKITYPE_F]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEnemyTypeF();
		}
		if (mTypeCount[TEKITYPE_F] < mTypeMax[TEKITYPE_F]) {
			for (int i = 0; i < 100; i++) {
				setSlotEnemyTypeF(-1);
				setUnitRandEnemyTypeF();
				if (mMapTile && mSpawn && mEnemyUnit) {
					makeSetEnemyTypeF(mMapTile, mSpawn, mEnemyUnit);
					if (mTypeCount[TEKITYPE_F] < mTypeMax[TEKITYPE_F]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80248E4C
 * Size:	0000CC
 */
void RandEnemyUnit::setEnemyTypeB()
{
	if (mTypeCount[TEKITYPE_B] < mTypeMax[TEKITYPE_B]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEnemyTypeB();
		}
		if (mTypeCount[TEKITYPE_B] < mTypeMax[TEKITYPE_B]) {
			for (int i = 0; i < 100; i++) {
				setSlotEnemyTypeB(-1);
				setUnitRandEnemyTypeB();
				if (mMapTile && mSpawn && mEnemyUnit) {
					makeSetEnemyTypeB(mMapTile, mSpawn, mEnemyUnit);
					if (mTypeCount[TEKITYPE_B] < mTypeMax[TEKITYPE_B]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80248F18
 * Size:	000104
 */
void RandEnemyUnit::setEnemyTypeA()
{
	if (mTypeCount[TEKITYPE_A] < mTypeMax[TEKITYPE_A]) {
		if (mGenerator->mIsVersusMode) {
			setVersusEasyEnemy();
			setVersusEnemyTypeA();
		}
		if (mTypeCount[TEKITYPE_A] < mTypeMax[TEKITYPE_A]) {
			for (int i = 0; i < 100; i++) {
				int a = 0;
				int b = 0;
				int c = 0;
				setSlotEnemyTypeA(a, b, -1);
				setUnitRandEnemyTypeA(c, a, b);
				if (mMapTile && mSpawn && mEnemyUnit && c) {
					makeSetEnemyTypeA(mMapTile, mSpawn, mEnemyUnit, c);
					if (mTypeCount[TEKITYPE_A] < mTypeMax[TEKITYPE_A]) {
						continue;
					}
					return;
				}
				return;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024901C
 * Size:	000190
 */
void RandEnemyUnit::setVersusHibaTypeC()
{
	if (mIsVersusHiba) {
		TekiInfo* info = new TekiInfo;
		info->mEnemyID = EnemyTypeID::EnemyID_ElecHiba;
		info->mType    = BaseGen::Seam__Door;

		EnemyUnit* unit = new EnemyUnit;
		unit->mTekiInfo = info;

		FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currTile)
		{
			if (currTile->mUnitInfo->getUnitKind() == UNITKIND_Room) {
				int numDoors = currTile->getNumDoors();
				for (int i = 0; i < numDoors; i++) {
					if (!currTile->isGateSetDoor(i)) {
						Vector3f pos     = currTile->getDoorGlobalPosition(i);
						f32 dir          = currTile->getDoorGlobalDirection(i);
						EnemyNode* enemy = new EnemyNode(unit, nullptr, 1);
						enemy->setGlobalData(pos, dir);
						enemy->setBirthDoorIndex(i);
						currTile->mEnemyNode->add(enemy);
					}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802491AC
 * Size:	0001A4
 */
void RandEnemyUnit::setVersusEnemyTypeC()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::Seam__Door) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_C]) {
				int altNum     = (count - mTypeCount[TEKITYPE_C]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_C]) / 2) * 2;

				int randIdx = 2.0f * randFloat();
				for (int i = 0; i < roundedMax; i++, randIdx ^= 1) {
					int slot = -1;
					setSlotEnemyTypeC(slot, randIdx);

					if (mMapTile && slot >= 0 && mEnemyUnit) {
						makeSetEnemyTypeC(mMapTile, slot, mEnemyUnit);
						continue;
					}
					return;
				}

				if (altNum) {
					int slot = -1;
					setSlotEnemyTypeC(slot, -1);

					if (mMapTile && slot >= 0 && mEnemyUnit) {
						makeSetEnemyTypeC(mMapTile, slot, mEnemyUnit);
						continue;
					}
					return;
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80249350
 * Size:	0002F8
 */
void RandEnemyUnit::setSlotEnemyTypeC(int&, int)
{
	/*
	stwu     r1, -0xc60(r1)
	mflr     r0
	stw      r0, 0xc64(r1)
	stmw     r17, 0xc24(r1)
	mr       r30, r3
	mr       r31, r4
	li       r22, 0
	li       r21, 0
	lwz      r3, 0(r3)
	lbz      r0, 2(r3)
	lwz      r17, 0x28(r3)
	cmplwi   r0, 0
	beq      lbl_802494B8
	cmpwi    r5, 0
	li       r20, 0
	li       r19, 0
	bne      lbl_802493B8
	lwz      r3, 4(r30)
	li       r4, 3
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	cmplwi   r3, 0
	beq      lbl_802493E0
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	li       r19, -1
	mr       r20, r3
	b        lbl_802493E0

lbl_802493B8:
	cmpwi    r5, 1
	bne      lbl_802493E0
	lwz      r3, 4(r30)
	li       r4, 4
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	cmplwi   r3, 0
	beq      lbl_802493E0
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	li       r19, 1
	mr       r20, r3

lbl_802493E0:
	lwz      r18, 0x10(r17)
	addi     r25, r1, 0x808
	addi     r24, r1, 0x408
	addi     r23, r1, 8
	b        lbl_802494AC

lbl_802493F4:
	lwz      r3, 0x18(r18)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	beq      lbl_80249414
	lwz      r3, 0x18(r18)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 2
	bne      lbl_802494A8

lbl_80249414:
	mr       r3, r18
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r29, r3
	mr       r28, r25
	mr       r27, r24
	mr       r26, r23
	li       r17, 0
	b        lbl_802494A0

lbl_80249434:
	mr       r3, r18
	mr       r4, r17
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024949C
	stw      r18, 0(r28)
	stw      r17, 0(r27)
	lwz      r3, 0(r28)
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	add      r0, r20, r3
	mullw    r0, r19, r0
	stw      r0, 0(r26)
	lwz      r0, 0(r26)
	cmpwi    r0, 0
	bgt      lbl_80249478
	li       r0, 1
	stw      r0, 0(r26)

lbl_80249478:
	lwz      r0, 0(r26)
	addi     r25, r25, 4
	addi     r24, r24, 4
	addi     r23, r23, 4
	add      r21, r21, r0
	addi     r22, r22, 1
	addi     r28, r28, 4
	addi     r27, r27, 4
	addi     r26, r26, 4

lbl_8024949C:
	addi     r17, r17, 1

lbl_802494A0:
	cmpw     r17, r29
	blt      lbl_80249434

lbl_802494A8:
	lwz      r18, 4(r18)

lbl_802494AC:
	cmplwi   r18, 0
	bne      lbl_802493F4
	b        lbl_80249580

lbl_802494B8:
	lwz      r26, 0x10(r17)
	addi     r23, r1, 0x808
	addi     r24, r1, 0x408
	addi     r25, r1, 8
	b        lbl_80249578

lbl_802494CC:
	lwz      r3, 0x18(r26)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	beq      lbl_802494EC
	lwz      r3, 0x18(r26)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 2
	bne      lbl_80249574

lbl_802494EC:
	mr       r3, r26
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r17, r3
	lwz      r3, 0x18(r26)
	li       r27, 1
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80249510
	li       r27, 0x64

lbl_80249510:
	mr       r18, r23
	mr       r19, r24
	mr       r20, r25
	li       r28, 0
	b        lbl_8024956C

lbl_80249524:
	mr       r3, r26
	mr       r4, r28
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80249568
	stw      r27, 0(r20)
	addi     r23, r23, 4
	addi     r24, r24, 4
	addi     r25, r25, 4
	lwz      r0, 0(r20)
	addi     r20, r20, 4
	stw      r26, 0(r18)
	addi     r18, r18, 4
	add      r21, r21, r0
	addi     r22, r22, 1
	stw      r28, 0(r19)
	addi     r19, r19, 4

lbl_80249568:
	addi     r28, r28, 1

lbl_8024956C:
	cmpw     r28, r17
	blt      lbl_80249524

lbl_80249574:
	lwz      r26, 4(r26)

lbl_80249578:
	cmplwi   r26, 0
	bne      lbl_802494CC

lbl_80249580:
	li       r0, 0
	cmpwi    r22, 0
	stw      r0, 0x30(r30)
	stw      r0, 0x34(r30)
	beq      lbl_80249634
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc0c(r1)
	xoris    r0, r21, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	addi     r5, r1, 8
	stw      r4, 0xc08(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	li       r7, 0
	lfd      f1, 0xc08(r1)
	stw      r0, 0xc14(r1)
	fsubs    f1, f1, f2
	stw      r4, 0xc10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0xc10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xc18(r1)
	lwz      r3, 0xc1c(r1)
	mtctr    r22
	cmpwi    r22, 0
	ble      lbl_80249634

lbl_802495F8:
	lwz      r0, 0(r5)
	add      r6, r6, r0
	cmpw     r6, r3
	ble      lbl_80249628
	slwi     r0, r7, 2
	addi     r3, r1, 0x808
	lwzx     r4, r3, r0
	addi     r3, r1, 0x408
	lwzx     r0, r3, r0
	stw      r4, 0x30(r30)
	stw      r0, 0(r31)
	b        lbl_80249634

lbl_80249628:
	addi     r5, r5, 4
	addi     r7, r7, 1
	bdnz     lbl_802495F8

lbl_80249634:
	lmw      r17, 0xc24(r1)
	lwz      r0, 0xc64(r1)
	mtlr     r0
	addi     r1, r1, 0xc60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80249648
 * Size:	0001A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeC()
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	li       r9, 0
	stw      r0, 0x434(r1)
	addi     r5, r1, 0x208
	stw      r31, 0x42c(r1)
	addi     r31, r1, 8
	mr       r6, r31
	stw      r30, 0x428(r1)
	li       r30, 0
	stw      r29, 0x424(r1)
	li       r29, 0
	stw      r28, 0x420(r1)
	mr       r28, r3
	lwz      r3, 0(r3)
	lwz      r3, 0x14(r3)
	lwz      r10, 0x10(r3)
	b        lbl_80249720

lbl_80249690:
	lwz      r8, 0x18(r10)
	lwz      r4, 0(r8)
	cmplwi   r4, 0
	beq      lbl_8024971C
	lwz      r0, 0x20(r4)
	cmpwi    r0, 5
	bne      lbl_8024971C
	lis      r3, 0x66666667@ha
	lwz      r7, 0x1c(r4)
	addi     r0, r3, 0x66666667@l
	mulhw    r0, r0, r7
	srawi    r3, r0, 2
	srwi     r4, r3, 0x1f
	srawi    r0, r0, 2
	add      r3, r3, r4
	mulli    r4, r3, 0xa
	srwi     r3, r0, 0x1f
	add.     r11, r0, r3
	subf     r3, r4, r7
	beq      lbl_802496F8
	lwz      r0, 0x18(r28)
	add      r9, r9, r11
	cmpw     r9, r0
	ble      lbl_802496F8
	stw      r8, 0x38(r28)
	b        lbl_802497C8

lbl_802496F8:
	cmpwi    r3, 0
	beq      lbl_8024971C
	stw      r3, 0(r6)
	addi     r30, r30, 1
	lwz      r0, 0(r6)
	addi     r6, r6, 4
	stw      r8, 0(r5)
	addi     r5, r5, 4
	add      r29, r29, r0

lbl_8024971C:
	lwz      r10, 4(r10)

lbl_80249720:
	cmplwi   r10, 0
	bne      lbl_80249690
	li       r0, 0
	cmpwi    r29, 0
	stw      r0, 0x38(r28)
	beq      lbl_802497C8
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x40c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	li       r5, 0
	stw      r4, 0x408(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x408(r1)
	stw      r0, 0x414(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x410(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x410(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x418(r1)
	lwz      r3, 0x41c(r1)
	mtctr    r30
	cmpwi    r30, 0
	ble      lbl_802497C8

lbl_80249798:
	lwz      r0, 0(r31)
	add      r5, r5, r0
	cmpw     r5, r3
	ble      lbl_802497BC
	slwi     r0, r6, 2
	addi     r3, r1, 0x208
	lwzx     r0, r3, r0
	stw      r0, 0x38(r28)
	b        lbl_802497C8

lbl_802497BC:
	addi     r31, r31, 4
	addi     r6, r6, 1
	bdnz     lbl_80249798

lbl_802497C8:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	lwz      r29, 0x424(r1)
	lwz      r28, 0x420(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	802497E8
 * Size:	0000D8
 */
void RandEnemyUnit::makeSetEnemyTypeC(MapNode*, int, EnemyUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  addi      r3, r1, 0x8
	  bl        -0x5B74
	  lfs       f2, 0x8(r1)
	  mr        r3, r28
	  lfs       f1, 0xC(r1)
	  mr        r4, r29
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x5850
	  fmr       f31, f1
	  li        r3, 0x38
	  bl        -0x2259A0
	  mr.       r31, r3
	  beq-      .loc_0x7C
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x5694
	  mr        r31, r3

	.loc_0x7C:
	  fmr       f1, f31
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  bl        -0x546C
	  mr        r3, r31
	  mr        r4, r29
	  bl        -0x5458
	  lwz       r3, 0x1C(r28)
	  mr        r4, r31
	  bl        0x1C7B80
	  lwz       r3, 0x18(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x18(r27)
	  lwz       r3, 0x8(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r27)
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802498C0
 * Size:	00017C
 */
void RandEnemyUnit::setVersusEnemyTypeF()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::TekiF__Special) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_F]) {
				int altNum     = (count - mTypeCount[TEKITYPE_F]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_F]) / 2) * 2;

				int randIdx = 2.0f * randFloat();
				for (int i = 0; i < roundedMax; i++, randIdx ^= 1) {
					int slot = -1;
					setSlotEnemyTypeF(randIdx);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeF(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}

				if (altNum) {
					int slot = -1;
					setSlotEnemyTypeF(slot);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeF(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80249A3C
 * Size:	0003E0
 */
void RandEnemyUnit::setSlotEnemyTypeF(int)
{
	/*
	stwu     r1, -0x6d0(r1)
	mflr     r0
	stw      r0, 0x6d4(r1)
	stmw     r14, 0x688(r1)
	mr       r15, r3
	lis      r3, lbl_804840D0@ha
	mr       r16, r4
	li       r23, 0
	li       r14, 0
	li       r22, 0
	li       r21, 0
	li       r20, 0
	lwz      r6, 0(r15)
	lwzu     r5, lbl_804840D0@l(r3)
	lbz      r0, 2(r6)
	lwz      r4, 4(r3)
	lwz      r3, 8(r3)
	cmplwi   r0, 0
	stw      r5, 0x2c(r1)
	lwz      r17, 0x28(r6)
	stw      r4, 0x30(r1)
	stw      r3, 0x34(r1)
	beq      lbl_80249B5C
	addi     r18, r1, 0x38
	addi     r19, r1, 0x2c
	li       r25, 3

lbl_80249AA4:
	lwz      r3, 4(r15)
	mr       r4, r25
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	mr       r0, r3
	lwz      r3, 4(r15)
	mr       r24, r0
	mr       r4, r25
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	cmplwi   r24, 0
	beq      lbl_80249B4C
	mr       r4, r24
	mr       r5, r3
	addi     r3, r1, 0x20
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f1, 0x20(r1) cmpwi    r16, 0 lfs      f0, lbl_8051A79C@sda21(r2) stfs     f1,
0(r18) lfs      f2, 0x24(r1) lfs      f1, 0x28(r1) stfs     f2, 4(r18) stfs f1,
8(r18) stfs     f0, 0(r19) bne      lbl_80249B20 cmpwi    r23, 0 bne
lbl_80249B20 mr       r3, r24 bl       getVersusScore__Q34Game4Cave7MapNodeFv li
r22, -1 mr       r14, r3 b        lbl_80249B40

lbl_80249B20:
	cmpwi    r16, 1
	bne      lbl_80249B40
	cmpwi    r23, 1
	bne      lbl_80249B40
	mr       r3, r24
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	li       r22, 1
	mr       r14, r3

lbl_80249B40:
	addi     r18, r18, 0xc
	addi     r19, r19, 4
	addi     r23, r23, 1

lbl_80249B4C:
	addi     r25, r25, 1
	cmpwi    r25, 4
	ble      lbl_80249AA4
	b        lbl_80249BC4

lbl_80249B5C:
	li       r19, 0
	addi     r16, r1, 0x38

lbl_80249B64:
	lwz      r3, 4(r15)
	mr       r4, r19
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	mr       r18, r3
	lwz      r3, 4(r15)
	mr       r4, r19
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	cmplwi   r18, 0
	beq      lbl_80249BB8
	mr       r4, r18
	mr       r5, r3
	addi     r3, r1, 0x14
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f0, 0x14(r1) addi     r23, r23, 1 lfs      f1, 0x18(r1) stfs     f0, 0(r16) lfs
f0, 0x1c(r1) stfs     f1, 4(r16) stfs     f0, 8(r16) addi     r16, r16, 0xc

lbl_80249BB8:
	addi     r19, r19, 1
	cmpwi    r19, 2
	ble      lbl_80249B64

lbl_80249BC4:
	addi     r0, r1, 0x5c
	lwz      r19, 0x10(r17)
	stw      r0, 0x678(r1)
	mr       r24, r0
	addi     r26, r1, 0x45c
	addi     r25, r1, 0x25c
	b        lbl_80249D48

lbl_80249BE0:
	lwz      r3, 0x18(r19)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80249D44
	lwz      r3, 0x18(r19)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_80249D44
	lwz      r18, 0x10(r3)
	mr       r29, r26
	mr       r28, r25
	mr       r27, r24
	b        lbl_80249D3C

lbl_80249C14:
	lwz      r0, 0x18(r18)
	cmpwi    r0, 8
	bne      lbl_80249D38
	mr       r3, r15
	mr       r4, r19
	mr       r5, r18
	bl
isEnemySetGen__Q34Game4Cave13RandEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	bne      lbl_80249D38
	addi     r31, r1, 0x38
	addi     r30, r1, 0x2c
	li       r17, 1
	li       r16, 0
	b        lbl_80249CD4

lbl_80249C4C:
	clrlwi.  r0, r17, 0x18
	beq      lbl_80249CC8
	mr       r4, r19
	mr       r5, r18
	addi     r3, r1, 8
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f1, 0xc(r1) lfs      f0, 4(r31) lfs      f3, 8(r1) fsubs    f4, f1, f0 lfs f2,
0(r31) lfs      f1, 0x10(r1) lfs      f0, 8(r31) fsubs    f3, f3, f2 fmuls f4,
f4, f4 fsubs    f2, f1, f0 lfs      f0, lbl_8051A7A0@sda21(r2) fmadds   f1, f3,
f3, f4 fmuls    f2, f2, f2 fadds    f1, f2, f1 fcmpo    cr0, f1, f0 ble
lbl_80249CB4 ble      lbl_80249CB8 frsqrte  f0, f1 fmuls    f1, f0, f1 b
lbl_80249CB8

lbl_80249CB4:
	fmr      f1, f0

lbl_80249CB8:
	lfs      f0, 0(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_80249CC8
	li       r17, 0

lbl_80249CC8:
	addi     r31, r31, 0xc
	addi     r30, r30, 4
	addi     r16, r16, 1

lbl_80249CD4:
	cmpw     r16, r23
	blt      lbl_80249C4C
	clrlwi.  r0, r17, 0x18
	beq      lbl_80249D38
	stw      r19, 0(r29)
	stw      r18, 0(r28)
	lwz      r3, 0(r29)
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	add      r0, r14, r3
	mullw    r0, r22, r0
	stw      r0, 0(r27)
	lwz      r0, 0(r27)
	cmpwi    r0, 0
	bgt      lbl_80249D14
	li       r0, 1
	stw      r0, 0(r27)

lbl_80249D14:
	lwz      r0, 0(r27)
	addi     r26, r26, 4
	addi     r25, r25, 4
	addi     r24, r24, 4
	add      r20, r20, r0
	addi     r21, r21, 1
	addi     r29, r29, 4
	addi     r28, r28, 4
	addi     r27, r27, 4

lbl_80249D38:
	lwz      r18, 4(r18)

lbl_80249D3C:
	cmplwi   r18, 0
	bne      lbl_80249C14

lbl_80249D44:
	lwz      r19, 4(r19)

lbl_80249D48:
	cmplwi   r19, 0
	bne      lbl_80249BE0
	li       r0, 0
	cmpwi    r21, 0
	stw      r0, 0x30(r15)
	stw      r0, 0x34(r15)
	beq      lbl_80249E08
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x664(r1)
	xoris    r0, r20, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	li       r5, 0
	stw      r4, 0x660(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x660(r1)
	stw      r0, 0x66c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x668(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x668(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x670(r1)
	lwz      r4, 0x674(r1)
	mtctr    r21
	cmpwi    r21, 0
	ble      lbl_80249E08

lbl_80249DC4:
	lwz      r3, 0x678(r1)
	lwz      r0, 0(r3)
	add      r5, r5, r0
	cmpw     r5, r4
	ble      lbl_80249DF8
	slwi     r0, r6, 2
	addi     r3, r1, 0x45c
	lwzx     r4, r3, r0
	addi     r3, r1, 0x25c
	lwzx     r0, r3, r0
	stw      r4, 0x30(r15)
	stw      r0, 0x34(r15)
	b        lbl_80249E08

lbl_80249DF8:
	addi     r3, r3, 4
	addi     r6, r6, 1
	stw      r3, 0x678(r1)
	bdnz     lbl_80249DC4

lbl_80249E08:
	lmw      r14, 0x688(r1)
	lwz      r0, 0x6d4(r1)
	mtlr     r0
	addi     r1, r1, 0x6d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80249E1C
 * Size:	0001A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeF()
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	li       r9, 0
	stw      r0, 0x434(r1)
	addi     r5, r1, 0x208
	stw      r31, 0x42c(r1)
	addi     r31, r1, 8
	mr       r6, r31
	stw      r30, 0x428(r1)
	li       r30, 0
	stw      r29, 0x424(r1)
	li       r29, 0
	stw      r28, 0x420(r1)
	mr       r28, r3
	lwz      r3, 0(r3)
	lwz      r3, 0x14(r3)
	lwz      r10, 0x10(r3)
	b        lbl_80249EF4

lbl_80249E64:
	lwz      r8, 0x18(r10)
	lwz      r4, 0(r8)
	cmplwi   r4, 0
	beq      lbl_80249EF0
	lwz      r0, 0x20(r4)
	cmpwi    r0, 8
	bne      lbl_80249EF0
	lis      r3, 0x66666667@ha
	lwz      r7, 0x1c(r4)
	addi     r0, r3, 0x66666667@l
	mulhw    r0, r0, r7
	srawi    r3, r0, 2
	srwi     r4, r3, 0x1f
	srawi    r0, r0, 2
	add      r3, r3, r4
	mulli    r4, r3, 0xa
	srwi     r3, r0, 0x1f
	add.     r11, r0, r3
	subf     r3, r4, r7
	beq      lbl_80249ECC
	lwz      r0, 0x1c(r28)
	add      r9, r9, r11
	cmpw     r9, r0
	ble      lbl_80249ECC
	stw      r8, 0x38(r28)
	b        lbl_80249F9C

lbl_80249ECC:
	cmpwi    r3, 0
	beq      lbl_80249EF0
	stw      r3, 0(r6)
	addi     r30, r30, 1
	lwz      r0, 0(r6)
	addi     r6, r6, 4
	stw      r8, 0(r5)
	addi     r5, r5, 4
	add      r29, r29, r0

lbl_80249EF0:
	lwz      r10, 4(r10)

lbl_80249EF4:
	cmplwi   r10, 0
	bne      lbl_80249E64
	li       r0, 0
	cmpwi    r29, 0
	stw      r0, 0x38(r28)
	beq      lbl_80249F9C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x40c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	li       r5, 0
	stw      r4, 0x408(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x408(r1)
	stw      r0, 0x414(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x410(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x410(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x418(r1)
	lwz      r3, 0x41c(r1)
	mtctr    r30
	cmpwi    r30, 0
	ble      lbl_80249F9C

lbl_80249F6C:
	lwz      r0, 0(r31)
	add      r5, r5, r0
	cmpw     r5, r3
	ble      lbl_80249F90
	slwi     r0, r6, 2
	addi     r3, r1, 0x208
	lwzx     r0, r3, r0
	stw      r0, 0x38(r28)
	b        lbl_80249F9C

lbl_80249F90:
	addi     r31, r31, 4
	addi     r6, r6, 1
	bdnz     lbl_80249F6C

lbl_80249F9C:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	lwz      r29, 0x424(r1)
	lwz      r28, 0x420(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	80249FBC
 * Size:	000088
 */
void RandEnemyUnit::makeSetEnemyTypeF(MapNode*, BaseGen*, EnemyUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  li        r3, 0x38
	  bl        -0x22613C
	  mr.       r31, r3
	  beq-      .loc_0x44
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0x1
	  bl        -0x5E30
	  mr        r31, r3

	.loc_0x44:
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x5DAC
	  lwz       r3, 0x1C(r28)
	  mr        r4, r31
	  bl        0x1C73F4
	  lwz       r3, 0x1C(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1C(r27)
	  lwz       r3, 0x8(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024A044
 * Size:	00017C
 */
void RandEnemyUnit::setVersusEnemyTypeB()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::TekiB__Hard) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_B]) {
				int altNum     = (count - mTypeCount[TEKITYPE_B]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_B]) / 2) * 2;

				int randIdx = 2.0f * randFloat();
				for (int i = 0; i < roundedMax; i++, randIdx ^= 1) {
					setSlotEnemyTypeB(randIdx);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeB(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}

				if (altNum) {
					int slot = -1;
					setSlotEnemyTypeB(slot);

					if (mMapTile && mSpawn) {
						makeSetEnemyTypeB(mMapTile, mSpawn, currEnemy->mEnemyUnit);
						continue;
					}
					return;
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024A1C0
 * Size:	0003E0
 */
void RandEnemyUnit::setSlotEnemyTypeB(int)
{
	/*
	stwu     r1, -0x6d0(r1)
	mflr     r0
	stw      r0, 0x6d4(r1)
	stmw     r14, 0x688(r1)
	mr       r15, r3
	lis      r3, lbl_804840DC@ha
	mr       r16, r4
	li       r23, 0
	li       r14, 0
	li       r22, 0
	li       r21, 0
	li       r20, 0
	lwz      r6, 0(r15)
	lwzu     r5, lbl_804840DC@l(r3)
	lbz      r0, 2(r6)
	lwz      r4, 4(r3)
	lwz      r3, 8(r3)
	cmplwi   r0, 0
	stw      r5, 0x2c(r1)
	lwz      r17, 0x28(r6)
	stw      r4, 0x30(r1)
	stw      r3, 0x34(r1)
	beq      lbl_8024A2E0
	addi     r18, r1, 0x38
	addi     r19, r1, 0x2c
	li       r25, 3

lbl_8024A228:
	lwz      r3, 4(r15)
	mr       r4, r25
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	mr       r0, r3
	lwz      r3, 4(r15)
	mr       r24, r0
	mr       r4, r25
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	cmplwi   r24, 0
	beq      lbl_8024A2D0
	mr       r4, r24
	mr       r5, r3
	addi     r3, r1, 0x20
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f1, 0x20(r1) cmpwi    r16, 0 lfs      f0, lbl_8051A79C@sda21(r2) stfs     f1,
0(r18) lfs      f2, 0x24(r1) lfs      f1, 0x28(r1) stfs     f2, 4(r18) stfs f1,
8(r18) stfs     f0, 0(r19) bne      lbl_8024A2A4 cmpwi    r23, 0 bne
lbl_8024A2A4 mr       r3, r24 bl       getVersusScore__Q34Game4Cave7MapNodeFv li
r22, -1 mr       r14, r3 b        lbl_8024A2C4

lbl_8024A2A4:
	cmpwi    r16, 1
	bne      lbl_8024A2C4
	cmpwi    r23, 1
	bne      lbl_8024A2C4
	mr       r3, r24
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	li       r22, 1
	mr       r14, r3

lbl_8024A2C4:
	addi     r18, r18, 0xc
	addi     r19, r19, 4
	addi     r23, r23, 1

lbl_8024A2D0:
	addi     r25, r25, 1
	cmpwi    r25, 4
	ble      lbl_8024A228
	b        lbl_8024A348

lbl_8024A2E0:
	li       r19, 0
	addi     r16, r1, 0x38

lbl_8024A2E8:
	lwz      r3, 4(r15)
	mr       r4, r19
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	mr       r18, r3
	lwz      r3, 4(r15)
	mr       r4, r19
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	cmplwi   r18, 0
	beq      lbl_8024A33C
	mr       r4, r18
	mr       r5, r3
	addi     r3, r1, 0x14
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f0, 0x14(r1) addi     r23, r23, 1 lfs      f1, 0x18(r1) stfs     f0, 0(r16) lfs
f0, 0x1c(r1) stfs     f1, 4(r16) stfs     f0, 8(r16) addi     r16, r16, 0xc

lbl_8024A33C:
	addi     r19, r19, 1
	cmpwi    r19, 2
	ble      lbl_8024A2E8

lbl_8024A348:
	addi     r0, r1, 0x5c
	lwz      r19, 0x10(r17)
	stw      r0, 0x678(r1)
	mr       r24, r0
	addi     r26, r1, 0x45c
	addi     r25, r1, 0x25c
	b        lbl_8024A4CC

lbl_8024A364:
	lwz      r3, 0x18(r19)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_8024A4C8
	lwz      r3, 0x18(r19)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8024A4C8
	lwz      r18, 0x10(r3)
	mr       r29, r26
	mr       r28, r25
	mr       r27, r24
	b        lbl_8024A4C0

lbl_8024A398:
	lwz      r0, 0x18(r18)
	cmpwi    r0, 1
	bne      lbl_8024A4BC
	mr       r3, r15
	mr       r4, r19
	mr       r5, r18
	bl
isEnemySetGen__Q34Game4Cave13RandEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024A4BC
	addi     r31, r1, 0x38
	addi     r30, r1, 0x2c
	li       r17, 1
	li       r16, 0
	b        lbl_8024A458

lbl_8024A3D0:
	clrlwi.  r0, r17, 0x18
	beq      lbl_8024A44C
	mr       r4, r19
	mr       r5, r18
	addi     r3, r1, 8
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f1, 0xc(r1) lfs      f0, 4(r31) lfs      f3, 8(r1) fsubs    f4, f1, f0 lfs f2,
0(r31) lfs      f1, 0x10(r1) lfs      f0, 8(r31) fsubs    f3, f3, f2 fmuls f4,
f4, f4 fsubs    f2, f1, f0 lfs      f0, lbl_8051A7A0@sda21(r2) fmadds   f1, f3,
f3, f4 fmuls    f2, f2, f2 fadds    f1, f2, f1 fcmpo    cr0, f1, f0 ble
lbl_8024A438 ble      lbl_8024A43C frsqrte  f0, f1 fmuls    f1, f0, f1 b
lbl_8024A43C

lbl_8024A438:
	fmr      f1, f0

lbl_8024A43C:
	lfs      f0, 0(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8024A44C
	li       r17, 0

lbl_8024A44C:
	addi     r31, r31, 0xc
	addi     r30, r30, 4
	addi     r16, r16, 1

lbl_8024A458:
	cmpw     r16, r23
	blt      lbl_8024A3D0
	clrlwi.  r0, r17, 0x18
	beq      lbl_8024A4BC
	stw      r19, 0(r29)
	stw      r18, 0(r28)
	lwz      r3, 0(r29)
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	add      r0, r14, r3
	mullw    r0, r22, r0
	stw      r0, 0(r27)
	lwz      r0, 0(r27)
	cmpwi    r0, 0
	bgt      lbl_8024A498
	li       r0, 1
	stw      r0, 0(r27)

lbl_8024A498:
	lwz      r0, 0(r27)
	addi     r26, r26, 4
	addi     r25, r25, 4
	addi     r24, r24, 4
	add      r20, r20, r0
	addi     r21, r21, 1
	addi     r29, r29, 4
	addi     r28, r28, 4
	addi     r27, r27, 4

lbl_8024A4BC:
	lwz      r18, 4(r18)

lbl_8024A4C0:
	cmplwi   r18, 0
	bne      lbl_8024A398

lbl_8024A4C8:
	lwz      r19, 4(r19)

lbl_8024A4CC:
	cmplwi   r19, 0
	bne      lbl_8024A364
	li       r0, 0
	cmpwi    r21, 0
	stw      r0, 0x30(r15)
	stw      r0, 0x34(r15)
	beq      lbl_8024A58C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x664(r1)
	xoris    r0, r20, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	li       r5, 0
	stw      r4, 0x660(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x660(r1)
	stw      r0, 0x66c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x668(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x668(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x670(r1)
	lwz      r4, 0x674(r1)
	mtctr    r21
	cmpwi    r21, 0
	ble      lbl_8024A58C

lbl_8024A548:
	lwz      r3, 0x678(r1)
	lwz      r0, 0(r3)
	add      r5, r5, r0
	cmpw     r5, r4
	ble      lbl_8024A57C
	slwi     r0, r6, 2
	addi     r3, r1, 0x45c
	lwzx     r4, r3, r0
	addi     r3, r1, 0x25c
	lwzx     r0, r3, r0
	stw      r4, 0x30(r15)
	stw      r0, 0x34(r15)
	b        lbl_8024A58C

lbl_8024A57C:
	addi     r3, r3, 4
	addi     r6, r6, 1
	stw      r3, 0x678(r1)
	bdnz     lbl_8024A548

lbl_8024A58C:
	lmw      r14, 0x688(r1)
	lwz      r0, 0x6d4(r1)
	mtlr     r0
	addi     r1, r1, 0x6d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024A5A0
 * Size:	0001A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeB()
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	li       r9, 0
	stw      r0, 0x434(r1)
	addi     r5, r1, 0x208
	stw      r31, 0x42c(r1)
	addi     r31, r1, 8
	mr       r6, r31
	stw      r30, 0x428(r1)
	li       r30, 0
	stw      r29, 0x424(r1)
	li       r29, 0
	stw      r28, 0x420(r1)
	mr       r28, r3
	lwz      r3, 0(r3)
	lwz      r3, 0x14(r3)
	lwz      r10, 0x10(r3)
	b        lbl_8024A678

lbl_8024A5E8:
	lwz      r8, 0x18(r10)
	lwz      r4, 0(r8)
	cmplwi   r4, 0
	beq      lbl_8024A674
	lwz      r0, 0x20(r4)
	cmpwi    r0, 1
	bne      lbl_8024A674
	lis      r3, 0x66666667@ha
	lwz      r7, 0x1c(r4)
	addi     r0, r3, 0x66666667@l
	mulhw    r0, r0, r7
	srawi    r3, r0, 2
	srwi     r4, r3, 0x1f
	srawi    r0, r0, 2
	add      r3, r3, r4
	mulli    r4, r3, 0xa
	srwi     r3, r0, 0x1f
	add.     r11, r0, r3
	subf     r3, r4, r7
	beq      lbl_8024A650
	lwz      r0, 0x14(r28)
	add      r9, r9, r11
	cmpw     r9, r0
	ble      lbl_8024A650
	stw      r8, 0x38(r28)
	b        lbl_8024A720

lbl_8024A650:
	cmpwi    r3, 0
	beq      lbl_8024A674
	stw      r3, 0(r6)
	addi     r30, r30, 1
	lwz      r0, 0(r6)
	addi     r6, r6, 4
	stw      r8, 0(r5)
	addi     r5, r5, 4
	add      r29, r29, r0

lbl_8024A674:
	lwz      r10, 4(r10)

lbl_8024A678:
	cmplwi   r10, 0
	bne      lbl_8024A5E8
	li       r0, 0
	cmpwi    r29, 0
	stw      r0, 0x38(r28)
	beq      lbl_8024A720
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x40c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	li       r5, 0
	stw      r4, 0x408(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x408(r1)
	stw      r0, 0x414(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x410(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x410(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x418(r1)
	lwz      r3, 0x41c(r1)
	mtctr    r30
	cmpwi    r30, 0
	ble      lbl_8024A720

lbl_8024A6F0:
	lwz      r0, 0(r31)
	add      r5, r5, r0
	cmpw     r5, r3
	ble      lbl_8024A714
	slwi     r0, r6, 2
	addi     r3, r1, 0x208
	lwzx     r0, r3, r0
	stw      r0, 0x38(r28)
	b        lbl_8024A720

lbl_8024A714:
	addi     r31, r31, 4
	addi     r6, r6, 1
	bdnz     lbl_8024A6F0

lbl_8024A720:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	lwz      r30, 0x428(r1)
	lwz      r29, 0x424(r1)
	lwz      r28, 0x420(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024A740
 * Size:	000088
 */
void RandEnemyUnit::makeSetEnemyTypeB(MapNode*, BaseGen*, EnemyUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  li        r3, 0x38
	  bl        -0x2268C0
	  mr.       r31, r3
	  beq-      .loc_0x44
	  mr        r4, r30
	  mr        r5, r29
	  li        r6, 0x1
	  bl        -0x65B4
	  mr        r31, r3

	.loc_0x44:
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x6530
	  lwz       r3, 0x1C(r28)
	  mr        r4, r31
	  bl        0x1C6C70
	  lwz       r3, 0x14(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x14(r27)
	  lwz       r3, 0x8(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024A7C8
 * Size:	0002CC
 */
void RandEnemyUnit::setVersusEasyEnemy()
{
	MapNode* onyonNodes[] = { nullptr, nullptr };
	BaseGen* onyonGens[]  = { nullptr, nullptr };

	onyonNodes[0] = mMapScore->getFixObjNode(FIXNODE_VsRedOnyon);
	onyonGens[0]  = mMapScore->getFixObjGen(FIXNODE_VsRedOnyon);
	onyonNodes[1] = mMapScore->getFixObjNode(FIXNODE_VsBlueOnyon);
	onyonGens[1]  = mMapScore->getFixObjGen(FIXNODE_VsBlueOnyon);

	EnemyTypeID::EEnemyTypeID vsEasyIDs[] = { EnemyTypeID::EnemyID_Pelplant, EnemyTypeID::EnemyID_UjiA };

	int enemyCounts[ARRAY_SIZE(vsEasyIDs)][2] = { { 0, 0 }, { 0, 0 } };

	EnemyNode* mainNode = mGenerator->mMainEnemies;

	EnemyUnit* enemyUnits[] = { nullptr, nullptr };

	for (EnemyNode* currNode = (EnemyNode*)(mainNode->mChild); currNode;) {
		EnemyUnit* unit     = currNode->mEnemyUnit;
		TekiInfo* currInfo  = currNode->getTekiInfo();
		EnemyNode* nextNode = (EnemyNode*)currNode->mNext;

		if (currInfo) {
			if (currInfo->mEnemyID == vsEasyIDs[0]) {
				enemyCounts[0][0] += currInfo->mWeight / 10;
				enemyUnits[0] = unit;
				currNode->del();
				mainNode->addHead(currNode);
			} else if (currInfo->mEnemyID == vsEasyIDs[1]) {
				enemyCounts[1][0] += currInfo->mWeight / 10;
				enemyUnits[1] = unit;
				currNode->del();
				mainNode->addHead(currNode);
			}
		}
		currNode = nextNode;
	}

	for (int i = 0; i < 2; i++) {
		if (enemyCounts[i][0] == 0)
			continue;

		f32 tieBreaker = 0.0f;
		if (enemyCounts[i][0] % 2 != 0) { // dumbasses don't realize that it's always an even number in-game
			tieBreaker = randWeightFloat(2.0f);
		}

		enemyCounts[i][1] = enemyCounts[i][0] / 2 + tieBreaker;
		enemyCounts[i][0] -= enemyCounts[i][1];
		if (enemyUnits[i]) {
			for (int j = 0; j < 2; j++) {
				if (enemyCounts[i][j]) {
					BaseGen* spawnBaseGen = getVersusEasyEnemyBaseGen(onyonNodes[j], onyonGens[j]);
					if (spawnBaseGen) {
						makeSetEnemyTypeA(onyonNodes[j], spawnBaseGen, enemyUnits[i], enemyCounts[i][j]);
					}
				}
			}
		}
	}

	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	li       r4, 3
	stw      r0, 0x74(r1)
	stmw     r24, 0x50(r1)
	mr       r27, r3
	lwz      r7, lbl_80520E90@sda21(r2)
	lwz      r6, lbl_80520E94@sda21(r2)
	lwz      r5, lbl_80520E98@sda21(r2)
	lwz      r0, lbl_80520E9C@sda21(r2)
	stw      r7, 0x20(r1)
	lwz      r3, 4(r3)
	stw      r6, 0x24(r1)
	stw      r5, 0x18(r1)
	stw      r0, 0x1c(r1)
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	stw      r3, 0x20(r1)
	li       r4, 3
	lwz      r3, 4(r27)
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	stw      r3, 0x18(r1)
	li       r4, 4
	lwz      r3, 4(r27)
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	stw      r3, 0x24(r1)
	li       r4, 4
	lwz      r3, 4(r27)
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	lwz      r4, 0(r27)
	lis      r5, lbl_804840E8@ha
	lwzu     r8, lbl_804840E8@l(r5)
	lwz      r30, 0x14(r4)
	lwz      r9, lbl_8051A7A4@sda21(r2)
	lwz      r31, lbl_8051A7A8@sda21(r2)
	lwz      r7, 4(r5)
	lwz      r6, 8(r5)
	lwz      r5, 0xc(r5)
	lwz      r4, lbl_80520EA0@sda21(r2)
	lwz      r0, lbl_80520EA4@sda21(r2)
	stw      r3, 0x1c(r1)
	lwz      r28, 0x10(r30)
	stw      r9, 0x10(r1)
	stw      r31, 0x14(r1)
	stw      r8, 0x28(r1)
	stw      r7, 0x2c(r1)
	stw      r6, 0x30(r1)
	stw      r5, 0x34(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	b        lbl_8024A944

lbl_8024A890:
	lwz      r6, 0x18(r28)
	lwz      r29, 4(r28)
	lwz      r4, 0(r6)
	cmplwi   r4, 0
	beq      lbl_8024A940
	lwz      r3, 0x18(r4)
	lwz      r0, 0x10(r1)
	cmpw     r3, r0
	bne      lbl_8024A8F8
	lis      r3, 0x66666667@ha
	lwz      r0, 0x1c(r4)
	addi     r3, r3, 0x66666667@l
	lwz      r5, 0x28(r1)
	mulhw    r0, r3, r0
	stw      r6, 8(r1)
	mr       r3, r28
	srawi    r0, r0, 2
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	add      r0, r5, r0
	stw      r0, 0x28(r1)
	bl       del__5CNodeFv
	mr       r3, r30
	mr       r4, r28
	bl       addHead__5CNodeFP5CNode
	b        lbl_8024A940

lbl_8024A8F8:
	cmpw     r3, r31
	bne      lbl_8024A940
	lis      r3, 0x66666667@ha
	lwz      r0, 0x1c(r4)
	addi     r3, r3, 0x66666667@l
	lwz      r5, 0x30(r1)
	mulhw    r0, r3, r0
	stw      r6, 0xc(r1)
	mr       r3, r28
	srawi    r0, r0, 2
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	add      r0, r5, r0
	stw      r0, 0x30(r1)
	bl       del__5CNodeFv
	mr       r3, r30
	mr       r4, r28
	bl       addHead__5CNodeFP5CNode

lbl_8024A940:
	mr       r28, r29

lbl_8024A944:
	cmplwi   r28, 0
	bne      lbl_8024A890
	addi     r30, r1, 0x28
	addi     r31, r1, 8
	li       r28, 0

lbl_8024A958:
	lwz      r0, 0(r30)
	cmpwi    r0, 0
	beq      lbl_8024AA6C
	srwi     r3, r0, 0x1f
	clrlwi   r0, r0, 0x1f
	xor      r0, r0, r3
	lfs      f2, lbl_8051A7A0@sda21(r2)
	subf.    r0, r3, r0
	beq      lbl_8024A9B0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051A790@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051A798@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_8051A788@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	fmr      f2, f0

lbl_8024A9B0:
	lwz      r5, 0(r30)
	lis      r3, 0x4330
	lwz      r0, 0(r31)
	srwi     r4, r5, 0x1f
	stw      r3, 0x38(r1)
	add      r3, r4, r5
	lfd      f1, lbl_8051A790@sda21(r2)
	srawi    r3, r3, 1
	cmplwi   r0, 0
	xoris    r0, r3, 0x8000
	stw      r0, 0x3c(r1)
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f1
	fadds    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	stw      r0, 4(r30)
	lwz      r3, 4(r30)
	lwz      r0, 0(r30)
	subf     r0, r3, r0
	stw      r0, 0(r30)
	beq      lbl_8024AA6C
	mr       r29, r30
	addi     r26, r1, 0x18
	addi     r25, r1, 0x20
	li       r24, 0

lbl_8024AA1C:
	lwz      r0, 0(r29)
	cmpwi    r0, 0
	beq      lbl_8024AA54
	lwz      r4, 0(r25)
	mr       r3, r27
	lwz      r5, 0(r26)
	bl
getVersusEasyEnemyBaseGen__Q34Game4Cave13RandEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	or.      r5, r3, r3
	beq      lbl_8024AA54
	lwz      r4, 0(r25)
	mr       r3, r27
	lwz      r6, 0(r31)
	lwz      r7, 0(r29)
	bl
makeSetEnemyTypeA__Q34Game4Cave13RandEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGenPQ34Game4Cave9EnemyUniti

lbl_8024AA54:
	addi     r24, r24, 1
	addi     r26, r26, 4
	cmpwi    r24, 2
	addi     r25, r25, 4
	addi     r29, r29, 4
	blt      lbl_8024AA1C

lbl_8024AA6C:
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 2
	addi     r30, r30, 8
	blt      lbl_8024A958
	lmw      r24, 0x50(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024AA94
 * Size:	000144
 */
BaseGen* RandEnemyUnit::getVersusEasyEnemyBaseGen(MapNode*, BaseGen*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  lfs       f31, -0x3BB4(r2)
	  lwz       r3, 0x0(r3)
	  mr        r26, r4
	  mr        r27, r5
	  li        r31, 0
	  lwz       r3, 0x28(r3)
	  li        r30, 0
	  lwz       r29, 0x10(r3)
	  b         .loc_0x10C

	.loc_0x40:
	  cmplw     r29, r26
	  bne-      .loc_0x108
	  lwz       r3, 0x18(r29)
	  bl        -0x7F20
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lwz       r28, 0x10(r3)
	  b         .loc_0x100

	.loc_0x60:
	  lwz       r0, 0x18(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0xFC
	  mr        r3, r25
	  mr        r4, r29
	  mr        r5, r28
	  bl        0xD2C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xFC
	  lfs       f1, 0x20(r28)
	  lfs       f0, 0x20(r27)
	  lfs       f3, 0x1C(r28)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r27)
	  lfs       f1, 0x24(r28)
	  lfs       f0, 0x24(r27)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x3BC0(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xD4
	  ble-      .loc_0xD8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xD8

	.loc_0xD4:
	  fmr       f1, f0

	.loc_0xD8:
	  lfs       f0, -0x3BB0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xEC
	  mr        r31, r28
	  b         .loc_0xFC

	.loc_0xEC:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xFC
	  mr        r30, r28
	  fmr       f31, f1

	.loc_0xFC:
	  lwz       r28, 0x4(r28)

	.loc_0x100:
	  cmplwi    r28, 0
	  bne+      .loc_0x60

	.loc_0x108:
	  lwz       r29, 0x4(r29)

	.loc_0x10C:
	  cmplwi    r29, 0
	  bne+      .loc_0x40
	  cmplwi    r30, 0
	  beq-      .loc_0x124
	  mr        r3, r30
	  b         .loc_0x128

	.loc_0x124:
	  mr        r3, r31

	.loc_0x128:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024ABD8
 * Size:	0001D4
 */
void RandEnemyUnit::setVersusEnemyTypeA()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r24, 0x30(r1)
	mr       r26, r3
	li       r31, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x14(r3)
	lwz      r30, 0x10(r3)
	b        lbl_8024AD90

lbl_8024AC00:
	lwz      r3, 0x18(r30)
	lwz      r4, 0(r3)
	cmplwi   r4, 0
	beq      lbl_8024AD8C
	lwz      r0, 0x20(r4)
	cmpwi    r0, 0
	bne      lbl_8024AD8C
	lis      r3, 0x66666667@ha
	lwz      r0, 0x1c(r4)
	addi     r3, r3, 0x66666667@l
	lwz      r4, 0x10(r26)
	mulhw    r0, r3, r0
	srawi    r0, r0, 2
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	add      r31, r31, r0
	cmpw     r31, r4
	ble      lbl_8024AD8C
	subf     r29, r4, r31
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	li       r27, 0
	lfd      f3, lbl_8051A790@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_8051A788@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_8051A798@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r28, 0x1c(r1)
	b        lbl_8024AD84

lbl_8024AC90:
	lwz      r0, 0x10(r26)
	cmpw     r31, r0
	ble      lbl_8024AD7C
	li       r0, 0
	mr       r3, r26
	stw      r0, 0xc(r1)
	mr       r6, r28
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	stw      r0, 8(r1)
	bl       setSlotEnemyTypeA__Q34Game4Cave13RandEnemyUnitFRiRii
	lwz      r0, 0x10(r26)
	lwz      r3, 0xc(r1)
	subf     r25, r0, r31
	cmpw     r3, r25
	bge      lbl_8024ACD4
	mr       r25, r3

lbl_8024ACD4:
	lwz      r24, 8(r1)
	stw      r25, 0xc(r1)
	cmpw     r25, r24
	bgt      lbl_8024ACEC
	mr       r7, r25
	b        lbl_8024AD48

lbl_8024ACEC:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1c(r1)
	subf     r3, r24, r25
	addi     r0, r3, 1
	lfd      f2, lbl_8051A790@sda21(r2)
	stw      r4, 0x18(r1)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x18(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f1, f2
	lwz      r0, 8(r1)
	stw      r4, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r3, 0x24(r1)
	add      r7, r0, r3

lbl_8024AD48:
	lwz      r4, 0x30(r26)
	cmplwi   r4, 0
	beq      lbl_8024AD98
	lwz      r5, 0x34(r26)
	cmplwi   r5, 0
	beq      lbl_8024AD98
	cmpwi    r7, 0
	beq      lbl_8024AD98
	lwz      r6, 0x18(r30)
	mr       r3, r26
	bl
makeSetEnemyTypeA__Q34Game4Cave13RandEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGenPQ34Game4Cave9EnemyUniti
	b        lbl_8024AD7C
	b        lbl_8024AD98

lbl_8024AD7C:
	xori     r28, r28, 1
	addi     r27, r27, 1

lbl_8024AD84:
	cmpw     r27, r29
	blt      lbl_8024AC90

lbl_8024AD8C:
	lwz      r30, 4(r30)

lbl_8024AD90:
	cmplwi   r30, 0
	bne      lbl_8024AC00

lbl_8024AD98:
	lmw      r24, 0x30(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024ADAC
 * Size:	0003D4
 */
void RandEnemyUnit::setSlotEnemyTypeA(int&, int&, int)
{
	/*
	stwu     r1, -0x6c0(r1)
	mflr     r0
	stw      r0, 0x6c4(r1)
	stmw     r14, 0x678(r1)
	mr       r15, r3
	mr       r24, r6
	li       r23, 0
	stw      r4, 8(r1)
	li       r14, 0
	li       r22, 0
	li       r21, 0
	stw      r5, 0xc(r1)
	li       r20, 0
	lwz      r8, 0(r3)
	lwz      r7, lbl_8051A7B4@sda21(r2)
	lbz      r0, 2(r8)
	lwz      r3, lbl_8051A7B8@sda21(r2)
	cmplwi   r0, 0
	stw      r7, 0x10(r1)
	lwz      r16, 0x28(r8)
	stw      r3, 0x14(r1)
	beq      lbl_8024AEB8
	li       r19, 3
	addi     r17, r1, 0x3c

lbl_8024AE0C:
	lwz      r3, 4(r15)
	mr       r4, r19
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	mr       r0, r3
	lwz      r3, 4(r15)
	mr       r18, r0
	mr       r4, r19
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	cmplwi   r18, 0
	beq      lbl_8024AEA8
	mr       r4, r18
	mr       r5, r3
	addi     r3, r1, 0x30
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f0, 0x30(r1) cmpwi    r24, 0 lfs      f1, 0x34(r1) stfs     f0, 0(r17) lfs f0,
0x38(r1) stfs     f1, 4(r17) stfs     f0, 8(r17) bne      lbl_8024AE80 cmpwi
r23, 0 bne      lbl_8024AE80 mr       r3, r18 bl
getVersusScore__Q34Game4Cave7MapNodeFv li       r22, -1 mr       r14, r3 b
lbl_8024AEA0

lbl_8024AE80:
	cmpwi    r24, 1
	bne      lbl_8024AEA0
	cmpwi    r23, 1
	bne      lbl_8024AEA0
	mr       r3, r18
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	li       r22, 1
	mr       r14, r3

lbl_8024AEA0:
	addi     r17, r17, 0xc
	addi     r23, r23, 1

lbl_8024AEA8:
	addi     r19, r19, 1
	cmpwi    r19, 4
	ble      lbl_8024AE0C
	b        lbl_8024AF10

lbl_8024AEB8:
	lwz      r3, 4(r15)
	li       r4, 0
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	mr       r17, r3
	lwz      r3, 4(r15)
	li       r4, 0
	bl       getFixObjGen__Q34Game4Cave12RandMapScoreFi
	cmplwi   r17, 0
	beq      lbl_8024AF10
	mr       r4, r17
	mr       r5, r3
	addi     r3, r1, 0x24
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f3, 0x24(r1) li       r23, 1 lfs      f2, 0x28(r1) lfs      f1, 0x2c(r1) lfs f0,
lbl_8051A7BC@sda21(r2) stfs     f3, 0x3c(r1) stfs     f2, 0x40(r1) stfs     f1,
0x44(r1) stfs     f0, 0x10(r1)

lbl_8024AF10:
	addi     r0, r1, 0x54
	lwz      r19, 0x10(r16)
	stw      r0, 0x670(r1)
	mr       r24, r0
	addi     r26, r1, 0x454
	addi     r25, r1, 0x254
	b        lbl_8024B094

lbl_8024AF2C:
	lwz      r3, 0x18(r19)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_8024B090
	lwz      r3, 0x18(r19)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8024B090
	lwz      r18, 0x10(r3)
	mr       r29, r26
	mr       r28, r25
	mr       r27, r24
	b        lbl_8024B088

lbl_8024AF60:
	lwz      r0, 0x18(r18)
	cmpwi    r0, 0
	bne      lbl_8024B084
	mr       r3, r15
	mr       r4, r19
	mr       r5, r18
	bl
isEnemySetGen__Q34Game4Cave13RandEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024B084
	addi     r31, r1, 0x3c
	addi     r30, r1, 0x10
	li       r17, 1
	li       r16, 0
	b        lbl_8024B020

lbl_8024AF98:
	clrlwi.  r0, r17, 0x18
	beq      lbl_8024B014
	mr       r4, r19
	mr       r5, r18
	addi     r3, r1, 0x18
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f1, 0x1c(r1) lfs      f0, 4(r31) lfs      f3, 0x18(r1) fsubs    f4, f1, f0 lfs
f2, 0(r31) lfs      f1, 0x20(r1) lfs      f0, 8(r31) fsubs    f3, f3, f2 fmuls
f4, f4, f4 fsubs    f2, f1, f0 lfs      f0, lbl_8051A7A0@sda21(r2) fmadds   f1,
f3, f3, f4 fmuls    f2, f2, f2 fadds    f1, f2, f1 fcmpo    cr0, f1, f0 ble
lbl_8024B000 ble      lbl_8024B004 frsqrte  f0, f1 fmuls    f1, f0, f1 b
lbl_8024B004

lbl_8024B000:
	fmr      f1, f0

lbl_8024B004:
	lfs      f0, 0(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8024B014
	li       r17, 0

lbl_8024B014:
	addi     r31, r31, 0xc
	addi     r30, r30, 4
	addi     r16, r16, 1

lbl_8024B020:
	cmpw     r16, r23
	blt      lbl_8024AF98
	clrlwi.  r0, r17, 0x18
	beq      lbl_8024B084
	stw      r19, 0(r29)
	stw      r18, 0(r28)
	lwz      r3, 0(r29)
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	add      r0, r14, r3
	mullw    r0, r22, r0
	stw      r0, 0(r27)
	lwz      r0, 0(r27)
	cmpwi    r0, 0
	bgt      lbl_8024B060
	li       r0, 1
	stw      r0, 0(r27)

lbl_8024B060:
	lwz      r0, 0(r27)
	addi     r26, r26, 4
	addi     r25, r25, 4
	addi     r24, r24, 4
	add      r20, r20, r0
	addi     r21, r21, 1
	addi     r29, r29, 4
	addi     r28, r28, 4
	addi     r27, r27, 4

lbl_8024B084:
	lwz      r18, 4(r18)

lbl_8024B088:
	cmplwi   r18, 0
	bne      lbl_8024AF60

lbl_8024B090:
	lwz      r19, 4(r19)

lbl_8024B094:
	cmplwi   r19, 0
	bne      lbl_8024AF2C
	li       r0, 0
	cmpwi    r21, 0
	stw      r0, 0x30(r15)
	stw      r0, 0x34(r15)
	beq      lbl_8024B16C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x65c(r1)
	xoris    r0, r20, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	li       r5, 0
	stw      r4, 0x658(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x658(r1)
	stw      r0, 0x664(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x660(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x660(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x668(r1)
	lwz      r4, 0x66c(r1)
	mtctr    r21
	cmpwi    r21, 0
	ble      lbl_8024B16C

lbl_8024B110:
	lwz      r3, 0x670(r1)
	lwz      r0, 0(r3)
	add      r5, r5, r0
	cmpw     r5, r4
	ble      lbl_8024B15C
	slwi     r4, r6, 2
	addi     r3, r1, 0x454
	lwzx     r0, r3, r4
	addi     r3, r1, 0x254
	lwzx     r4, r3, r4
	stw      r0, 0x30(r15)
	lwz      r3, 8(r1)
	stw      r4, 0x34(r15)
	lwz      r0, 0x34(r4)
	stw      r0, 0(r3)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x30(r4)
	stw      r0, 0(r3)
	b        lbl_8024B16C

lbl_8024B15C:
	addi     r3, r3, 4
	addi     r6, r6, 1
	stw      r3, 0x670(r1)
	bdnz     lbl_8024B110

lbl_8024B16C:
	lmw      r14, 0x678(r1)
	lwz      r0, 0x6c4(r1)
	mtlr     r0
	addi     r1, r1, 0x6c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B180
 * Size:	000298
 */
void RandEnemyUnit::setUnitRandEnemyTypeA(int&, int, int)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r9, 0
	stw      r0, 0x444(r1)
	stmw     r25, 0x424(r1)
	mr       r25, r3
	mr       r27, r5
	addi     r31, r1, 8
	mr       r28, r6
	mr       r26, r4
	mr       r6, r31
	addi     r5, r1, 0x208
	li       r30, 0
	li       r29, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x14(r3)
	lwz      r10, 0x10(r3)
	b        lbl_8024B2D8

lbl_8024B1C8:
	lwz      r8, 0x18(r10)
	lwz      r4, 0(r8)
	cmplwi   r4, 0
	beq      lbl_8024B2D4
	lwz      r0, 0x20(r4)
	cmpwi    r0, 0
	bne      lbl_8024B2D4
	lis      r3, 0x66666667@ha
	lwz      r7, 0x1c(r4)
	addi     r0, r3, 0x66666667@l
	mulhw    r0, r0, r7
	srawi    r3, r0, 2
	srwi     r4, r3, 0x1f
	srawi    r0, r0, 2
	add      r3, r3, r4
	mulli    r4, r3, 0xa
	srwi     r3, r0, 0x1f
	add.     r11, r0, r3
	subf     r3, r4, r7
	beq      lbl_8024B2B0
	lwz      r0, 0x10(r25)
	add      r9, r9, r11
	cmpw     r9, r0
	ble      lbl_8024B2B0
	stw      r8, 0x38(r25)
	lwz      r0, 0x10(r25)
	subf     r25, r0, r9
	cmpw     r27, r25
	bge      lbl_8024B240
	mr       r25, r27

lbl_8024B240:
	cmpw     r25, r28
	bgt      lbl_8024B250
	stw      r25, 0(r26)
	b        lbl_8024B404

lbl_8024B250:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x40c(r1)
	subf     r3, r28, r25
	addi     r0, r3, 1
	lfd      f2, lbl_8051A790@sda21(r2)
	stw      r4, 0x408(r1)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x408(r1)
	stw      r0, 0x414(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x410(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x410(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x418(r1)
	lwz      r0, 0x41c(r1)
	add      r0, r28, r0
	stw      r0, 0(r26)
	b        lbl_8024B404

lbl_8024B2B0:
	cmpwi    r3, 0
	beq      lbl_8024B2D4
	stw      r3, 0(r6)
	addi     r30, r30, 1
	lwz      r0, 0(r6)
	addi     r6, r6, 4
	stw      r8, 0(r5)
	addi     r5, r5, 4
	add      r29, r29, r0

lbl_8024B2D4:
	lwz      r10, 4(r10)

lbl_8024B2D8:
	cmplwi   r10, 0
	bne      lbl_8024B1C8
	li       r0, 0
	cmpwi    r29, 0
	stw      r0, 0x38(r25)
	beq      lbl_8024B404
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x41c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051A790@sda21(r2)
	li       r5, 0
	stw      r4, 0x418(r1)
	li       r6, 0
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x418(r1)
	stw      r0, 0x414(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x410(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x410(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x408(r1)
	lwz      r3, 0x40c(r1)
	mtctr    r30
	cmpwi    r30, 0
	ble      lbl_8024B404

lbl_8024B350:
	lwz      r0, 0(r31)
	add      r5, r5, r0
	cmpw     r5, r3
	ble      lbl_8024B3F8
	slwi     r0, r6, 2
	addi     r3, r1, 0x208
	lwzx     r0, r3, r0
	stw      r0, 0x38(r25)
	lwz      r3, 8(r25)
	lwz      r0, 0xc(r25)
	subf     r25, r3, r0
	cmpw     r27, r25
	bge      lbl_8024B388
	mr       r25, r27

lbl_8024B388:
	cmpw     r25, r28
	bgt      lbl_8024B398
	stw      r25, 0(r26)
	b        lbl_8024B404

lbl_8024B398:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x41c(r1)
	subf     r3, r28, r25
	addi     r0, r3, 1
	lfd      f2, lbl_8051A790@sda21(r2)
	stw      r4, 0x418(r1)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_8051A788@sda21(r2)
	lfd      f1, 0x418(r1)
	stw      r0, 0x414(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x410(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x410(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x408(r1)
	lwz      r0, 0x40c(r1)
	add      r0, r28, r0
	stw      r0, 0(r26)
	b        lbl_8024B404

lbl_8024B3F8:
	addi     r31, r31, 4
	addi     r6, r6, 1
	bdnz     lbl_8024B350

lbl_8024B404:
	lmw      r25, 0x424(r1)
	lwz      r0, 0x444(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024B418
 * Size:	000420
 */
void RandEnemyUnit::makeSetEnemyTypeA(MapNode*, BaseGen*, EnemyUnit*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  stw       r0, 0x1D4(r1)
	  stfd      f31, 0x1C0(r1)
	  psq_st    f31,0x1C8(r1),0,0
	  stfd      f30, 0x1B0(r1)
	  psq_st    f30,0x1B8(r1),0,0
	  stfd      f29, 0x1A0(r1)
	  psq_st    f29,0x1A8(r1),0,0
	  stfd      f28, 0x190(r1)
	  psq_st    f28,0x198(r1),0,0
	  stfd      f27, 0x180(r1)
	  psq_st    f27,0x188(r1),0,0
	  stfd      f26, 0x170(r1)
	  psq_st    f26,0x178(r1),0,0
	  stfd      f25, 0x160(r1)
	  psq_st    f25,0x168(r1),0,0
	  stfd      f24, 0x150(r1)
	  psq_st    f24,0x158(r1),0,0
	  stfd      f23, 0x140(r1)
	  psq_st    f23,0x148(r1),0,0
	  stfd      f22, 0x130(r1)
	  psq_st    f22,0x138(r1),0,0
	  stmw      r22, 0x108(r1)
	  lis       r8, 0x8012
	  mr        r23, r3
	  subi      r0, r8, 0xCB8
	  mr        r24, r4
	  mr        r25, r5
	  mr        r26, r6
	  mr        r27, r7
	  mr        r4, r0
	  addi      r3, r1, 0x14
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x10
	  bl        -0x189C6C
	  mr        r4, r24
	  mr        r5, r25
	  addi      r3, r1, 0x8
	  bl        -0x79DC
	  addi      r29, r1, 0x14
	  lis       r3, 0x8050
	  lfs       f26, 0x8(r1)
	  mr        r30, r29
	  lfs       f25, 0xC(r1)
	  addi      r22, r3, 0x71A0
	  lfs       f24, 0x10(r1)
	  li        r28, 0
	  lfs       f23, 0x2C(r25)
	  lis       r31, 0x4330
	  lfd       f28, -0x3BD0(r2)
	  lfs       f29, -0x3BD8(r2)
	  lfs       f30, -0x3BA0(r2)
	  lfs       f31, -0x3BC0(r2)
	  lfs       f22, -0x3B98(r2)
	  b         .loc_0x1C0

	.loc_0xE4:
	  bl        -0x181F5C
	  xoris     r0, r3, 0x8000
	  stw       r31, 0xD8(r1)
	  stw       r0, 0xDC(r1)
	  lfd       f0, 0xD8(r1)
	  fsubs     f0, f0, f28
	  fmuls     f0, f23, f0
	  fdivs     f27, f0, f29
	  bl        -0x181F7C
	  xoris     r0, r3, 0x8000
	  stw       r31, 0xE0(r1)
	  stw       r0, 0xE4(r1)
	  lfd       f0, 0xE0(r1)
	  fsubs     f0, f0, f28
	  fmuls     f0, f30, f0
	  fdivs     f1, f0, f29
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x158
	  lfs       f0, -0x3B9C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xE8(r1)
	  lwz       r0, 0xEC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x17C

	.loc_0x158:
	  lfs       f0, -0x3B98(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xF0(r1)
	  lwz       r0, 0xF4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x17C:
	  fmadds    f0, f27, f0, f26
	  fcmpo     cr0, f1, f31
	  stfs      f0, 0x0(r30)
	  stfs      f25, 0x4(r30)
	  bge-      .loc_0x194
	  fneg      f1, f1

	.loc_0x194:
	  fmuls     f0, f1, f22
	  addi      r28, r28, 0x1
	  fctiwz    f0, f0
	  stfd      f0, 0xF8(r1)
	  lwz       r0, 0xFC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r22, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f0, f27, f0, f24
	  stfs      f0, 0x8(r30)
	  addi      r30, r30, 0xC

	.loc_0x1C0:
	  cmpw      r28, r27
	  blt+      .loc_0xE4
	  li        r5, 0

	.loc_0x1CC:
	  mr        r4, r29
	  li        r6, 0
	  b         .loc_0x31C

	.loc_0x1D8:
	  mr        r3, r29
	  li        r7, 0
	  mtctr     r27
	  cmpwi     r27, 0
	  ble-      .loc_0x314

	.loc_0x1EC:
	  cmpw      r6, r7
	  beq-      .loc_0x308
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x4(r3)
	  lfs       f4, 0x0(r4)
	  fsubs     f1, f1, f0
	  lfs       f2, 0x0(r3)
	  lfs       f3, 0x8(r4)
	  lfs       f0, 0x8(r3)
	  fsubs     f2, f4, f2
	  fmuls     f4, f1, f1
	  fsubs     f0, f3, f0
	  lfs       f3, -0x3BC0(r2)
	  fmadds    f4, f2, f2, f4
	  fmuls     f5, f0, f0
	  fadds     f6, f5, f4
	  fcmpo     cr0, f6, f3
	  ble-      .loc_0x244
	  ble-      .loc_0x248
	  fsqrte    f3, f6
	  fmuls     f6, f3, f6
	  b         .loc_0x248

	.loc_0x244:
	  fmr       f6, f3

	.loc_0x248:
	  lfs       f3, -0x3B94(r2)
	  fcmpo     cr0, f6, f3
	  bge-      .loc_0x308
	  fmuls     f4, f1, f1
	  lfs       f3, -0x3BC0(r2)
	  fmuls     f5, f0, f0
	  fmadds    f4, f2, f2, f4
	  fadds     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x280
	  ble-      .loc_0x284
	  fsqrte    f3, f4
	  fmuls     f4, f3, f4
	  b         .loc_0x284

	.loc_0x280:
	  fmr       f4, f3

	.loc_0x284:
	  lfs       f3, -0x3BC0(r2)
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x2A4
	  lfs       f3, -0x3B90(r2)
	  fdivs     f3, f3, f4
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3

	.loc_0x2A4:
	  lfs       f3, -0x3B94(r2)
	  lfs       f5, -0x3B8C(r2)
	  fsubs     f4, f3, f6
	  lfs       f3, 0x0(r4)
	  fmuls     f4, f5, f4
	  fmuls     f2, f2, f4
	  fmuls     f1, f1, f4
	  fmuls     f0, f0, f4
	  fadds     f3, f3, f2
	  stfs      f3, 0x0(r4)
	  lfs       f3, 0x4(r4)
	  fadds     f3, f3, f1
	  stfs      f3, 0x4(r4)
	  lfs       f3, 0x8(r4)
	  fadds     f3, f3, f0
	  stfs      f3, 0x8(r4)
	  lfs       f3, 0x0(r3)
	  fsubs     f2, f3, f2
	  stfs      f2, 0x0(r3)
	  lfs       f2, 0x4(r3)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x4(r3)
	  lfs       f1, 0x8(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x8(r3)

	.loc_0x308:
	  addi      r3, r3, 0xC
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x1EC

	.loc_0x314:
	  addi      r4, r4, 0xC
	  addi      r6, r6, 0x1

	.loc_0x31C:
	  cmpw      r6, r27
	  blt+      .loc_0x1D8
	  addi      r5, r5, 0x1
	  cmpwi     r5, 0x5
	  blt+      .loc_0x1CC
	  lis       r3, 0x8051
	  li        r30, 0
	  subi      r28, r3, 0x2E20
	  b         .loc_0x39C

	.loc_0x340:
	  li        r3, 0x38
	  bl        -0x2278B8
	  mr.       r22, r3
	  beq-      .loc_0x364
	  mr        r4, r26
	  mr        r5, r25
	  li        r6, 0x1
	  bl        -0x75AC
	  mr        r22, r3

	.loc_0x364:
	  lfs       f1, 0x0(r29)
	  mr        r3, r28
	  lfs       f0, 0x8(r29)
	  fsubs     f1, f1, f26
	  fsubs     f2, f0, f24
	  bl        -0x216688
	  mr        r3, r22
	  mr        r4, r29
	  bl        -0x7398
	  lwz       r3, 0x1C(r24)
	  mr        r4, r22
	  bl        0x1C5C60
	  addi      r29, r29, 0xC
	  addi      r30, r30, 0x1

	.loc_0x39C:
	  cmpw      r30, r27
	  blt+      .loc_0x340
	  lwz       r0, 0x10(r23)
	  add       r0, r0, r27
	  stw       r0, 0x10(r23)
	  lwz       r0, 0x8(r23)
	  add       r0, r0, r27
	  stw       r0, 0x8(r23)
	  psq_l     f31,0x1C8(r1),0,0
	  lfd       f31, 0x1C0(r1)
	  psq_l     f30,0x1B8(r1),0,0
	  lfd       f30, 0x1B0(r1)
	  psq_l     f29,0x1A8(r1),0,0
	  lfd       f29, 0x1A0(r1)
	  psq_l     f28,0x198(r1),0,0
	  lfd       f28, 0x190(r1)
	  psq_l     f27,0x188(r1),0,0
	  lfd       f27, 0x180(r1)
	  psq_l     f26,0x178(r1),0,0
	  lfd       f26, 0x170(r1)
	  psq_l     f25,0x168(r1),0,0
	  lfd       f25, 0x160(r1)
	  psq_l     f24,0x158(r1),0,0
	  lfd       f24, 0x150(r1)
	  psq_l     f23,0x148(r1),0,0
	  lfd       f23, 0x140(r1)
	  psq_l     f22,0x138(r1),0,0
	  lfd       f22, 0x130(r1)
	  lmw       r22, 0x108(r1)
	  lwz       r0, 0x1D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024B838
 * Size:	00003C
 */
bool RandEnemyUnit::isEnemySetGen(MapNode*, BaseGen*)
{
	/*
	.loc_0x0:
	  cmplwi    r5, 0
	  beq-      .loc_0x34
	  lwz       r3, 0x1C(r4)
	  lwz       r3, 0x10(r3)
	  b         .loc_0x2C

	.loc_0x14:
	  lwz       r0, 0x1C(r3)
	  cmplw     r0, r5
	  bne-      .loc_0x28
	  li        r3, 0x1
	  blr

	.loc_0x28:
	  lwz       r3, 0x4(r3)

	.loc_0x2C:
	  cmplwi    r3, 0
	  bne+      .loc_0x14

	.loc_0x34:
	  li        r3, 0
	  blr
	*/
}
} // namespace Cave
} // namespace Game
