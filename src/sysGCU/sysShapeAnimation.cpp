#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JUT/JUTException.h"
#include "SysShape/AnimInfo.h"
#include "SysShape/AnimMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_sysShapeAnimation_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049AC40
    lbl_8049AC40:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x73797353
        .4byte 0x68617065
        .4byte 0x4D6F6465
        .4byte 0x6C000000
    .global lbl_8049AC5C
    lbl_8049AC5C:
        .4byte 0x73797353
        .4byte 0x68617065
        .4byte 0x416E696D
        .4byte 0x6174696F
        .4byte 0x6E2E6370
        .4byte 0x70000000
    .global lbl_8049AC74
    lbl_8049AC74:
        .4byte 0x616E696D
        .4byte 0x44617461
        .4byte 0x206E756C
        .4byte 0x6C210A00
        .4byte 0x6E616E64
        .4byte 0x617E7E7E
        .4byte 0x7E3F0A00

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ECBF0
    lbl_804ECBF0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516270
    lbl_80516270:
        .skip 0x4
    .global lbl_80516274
    lbl_80516274:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805208F8
    lbl_805208F8:
        .4byte 0x25732F25
        .4byte 0x73000000
    .global lbl_80520900
    lbl_80520900:
        .4byte 0x25730000
        .4byte 0x00000000
*/

