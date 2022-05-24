#include "types.h"
#include "Game/Entities/Pelplant.h"

namespace Game {
namespace Pelplant {

/*
 * --INFO--
 * Address:	801275B0
 * Size:	000098
 */
Generator::Generator()
    : EnemyGeneratorBase("ÉyÉåÉbÉgëê")
    , : m_pelletType(0)
        , m_pelletSize(1)
        , m_size(0)
{
}

/*
 * --INFO--
 * Address:	80127648
 * Size:	00008C
 */
void Generator::doRead(Stream&)
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
u32 Generator::getLatestVersion()
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
void Generator::doReadOldVersion(Stream&)
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
void Generator::doWrite(Stream&)
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
Generator::~Generator()
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
u8 Generator::getInitialParam()
{
	/*
	addi     r3, r3, 0x24
	blr
	*/
}
} // namespace Pelplant
} // namespace Game
