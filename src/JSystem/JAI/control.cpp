#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q214JStudio_JAudio13TCreateObject
    __vt__Q214JStudio_JAudio13TCreateObject:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JAudio13TCreateObjectFv
        .4byte
   create__Q214JStudio_JAudio13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
*/

/*
 * --INFO--
 * Address:	80015C44
 * Size:	0000CC
 */
void createObject_SOUND_JAI___Q214JStudio_JAudio21 @unnamed @control_cpp
    @FRCQ47JStudio3stb4data20TParse_TBlock_objectP8JAIBasicPCQ26JStage7TSystem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x108
	  bl        0xE234
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0xCAC
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x58:
	  li        r3, 0x38
	  bl        0xE204
	  mr.       r30, r3
	  beq-      .loc_0x78
	  mr        r4, r28
	  mr        r5, r31
	  bl        -0x6A38
	  mr        r30, r3

	.loc_0x78:
	  cmplwi    r30, 0
	  bne-      .loc_0x88
	  li        r30, 0
	  b         .loc_0xA8

	.loc_0x88:
	  lwz       r3, 0x34(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
	  mr        r3, r30

	.loc_0xAC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015D10
 * Size:	000060
 */
JStudio_JAudio::TCreateObject::~TCreateObject(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80015D54
	lis      r5, __vt__Q214JStudio_JAudio13TCreateObject@ha
	li       r4, 0
	addi     r0, r5, __vt__Q214JStudio_JAudio13TCreateObject@l
	stw      r0, 0(r30)
	bl       __dt__Q27JStudio13TCreateObjectFv
	extsh.   r0, r31
	ble      lbl_80015D54
	mr       r3, r30
	bl       __dl__FPv

lbl_80015D54:
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
 * Address:	80015D70
 * Size:	000078
 */
void JStudio_JAudio::TCreateObject::create((JStudio::TObject**, JStudio::stb::data::TParse_TBlock_object const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r7, 0x0(r5)
	  lis       r6, 0x4A53
	  stw       r0, 0x14(r1)
	  addi      r0, r6, 0x4E44
	  mr        r6, r3
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, 0x4(r7)
	  cmpw      r3, r0
	  beq-      .loc_0x34
	  b         .loc_0x40

	.loc_0x34:
	  lis       r3, 0x8001
	  addi      r12, r3, 0x5C44
	  b         .loc_0x48

	.loc_0x40:
	  li        r3, 0
	  b         .loc_0x64

	.loc_0x48:
	  mr        r3, r5
	  lwz       r4, 0xC(r6)
	  lwz       r5, 0x10(r6)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r31)
	  li        r3, 0x1

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
