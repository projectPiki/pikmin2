#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte "__sinit_object-sound_cpp"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_8049F910
    lbl_8049F910:
        .4byte 0x00000000
        .4byte 0x00000080
        .4byte 0x00000010
        .4byte 0x00000000
        .4byte 0x00000084
        .4byte 0x00000010
        .4byte 0x00000000
        .4byte 0x00000088
        .4byte 0x00000010
        .4byte 0x00000000
        .4byte 0x00000044
        .4byte 0x00000010
        .4byte 0x00000000
        .4byte 0x0000008C
        .4byte 0x00000010
    .global __vt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_
    __vt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_:
        .4byte 0
        .4byte 0
        .4byte
   __cl__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_CFfPQ27JStudio8TAdaptor
        .4byte __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv
    .global __vt__Q214JStudio_JAudio14TAdaptor_sound
    __vt__Q214JStudio_JAudio14TAdaptor_sound:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JAudio14TAdaptor_soundFv
        .4byte
   adaptor_do_prepare__Q214JStudio_JAudio14TAdaptor_soundFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte
   adaptor_do_end__Q214JStudio_JAudio14TAdaptor_soundFPCQ27JStudio7TObject
        .4byte
   adaptor_do_update__Q214JStudio_JAudio14TAdaptor_soundFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte
   adaptor_do_SOUND__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_BEGIN__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_BEGIN_FADE_IN__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_END__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_END_FADE_OUT__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_NODE__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_PARENT_ENABLE__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte
   adaptor_do_LOCATED__Q214JStudio_JAudio14TAdaptor_soundFQ37JStudio4data15TEOperationDataPCvUl
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound
    saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound:
        .skip 0x78

    .section .sbss # 0x80514D80 - 0x80516360
    .global init$1257
    init$1257:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805164B0
    lbl_805164B0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80014FD8
 * Size:	0000C8
 */
JStudio_JAudio::TAdaptor_sound::TAdaptor_sound(JAIBasic*, const JStage::TSystem*)
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
	  subi      r5, r7, 0xE34
	  li        r7, 0xA
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r8, r29
	  stw       r0, 0x0(r3)
	  addi      r3, r8, 0xC
	  li        r0, 0xA
	  stw       r3, 0x4(r29)
	  stw       r0, 0x8(r29)
	  addi      r0, r6, 0x5808
	  mr        r4, r0
	  li        r6, 0x14
	  stw       r5, 0x0(r29)
	  li        r5, 0
	  bl        0xAC7FC
	  lis       r3, 0x804A
	  li        r4, 0
	  subi      r3, r3, 0x6A4
	  li        r0, -0x1
	  stw       r3, 0x0(r29)
	  mr        r3, r29
	  stw       r30, 0xD4(r29)
	  stw       r4, 0xD8(r29)
	  stw       r0, 0xDC(r29)
	  stw       r4, 0xE0(r29)
	  stw       r4, 0xE4(r29)
	  stw       r4, 0xE8(r29)
	  stw       r31, 0xF8(r29)
	  stw       r4, 0xFC(r29)
	  stw       r0, 0x100(r29)
	  stb       r4, 0x104(r29)
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
 * Address:	800150A0
 * Size:	000084
 */
JStudio_JAudio::TAdaptor_sound::~TAdaptor_sound()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80015108
	lis      r3, __vt__Q214JStudio_JAudio14TAdaptor_sound@ha
	addi     r0, r3, __vt__Q214JStudio_JAudio14TAdaptor_sound@l
	stw      r0, 0(r30)
	lwz      r3, 0xd8(r30)
	cmplwi   r3, 0
	beq      lbl_800150EC
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800150EC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q27JStudio14TAdaptor_soundFv
	extsh.   r0, r31
	ble      lbl_80015108
	mr       r3, r30
	bl       __dl__FPv

