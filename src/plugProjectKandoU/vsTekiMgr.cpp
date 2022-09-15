#include "Game/enemyInfo.h"
#include "Game/generalEnemyMgr.h"
#include "Game/VsGame/VsGame.h"

namespace Game {
namespace VsGame {

/*
 * --INFO--
 * Address:	802352F0
 * Size:	000044
 */
TekiMgr::TekiMgr() { m_nodeCount = 0; }

/*
 * --INFO--
 * Address:	80235394
 * Size:	0000A0
 */
void TekiMgr::entry(EnemyTypeID::EEnemyTypeID id, int a2)
{
	TekiNode* newNode = new TekiNode();
	newNode->m_id     = id;
	newNode->_1C      = a2;
	newNode->m_nodeID = m_nodeCount++;
	m_node.add(newNode);

	generalEnemyMgr->addEnemyNum(id, a2, nullptr);
}

EnemyBase* TekiMgr::birth(int idx, Vector3f& position, bool check)
{
    if (TekiNode* node = static_cast<TekiNode*>(m_node.getChildAt(idx))) {
        EnemyBirthArg birthArg;
        birthArg.m_faceDir = TAU * randFloat();
        birthArg.m_position = position;
        if (check) {
            birthArg._2C = 50.0f;
        }
        EnemyBase* teki = generalEnemyMgr->birth(node->m_id, birthArg);
        if (teki != nullptr) {
            teki->init(nullptr);
        }
        return teki;
    }
    return nullptr;
}
} // namespace VsGame
} // namespace Game
