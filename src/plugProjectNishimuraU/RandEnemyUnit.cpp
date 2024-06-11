#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {
/**
 * @note Address: 0x80248914
 * @note Size: 0xA8
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

/**
 * @note Address: 0x802489BC
 * @note Size: 0x8
 */
void RandEnemyUnit::setManageClassPtr(RandMapScore* score) { mMapScore = score; }

/**
 * @note Address: 0x802489C4
 * @note Size: 0x54
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

/**
 * @note Address: 0x80248A18
 * @note Size: 0x278
 */
void RandEnemyUnit::setEnemyTypeWeight()
{
	int enemyTypes[4] = { BaseGen::CGT_EnemyEasy, BaseGen::CGT_EnemyHard, BaseGen::CGT_DoorSeam, BaseGen::CGT_EnemySpecial }; // _38

	int weightList[4]; // _28
	int countList[4];  // _18
	int totalWeights = 0;

	for (int i = 0; i < 4; i++) {
		mTypeCount[i] = 0;
		mTypeMax[i]   = 0;
	}

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

	tallyWeights[0] = weightList[0];
	tallyWeights[1] = tallyWeights[0] + weightList[1];
	tallyWeights[2] = tallyWeights[1] + weightList[2];
	tallyWeights[3] = tallyWeights[2] + weightList[3];

	int totalNum = countList[0];
	for (int i = 1; i < 4; i++) {
		totalNum += countList[i];
	}

	for (totalNum; totalNum < mMaxEnemies; totalNum++) {
		int randEnemy = randInt(totalWeights);
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

/**
 * @note Address: 0x80248C90
 * @note Size: 0xF0
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

/**
 * @note Address: 0x80248D80
 * @note Size: 0xCC
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

/**
 * @note Address: 0x80248E4C
 * @note Size: 0xCC
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

/**
 * @note Address: 0x80248F18
 * @note Size: 0x104
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
				int max   = 0;
				int min   = 0;
				int count = 0;
				setSlotEnemyTypeA(max, min, -1);
				setUnitRandEnemyTypeA(count, max, min);
				if (mMapTile && mSpawn && mEnemyUnit && count) {
					makeSetEnemyTypeA(mMapTile, mSpawn, mEnemyUnit, count);
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

/**
 * @note Address: 0x8024901C
 * @note Size: 0x190
 */
void RandEnemyUnit::setVersusHibaTypeC()
{
	if (mIsVersusHiba) {
		TekiInfo* info = new TekiInfo;
		info->mEnemyID = EnemyTypeID::EnemyID_ElecHiba;
		info->mType    = BaseGen::CGT_DoorSeam;

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

/**
 * @note Address: 0x802491AC
 * @note Size: 0x1A4
 */
void RandEnemyUnit::setVersusEnemyTypeC()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_DoorSeam) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_C]) {
				int altNum     = (count - mTypeCount[TEKITYPE_C]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_C]) / 2) * 2;

				int randIdx = randInt(2);
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

/**
 * @note Address: 0x80249350
 * @note Size: 0x2F8
 */
