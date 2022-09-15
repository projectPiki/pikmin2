#include "types.h"
#include "PSAutoBgm/MeloArr.h"
#include "JSystem/JAL/JALCalc.h"
#include "JSystem/JUT/JUTException.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490010
    lbl_80490010:
        .4byte 0x50534175
        .4byte 0x746F4267
        .4byte 0x6D5F4D65
        .4byte 0x6C6F4172
        .4byte 0x72616E67
        .4byte 0x65722E63
        .4byte 0x70700000
    .global lbl_8049002C
    lbl_8049002C:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q29PSAutoBgm11MeloArrBase
    __vt__Q29PSAutoBgm11MeloArrBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q29PSAutoBgm11MeloArrBaseFv"
        .4byte directOn__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte directOff__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte pre__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte post__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte 0
        .4byte __dt__Q29PSAutoBgm11MeloArrBaseFv
    .global __vt__Q29PSAutoBgm19MeloArr_RandomAvoid
    __vt__Q29PSAutoBgm19MeloArr_RandomAvoid:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv"
        .4byte directOn__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte directOff__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte pre__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte post__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte
   avoidChk__Q29PSAutoBgm19MeloArr_RandomAvoidFRQ29PSAutoBgm10MeloArrArg .4byte
   __dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv
*/

namespace PSAutoBgm {

/*
 * --INFO--
 * Address:	8033EE9C
 * Size:	00003C
 */
bool MeloArr_RandomAvoid::avoidChk(MeloArrArg& meloArg)
{
	float randDec = JALCalc::getRandom_0_1();
	u8 out        = (randDec < _1C);
	return out;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void MeloArrArg::assertCheck() const
{
	P2ASSERTLINE(89, _00 < 0x10);
	P2ASSERTLINE(90, _01 != 0xFF);
}

/*
 * --INFO--
 * Address:	8033EED8
 * Size:	000138
 */
// WIP: https://decomp.me/scratch/4nD7B
bool MeloArrMgr::isToAvoid(MeloArrArg& meloArg)
{
	meloArg.assertCheck();
	if (!_12) {
		return false;
	}
	bool check = false;
	if ((_10 >> meloArg._00) & 1) {
		MeloArrBase* currLink = static_cast<MeloArrBase*>(m_list.m_head);
		for (currLink; currLink; currLink = static_cast<MeloArrBase*>(currLink->m_next)) {
			MeloArrBase* randAvoid = static_cast<MeloArrBase*>(currLink->m_value);
			randAvoid->pre(meloArg);
			if (check == false) {
				randAvoid = static_cast<MeloArrBase*>(currLink->m_value);
				bool interCheck;
				if (randAvoid->_19 == true) {
					interCheck = randAvoid->avoidChk(meloArg);
				} else {
					interCheck = false;
				}
				check = interCheck;
			}

			randAvoid = static_cast<MeloArrBase*>(currLink->m_value);
			randAvoid->post(meloArg);
		}
	}
	return check;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lbz      r0, 0(r4)
	cmplwi   r0, 0x10
	blt      lbl_8033EF20
	lis      r3, lbl_80490010@ha
	lis      r5, lbl_8049002C@ha
	addi     r3, r3, lbl_80490010@l
	li       r4, 0x59
	addi     r5, r5, lbl_8049002C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033EF20:
	lbz      r0, 1(r31)
	cmplwi   r0, 0xff
	bne      lbl_8033EF48
	lis      r3, lbl_80490010@ha
	lis      r5, lbl_8049002C@ha
	addi     r3, r3, lbl_80490010@l
	li       r4, 0x5a
	addi     r5, r5, lbl_8049002C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033EF48:
	lbz      r0, 0x12(r30)
	cmplwi   r0, 0
	bne      lbl_8033EF5C
	li       r3, 0
	b        lbl_8033EFF4

lbl_8033EF5C:
	lhz      r3, 0x10(r30)
	li       r29, 0
	lbz      r0, 0(r31)
	sraw     r0, r3, r0
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8033EFF0
	lwz      r30, 4(r30)
	b        lbl_8033EFE8

lbl_8033EF7C:
	lwz      r3, 0(r30)
	mr       r4, r31
	lwz      r12, 0x14(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r29, 0x18
	bne      lbl_8033EFCC
	lwz      r3, 0(r30)
	lbz      r0, 0x19(r3)
	cmplwi   r0, 1
	bne      lbl_8033EFC4
	lwz      r12, 0x14(r3)
	mr       r4, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8033EFC8

lbl_8033EFC4:
	li       r3, 0

lbl_8033EFC8:
	mr       r29, r3

lbl_8033EFCC:
	lwz      r3, 0(r30)
	mr       r4, r31
	lwz      r12, 0x14(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r30, 0xc(r30)

lbl_8033EFE8:
	cmplwi   r30, 0
	bne      lbl_8033EF7C

lbl_8033EFF0:
	mr       r3, r29

lbl_8033EFF4:
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
 * Address:	8033F010
 * Size:	000004
 */
// WEAK - in header
// void MeloArrBase::post(PSAutoBgm::MeloArrArg&) { }

/*
 * --INFO--
 * Address:	8033F014
 * Size:	000004
 */
// WEAK - in header
// void MeloArrBase::pre(PSAutoBgm::MeloArrArg&) { }

/*
 * --INFO--
 * Address:	8033F018
 * Size:	00000C
 */
// WEAK - in header
// void MeloArrBase::directOn(PSAutoBgm::Track*) { _19 = true; }

/*
 * --INFO--
 * Address:	8033F024
 * Size:	00000C
 */
// WEAK - in header
// void MeloArrBase::directOff(PSAutoBgm::Track*) { _19 = false; }

/*
 * --INFO--
 * Address:	8033F030
 * Size:	000080
 */
// WEAK - in header
// MeloArrBase::~MeloArrBase() { }

/*
 * --INFO--
 * Address:	8033F0B0
 * Size:	000098
 */
// WEAK - in header
// MeloArr_RandomAvoid::~MeloArr_RandomAvoid() { }

/*
 * --INFO--
 * Address:	8033F148
 * Size:	000008
 */
// PSAutoBgm::MeloArr_RandomAvoid::@16 @~MeloArr_RandomAvoid()
// {
// 	/*
// 	addi     r3, r3, -16
// 	b        __dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv
// 	*/
// }

/*
 * --INFO--
 * Address:	8033F150
 * Size:	000008
 */
// MeloArrBase::@16 @~MeloArrBase()
// {
// 	/*
// 	addi     r3, r3, -16
// 	b        __dt__Q29PSAutoBgm11MeloArrBaseFv
// 	*/
// }

} // namespace PSAutoBgm
