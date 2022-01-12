#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte "__sinit_object-fog_cpp"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_8049F820
    lbl_8049F820:
        .4byte 0x00000000
        .4byte 0x00000048
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000044
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000050
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000004C
        .4byte 0x00000000
    .global __vt__Q214JStudio_JStage12TAdaptor_fog
    __vt__Q214JStudio_JStage12TAdaptor_fog:
        .4byte 0
        .4byte 0
        .4byte __dt__Q214JStudio_JStage12TAdaptor_fogFv
        .4byte
   adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
        .4byte
   adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject
        .4byte
   adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObject .4byte
   adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCQ27JStudio7TObjectPCvUlPCvUl
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global
   "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"
    "__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>":
        .4byte 0
        .4byte 0
        .4byte
   "__cl__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global saoVVOutput___Q214JStudio_JStage12TAdaptor_fog
    saoVVOutput___Q214JStudio_JStage12TAdaptor_fog:
        .skip 0x60
*/

/*
 * --INFO--
 * Address:	80014134
 * Size:	0000A0
 */
JStudio_JStage::TAdaptor_fog::TAdaptor_fog(const JStage::TSystem*, JStage::TFog*)
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
	  subi      r5, r7, 0xCE4
	  li        r7, 0x6
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r8, r29
	  stw       r0, 0x0(r3)
	  addi      r3, r8, 0xC
	  li        r0, 0x6
	  stw       r3, 0x4(r29)
	  stw       r0, 0x8(r29)
	  addi      r0, r6, 0x5808
	  mr        r4, r0
	  li        r6, 0x14
	  stw       r5, 0x0(r29)
	  li        r5, 0
	  bl        0xAD6A0
	  lis       r4, 0x804A
	  mr        r3, r29
	  subi      r0, r4, 0x7B0
	  stw       r0, 0x0(r29)
	  stw       r30, 0x84(r29)
	  stw       r31, 0x88(r29)
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
 * Address:	800141D4
 * Size:	000078
 */
JStudio_JStage::TAdaptor_fog::~TAdaptor_fog()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80014230
	lis      r5, __vt__Q214JStudio_JStage12TAdaptor_fog@ha
	li       r4, 0
	addi     r0, r5, __vt__Q214JStudio_JStage12TAdaptor_fog@l
	stw      r0, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q27JStudio12TAdaptor_fogFv
	extsh.   r0, r31
	ble      lbl_80014230
	mr       r3, r30
	bl       __dl__FPv

lbl_80014230:
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
 * Address:	8001424C
 * Size:	000048
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_prepare(const JStudio::TObject*)
{
	/*
	lis      r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
	addi     r0, r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
	mr       r5, r0
	b        lbl_80014284

lbl_8001425C:
	mulli    r0, r0, 0x14
	lwz      r4, 4(r3)
	cmplwi   r5, 0
	add      r4, r4, r0
	beq      lbl_80014278
	mr       r0, r5
	b        lbl_8001427C

lbl_80014278:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8001427C:
	stw      r0, 0x10(r4)
	addi     r5, r5, 0x20

lbl_80014284:
	lwz      r0, 4(r5)
	cmpwi    r0, -1
	bne      lbl_8001425C
	blr
	*/
}

/*
 * --INFO--
 * Address:	80014294
 * Size:	0000F4
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_begin(const JStudio::TObject*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r30, 0x88(r3)
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r30)
	ori      r4, r3, 1
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lis      r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@ha
	stw      r3, 8(r1)
	addi     r4, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@l
	mr       r3, r28
	addi     r5, r1, 8
	bl adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor lis
r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha lis      r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@ha
	addi     r0, r4, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
	li       r31, 0
	mr       r29, r0
	addi     r30, r3,
update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@l b
lbl_8001435C

lbl_8001432C:
	lwz      r3, 0x88(r28)
	addi     r12, r29, 0x14
	bl       __ptmf_scall
	nop
	lwz      r0, 4(r29)
	addi     r29, r29, 0x20
	lwz      r3, 4(r28)
	mulli    r0, r0, 0x14
	add      r3, r3, r0
	stw      r30, 8(r3)
	stw      r31, 4(r3)
	stfs     f1, 0xc(r3)

lbl_8001435C:
	lwz      r0, 4(r29)
	cmpwi    r0, -1
	bne      lbl_8001432C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80014388
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_end(const JStudio::TObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x88(r3)
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
 * Address:	800143DC
 * Size:	00006C
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_update(const JStudio::TObject*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8047
	  stw       r0, 0x24(r1)
	  addi      r5, r4, 0x33B4
	  addi      r4, r1, 0xC
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x6FB8
	  lwz       r0, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x88(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80014448
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long)
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
	  lwz       r3, 0x88(r3)
	  bl        -0x2424
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001447C
 * Size:	000228
 */