void RandEnemyUnit::setSlotEnemyTypeC(int& doorIdx, int vsColor)
{

	MapNode* mapTiles[256];   // 0x808
	int openDoorIndices[256]; // 0x408
	int doorScores[256];      // 0x8

	int counter    = 0; // r22
	int scoreTally = 0; // r21

	MapNode* placedNodes = mGenerator->getPlacedNodes(); // r17

	if (mGenerator->mIsVersusMode) { // Versus mode
		int vsScore = 0;
		int sign    = 0;
		if (vsColor == Blue) {
			MapNode* redOnyon = mMapScore->getFixObjNode(FIXNODE_VsRedOnyon);
			if (redOnyon) {
				vsScore = redOnyon->getVersusScore();
				sign    = -1;
			}
		} else if (vsColor == Red) {
			MapNode* blueOnyon = mMapScore->getFixObjNode(FIXNODE_VsBlueOnyon);
			if (blueOnyon) {
				vsScore = blueOnyon->getVersusScore();
				sign    = 1;
			}
		}
		MapNode* node;
		for (node = static_cast<MapNode*>(placedNodes->mChild); node; node = static_cast<MapNode*>(node->mNext)) {
			// caps are always connected to not-caps, so don't need to worry about them
			if (node->mUnitInfo->getUnitKind() == UNITKIND_Room || node->mUnitInfo->getUnitKind() == UNITKIND_Corridor) {
				int numDoors = node->getNumDoors();
				for (int i = 0; i < numDoors; i++) {
					if (!node->isGateSetDoor(i)) {
						mapTiles[counter]        = node;
						openDoorIndices[counter] = i;
						doorScores[counter]      = sign * (vsScore + mapTiles[counter]->getVersusScore());
						if (doorScores[counter] <= 0) {
							doorScores[counter] = 1;
						}
						scoreTally += doorScores[counter];
						counter++;
					}
				}
			}
		}

	} else { // story mode
		MapNode* node;
		for (node = static_cast<MapNode*>(placedNodes->mChild); node; node = static_cast<MapNode*>(node->mNext)) {
			// caps are always connected to not-caps, so don't need to worry about them
			if (node->mUnitInfo->getUnitKind() == UNITKIND_Room || node->mUnitInfo->getUnitKind() == UNITKIND_Corridor) {
				int numDoors = node->getNumDoors();

				int scoreWeight = 1; // corridor weight
				if (node->mUnitInfo->getUnitKind() == UNITKIND_Room) {
					scoreWeight = 100; // room weight
				}

				// make list of all open doors, their map tiles, and their score
				for (int i = 0; i < numDoors; i++) {
					if (!node->isGateSetDoor(i)) { // if door is open
						mapTiles[counter]        = node;
						openDoorIndices[counter] = i;
						doorScores[counter]      = scoreWeight;
						scoreTally += doorScores[counter];
						counter++;
					}
				}
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (counter == 0) {
		return;
	}

	int randScoreThreshold = (f32)scoreTally * randFloat();
	int scoreCounter       = 0;
	for (int i = 0; i < counter; i++) {
		scoreCounter += doorScores[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = mapTiles[i];
			doorIdx  = openDoorIndices[i];
			return;
		}
	}
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

/**
 * @note Address: 0x80249648
 * @note Size: 0x1A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeC()
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_DoorSeam) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_C]) {
					mEnemyUnit = enemy;
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x802497E8
 * @note Size: 0xD8
 */
void RandEnemyUnit::makeSetEnemyTypeC(MapNode* tile, int doorIdx, EnemyUnit* enemy)
{
	Vector3f doorPos     = tile->getDoorGlobalPosition(doorIdx);
	f32 doorDir          = tile->getDoorGlobalDirection(doorIdx);
	EnemyNode* enemyNode = new EnemyNode(enemy, nullptr, 1);
	enemyNode->setGlobalData(doorPos, doorDir);
	enemyNode->setBirthDoorIndex(doorIdx);
	tile->mEnemyNode->add(enemyNode);
	mTypeCount[TEKITYPE_C]++;
	mTotalCount++;
}

/**
 * @note Address: 0x802498C0
 * @note Size: 0x17C
 */
void RandEnemyUnit::setVersusEnemyTypeF()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_EnemySpecial) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_F]) {
				int altNum     = (count - mTypeCount[TEKITYPE_F]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_F]) / 2) * 2;

				int randIdx = randInt(2);
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

/**
 * @note Address: 0x80249A3C
 * @note Size: 0x3E0
 */
