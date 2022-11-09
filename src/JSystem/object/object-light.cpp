#include "JSystem/JStudio_JStage.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte "__sinit_object-light_cpp"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_
    __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_:
        .4byte 0
        .4byte 0
        .4byte
   __cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor
        .4byte __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv
    .global __vt__Q214JStudio_JStage14TAdaptor_light
    __vt__Q214JStudio_JStage14TAdaptor_light:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JStage14TAdaptor_lightFv
        .4byte
   adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
        .4byte
   adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
        .4byte
   adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
        .4byte
   adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectPCvUlPCvUl
        .4byte
   adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light
    saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light:
        .skip 0x48

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516480
    lbl_80516480:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516488
    lbl_80516488:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80516490
    lbl_80516490:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_80516498
    lbl_80516498:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_805164A0
    lbl_805164A0:
        .4byte 0x42652EE1
    .global lbl_805164A4
    lbl_805164A4:
        .4byte 0x3C8EFA35
*/

/*
 * --INFO--
 * Address:	800113C8
 * Size:	0000A8
 */
JStudio_JStage::TAdaptor_light::TAdaptor_light(const JStage::TSystem*, JStage::TLight*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0xB98
	  lis       r6, 0x8000
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  subi      r5, r7, 0xD2C
	  li        r7, 0xD
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r8, r29
	  stw       r0, 0x0(r3)
	  addi      r3, r8, 0xC
	  li        r0, 0xD
	  stw       r3, 0x4(r29)
	  stw       r0, 0x8(r29)
	  addi      r0, r6, 0x5808
	  mr        r4, r0
	  li        r6, 0x14
	  stw       r5, 0x0(r29)
	  li        r5, 0
	  bl        0xB040C
	  lis       r3, 0x804A
	  li        r0, 0
	  subi      r4, r3, 0xA78
	  mr        r3, r29
	  stw       r4, 0x0(r29)
	  stw       r30, 0x110(r29)
	  stw       r31, 0x114(r29)
	  stw       r0, 0x118(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80011470
 * Size:	000078
 */
JStudio_JStage::TAdaptor_light::~TAdaptor_light()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800114CC
	lis      r5, __vt__Q214JStudio_JStage14TAdaptor_light@ha
	li       r4, 0
	addi     r0, r5, __vt__Q214JStudio_JStage14TAdaptor_light@l
	stw      r0, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q27JStudio14TAdaptor_lightFv
	extsh.   r0, r31
	ble      lbl_800114CC
	mr       r3, r30
	bl       __dl__FPv

lbl_800114CC:
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
 * Address:	800114E8
 * Size:	000048
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_prepare(const JStudio::TObject*)
{
	/*
	lis      r4, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
	addi     r0, r4,
saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l mr       r5, r0 b
lbl_80011520

lbl_800114F8:
	mulli    r0, r0, 0x14
	lwz      r4, 4(r3)
	cmplwi   r5, 0
	add      r4, r4, r0
	beq      lbl_80011514
	mr       r0, r5
	b        lbl_80011518

lbl_80011514:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_80011518:
	stw      r0, 0x10(r4)
	addi     r5, r5, 0xc

lbl_80011520:
	lwz      r0, 4(r5)
	cmpwi    r0, -1
	bne      lbl_800114F8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80011530
 * Size:	0002AC
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_begin(const JStudio::TObject*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r30, r3
	mr       r29, r4
	lwz      r31, 0x114(r3)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	ori      r4, r3, 1
	mr       r3, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	lwz      r29, 0x14(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lis      r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@ha
	stw      r3, 0xc(r1)
	addi     r4, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@l
	mr       r3, r30
	addi     r5, r1, 0xc
	bl adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor lwz
r3, 0x114(r30) addi     r4, r1, 0x34 lwz      r12, 0(r3) lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	addi     r31, r1, 0x40
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x75(r29)
	cmplwi   r0, 0
	bne      lbl_80011610
	addi     r31, r1, 0x34
	b        lbl_80011634

lbl_80011610:
	addi     r3, r29, 0xc8
	addi     r4, r1, 0x34
	addi     r5, r1, 0x1c
	bl       PSMTXMultVec
	mr       r4, r31
	addi     r3, r29, 0xc8
	addi     r5, r1, 0x28
	bl       PSMTXMultVecSR
	addi     r31, r1, 0x1c

lbl_80011634:
	lis      r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha
	mr       r5, r31
	addi     r4, r3,
sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@l mr       r3, r30
	bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec
	lfs      f2, 0x14(r31)
	lfs      f1, 0xc(r31)
	fmuls    f3, f2, f2
	lfs      f0, lbl_80516480@sda21(r2)
	lfs      f30, 0x10(r31)
	fmadds   f31, f1, f1, f3
	fcmpo    cr0, f31, f0
	ble      lbl_800116B0
	frsqrte  f3, f31
	lfd      f5, lbl_80516488@sda21(r2)
	lfd      f4, lbl_80516490@sda21(r2)
	fmul     f0, f3, f3
	fmul     f3, f5, f3
	fnmsub   f0, f31, f0, f4
	fmul     f3, f3, f0
	fmul     f0, f3, f3
	fmul     f3, f5, f3
	fnmsub   f0, f31, f0, f4
	fmul     f3, f3, f0
	fmul     f0, f3, f3
	fmul     f3, f5, f3
	fnmsub   f0, f31, f0, f4
	fmul     f0, f3, f0
	fmul     f31, f31, f0
	frsp     f31, f31
	b        lbl_80011734

lbl_800116B0:
	lfd      f0, lbl_80516498@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800116C8
	lis      r3, __float_nan@ha
	lfs      f31, __float_nan@l(r3)
	b        lbl_80011734

lbl_800116C8:
	stfs     f31, 8(r1)
	lis      r0, 0x7f80
	lwz      r4, 8(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800116F0
	bge      lbl_80011720
	cmpwi    r3, 0
	beq      lbl_80011708
	b        lbl_80011720

lbl_800116F0:
	clrlwi.  r0, r4, 9
	beq      lbl_80011700
	li       r0, 1
	b        lbl_80011724

lbl_80011700:
	li       r0, 2
	b        lbl_80011724

lbl_80011708:
	clrlwi.  r0, r4, 9
	beq      lbl_80011718
	li       r0, 5
	b        lbl_80011724

lbl_80011718:
	li       r0, 3
	b        lbl_80011724

lbl_80011720:
	li       r0, 4

lbl_80011724:
	cmpwi    r0, 1
	bne      lbl_80011734
	lis      r3, __float_nan@ha
	lfs      f31, __float_nan@l(r3)

lbl_80011734:
	bl       atan2
	frsp     f29, f1
	fmr      f1, f30
	fmr      f2, f31
	bl       atan2
	lis      r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@ha
	lwz      r6, 4(r30)
	addi     r7, r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@l lfs
f2, lbl_805164A0@sda21(r2) stw      r7, 0xd0(r6) li       r0, 0 fmuls    f0, f2,
f29 mr       r3, r31 stw      r0, 0xcc(r6) frsp     f1, f1 addi     r4, r31, 0xc
	addi     r5, r1, 0x10
	stfs     f0, 0xd4(r6)
	fmuls    f0, f2, f1
	lwz      r6, 4(r30)
	stw      r7, 0xe4(r6)
	stw      r0, 0xe0(r6)
	stfs     f0, 0xe8(r6)
	bl       PSVECAdd
	lis      r4,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha mr r3, r30
	addi     r4, r4,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@l addi r5,
r1, 0x10 bl       adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	800117DC
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_end(const JStudio::TObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x114(r3)
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	rlwinm   r4, r3, 0, 0, 0x1e
	mr       r3, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80011830
 * Size:	0001C8
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_update(const JStudio::TObject*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  lis       r5, 0x8047
	  lwz       r31, 0x14(r4)
	  addi      r5, r5, 0x33D0
	  mr        r30, r3
	  addi      r4, r1, 0xC
	  bl        -0x442C
	  lwz       r0, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x114(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r5, r4, 0x33E0
	  addi      r4, r1, 0x34
	  bl        -0x4578
	  lwz       r0, 0x118(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xF8
	  bge-      .loc_0x11C
	  cmpwi     r0, 0x1
	  bge-      .loc_0x94
	  b         .loc_0x11C

	.loc_0x94:
	  lwz       r3, 0x4(r30)
	  lfs       f1, -0x7EBC(r2)
	  lfs       f0, 0xDC(r3)
	  lfs       f31, 0xC8(r3)
	  fmuls     f29, f1, f0
	  fmr       f1, f29
	  bl        0xBD9D8
	  frsp      f30, f1
	  fmr       f1, f29
	  bl        0xBDF34
	  lfs       f0, -0x7EBC(r2)
	  frsp      f29, f1
	  fmuls     f31, f0, f31
	  fmr       f1, f31
	  bl        0xBDF20
	  frsp      f0, f1
	  stfs      f29, 0x44(r1)
	  fmr       f1, f31
	  fmuls     f0, f30, f0
	  stfs      f0, 0x40(r1)
	  bl        0xBD9A0
	  frsp      f0, f1
	  fmuls     f0, f30, f0
	  stfs      f0, 0x48(r1)
	  b         .loc_0x11C

	.loc_0xF8:
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r5, r4, 0x33EC
	  addi      r4, r1, 0x10
	  bl        -0x460C
	  addi      r3, r1, 0x10
	  addi      r4, r1, 0x34
	  addi      r5, r1, 0x40
	  bl        0xD9590

	.loc_0x11C:
	  lbz       r0, 0x74(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  addi      r31, r1, 0x34
	  b         .loc_0x154

	.loc_0x130:
	  addi      r3, r31, 0x98
	  addi      r4, r1, 0x34
	  addi      r5, r1, 0x1C
	  bl        0xD926C
	  addi      r3, r31, 0x98
	  addi      r4, r1, 0x40
	  addi      r5, r1, 0x28
	  bl        0xD92B0
	  addi      r31, r1, 0x1C

	.loc_0x154:
	  lwz       r3, 0x114(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r30)
	  addi      r4, r31, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800119F8
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r5
	  mr        r5, r6
	  stw       r0, 0x14(r1)
	  mr        r6, r7
	  mr        r7, r8
	  lwz       r3, 0x114(r3)
	  bl        0x62C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80011A2C
 * Size:	000078
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_FACULTY(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x68

	.loc_0x18:
	  lwz       r0, 0x0(r5)
	  cmpwi     r0, 0x302
	  beq-      .loc_0x48
	  bge-      .loc_0x34
	  cmpwi     r0, 0x301
	  bge-      .loc_0x40
	  b         .loc_0x68

	.loc_0x34:
	  cmpwi     r0, 0x304
	  bge-      .loc_0x68
	  b         .loc_0x50

	.loc_0x40:
	  li        r4, 0x1
	  b         .loc_0x54

	.loc_0x48:
	  li        r4, 0x2
	  b         .loc_0x54

	.loc_0x50:
	  li        r4, 0x3

	.loc_0x54:
	  lwz       r3, 0x114(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80011AA4
 * Size:	000024
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x114(r3)
	  bl        0x650
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80011AC8
 * Size:	00000C
 */
void JStudio_JStage::TAdaptor_light::TVVOutput_direction_::operator()(float, JStudio::TAdaptor*) const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x118(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80011AD4
 * Size:	000060
 */
JStudio_JStage::TAdaptor_light::TVVOutput_direction_::~TVVOutput_direction_()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804A
	  li        r4, 0
	  subi      r0, r5, 0xA88
	  stw       r0, 0x0(r30)
	  bl        -0x4A9C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0x125A0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80011B34
 * Size:	000298
 */
// void __sinit_object - light_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x60(r1)
// 	mflr     r0
// 	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
// 	stw      r0, 0x64(r1)
// 	addi     r5, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha li r6, 0xa
// 	stw      r31, 0x5c(r1)
// 	li       r0, 1
// 	addi     r7, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l lis r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha stwu r5,
// 	saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l(r3) addi r4,
// 	r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l stw
// 	r5, 0x44(r1) lis      r5, lbl_804EFDA0@ha addi     r31, r5, lbl_804EFDA0@l
// 	stw      r7, 0x44(r1)
// 	addi     r5, r31, 0
// 	stw      r6, 0x48(r1)
// 	stw      r0, 0x4c(r1)
// 	stw      r7, 0(r3)
// 	stw      r6, 4(r3)
// 	stw      r0, 8(r3)
// 	bl       __register_global_object
// 	lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r1, 0x44 addi     r0, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r4, 0
// 	stw      r0, 0x44(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
// 	addi     r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l stw r5,
// 	0x38(r1) addi     r7, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r6, 0xb
// 	stwu     r5, 0xc(r3)
// 	li       r0, 1
// 	lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha addi r5,
// 	r31, 0xc stw      r7, 0x38(r1) addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l stw r6,
// 	0x3c(r1) stw      r0, 0x40(r1) stw      r7, 0(r3) stw      r6, 4(r3) stw r0,
// 	8(r3) bl       __register_global_object lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r1, 0x38 addi     r0, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r4, 0
// 	stw      r0, 0x38(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
// 	addi     r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l stw r5,
// 	0x2c(r1) addi     r7, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r6, 7
// 	stwu     r5, 0x18(r3)
// 	li       r0, 2
// 	lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha addi r5,
// 	r31, 0x18 stw      r7, 0x2c(r1) addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l stw r6,
// 	0x30(r1) stw      r0, 0x34(r1) stw      r7, 0(r3) stw      r6, 4(r3) stw r0,
// 	8(r3) bl       __register_global_object lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r1, 0x2c addi     r0, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r4, 0
// 	stw      r0, 0x2c(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
// 	addi     r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l stw r5,
// 	0x20(r1) addi     r7, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r6, 8
// 	stwu     r5, 0x24(r3)
// 	li       r0, 2
// 	lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha addi r5,
// 	r31, 0x24 stw      r7, 0x20(r1) addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l stw r6,
// 	0x24(r1) stw      r0, 0x28(r1) stw      r7, 0(r3) stw      r6, 4(r3) stw r0,
// 	8(r3) bl       __register_global_object lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r1, 0x20 addi     r0, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r4, 0
// 	stw      r0, 0x20(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
// 	addi     r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l stw r5,
// 	0x14(r1) addi     r7, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r6, 9
// 	stwu     r5, 0x30(r3)
// 	li       r0, 2
// 	lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha addi r5,
// 	r31, 0x30 stw      r7, 0x14(r1) addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l stw r6,
// 	0x18(r1) stw      r0, 0x1c(r1) stw      r7, 0(r3) stw      r6, 4(r3) stw r0,
// 	8(r3) bl       __register_global_object lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r1, 0x14 addi     r0, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r4, 0
// 	stw      r0, 0x14(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lis      r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
// 	addi     r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l stw r5,
// 	8(r1) addi     r7, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r6, -1
// 	stwu     r5, 0x3c(r3)
// 	li       r0, 0
// 	lis      r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha addi r5,
// 	r31, 0x3c stw      r7, 8(r1) addi     r4, r4,
// 	__dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l stw r6,
// 	0xc(r1) stw      r0, 0x10(r1) stw      r7, 0(r3) stw      r6, 4(r3) stw r0,
// 	8(r3) bl       __register_global_object lis      r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha addi r3,
// 	r1, 8 addi     r0, r4,
// 	__vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l li r4, 0
// 	stw      r0, 8(r1)
// 	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
// 	lwz      r0, 0x64(r1)
// 	lwz      r31, 0x5c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x60
// 	blr
// 	*/
// }
