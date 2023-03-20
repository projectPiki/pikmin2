#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	8024C878
 * Size:	0000A8
 */
RandMapScore::RandMapScore(MapUnitGenerator* generator)
{
	mGenerator       = generator;
	mVersusHighScore = 0;
	mVersusLowScore  = 0;
	mFixObjNodes     = new MapNode*[5];
	mFixObjGens      = new BaseGen*[5];

	for (int i = 0; i < 5; i++) {
		mFixObjNodes[i] = nullptr;
		mFixObjGens[i]  = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8024C920
 * Size:	00006C
 */
void RandMapScore::setMapUnitScore()
{
	clearRoomAndDoorScore();
	if (!isScoreSetDone()) {
		for (int i = 0; i < 500; i++) {
			setUnitAndDoorScore();
			if (isScoreSetDone()) {
				return;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024C98C
 * Size:	000038
 */
void RandMapScore::setStartSlot()
{
	if (mGenerator->mIsVersusMode) {
		setVersusOnyon();
	} else {
		setChallengePod();
	}
}

/*
 * --INFO--
 * Address:	8024C9C4
 * Size:	000058
 */
void RandMapScore::setGoalSlot()
{
	if (!mGenerator->mIsVersusMode) {
		if (isGoalSetHard()) {
			setChallengeFixObjHard();
		} else {
			setChallengeFixObjNormal();
		}
	}
}

/*
 * --INFO--
 * Address:	8024CA1C
 * Size:	00018C
 */
void RandMapScore::makeObjectLayout(MapNode* mapNode, ObjectLayout* layout)
{
	for (int i = 0; i < 5; i++) {
		if (mapNode == mFixObjNodes[i]) {
			int layoutTypes[5]       = { OBJLAYOUT_Pod, OBJLAYOUT_Hole, OBJLAYOUT_Fountain, OBJLAYOUT_VsRedOnyon, OBJLAYOUT_VsBlueOnyon };
			FixObjNode* rootObjNode  = new FixObjNode(layoutTypes[i]);
			FixObjNode* childObjNode = new FixObjNode(layoutTypes[i]);

			Vector3f globalPos       = mFixObjNodes[i]->getBaseGenGlobalPosition(mFixObjGens[i]);
			f32 dir                  = mFixObjNodes[i]->getBaseGenGlobalDirection(mFixObjGens[i]);
			childObjNode->mPosition  = globalPos;
			childObjNode->mDirection = dir;

			rootObjNode->add(childObjNode);
			layout->setNode(layoutTypes[i], rootObjNode);
		}
	}
}

/*
 * --INFO--
 * Address:	8024CBA8
 * Size:	000010
 */
MapNode* RandMapScore::getFixObjNode(int idx) { return mFixObjNodes[idx]; }

/*
 * --INFO--
 * Address:	8024CBB8
 * Size:	000010
 */
BaseGen* RandMapScore::getFixObjGen(int idx) { return mFixObjGens[idx]; }

/*
 * --INFO--
 * Address:	8024CBC8
 * Size:	000064
 */
void RandMapScore::getGlobalPosition(int idx, Vector3f& position)
{
	MapNode* node = getFixObjNode(idx);
	if (node) {
		position = node->getBaseGenGlobalPosition(getFixObjGen(idx));
	}
}

/*
 * --INFO--
 * Address:	8024CC2C
 * Size:	000008
 */
int RandMapScore::getVersusHighScore() { return mVersusHighScore; }

/*
 * --INFO--
 * Address:	8024CC34
 * Size:	000008
 */
int RandMapScore::getVersusLowScore() { return mVersusLowScore; }

/*
 * --INFO--
 * Address:	8024CC3C
 * Size:	000084
 */
bool RandMapScore::isScoreSetDone()
{
	FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currNode)
	{
		for (int i = 0; i < currNode->getNumDoors(); i++) {
			if (!currNode->isDoorScoreSetDone(i)) {
				return false;
			}
		}
	}

	return true;
}

/*
 * --INFO--
 * Address:	8024CCC0
 * Size:	0000C4
 */
void RandMapScore::clearRoomAndDoorScore()
{
	FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currNode)
	{
		currNode->setEnemyScore();
		currNode->setNodeScore(-1);
		currNode->resetDoorScore();
	}

	if (mGenerator->mIsVersusMode) {
		// if in versus mode, start calculating map score from both red and blue onyons (if set)
		if (getFixObjNode(FIXNODE_VsRedOnyon)) {
			setStartMapNodeScore(getFixObjNode(FIXNODE_VsRedOnyon));
		}
		if (getFixObjNode(FIXNODE_VsBlueOnyon)) {
			setStartMapNodeScore(getFixObjNode(FIXNODE_VsBlueOnyon));
		}

	} else if (getFixObjNode(FIXNODE_Pod)) { // not versus mode, so start from pod/ship.
		setStartMapNodeScore(getFixObjNode(FIXNODE_Pod));
	}
}

/*
 * --INFO--
 * Address:	8024CD84
 * Size:	000154
 */
void RandMapScore::setUnitAndDoorScore()
{

	MapNode* minScoreNode = nullptr;
	int minScoreDoor      = -1;
	int minScore          = 12800000;

	FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currNode)
	{
		currNode->getNodeScore();
		int numDoors = currNode->getNumDoors();
		for (int i = 0; i < numDoors; i++) {
			if (currNode->isDoorScoreSetDone(i)) {
				FOREACH_NODE(AdjustNode, currNode->getAdjustNode(i)->mChild, adjNode)
				{
					int doorID = adjNode->mNode->mDoorID;
					if (!currNode->isDoorScoreSetDone(doorID)) {
						Adjust* adj       = adjNode->mNode;
						int enemyScore    = adj->mTekiFlags * currNode->getEnemyScore();
						int distanceScore = adj->mDistance;
						int tempScore     = enemyScore + currNode->mAdjustInfo[i].mDoorScore;
						int currScore     = currNode->getGateScore(doorID) + tempScore + distanceScore;
						if (minScore > currScore) {
							minScore     = currScore;
							minScoreNode = currNode;
							minScoreDoor = doorID;
						}
					}
				}
			}
		}
	}

	if (minScoreNode) {
		minScoreNode->setDoorScore(minScoreDoor, minScore);
		setMapNodeScore(minScoreNode->mAdjustInfo[minScoreDoor].mNode, minScore);
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, 0x00C35000@ha
	stw      r0, 0x44(r1)
	stmw     r20, 0x10(r1)
	mr       r22, r3
	addi     r27, r4, 0x00C35000@l
	li       r29, 0
	li       r28, -1
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r26, 0x10(r3)
	b        lbl_8024CE8C

lbl_8024CDB8:
	mr       r3, r26
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	mr       r3, r26
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r31, r3
	li       r25, 0
	li       r30, 0
	b        lbl_8024CE80

lbl_8024CDD8:
	mr       r3, r26
	mr       r4, r25
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024CE78
	mr       r3, r26
	mr       r4, r25
	bl       getAdjustNode__Q34Game4Cave7MapNodeFi
	lwz      r24, 0x10(r3)
	b        lbl_8024CE70

lbl_8024CE00:
	lwz      r4, 0x18(r24)
	mr       r3, r26
	lwz      r23, 0(r4)
	mr       r4, r23
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024CE6C
	lwz      r20, 0x18(r24)
	mr       r3, r26
	bl       getEnemyScore__Q34Game4Cave7MapNodeFv
	lwz      r0, 8(r20)
	mr       r4, r23
	lwz      r5, 0x28(r26)
	mullw    r6, r0, r3
	lwz      r20, 4(r20)
	addi     r0, r5, 8
	lwzx     r0, r30, r0
	mr       r3, r26
	add      r21, r0, r6
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	add      r0, r21, r3
	add      r0, r20, r0
	cmpw     r27, r0
	ble      lbl_8024CE6C
	mr       r27, r0
	mr       r29, r26
	mr       r28, r23

lbl_8024CE6C:
	lwz      r24, 4(r24)

lbl_8024CE70:
	cmplwi   r24, 0
	bne      lbl_8024CE00

lbl_8024CE78:
	addi     r30, r30, 0xc
	addi     r25, r25, 1

lbl_8024CE80:
	cmpw     r25, r31
	blt      lbl_8024CDD8
	lwz      r26, 4(r26)

lbl_8024CE8C:
	cmplwi   r26, 0
	bne      lbl_8024CDB8
	cmplwi   r29, 0
	beq      lbl_8024CEC4
	mr       r3, r29
	mr       r4, r28
	mr       r5, r27
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	mulli    r0, r28, 0xc
	lwz      r4, 0x28(r29)
	mr       r3, r22
	mr       r5, r27
	lwzx     r4, r4, r0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024CEC4:
	lmw      r20, 0x10(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024CED8
 * Size:	0000B0
 */
void RandMapScore::setStartMapNodeScore(MapNode* mapNode)
{
	setMapNodeScore(mapNode, 0);
	for (int i = 0; i < mapNode->getNumDoors(); i++) {
		if (!mapNode->isDoorScoreSetDone(i)) {
			int score = mapNode->getGateScore(i);

			int nodeScore = mapNode->getNodeScore();
			score++;
			score += nodeScore;
			mapNode->setDoorScore(i, score);
			setMapNodeScore(mapNode->mAdjustInfo[i].mNode, score);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r29, 0
	li       r30, 0
	b        lbl_8024CF64

lbl_8024CF04:
	mr       r3, r28
	mr       r4, r29
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024CF5C
	mr       r3, r28
	mr       r4, r29
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r31, r3
	mr       r3, r28
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r31, r31, 1
	mr       r4, r29
	add      r31, r3, r31
	mr       r3, r28
	mr       r5, r31
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r28)
	mr       r3, r27
	mr       r5, r31
	lwzx     r4, r4, r30
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024CF5C:
	addi     r30, r30, 0xc
	addi     r29, r29, 1

lbl_8024CF64:
	mr       r3, r28
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r29, r3
	blt      lbl_8024CF04
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
MapNode* RandMapScore::getRandRoomMapNode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8024CF88
 * Size:	00013C
 */
void RandMapScore::setChallengePod()
{
	BaseGen* genList[16];
	if (!getFixObjNode(FIXNODE_Pod)) {
		int counter = 0;
		FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
		{
			if (currNode->mUnitInfo->getUnitKind() == 1) {
				mFixObjNodes[FIXNODE_Pod] = currNode;
				break;
			}
		}

		if (getFixObjNode(FIXNODE_Pod)) {
			BaseGen* gen = getFixObjNode(FIXNODE_Pod)->mUnitInfo->getBaseGen();
			if (gen) {

				FOREACH_NODE(BaseGen, gen->mChild, currGen)
				{
					if (currGen->mSpawnType == BaseGen::Start) {
						genList[counter] = currGen;
						counter++;
					}
				}
			}

			if (counter) {
				int randIdx              = counter * randFloat();
				mFixObjGens[FIXNODE_Pod] = genList[randIdx];
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8024D0C4
 * Size:	0001B8
 */
void RandMapScore::setVersusOnyon()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	lwz      r3, 4(r3)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_8024D25C
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_8024D25C
	lwz      r3, 0(r31)
	addi     r28, r1, 0x18
	li       r29, 0
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_8024D138

lbl_8024D118:
	lwz      r3, 0x18(r30)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_8024D134
	stw      r30, 0(r28)
	addi     r28, r28, 4
	addi     r29, r29, 1

lbl_8024D134:
	lwz      r30, 4(r30)

lbl_8024D138:
	cmplwi   r30, 0
	bne      lbl_8024D118
	cmpwi    r29, 0
	beq      lbl_8024D1A4
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x5c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051A800@sda21(r2)
	addi     r3, r1, 0x18
	stw      r4, 0x58(r1)
	lfs      f0, lbl_8051A7F8@sda21(r2)
	lfd      f1, 0x58(r1)
	stw      r0, 0x64(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x60(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x60(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	slwi     r0, r0, 2
	lwzx     r30, r3, r0
	b        lbl_8024D1A8

lbl_8024D1A4:
	li       r30, 0

lbl_8024D1A8:
	lwz      r5, lbl_80520EA8@sda21(r2)
	cmplwi   r30, 0
	lwz      r4, lbl_80520EAC@sda21(r2)
	lwz      r3, lbl_80520EB0@sda21(r2)
	lwz      r0, lbl_80520EB4@sda21(r2)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	beq      lbl_8024D25C
	mr       r3, r31
	mr       r4, r30
	bl       calcNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode
	mr       r3, r31
	mr       r4, r30
	addi     r5, r1, 8
	bl
getMaxScoreRoomMapNode__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePPQ34Game4Cave7BaseGen
	mr       r4, r3
	mr       r3, r31
	stw      r4, 0x10(r1)
	bl       calcNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode
	mr       r3, r31
	bl       copyNodeScore__Q34Game4Cave12RandMapScoreFv
	lwz      r4, 0x10(r1)
	addi     r5, r1, 0xc
	mr       r3, r31
	bl
getMaxScoreRoomMapNode__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePPQ34Game4Cave7BaseGen
	mr       r30, r3
	mr       r3, r31
	stw      r30, 0x14(r1)
	mr       r4, r30
	bl       calcNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode
	lwz      r0, 0x10(r1)
	mr       r3, r31
	lwz      r4, 4(r31)
	stw      r0, 0xc(r4)
	lwz      r4, 4(r31)
	stw      r30, 0x10(r4)
	lwz      r0, 8(r1)
	lwz      r4, 8(r31)
	stw      r0, 0xc(r4)
	lwz      r0, 0xc(r1)
	lwz      r4, 8(r31)
	stw      r0, 0x10(r4)
	bl       subNodeScore__Q34Game4Cave12RandMapScoreFv

lbl_8024D25C:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024D27C
 * Size:	0000FC
 */
MapNode* RandMapScore::getMaxScoreRoomMapNode(MapNode* mapNode, BaseGen** maxScoreGen)
{
	MapNode* maxScoreNode = nullptr;
	int maxScore          = 0;
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		if (currNode != mapNode && currNode->mUnitInfo->getUnitKind() == 1) {
			int nodeScore = currNode->getNodeScore() + 10;
			BaseGen* gen  = currNode->mUnitInfo->getBaseGen();
			if (gen) {
				FOREACH_NODE(BaseGen, gen->mChild, currGen)
				{
					if (currGen->mSpawnType == BaseGen::Start) {
						if (nodeScore > maxScore || (nodeScore == maxScore && randWeightFloat(1.0f) < 0.5f)) {
							*maxScoreGen = currGen;
							maxScoreNode = currNode;
							maxScore     = nodeScore;
						}
					}
				}
			}
		}
	}

	return maxScoreNode;
}

/*
 * --INFO--
 * Address:	8024D378
 * Size:	0003B0
 */
void RandMapScore::calcNodeScore(MapNode*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_8024D3C0

lbl_8024D3A0:
	mr       r3, r29
	bl       setEnemyScore__Q34Game4Cave7MapNodeFv
	mr       r3, r29
	li       r4, -1
	bl       setNodeScore__Q34Game4Cave7MapNodeFi
	mr       r3, r29
	bl       resetDoorScore__Q34Game4Cave7MapNodeFv
	lwz      r29, 4(r29)

lbl_8024D3C0:
	cmplwi   r29, 0
	bne      lbl_8024D3A0
	lwz      r3, 0(r30)
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	beq      lbl_8024D514
	lwz      r3, 4(r30)
	lwz      r25, 0xc(r3)
	cmplwi   r25, 0
	beq      lbl_8024D474
	mr       r3, r30
	mr       r4, r25
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r27, 0
	mr       r26, r27
	b        lbl_8024D464

lbl_8024D404:
	mr       r3, r25
	mr       r4, r27
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D45C
	mr       r3, r25
	mr       r4, r27
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r25
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r28, r29, 1
	mr       r4, r27
	add      r28, r3, r28
	mr       r3, r25
	mr       r5, r28
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r25)
	mr       r3, r30
	mr       r5, r28
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D45C:
	addi     r26, r26, 0xc
	addi     r27, r27, 1

lbl_8024D464:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r27, r3
	blt      lbl_8024D404

lbl_8024D474:
	lwz      r3, 4(r30)
	lwz      r25, 0x10(r3)
	cmplwi   r25, 0
	beq      lbl_8024D5B0
	mr       r3, r30
	mr       r4, r25
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r28, 0
	mr       r26, r28
	b        lbl_8024D500

lbl_8024D4A0:
	mr       r3, r25
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D4F8
	mr       r3, r25
	mr       r4, r28
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r25
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r27, r29, 1
	mr       r4, r28
	add      r27, r3, r27
	mr       r3, r25
	mr       r5, r27
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r25)
	mr       r3, r30
	mr       r5, r27
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D4F8:
	addi     r26, r26, 0xc
	addi     r28, r28, 1

lbl_8024D500:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D4A0
	b        lbl_8024D5B0

lbl_8024D514:
	lwz      r3, 4(r30)
	lwz      r25, 0(r3)
	cmplwi   r25, 0
	beq      lbl_8024D5B0
	mr       r3, r30
	mr       r4, r25
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r28, 0
	mr       r26, r28
	b        lbl_8024D5A0

lbl_8024D540:
	mr       r3, r25
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D598
	mr       r3, r25
	mr       r4, r28
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r25
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r27, r29, 1
	mr       r4, r28
	add      r27, r3, r27
	mr       r3, r25
	mr       r5, r27
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r25)
	mr       r3, r30
	mr       r5, r27
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D598:
	addi     r26, r26, 0xc
	addi     r28, r28, 1

lbl_8024D5A0:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D540

lbl_8024D5B0:
	mr       r3, r30
	mr       r4, r31
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r28, 0
	mr       r26, r28
	b        lbl_8024D62C

lbl_8024D5CC:
	mr       r3, r31
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D624
	mr       r3, r31
	mr       r4, r28
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r31
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r29, r29, 1
	mr       r4, r28
	add      r29, r3, r29
	mr       r3, r31
	mr       r5, r29
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r31)
	mr       r3, r30
	mr       r5, r29
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D624:
	addi     r26, r26, 0xc
	addi     r28, r28, 1

lbl_8024D62C:
	mr       r3, r31
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D5CC
	lwz      r3, 0(r30)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_8024D688

lbl_8024D64C:
	li       r28, 0
	b        lbl_8024D674

lbl_8024D654:
	mr       r3, r29
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D670
	li       r0, 0
	b        lbl_8024D694

lbl_8024D670:
	addi     r28, r28, 1

lbl_8024D674:
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D654
	lwz      r29, 4(r29)

lbl_8024D688:
	cmplwi   r29, 0
	bne      lbl_8024D64C
	li       r0, 1

lbl_8024D694:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8024D714
	li       r25, 0

lbl_8024D6A0:
	mr       r3, r30
	bl       setUnitAndDoorScore__Q34Game4Cave12RandMapScoreFv
	lwz      r3, 0(r30)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_8024D6F4

lbl_8024D6B8:
	li       r28, 0
	b        lbl_8024D6E0

lbl_8024D6C0:
	mr       r3, r29
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D6DC
	li       r0, 0
	b        lbl_8024D700

lbl_8024D6DC:
	addi     r28, r28, 1

lbl_8024D6E0:
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D6C0
	lwz      r29, 4(r29)

lbl_8024D6F4:
	cmplwi   r29, 0
	bne      lbl_8024D6B8
	li       r0, 1

lbl_8024D700:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8024D714
	addi     r25, r25, 1
	cmpwi    r25, 0x1f4
	blt      lbl_8024D6A0

lbl_8024D714:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024D728
 * Size:	000048
 */
void RandMapScore::copyNodeScore()
{
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode) { currNode->copyNodeScoreToVersusScore(); }
}

/*
 * --INFO--
 * Address:	8024D770
 * Size:	00008C
 */
void RandMapScore::subNodeScore()
{
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		currNode->subNodeScoreToVersusScore();
		if (currNode == getFixObjNode(FIXNODE_VsRedOnyon)) {
			mVersusLowScore = currNode->getVersusScore();
		} else if (currNode == getFixObjNode(FIXNODE_VsBlueOnyon)) {
			mVersusHighScore = currNode->getVersusScore();
		}
	}
}

/*
 * --INFO--
 * Address:	8024D7FC
 * Size:	000064
 */
void RandMapScore::setMapNodeScore(MapNode* mapNode, int score)
{
	score += mapNode->getEnemyScore();
	int nodeScore = mapNode->getNodeScore();
	if (nodeScore < 0 || nodeScore > score) {
		mapNode->setNodeScore(score);
	}
}

/*
 * --INFO--
 * Address:	8024D860
 * Size:	0003BC
 */
void RandMapScore::setChallengeFixObjNormal()
{
	/*
	stwu     r1, -0x1880(r1)
	mflr     r0
	stw      r0, 0x1884(r1)
	stmw     r16, 0x1840(r1)
	mr       r17, r3
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8024DC08
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8024D894
	b        lbl_8024DC08

lbl_8024D894:
	lwz      r6, 0(r17)
	lwz      r5, lbl_8051A810@sda21(r2)
	lbz      r0, 0(r6)
	lwz      r4, lbl_8051A814@sda21(r2)
	lhz      r3, lbl_8051A818@sda21(r2)
	cmplwi   r0, 0
	stw      r5, 0xc(r1)
	lwz      r31, 0x28(r6)
	stw      r4, 0x10(r1)
	sth      r3, 8(r1)
	beq      lbl_8024D8CC
	li       r0, 0
	stb      r0, 8(r1)
	b        lbl_8024D8E0

lbl_8024D8CC:
	lbz      r0, 1(r6)
	cmplwi   r0, 0
	bne      lbl_8024D8E0
	li       r0, 0
	stb      r0, 9(r1)

lbl_8024D8E0:
	addi     r26, r1, 8
	addi     r25, r1, 0xc
	li       r24, 0

lbl_8024D8EC:
	lbz      r0, 0(r26)
	cmplwi   r0, 0
	beq      lbl_8024DBF4
	lwz      r0, 0(r25)
	lwz      r3, 4(r17)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	cmplwi   r0, 0
	bne      lbl_8024DBF4
	lis      r3, lbl_8048410C@ha
	li       r16, 0
	addi     r5, r3, lbl_8048410C@l
	stw      r16, 0x1020(r1)
	lwz      r4, 0(r5)
	addi     r27, r1, 0x14
	lwz      r3, 4(r5)
	li       r23, 0
	lwz      r0, 8(r5)
	li       r22, 0
	stw      r4, 0x14(r1)
	li       r21, 0
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)

lbl_8024D948:
	lwz      r0, 0x1020(r1)
	cmplwi   r0, 0
	beq      lbl_8024D95C
	cmpwi    r21, 2
	bge      lbl_8024DB2C

lbl_8024D95C:
	lwz      r20, 0x10(r31)
	b        lbl_8024DB24

lbl_8024D964:
	lwz      r3, 0x18(r20)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r27)
	cmpw     r0, r3
	bne      lbl_8024DB20
	mr       r3, r20
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 0
	ble      lbl_8024D9C4
	mr       r3, r20
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1824(r1)
	lfd      f2, lbl_8051A800@sda21(r2)
	stw      r0, 0x1820(r1)
	lfs      f0, lbl_8051A81C@sda21(r2)
	lfd      f1, 0x1820(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8024D9C8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8024D9C8

lbl_8024D9C4:
	lfs      f1, lbl_8051A81C@sda21(r2)

lbl_8024D9C8:
	fctiwz   f0, f1
	lwz      r0, 0(r27)
	cmpwi    r0, 1
	stfd     f0, 0x1820(r1)
	lwz      r3, 0x1824(r1)
	addi     r19, r3, 0xa
	bne      lbl_8024DA70
	lwz      r3, 0x18(r20)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8024DB20
	addi     r30, r1, 0x1020
	addi     r29, r1, 0x820
	addi     r28, r1, 0x20
	lwz      r18, 0x10(r3)
	add      r30, r30, r16
	add      r29, r29, r16
	add      r28, r28, r16
	b        lbl_8024DA64

lbl_8024DA14:
	lwz      r0, 0x18(r18)
	cmpwi    r0, 4
	bne      lbl_8024DA60
	mr       r3, r17
	mr       r4, r20
	mr       r5, r18
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DA60
	stw      r19, 0(r28)
	addi     r23, r23, 1
	addi     r16, r16, 4
	lwz      r0, 0(r28)
	addi     r28, r28, 4
	stw      r20, 0(r30)
	addi     r30, r30, 4
	add      r22, r22, r0
	stw      r18, 0(r29)
	addi     r29, r29, 4

lbl_8024DA60:
	lwz      r18, 4(r18)

lbl_8024DA64:
	cmplwi   r18, 0
	bne      lbl_8024DA14
	b        lbl_8024DB20

lbl_8024DA70:
	cmpwi    r0, 0
	bne      lbl_8024DADC
	mr       r3, r20
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	addi     r4, r2, lbl_8051A820@sda21
	li       r5, 4
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_8024DB20
	mr       r3, r17
	mr       r4, r20
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DB20
	addi     r6, r1, 0x20
	addi     r5, r1, 0x1020
	stwx     r19, r6, r16
	addi     r3, r1, 0x820
	li       r4, 0
	addi     r23, r23, 1
	lwzx     r0, r6, r16
	stwx     r20, r5, r16
	add      r22, r22, r0
	stwx     r4, r3, r16
	addi     r16, r16, 4
	b        lbl_8024DB20

lbl_8024DADC:
	mr       r3, r17
	mr       r4, r20
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DB20
	addi     r6, r1, 0x20
	addi     r5, r1, 0x1020
	stwx     r19, r6, r16
	addi     r3, r1, 0x820
	li       r4, 0
	addi     r23, r23, 1
	lwzx     r0, r6, r16
	stwx     r20, r5, r16
	add      r22, r22, r0
	stwx     r4, r3, r16
	addi     r16, r16, 4

lbl_8024DB20:
	lwz      r20, 4(r20)

lbl_8024DB24:
	cmplwi   r20, 0
	bne      lbl_8024D964

lbl_8024DB2C:
	addi     r21, r21, 1
	addi     r27, r27, 4
	cmpwi    r21, 3
	blt      lbl_8024D948
	cmpwi    r22, 0
	beq      lbl_8024DBF4
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1824(r1)
	xoris    r0, r22, 0x8000
	lfd      f2, lbl_8051A800@sda21(r2)
	addi     r5, r1, 0x20
	stw      r4, 0x1820(r1)
	li       r6, 0
	lfs      f0, lbl_8051A7F8@sda21(r2)
	li       r7, 0
	lfd      f1, 0x1820(r1)
	stw      r0, 0x182c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x1828(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x1828(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x1830(r1)
	lwz      r3, 0x1834(r1)
	mtctr    r23
	cmpwi    r23, 0
	ble      lbl_8024DBF4

lbl_8024DBA8:
	lwz      r0, 0(r5)
	add      r6, r6, r0
	cmpw     r6, r3
	ble      lbl_8024DBE8
	lwz      r0, 0(r25)
	slwi     r7, r7, 2
	addi     r3, r1, 0x1020
	lwz      r5, 4(r17)
	lwzx     r6, r3, r7
	slwi     r4, r0, 2
	addi     r3, r1, 0x820
	stwx     r6, r5, r4
	lwzx     r0, r3, r7
	lwz      r3, 8(r17)
	stwx     r0, r3, r4
	b        lbl_8024DBF4

lbl_8024DBE8:
	addi     r5, r5, 4
	addi     r7, r7, 1
	bdnz     lbl_8024DBA8

lbl_8024DBF4:
	addi     r24, r24, 1
	addi     r25, r25, 4
	cmpwi    r24, 2
	addi     r26, r26, 1
	blt      lbl_8024D8EC

lbl_8024DC08:
	lmw      r16, 0x1840(r1)
	lwz      r0, 0x1884(r1)
	mtlr     r0
	addi     r1, r1, 0x1880
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024DC1C
 * Size:	000324
 */
void RandMapScore::setChallengeFixObjHard()
{
	/*
	stwu     r1, -0x1070(r1)
	mflr     r0
	stw      r0, 0x1074(r1)
	stmw     r18, 0x1038(r1)
	mr       r20, r3
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8024DF2C
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8024DC50
	b        lbl_8024DF2C

lbl_8024DC50:
	lwz      r6, 0(r20)
	lwz      r5, lbl_8051A828@sda21(r2)
	lbz      r0, 0(r6)
	lwz      r4, lbl_8051A82C@sda21(r2)
	lhz      r3, lbl_8051A830@sda21(r2)
	cmplwi   r0, 0
	stw      r5, 0xc(r1)
	lwz      r31, 0x28(r6)
	stw      r4, 0x10(r1)
	sth      r3, 8(r1)
	beq      lbl_8024DC88
	li       r0, 0
	stb      r0, 8(r1)
	b        lbl_8024DC9C

lbl_8024DC88:
	lbz      r0, 1(r6)
	cmplwi   r0, 0
	bne      lbl_8024DC9C
	li       r0, 0
	stb      r0, 9(r1)

lbl_8024DC9C:
	addi     r29, r1, 8
	addi     r28, r1, 0xc
	li       r27, 0

lbl_8024DCA8:
	lbz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_8024DF18
	lwz      r0, 0(r28)
	lwz      r3, 4(r20)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	cmplwi   r0, 0
	bne      lbl_8024DF18
	lis      r3, lbl_80484118@ha
	li       r0, 0
	addi     r5, r3, lbl_80484118@l
	stw      r0, 0x820(r1)
	lwz      r4, 0(r5)
	addi     r30, r1, 0x14
	lwz      r3, 4(r5)
	li       r26, 0
	lwz      r0, 8(r5)
	li       r25, -1
	stw      r4, 0x14(r1)
	li       r24, 0
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)

lbl_8024DD04:
	lwz      r0, 0x820(r1)
	cmplwi   r0, 0
	beq      lbl_8024DD18
	cmpwi    r24, 2
	bge      lbl_8024DE88

lbl_8024DD18:
	lwz      r23, 0x10(r31)
	b        lbl_8024DE80

lbl_8024DD20:
	lwz      r3, 0x18(r23)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r30)
	cmpw     r0, r3
	bne      lbl_8024DE7C
	mr       r3, r23
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	lwz      r0, 0(r30)
	mr       r22, r3
	cmpwi    r0, 1
	bne      lbl_8024DDC4
	lwz      r3, 0x18(r23)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8024DE7C
	lwz      r21, 0x10(r3)
	addi     r18, r1, 0x820
	addi     r19, r1, 0x20
	b        lbl_8024DDB8

lbl_8024DD6C:
	lwz      r0, 0x18(r21)
	cmpwi    r0, 4
	bne      lbl_8024DDB4
	mr       r3, r20
	mr       r4, r23
	mr       r5, r21
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DDB4
	cmpw     r22, r25
	blt      lbl_8024DDB4
	ble      lbl_8024DDA4
	li       r26, 0
	mr       r25, r22

lbl_8024DDA4:
	slwi     r0, r26, 2
	addi     r26, r26, 1
	stwx     r23, r18, r0
	stwx     r21, r19, r0

lbl_8024DDB4:
	lwz      r21, 4(r21)

lbl_8024DDB8:
	cmplwi   r21, 0
	bne      lbl_8024DD6C
	b        lbl_8024DE7C

lbl_8024DDC4:
	cmpwi    r0, 0
	bne      lbl_8024DE34
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	addi     r4, r2, lbl_8051A820@sda21
	li       r5, 4
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_8024DE7C
	mr       r3, r20
	mr       r4, r23
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DE7C
	cmpw     r22, r25
	blt      lbl_8024DE7C
	ble      lbl_8024DE14
	li       r26, 0
	mr       r25, r22

lbl_8024DE14:
	slwi     r5, r26, 2
	addi     r4, r1, 0x820
	addi     r3, r1, 0x20
	li       r0, 0
	stwx     r23, r4, r5
	addi     r26, r26, 1
	stwx     r0, r3, r5
	b        lbl_8024DE7C

lbl_8024DE34:
	mr       r3, r20
	mr       r4, r23
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DE7C
	cmpw     r22, r25
	blt      lbl_8024DE7C
	ble      lbl_8024DE60
	li       r26, 0
	mr       r25, r22

lbl_8024DE60:
	slwi     r5, r26, 2
	addi     r4, r1, 0x820
	addi     r3, r1, 0x20
	li       r0, 0
	stwx     r23, r4, r5
	addi     r26, r26, 1
	stwx     r0, r3, r5

lbl_8024DE7C:
	lwz      r23, 4(r23)

lbl_8024DE80:
	cmplwi   r23, 0
	bne      lbl_8024DD20

lbl_8024DE88:
	addi     r24, r24, 1
	addi     r30, r30, 4
	cmpwi    r24, 3
	blt      lbl_8024DD04
	cmpwi    r26, 0
	beq      lbl_8024DF18
	bl       rand
	lis      r7, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1024(r1)
	xoris    r5, r26, 0x8000
	lwz      r0, 0(r28)
	addi     r6, r1, 0x820
	stw      r7, 0x1020(r1)
	addi     r3, r1, 0x20
	lfd      f2, lbl_8051A800@sda21(r2)
	slwi     r4, r0, 2
	lfd      f1, 0x1020(r1)
	lfs      f0, lbl_8051A7F8@sda21(r2)
	fsubs    f1, f1, f2
	stw      r5, 0x102c(r1)
	lwz      r5, 4(r20)
	stw      r7, 0x1028(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x1028(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x1030(r1)
	lwz      r0, 0x1034(r1)
	slwi     r0, r0, 2
	lwzx     r6, r6, r0
	lwzx     r0, r3, r0
	stwx     r6, r5, r4
	lwz      r3, 8(r20)
	stwx     r0, r3, r4

lbl_8024DF18:
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 2
	addi     r29, r29, 1
	blt      lbl_8024DCA8

lbl_8024DF2C:
	lmw      r18, 0x1038(r1)
	lwz      r0, 0x1074(r1)
	mtlr     r0
	addi     r1, r1, 0x1070
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024DF40
 * Size:	000064
 */
bool RandMapScore::isGoalSetHard()
{
	switch (mGenerator->mRandItemType) {
	case 0:
		return false;

	case 1:
		return true;

	case 2:
		return false;

	case 3:
		return true;

	case 4:
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8024DFA4
 * Size:	000128
 */
bool RandMapScore::isFixObjSet(MapNode*, BaseGen*)
{
	/*
	lwz      r7, 4(r3)
	lwz      r0, 0(r7)
	cmplw    r4, r0
	bne      lbl_8024E034
	cmplwi   r5, 0
	beq      lbl_8024E034
	lwz      r6, 8(r3)
	lwz      r6, 0(r6)
	cmplwi   r6, 0
	beq      lbl_8024E034
	lfs      f1, 0x20(r6)
	lfs      f0, 0x20(r5)
	lfs      f3, 0x1c(r6)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r5)
	lfs      f1, 0x24(r6)
	lfs      f0, 0x24(r5)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A81C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8024E01C
	ble      lbl_8024E020
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8024E020

lbl_8024E01C:
	fmr      f1, f0

lbl_8024E020:
	lfs      f0, lbl_8051A834@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8024E034
	li       r3, 0
	blr

lbl_8024E034:
	lwz      r0, 4(r7)
	cmplw    r4, r0
	bne      lbl_8024E058
	lwz      r6, 8(r3)
	lwz      r0, 4(r6)
	cmplw    r5, r0
	bne      lbl_8024E058
	li       r3, 0
	blr

lbl_8024E058:
	lwz      r0, 8(r7)
	cmplw    r4, r0
	bne      lbl_8024E07C
	lwz      r6, 8(r3)
	lwz      r0, 8(r6)
	cmplw    r5, r0
	bne      lbl_8024E07C
	li       r3, 0
	blr

lbl_8024E07C:
	lwz      r0, 0xc(r7)
	cmplw    r4, r0
	bne      lbl_8024E0A0
	lwz      r6, 8(r3)
	lwz      r0, 0xc(r6)
	cmplw    r5, r0
	bne      lbl_8024E0A0
	li       r3, 0
	blr

lbl_8024E0A0:
	lwz      r0, 0x10(r7)
	cmplw    r4, r0
	bne      lbl_8024E0C4
	lwz      r6, 8(r3)
	lwz      r0, 0x10(r6)
	cmplw    r5, r0
	bne      lbl_8024E0C4
	li       r3, 0
	blr

lbl_8024E0C4:
	li       r3, 1
	blr
	*/
}
} // namespace Cave
} // namespace Game