void RandEnemyUnit::setSlotEnemyTypeF(int p1)
{
	MapNode* nodeList[128];
	BaseGen* spawnList[128];
	int scoreList[128];
	Vector3f vecArray[3];
	f32 floatArray[3] = { 300.0f, 150.0f, 150.0f }; // 0x2C

	int counter      = 0;
	int vsScore      = 0;
	int vsSign       = 0;
	int spawnCounter = 0;
	int scoreTally   = 0;

	MapNode* placedNodes = mGenerator->getPlacedNodes();
	if (mGenerator->mIsVersusMode) {
		MapNode* onyon;
		for (int i = FIXNODE_VsStart; i <= FIXNODE_VsEnd; i++) {
			onyon               = mMapScore->getFixObjNode(i);
			BaseGen* onyonSpawn = mMapScore->getFixObjGen(i);
			if (!onyon) {
				continue;
			}

			Vector3f spawnPos   = onyon->getBaseGenGlobalPosition(onyonSpawn);
			vecArray[counter]   = spawnPos;
			floatArray[counter] = 400.0f;

			if (p1 == 0 && counter == 0) {
				vsScore = onyon->getVersusScore();
				vsSign  = -1;
			} else if (p1 == 1 && counter == 1) {
				vsScore = onyon->getVersusScore();
				vsSign  = 1;
			}
			counter++;
		}
	} else {
		MapNode* exit;
		// loop through start and exits (pod, hole, fountain)
		for (int i = FIXNODE_Pod; i <= FIXNODE_Fountain; i++) {
			exit               = mMapScore->getFixObjNode(i);
			BaseGen* exitSpawn = mMapScore->getFixObjGen(i);
			if (exit) {
				Vector3f spawnPos = exit->getBaseGenGlobalPosition(exitSpawn);
				vecArray[counter] = spawnPos;
				counter++;
			}
		}
	}

	FOREACH_NODE(MapNode, placedNodes->mChild, node)
	{
		if (node->mUnitInfo->getUnitKind() != UNITKIND_Room) {
			continue;
		}

		BaseGen* spawnRoot = node->mUnitInfo->getBaseGen();
		if (!spawnRoot) {
			continue;
		}

		FOREACH_NODE(BaseGen, spawnRoot->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemySpecial) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			bool check = true;
			for (int i = 0; i < counter; i++) {
				if (check) {
					Vector3f spawnPos = node->getBaseGenGlobalPosition(spawn);
					if (spawnPos.distance(vecArray[i]) < floatArray[i]) {
						check = false;
					}
				}
			}

			if (check) {
				nodeList[spawnCounter]  = node;
				spawnList[spawnCounter] = spawn;
				scoreList[spawnCounter] = vsSign * (vsScore + nodeList[spawnCounter]->getVersusScore());
				if (scoreList[spawnCounter] <= 0) {
					scoreList[spawnCounter] = 1;
				}

				scoreTally += scoreList[spawnCounter];
				spawnCounter++;
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (spawnCounter == 0) {
		return;
	}

	int randScoreThreshold = (f32)scoreTally * randFloat();
	int scoreCounter       = 0;
	for (int i = 0; i < spawnCounter; i++) {
		scoreCounter += scoreList[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = nodeList[i];
			mSpawn   = spawnList[i];
			return;
		}
	}
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

/**
 * @note Address: 0x80249E1C
 * @note Size: 0x1A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeF()
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_EnemySpecial) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_F]) {
					mEnemyUnit = enemy;
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x80249FBC
 * @note Size: 0x88
 */
void RandEnemyUnit::makeSetEnemyTypeF(MapNode* tile, BaseGen* spawn, EnemyUnit* enemy)
{
	EnemyNode* enemyNode = new EnemyNode(enemy, spawn, 1);
	enemyNode->makeGlobalData(tile);
	tile->mEnemyNode->add(enemyNode);
	mTypeCount[TEKITYPE_F]++;
	mTotalCount++;
}

/**
 * @note Address: 0x8024A044
 * @note Size: 0x17C
 */
void RandEnemyUnit::setVersusEnemyTypeB()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_EnemyHard) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_B]) {
				int altNum     = (count - mTypeCount[TEKITYPE_B]) % 2;
				int roundedMax = ((count - mTypeCount[TEKITYPE_B]) / 2) * 2;

				int randIdx = randInt(2);
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

/**
 * @note Address: 0x8024A1C0
 * @note Size: 0x3E0
 */
void RandEnemyUnit::setSlotEnemyTypeB(int p1)
{
	MapNode* nodeList[128];
	BaseGen* spawnList[128];
	int scoreList[128];
	Vector3f vecArray[3];
	f32 floatArray[3] = { 300.0f, 150.0f, 150.0f }; // 0x2C

	int counter      = 0;
	int vsScore      = 0;
	int vsSign       = 0;
	int spawnCounter = 0;
	int scoreTally   = 0;

	MapNode* placedNodes = mGenerator->getPlacedNodes();
	if (mGenerator->mIsVersusMode) {
		MapNode* onyon;
		BaseGen* onyonSpawn;
		for (int i = FIXNODE_VsStart; i <= FIXNODE_VsEnd; i++) {
			onyon      = mMapScore->getFixObjNode(i);
			onyonSpawn = mMapScore->getFixObjGen(i);
			if (!onyon) {
				continue;
			}

			Vector3f spawnPos   = onyon->getBaseGenGlobalPosition(onyonSpawn);
			vecArray[counter]   = spawnPos;
			floatArray[counter] = 400.0f;

			if (p1 == 0 && counter == 0) {
				vsScore = onyon->getVersusScore();
				vsSign  = -1;
			} else if (p1 == 1 && counter == 1) {
				vsScore = onyon->getVersusScore();
				vsSign  = 1;
			}
			counter++;
		}
	} else {
		MapNode* exit;
		// loop through start and exits (pod, hole, fountain)
		for (int i = FIXNODE_Pod; i <= FIXNODE_Fountain; i++) {
			exit               = mMapScore->getFixObjNode(i);
			BaseGen* exitSpawn = mMapScore->getFixObjGen(i);
			if (exit) {
				Vector3f spawnPos = exit->getBaseGenGlobalPosition(exitSpawn);
				vecArray[counter] = spawnPos;
				counter++;
			}
		}
	}

	FOREACH_NODE(MapNode, placedNodes->mChild, node)
	{
		if (node->mUnitInfo->getUnitKind() != UNITKIND_Room) {
			continue;
		}

		BaseGen* spawnRoot = node->mUnitInfo->getBaseGen();
		if (!spawnRoot) {
			continue;
		}

		FOREACH_NODE(BaseGen, spawnRoot->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemyHard) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			bool check = true;
			for (int i = 0; i < counter; i++) {
				if (check) {
					Vector3f spawnPos = node->getBaseGenGlobalPosition(spawn);
					if (spawnPos.distance(vecArray[i]) < floatArray[i]) {
						check = false;
					}
				}
			}

			if (check) {
				nodeList[spawnCounter]  = node;
				spawnList[spawnCounter] = spawn;
				scoreList[spawnCounter] = vsSign * (vsScore + nodeList[spawnCounter]->getVersusScore());
				if (scoreList[spawnCounter] <= 0) {
					scoreList[spawnCounter] = 1;
				}

				scoreTally += scoreList[spawnCounter];
				spawnCounter++;
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (spawnCounter == 0) {
		return;
	}

	int randScoreThreshold = (f32)scoreTally * randFloat();
	int scoreCounter       = 0;
	for (int i = 0; i < spawnCounter; i++) {
		scoreCounter += scoreList[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = nodeList[i];
			mSpawn   = spawnList[i];
			return;
		}
	}
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

/**
 * @note Address: 0x8024A5A0
 * @note Size: 0x1A0
 */
void RandEnemyUnit::setUnitRandEnemyTypeB()
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_EnemyHard) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_B]) {
					mEnemyUnit = enemy;
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];
			return;
		}
	}
}

