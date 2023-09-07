#include "Game/Entities/MaroFrog.h"
#include "Game/Navi.h"
#include "efx/TFrog.h"

namespace Game {
namespace MaroFrog {

/*
 * --INFO--
 * Address:	802617E0
 * Size:	000098
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	80261878
 * Size:	00045C
 */
void Obj::attackNaviPosition()
{
	Iterator<Navi> iter(naviMgr);

	CI_LOOP(iter)
	{
		Navi* navi = (*iter);
		if (navi->isAlive()) {
			f32 minAttackRange = static_cast<EnemyParmsBase*>(mParms)->mGeneral.mMinAttackRange.mValue;
			f32 maxAttackRange = static_cast<EnemyParmsBase*>(mParms)->mGeneral.mMaxAttackRange.mValue;

			f32 angledist = getCreatureViewAngle(navi);

			if (checkDistAndAngle(navi, angledist, maxAttackRange, minAttackRange)) {
				mTargetPosition = Vector3f(navi->getPosition());
			}
		}
	}
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	li       r4, 0
	lwz      r0, naviMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r4, 0x98(r1)
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r4, 0
	stw      r5, 0x8c(r1)
	mr       r31, r3
	stw      r4, 0x90(r1)
	stw      r0, 0x94(r1)
	bne      lbl_80261908
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_80261C68

lbl_80261908:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_80261978

lbl_80261924:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80261C68
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)

lbl_80261978:
	lwz      r12, 0x8c(r1)
	addi     r3, r1, 0x8c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80261924
	b        lbl_80261C68

lbl_80261998:
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80261BAC
	mr       r4, r30
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x68
	lfs      f30, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	fmr      f28, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f29, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lfs      f29, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f31, f31
	fsubs    f2, f2, f29
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80261B74
	lfs      f0, lbl_8051AD44@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051AD40@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80261B74
	li       r29, 1

lbl_80261B74:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80261BAC
	mr       r4, r30
	addi     r3, r1, 0x80
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x84(r1)
	lfs      f2, 0x88(r1)
	lfs      f0, 0x80(r1)
	stfs     f0, 0x2c8(r31)
	stfs     f1, 0x2cc(r31)
	stfs     f2, 0x2d0(r31)

lbl_80261BAC:
	lwz      r0, 0x98(r1)
	cmplwi   r0, 0
	bne      lbl_80261BD8
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_80261C68

lbl_80261BD8:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_80261C4C

lbl_80261BF8:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80261C68
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)

lbl_80261C4C:
	lwz      r12, 0x8c(r1)
	addi     r3, r1, 0x8c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80261BF8

lbl_80261C68:
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x90(r1)
	cmplw    r4, r3
	bne      lbl_80261998
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r0, 0x114(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80261CD4
 * Size:	0000B0
 */
void Obj::createEffect() { mEfxPota = new efx::TFrogPota; }

} // namespace MaroFrog
} // namespace Game
