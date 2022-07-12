#include "types.h"
#include "Vector3.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Cave/math.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave9EnemyNode
    __vt__Q34Game4Cave9EnemyNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave9EnemyNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte getObjectId__Q34Game4Cave9EnemyNodeFv
        .4byte getObjectType__Q34Game4Cave9EnemyNodeFv
        .4byte getBirthCount__Q34Game4Cave9EnemyNodeFv
        .4byte getDirection__Q34Game4Cave9EnemyNodeFv
        .4byte getBirthDoorIndex__Q34Game4Cave9EnemyNodeFv
        .4byte getBirthPosition__Q34Game4Cave9EnemyNodeFRfRf
        .4byte getExtraCode__Q34Game4Cave9EnemyNodeFv
        .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv
    .global __vt__Q24Game16ObjectLayoutNode
    __vt__Q24Game16ObjectLayoutNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game16ObjectLayoutNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getDirection__Q24Game16ObjectLayoutNodeFv
        .4byte getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv
        .4byte getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf
        .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
        .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A708
    lbl_8051A708:
        .4byte 0x00000000
    .global lbl_8051A70C
    lbl_8051A70C:
        .4byte 0x47000000
    .global lbl_8051A710
    lbl_8051A710:
        .4byte 0x40C90FDB
    .global lbl_8051A714
    lbl_8051A714:
        .4byte 0xC3A2F983
    .global lbl_8051A718
    lbl_8051A718:
        .4byte 0x43A2F983
        .4byte 0x00000000
    .global lbl_8051A720
    lbl_8051A720:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

namespace Cave {
/*
 * --INFO--
 * Address:	802440F4
 * Size:	000074
 */
EnemyNode::EnemyNode() 
{
    // Constructor for EnemyNode
    //     - default = 0 for all, except birthDoorIndex = -1
    
    m_enemyUnit = 0;
    m_baseGen = 0;
    m_birthDoorIndex = -1;
    m_birthCount = 0;
    m_direction = 0.0f;
    m_birthPos.z = 0.0f;
    m_birthPos.y = 0.0f;
    m_birthPos.x = 0.0f;
}

} // namespace Cave
/*
 * --INFO--
 * Address:	80244168
 * Size:	000060
 */
// ObjectLayoutNode::~ObjectLayoutNode(void) { }

namespace Cave {

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
    m_enemyUnit = inputEnemyUnit;
    m_baseGen = inputBaseGen;
    m_birthDoorIndex = -1;
    m_birthCount = birthCount;
    m_direction = 0.0f;
    m_birthPos.z = 0.0f;
    m_birthPos.y = 0.0f;
    m_birthPos.x = 0.0f;
}

/*
 * --INFO--
 * Address:	8024425C
 * Size:	0001A8
 */
void EnemyNode::makeGlobalData(MapNode* mapNode) 
{
    // get global position and direction from mapNode
    m_birthPos = mapNode->getBaseGenGlobalPosition(m_baseGen);
    m_direction = mapNode->getBaseGenGlobalDirection(m_baseGen);

    // if teki type is 0 (easy), give it a random distance from spawn within radius + random direction
    if ((m_baseGen) && (m_baseGen->m_spawnType == 0)) {

        // get max radius of spawn
        float radius = m_baseGen->m_radius;
        // get random radius between 0 and max radius
        radius = radius * (float) rand() / 32768.0f;

        // set random direction from 0 to 2pi (0 to 360 degrees)
        m_direction =  TAU * (float) rand() / 32768.0f;

        // move position x and y (z) according to random radius and random direction
        m_birthPos.x += radius * pikmin2_sinf(m_direction);
        m_birthPos.z += radius * pikmin2_cosf(m_direction);

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
    m_birthPos = pos; 
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
        return m_enemyUnit->m_tekiInfo->m_enemyID.m_enemyID;
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
int EnemyNode::getBirthCount(void) { return m_birthCount; }

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
int EnemyNode::getBirthDoorIndex(void) { return m_birthDoorIndex; }

/*
 * --INFO--
 * Address:	802444B8
 * Size:	000070
 */
// EnemyNode::~EnemyNode(void) { }
} // namespace Cave
} // namespace Game