namespace SysShape {

/*
 * --INFO--
 * Address:	8043DCDC
 * Size:	000080
 */
void AnimInfo::attach(J3DModelData* modelData, void* animData)
{
	// JUT_ASSERTLINE(64, animData != nullptr, "animData null!\n");
	// m_anm = J3DAnmLoaderDataBase::load(animData);
	// m_calc = J3DNewMtxCalcAnm(modelData->m_jointTree._08 & 0xf, m_anm);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r5, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_8043DD20
	lis      r3, lbl_8049AC5C@ha
	lis      r5, lbl_8049AC74@ha
	addi     r3, r3, lbl_8049AC5C@l
	li       r4, 0x40
	addi     r5, r5, lbl_8049AC74@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043DD20:
	mr       r3, r31
	bl       load__20J3DAnmLoaderDataBaseFPCv
	stw      r3, 0x18(r29)
	lwz      r0, 0x18(r30)
	lwz      r4, 0x18(r29)
	clrlwi   r3, r0, 0x1c
	bl       J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
	stw      r3, 0x1c(r29)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043DD5C
 * Size:	000120
 */
AnimMgr* AnimMgr::load(JKRFileLoader*, char*, J3DModelData*, JKRFileLoader*, char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	stmw     r26, 0x428(r1)
	mr       r28, r5
	mr       r29, r6
	mr       r30, r7
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8043DD98
	li       r3, 0
	b        lbl_8043DE68

lbl_8043DD98:
	mr       r4, r3
	addi     r3, r1, 8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x14(r1)
	bne      lbl_8043DDC0
	li       r0, 0
	stw      r0, 0x41c(r1)

lbl_8043DDC0:
	li       r3, 0x74
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8043DE4C
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape7AnimMgr@ha
	addi     r27, r31, 0x1c
	addi     r0, r3, __vt__Q28SysShape7AnimMgr@l
	stw      r0, 0(r31)
	mr       r3, r27
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape8AnimInfo@ha
	addi     r26, r27, 0x28
	addi     r0, r3, __vt__Q28SysShape8AnimInfo@l
	stw      r0, 0(r27)
	mr       r3, r26
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	li       r3, 0
	addi     r4, r4, __vt__Q28SysShape8KeyEvent@l
	li       r0, -1
	stw      r4, 0(r26)
	stw      r3, 0x18(r26)
	stw      r3, 0x1c(r26)
	sth      r0, 0x20(r26)
	stw      r3, 0x18(r27)
	stw      r3, 0x1c(r27)
	stw      r3, 0x50(r27)
	stw      r3, 0x24(r27)
	sth      r3, 0x70(r31)
	stw      r3, 0x18(r31)
	stw      r3, 0x2c(r31)
	stw      r3, 0x28(r31)
	stw      r3, 0x24(r31)
	stw      r3, 0x20(r31)

lbl_8043DE4C:
	mr       r3, r31
	mr       r5, r28
	mr       r6, r29
	mr       r7, r30
	addi     r4, r1, 8
	bl       load__Q28SysShape7AnimMgrFR6StreamP12J3DModelDataP13JKRFileLoaderPc
	mr       r3, r31

lbl_8043DE68:
	lmw      r26, 0x428(r1)
	lwz      r0, 0x444(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043DE7C
 * Size:	000110
 */
void AnimMgr::load(Stream&, J3DModelData*, JKRFileLoader*, char*)
{
	/*
	stwu     r1, -0x220(r1)
	mflr     r0
	lis      r8, lbl_8049AC40@ha
	stw      r0, 0x224(r1)
	stmw     r26, 0x208(r1)
	mr       r29, r3
	mr       r26, r5
	mr       r27, r6
	mr       r28, r7
	addi     r31, r8, lbl_8049AC40@l
	bl       read__Q28SysShape7AnimMgrFR6Stream
	lwz      r30, 0x2c(r29)
	b        lbl_8043DF70

lbl_8043DEB0:
	cmplwi   r28, 0
	beq      lbl_8043DEF0
	lwz      r6, 0x14(r30)
	mr       r5, r28
	addi     r3, r1, 8
	addi     r4, r2, lbl_805208F8@sda21
	crclr    6
	bl       sprintf
	mr       r3, r27
	addi     r4, r1, 8
	lwz      r12, 0(r27)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	b        lbl_8043DF14

lbl_8043DEF0:
	lwz      r5, 0x14(r30)
	addi     r3, r1, 8
	addi     r4, r2, lbl_80520900@sda21
	crclr    6
	bl       sprintf
	lwz      r3, 0x14(r30)
	mr       r4, r27
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	mr       r29, r3

lbl_8043DF14:
	cmplwi   r29, 0
	bne      lbl_8043DF30
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x44
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043DF30:
	cmplwi   r29, 0
	bne      lbl_8043DF4C
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x34
	li       r4, 0x40
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043DF4C:
	mr       r3, r29
	bl       load__20J3DAnmLoaderDataBaseFPCv
	stw      r3, 0x18(r30)
	lwz      r0, 0x18(r26)
	lwz      r4, 0x18(r30)
	clrlwi   r3, r0, 0x1c
	bl       J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
	stw      r3, 0x1c(r30)
	lwz      r30, 4(r30)

lbl_8043DF70:
	cmplwi   r30, 0
	bne      lbl_8043DEB0
	lmw      r26, 0x208(r1)
	lwz      r0, 0x224(r1)
	mtlr     r0
	addi     r1, r1, 0x220
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043DF8C
 * Size:	0000D8
 */
void AnimMgr::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r3, r28
	bl       readInt__6StreamFv
	mr       r31, r3
	li       r29, 0
	b        lbl_8043E048

lbl_8043DFB8:
	li       r3, 0x54
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8043E014
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape8AnimInfo@ha
	addi     r26, r30, 0x28
	addi     r0, r3, __vt__Q28SysShape8AnimInfo@l
	stw      r0, 0(r30)
	mr       r3, r26
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	li       r3, 0
	addi     r4, r4, __vt__Q28SysShape8KeyEvent@l
	li       r0, -1
	stw      r4, 0(r26)
	stw      r3, 0x18(r26)
	stw      r3, 0x1c(r26)
	sth      r0, 0x20(r26)
	stw      r27, 0x50(r30)
	stw      r3, 0x18(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x24(r30)

lbl_8043E014:
	mr       r3, r30
	mr       r4, r28
	bl       read__Q28SysShape8AnimInfoFR6Stream
	lhz      r0, 0x70(r27)
	mr       r4, r30
	addi     r3, r27, 0x1c
	sth      r0, 0x20(r30)
	stw      r27, 0x50(r30)
	bl       add__5CNodeFP5CNode
	lhz      r3, 0x70(r27)
	addi     r29, r29, 1
	addi     r0, r3, 1
	sth      r0, 0x70(r27)

lbl_8043E048:
	cmpw     r29, r31
	blt      lbl_8043DFB8
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043E064
 * Size:	0000F8
 */
void AnimMgr::connectBasArc(char*, char*, JKRFileLoader*)
{
	/*
	stwu     r1, -0x220(r1)
	mflr     r0
	stw      r0, 0x224(r1)
	stmw     r27, 0x20c(r1)
	mr       r27, r4
	mr       r28, r6
	lwz      r30, 0x2c(r3)
	b        lbl_8043E140

lbl_8043E084:
	cmplwi   r27, 0
	beq      lbl_8043E0A8
	lwz      r6, 0x14(r30)
	mr       r5, r27
	addi     r3, r1, 8
	addi     r4, r2, lbl_805208F8@sda21
	crclr    6
	bl       sprintf
	b        lbl_8043E0BC

lbl_8043E0A8:
	lwz      r5, 0x14(r30)
	addi     r3, r1, 8
	addi     r4, r2, lbl_80520900@sda21
	crclr    6
	bl       sprintf

lbl_8043E0BC:
	addi     r31, r1, 8
	li       r29, 0
	b        lbl_8043E108

lbl_8043E0C8:
	lbz      r0, 0(r31)
	cmpwi    r0, 0x2e
	bne      lbl_8043E100
	addi     r5, r1, 8
	li       r0, 0x62
	add      r5, r5, r29
	li       r4, 0x61
	stb      r0, 1(r5)
	li       r3, 0x73
	li       r0, 0
	stb      r4, 2(r5)
	stb      r3, 3(r5)
	stb      r0, 4(r5)
	b        lbl_8043E118

lbl_8043E100:
	addi     r31, r31, 1
	addi     r29, r29, 1

lbl_8043E108:
	addi     r3, r1, 8
	bl       strlen
	cmplw    r29, r3
	blt      lbl_8043E0C8

lbl_8043E118:
	mr       r3, r28
	addi     r4, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8043E13C
	stw      r3, 0x24(r30)

lbl_8043E13C:
	lwz      r30, 4(r30)

lbl_8043E140:
	cmplwi   r30, 0
	bne      lbl_8043E084
	lmw      r27, 0x20c(r1)
	lwz      r0, 0x224(r1)
	mtlr     r0
	addi     r1, r1, 0x220
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043E15C
 * Size:	000054
 */
void AnimMgr::registerSoundViewer(PSGame::SoundCreatureMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0x2c(r3)
	b        lbl_8043E190

lbl_8043E17C:
	lwz      r4, 0x18(r31)
	mr       r3, r30
	lwz      r5, 0x14(r31)
	bl       registerAnime__Q26PSGame16SoundCreatureMgrFP10J3DAnmBasePCc
	lwz      r31, 4(r31)

lbl_8043E190:
	cmplwi   r31, 0
	bne      lbl_8043E17C
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace SysShape

/*
 * --INFO--
 * Address:	8043E1B0
 * Size:	000028
 */
void __sinit_sysShapeAnimation_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804ECBF0@ha
	stw      r0, lbl_80516270@sda21(r13)
	stfsu    f0, lbl_804ECBF0@l(r3)
	stfs     f0, lbl_80516274@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
