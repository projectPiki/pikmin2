.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__12PikiAnimatorFv
__ct__12PikiAnimatorFv:
/* 8013364C 0013058C  3C A0 80 4B */	lis r5, __vt__Q28SysShape12BaseAnimator@ha
/* 80133650 00130590  3C 80 80 4F */	lis r4, __vt__Q28SysShape8Animator@ha
/* 80133654 00130594  38 A5 B9 88 */	addi r5, r5, __vt__Q28SysShape12BaseAnimator@l
/* 80133658 00130598  38 00 00 00 */	li r0, 0
/* 8013365C 0013059C  90 A3 00 00 */	stw r5, 0(r3)
/* 80133660 001305A0  38 84 BE 00 */	addi r4, r4, __vt__Q28SysShape8Animator@l
/* 80133664 001305A4  90 83 00 00 */	stw r4, 0(r3)
/* 80133668 001305A8  98 03 00 18 */	stb r0, 0x18(r3)
/* 8013366C 001305AC  90 03 00 0C */	stw r0, 0xc(r3)
/* 80133670 001305B0  90 03 00 04 */	stw r0, 4(r3)
/* 80133674 001305B4  98 03 00 18 */	stb r0, 0x18(r3)
/* 80133678 001305B8  90 03 00 10 */	stw r0, 0x10(r3)
/* 8013367C 001305BC  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80133680 001305C0  90 83 00 1C */	stw r4, 0x1c(r3)
/* 80133684 001305C4  98 03 00 34 */	stb r0, 0x34(r3)
/* 80133688 001305C8  90 03 00 28 */	stw r0, 0x28(r3)
/* 8013368C 001305CC  90 03 00 20 */	stw r0, 0x20(r3)
/* 80133690 001305D0  98 03 00 34 */	stb r0, 0x34(r3)
/* 80133694 001305D4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80133698 001305D8  4E 80 00 20 */	blr 

.global setAnimMgr__12PikiAnimatorFPQ28SysShape7AnimMgr
setAnimMgr__12PikiAnimatorFPQ28SysShape7AnimMgr:
/* 8013369C 001305DC  90 83 00 10 */	stw r4, 0x10(r3)
/* 801336A0 001305E0  90 83 00 2C */	stw r4, 0x2c(r3)
/* 801336A4 001305E4  4E 80 00 20 */	blr 
