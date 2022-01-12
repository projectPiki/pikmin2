#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q214JStudio_JStage13TCreateObject
    __vt__Q214JStudio_JStage13TCreateObject:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JStage13TCreateObjectFv
        .4byte
   create__Q214JStudio_JStage13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
*/

/*
 * --INFO--
 * Address:	80014734
 * Size:	000060
 */
JStudio_JStage::TCreateObject::~TCreateObject(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80014778
	lis      r5, __vt__Q214JStudio_JStage13TCreateObject@ha
	li       r4, 0
	addi     r0, r5, __vt__Q214JStudio_JStage13TCreateObject@l
	stw      r0, 0(r30)
	bl       __dt__Q27JStudio13TCreateObjectFv
	extsh.   r0, r31
	ble      lbl_80014778
	mr       r3, r30
	bl       __dl__FPv

lbl_80014778:
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
 * Address:	80014794
 * Size:	000194
 */
void JStudio_JStage::TCreateObject::create((JStudio::TObject**, JStudio::stb::data::TParse_TBlock_object const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  lwz       r5, 0x0(r5)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  stw       r0, 0x0(r4)
	  lis       r4, 0x4A43
	  addi      r0, r4, 0x4D52
	  lwz       r4, 0x4(r5)
	  cmpw      r4, r0
	  beq-      .loc_0xAC
	  bge-      .loc_0x70
	  lis       r3, 0x4A41
	  addi      r0, r3, 0x4354
	  cmpw      r4, r0
	  beq-      .loc_0x98
	  bge-      .loc_0xFC
	  addi      r0, r3, 0x424C
	  cmpw      r4, r0
	  beq-      .loc_0xC0
	  b         .loc_0xFC

	.loc_0x70:
	  lis       r3, 0x4A4C
	  addi      r0, r3, 0x4954
	  cmpw      r4, r0
	  beq-      .loc_0xD4
	  bge-      .loc_0xFC
	  lis       r3, 0x4A46
	  addi      r0, r3, 0x4F47
	  cmpw      r4, r0
	  beq-      .loc_0xE8
	  b         .loc_0xFC

	.loc_0x98:
	  lis       r3, 0x8001
	  li        r6, 0x2
	  addi      r0, r3, 0x4928
	  mr        r28, r0
	  b         .loc_0x104

	.loc_0xAC:
	  lis       r3, 0x8001
	  li        r6, 0x3
	  addi      r0, r3, 0x49F4
	  mr        r28, r0
	  b         .loc_0x104

	.loc_0xC0:
	  lis       r3, 0x8001
	  li        r6, 0x4
	  addi      r0, r3, 0x4AC0
	  mr        r28, r0
	  b         .loc_0x104

	.loc_0xD4:
	  lis       r3, 0x8001
	  li        r6, 0x5
	  addi      r0, r3, 0x4B8C
	  mr        r28, r0
	  b         .loc_0x104

	.loc_0xE8:
	  lis       r3, 0x8001
	  li        r6, 0x6
	  addi      r0, r3, 0x4C58
	  mr        r28, r0
	  b         .loc_0x104

	.loc_0xFC:
	  li        r3, 0
	  b         .loc_0x174

	.loc_0x104:
	  lwz       r3, 0xC(r29)
	  addi      r4, r1, 0x8
	  addi      r5, r5, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x1
	  beq-      .loc_0x170
	  bge-      .loc_0x138
	  cmpwi     r3, 0
	  bge-      .loc_0x144
	  b         .loc_0x170

	.loc_0x138:
	  cmpwi     r3, 0x3
	  bge-      .loc_0x170
	  b         .loc_0x168

	.loc_0x144:
	  mr        r12, r28
	  mr        r3, r31
	  lwz       r4, 0x8(r1)
	  lwz       r5, 0xC(r29)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r30)
	  li        r3, 0x1
	  b         .loc_0x174

	.loc_0x168:
	  li        r3, 0x1
	  b         .loc_0x174

	.loc_0x170:
	  li        r3, 0

	.loc_0x174:
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
 * Address:	80014928
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_actor, JStage::TActor> __Q214JStudio_JStage21 @unnamed @control_cpp
    @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x14C
	  bl        0xF550
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x27D0
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x58:
	  li        r3, 0x38
	  bl        0xF520
	  mr.       r30, r3
	  beq-      .loc_0x78
	  mr        r4, r28
	  mr        r5, r31
	  bl        -0x70A0
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
 * Address:	800149F4
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_camera, JStage::TCamera> __Q214JStudio_JStage21 @unnamed @control_cpp
    @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x120
	  bl        0xF484
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x160C
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x58:
	  li        r3, 0x38
	  bl        0xF454
	  mr.       r30, r3
	  beq-      .loc_0x78
	  mr        r4, r28
	  mr        r5, r31
	  bl        -0x69A4
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
 * Address:	80014AC0
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_ambientLight, JStage::TAmbientLight> __Q214JStudio_JStage21 @unnamed @control_cpp
    @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x64
	  bl        0xF3B8
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x1974
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x58:
	  li        r3, 0x38
	  bl        0xF388
	  mr.       r30, r3
	  beq-      .loc_0x78
	  mr        r4, r28
	  mr        r5, r31
	  bl        -0x6D00
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
 * Address:	80014B8C
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_light, JStage::TLight> __Q214JStudio_JStage21 @unnamed @control_cpp
    @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x11C
	  bl        0xF2EC
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x3804
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x58:
	  li        r3, 0x38
	  bl        0xF2BC
	  mr.       r30, r3
	  beq-      .loc_0x78
	  mr        r4, r28
	  mr        r5, r31
	  bl        -0x63F4
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
 * Address:	80014C58
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_fog, JStage::TFog> __Q214JStudio_JStage21 @unnamed @control_cpp
    @FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  li        r3, 0x8C
	  bl        0xF220
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0xB64
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0xAC

	.loc_0x58:
	  li        r3, 0x38
	  bl        0xF1F0
	  mr.       r30, r3
	  beq-      .loc_0x78
	  mr        r4, r28
	  mr        r5, r31
	  bl        -0x675C
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
