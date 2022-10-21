#include "Game/Entities/Hana.h"

namespace Game {
namespace Hana {

/*
 * --INFO--
 * Address:	802F2DEC
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ハナドックリマネージャ"; // hanadokkuri manager
}

/*
 * --INFO--
 * Address:	802F2E3C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

/*
 * --INFO--
 * Address:	802F2E84
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802F2FD4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802F2FE4
 * Size:	000068
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
		shape          = m_modelData->m_shapeTable.m_items[j];
		shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	li       r5, 0
	b        lbl_802F3024

lbl_802F3004:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_802F3024:
	lwz      r4, 0x1c(r31)
	clrlwi   r0, r5, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_802F3004
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Hana
} // namespace Game
