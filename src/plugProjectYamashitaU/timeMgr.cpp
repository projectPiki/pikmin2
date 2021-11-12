#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047BD48
    lbl_8047BD48:
        .4byte 0x835E8343
        .4byte 0x8380837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
        .4byte 0x54696D65
        .4byte 0x4D677250
        .4byte 0x61726D73
        .4byte 0x00000000
        .4byte 0x8351815B
        .4byte 0x83808A4A
        .4byte 0x8E6E8E9E
        .4byte 0x8D8F0000
        .4byte 0x8351815B
        .4byte 0x83808F49
        .4byte 0x97B98E9E
        .4byte 0x8D8F0000
        .4byte 0x3193FA82
        .4byte 0xCC8E9E8A
        .4byte 0xD43C9562
        .4byte 0x816A0000
        .4byte 0x92A98A4A
        .4byte 0x8E6E8E9E
        .4byte 0x8D8F0000
        .4byte 0x92A99286
        .4byte 0x8AD48E9E
        .4byte 0x8D8F0000
        .4byte 0x92A98F49
        .4byte 0x97B98E9E
        .4byte 0x8D8F0000
        .4byte 0x975B95FB
        .4byte 0x8A4A8E6E
        .4byte 0x8E9E8D8F
        .4byte 0x00000000
        .4byte 0x975B95FB
        .4byte 0x92868AD4
        .4byte 0x8A4A8E6E
        .4byte 0x8E9E8D8F
        .4byte 0x00000000
        .4byte 0x975B95FB
        .4byte 0x92868AD4
        .4byte 0x8F4997B9
        .4byte 0x8E9E8D8F
        .4byte 0x00000000
        .4byte 0x975B95FB
        .4byte 0x8F4997B9
        .4byte 0x8E9E8D8F
        .4byte 0x00000000
        .4byte 0x96E98C78
        .4byte 0x8D908E9E
        .4byte 0x8D8F0000
        .4byte 0x834A8345
        .4byte 0x83938367
        .4byte 0x835F8345
        .4byte 0x83930000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game7TimeMgr
    __vt__Q24Game7TimeMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game7TimeMgrFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517F50
    lbl_80517F50:
        .float 1.0
    .global lbl_80517F54
    lbl_80517F54:
        .4byte 0x40E00000
    .global lbl_80517F58
    lbl_80517F58:
        .4byte 0x00000000
    .global lbl_80517F5C
    lbl_80517F5C:
        .4byte 0x41C00000
    .global lbl_80517F60
    lbl_80517F60:
        .4byte 0x41980000
    .global lbl_80517F64
    lbl_80517F64:
        .4byte 0x44C30000
    .global lbl_80517F68
    lbl_80517F68:
        .4byte 0x45610000
    .global lbl_80517F6C
    lbl_80517F6C:
        .4byte 0x40A80000
    .global lbl_80517F70
    lbl_80517F70:
        .4byte 0x41000000
    .global lbl_80517F74
    lbl_80517F74:
        .4byte 0x41700000
    .global lbl_80517F78
    lbl_80517F78:
        .4byte 0x41780000
    .global lbl_80517F7C
    lbl_80517F7C:
        .4byte 0x41940000
    .global lbl_80517F80
    lbl_80517F80:
        .4byte 0x41900000
    .global lbl_80517F84
    lbl_80517F84:
        .float 0.5
*/

