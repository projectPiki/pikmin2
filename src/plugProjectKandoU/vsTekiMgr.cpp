#include "Game/enemyInfo.h"
#include "Game/generalEnemyMgr.h"
#include "Game/VsGame.h"
#include "Dolphin/rand.h"

namespace Game {
namespace VsGame {

/**
 * @note Address: 0x802352F0
 * @note Size: 0x44
 */
TekiMgr::TekiMgr() { mNodeCount = 0; }

/**
 * @note Address: 0x80235394
 * @note Size: 0xA0
 */
void TekiMgr::entry(EnemyTypeID::EEnemyTypeID id, int count)
{
	TekiNode* newNode = new TekiNode;
	newNode->mId      = id;
	newNode->mTekiNum = count;
	newNode->mNodeID  = mNodeCount++;
	mNode.add(newNode);

	generalEnemyMgr->addEnemyNum(id, count, nullptr);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
TekiNode* TekiMgr::getNode(int idx) { return static_cast<TekiNode*>(mNode.getChildAt(idx)); }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 * Speculation: possibly inlined into TekiMgr::birth
 * Unknown return type
 */
/*
bool TekiMgr::birthable(int)
{
    // UNUSED FUNCTION
}
*/

/**
 * @note Address: 0x80235434
 * @note Size: 0xD8
 */
EnemyBase* TekiMgr::birth(int idx, Vector3f& position, bool setTimeLimit)
{
	TekiNode* node = getNode(idx);
	if (node) {
		EnemyBirthArg birthArg;
		birthArg.mFaceDir  = TAU * randFloat();
		birthArg.mPosition = position;
		if (setTimeLimit) {
			birthArg.mExistenceLength = 50.0f;
		}
		EnemyBase* teki = generalEnemyMgr->birth(node->mId, birthArg);
		if (teki) {
			teki->init(nullptr);
		}
		return teki;
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 * Unknown return type. Likely int or EnemyTypeID::EEnemyTypeID
 */
/*
EnemyTypeID::EEnemyTypeID TekiMgr::getID(int)
{
    // UNUSED FUNCTION
}
*/

} // namespace VsGame
} // namespace Game
