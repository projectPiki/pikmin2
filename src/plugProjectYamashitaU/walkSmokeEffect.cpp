#include "types.h"
#include "Game/WalkSmokeEffect.h"
#include "JSystem/JUT/JUTException.h"
#include "Game/EnemyBase.h"
#include "Game/MapMgr.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "efx/TEnemyWalkSmoke.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047BF30
    lbl_8047BF30:
        .4byte 0x77616C6B
        .4byte 0x536D6F6B
        .4byte 0x65000000
        .4byte 0x77616C6B
        .4byte 0x536D6F6B
        .4byte 0x65456666
        .4byte 0x6563742E
        .4byte 0x63707000
        .4byte 0x616C6C6F
        .4byte 0x63206572
        .4byte 0x726F720A
        .4byte 0x00000000
        .4byte 0x7365636F
        .4byte 0x6E642061
        .4byte 0x6C6C6F63
        .4byte 0x00000000
        .4byte 0x41726745
        .4byte 0x6E656D79
        .4byte 0x54797065
        .4byte 0x00000000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518048
    lbl_80518048:
        .4byte 0x00000000
        .4byte 0x00000000
*/

const char filename[] = "walkSmoke";

namespace Game {
namespace WalkSmokeEffect {

/*
 * --INFO--
 * Address:	8012A320
 * Size:	000034
 */
Obj::Obj()
{
	_00        = false;
	m_matrix   = nullptr;
	_08        = 0.0f;
	m_position = Vector3f::zero;
}

/*
 * --INFO--
 * Address:	8012A354
 * Size:	000010
 */
Mgr::Mgr()
{
	m_objCount = 0;
	m_objects  = nullptr;
}

/*
 * --INFO--
 * Address:	8012A364
 * Size:	0000B4
 */
void Mgr::alloc(int count)
{
	if (m_objects == nullptr) {
		m_objCount = count;
		m_objects  = new Obj[m_objCount];

		if (m_objects == nullptr) {
			// failed to allocate an object array
			JUT_PANICLINE(168, "alloc error\n");
		}

	} else {
		// object array already allocated
		JUT_PANICLINE(173, "second alloc");
	}
}

/*
 * --INFO--
 * Address:	8012A418
 * Size:	0001C8
 */
// WIP: https://decomp.me/scratch/l0nLo
// needs ArgEnemyType ctor fixing
void Mgr::update(Game::EnemyBase* enemy)
{
	for (int i = 0; i < m_objCount; i++) {
		Vector3f vec; // spC
		Obj* currObj = &m_objects[i];

		currObj->m_matrix->getBasis(3, vec);
		vec.y -= currObj->_08;

		if (currObj->_00 == false) {
			if ((vec.y - currObj->m_position.y) < 0.0f) {
				if (vec.y < mapMgr->getMinY(vec)) {
					if (enemy->inWater() == false) {
						float scaleMod                    = enemy->m_scaleModifier;
						EnemyTypeID::EEnemyTypeID enemyID = enemy->getEnemyTypeID();

						efx::ArgEnemyType effectArg(vec, enemyID, scaleMod); // sp24
						efx::TEnemyWalkSmoke walkSmoke(vec);                 // sp8
						walkSmoke.create(&effectArg);
					}
					currObj->_00 = true;
				}
			}
		} else if (vec.y > mapMgr->getMinY(vec)) {
			currObj->_00 = false;
		}
		currObj->m_position = vec;
	}

	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stmw     r27, 0x4c(r1)
	mr       r27, r3
	mr       r28, r4
	li       r29, 0
	li       r30, 0
	b        lbl_8012A5B8

lbl_8012A444:
	lwz      r0, 4(r27)
	add      r31, r0, r30
	lwz      r3, 4(r31)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r1)
	lfs      f1, 0x1c(r3)
	stfs     f1, 0x10(r1)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x14(r1)
	lfs      f0, 8(r31)
	fsubs    f2, f1, f0
	stfs     f2, 0x10(r1)
	lbz      r0, 0(r31)
	cmplwi   r0, 0
	bne      lbl_8012A56C
	lfs      f1, 0x10(r31)
	lfs      f0, lbl_80518048@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8012A598
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0xc
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	fcmpo    cr0, f0, f1
	bge      lbl_8012A598
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8012A560
	mr       r3, r28
	lfs      f31, 0x1f8(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0xc(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r0, 0x10(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r8, 0x14(r1)
	addi     r7, r5, __vt__Q23efx3Arg@l
	stw      r6, 0x18(r1)
	addi     r5, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx12ArgEnemyType@ha
	lis      r4, __vt__Q23efx15TEnemyWalkSmoke@ha
	stw      r0, 0x1c(r1)
	addi     r6, r6, __vt__Q23efx12ArgEnemyType@l
	lfs      f2, 0x18(r1)
	addi     r0, r4, __vt__Q23efx15TEnemyWalkSmoke@l
	stw      r8, 0x20(r1)
	addi     r4, r1, 0x24
	lfs      f1, 0x1c(r1)
	stw      r7, 0x24(r1)
	lfs      f0, 0x20(r1)
	stw      r5, 8(r1)
	stw      r3, 0x34(r1)
	addi     r3, r1, 8
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stw      r6, 0x24(r1)
	stfs     f31, 0x38(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx15TEnemyWalkSmokeFPQ23efx3Arg

lbl_8012A560:
	li       r0, 1
	stb      r0, 0(r31)
	b        lbl_8012A598

lbl_8012A56C:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0xc
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	fcmpo    cr0, f0, f1
	ble      lbl_8012A598
	li       r0, 0
	stb      r0, 0(r31)

lbl_8012A598:
	lfs      f0, 0xc(r1)
	addi     r30, r30, 0x18
	addi     r29, r29, 1
	stfs     f0, 0xc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x10(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x14(r31)

lbl_8012A5B8:
	lwz      r0, 0(r27)
	cmpw     r29, r0
	blt      lbl_8012A444
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A5E0
 * Size:	000090
 */
void Mgr::setup(int objIdx, SysShape::Model* model, char* name, float p1)
{
	Matrixf* worldMat = model->getJoint(name)->getWorldMatrix();

	Obj* obj      = &m_objects[objIdx];
	obj->m_matrix = worldMat;
	obj->_08      = p1;

	Matrixf* mat      = obj->m_matrix;
	obj->m_position.x = (*mat)(0, 3);
	obj->m_position.y = (*mat)(1, 3);
	obj->m_position.z = (*mat)(2, 3);

	obj->_00 = true;
}
} // namespace WalkSmokeEffect
} // namespace Game
