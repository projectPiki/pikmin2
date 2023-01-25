#include "Game/Entities/Demon.h"
#include "Game/Navi.h"

namespace Game {
namespace Demon {
/*
 * --INFO--
 * Address:	8028E394
 * Size:	000090
 */
Obj::Obj() { }

/*
 * --INFO--
 * Address:	8028E424
 * Size:	0003F0
 */
FakePiki* Obj::getAttackableTarget()
{
	mAttackTimer += sys->mDeltaTime;
	if (mAttackTimer > 3.0f) {
		Vector3f pos = getPosition();

		Sarai::Parms* parms = static_cast<Sarai::Parms*>(mParms);
		f32 radius          = parms->mGeneral.mTerritoryRadius.mValue;
		if (sqrDistanceXZ(pos, mHomePosition) < radius * radius) {
			f32 max = parms->mGeneral.mSightRadius.mValue * parms->mGeneral.mSightRadius.mValue;
			f32 fov = parms->mGeneral.mFov.mValue * DEG2RAD * PI;

			Iterator<Navi> iter(naviMgr);
			Navi* navi;
			CI_LOOP(iter)
			{
				navi = (*iter);
				if (navi->isAlive() && !navi->isStickToMouth()) {

					Vector3f Navipos         = navi->getPosition();
					volatile f32 x           = Navipos.x;
					volatile f32 z           = Navipos.z;
					volatile Vector3f Objpos = getPosition();
					f32 ang                  = JMath::atanTable_.atan2_(Objpos.x - x, Objpos.z - z);
					ang                      = roundAng(ang);
					ang                      = angDist(ang, getFaceDir());
					if (FABS(ang) <= fov) {
						Vector3f Navipos2 = navi->getPosition();
						if (sqrDistanceXZ(pos, Navipos2) < max) {
							return navi;
						}
					}
				}
			}
		}
	}
	return nullptr;
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	lwz      r4, sys@sda21(r13)
	mr       r31, r3
	lfs      f2, 0x2d8(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051B930@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2d8(r3)
	lfs      f1, 0x2d8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8028E7D0
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x4c(r1)
	lfs      f0, 0x1a0(r31)
	lwz      r4, 0xc0(r31)
	fsubs    f2, f31, f0
	lfs      f30, 0x44(r1)
	lfs      f1, 0x198(r31)
	lfs      f0, 0x35c(r4)
	fsubs    f3, f30, f1
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8028E7D0
	lfs      f2, lbl_8051B938@sda21(r2)
	lis      r3, "__vt__22Iterator<Q24Game4Navi>"@ha
	lfs      f1, 0x424(r4)
	li       r0, 0
	lfs      f0, 0x3d4(r4)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Navi>"@l
	fmuls    f1, f2, f1
	lfs      f2, lbl_8051B934@sda21(r2)
	lwz      r3, naviMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	fmuls    f28, f0, f0
	stw      r4, 0x50(r1)
	fmuls    f29, f2, f1
	stw      r0, 0x5c(r1)
	stw      r0, 0x54(r1)
	stw      r3, 0x58(r1)
	bne      lbl_8028E530
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_8028E7B0

lbl_8028E530:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_8028E59C

lbl_8028E548:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8028E7B0
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_8028E59C:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028E548
	b        lbl_8028E7B0

lbl_8028E5BC:
	lwz      r3, 0x58(r1)
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
	beq      lbl_8028E6F4
	mr       r3, r30
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8028E6F4
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f27, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f29
	cror     2, 0, 2
	bne      lbl_8028E6F4
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x40(r1)
	lfs      f1, 0x38(r1)
	fsubs    f0, f31, f0
	fsubs    f1, f30, f1
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_8028E6F4
	mr       r3, r30
	b        lbl_8028E7D4

lbl_8028E6F4:
	lwz      r0, 0x5c(r1)
	cmplwi   r0, 0
	bne      lbl_8028E720
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_8028E7B0

lbl_8028E720:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_8028E794

lbl_8028E740:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8028E7B0
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_8028E794:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028E740

lbl_8028E7B0:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r1)
	cmplw    r4, r3
	bne      lbl_8028E5BC

lbl_8028E7D0:
	li       r3, 0

lbl_8028E7D4:
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xc4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028E814
 * Size:	00033C
 */
int Obj::catchTarget()
{
	int id = 0;
	Iterator<Game::Navi> iter(Game::naviMgr);
	Game::Navi* navi;
	CI_LOOP(iter)
	{
		navi = (*iter);
		if (navi->isAlive() && !navi->isStickToMouth()) {
			for (int i = 0; i < mMouthSlots.mMax; i++) {
				MouthCollPart* slot = mMouthSlots.getSlot(i);
				if (!slot->mStuckCreature) {
					Vector3f slotpos;
					slot->getPosition(slotpos);
					Vector3f naviPos = navi->getPosition();

					f32 dist = _distanceBetween2(slotpos, naviPos);
					if (dist < slot->mRadius) {
						InteractSarai act(this, 1.0f, slot, 0);
						navi->stimulate(act);
						id++;
						break;
					}
				}
			}
		}
	}
	return id;
}

} // namespace Demon
} // namespace Game
