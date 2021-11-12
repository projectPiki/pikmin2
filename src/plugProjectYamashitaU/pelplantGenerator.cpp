#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047BE28
    lbl_8047BE28:
        .4byte 0x8379838C
        .4byte 0x83628367
        .4byte 0x91900000
        .asciz "\t\t# %s \r\n"
        .skip 2
        .asciz "pellet type"
        .asciz "pellet size"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game8Pelplant9Generator
    __vt__Q34Game8Pelplant9Generator:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game8Pelplant9GeneratorFv
        .4byte getChildCount__5CNodeFv
        .4byte doWrite__Q34Game8Pelplant9GeneratorFR6Stream
        .4byte doRead__Q34Game8Pelplant9GeneratorFR6Stream
        .4byte getLatestVersion__Q34Game8Pelplant9GeneratorFv
        .4byte draw__Q24Game18EnemyGeneratorBaseFR8GraphicsPQ24Game9Generator
        .4byte getInitialParam__Q34Game8Pelplant9GeneratorFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517F88
    lbl_80517F88:
        .4byte 0x73697A65
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	801275B0
 * Size:	000098
 */
Pelplant::Generator::Generator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8047BE28@ha
	lis      r4, __vt__5CNode@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__5CNode@l
	lis      r4, 0x3F3F3F3F@ha
	li       r6, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r5, r5, lbl_8047BE28@l
	addi     r4, r4, 0x3F3F3F3F@l
	stw      r0, 0(r3)
	lis      r3, __vt__Q24Game18EnemyGeneratorBase@ha
	addi     r0, r3, __vt__Q24Game18EnemyGeneratorBase@l
	mr       r7, r31
	stw      r6, 0x10(r31)
	addi     r3, r7, 0x18
	stw      r6, 0xc(r31)
	stw      r6, 8(r31)
	stw      r6, 4(r31)
	stw      r5, 0x14(r31)
	stw      r0, 0(r31)
	bl       __ct__4ID32FUl
	lis      r3, __vt__Q34Game8Pelplant9Generator@ha
	li       r4, 0
	addi     r3, r3, __vt__Q34Game8Pelplant9Generator@l
	li       r0, 1
	stw      r3, 0(r31)
	mr       r3, r31
	stb      r4, 0x24(r31)
	stb      r0, 0x25(r31)
	stb      r4, 0x26(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127648
 * Size:	00008C
 */
void Pelplant::Generator::doRead(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0x18
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801276B0
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0x24(r30)
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0x25(r30)
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0x26(r30)
	b        lbl_801276BC

lbl_801276B0:
	mr       r3, r30
	mr       r4, r31
	bl       doReadOldVersion__Q34Game8Pelplant9GeneratorFR6Stream

lbl_801276BC:
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
 * Address:	801276D4
 * Size:	00000C
 */
void Pelplant::Generator::getLatestVersion()
{
	/*
	lis      r3, 0x30303031@ha
	addi     r3, r3, 0x30303031@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801276E0
 * Size:	000064
 */
void Pelplant::Generator::doReadOldVersion(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, 0x30303030@ha
	lwz      r5, 0x20(r30)
	addi     r0, r3, 0x30303030@l
	cmpw     r5, r0
	beq      lbl_80127714
	b        lbl_8012772C

lbl_80127714:
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0x24(r30)
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0x26(r30)

lbl_8012772C:
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
 * Address:	80127744
 * Size:	0000C8
 */
void Pelplant::Generator::doWrite(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047BE28@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8047BE28@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x24(r29)
	mr       r3, r30
	bl       writeByte__6StreamFUc
	mr       r3, r30
	addi     r4, r31, 0xc
	addi     r5, r31, 0x18
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x25(r29)
	mr       r3, r30
	bl       writeByte__6StreamFUc
	mr       r3, r30
	addi     r4, r31, 0xc
	addi     r5, r31, 0x24
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x26(r29)
	mr       r3, r30
	bl       writeByte__6StreamFUc
	mr       r3, r30
	addi     r4, r31, 0xc
	addi     r5, r2, lbl_80517F88@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
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
 * Address:	8012780C
 * Size:	000070
 */
Pelplant::Generator::~Generator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80127860
	lis      r4, __vt__Q34Game8Pelplant9Generator@ha
	addi     r0, r4, __vt__Q34Game8Pelplant9Generator@l
	stw      r0, 0(r30)
	beq      lbl_80127850
	lis      r5, __vt__Q24Game18EnemyGeneratorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game18EnemyGeneratorBase@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80127850:
	extsh.   r0, r31
	ble      lbl_80127860
	mr       r3, r30
	bl       __dl__FPv

lbl_80127860:
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
 * Address:	8012787C
 * Size:	000008
 */
void Pelplant::Generator::getInitialParam()
{
	/*
	addi     r3, r3, 0x24
	blr
	*/
}
} // namespace Game
