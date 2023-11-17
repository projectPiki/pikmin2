#include "Game/MapMgr.h"
#include "Sys/TriangleTable.h"
#include "Sys/Cylinder.h"
#include "Game/TDispTriangle.h"
#include "nans.h"

namespace Game {

u8 MapMgr::mTraceMoveOptLevel = 1;

/*
 * --INFO--
 * Address:	8020508C
 * Size:	000114
 * TODO: 57%
 */
void ShapeMapMgr::traceMove(Game::MoveInfo& info, f32 stepLength)
{
	_14++;
	f32 len    = stepLength;
	int steps  = 1;
	f32 radius = info.mMoveSphere->mRadius;
	f32 length = info.mVelocity->length();

	do {
		if (len * length > radius) {
			steps *= 2;
			len *= 0.5f;
			continue;
		}

		break;
	} while (steps <= 8);

	for (int i = 0; i < steps; i++) {
		MapMgr::traceMove(mMapCollision, info, len);
	}

	_18 += steps;
}

/*
 * --INFO--
 * Address:	802051A0
 * Size:	000020
 */
void MapMgr::traceMove(MapCollision& coll, Game::MoveInfo& info, f32 p1) { traceMove_test1203_cylinder(coll, info, p1); }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00030C
//  */
// void MapMgr::traceMove_test1030_1(MapCollision&, Game::MoveInfo&, f32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	802051C0
 * Size:	0003BC
 */
Sys::TriIndexList* MapMgr::traceMove_test1203_cylinder(MapCollision& coll, Game::MoveInfo& info, f32 p1)
{
	Sys::Sphere* sphere         = info.mMoveSphere;            // r26
	Vector3f* vel               = info.mVelocity;              // r25
	Sys::VertexTable* vertTable = coll.mDivider->mVertexTable; // r24
	if (MapMgr::traceMoveDebug) {
		getMinY(sphere->mPosition);
	}

	Vector3f spherePos = sphere->mPosition;
	sphere->mPosition += (*vel) * p1;
	Sys::TriIndexList* triList   = coll.mDivider->findTriLists(*sphere); // r23
	Sys::TriangleTable* triTable = coll.mDivider->mTriangleTable;        // r19

	Vector3f v1;
	Vector3f v2;

	for (triList; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
		_1C += triList->mCount;

		for (int i = 0; i < triList->mCount; i++) {
			int idx            = triList->mObjects[i];     // r21
			Sys::Triangle* tri = &triTable->mObjects[idx]; // r29
			if (mTraceMoveOptLevel >= 1) {
				if (!tri->fastIntersect(*sphere)) {
					_20++;
					continue;
				}
			}

			if (traceMoveDebug) {
				Sys::Triangle::debug = true;
			}

			Sys::Triangle::SphereSweep sweep;
			sweep._00 = spherePos;
			sweep._1C = 0;
			if (info._19) {
				sweep._1C = 1;
			}

			bool intersectCheck;
			if (info._1A != 0) {
				Sys::Cylinder cylinder(sphere->mPosition, info.mDirection, info.mDistance, sphere->mRadius);
				f32 overlap;
				intersectCheck = cylinder.intersect(*tri, overlap);
			} else {
				intersectCheck = tri->intersect(*vertTable, sweep);
			}

			if (intersectCheck) {
				if (info.mTriangleArray) {
					info.mTriangleArray->store(*tri, *vertTable, idx);
				}
				if (info._10) {
					info._10->invoke(v1, v2);
				}
				if (v1.y >= info._30) {
					info.mBounceTriangle = tri;
					info.mPosition       = v1;
				} else if (FABS(v1.y) <= info._2C) {
					info.mWallTriangle    = tri;
					info.mReflectPosition = v1;
				}
			}
			Sys::Triangle::debug = false;
		}
	}

	return triList;
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stmw     r19, 0x6c(r1)
	mr       r19, r4
	lbz      r0, traceMoveDebug__Q24Game6MapMgr@sda21(r13)
	lwz      r4, 0x18(r4)
	mr       r31, r5
	fmr      f28, f1
	cmplwi   r0, 0
	lwz      r26, 0(r5)
	mr       r30, r3
	lwz      r25, 4(r5)
	lwz      r24, 0x18(r4)
	beq      lbl_80205230
	lwz      r12, 4(r3)
	mr       r4, r26
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_80205230:
	lfs      f0, 0(r25)
	mr       r4, r26
	lfs      f1, 4(r25)
	fmuls    f0, f0, f28
	lfs      f29, 0(r26)
	lfs      f2, 8(r25)
	fmuls    f1, f1, f28
	lfs      f30, 4(r26)
	fadds    f0, f29, f0
	lfs      f31, 8(r26)
	fmuls    f2, f2, f28
	fadds    f1, f30, f1
	stfs     f0, 0(r26)
	fadds    f0, f31, f2
	stfs     f1, 4(r26)
	stfs     f0, 8(r26)
	lwz      r3, 0x18(r19)
	lwz      r12, 0(r3)
	lwz      r19, 0x1c(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r27, r1, 0x4c
	addi     r20, r1, 0x5c
	mr       r23, r3
	b        lbl_8020553C

lbl_80205298:
	lwz      r3, 0x1c(r30)
	li       r22, 0
	lwz      r0, 0x1c(r23)
	li       r28, 0
	add      r0, r3, r0
	stw      r0, 0x1c(r30)
	b        lbl_8020552C

lbl_802052B4:
	lwz      r3, 0x24(r23)
	lbz      r0, mTraceMoveOptLevel__Q24Game6MapMgr@sda21(r13)
	lwzx     r21, r3, r28
	cmplwi   r0, 1
	lwz      r3, 0x24(r19)
	mulli    r0, r21, 0x60
	add      r29, r3, r0
	blt      lbl_802052F8
	mr       r3, r29
	mr       r4, r26
	bl       fastIntersect__Q23Sys8TriangleFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	bne      lbl_802052F8
	lwz      r3, 0x20(r30)
	addi     r0, r3, 1
	stw      r0, 0x20(r30)
	b        lbl_80205524

lbl_802052F8:
	lbz      r0, traceMoveDebug__Q24Game6MapMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8020530C
	li       r0, 1
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)

lbl_8020530C:
	li       r0, 0
	stfs     f29, 0x2c(r1)
	stb      r0, 0x48(r1)
	stfs     f30, 0x30(r1)
	stfs     f31, 0x34(r1)
	lfs      f0, 0(r26)
	stfs     f0, 0x38(r1)
	lfs      f0, 4(r26)
	stfs     f0, 0x3c(r1)
	lfs      f0, 8(r26)
	stfs     f0, 0x40(r1)
	lfs      f0, 0xc(r26)
	stfs     f0, 0x44(r1)
	lbz      r0, 0x19(r31)
	cmplwi   r0, 0
	beq      lbl_80205354
	li       r0, 1
	stb      r0, 0x48(r1)

lbl_80205354:
	lbz      r0, 0x1a(r31)
	cmplwi   r0, 0
	beq      lbl_802053C4
	lfs      f1, 0x28(r31)
	mr       r4, r26
	lfs      f2, 0xc(r26)
	addi     r3, r1, 0xc
	addi     r5, r31, 0x1c
	bl       "__ct__Q23Sys8CylinderFRC10Vector3<f>RC10Vector3<f>f"
	mr       r4, r29
	addi     r3, r1, 0xc
	addi     r5, r1, 8
	bl       intersect__Q23Sys8CylinderFRCQ23Sys8TriangleRf
	lfs      f1, 0xc(r29)
	lfs      f0, 8(r1)
	stfs     f1, 0(r27)
	lfs      f1, 0x10(r29)
	stfs     f1, 0x50(r1)
	lfs      f1, 0x14(r29)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	lfs      f0, 0(r26)
	stfs     f0, 0(r20)
	lfs      f0, 4(r26)
	stfs     f0, 0x60(r1)
	lfs      f0, 8(r26)
	stfs     f0, 0x64(r1)
	b        lbl_802053D4

lbl_802053C4:
	mr       r3, r29
	mr       r4, r24
	addi     r5, r1, 0x2c
	bl
intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ33Sys8Triangle11SphereSweep

lbl_802053D4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020551C
	lwz      r3, 0x94(r31)
	cmplwi   r3, 0
	beq      lbl_802053F8
	mr       r4, r29
	mr       r5, r24
	mr       r6, r21
	bl store__Q24Game18TDispTriangleArrayFRQ23Sys8TriangleRQ23Sys11VertexTablei

lbl_802053F8:
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_8020541C
	lwz      r12, 0(r3)
	mr       r4, r20
	mr       r5, r27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8020541C:
	lfs      f1, 0x50(r1)
	lfs      f0, 0x30(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80205450
	stw      r29, 0x44(r31)
	lfs      f0, 0(r27)
	stfs     f0, 0x50(r31)
	lfs      f0, 0x50(r1)
	stfs     f0, 0x54(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x58(r31)
	b        lbl_80205484

lbl_80205450:
	fabs     f1, f1
	lfs      f0, 0x2c(r31)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80205484
	stw      r29, 0x48(r31)
	lfs      f0, 0(r27)
	stfs     f0, 0x5c(r31)
	lfs      f0, 0x50(r1)
	stfs     f0, 0x60(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x64(r31)

lbl_80205484:
	lfs      f4, 0x50(r1)
	lfs      f7, 4(r25)
	lfs      f5, 0(r27)
	fmuls    f0, f4, f7
	lfs      f8, 0(r25)
	lfs      f3, 0x54(r1)
	lfs      f6, 8(r25)
	fmadds   f2, f5, f8, f0
	lfs      f1, lbl_80519D68@sda21(r2)
	lfs      f0, 8(r31)
	fmadds   f2, f3, f6, f2
	fadds    f0, f1, f0
	fmuls    f2, f0, f2
	fmuls    f1, f5, f2
	fmuls    f0, f4, f2
	fmuls    f3, f3, f2
	fsubs    f2, f8, f1
	fsubs    f1, f7, f0
	fsubs    f0, f6, f3
	stfs     f2, 0(r25)
	stfs     f1, 4(r25)
	stfs     f0, 8(r25)
	lfs      f5, 0x58(r1)
	lfs      f0, 0(r27)
	lfs      f2, 0x50(r1)
	lfs      f4, 0x54(r1)
	fmuls    f0, f0, f5
	lfs      f1, 0(r26)
	fmuls    f2, f2, f5
	lfs      f3, 4(r26)
	fmuls    f4, f4, f5
	lfs      f5, 8(r26)
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0(r26)
	stfs     f1, 4(r26)
	stfs     f2, 8(r26)

lbl_8020551C:
	li       r0, 0
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)

lbl_80205524:
	addi     r28, r28, 4
	addi     r22, r22, 1

lbl_8020552C:
	lwz      r0, 0x1c(r23)
	cmpw     r22, r0
	blt      lbl_802052B4
	lwz      r23, 4(r23)

lbl_8020553C:
	cmplwi   r23, 0
	bne      lbl_80205298
	mr       r3, r23
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lmw      r19, 0x6c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000464
//  */
// void MapMgr::traceMove_test(MapCollision&, Game::MoveInfo&, f32)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000464
//  */
// void MapMgr::traceMove_original(MapCollision&, Game::MoveInfo&, f32)
// {
// 	// UNUSED FUNCTION
// }

} // namespace Game
