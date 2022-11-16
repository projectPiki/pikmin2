#include "types.h"
#include "Vector3.h"
#include "Game/Cave/RandMapMgr.h"
#include "trig.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Cave {

inline ObjectLayoutNode::ObjectLayoutNode();

/*
 * --INFO--
 * Address:	802440F4
 * Size:	000074
 */
EnemyNode::EnemyNode()
{
	// Constructor for EnemyNode
	//     - default = 0 for all, except birthDoorIndex = -1

	m_enemyUnit      = 0;
	m_baseGen        = 0;
	m_birthDoorIndex = -1;
	m_birthCount     = 0;
	m_direction      = 0.0f;
	m_birthPos.z     = 0.0f;
	m_birthPos.y     = 0.0f;
	m_birthPos.x     = 0.0f;
}

// /*
//  * --INFO--
//  * Address:	80244168
//  * Size:	000060
//  */
// WEAK - Game/Cave/ObjectLayout.h
// ObjectLayoutNode::~ObjectLayoutNode() { }

/*
 * --INFO--
 * Address:	802441C8
 * Size:	000094
 */
EnemyNode::EnemyNode(EnemyUnit* inputEnemyUnit, BaseGen* inputBaseGen, int birthCount)
{
	// Constructor for EnemyNode with inputs
	//     - sets m_enemyUnit, m_baseGen and m_birthCount based on inputs, everything else to 0
	//     - (except m_birthDoorIndex to -1)
	m_enemyUnit      = inputEnemyUnit;
	m_baseGen        = inputBaseGen;
	m_birthDoorIndex = -1;
	m_birthCount     = birthCount;
	m_direction      = 0.0f;
	m_birthPos.z     = 0.0f;
	m_birthPos.y     = 0.0f;
	m_birthPos.x     = 0.0f;
}

/*
 * --INFO--
 * Address:	8024425C
 * Size:	0001A8
 */
void EnemyNode::makeGlobalData(MapNode* mapNode)
{
	// get global position and direction from mapNode
	m_birthPos  = mapNode->getBaseGenGlobalPosition(m_baseGen);
	m_direction = mapNode->getBaseGenGlobalDirection(m_baseGen);

	// if teki type is 0 (easy), give it a random distance from spawn within radius + random direction
	if ((m_baseGen) && (m_baseGen->m_spawnType == 0)) {

		// get max radius of spawn
		float radius = m_baseGen->m_radius;
		// get random radius between 0 and max radius
		radius = randWeightFloat(radius);

		// set random direction from 0 to 2pi (0 to 360 degrees)
		m_direction = randWeightFloat(TAU);

		// move position x and y (z) according to random radius and random direction
		m_birthPos.x += radius * pikmin2_sinf(m_direction); // inlined in header
		m_birthPos.z += radius * pikmin2_cosf(m_direction); // inlined in header
	}
}

/*
 * --INFO--
 * Address:	80244404
 * Size:	000020
 */
void EnemyNode::setGlobalData(Vector3f& pos, float direction)
{
	// set position and direction based on inputs
	m_birthPos  = pos;
	m_direction = direction;
}

/*
 * --INFO--
 * Address:	80244424
 * Size:	000008
 */
void EnemyNode::setBirthDoorIndex(int idx) { m_birthDoorIndex = idx; }

/*
 * --INFO--
 * Address:	8024442C
 * Size:	000020
 */
int EnemyNode::getObjectId()
{
	// get enemy ID from m_tekiInfo; if no teki info, set to -1
	TekiInfo* tekiInfo = m_enemyUnit->m_tekiInfo;
	if (tekiInfo) {
		return m_enemyUnit->m_tekiInfo->m_enemyID;
	}
	return -1;
}

/*
 * --INFO--
 * Address:	8024444C
 * Size:	000020
 */
u32 EnemyNode::getExtraCode()
{
	// return code of item dweevil is carrying, if any
	TekiInfo* tekiInfo = m_enemyUnit->m_tekiInfo;
	if (tekiInfo) {
		return tekiInfo->m_otakaraItemCode.m_value;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	8024446C
 * Size:	000020
 */
u32 EnemyNode::getObjectType()
{
	// return drop type for enemy (i.e. condition for falling, if falling)
	TekiInfo* tekiInfo = m_enemyUnit->m_tekiInfo;
	if (tekiInfo) {
		return tekiInfo->m_dropMode;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	8024448C
 * Size:	000008
 */
int EnemyNode::getBirthCount() { return m_birthCount; }

/*
 * --INFO--
 * Address:	80244494
 * Size:	000014
 */
void EnemyNode::getBirthPosition(float& x, float& y)
{
	// get x and y (z) positions
	x = m_birthPos.x;
	y = m_birthPos.z;
}

/*
 * --INFO--
 * Address:	802444A8
 * Size:	000008
 */
float EnemyNode::getDirection() { return m_direction; }

/*
 * --INFO--
 * Address:	802444B0
 * Size:	000008
 */
int EnemyNode::getBirthDoorIndex() { return m_birthDoorIndex; }

/*
 * --INFO--
 * Address:	802444B8
 * Size:	000070
 */
// WEAK - in Game/Cave/Node.h
// EnemyNode::~EnemyNode() { }

} // namespace Cave
} // namespace Game