/**
 * @note Address: 0x8024A740
 * @note Size: 0x88
 */
void RandEnemyUnit::makeSetEnemyTypeB(MapNode* tile, BaseGen* spawn, EnemyUnit* enemy)
{
	EnemyNode* enemyNode = new EnemyNode(enemy, spawn, 1);
	enemyNode->makeGlobalData(tile);
	tile->mEnemyNode->add(enemyNode);
	mTypeCount[TEKITYPE_B]++;
	mTotalCount++;
}

/**
 * @note Address: 0x8024A7C8
 * @note Size: 0x2CC
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

/**
 * @note Address: 0x8024AA94
 * @note Size: 0x144
 */
BaseGen* RandEnemyUnit::getVersusEasyEnemyBaseGen(MapNode* refTile, BaseGen* refSpawn)
{
	f32 minDist              = 12800.0f;
	BaseGen* goodEnoughSpawn = nullptr; // within 200 units of refSpawn
	BaseGen* closestSpawn    = nullptr;

	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, node)
	{
		if (node != refTile) {
			continue;
		}

		BaseGen* rootSpawn = node->mUnitInfo->getBaseGen();
		if (!rootSpawn) {
			continue;
		}
		FOREACH_NODE(BaseGen, rootSpawn->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemyEasy) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			f32 dist = spawn->mPosition.distance(refSpawn->mPosition);
			if (dist < 200.0f) {
				goodEnoughSpawn = spawn;
			} else if (dist < minDist) {
				closestSpawn = spawn;
				minDist      = dist;
			}
		}
	}

	if (closestSpawn) {
		return closestSpawn;
	}

	return goodEnoughSpawn;
}

/**
 * @note Address: 0x8024ABD8
 * @note Size: 0x1D4
 */
