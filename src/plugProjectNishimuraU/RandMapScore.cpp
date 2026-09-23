#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

/**
 * @note Address: 0x8024C878
 * @note Size: 0xA8
 */
RandMapScore::RandMapScore(MapUnitGenerator* generator)
{
	mGenerator       = generator;
	mVersusHighScore = 0;
	mVersusLowScore  = 0;
	mFixObjNodes     = new MapNode*[FIXNODE_Count];
	mFixObjGens      = new BaseGen*[FIXNODE_Count];

	for (int i = 0; i < FIXNODE_Count; i++) {
		mFixObjNodes[i] = nullptr;
		mFixObjGens[i]  = nullptr;
	}
}

/**
 * @note Address: 0x8024C920
 * @note Size: 0x6C
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

/**
 * @note Address: 0x8024C98C
 * @note Size: 0x38
 */
void RandMapScore::setStartSlot()
{
	if (mGenerator->mIsVersusMode) {
		setVersusOnyon();
	} else {
		setChallengePod();
	}
}

/**
 * @note Address: 0x8024C9C4
 * @note Size: 0x58
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

/**
 * @note Address: 0x8024CA1C
 * @note Size: 0x18C
 */
void RandMapScore::makeObjectLayout(MapNode* mapNode, ObjectLayout* layout)
{
	for (int i = 0; i < FIXNODE_Count; i++) {
		if (mapNode == mFixObjNodes[i]) {
			int layoutTypes[FIXNODE_Count]
			    = { OBJLAYOUT_Pod, OBJLAYOUT_Hole, OBJLAYOUT_Fountain, OBJLAYOUT_VsBlueOnyon, OBJLAYOUT_VsRedOnyon };
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

/**
 * @note Address: 0x8024CBA8
 * @note Size: 0x10
 */
MapNode* RandMapScore::getFixObjNode(int idx)
{
	return mFixObjNodes[idx];
}

/**
 * @note Address: 0x8024CBB8
 * @note Size: 0x10
 */
BaseGen* RandMapScore::getFixObjGen(int idx)
{
	return mFixObjGens[idx];
}

/**
 * @note Address: 0x8024CBC8
 * @note Size: 0x64
 */
void RandMapScore::getGlobalPosition(int idx, Vector3f& position)
{
	MapNode* node = getFixObjNode(idx);
	if (node) {
		position = node->getBaseGenGlobalPosition(getFixObjGen(idx));
	}
}

/**
 * @note Address: 0x8024CC2C
 * @note Size: 0x8
 */
int RandMapScore::getVersusHighScore()
{
	return mVersusHighScore;
}

/**
 * @note Address: 0x8024CC34
 * @note Size: 0x8
 */
int RandMapScore::getVersusLowScore()
{
	return mVersusLowScore;
}

/**
 * @note Address: 0x8024CC3C
 * @note Size: 0x84
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

/**
 * @note Address: 0x8024CCC0
 * @note Size: 0xC4
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

/**
 * @note Address: 0x8024CD84
 * @note Size: 0x154
 */
void RandMapScore::setUnitAndDoorScore()
{

	MapNode* minScoreNode = nullptr;
	int minScore          = 12800000;
	int minScoreDoor      = -1;

	FOREACH_NODE(MapNode, mGenerator->getPlacedNodes()->mChild, currNode)
	{
		currNode->getNodeScore();
		int numDoors = currNode->getNumDoors();
		for (int i = 0; i < numDoors; i++) {
			if (currNode->isDoorScoreSetDone(i)) {
				FOREACH_NODE(AdjustNode, currNode->getAdjustNode(i)->mChild, adjNode)
				{
					int doorID = adjNode->mAdjust->mDoorID;
					if (!currNode->isDoorScoreSetDone(doorID)) {
						Adjust* adj       = adjNode->mAdjust;
						int enemyScore    = adj->mTekiFlags * currNode->getEnemyScore();
						int distanceScore = adj->mDistance;
						int tempScore     = enemyScore + currNode->getDoorScore(i);
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
		setMapNodeScore(minScoreNode->getConnectedNode(minScoreDoor), minScore);
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

/**
 * @note Address: 0x8024CED8
 * @note Size: 0xB0
 */
void RandMapScore::setStartMapNodeScore(MapNode* mapNode)
{
	setMapNodeScore(mapNode, 0);
	for (int i = 0; i < mapNode->getNumDoors(); i++) {
		if (!mapNode->isDoorScoreSetDone(i)) {
			int score     = mapNode->getGateScore(i);
			int nodeScore = mapNode->getNodeScore();
			int doorScore = nodeScore + score + 1;
			mapNode->setDoorScore(i, doorScore);
			setMapNodeScore(mapNode->getConnectedNode(i), doorScore);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
MapNode* RandMapScore::getRandRoomMapNode()
{
	int counter = 0;
	MapNode* mapList[16];
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		if (currNode->mUnitInfo->getUnitKind() == UNITKIND_Room) {
			mapList[counter] = currNode;
			counter++;
		}
	}

	MapNode* targetNode;
	if (counter) {
		return mapList[randInt(counter)];
	}

	return nullptr;
}

/**
 * @note Address: 0x8024CF88
 * @note Size: 0x13C
 */
void RandMapScore::setChallengePod()
{
	BaseGen* genList[16];
	if (!getFixObjNode(FIXNODE_Pod)) {
		int counter = 0;
		FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
		{
			if (currNode->mUnitInfo->getUnitKind() == UNITKIND_Room) {
				mFixObjNodes[FIXNODE_Pod] = currNode;
				break;
			}
		}

		if (getFixObjNode(FIXNODE_Pod)) {
			BaseGen* gen = getFixObjNode(FIXNODE_Pod)->mUnitInfo->getBaseGen();
			if (gen) {

				FOREACH_NODE(BaseGen, gen->mChild, currGen)
				{
					if (currGen->mSpawnType == BaseGen::CGT_Start) {
						genList[counter] = currGen;
						counter++;
					}
				}
			}

			if (counter) {
				int randIdx              = randInt(counter);
				mFixObjGens[FIXNODE_Pod] = genList[randIdx];
			}
		}
	}
}

/**
 * @note Address: 0x8024D0C4
 * @note Size: 0x1B8
 */
void RandMapScore::setVersusOnyon()
{

	if (!getFixObjNode(FIXNODE_VsRedOnyon) && !getFixObjNode(FIXNODE_VsBlueOnyon)) {
		MapNode* targetNode    = getRandRoomMapNode();
		MapNode* onyonNodes[2] = { nullptr, nullptr };
		BaseGen* onyonGens[2]  = { nullptr, nullptr };

		if (targetNode) {
			calcNodeScore(targetNode);

			onyonNodes[0] = getMaxScoreRoomMapNode(targetNode, &onyonGens[0]);
			calcNodeScore(onyonNodes[0]);

			copyNodeScore();

			onyonNodes[1] = getMaxScoreRoomMapNode(onyonNodes[0], &onyonGens[1]);
			calcNodeScore(onyonNodes[1]);

			mFixObjNodes[FIXNODE_VsRedOnyon]  = onyonNodes[0];
			mFixObjNodes[FIXNODE_VsBlueOnyon] = onyonNodes[1];

			mFixObjGens[FIXNODE_VsRedOnyon]  = onyonGens[0];
			mFixObjGens[FIXNODE_VsBlueOnyon] = onyonGens[1];

			subNodeScore();
		}
	}
}

/**
 * @note Address: 0x8024D27C
 * @note Size: 0xFC
 */
MapNode* RandMapScore::getMaxScoreRoomMapNode(MapNode* mapNode, BaseGen** maxScoreGen)
{
	MapNode* maxScoreNode = nullptr;
	int maxScore          = 0;
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		if (currNode != mapNode && currNode->mUnitInfo->getUnitKind() == UNITKIND_Room) {
			int nodeScore = currNode->getNodeScore() + 10;
			BaseGen* gen  = currNode->mUnitInfo->getBaseGen();
			if (gen) {
				FOREACH_NODE(BaseGen, gen->mChild, currGen)
				{
					if (currGen->mSpawnType == BaseGen::CGT_Start) {
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

/**
 * @note Address: 0x8024D378
 * @note Size: 0x3B0
 */
void RandMapScore::calcNodeScore(MapNode* mapNode)
{
	clearRoomAndDoorScore();
	setStartMapNodeScore(mapNode);
	if (!isScoreSetDone()) {
		for (int i = 0; i < 500; i++) {
			setUnitAndDoorScore();
			if (isScoreSetDone()) {
				return;
			}
		}
	}
}

/**
 * @note Address: 0x8024D728
 * @note Size: 0x48
 */
void RandMapScore::copyNodeScore()
{
	FOREACH_NODE(MapNode, mGenerator->mPlacedMapNodes->mChild, currNode)
	{
		currNode->copyNodeScoreToVersusScore();
	}
}

/**
 * @note Address: 0x8024D770
 * @note Size: 0x8C
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

/**
 * @note Address: 0x8024D7FC
 * @note Size: 0x64
 */
void RandMapScore::setMapNodeScore(MapNode* mapNode, int score)
{
	score += mapNode->getEnemyScore();
	int nodeScore = mapNode->getNodeScore();
	if (nodeScore < 0 || nodeScore > score) {
		mapNode->setNodeScore(score);
	}
}

/**
 * @note Address: 0x8024D860
 * @note Size: 0x3BC
 */
void RandMapScore::setChallengeFixObjNormal()
{
	if (getFixObjNode(FIXNODE_Hole) || getFixObjNode(FIXNODE_Fountain)) {
		return;
	}

	MapNode* placedNodes = mGenerator->getPlacedNodes();
	int fixObjIdx[2]     = { FIXNODE_Hole, FIXNODE_Fountain };

	// include hole and geyser by default
	bool fixObjEnabled[2] = { true, true };

	if (mGenerator->mIsFinalFloor) {
		// disable hole on the final floor
		fixObjEnabled[0] = false;
	} else if (!mGenerator->mHasEscapeFountain) {
		// disable geyser if one is not enabled (and this is not the final floor)
		fixObjEnabled[1] = false;
	}

	for (int i = 0; i < 2; i++) {
		if (fixObjEnabled[i] && !getFixObjNode(fixObjIdx[i])) {
			MapNode* mapList[512];
			BaseGen* genList[512];
			int scoreList[512];

			int roomTypes[UNITKIND_Count] = { UNITKIND_Room, UNITKIND_Cap, UNITKIND_Corridor };
			int counter                   = 0;
			int tally                     = 0;
			mapList[0]                    = nullptr;
			// loop over room types
			for (int j = 0; j < UNITKIND_Count; j++) {
				if (!mapList[0] || j < 2) {
					FOREACH_NODE(MapNode, placedNodes->mChild, currNode)
					{
						if (roomTypes[j] == currNode->mUnitInfo->getUnitKind()) {
							f32 val;
							if (currNode->getNodeScore() > 0) {
								val = currNode->getNodeScore();
								val = sqrtfInPlace(val);
							} else {
								val = 0.0f;
							}

							int score = (int)val + 10;

							if (roomTypes[j] == UNITKIND_Room) {
								BaseGen* gen = currNode->mUnitInfo->getBaseGen();
								if (gen) {
									FOREACH_NODE(BaseGen, gen->mChild, currGen)
									{
										if (currGen->mSpawnType == BaseGen::CGT_HoleOrGeyser && isFixObjSet(currNode, currGen)) {
											mapList[counter]   = currNode;
											genList[counter]   = currGen;
											scoreList[counter] = score;
											tally += scoreList[counter];
											counter++;
										}
									}
								}

							} else if (roomTypes[j] == UNITKIND_Cap) {
								if (IS_SAME_STRING_PREFIX(currNode->getUnitName(), "item") && isFixObjSet(currNode, nullptr)) {
									mapList[counter]   = currNode;
									genList[counter]   = nullptr;
									scoreList[counter] = score;
									tally += scoreList[counter];
									counter++;
								}
							} else if (isFixObjSet(currNode, nullptr)) {
								mapList[counter]   = currNode;
								genList[counter]   = nullptr;
								scoreList[counter] = score;
								tally += scoreList[counter];
								counter++;
							}
						}
					}
				}
			}

			if (tally) {
				int randIdx  = randInt(tally);
				int newTally = 0;
				for (int k = 0; k < counter; k++) {
					newTally += scoreList[k];
					if (newTally > randIdx) {
						mFixObjNodes[fixObjIdx[i]] = mapList[k];
						mFixObjGens[fixObjIdx[i]]  = genList[k];
						break;
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8024DC1C
 * @note Size: 0x324
 */
void RandMapScore::setChallengeFixObjHard()
{
	if (getFixObjNode(FIXNODE_Hole) || getFixObjNode(FIXNODE_Fountain)) {
		return;
	}

	MapNode* placedNodes = mGenerator->getPlacedNodes();
	int fixObjIdx[2]     = { FIXNODE_Hole, FIXNODE_Fountain };

	bool fixObjEnabled[2] = { true, true };
	if (mGenerator->mIsFinalFloor) {
		fixObjEnabled[0] = false;
	} else if (!mGenerator->mHasEscapeFountain) {
		fixObjEnabled[1] = false;
	}

	for (int i = 0; i < 2; i++) {
		if (fixObjEnabled[i] && !getFixObjNode(fixObjIdx[i])) {
			MapNode* mapList[512];
			BaseGen* genList[512];
			// int scoreList[512];

			int roomTypes[UNITKIND_Count] = { UNITKIND_Room, UNITKIND_Cap, UNITKIND_Corridor };
			int counter                   = 0;
			mapList[0]                    = nullptr;
			int maxScore                  = -1;
			// loop over room types
			for (int j = 0; j < UNITKIND_Count; j++) {
				if (!mapList[0] || j < 2) {
					for (CNode* node = placedNodes->mChild; node; node = node->mNext) {
						MapNode* currNode = static_cast<MapNode*>(node);
						if (roomTypes[j] == currNode->mUnitInfo->getUnitKind()) {
							int score = currNode->getNodeScore();

							if (roomTypes[j] == UNITKIND_Room) {
								BaseGen* gen = currNode->mUnitInfo->getBaseGen();
								if (gen) {
									FOREACH_NODE(BaseGen, gen->mChild, currGen)
									{
										if (currGen->mSpawnType == BaseGen::CGT_HoleOrGeyser && isFixObjSet(currNode, currGen)) {
											if (score >= maxScore) {
												if (score > maxScore) {
													counter  = 0;
													maxScore = score;
												}
												mapList[counter] = currNode;
												genList[counter] = currGen;
												counter++;
											}
										}
									}
								}

							} else if (roomTypes[j] == UNITKIND_Cap) {
								if (IS_SAME_STRING_PREFIX(currNode->getUnitName(), "item") && isFixObjSet(currNode, nullptr)) {
									if (score >= maxScore) {
										if (score > maxScore) {
											counter  = 0;
											maxScore = score;
										}
										mapList[counter] = currNode;
										genList[counter] = nullptr;
										counter++;
									}
								}
							} else if (isFixObjSet(currNode, nullptr)) {
								if (score >= maxScore) {
									if (score > maxScore) {
										counter  = 0;
										maxScore = score;
									}
									mapList[counter] = currNode;
									genList[counter] = nullptr;
									counter++;
								}
							}
						}
					}
				}
			}

			if (counter) {
				int randIdx                = randInt(counter);
				mFixObjNodes[fixObjIdx[i]] = mapList[randIdx];
				mFixObjGens[fixObjIdx[i]]  = genList[randIdx];
			}
		}
	}
}

/**
 * @note Address: 0x8024DF40
 * @note Size: 0x64
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

/**
 * @note Address: 0x8024DFA4
 * @note Size: 0x128
 */
bool RandMapScore::isFixObjSet(MapNode* node, BaseGen* spawner)
{
	// test 0 (pod/ship) separately
	if (node == getFixObjNode(FIXNODE_Pod) && spawner && getFixObjGen(FIXNODE_Pod)) {
		Vector3f fixPos  = getFixObjGen(FIXNODE_Pod)->mPosition;
		Vector3f testPos = spawner->mPosition;
		if (fixPos.distance(testPos) < 150.0f) {
			return false;
		}
	}

	// test remaining fix obj nodes
	for (int i = FIXNODE_Hole; i < FIXNODE_Count; i++) {
		if (node == getFixObjNode(i) && spawner == getFixObjGen(i)) {
			return false;
		}
	}

	return true;
}
} // namespace Cave
} // namespace Game
