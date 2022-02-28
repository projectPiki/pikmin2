#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_moviePlayerAudio_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ED8C8
    lbl_804ED8C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__27Pikmin_TCreateObject_JAudio
    __vt__27Pikmin_TCreateObject_JAudio:
        .4byte 0
        .4byte 0
        .4byte __dt__27Pikmin_TCreateObject_JAudioFv
        .4byte
   create__27Pikmin_TCreateObject_JAudioFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805162F8
    lbl_805162F8:
        .skip 0x4
    .global lbl_805162FC
    lbl_805162FC:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void @unnamed @moviePlayerAudio_cpp
    @ ::createObject_SOUND_JAI_(const JStudio::stb::data::TParse_TBlock_object&, JAIBasic*, const JStage::TSystem*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80454D30
 * Size:	00003C
 */
Pikmin_TCreateObject_JAudio::Pikmin_TCreateObject_JAudio(JAIBasic*, const JStage::TSystem*)
{
	/*
	.loc_0x0:
	  lis       r8, 0x804A
	  lis       r7, 0x804A
	  subi      r0, r8, 0x1984
	  lis       r6, 0x804F
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  subi      r7, r7, 0x608
	  subi      r0, r6, 0x272C
	  stw       r8, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r4, 0xC(r3)
	  stw       r5, 0x10(r3)
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80454D6C
 * Size:	000194
 */
void Pikmin_TCreateObject_JAudio::create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stw       r31, 0x11C(r1)
	  stw       r30, 0x118(r1)
	  mr        r30, r5
	  stw       r29, 0x114(r1)
	  mr        r29, r4
	  stw       r28, 0x110(r1)
	  mr        r28, r3
	  lwz       r3, 0x0(r5)
	  lbz       r0, 0xC(r3)
	  addi      r31, r3, 0xC
	  cmpwi     r0, 0x23
	  beq-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x174

	.loc_0x44:
	  mr        r3, r31
	  bl        -0x38A4A4
	  cmpwi     r3, 0x64
	  ble-      .loc_0x58
	  li        r3, 0x64

	.loc_0x58:
	  mr        r5, r3
	  add       r4, r31, r3
	  mtctr     r3
	  cmpwi     r3, 0
	  ble-      .loc_0x8C

	.loc_0x6C:
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x5F
	  bne-      .loc_0x80
	  mr        r3, r5
	  b         .loc_0x8C

	.loc_0x80:
	  subi      r5, r5, 0x1
	  subi      r4, r4, 0x1
	  bdnz+     .loc_0x6C

	.loc_0x8C:
	  subic.    r0, r3, 0x1
	  li        r4, 0x2A
	  stb       r4, 0x8(r1)
	  addi      r6, r1, 0x8
	  li        r7, 0
	  mr        r4, r0
	  ble-      .loc_0x13C
	  rlwinm.   r0,r0,29,3,31
	  mtctr     r0
	  beq-      .loc_0x124

	.loc_0xB4:
	  addi      r5, r7, 0x1
	  lbzx      r0, r31, r5
	  addi      r5, r7, 0x2
	  stb       r0, 0x1(r6)
	  lbzx      r0, r31, r5
	  addi      r5, r7, 0x3
	  stb       r0, 0x2(r6)
	  lbzx      r0, r31, r5
	  addi      r5, r7, 0x4
	  stb       r0, 0x3(r6)
	  lbzx      r0, r31, r5
	  addi      r5, r7, 0x5
	  stb       r0, 0x4(r6)
	  lbzx      r0, r31, r5
	  addi      r5, r7, 0x6
	  stb       r0, 0x5(r6)
	  lbzx      r0, r31, r5
	  addi      r5, r7, 0x7
	  stb       r0, 0x6(r6)
	  lbzx      r0, r31, r5
	  addi      r5, r7, 0x8
	  addi      r7, r7, 0x8
	  stb       r0, 0x7(r6)
	  lbzx      r0, r31, r5
	  stbu      r0, 0x8(r6)
	  bdnz+     .loc_0xB4
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x13C

	.loc_0x124:
	  mtctr     r4

	.loc_0x128:
	  addi      r5, r7, 0x1
	  addi      r7, r7, 0x1
	  lbzx      r0, r31, r5
	  stbu      r0, 0x1(r6)
	  bdnz+     .loc_0x128

	.loc_0x13C:
	  addi      r4, r1, 0x8
	  li        r0, 0
	  stbx      r0, r4, r3
	  lwz       r3, -0x64AC(r13)
	  lwz       r3, 0x1CC(r3)
	  bl        -0x23B04
	  cmplwi    r3, 0
	  beq-      .loc_0x170
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x43F164
	  b         .loc_0x174

	.loc_0x170:
	  li        r3, 0

	.loc_0x174:
	  lwz       r0, 0x124(r1)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  lwz       r28, 0x110(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80454F00
 * Size:	000060
 */
Pikmin_TCreateObject_JAudio::~Pikmin_TCreateObject_JAudio()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80454F44
	lis      r5, __vt__27Pikmin_TCreateObject_JAudio@ha
	li       r4, 0
	addi     r0, r5, __vt__27Pikmin_TCreateObject_JAudio@l
	stw      r0, 0(r30)
	bl       __dt__Q214JStudio_JAudio13TCreateObjectFv
	extsh.   r0, r31
	ble      lbl_80454F44
	mr       r3, r30
	bl       __dl__FPv

lbl_80454F44:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80454F60
 * Size:	000028
 */
void __sinit_moviePlayerAudio_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804ED8C8@ha
	stw      r0, lbl_805162F8@sda21(r13)
	stfsu    f0, lbl_804ED8C8@l(r3)
	stfs     f0, lbl_805162FC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