void RandEnemyUnit::setVersusEnemyTypeA()
{
	int count = 0;
	FOREACH_NODE(EnemyNode, mGenerator->mMainEnemies->mChild, currEnemy)
	{
		TekiInfo* info = currEnemy->getTekiInfo();
		if (info && info->mType == BaseGen::CGT_EnemyEasy) {
			count += info->mWeight / 10;
			if (count > mTypeCount[TEKITYPE_A]) {
				int max = (count - mTypeCount[TEKITYPE_A]);

				int vsColor = randInt(2);

				for (int i = 0; i < max; i++, vsColor ^= 1) {
					if (count <= mTypeCount[TEKITYPE_A]) {
						continue;
					}
					int max = 0;
					int min = 0;
					setSlotEnemyTypeA(max, min, vsColor);

					max = (max < count - mTypeCount[TEKITYPE_A]) ? max : count - mTypeCount[TEKITYPE_A];

					int enemiesToMake = (max <= min) ? max : min + randInt(max - min + 1);

					if (mMapTile && mSpawn && enemiesToMake) {
						makeSetEnemyTypeA(mMapTile, mSpawn, currEnemy->mEnemyUnit, enemiesToMake);
						continue;
					}
					return;
				}
			}
		}
	}
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

/**
 * @note Address: 0x8024ADAC
 * @note Size: 0x3D4
 */
void RandEnemyUnit::setSlotEnemyTypeA(int& max, int& min, int vsColor)
{
	MapNode* nodeList[128];
	BaseGen* spawnList[128];
	int scoreList[128];
	Vector3f vecArray[2];
	f32 floatArray[2] = { 400.0f, 400.0f }; // 0x2C

	int counter      = 0;
	int vsScore      = 0;
	int vsSign       = 0;
	int spawnCounter = 0;
	int scoreTally   = 0;

	MapNode* placedNodes = mGenerator->getPlacedNodes();
	if (mGenerator->mIsVersusMode) {
		MapNode* onyon;
		BaseGen* onyonSpawn;
		for (int i = FIXNODE_VsStart; i <= FIXNODE_VsEnd; i++) {
			onyon      = mMapScore->getFixObjNode(i);
			onyonSpawn = mMapScore->getFixObjGen(i);
			if (!onyon) {
				continue;
			}

			Vector3f spawnPos = onyon->getBaseGenGlobalPosition(onyonSpawn);
			vecArray[counter] = spawnPos;

			if (vsColor == Blue && counter == 0) {
				vsScore = onyon->getVersusScore();
				vsSign  = -1;
			} else if (vsColor == Red && counter == 1) {
				vsScore = onyon->getVersusScore();
				vsSign  = 1;
			}
			counter++;
		}
	} else {
		MapNode* start      = mMapScore->getFixObjNode(FIXNODE_Pod);
		BaseGen* startSpawn = mMapScore->getFixObjGen(FIXNODE_Pod);
		if (start) {
			Vector3f spawnPos   = start->getBaseGenGlobalPosition(startSpawn);
			vecArray[counter]   = spawnPos;
			floatArray[counter] = 300.0f;
			counter++;
		}
	}

	FOREACH_NODE(MapNode, placedNodes->mChild, node)
	{
		if (node->mUnitInfo->getUnitKind() != UNITKIND_Room) {
			continue;
		}

		BaseGen* spawnRoot = node->mUnitInfo->getBaseGen();
		if (!spawnRoot) {
			continue;
		}

		FOREACH_NODE(BaseGen, spawnRoot->mChild, spawn)
		{
			if (spawn->mSpawnType != BaseGen::CGT_EnemyEasy) {
				continue;
			}

			if (isEnemySetGen(node, spawn)) {
				continue;
			}

			bool check = true;
			for (int i = 0; i < counter; i++) {
				if (check) {
					Vector3f spawnPos = node->getBaseGenGlobalPosition(spawn);
					if (spawnPos.distance(vecArray[i]) < floatArray[i]) {
						check = false;
					}
				}
			}

			if (check) {
				nodeList[spawnCounter]  = node;
				spawnList[spawnCounter] = spawn;
				scoreList[spawnCounter] = vsSign * (vsScore + nodeList[spawnCounter]->getVersusScore());
				if (scoreList[spawnCounter] <= 0) {
					scoreList[spawnCounter] = 1;
				}

				scoreTally += scoreList[spawnCounter];
				spawnCounter++;
			}
		}
	}

	mMapTile = nullptr;
	mSpawn   = nullptr;

	if (spawnCounter == 0) {
		return;
	}

	int randScoreThreshold = (f32)scoreTally * randFloat();
	int scoreCounter       = 0;
	for (int i = 0; i < spawnCounter; i++) {
		scoreCounter += scoreList[i];
		if (scoreCounter > randScoreThreshold) {
			mMapTile = nodeList[i];
			mSpawn   = spawnList[i];

			max = spawnList[i]->mMaximum;
			min = spawnList[i]->mMinimum;
			return;
		}
	}
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

/**
 * @note Address: 0x8024B180
 * @note Size: 0x298
 */
void RandEnemyUnit::setUnitRandEnemyTypeA(int& count, int max, int min)
{
	EnemyUnit* enemyList[128];
	int weightList[128];

	int counter     = 0;
	int weightTally = 0;

	EnemyUnit* enemy;
	int weightCounter = 0;
	EnemyNode* node;

	for (node = static_cast<EnemyNode*>(mGenerator->mMainEnemies->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
		enemy = node->mEnemyUnit;
		if (enemy->mTekiInfo && enemy->mTekiInfo->mType == BaseGen::CGT_EnemyEasy) {
			int ones = enemy->mTekiInfo->mWeight % 10;
			int tens = enemy->mTekiInfo->mWeight / 10;
			if (tens) {
				weightCounter += tens;
				if (weightCounter > mTypeCount[TEKITYPE_A]) {
					mEnemyUnit = enemy;

					int goalAmt = weightCounter - mTypeCount[TEKITYPE_A];
					if (max < goalAmt) {
						goalAmt = max;
					}
					if (goalAmt <= min) {
						count = goalAmt;
						return;
					}

					count = min + randInt(goalAmt - min + 1);
					return;
				}
			}

			if (ones) {
				enemyList[counter]  = enemy;
				weightList[counter] = ones;
				weightTally += weightList[counter];
				counter++;
			}
		}
	}

	mEnemyUnit = nullptr;
	if (weightTally == 0) {
		return;
	}

	int randWeightThreshold = (f32)weightTally * randFloat();
	int ctr                 = 0;
	for (int i = 0; i < counter; i++) {
		ctr += weightList[i];
		if (ctr > randWeightThreshold) {
			mEnemyUnit = enemyList[i];

			int goalAmt = mMaxEnemies - mTotalCount;
			if (max < goalAmt) {
				goalAmt = max;
			}

			if (goalAmt <= min) {
				count = goalAmt;
				return;
			}

			count = min + randInt(goalAmt - min + 1);
			return;
		}
	}
}

/**
 * @note Address: 0x8024B418
 * @note Size: 0x420
 */
void RandEnemyUnit::makeSetEnemyTypeA(MapNode* tile, BaseGen* spawn, EnemyUnit* enemy, int count)
{
	Vector3f vecArray[16];
	Vector3f spawnPos = tile->getBaseGenGlobalPosition(spawn);
	f32 radius        = spawn->mRadius;
	for (int i = 0; i < count; i++) {
		f32 randDist  = randWeightFloat(radius);
		f32 randAngle = randWeightFloat(TAU);
		vecArray[i].x = randDist * sinf(randAngle) + spawnPos.x;
		vecArray[i].y = spawnPos.y;
		vecArray[i].z = randDist * cosf(randAngle) + spawnPos.z;
	}

	for (int i = 0; i < 5; i++) {             // r5
		for (int j = 0; j < count; j++) {     // r6
			for (int k = 0; k < count; k++) { // r7
				if (j == k) {
					continue;
				}
				// issues are here
				Vector3f sep = vecArray[j];
				sep          = sep - vecArray[k];
				f32 dist     = vecArray[j].distance(vecArray[k]);
				if (dist < 35.0f) {
					sep.normalise();
					sep *= (0.5f * (35.0f - dist));
					vecArray[j] += sep;
					vecArray[k] -= sep;
				}
			}
		}
	}

	for (int i = 0; i < count; i++) {
		EnemyNode* enemyNode = new EnemyNode(enemy, spawn, 1);
		f32 dir              = JMAAtan2Radian(vecArray[i].x - spawnPos.x, vecArray[i].z - spawnPos.z);
		enemyNode->setGlobalData(vecArray[i], dir);
		tile->mEnemyNode->add(enemyNode);
	}

	mTypeCount[TEKITYPE_A] += count;
	mTotalCount += count;
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

/**
 * @note Address: 0x8024B838
 * @note Size: 0x3C
 */
bool RandEnemyUnit::isEnemySetGen(MapNode* tile, BaseGen* spawn)
{
	if (spawn) {
		for (EnemyNode* node = static_cast<EnemyNode*>(tile->mEnemyNode->mChild); node; node = static_cast<EnemyNode*>(node->mNext)) {
			if (node->mSpawn == spawn) {
				return true;
			}
		}
	}

	return false;
}
} // namespace Cave
} // namespace Game