namespace Game {

/*
 * --INFO--
 * Address:	80126C00
 * Size:	000090
 */
TimeMgr::TimeMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__5CNode@l
	lis      r4, lbl_8047BD48@ha
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r4, r4, lbl_8047BD48@l
	stw      r0, 0(r3)
	lis      r3, __vt__Q24Game7TimeMgr@ha
	addi     r0, r3, __vt__Q24Game7TimeMgr@l
	stw      r5, 0x10(r31)
	addi     r3, r31, 0x18
	stw      r5, 0xc(r31)
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stw      r4, 0x14(r31)
	stw      r0, 0(r31)
	bl       __ct__Q24Game12TimeMgrParmsFv
	lfs      f0, lbl_80517F50@sda21(r2)
	li       r0, 0
	mr       r3, r31
	stfs     f0, 0x21c(r31)
	stb      r0, 0x240(r31)
	stb      r0, 0x241(r31)
	stb      r0, 0x242(r31)
	stb      r0, 0x243(r31)
	bl       init__Q24Game7TimeMgrFv
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
 * Address:	80126C90
 * Size:	000034
 */
TimeMgrParms::TimeMgrParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game12TimeMgrParms5ParmsFv
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
 * Address:	80126CC4
 * Size:	00032C
 */
TimeMgrParms::Parms::Parms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_8047BD48@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047BD48@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80126CF4
	addi     r0, r30, 0x1ec
	stw      r0, 0(r30)

lbl_80126CF4:
	li       r0, 0
	lis      r5, 0x66703030@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0x14
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x66703030@l
	addi     r6, r31, 0x24
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F54@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x66703031@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0x34
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F60@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x66703032@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0x44
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F64@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x66703033@l
	lfs      f0, lbl_80517F68@sda21(r2)
	addi     r6, r31, 0x54
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F6C@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x66703034@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0x60
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F54@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f0, 0xc4(r30)
	addi     r5, r5, 0x66703035@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0x6c
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703036@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F70@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x66703036@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0x78
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F74@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f0, 0x114(r30)
	addi     r5, r5, 0x66703037@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0x88
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703131@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F78@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f0, 0x13c(r30)
	addi     r5, r5, 0x66703131@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0x9c
	stfs     f1, 0x144(r30)
	stfs     f0, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F7C@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x66703038@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0xb0
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F60@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x19c
	stfs     f0, 0x18c(r30)
	addi     r5, r5, 0x66703039@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0xc0
	stfs     f1, 0x194(r30)
	stfs     f0, 0x198(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703130@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80517F80@sda21(r2)
	stw      r0, 0x19c(r30)
	mr       r4, r30
	lfs      f1, lbl_80517F58@sda21(r2)
	addi     r3, r30, 0x1c4
	stfs     f0, 0x1b4(r30)
	addi     r5, r5, 0x66703130@l
	lfs      f0, lbl_80517F5C@sda21(r2)
	addi     r6, r31, 0xcc
	stfs     f1, 0x1bc(r30)
	stfs     f0, 0x1c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_80517F7C@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80517F58@sda21(r2)
	stw      r0, 0x1c4(r30)
	mr       r3, r30
	lfs      f0, lbl_80517F5C@sda21(r2)
	stfs     f2, 0x1dc(r30)
	stfs     f1, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
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
 * Address:	80126FF0
 * Size:	0000B0
 */
void TimeMgr::init()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_80517F5C@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	lfs      f1, 0x1a4(r3)
	lfs      f0, 0xb4(r3)
	fsubs    f1, f2, f1
	fadds    f0, f1, f0
	stfs     f0, 0x220(r3)
	lfs      f1, 0xdc(r3)
	lfs      f0, 0xb4(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x224(r3)
	lfs      f1, 0x104(r3)
	lfs      f0, 0xdc(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x228(r3)
	lfs      f1, 0x12c(r3)
	lfs      f0, 0x104(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x22c(r3)
	lfs      f1, 0x154(r3)
	lfs      f0, 0x12c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x230(r3)
	lfs      f1, 0x1a4(r3)
	lfs      f0, 0x17c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x234(r3)
	lfs      f1, 0x64(r3)
	lfs      f0, 0x3c(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x238(r3)
	lfs      f0, 0x238(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x23c(r3)
	stw      r0, 0x218(r3)
	lfs      f1, 0x3c(r3)
	bl       setTime__Q24Game7TimeMgrFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801270A0
 * Size:	00003C
 */
void TimeMgr::setTime(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stfs     f1, 0x20c(r3)
	lfs      f1, lbl_80517F5C@sda21(r2)
	lfs      f2, 0x20c(r3)
	lfs      f0, 0x8c(r3)
	fdivs    f1, f2, f1
	fmuls    f0, f1, f0
	stfs     f0, 0x208(r3)
	bl       updateSlot__Q24Game7TimeMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801270DC
 * Size:	000040
 */
void TimeMgr::setStartTime()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80517F5C@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, 0x3c(r3)
	stfs     f0, 0x20c(r3)
	lfs      f2, 0x20c(r3)
	lfs      f0, 0x8c(r3)
	fdivs    f1, f2, f1
	fmuls    f0, f1, f0
	stfs     f0, 0x208(r3)
	bl       updateSlot__Q24Game7TimeMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012711C
 * Size:	000040
 */
void TimeMgr::setEndTime()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80517F5C@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, 0x64(r3)
	stfs     f0, 0x20c(r3)
	lfs      f2, 0x20c(r3)
	lfs      f0, 0x8c(r3)
	fdivs    f1, f2, f1
	fmuls    f0, f1, f0
	stfs     f0, 0x208(r3)
	bl       updateSlot__Q24Game7TimeMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012715C
 * Size:	000168
 */
void TimeMgr::updateSlot()
{
	/*
	lfs      f1, 0x20c(r3)
	lfs      f0, 0xb4(r3)
	fcmpo    cr0, f1, f0
	blt      lbl_8012717C
	lfs      f2, 0x1a4(r3)
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_801271B8

lbl_8012717C:
	li       r0, 0
	stw      r0, 0x210(r3)
	lfs      f1, 0x20c(r3)
	lfs      f0, 0xb4(r3)
	fmr      f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801271A0
	lfs      f0, lbl_80517F5C@sda21(r2)
	fadds    f2, f1, f0

lbl_801271A0:
	lfs      f1, 0x1a4(r3)
	lfs      f0, 0x220(r3)
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x214(r3)
	blr

lbl_801271B8:
	lfs      f0, 0x104(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8012721C
	li       r0, 1
	stw      r0, 0x210(r3)
	lfs      f1, 0x20c(r3)
	lfs      f0, 0xdc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801271FC
	lfs      f0, 0xb4(r3)
	lfs      f2, lbl_80517F84@sda21(r2)
	fsubs    f1, f1, f0
	lfs      f0, 0x224(r3)
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x214(r3)
	blr

lbl_801271FC:
	fsubs    f1, f1, f0
	lfs      f2, lbl_80517F84@sda21(r2)
	lfs      f0, 0x228(r3)
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x214(r3)
	blr

lbl_8012721C:
	lfs      f0, 0x12c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8012724C
	li       r0, 2
	stw      r0, 0x210(r3)
	lfs      f2, 0x20c(r3)
	lfs      f1, 0x104(r3)
	lfs      f0, 0x22c(r3)
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x214(r3)
	blr

lbl_8012724C:
	fcmpo    cr0, f1, f2
	bgelr
	li       r0, 3
	stw      r0, 0x210(r3)
	lfs      f1, 0x20c(r3)
	lfs      f0, 0x154(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8012728C
	lfs      f0, 0x12c(r3)
	lfs      f2, lbl_80517F84@sda21(r2)
	fsubs    f1, f1, f0
	lfs      f0, 0x230(r3)
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x214(r3)
	blr

lbl_8012728C:
	lfs      f0, 0x17c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801272A4
	lfs      f0, lbl_80517F84@sda21(r2)
	stfs     f0, 0x214(r3)
	blr

lbl_801272A4:
	fsubs    f1, f1, f0
	lfs      f2, lbl_80517F84@sda21(r2)
	lfs      f0, 0x234(r3)
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801272C4
 * Size:	000060
 */
void TimeMgr::getSunGaugeRatio()
{
	/*
	lfs      f1, 0x20c(r3)
	lfs      f2, 0x3c(r3)
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_801272F4
	lfs      f0, 0x64(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801272F4
	fsubs    f1, f1, f2
	lfs      f0, 0x238(r3)
	fdivs    f1, f1, f0
	blr

lbl_801272F4:
	fmr      f3, f1
	fcmpo    cr0, f1, f2
	bge      lbl_80127308
	lfs      f0, lbl_80517F5C@sda21(r2)
	fadds    f3, f1, f0

lbl_80127308:
	lfs      f1, 0x64(r3)
	lfs      f0, 0x23c(r3)
	fsubs    f1, f3, f1
	lfs      f2, lbl_80517F50@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f1, f2, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127324
 * Size:	000074
 */
void TimeMgr::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x240(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80127388
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x21c(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, 0x208(r3)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x208(r3)
	lfs      f0, 0x208(r3)
	lfs      f1, 0x8c(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_8012736C
	fsubs    f0, f0, f1
	stfs     f0, 0x208(r3)

lbl_8012736C:
	lfs      f1, 0x208(r3)
	lfs      f0, 0x8c(r3)
	lfs      f2, lbl_80517F5C@sda21(r2)
	fdivs    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x20c(r3)
	bl       updateSlot__Q24Game7TimeMgrFv

lbl_80127388:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127398
 * Size:	000018
 */
void TimeMgr::isDayOver()
{
	/*
	lfs      f1, 0x20c(r3)
	lfs      f0, 0x64(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	801273B0
 * Size:	000030
 */
void TimeMgr::isDayTime()
{
	/*
	lfs      f1, 0x20c(r3)
	li       r0, 0
	lfs      f0, 0x3c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_801273D8
	lfs      f0, 0x64(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_801273D8
	li       r0, 1

lbl_801273D8:
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801273E0
 * Size:	000020
 */
void TimeMgr::getRealDayTime()
{
	/*
	lfs      f2, 0x64(r3)
	lfs      f1, 0x3c(r3)
	lfs      f0, lbl_80517F5C@sda21(r2)
	fsubs    f1, f2, f1
	lfs      f2, 0x8c(r3)
	fdivs    f0, f1, f0
	fmuls    f1, f2, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127400
 * Size:	000150
 */
void TimeMgr::loadSettingFile(char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r8, 2
	li       r9, 0
	stw      r31, 0x43c(r1)
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	mr       r3, r4
	li       r4, 0
	stw      r0, 8(r1)
	lwz      r7, sSystemHeap__7JKRHeap@sda21(r13)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_80127488
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_80127474
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_80127474:
	addi     r3, r30, 0x18
	addi     r4, r1, 0x10
	bl       read__10ParametersFR6Stream
	mr       r3, r31
	bl       __dla__FPv

lbl_80127488:
	lfs      f2, lbl_80517F5C@sda21(r2)
	li       r0, 0
	lfs      f1, 0x1a4(r30)
	mr       r3, r30
	lfs      f0, 0xb4(r30)
	fsubs    f1, f2, f1
	fadds    f0, f1, f0
	stfs     f0, 0x220(r30)
	lfs      f1, 0xdc(r30)
	lfs      f0, 0xb4(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x224(r30)
	lfs      f1, 0x104(r30)
	lfs      f0, 0xdc(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x228(r30)
	lfs      f1, 0x12c(r30)
	lfs      f0, 0x104(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x22c(r30)
	lfs      f1, 0x154(r30)
	lfs      f0, 0x12c(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x230(r30)
	lfs      f1, 0x1a4(r30)
	lfs      f0, 0x17c(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x234(r30)
	lfs      f1, 0x64(r30)
	lfs      f0, 0x3c(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x238(r30)
	lfs      f0, 0x238(r30)
	fsubs    f0, f2, f0
	stfs     f0, 0x23c(r30)
	stw      r0, 0x218(r30)
	lfs      f0, 0x3c(r30)
	stfs     f0, 0x20c(r30)
	lfs      f1, 0x20c(r30)
	lfs      f0, 0x8c(r30)
	fdivs    f1, f1, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x208(r30)
	bl       updateSlot__Q24Game7TimeMgrFv
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127550
 * Size:	000060
 */
TimeMgr::~TimeMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80127594
	lis      r5, __vt__Q24Game7TimeMgr@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game7TimeMgr@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80127594
	mr       r3, r30
	bl       __dl__FPv

lbl_80127594:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
