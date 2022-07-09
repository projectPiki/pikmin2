#include "types.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Cave/Node.h"
#include "Game/Cave/Info.h"
#include "Dolphin/string.h"
#include "Dolphin/rand.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D4C0
    lbl_8051D4C0:
        .4byte 0x6974656D
        .4byte 0x00000000
    .global lbl_8051D4C8
    lbl_8051D4C8:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051D4D0
    lbl_8051D4D0:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80300E68
 * Size:	00002C
 */
Cave::RandCapEnemyUnit::RandCapEnemyUnit(Game::Cave::MapUnitGenerator& mapUnitGenerator)
{
	// Constructor for RandCapEnemyUnit struct
	m_mapUnitGenerator = &mapUnitGenerator;
	m_enemyNode[0]     = m_mapUnitGenerator->m_enemyNodeB;
	m_enemyNode[1]     = m_mapUnitGenerator->m_enemyNodeC;
	m_perSpawn[0]      = 0;
	m_perSpawn[1]      = 0;
}

/*
 * --INFO--
 * Address:	80300E94
 * Size:	000008
 */
void Cave::RandCapEnemyUnit::setManageClassPtr(Game::Cave::RandItemUnit& randItemUnit)
{
	// sets RandItemUnit pointer based on input
	m_randItemUnit = &randItemUnit;
}

/*
 * --INFO--
 * Address:	80300E9C
 * Size:	000108
 */
void Cave::RandCapEnemyUnit::setCapEnemySlot()
{
	// checks if tekis are already placed in caps
	// if not, sets slots for them
	MapNode* placedMapNode;
	Game::Cave::MapNode* childNode;
	Game::Cave::MapNode* childNode_2;

	placedMapNode = m_mapUnitGenerator->m_placedMapNodes;
	childNode     = (MapNode*)placedMapNode->m_child;

	// Ground teki check
	while (childNode) {
		if (childNode->m_unitInfo->getUnitKind() == 0) { // make sure we're in a cap
			char* unitName = childNode->getUnitName();
			// make sure no treasure/hole placed && make sure no ground cap teki already placed
			if ((strncmp(unitName, "item", 4) == 0) && (m_randItemUnit->isGroundCapEnemySetDone(childNode) == 0)) {
				// set the enemy slot (0 for ground teki)
				setCapCommonEnemySlot(childNode, 0);
			}
		}
		childNode = (MapNode*)childNode->m_next;
	}
	childNode_2 = (MapNode*)placedMapNode->m_child;

	// Falling teki check
	while (childNode_2) {
		if (childNode_2->m_unitInfo->getUnitKind() == 0) { // make sure we're in a cap
			char* unitName = childNode_2->getUnitName();
			// make sure no treasure/hole placed && make sure no falling cap teki already placed
			if ((strncmp(unitName, "item", 4) == 0) && (m_randItemUnit->isFallCapEnemySetDone(childNode_2) == 0)) {
				// set the enemy slot (1 for falling teki)
				setCapCommonEnemySlot(childNode_2, 1);
			}
		}
		childNode_2 = (MapNode*)childNode_2->m_next;
	}
}

/*
 * --INFO--
 * Address:	80300FA4
 * Size:	0001BC
 */
