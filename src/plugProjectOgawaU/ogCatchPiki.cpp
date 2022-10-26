#include "og/Screen/callbackNodes.h"
#include "og/Screen/ScaleMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen18CallBack_CatchPiki
    __vt__Q32og6Screen18CallBack_CatchPiki:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen18CallBack_CatchPikiFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen18CallBack_CatchPikiFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D628
    lbl_8051D628:
        .4byte 0x3ECCCCCD
    .global lbl_8051D62C
    lbl_8051D62C:
        .4byte 0x41F00000
    .global lbl_8051D630
    lbl_8051D630:
        .float 0.7
    .global lbl_8051D634
    lbl_8051D634:
        .4byte 0x00000000
    .global lbl_8051D638
    lbl_8051D638:
        .float 0.5
        .4byte 0x00000000
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80307820
 * Size:	000080
 */
CallBack_CatchPiki::CallBack_CatchPiki(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
mr       r0, r30
mr       r31, r0
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r3, __vt__Q32og6Screen18CallBack_CatchPiki@ha
stw      r0, 0(r31)
li       r5, 0
addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r0, r3, __vt__Q32og6Screen18CallBack_CatchPiki@l
stw      r5, 0x18(r31)
addi     r3, r30, 0x28
stw      r4, 0(r31)
stw      r0, 0(r30)
bl       __ct__Q32og6Screen8ScaleMgrFv
li       r0, 0
mr       r3, r30
stw      r0, 0x1c(r30)
stw      r0, 0x20(r30)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803078A0
 * Size:	00003C
 */
ScaleMgr::~ScaleMgr(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
or.      r31, r3, r3
beq      lbl_803078C4
extsh.   r0, r4
ble      lbl_803078C4
bl       __dl__FPv

lbl_803078C4:
lwz      r0, 0x14(r1)
mr       r3, r31
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803078DC
 * Size:	0000C0
 */
void CallBack_CatchPiki::init(J2DScreen*, unsigned long long, unsigned long*, JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r3, r4
	  mr        r26, r7
	  mr        r27, r8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r25)
	  lis       r4, 0x804D
	  lis       r3, 0x8051
	  li        r28, 0
	  stw       r26, 0x1C(r25)
	  addi      r30, r4, 0x7AC0
	  addi      r29, r3, 0x3BB0
	  lis       r31, 0x5449
	  lwz       r0, 0x0(r26)
	  stw       r0, 0x24(r25)

	.loc_0x58:
	  mr        r3, r27
	  addi      r4, r31, 0x4D47
	  lwz       r12, 0x0(r27)
	  lwz       r5, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  stw       r3, 0x0(r29)
	  cmpwi     r28, 0x13
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0x58
	  lwz       r4, 0x0(r26)
	  mr        r3, r25
	  bl        0x11C
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030799C
 * Size:	0000F0
 */
void CallBack_CatchPiki::update(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stfd     f31, 0x10(r1)
psq_st   f31, 24(r1), 0, qr0
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lwz      r4, 0x1c(r3)
cmplwi   r4, 0
beq      lbl_80307A6C
lwz      r0, 0x20(r30)
cmplwi   r0, 0
beq      lbl_80307A6C
lwz      r31, 0(r4)
lwz      r0, 0x24(r30)
cmplw    r31, r0
beq      lbl_80307A10
cmplwi   r31, 0x13
bge      lbl_80307A10
mr       r4, r31
bl       setPikiIcon__Q32og6Screen18CallBack_CatchPikiFi
lfs      f1, lbl_8051D628@sda21(r2)
addi     r3, r30, 0x28
lfs      f2, lbl_8051D62C@sda21(r2)
lfs      f3, lbl_8051D630@sda21(r2)
lfs      f4, lbl_8051D634@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
stw      r31, 0x24(r30)

lbl_80307A10:
addi     r3, r30, 0x28
bl       calc__Q32og6Screen8ScaleMgrFv
lwz      r3, 0x20(r30)
fmr      f31, f1
lfs      f2, lbl_8051D638@sda21(r2)
li       r4, 0x7a
lfs      f4, 0x28(r3)
lfs      f3, 0x20(r3)
lfs      f1, 0x2c(r3)
lfs      f0, 0x24(r3)
fsubs    f4, f4, f3
lfs      f3, lbl_8051D634@sda21(r2)
fsubs    f0, f1, f0
fmuls    f1, f4, f2
fmuls    f2, f0, f2
bl       rotate__7J2DPaneFff13J2DRotateAxisf
lwz      r3, 0x20(r30)
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl

lbl_80307A6C:
psq_l    f31, 24(r1), 0, qr0
lwz      r0, 0x24(r1)
lfd      f31, 0x10(r1)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	80307A8C
 * Size:	00004C
 */
void CallBack_CatchPiki::setPikiIcon(int)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
cmpwi    r4, 0x13
stw      r0, 0x14(r1)
bge      lbl_80307AC8
lwz      r3, 0x20(r3)
lis      r6, PikiIconTextureResTIMG__Q22og6Screen@ha
slwi     r0, r4, 2
li       r5, 0
lwz      r12, 0(r3)
addi     r4, r6, PikiIconTextureResTIMG__Q22og6Screen@l
lwzx     r4, r4, r0
lwz      r12, 0x110(r12)
mtctr    r12
bctrl

lbl_80307AC8:
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80307AD8
 * Size:	000080
 */
CallBack_CatchPiki::~CallBack_CatchPiki(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80307B3C
lis      r4, __vt__Q32og6Screen18CallBack_CatchPiki@ha
addi     r0, r4, __vt__Q32og6Screen18CallBack_CatchPiki@l
stw      r0, 0(r30)
beq      lbl_80307B2C
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_80307B2C
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_80307B2C:
extsh.   r0, r31
ble      lbl_80307B3C
mr       r3, r30
bl       __dl__FPv

lbl_80307B3C:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Screen
} // namespace og