void __sinit_object - fog_cpp(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lis      r3, lbl_8049F820@ha
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	stw      r0, 0x84(r1)
	lis      r5,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
	lis      r12, lbl_804EFE68@ha
	li       r11, 4
	stw      r31, 0x7c(r1)
	addi     r31, r3, lbl_8049F820@l
	lis      r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
	stw      r30, 0x78(r1)
	addi     r30, r12, lbl_804EFE68@l
	addi     r12, r5,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
	stw      r29, 0x74(r1)
	addi     r29, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	lis      r4,
	"__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@ha
	addi     r5, r30, 0
	stwu     r29, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l(r3)
	addi     r4, r4,
	"__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@l
	lwz      r10, 0(r31)
	lwz      r9, 4(r31)
	lwz      r8, 8(r31)
	lwz      r7, 0xc(r31)
	lwz      r6, 0x10(r31)
	lwz      r0, 0x14(r31)
	stw      r29, 0x48(r1)
	stw      r12, 0x48(r1)
	stw      r11, 0x4c(r1)
	stw      r10, 0x50(r1)
	stw      r9, 0x54(r1)
	stw      r8, 0x58(r1)
	stw      r7, 0x5c(r1)
	stw      r6, 0x60(r1)
	stw      r0, 0x64(r1)
	stw      r12, 0(r3)
	stw      r11, 4(r3)
	stw      r10, 8(r3)
	stw      r9, 0xc(r3)
	stw      r8, 0x10(r3)
	stw      r7, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r0, 0x1c(r3)
	bl       __register_global_object
	lis      r4,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
	addi     r3, r1, 0x48
	addi     r0, r4,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
	li       r4, 0
	stw      r0, 0x48(r1)
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	lis      r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
	addi     r29, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	lwz      r10, 0x18(r31)
	addi     r3, r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
	lwz      r9, 0x1c(r31)
	stwu     r29, 0x20(r3)
	li       r11, 5
	lwz      r8, 0x20(r31)
	lis      r5,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
	lwz      r7, 0x24(r31)
	addi     r12, r5,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
	lwz      r6, 0x28(r31)
	lis      r4,
	"__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@ha
	lwz      r0, 0x2c(r31)
	addi     r4, r4,
	"__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@l
	stw      r29, 0x28(r1)
	addi     r5, r30, 0xc
	stw      r12, 0x28(r1)
	stw      r11, 0x2c(r1)
	stw      r10, 0x30(r1)
	stw      r9, 0x34(r1)
	stw      r8, 0x38(r1)
	stw      r7, 0x3c(r1)
	stw      r6, 0x40(r1)
	stw      r0, 0x44(r1)
	stw      r12, 0(r3)
	stw      r11, 4(r3)
	stw      r10, 8(r3)
	stw      r9, 0xc(r3)
	stw      r8, 0x10(r3)
	stw      r7, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r0, 0x1c(r3)
	bl       __register_global_object
	lis      r4,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
	addi     r3, r1, 0x28
	addi     r0, r4,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
	li       r4, 0
	stw      r0, 0x28(r1)
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
	lis      r3,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
	addi     r11, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
	li       r9, -1
	stw      r11, 8(r1)
	addi     r10, r3,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
	lis      r4, __ptmf_null@ha
	lis      r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@ha
	stw      r10, 8(r1)
	addi     r8, r4, __ptmf_null@l
	lis      r4,
	"__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@ha
	lwz      r7, 0(r8)
	stw      r9, 0xc(r1)
	addi     r3, r3, saoVVOutput___Q214JStudio_JStage12TAdaptor_fog@l
	addi     r4, r4,
	"__dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv"@l
	addi     r5, r30, 0x18
	lwz      r6, 4(r8)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	lwz      r0, 8(r8)
	stwu     r11, 0x40(r3)
	stw      r0, 0x18(r1)
	stw      r7, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r10, 0(r3)
	stw      r9, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r7, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r0, 0x1c(r3)
	bl       __register_global_object
	lis      r4,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@ha
	addi     r3, r1, 8
	addi     r0, r4,
	"__vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>"@l
	li       r4, 0
	stw      r0, 8(r1)
	bl       __dt__Q37JStudio14TVariableValue7TOutputFv
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	800146A4
 * Size:	000060
 */
void JStudio_JStage::TVariableValueOutput_object_<JStudio_JStage::TAdaptor_fog, JStage::TFog>::~TVariableValueOutput_object_()
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
	  subi      r0, r5, 0x770
	  stw       r0, 0x0(r30)
	  bl        -0x766C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0xF9D0

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
 * Address:	80014704
 * Size:	000030
 */
void JStudio_JStage::TVariableValueOutput_object_<JStudio_JStage::TAdaptor_fog, JStage::TFog>::operator()(float, JStudio::TAdaptor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x88(r4)
	  bl        0xAD408
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
