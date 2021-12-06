#include "types.h"
#include "ebi/Utility.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F880
    lbl_8051F880:
        .4byte 0xBF000000
    .global lbl_8051F884
    lbl_8051F884:
        .float 0.5
    .global lbl_8051F888
    lbl_8051F888:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803C1A3C
 * Size:	000060
 */
void EUTPadInterface_countNum::init(Controller*, long, long, long*,
                                    ebi::EUTPadInterface_countNum::enumMode,
                                    float, float)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  li        r0, 0
	  stw       r5, 0x10(r3)
	  stw       r6, 0x14(r3)
	  stw       r7, 0x18(r3)
	  stw       r8, 0x28(r3)
	  stfs      f1, 0x20(r3)
	  stfs      f2, 0x24(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  lwz       r4, 0x18(r3)
	  lwz       r0, 0x0(r4)
	  cmpw      r0, r5
	  bge-      .loc_0x3C
	  stw       r5, 0x0(r4)

	.loc_0x3C:
	  lwz       r4, 0x18(r3)
	  lwz       r0, 0x0(r4)
	  cmpw      r0, r6
	  ble-      .loc_0x50
	  stw       r6, 0x0(r4)

	.loc_0x50:
	  lwz       r4, 0x18(r3)
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C1A9C
 * Size:	000304
 */
void EUTPadInterface_countNum::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_803C1AC4
	addi     r0, r3, -1
	stw      r0, 4(r31)

lbl_803C1AC4:
	li       r3, 0
	stb      r3, 0xd(r31)
	lwz      r0, 0x28(r31)
	cmpwi    r0, 2
	beq      lbl_803C1BA8
	bge      lbl_803C1AEC
	cmpwi    r0, 0
	beq      lbl_803C1AF8
	bge      lbl_803C1B50
	b        lbl_803C1C54

lbl_803C1AEC:
	cmpwi    r0, 4
	bge      lbl_803C1C54
	b        lbl_803C1C00

lbl_803C1AF8:
	lwz      r4, 0(r31)
	lwz      r0, 0x18(r4)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803C1B18
	lfs      f1, 0x48(r4)
	lfs      f0, lbl_8051F880@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803C1B1C

lbl_803C1B18:
	li       r3, 1

lbl_803C1B1C:
	lwz      r0, 0x18(r4)
	mr       r5, r3
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_803C1B3C
	lfs      f1, 0x48(r4)
	lfs      f0, lbl_8051F884@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803C1B44

lbl_803C1B3C:
	li       r0, 1
	b        lbl_803C1B48

lbl_803C1B44:
	li       r0, 0

lbl_803C1B48:
	mr       r4, r0
	b        lbl_803C1C54

lbl_803C1B50:
	lwz      r4, 0(r31)
	lwz      r0, 0x18(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_803C1B70
	lfs      f1, 0x48(r4)
	lfs      f0, lbl_8051F884@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803C1B74

lbl_803C1B70:
	li       r3, 1

lbl_803C1B74:
	lwz      r0, 0x18(r4)
	mr       r5, r3
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803C1B94
	lfs      f1, 0x48(r4)
	lfs      f0, lbl_8051F880@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803C1B9C

lbl_803C1B94:
	li       r0, 1
	b        lbl_803C1BA0

lbl_803C1B9C:
	li       r0, 0

lbl_803C1BA0:
	mr       r4, r0
	b        lbl_803C1C54

lbl_803C1BA8:
	lwz      r4, 0(r31)
	lwz      r0, 0x18(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_803C1BC8
	lfs      f1, 0x4c(r4)
	lfs      f0, lbl_8051F884@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803C1BCC

lbl_803C1BC8:
	li       r3, 1

lbl_803C1BCC:
	lwz      r0, 0x18(r4)
	mr       r5, r3
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_803C1BEC
	lfs      f1, 0x4c(r4)
	lfs      f0, lbl_8051F880@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803C1BF4

lbl_803C1BEC:
	li       r0, 1
	b        lbl_803C1BF8

lbl_803C1BF4:
	li       r0, 0

lbl_803C1BF8:
	mr       r4, r0
	b        lbl_803C1C54

lbl_803C1C00:
	lwz      r4, 0(r31)
	lwz      r0, 0x18(r4)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_803C1C20
	lfs      f1, 0x4c(r4)
	lfs      f0, lbl_8051F880@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803C1C24

lbl_803C1C20:
	li       r3, 1

lbl_803C1C24:
	lwz      r0, 0x18(r4)
	mr       r5, r3
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_803C1C44
	lfs      f1, 0x4c(r4)
	lfs      f0, lbl_8051F884@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803C1C4C

lbl_803C1C44:
	li       r0, 1
	b        lbl_803C1C50

lbl_803C1C4C:
	li       r0, 0

lbl_803C1C50:
	mr       r4, r0

lbl_803C1C54:
	clrlwi.  r0, r5, 0x18
	beq      lbl_803C1CE8
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_803C1D8C
	lwz      r3, 0x18(r31)
	lwz      r0, 0x14(r31)
	lwz      r3, 0(r3)
	cmpw     r3, r0
	bge      lbl_803C1D8C
	stw      r3, 0x1c(r31)
	li       r3, 1
	lwz      r5, 0x18(r31)
	lwz      r4, 0(r5)
	addi     r0, r4, 1
	stw      r0, 0(r5)
	stb      r3, 0xd(r31)
	lbz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_803C1CC8
	stb      r3, 0xc(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x20(r31)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 4(r31)
	stw      r3, 8(r31)
	b        lbl_803C1D8C

lbl_803C1CC8:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x24(r31)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 4(r31)
	stw      r3, 8(r31)
	b        lbl_803C1D8C

lbl_803C1CE8:
	clrlwi.  r0, r4, 0x18
	beq      lbl_803C1D7C
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_803C1D8C
	lwz      r3, 0x18(r31)
	lwz      r0, 0x10(r31)
	lwz      r3, 0(r3)
	cmpw     r3, r0
	ble      lbl_803C1D8C
	stw      r3, 0x1c(r31)
	li       r3, 1
	lwz      r5, 0x18(r31)
	lwz      r4, 0(r5)
	addi     r0, r4, -1
	stw      r0, 0(r5)
	stb      r3, 0xd(r31)
	lbz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_803C1D5C
	stb      r3, 0xc(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x20(r31)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 4(r31)
	stw      r3, 8(r31)
	b        lbl_803C1D8C

lbl_803C1D5C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x24(r31)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 4(r31)
	stw      r3, 8(r31)
	b        lbl_803C1D8C

lbl_803C1D7C:
	li       r0, 0
	stb      r0, 0xc(r31)
	stw      r0, 4(r31)
	stw      r0, 8(r31)

lbl_803C1D8C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C1DA0
 * Size:	000114
 */
void EUTColor_complement(JUtility::TColor&, JUtility::TColor&, float, float,
                         JUtility::TColor*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  lis       r6, 0x4330
	  lfd       f4, 0x1528(r2)
	  lbz       r0, 0x0(r4)
	  lbz       r7, 0x0(r3)
	  stw       r0, 0x14(r1)
	  stw       r6, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  stw       r7, 0xC(r1)
	  fsubs     f0, f0, f4
	  stw       r6, 0x8(r1)
	  lfd       f3, 0x8(r1)
	  fmuls     f0, f2, f0
	  stw       r6, 0x28(r1)
	  fsubs     f3, f3, f4
	  stw       r6, 0x20(r1)
	  fmadds    f0, f1, f3, f0
	  stw       r6, 0x40(r1)
	  stw       r6, 0x38(r1)
	  fctiwz    f0, f0
	  stw       r6, 0x58(r1)
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r6, 0x50(r1)
	  stb       r0, 0x0(r5)
	  lbz       r0, 0x1(r4)
	  lbz       r6, 0x1(r3)
	  stw       r0, 0x2C(r1)
	  lfd       f0, 0x28(r1)
	  stw       r6, 0x24(r1)
	  fsubs     f0, f0, f4
	  lfd       f3, 0x20(r1)
	  fsubs     f3, f3, f4
	  fmuls     f0, f2, f0
	  fmadds    f0, f1, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  stb       r0, 0x1(r5)
	  lbz       r0, 0x2(r4)
	  lbz       r6, 0x2(r3)
	  stw       r0, 0x44(r1)
	  lfd       f0, 0x40(r1)
	  stw       r6, 0x3C(r1)
	  fsubs     f0, f0, f4
	  lfd       f3, 0x38(r1)
	  fsubs     f3, f3, f4
	  fmuls     f0, f2, f0
	  fmadds    f0, f1, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  stb       r0, 0x2(r5)
	  lbz       r0, 0x3(r4)
	  lbz       r3, 0x3(r3)
	  stw       r0, 0x5C(r1)
	  lfd       f0, 0x58(r1)
	  stw       r3, 0x54(r1)
	  fsubs     f0, f0, f4
	  lfd       f3, 0x50(r1)
	  fsubs     f3, f3, f4
	  fmuls     f0, f2, f0
	  fmadds    f0, f1, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  stb       r0, 0x3(r5)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void EUTDebug_Wait()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C1EB4
 * Size:	000004
 */
void EUTDebug_Tag64ToName(ulonglong, char*) { }

/*
 * --INFO--
 * Address:	803C1EB8
 * Size:	000004
 */
void EUTDebug_Tag32ToName(ulong, char*) { }
} // namespace ebi