lbl_80015108:
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
 * Address:	80015124
 * Size:	0000CC
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_prepare(const JStudio::TObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, init$1257@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80015188
	lis      r3, __float_nan@ha
	li       r6, 0
	lis      r5, aoData$1256@ha
	lfs      f1, __float_nan@l(r3)
	stwu     r6, aoData$1256@l(r5)
	li       r4, 1
	lfs      f0, lbl_805164B0@sda21(r2)
	li       r3, 2
	li       r0, -1
	stw      r4, 8(r5)
	stfs     f0, 4(r5)
	stfs     f0, 0xc(r5)
	stw      r3, 0x10(r5)
	stfs     f0, 0x14(r5)
	stw      r0, 0x18(r5)
	stfs     f1, 0x1c(r5)
	stb      r4, init$1257@sda21(r13)

lbl_80015188:
	lis      r4, aoData$1256@ha
	mr       r3, r31
	addi     r4, r4, aoData$1256@l
	bl
adaptor_setVariableValue_immediate__Q27JStudio8TAdaptorFPCQ37JStudio8TAdaptor27TSetVariableValue_immediate
	lis      r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@ha
	addi     r0, r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@l
	mr       r4, r0
	b        lbl_800151D0

lbl_800151A8:
	mulli    r0, r0, 0x14
	lwz      r3, 4(r31)
	cmplwi   r4, 0
	add      r3, r3, r0
	beq      lbl_800151C4
	mr       r0, r4
	b        lbl_800151C8

lbl_800151C4:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_800151C8:
	stw      r0, 0x10(r3)
	addi     r4, r4, 0x14

lbl_800151D0:
	lwz      r0, 4(r4)
	cmpwi    r0, -1
	bne      lbl_800151A8
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800151F0
 * Size:	000058
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_end(const JStudio::TObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0xC0000C00@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, 0xC0000C00@l
	lwz      r5, 0xdc(r3)
	and.     r0, r5, r0
	bne      lbl_80015238
	lwz      r0, 0xe0(r3)
	cmpwi    r0, 3
	bne      lbl_80015238
	lwz      r3, 0xd8(r3)
	cmplwi   r3, 0
	beq      lbl_80015238
	lwz      r12, 0x10(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_80015238:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80015248
 * Size:	00014C
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_update(const JStudio::TObject*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x64(r1)
	  addi      r5, r5, 0x3454
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  stw       r30, 0x58(r1)
	  lwz       r30, 0x14(r4)
	  addi      r4, r1, 0x14
	  bl        -0x7F44
	  lbz       r0, 0x104(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lbz       r0, 0x74(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r0, r1, 0x14
	  b         .loc_0x60

	.loc_0x4C:
	  addi      r3, r30, 0x98
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD5938
	  addi      r0, r1, 0x8

	.loc_0x60:
	  mr        r4, r0
	  b         .loc_0xB4

	.loc_0x68:
	  lwz       r5, 0xFC(r31)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x100(r31)
	  addi      r4, r1, 0x14
	  bl        -0x345C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C
	  li        r0, 0
	  b         .loc_0xA8

	.loc_0x8C:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xA8:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x134
	  addi      r4, r1, 0x8

	.loc_0xB4:
	  lfs       f0, 0x0(r4)
	  lis       r3, 0xC000
	  addi      r0, r3, 0xC00
	  stfs      f0, 0xEC(r31)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0xF0(r31)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0xF4(r31)
	  lwz       r3, 0xDC(r31)
	  and.      r0, r3, r0
	  bne-      .loc_0x134
	  lwz       r0, 0xE0(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x100
	  lwz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x100
	  li        r0, 0
	  stw       r0, 0xE0(r31)

	.loc_0x100:
	  lwz       r0, 0xE0(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x134
	  lwz       r3, 0xD4(r31)
	  addi      r5, r31, 0xD8
	  lwz       r4, 0xDC(r31)
	  li        r8, 0
	  lwz       r6, 0xE8(r31)
	  li        r9, 0x4
	  lwz       r7, 0xE4(r31)
	  bl        0x4FC
	  li        r0, 0
	  stw       r0, 0xE4(r31)

	.loc_0x134:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015394
 * Size:	0000A4
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_SOUND(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x19
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x20
	  b         .loc_0x90

	.loc_0x20:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0xDC(r31)
	  lwz       r0, 0xDC(r31)
	  rlwinm.   r0,r0,0,0,1
	  beq-      .loc_0x90
	  lwz       r3, 0xD8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0xE0(r31)

	.loc_0x5C:
	  lwz       r3, 0xD4(r31)
	  addi      r5, r31, 0xD8
	  lwz       r4, 0xDC(r31)
	  li        r7, 0
	  lwz       r6, 0xE8(r31)
	  li        r8, 0
	  li        r9, 0x4
	  bl        0x414
	  lwz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  li        r0, 0x1
	  stw       r0, 0xE0(r31)

	.loc_0x90:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015438
 * Size:	000030
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x1
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x20

	.loc_0x18:
	  li        r4, 0
	  bl        0x244

	.loc_0x20:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015468
 * Size:	000048
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x20
	  b         .loc_0x34

	.loc_0x20:
	  lfs       f1, 0x0(r5)
	  bl        0xAC6C0
	  mr        r4, r3
	  mr        r3, r31
	  bl        0x200

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800154B0
 * Size:	000030
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_END(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x1
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x20

	.loc_0x18:
	  li        r4, 0
	  bl        0x2A4

	.loc_0x20:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800154E0
 * Size:	000048
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x20
	  b         .loc_0x34

	.loc_0x20:
	  lfs       f1, 0x0(r5)
	  bl        0xAC648
	  mr        r4, r3
	  mr        r3, r31
	  bl        0x260

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015528
 * Size:	000068
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmpwi     r4, 0x18
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  beq-      .loc_0x20
	  b         .loc_0x54

	.loc_0x20:
	  li        r0, 0
	  addi      r4, r1, 0x8
	  stw       r0, 0xFC(r31)
	  li        r6, 0
	  lwz       r3, 0xF8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x54
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xFC(r31)

	.loc_0x54:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015590
 * Size:	000080
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x19
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x64
	  bge-      .loc_0x6C
	  cmpwi     r4, 0x18
	  bge-      .loc_0x2C
	  b         .loc_0x6C

	.loc_0x2C:
	  lwz       r3, 0xFC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x100(r31)
	  lwz       r3, 0x100(r31)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x6C
	  b         .loc_0x6C

	.loc_0x64:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x100(r31)

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015610
 * Size:	000020
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bnelr-
	  lwz       r4, 0x0(r5)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x104(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015630
 * Size:	000028
 */
void JStudio_JAudio::TAdaptor_sound::adaptor_do_LOCATED(JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bnelr-
	  lwz       r4, 0x0(r5)
	  li        r0, 0
	  stw       r0, 0xE8(r3)
	  cmplwi    r4, 0
	  beqlr-
	  addi      r0, r3, 0xEC
	  stw       r0, 0xE8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015658
 * Size:	000040
 */
void JStudio_JAudio::TAdaptor_sound::TVVOSetValue_::operator()(float, JStudio::TAdaptor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xD8(r4)
	  mr        r4, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  mr        r3, r0
	  addi      r12, r4, 0x8
	  li        r4, 0
	  bl        0xAC4A4
	  nop

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015698
 * Size:	0000D8
 */
void JStudio_JAudio::TAdaptor_sound::beginSound_fadeIn_(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r31, 0xe4(r3)
	lwz      r0, 0xdc(r3)
	rlwinm.  r0, r0, 0, 0, 1
	beq      lbl_800156EC
	lwz      r3, 0xd8(r30)
	cmplwi   r3, 0
	beq      lbl_80015758
	lwz      r12, 0x10(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0xe0(r30)
	b        lbl_80015758

lbl_800156EC:
	lwz      r3, 0xd8(r30)
	cmplwi   r3, 0
	beq      lbl_80015714
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0xe0(r30)

lbl_80015714:
	lis      r3, 0xC0000C00@ha
	lwz      r4, 0xdc(r30)
	addi     r0, r3, 0xC0000C00@l
	and.     r0, r4, r0
	beq      lbl_80015750
	lwz      r3, 0xd4(r30)
	mr       r7, r31
	lwz      r6, 0xe8(r30)
	addi     r5, r30, 0xd8
	li       r8, 0
	li       r9, 4
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r0, 0xd8(r30)
	cmplwi   r0, 0
	beq      lbl_80015758

lbl_80015750:
	li       r0, 2
	stw      r0, 0xe0(r30)

lbl_80015758:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80015770
 * Size:	000050
 */
void JStudio_JAudio::TAdaptor_sound::endSound_fadeOut_(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xe4(r3)
	lwz      r3, 0xd8(r3)
	cmplwi   r3, 0
	beq      lbl_800157AC
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	stw      r0, 0xe0(r31)

lbl_800157AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800157C0
 * Size:	000060
 */
JStudio_JAudio::TAdaptor_sound::TVVOSetValue_::~TVVOSetValue_()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80015804
	lis      r5, __vt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_@ha
	li       r4, 0
	addi     r0, r5, __vt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_@l
	stw      r0, 0(r30)
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	extsh.   r0, r31
	ble      lbl_80015804
	mr       r3, r30
	bl       __dl__FPv

lbl_80015804:
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
 * Address:	80015820
 * Size:	00004C
 */
void JAIBasic::prepareSoundVecT<JAISound>(unsigned long, JAISound**, Vec*, unsigned long, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  bl        .loc_0x4C
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r12, 0x10(r3)
	  li        r4, 0x1
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x4C:
	*/
}

/*
 * --INFO--
 * Address:	8001586C
 * Size:	000060
 */
void JAIBasic::startSoundVecT<JAISound>(unsigned long, JAISound**, Vec*, unsigned long, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r6, 0
	  stw       r0, 0x24(r1)
	  stw       r6, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r8, 0x14(r1)
	  beq-      .loc_0x30
	  addis     r0, r6, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x3C

	.loc_0x30:
	  li        r0, 0x1
	  stb       r0, 0x18(r1)
	  b         .loc_0x44

	.loc_0x3C:
	  li        r0, 0
	  stb       r0, 0x18(r1)

	.loc_0x44:
	  mr        r8, r9
	  addi      r6, r1, 0x8
	  bl        .loc_0x60
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	800158CC
 * Size:	000068
 */
void JAIBasic::startSoundActorT<JAISound>(unsigned long, JAISound**, JAInter::Actor*, unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  mr        r26, r3
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r31, r8
	  mr        r3, r27
	  bl        0xA1C20
	  mr.       r9, r3
	  beq-      .loc_0x54
	  mr        r3, r26
	  mr        r4, r27
	  mr        r5, r28
	  mr        r6, r29
	  mr        r7, r30
	  mr        r8, r31
	  bl        0x96E60

	.loc_0x54:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80015934
 * Size:	000310
 */
void __sinit_object - sound_cpp(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	lis      r3, lbl_8049F910@ha
	stw      r0, 0x94(r1)
	addi     r5, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	lis      r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@ha
	lis      r9, aoData$1256@ha
	stw      r31, 0x8c(r1)
	addi     r31, r3, lbl_8049F910@l
	lis      r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@ha
	li       r8, 5
	stw      r30, 0x88(r1)
	addi     r30, r9, aoData$1256@l
	addi     r9, r31, 0x3c
	addi     r4, r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@l
	stwu     r5, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@l(r3)
	lwz      r7, 0(r31)
	lwz      r6, 4(r31)
	lwz      r0, 8(r31)
	stw      r5, 0x6c(r1)
	addi     r5, r30, 0x20
	stw      r9, 0x6c(r1)
	stw      r8, 0x70(r1)
	stw      r7, 0x74(r1)
	stw      r6, 0x78(r1)
	stw      r0, 0x7c(r1)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0x10(r3)
	bl       __register_global_object
	addi     r0, r31, 0x3c
	addi     r3, r1, 0x6c
	stw      r0, 0x6c(r1)
	li       r4, 0
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	lis      r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@ha
	addi     r5, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	lwz      r7, 0xc(r31)
	addi     r3, r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@l
	lwz      r6, 0x10(r31)
	stwu     r5, 0x14(r3)
	li       r8, 6
	lwz      r0, 0x14(r31)
	addi     r9, r31, 0x3c
	stw      r5, 0x58(r1)
	lis      r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@ha
	addi     r4, r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@l
	addi     r5, r30, 0x2c
	stw      r9, 0x58(r1)
	stw      r8, 0x5c(r1)
	stw      r7, 0x60(r1)
	stw      r6, 0x64(r1)
	stw      r0, 0x68(r1)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0x10(r3)
	bl       __register_global_object
	addi     r0, r31, 0x3c
	addi     r3, r1, 0x58
	stw      r0, 0x58(r1)
	li       r4, 0
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	lis      r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@ha
	addi     r5, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	lwz      r7, 0x18(r31)
	addi     r3, r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@l
	lwz      r6, 0x1c(r31)
	stwu     r5, 0x28(r3)
	li       r8, 7
	lwz      r0, 0x20(r31)
	addi     r9, r31, 0x3c
	stw      r5, 0x44(r1)
	lis      r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@ha
	addi     r4, r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@l
	addi     r5, r30, 0x38
	stw      r9, 0x44(r1)
	stw      r8, 0x48(r1)
	stw      r7, 0x4c(r1)
	stw      r6, 0x50(r1)
	stw      r0, 0x54(r1)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0x10(r3)
	bl       __register_global_object
	addi     r0, r31, 0x3c
	addi     r3, r1, 0x44
	stw      r0, 0x44(r1)
	li       r4, 0
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	lis      r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@ha
	addi     r5, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	lwz      r7, 0x24(r31)
	addi     r3, r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@l
	lwz      r6, 0x28(r31)
	stwu     r5, 0x3c(r3)
	li       r8, 8
	lwz      r0, 0x2c(r31)
	addi     r9, r31, 0x3c
	stw      r5, 0x30(r1)
	lis      r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@ha
	addi     r4, r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@l
	addi     r5, r30, 0x44
	stw      r9, 0x30(r1)
	stw      r8, 0x34(r1)
	stw      r7, 0x38(r1)
	stw      r6, 0x3c(r1)
	stw      r0, 0x40(r1)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0x10(r3)
	bl       __register_global_object
	addi     r0, r31, 0x3c
	addi     r3, r1, 0x30
	stw      r0, 0x30(r1)
	li       r4, 0
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	lis      r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@ha
	addi     r5, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	lwz      r7, 0x30(r31)
	addi     r3, r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@l
	lwz      r6, 0x34(r31)
	stwu     r5, 0x50(r3)
	li       r8, 9
	lwz      r0, 0x38(r31)
	addi     r9, r31, 0x3c
	stw      r5, 0x1c(r1)
	lis      r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@ha
	addi     r4, r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@l
	addi     r5, r30, 0x50
	stw      r9, 0x1c(r1)
	stw      r8, 0x20(r1)
	stw      r7, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r0, 0x2c(r1)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0x10(r3)
	bl       __register_global_object
	addi     r0, r31, 0x3c
	addi     r3, r1, 0x1c
	stw      r0, 0x1c(r1)
	li       r4, 0
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
	li       r9, -1
	addi     r11, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
	lis      r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@ha
	stw      r11, 8(r1)
	addi     r10, r31, 0x3c
	lis      r3, __ptmf_null@ha
	addi     r4, r4, __dt__Q314JStudio_JAudio14TAdaptor_sound13TVVOSetValue_Fv@l
	stw      r10, 8(r1)
	addi     r8, r3, __ptmf_null@l
	lis      r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@ha
	lwz      r7, 0(r8)
	stw      r9, 0xc(r1)
	addi     r3, r3, saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound@l
	addi     r5, r30, 0x5c
	lwz      r6, 4(r8)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	lwz      r0, 8(r8)
	stwu     r11, 0x64(r3)
	stw      r0, 0x18(r1)
	stw      r10, 0(r3)
	stw      r9, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0x10(r3)
	bl       __register_global_object
	addi     r0, r31, 0x3c
	addi     r3, r1, 8
	stw      r0, 8(r1)
	li       r4, 0
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}