// NOT YET MATCHING
// REGSWAP BETWEEN R11 AND R12 STILL
void Cave::RandCapEnemyUnit::setCapCommonEnemySlot(Game::Cave::MapNode* inputMapNode, int groundOrFalling)
{
	//
	// groundOrFalling = 0 if ground, 1 if falling
	EnemyNode* node;

	int tekiWeight  = 0;
	int tekiCount_1 = 0;

	for (node = (EnemyNode*)m_enemyNode[groundOrFalling]->m_child; node; node = (EnemyNode*)node->m_next) {
		TekiInfo* tekiInfo = node->m_enemyUnit->m_tekiInfo;
		if (node->m_enemyUnit->m_tekiInfo) {
			// m_tekiInfo -> r11
			// m_perSpawn -> r12

			tekiCount_1 += tekiInfo->m_weight / 10; // max number to place
			tekiWeight += tekiInfo->m_weight % 10;  // weighting

			// check if we have any left to place of that type
			if (tekiCount_1 > m_perSpawn[groundOrFalling]) {
				int setCount = 1; // default to 1
				                  // if teki type is 0 and we have room for another, make it 2
				if ((tekiInfo->m_type == 0) && ((tekiCount_1 - m_perSpawn[groundOrFalling]) > 1)) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(inputMapNode, node->m_enemyUnit, groundOrFalling, setCount);
				return;
			}
		}
	}

	// calculate random weight based on total tekiWeights
	int randWeight = tekiWeight * randFloat();

	TekiInfo* tekiInfo;
	int tekiCount_2 = 0;

	for (EnemyNode* node = (EnemyNode*)m_enemyNode[groundOrFalling]->m_child; node; node = (EnemyNode*)node->m_next) {
		tekiInfo = node->m_enemyUnit->m_tekiInfo;
		if (tekiInfo) {
			tekiCount_2 += tekiInfo->m_weight % 10; // add up the weightings as we go

			// if we've gone past enough weights, time to set a teki
			if (tekiCount_2 > randWeight) {
				int setCount = 1; // default to 1
				                  // if teki type is 0, we can place more, so make it 2
				if (tekiInfo->m_type == 0) {
					setCount = 2;
				}
				// set the cap enemy
				setCapEnemy(inputMapNode, node->m_enemyUnit, groundOrFalling, setCount);
				return;
			}
		}
	}

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stmw     r25, 0x24(r1)
	mr       r29, r5
	slwi     r6, r29, 2
	mr       r27, r3
	add      r31, r27, r6
	lis      r5, 0x66666667@ha
	mr       r28, r4
	addi     r12, r6, 0x10
	addi     r10, r5, 0x66666667@l
	li       r30, 0
	lwz      r3, 8(r31)
	lwz      r25, 0x10(r3)
	b        lbl_80301074

lbl_80300FE8:
	lwz      r5, 0x18(r25)
	lwz      r11, 0(r5)
	cmplwi   r11, 0
	beq      lbl_80301070
	lwz      r26, 0x1c(r11)
	lwzx     r3, r27, r12
	mulhw    r4, r10, r26
	srawi    r8, r4, 2
	srawi    r4, r4, 2
	srwi     r7, r4, 0x1f
	srwi     r9, r8, 0x1f
	add      r4, r4, r7
	add      r7, r8, r9
	mulli    r4, r4, 0xa
	add      r0, r0, r7
	subf     r4, r4, r26
	cmpw     r0, r3
	add      r30, r30, r4
	ble      lbl_80301070
	lwz      r3, 0x20(r11)
	li       r7, 1
	cmpwi    r3, 0
	bne      lbl_8030105C
	add      r3, r27, r6
	lwz      r3, 0x10(r3)
	subf     r0, r3, r0
	cmpwi    r0, 1
	ble      lbl_8030105C
	li       r7, 2

lbl_8030105C:
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	bl
setCapEnemy__Q34Game4Cave16RandCapEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave9EnemyUnitii
	b        lbl_8030114C

lbl_80301070:
	lwz      r25, 4(r25)

lbl_80301074:
	cmplwi   r25, 0
	bne      lbl_80300FE8
	bl       rand
	lis      r6, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r30, 0x8000
	lwz      r5, 8(r31)
	lis      r3, 0x66666667@ha
	stw      r6, 8(r1)
	addi     r4, r3, 0x66666667@l
	lfd      f2, lbl_8051D4D0@sda21(r2)
	li       r9, 0
	lfd      f1, 8(r1)
	lfs      f0, lbl_8051D4C8@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x14(r1)
	lwz      r10, 0x10(r5)
	stw      r6, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r7, 0x1c(r1)
	b        lbl_80301144

lbl_803010E0:
	lwz      r5, 0x18(r10)
	lwz      r8, 0(r5)
	cmplwi   r8, 0
	beq      lbl_80301140
	lwz      r6, 0x1c(r8)
	mulhw    r0, r4, r6
	srawi    r0, r0, 2
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	mulli    r0, r0, 0xa
	subf     r0, r0, r6
	add      r9, r9, r0
	cmpw     r9, r7
	ble      lbl_80301140
	lwz      r0, 0x20(r8)
	li       r7, 1
	cmpwi    r0, 0
	bne      lbl_8030112C
	li       r7, 2

lbl_8030112C:
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	bl
setCapEnemy__Q34Game4Cave16RandCapEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave9EnemyUnitii
	b        lbl_8030114C

lbl_80301140:
	lwz      r10, 4(r10)

lbl_80301144:
	cmplwi   r10, 0
	bne      lbl_803010E0

lbl_8030114C:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80301160
 * Size:	000098
 */
void Cave::RandCapEnemyUnit::setCapEnemy(Game::Cave::MapNode* inputMapNode, Game::Cave::EnemyUnit* inputEnemyUnit, int groundOrFalling,
                                         int setCount)
{
	// set the cap enemy for a given map node and enemy unit
	// also keep track of if it's grounded or falling
	// setCount = how many to place
	for (int ctr = 0; ctr < setCount; ctr++) {
		// make a new EnemyNode for the enemy
		EnemyNode* newNode = new EnemyNode(inputEnemyUnit, nullptr, 1);

		// set some data up in the node
		newNode->makeGlobalData(inputMapNode);

		// add the EnemyNode to the input map enemy node list
		inputMapNode->m_enemyNode->add(newNode);

		// increment the amount of ground or falling cap tekis we've placed
		m_perSpawn[groundOrFalling] += 1;
	}
}
} // namespace Game
