#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/Stickers.h"
#include "Game/MoviePlayer.h"
#include "stl/float.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace EnemyFunc {

/**
 * @note Address: 0x801126F4
 * @note Size: 0x424
 */
Navi* getNearestNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* naviDist, Condition<Navi>* condition)
{
	Navi* navi = nullptr;
	f32 minDist;
	searchAngle = TORADIANS(searchAngle);

	if (searchRadius < 0.0f) {
		searchRadius = FLT_MAX;
	} else {
		searchRadius = SQUARE(searchRadius);
	}

	if (naviDist) {
		if (*naviDist < searchRadius) {
			minDist = *naviDist;
		} else {
			minDist = searchRadius;
		}
	} else {
		minDist = searchRadius;
	}

	Iterator<Navi> iter(naviMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Navi* currNavi = *iter;
		if (currNavi->isAlive()) {
			f32 angleDist = creature->getAngDist(currNavi);
			if (FABS(angleDist) <= searchAngle) {
				// something here
				Vector3f sep = Vector3f(currNavi->getPosition().x, 0.0f, currNavi->getPosition().z)
				             - Vector3f(creature->getPosition().x, 0.0f, creature->getPosition().z);
				f32 newDist = SQUARE(sep.x) + SQUARE(sep.z);
				if (newDist < minDist) {
					navi    = currNavi;
					minDist = newDist;
				}
			}
		}
	}

	if (navi && naviDist) {
		*naviDist = minDist;
	}

	return navi;

	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  lfs       f3, -0x68E4(r2)
	  mr        r29, r3
	  lfs       f0, -0x68E0(r2)
	  mr        r30, r4
	  fmuls     f1, f3, f1
	  lfs       f3, -0x68E8(r2)
	  fcmpo     cr0, f2, f0
	  li        r31, 0
	  fmuls     f30, f3, f1
	  bge-      .loc_0x78
	  lis       r3, 0x8051
	  lfs       f1, 0x48D8(r3)
	  b         .loc_0x7C

	.loc_0x78:
	  fmuls     f1, f2, f2

	.loc_0x7C:
	  cmplwi    r30, 0
	  beq-      .loc_0xA0
	  lfs       f0, 0x0(r30)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x98
	  fmr       f31, f0
	  b         .loc_0xA4

	.loc_0x98:
	  fmr       f31, f1
	  b         .loc_0xA4

	.loc_0xA0:
	  fmr       f31, f1

	.loc_0xA4:
	  lwz       r3, -0x6D20(r13)
	  lis       r4, 0x804B
	  subi      r4, r4, 0x434C
	  li        r0, 0
	  cmplwi    r5, 0
	  stw       r4, 0x68(r1)
	  stw       r5, 0x74(r1)
	  stw       r0, 0x6C(r1)
	  stw       r3, 0x70(r1)
	  bne-      .loc_0xE4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3A4

	.loc_0xE4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x150

	.loc_0xFC:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A4
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x150:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xFC
	  b         .loc_0x3A4

	.loc_0x170:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E8
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0xDD804
	  bl        0x2FF2C0
	  lwz       r12, 0x0(r29)
	  fmr       f27, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x2FF2C8
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  bne-      .loc_0x2E8
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x40(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lfs       f28, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x58(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f29, f27
	  lfs       f1, 0x5C(r1)
	  fsubs     f1, f1, f28
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x2E8
	  mr        r31, r28
	  fmr       f31, f0

	.loc_0x2E8:
	  lwz       r0, 0x74(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x314
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3A4

	.loc_0x314:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x388

	.loc_0x334:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3A4
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x388:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x334

	.loc_0x3A4:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x6C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x170
	  cmplwi    r31, 0
	  beq-      .loc_0x3D8
	  cmplwi    r30, 0
	  beq-      .loc_0x3D8
	  stfs      f31, 0x0(r30)

	.loc_0x3D8:
	  mr        r3, r31
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/**
 * @note Address: 0x80112B64
 * @note Size: 0x484
 */
Piki* getNearestPikmin(Creature* creature, f32 searchAngle, f32 searchRadius, f32* pikiDist, Condition<Piki>* condition)
{
	sys->mTimers->_start("teki-srch", true);
	Piki* piki = nullptr;
	f32 minDist;
	searchAngle = TORADIANS(searchAngle);
	if (searchRadius < 0.0f) {
		searchRadius = FLT_MAX;
	} else {
		searchRadius = SQUARE(searchRadius);
	}

	if (pikiDist) {
		if (*pikiDist < searchRadius) {
			minDist = *pikiDist;
		} else {
			minDist = searchRadius;
		}
	} else {
		minDist = searchRadius;
	}

	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Piki* currPiki = *iter;
		if (currPiki->isSearchable()) {
			f32 angleDist = creature->getAngDist(currPiki);
			if (FABS(angleDist) <= searchAngle) {
				// something here
				Vector3f sep = Vector3f(currPiki->getPosition().x, 0.0f, currPiki->getPosition().z)
				             - Vector3f(creature->getPosition().x, 0.0f, creature->getPosition().z);
				f32 newDist = SQUARE(sep.x) + SQUARE(sep.z);
				if (newDist < minDist) {
					piki    = currPiki;
					minDist = newDist;
				}
			}
		}
	}

	if (piki && pikiDist) {
		*pikiDist = minDist;
	}

	sys->mTimers->_stop("teki-srch");

	return piki;
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stmw      r27, 0x7C(r1)
	  lwz       r7, -0x6514(r13)
	  lis       r6, 0x8048
	  fmr       f30, f1
	  mr        r29, r3
	  fmr       f27, f2
	  subi      r0, r6, 0x5178
	  mr        r30, r4
	  mr        r27, r5
	  lwz       r3, 0x28(r7)
	  mr        r4, r0
	  li        r5, 0x1
	  bl        0x317F30
	  lfs       f1, -0x68E4(r2)
	  li        r31, 0
	  lfs       f0, -0x68E0(r2)
	  fmuls     f1, f1, f30
	  lfs       f2, -0x68E8(r2)
	  fcmpo     cr0, f27, f0
	  fmuls     f30, f2, f1
	  bge-      .loc_0x94
	  lis       r3, 0x8051
	  lfs       f27, 0x48D8(r3)
	  b         .loc_0x98

	.loc_0x94:
	  fmuls     f27, f27, f27

	.loc_0x98:
	  cmplwi    r30, 0
	  beq-      .loc_0xBC
	  lfs       f0, 0x0(r30)
	  fcmpo     cr0, f0, f27
	  bge-      .loc_0xB4
	  fmr       f31, f0
	  b         .loc_0xC0

	.loc_0xB4:
	  fmr       f31, f27
	  b         .loc_0xC0

	.loc_0xBC:
	  fmr       f31, f27

	.loc_0xC0:
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  subi      r4, r4, 0x4364
	  li        r0, 0
	  cmplwi    r27, 0
	  stw       r4, 0x68(r1)
	  stw       r27, 0x74(r1)
	  stw       r0, 0x6C(r1)
	  stw       r3, 0x70(r1)
	  bne-      .loc_0x100
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3FC

	.loc_0x100:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x16C

	.loc_0x118:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3FC
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x16C:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x118
	  b         .loc_0x3FC

	.loc_0x18C:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  li        r28, 0
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0
	  mr        r3, r27
	  bl        0x8C844
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F0
	  li        r28, 0x1

	.loc_0x1F0:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x340
	  mr        r4, r27
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0xDDCCC
	  bl        0x2FEDF8
	  lwz       r12, 0x0(r29)
	  fmr       f27, f1
	  mr        r3, r29
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x2FEE00
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  bne-      .loc_0x340
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x40(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r27
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r27)
	  lfs       f28, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r27
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r27)
	  lfs       f29, 0x58(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f29, f27
	  lfs       f1, 0x5C(r1)
	  fsubs     f1, f1, f28
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x340
	  mr        r31, r27
	  fmr       f31, f0

	.loc_0x340:
	  lwz       r0, 0x74(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x36C
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3FC

	.loc_0x36C:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)
	  b         .loc_0x3E0

	.loc_0x38C:
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x74(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3FC
	  lwz       r3, 0x70(r1)
	  lwz       r4, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x6C(r1)

	.loc_0x3E0:
	  lwz       r12, 0x68(r1)
	  addi      r3, r1, 0x68
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x38C

	.loc_0x3FC:
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x6C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x18C
	  cmplwi    r31, 0
	  beq-      .loc_0x430
	  cmplwi    r30, 0
	  beq-      .loc_0x430
	  stfs      f31, 0x0(r30)

	.loc_0x430:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x5178
	  lwz       r3, 0x28(r5)
	  bl        0x317B58
	  mr        r3, r31
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  lmw       r27, 0x7C(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/**
 * @note Address: 0x80113050
 * @note Size: 0xC4
 */
Creature* getNearestPikminOrNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* targetDist, Condition<Navi>* naviCondition,
                                 Condition<Piki>* pikiCondition)
{
	f32 dist = FLT_MAX;
	if (!targetDist) {
		targetDist = &dist;
	}

	Creature* navi = getNearestNavi(creature, searchAngle, searchRadius, targetDist, naviCondition);
	Creature* piki = getNearestPikmin(creature, searchAngle, searchRadius, targetDist, pikiCondition);

	if (piki) {
		return piki;
	}

	return navi;
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void flickCreature(Creature* flicker, Creature* toFlick, f32 knockback, f32 damage, f32 angle)
{
	if (toFlick->mSticker == flicker && !toFlick->isStickToMouth()) {
		InteractFlick flick(flicker, knockback, damage, angle);
		toFlick->stimulate(flick);
	}
}

/**
 * @note Address: 0x8011311C
 * @note Size: 0x36C
 */
void flickStickPikmin(Creature* creature, f32 flickChance, f32 knockback, f32 damage, f32 angle, Condition<Piki>* condition)
{
	Stickers stickers(creature);

	Iterator<Creature> iter(&stickers);
	angle += PI;
	angle = roundAng(angle);
	CI_LOOP(iter)
	{
		Creature* stuck = *iter;
		if (stuck->isPiki()) {
			if (!condition || (condition && condition->satisfy(static_cast<Piki*>(stuck)))) {
				if (flickChance > randFloat()) {
					flickCreature(creature, *iter, knockback, damage, angle);
				}
			}
		}
	}
}

/**
 * @note Address: 0x801134D4
 * @note Size: 0x2BC
 */
void flickNearbyPikmin(Creature* creature, f32 searchRadius, f32 knockback, f32 damage, f32 angle, Condition<Piki>* condition)
{
	searchRadius *= searchRadius;

	ConditionPikminNearby nearbyCondition(creature, searchRadius);
	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	angle += PI;

	CI_LOOP(iter)
	{
		Piki* piki                   = *iter;
		ConditionPikminNearby* condi = &nearbyCondition;
		if (condi->satisfy(piki)) {
			InteractFlick flick(creature, knockback, damage, angle);
			piki->stimulate(flick);
		}
	}
}

/**
 * @note Address: 0x80113790
 * @note Size: 0x3A4
 */
void flickNearbyNavi(Creature* creature, f32 searchRadius, f32 knockback, f32 damage, f32 angle, Condition<Navi>* condition)
{
	searchRadius *= searchRadius;

	// ConditionPikminNearby nearbyCondition (creature, searchRadius);
	Iterator<Navi> iter(naviMgr, nullptr, condition);
	angle += PI;

	CI_LOOP(iter)
	{
		Navi* navi = *iter;
		// this is weird
		Vector3f sep = Vector3f(creature->getPosition().x, creature->getPosition().y, creature->getPosition().z)
		             - Vector3f(navi->getPosition().x, navi->getPosition().y, navi->getPosition().z);
		f32 newDist = SQUARE(sep.x) + SQUARE(sep.y) + SQUARE(sep.z);
		if (newDist < searchRadius) {
			InteractFlick flick(creature, knockback, damage, angle);
			navi->stimulate(flick);
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stfd      f25, 0xA0(r1)
	  psq_st    f25,0xA8(r1),0,0
	  stfd      f24, 0x90(r1)
	  psq_st    f24,0x98(r1),0,0
	  stfd      f23, 0x80(r1)
	  psq_st    f23,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  lfs       f0, -0x68E8(r2)
	  lis       r5, 0x804B
	  lwz       r0, -0x6D20(r13)
	  subi      r6, r5, 0x434C
	  li        r5, 0
	  fmr       f24, f2
	  fmr       f25, f3
	  cmplwi    r4, 0
	  fmuls     f23, f1, f1
	  stw       r6, 0x50(r1)
	  fadds     f26, f4, f0
	  stw       r4, 0x5C(r1)
	  mr        r30, r3
	  stw       r5, 0x54(r1)
	  stw       r0, 0x58(r1)
	  bne-      .loc_0xB8
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x324

	.loc_0xB8:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x128

	.loc_0xD4:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x324
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x128:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x324

	.loc_0x148:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  mr        r4, r31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lfs       f27, 0x10(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x18(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r30)
	  lfs       f29, 0x20(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r30)
	  lfs       f30, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r30)
	  lfs       f31, 0x3C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f31, f28
	  lfs       f2, 0x44(r1)
	  fsubs     f1, f30, f27
	  fsubs     f2, f2, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f2, f2, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f23
	  bge-      .loc_0x268
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  stw       r30, 0x64(r1)
	  addi      r0, r3, 0x4E04
	  mr        r3, r31
	  stw       r4, 0x60(r1)
	  addi      r4, r1, 0x60
	  stw       r0, 0x60(r1)
	  stfs      f24, 0x68(r1)
	  stfs      f25, 0x6C(r1)
	  stfs      f26, 0x70(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x268:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x294
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x324

	.loc_0x294:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x308

	.loc_0x2B4:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x324
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x308:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2B4

	.loc_0x324:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  psq_l     f25,0xA8(r1),0,0
	  lfd       f25, 0xA0(r1)
	  psq_l     f24,0x98(r1),0,0
	  lfd       f24, 0x90(r1)
	  psq_l     f23,0x88(r1),0,0
	  lfd       f23, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/**
 * @note Address: 0x80113B34
 * @note Size: 0x350
 */
int eatPikmin(EnemyBase* enemy, Condition<Piki>* condition)
{
	int eatCount           = 0;
	MouthSlots* mouthSlots = enemy->getMouthSlots();
	EatPikminDefaultCondition eatCondition(enemy);

	if (!condition) {
		condition = &eatCondition;
	}
	if (mouthSlots) {
		Iterator<Piki> iter(pikiMgr, nullptr, condition);
		CI_LOOP(iter)
		{
			Piki* piki = *iter;
			for (int i = 0; i < mouthSlots->getMax(); i++) {
				MouthCollPart* slot = mouthSlots->getSlot(i);
				if (!slot->mStuckCreature) {
					Vector3f slotPos;
					slot->getPosition(slotPos);
					Vector3f pikiPos = piki->getPosition();

					f32 dist = slotPos.distance(pikiPos);
					if (dist < slot->mRadius) {
						InteractSwallow eat(enemy, 1.0f, slot);
						if (piki->stimulate(eat)) {
							eatCount++;
						}
						break;
					}
				}
			}
		}
	}

	return eatCount;
}

/**
 * @note Address: 0x80113E84
 * @note Size: 0x3DC
 */
void swallowPikmin(Creature* creature, f32 poisonDamage, Condition<Piki>* condition)
{
	Stickers stickers(creature);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		if ((*iter)->isPiki()) {
			Piki* piki = static_cast<Piki*>(*iter);
			if ((!condition || (condition && condition->satisfy(piki))) && piki->isStickToMouth()) {
				InteractKill kill(creature, nullptr);
				if (piki->stimulate(kill) && piki->getKind() == White) {
					static_cast<EnemyBase*>(creature)->eatWhitePikminCallBack(piki, poisonDamage);

					if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_Eat_White_Pikmin) && moviePlayer) {
						MoviePlayArg movie("g2B_white_poison", nullptr, nullptr, 0);
						movie.setTarget(creature);
						moviePlayer->mTargetObject = creature;
						moviePlayer->play(movie);
						playData->setDemoFlag(DEMO_Eat_White_Pikmin);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80114260
 * @note Size: 0x3F8
 */
int attackNavi(Creature* creature, f32 searchRadius, f32 searchAngle, f32 damage, CollPart* part, Condition<Navi>* condition)
{
	searchAngle     = TORADIANS(searchAngle);
	int attackCount = 0;

	Iterator<Navi> iter(naviMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Navi* navi    = *iter;
		f32 angleDist = creature->getAngDist(navi);

		if (FABS(angleDist) < searchAngle) {
			Vector3f naviPos     = navi->getPosition();
			Vector3f creaturePos = creature->getPosition();
			f32 dist             = creaturePos.distance(naviPos);
			if (dist < searchRadius) {
				InteractAttack attack(creature, damage, part);
				navi->stimulate(attack);
				attackCount++;
			}
		}
	}

	return attackCount;
}

/**
 * @note Address: 0x80114658
 * @note Size: 0xDC
 */
bool isStartFlick(EnemyBase* enemy, bool doResetFlickTimer)
{
	EnemyParmsBase* parms;
	bool result  = false;
	f32 flickVal = 0.0f;
	if (enemy->mFlickTimer >= 0.0f) {
		flickVal = enemy->mFlickTimer + 0.5f;
	} else {
		flickVal = enemy->mFlickTimer - 0.5f;
	}

	parms       = static_cast<EnemyParmsBase*>(enemy->mParms);
	u8 flickInt = (int)flickVal;

	if (enemy->mStuckPikminCount < parms->mGeneral.mShakeOffSticking1.mValue) {
		if (flickInt > parms->mGeneral.mShakeOffBlowA.mValue) {
			result = true;
		}
	} else if (enemy->mStuckPikminCount < parms->mGeneral.mShakeOffSticking2.mValue) {
		if (flickInt > parms->mGeneral.mShakeOffBlowB.mValue) {
			result = true;
		}
	} else if (enemy->mStuckPikminCount < parms->mGeneral.mShakeOffSticking3.mValue) {
		if (flickInt > parms->mGeneral.mShakeOffBlowC.mValue) {
			result = true;
		}
	} else if (flickInt > parms->mGeneral.mShakeOffBlowD.mValue) {
		result = true;
	}

	if (result && doResetFlickTimer) {
		enemy->mFlickTimer = 0.0f;
	}

	return result;
}

/**
 * @note Address: 0x80114734
 * @note Size: 0x38C
 */
bool isTherePikmin(Creature* creature, f32 searchRadius, Condition<Piki>* condition)
{
	searchRadius *= searchRadius;
	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isSearchable()) {
			Vector3f creaturePos = Vector3f(creature->getPosition().x, creature->getPosition().y, creature->getPosition().z);
			Vector3f pikiPos     = Vector3f(piki->getPosition().x, piki->getPosition().y, piki->getPosition().z);

			Vector3f diff = creaturePos - pikiPos;
			if (diff.sqrMagnitude() < searchRadius) {
				return true;
			}
		}
	}

	return false;
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	lwz      r0, pikiMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r6, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	li       r5, 0
	cmplwi   r4, 0
	fmuls    f26, f1, f1
	stw      r6, 0x50(r1)
	mr       r31, r3
	stw      r4, 0x5c(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x58(r1)
	bne      lbl_801147C8
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114A50

lbl_801147C8:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114838

lbl_801147E4:
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
	bne      lbl_80114A50
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114838:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801147E4
	b        lbl_80114A50

lbl_80114858:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801148BC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801148BC
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801148BC
	li       r30, 1

lbl_801148BC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80114994
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f27, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f28, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x2c
	lwz      r12, 0(r29)
	lfs      f29, 0x20(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f30, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x44
	lwz      r12, 0(r29)
	lfs      f31, 0x3c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f28
	lfs      f2, 0x44(r1)
	fsubs    f1, f30, f27
	fsubs    f2, f2, f29
	fmuls    f0, f0, f0
	fmadds   f0, f2, f2, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_80114994
	li       r3, 1
	b        lbl_80114A74

lbl_80114994:
	lwz      r0, 0x5c(r1)
	cmplwi   r0, 0
	bne      lbl_801149C0
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114A50

lbl_801149C0:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114A34

lbl_801149E0:
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
	bne      lbl_80114A50
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114A34:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801149E0

lbl_80114A50:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r1)
	cmplw    r4, r3
	bne      lbl_80114858
	li       r3, 0

lbl_80114A74:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xd4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/**
 * @note Address: 0x80114AC0
 * @note Size: 0x330
 */
bool isThereOlimar(Creature* creature, f32 searchRadius, Condition<Navi>* condition)
{
	searchRadius *= searchRadius;
	Iterator<Navi> iter(naviMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Navi* navi           = *iter;
		Vector3f creaturePos = Vector3f(creature->getPosition().x, creature->getPosition().y, creature->getPosition().z);
		Vector3f naviPos     = Vector3f(navi->getPosition().x, navi->getPosition().y, navi->getPosition().z);

		Vector3f diff = creaturePos - naviPos;
		if (diff.sqrMagnitude() < searchRadius) {
			return true;
		}
	}

	return false;
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	lwz      r0, naviMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	addi     r6, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	li       r5, 0
	cmplwi   r4, 0
	fmuls    f26, f1, f1
	stw      r6, 0x50(r1)
	mr       r30, r3
	stw      r4, 0x5c(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x58(r1)
	bne      lbl_80114B50
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114D84

lbl_80114B50:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114BC0

lbl_80114B6C:
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
	bne      lbl_80114D84
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114BC0:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114B6C
	b        lbl_80114D84

lbl_80114BE0:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r30)
	mr       r31, r3
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lfs      f27, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f28, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f29, 0x20(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lfs      f30, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lfs      f31, 0x3c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f28
	lfs      f2, 0x44(r1)
	fsubs    f1, f30, f27
	fsubs    f2, f2, f29
	fmuls    f0, f0, f0
	fmadds   f0, f2, f2, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_80114CC8
	li       r3, 1
	b        lbl_80114DA8

lbl_80114CC8:
	lwz      r0, 0x5c(r1)
	cmplwi   r0, 0
	bne      lbl_80114CF4
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114D84

lbl_80114CF4:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80114D68

lbl_80114D14:
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
	bne      lbl_80114D84
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80114D68:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80114D14

lbl_80114D84:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r1)
	cmplw    r4, r3
	bne      lbl_80114BE0
	li       r3, 0

lbl_80114DA8:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/**
 * @note Address: 0x80114DF0
 * @note Size: 0x3C4
 */
int getSurroundPikminNum(Creature* creature, f32 searchRadius, Condition<Piki>* condition)
{
	sys->mTimers->_start("teki-srch", true);
	searchRadius *= searchRadius;
	int pikiCount = 0;
	Iterator<Piki> iter(pikiMgr, nullptr, condition);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isSearchable()) {
			Vector3f creaturePos = Vector3f(creature->getPosition().x, creature->getPosition().y, creature->getPosition().z);
			Vector3f pikiPos     = Vector3f(piki->getPosition().x, piki->getPosition().y, piki->getPosition().z);

			Vector3f diff = creaturePos - pikiPos;
			if (diff.sqrMagnitude() < searchRadius) {
				pikiCount++;
			}
		}
	}

	sys->mTimers->_stop("teki-srch");
	return pikiCount;

	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stfd      f27, 0x80(r1)
	  psq_st    f27,0x88(r1),0,0
	  stfd      f26, 0x70(r1)
	  psq_st    f26,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  lwz       r6, -0x6514(r13)
	  lis       r5, 0x8048
	  fmr       f26, f1
	  mr        r30, r3
	  subi      r0, r5, 0x5178
	  lwz       r3, 0x28(r6)
	  mr        r28, r4
	  li        r5, 0x1
	  mr        r4, r0
	  bl        0x315C98
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  subi      r4, r4, 0x4364
	  li        r0, 0
	  cmplwi    r28, 0
	  fmuls     f26, f26, f26
	  stw       r4, 0x50(r1)
	  li        r31, 0
	  stw       r28, 0x5C(r1)
	  stw       r0, 0x54(r1)
	  stw       r3, 0x58(r1)
	  bne-      .loc_0xBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x33C

	.loc_0xBC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x128

	.loc_0xD4:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x33C
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x128:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x33C

	.loc_0x148:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  li        r29, 0
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  mr        r3, r28
	  bl        0x8A5FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1AC
	  li        r29, 0x1

	.loc_0x1AC:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x280
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lfs       f27, 0x10(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lfs       f28, 0x18(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x20(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r28)
	  lfs       f31, 0x3C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fsubs     f0, f31, f28
	  lfs       f2, 0x44(r1)
	  fsubs     f1, f30, f27
	  fsubs     f2, f2, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f2, f2, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f26
	  bge-      .loc_0x280
	  addi      r31, r31, 0x1

	.loc_0x280:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2AC
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x33C

	.loc_0x2AC:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x320

	.loc_0x2CC:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x33C
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x320:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2CC

	.loc_0x33C:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x5178
	  lwz       r3, 0x28(r5)
	  bl        0x3159A0
	  mr        r3, r31
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  psq_l     f27,0x88(r1),0,0
	  lfd       f27, 0x80(r1)
	  psq_l     f26,0x78(r1),0,0
	  lfd       f26, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/**
 * @note Address: 0x801151B4
 * @note Size: 0x24C
 */
int getStickPikminColorNum(Creature* creature, int color)
{
	int num = 0;
	Stickers stickers(creature);
	Iterator<Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		if ((*iter)->isPiki()) {
			Piki* piki = static_cast<Piki*>(*iter);
			if (piki->getKind() == color) {
				num++;
			}
		}
	}

	return num;
}

/**
 * @note Address: 0x80115400
 * @note Size: 0x1DC
 */
void walkToTarget(EnemyBase* enemy, Creature* target, f32 speed, f32 turnFactor, f32 maxTurnSpeed)
{
	enemy->turnToTarget(target, turnFactor, maxTurnSpeed);

	f32 x = sin(enemy->getFaceDir());
	f32 y = enemy->getTargetVelocity().y;
	f32 z = cos(enemy->getFaceDir());

	enemy->mTargetVelocity = Vector3f(speed * x, y, speed * z);
}

/**
 * @note Address: 0x801155DC
 * @note Size: 0x1BC
 */
void walkToTarget(EnemyBase* enemy, Vector3f& targetPos, f32 moveSpeed, f32 turnFactor, f32 maxTurnSpeed)
{
	enemy->turnToTarget2(targetPos, turnFactor, maxTurnSpeed);

	f32 x = sin(enemy->getFaceDir());
	f32 y = enemy->getTargetVelocity().y;
	f32 z = cos(enemy->getFaceDir());

	enemy->mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);
}

/**
 * @note Address: 0x80115798
 * @note Size: 0x80
 */
bool EatPikminDefaultCondition::satisfy(Piki* piki)
{
	bool result        = false;
	Creature* creature = mEnemy;
	if (piki->isPikmin() && piki->mSticker != creature && !piki->isStickToMouth()) {
		result = true;
	}

	return result;
}

/**
 * @note Address: 0x80115818
 * @note Size: 0x168
 */
bool ConditionPikminNearby::satisfy(Creature* creature)
{
	if (creature->mSticker != mCreature) {
		Vector3f creaturePos = Vector3f(creature->getPosition().x, creature->getPosition().y, creature->getPosition().z);
		Vector3f targetPos   = Vector3f(mCreature->getPosition().x, mCreature->getPosition().y, mCreature->getPosition().z);

		Vector3f diff = creaturePos - targetPos;
		if (diff.sqrMagnitude() < mSearchDist) {
			return true;
		}
	}
	return false;
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0xf4(r4)
	lwz      r0, 4(r30)
	cmplw    r3, r0
	beq      lbl_8011593C
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f27, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f28, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	addi     r3, r1, 0x2c
	lfs      f29, 0x20(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	addi     r3, r1, 0x38
	lfs      f30, 0x34(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	addi     r3, r1, 0x44
	lfs      f31, 0x3c(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f31, f28
	lfs      f3, 0x44(r1)
	fsubs    f2, f30, f27
	lfs      f0, 8(r30)
	fsubs    f3, f3, f29
	fmuls    f1, f1, f1
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8011593C
	li       r3, 1
	b        lbl_80115940

lbl_8011593C:
	li       r3, 0

lbl_80115940:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}
} // namespace EnemyFunc
} // namespace Game
