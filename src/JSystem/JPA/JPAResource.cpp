#include "JSystem/JPA/JPAResource.h"
#include "Dolphin/mtx.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAMath.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global jpa_pos
    jpa_pos:
        .4byte 0x00000032
        .4byte 0x000032CE
        .4byte 0x0000CE00
        .4byte 0xE7000019
        .4byte 0x000019CE
        .4byte 0x00E7CE00
        .4byte 0xCE000000
        .4byte 0x000000CE
        .4byte 0x00CECE00
        .4byte 0x00190032
        .4byte 0x190032E7
        .4byte 0x0000E700
        .4byte 0xE7190019
        .4byte 0x190019E7
        .4byte 0x00E7E700
        .4byte 0xCE190000
        .4byte 0x190000E7
        .4byte 0x00CEE700
        .4byte 0x00320032
        .4byte 0x32003200
        .4byte 0x00000000
        .4byte 0xE7320019
        .4byte 0x32001900
        .4byte 0x00E70000
        .4byte 0xCE320000
        .4byte 0x32000000
        .4byte 0x00CE0000
        .4byte 0x00000032
        .4byte 0x00003200
        .4byte 0x32000032
        .4byte 0xE7000019
        .4byte 0x00001900
        .4byte 0x32E70032
        .4byte 0xCE000000
        .4byte 0x00000000
        .4byte 0x32CE0032
        .4byte 0x0000E732
        .4byte 0x00E73200
        .4byte 0x19000019
        .4byte 0xE700E719
        .4byte 0x00E71900
        .4byte 0x19E70019
        .4byte 0xCE00E700
        .4byte 0x00E70000
        .4byte 0x19CE0019
        .4byte 0x0000CE32
        .4byte 0x00CE3200
        .4byte 0x00000000
        .4byte 0xE700CE19
        .4byte 0x00CE1900
        .4byte 0x00E70000
        .4byte 0xCE00CE00
        .4byte 0x00CE0000
        .4byte 0x00CE0000
        .4byte 0x00000000
        .4byte 0x003200CE
        .4byte 0x3200CE00
        .4byte 0x0000E700
        .4byte 0x001900CE
        .4byte 0x1900CEE7
        .4byte 0x0000CE00
        .4byte 0x000000CE
        .4byte 0x0000CECE
        .4byte 0x00190000
        .4byte 0x193200E7
        .4byte 0x3200E700
        .4byte 0x0019E700
        .4byte 0x191900E7
        .4byte 0x1900E7E7
        .4byte 0x0019CE00
        .4byte 0x190000E7
        .4byte 0x0000E7CE
        .4byte 0x00320000
        .4byte 0x32320000
        .4byte 0x32000000
        .4byte 0x0032E700
        .4byte 0x32190000
        .4byte 0x190000E7
        .4byte 0x0032CE00
        .4byte 0x32000000
        .4byte 0x000000CE
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global jpa_crd
    jpa_crd:
        .4byte 0x00000100
        .4byte 0x01010001
        .4byte 0x00000200
        .4byte 0x02010001
        .4byte 0x00000100
        .4byte 0x01020002
        .4byte 0x00000200
        .4byte 0x02020002
    .global lbl_804A3500
    lbl_804A3500:
        .4byte lbl_80096AC0
        .4byte lbl_80096AD4
        .4byte lbl_80096A08
        .4byte lbl_80096A68
        .4byte lbl_80096A68
        .4byte lbl_80096AE4
        .4byte lbl_80096AE4
        .4byte lbl_80096AAC
        .4byte lbl_80096AAC
        .4byte lbl_80096A98
        .4byte lbl_80096A38
    .global lbl_804A352C
    lbl_804A352C:
        .4byte lbl_80096764
        .4byte lbl_80096778
        .4byte lbl_800966AC
        .4byte lbl_8009670C
        .4byte lbl_8009670C
        .4byte lbl_80096788
        .4byte lbl_80096788
        .4byte lbl_80096750
        .4byte lbl_80096750
        .4byte lbl_8009673C
        .4byte lbl_800966DC
    .global lbl_804A3558
    lbl_804A3558:
        .4byte lbl_80097DD0
        .4byte lbl_80097DDC
        .4byte lbl_80097E50
        .4byte lbl_80097DF4
        .4byte lbl_80097E00
        .4byte lbl_80097E50
        .4byte lbl_80097E18
        .4byte lbl_80097E24
        .4byte lbl_80097E30
        .4byte lbl_80097E3C
        .4byte lbl_80097E48
        .4byte 0x00000000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C58
    lbl_80516C58:
        .4byte 0x3F828F5C
    .global lbl_80516C5C
    lbl_80516C5C:
        .4byte 0x3ECCCCCD
    .global lbl_80516C60
    lbl_80516C60:
        .float 1.0
    .global lbl_80516C64
    lbl_80516C64:
        .4byte 0x00000000
    .global lbl_80516C68
    lbl_80516C68:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800955EC
 * Size:	000070
 */
JPAResource::JPAResource()
{
	/*
	li       r0, 0
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	stw      r0, 0(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x2c(r3)
	stw      r0, 0x30(r3)
	stw      r0, 0x34(r3)
	stw      r0, 0x38(r3)
	stb      r0, 0x47(r3)
	stb      r0, 0x46(r3)
	stb      r0, 0x45(r3)
	stb      r0, 0x44(r3)
	stb      r0, 0x43(r3)
	stb      r0, 0x42(r3)
	stb      r0, 0x41(r3)
	stb      r0, 0x40(r3)
	stb      r0, 0x3f(r3)
	stb      r0, 0x3e(r3)
	sth      r0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009565C
 * Size:	001540
 */
void JPAResource::init(JKRHeap*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x64(r1)
	stmw     r14, 0x18(r1)
	mr       r16, r4
	mr       r15, r3
	lwz      r4, 0x1c(r3)
	lwz      r3, 0x20(r3)
	lwz      r4, 0(r4)
	cmplwi   r3, 0
	lwz      r0, 8(r4)
	lbz      r6, 0x21(r4)
	lbz      r4, 0x1e(r4)
	rlwinm   r31, r0, 0, 0x13, 0x13
	rlwinm   r27, r0, 0, 0x11, 0x11
	rlwinm   r30, r6, 0, 0x1e, 0x1e
	clrlwi   r28, r4, 0x1f
	rlwinm   r4, r0, 0, 7, 7
	stw      r4, 0x14(r1)
	rlwinm   r4, r0, 0, 0xb, 0xb
	rlwinm   r29, r6, 0, 0x1c, 0x1c
	stw      r4, 0x10(r1)
	beq      lbl_800956D0
	lwz      r4, 0(r3)
	lwz      r4, 8(r4)
	clrlwi.  r4, r4, 0x1f
	beq      lbl_800956D0
	li       r5, 1

lbl_800956D0:
	cmplwi   r3, 0
	clrlwi   r26, r5, 0x18
	li       r5, 0
	beq      lbl_800956F4
	lwz      r4, 0(r3)
	lwz      r4, 8(r4)
	rlwinm.  r4, r4, 0, 0xf, 0xf
	beq      lbl_800956F4
	li       r5, 1

lbl_800956F4:
	cmplwi   r3, 0
	clrlwi   r25, r5, 0x18
	li       r6, 0
	beq      lbl_80095720
	lwz      r4, 0(r3)
	lwz      r5, 8(r4)
	rlwinm.  r4, r5, 0, 0xf, 0xf
	beq      lbl_80095720
	rlwinm.  r4, r5, 0, 0xe, 0xe
	beq      lbl_80095720
	li       r6, 1

lbl_80095720:
	cmplwi   r3, 0
	clrlwi   r14, r6, 0x18
	li       r4, 0
	beq      lbl_80095744
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 7, 7
	beq      lbl_80095744
	li       r4, 1

lbl_80095744:
	clrlwi.  r24, r4, 0x18
	li       r4, 0
	bne      lbl_8009576C
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_80095770
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 7, 7
	beq      lbl_80095770

lbl_8009576C:
	li       r4, 1

lbl_80095770:
	clrlwi   r5, r0, 0x1c
	clrlwi   r23, r4, 0x18
	cmplwi   r5, 5
	li       r6, 1
	beq      lbl_80095790
	cmplwi   r5, 6
	beq      lbl_80095790
	li       r6, 0

lbl_80095790:
	subfic   r3, r5, 1
	li       r7, 1
	orc      r4, r7, r5
	cntlzw   r5, r5
	srwi     r3, r3, 1
	clrlwi   r22, r6, 0x18
	subf     r3, r3, r4
	rlwinm.  r4, r3, 1, 0x1f, 0x1f
	rlwinm   r3, r5, 0x1b, 0x18, 0x1f
	stw      r3, 0xc(r1)
	bne      lbl_800957C0
	li       r7, 0

lbl_800957C0:
	lwz      r3, 0x24(r15)
	clrlwi   r21, r7, 0x18
	li       r5, 0
	cmplwi   r3, 0
	beq      lbl_80095804
	lwz      r4, 0(r3)
	li       r6, 1
	lwz      r4, 8(r4)
	clrlwi   r4, r4, 0x1c
	cmplwi   r4, 5
	beq      lbl_800957F8
	cmplwi   r4, 6
	beq      lbl_800957F8
	mr       r6, r5

lbl_800957F8:
	clrlwi.  r4, r6, 0x18
	beq      lbl_80095804
	li       r5, 1

lbl_80095804:
	cmplwi   r3, 0
	clrlwi   r20, r5, 0x18
	li       r5, 0
	beq      lbl_80095828
	lwz      r4, 0(r3)
	lwz      r4, 8(r4)
	clrlwi.  r4, r4, 0x1c
	bne      lbl_80095828
	li       r5, 1

lbl_80095828:
	clrlwi   r4, r5, 0x18
	cmplwi   r3, 0
	stw      r4, 8(r1)
	li       r4, 0
	beq      lbl_80095868
	lwz      r3, 0(r3)
	li       r5, 1
	lwz      r3, 8(r3)
	clrlwi.  r3, r3, 0x1c
	beq      lbl_8009585C
	cmplwi   r3, 1
	beq      lbl_8009585C
	mr       r5, r4

lbl_8009585C:
	clrlwi.  r3, r5, 0x18
	beq      lbl_80095868
	li       r4, 1

lbl_80095868:
	rlwinm   r3, r0, 5, 0x1f, 0x1f
	rlwinm   r0, r0, 4, 0x1f, 0x1f
	cntlzw   r3, r3
	cmpwi    r27, 0
	cntlzw   r0, r0
	clrlwi   r19, r4, 0x18
	rlwinm   r18, r3, 0x1b, 0x18, 0x1f
	rlwinm   r17, r0, 0x1b, 0x18, 0x1f
	beq      lbl_800958A0
	cmpwi    r28, 0
	beq      lbl_800958A0
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958A0:
	cmpwi    r31, 0
	beq      lbl_800958EC
	cmpwi    r30, 0
	beq      lbl_800958BC
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958BC:
	cmpwi    r29, 0
	beq      lbl_800958D0
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958D0:
	cmpwi    r30, 0
	bne      lbl_800958E0
	cmpwi    r29, 0
	beq      lbl_800958EC

lbl_800958E0:
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958EC:
	lbz      r0, 0x41(r15)
	cmplwi   r0, 0
	beq      lbl_8009590C
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0(r15)

lbl_8009590C:
	cmpwi    r27, 0
	li       r3, 0
	beq      lbl_800959C0
	cmpwi    r28, 0
	beq      lbl_800959C0
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lbz      r0, 0x1e(r3)
	rlwinm   r0, r0, 0x1e, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095984
	bge      lbl_8009594C
	cmpwi    r0, 0
	beq      lbl_8009595C
	bge      lbl_80095970
	b        lbl_800959BC

lbl_8009594C:
	cmpwi    r0, 4
	beq      lbl_800959AC
	bge      lbl_800959BC
	b        lbl_80095998

lbl_8009595C:
	lis      r4, JPACalcTexIdxNormal__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxNormal__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_80095970:
	lis      r4, JPACalcTexIdxRepeat__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxRepeat__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_80095984:
	lis      r4, JPACalcTexIdxReverse__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxReverse__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_80095998:
	lis      r4, JPACalcTexIdxMerge__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxMerge__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_800959AC:
	lis      r4, JPACalcTexIdxRandom__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxRandom__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)

lbl_800959BC:
	li       r3, 1

lbl_800959C0:
	cmpwi    r31, 0
	beq      lbl_80095AC8
	cmpwi    r30, 0
	beq      lbl_800959E8
	lis      r5, JPACalcPrm__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcPrm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_800959E8:
	cmpwi    r29, 0
	beq      lbl_80095A08
	lis      r5, JPACalcEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcEnv__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80095A08:
	cmpwi    r30, 0
	bne      lbl_80095A18
	cmpwi    r29, 0
	beq      lbl_80095AC8

lbl_80095A18:
	lwz      r4, 0x1c(r15)
	lwz      r4, 0(r4)
	lbz      r0, 0x21(r4)
	rlwinm   r0, r0, 0x1c, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095A84
	bge      lbl_80095A44
	cmpwi    r0, 0
	beq      lbl_80095A54
	bge      lbl_80095A6C
	b        lbl_80095AC8

lbl_80095A44:
	cmpwi    r0, 4
	beq      lbl_80095AB4
	bge      lbl_80095AC8
	b        lbl_80095A9C

lbl_80095A54:
	lis      r5, JPACalcClrIdxNormal__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxNormal__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095A6C:
	lis      r5, JPACalcClrIdxRepeat__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxRepeat__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095A84:
	lis      r5, JPACalcClrIdxReverse__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxReverse__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095A9C:
	lis      r5, JPACalcClrIdxMerge__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxMerge__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095AB4:
	lis      r5, JPACalcClrIdxRandom__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxRandom__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_80095AC8:
	cmpwi    r27, 0
	bne      lbl_80095AE4
	cmpwi    r28, 0
	beq      lbl_80095AE4
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095AE4:
	cmpwi    r22, 0
	bne      lbl_80095B08
	cmpwi    r25, 0
	bne      lbl_80095AFC
	cmpwi    r14, 0
	beq      lbl_80095B08

lbl_80095AFC:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B08:
	cmpwi    r31, 0
	bne      lbl_80095B58
	cmpwi    r30, 0
	beq      lbl_80095B24
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B24:
	cmpwi    r29, 0
	beq      lbl_80095B38
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B38:
	cmpwi    r30, 0
	bne      lbl_80095B48
	cmpwi    r29, 0
	beq      lbl_80095B64

lbl_80095B48:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	b        lbl_80095B64

lbl_80095B58:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B64:
	cmpwi    r26, 0
	beq      lbl_80095BF4
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1c
	beq      lbl_80095BDC
	lwz      r3, 0x20(r15)
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80095BD0
	rlwinm.  r0, r3, 0x18, 0x1e, 0x1f
	bne      lbl_80095BB4
	rlwinm.  r0, r3, 0x16, 0x1e, 0x1f
	bne      lbl_80095BB4
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	b        lbl_80095BDC

lbl_80095BB4:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	b        lbl_80095BDC

lbl_80095BD0:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095BDC:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095BF4:
	lbz      r0, 0x44(r15)
	cmplwi   r0, 0
	beq      lbl_80095C14
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0xc(r15)

lbl_80095C14:
	cmpwi    r27, 0
	li       r3, 0
	bne      lbl_80095CC8
	cmpwi    r28, 0
	beq      lbl_80095CC8
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lbz      r0, 0x1e(r3)
	rlwinm   r0, r0, 0x1e, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095C8C
	bge      lbl_80095C54
	cmpwi    r0, 0
	beq      lbl_80095C64
	bge      lbl_80095C78
	b        lbl_80095CC4

lbl_80095C54:
	cmpwi    r0, 4
	beq      lbl_80095CB4
	bge      lbl_80095CC4
	b        lbl_80095CA0

lbl_80095C64:
	lis      r4,
JPACalcTexIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095C78:
	lis      r4,
JPACalcTexIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095C8C:
	lis      r4,
JPACalcTexIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095CA0:
	lis      r4, JPACalcTexIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0xc(r15)
	addi     r0, r4,
JPACalcTexIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095CB4:
	lis      r4,
JPACalcTexIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3)

lbl_80095CC4:
	li       r3, 1

lbl_80095CC8:
	cmpwi    r22, 0
	bne      lbl_80095D1C
	cmpwi    r25, 0
	bne      lbl_80095CE0
	cmpwi    r14, 0
	beq      lbl_80095D1C

lbl_80095CE0:
	cmpwi    r14, 0
	beq      lbl_80095D04
	lis      r5,
JPACalcAlphaFlickAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) slwi     r0, r3, 2 addi     r3, r3, 1 addi     r5, r5,
JPACalcAlphaFlickAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5,
r4, r0 b        lbl_80095D1C

lbl_80095D04:
	lis      r5, JPACalcAlphaAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcAlphaAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80095D1C:
	cmpwi    r31, 0
	bne      lbl_80095E2C
	cmpwi    r30, 0
	beq      lbl_80095D44
	lis      r5, JPACalcPrm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcPrm__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80095D44:
	cmpwi    r29, 0
	beq      lbl_80095D64
	lis      r5, JPACalcEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80095D64:
	cmpwi    r30, 0
	bne      lbl_80095D74
	cmpwi    r29, 0
	beq      lbl_80095E44

lbl_80095D74:
	lwz      r4, 0x1c(r15)
	lwz      r4, 0(r4)
	lbz      r0, 0x21(r4)
	rlwinm   r0, r0, 0x1c, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095DE0
	bge      lbl_80095DA0
	cmpwi    r0, 0
	beq      lbl_80095DB0
	bge      lbl_80095DC8
	b        lbl_80095E24

lbl_80095DA0:
	cmpwi    r0, 4
	beq      lbl_80095E10
	bge      lbl_80095E24
	b        lbl_80095DF8

lbl_80095DB0:
	lis      r5,
JPACalcClrIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095DC8:
	lis      r5,
JPACalcClrIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095DE0:
	lis      r5,
JPACalcClrIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095DF8:
	lis      r5, JPACalcClrIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	addi     r5, r5,
JPACalcClrIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095E10:
	lis      r5,
JPACalcClrIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0

lbl_80095E24:
	addi     r3, r3, 1
	b        lbl_80095E44

lbl_80095E2C:
	lis      r5, JPACalcColorCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5,
JPACalcColorCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5, r4, r0

lbl_80095E44:
	cmpwi    r26, 0
	beq      lbl_80095FC8
	lwz      r4, 0x1c(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	clrlwi.  r0, r0, 0x1c
	beq      lbl_80095F30
	lwz      r4, 0x20(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80095F18
	lis      r5, JPACalcScaleY__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcScaleY__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0
	lwz      r4, 0x20(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r4, r0, 0x16, 0x1e, 0x1f
	bne      lbl_80095EA8
	rlwinm.  r0, r0, 0x18, 0x1e, 0x1f
	beq      lbl_80095F30

lbl_80095EA8:
	cmpwi    r4, 1
	beq      lbl_80095EE4
	bge      lbl_80095EC0
	cmpwi    r4, 0
	bge      lbl_80095ECC
	b        lbl_80095F10

lbl_80095EC0:
	cmpwi    r4, 3
	bge      lbl_80095F10
	b        lbl_80095EFC

lbl_80095ECC:
	lis      r5,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_80095F10

lbl_80095EE4:
	lis      r5,
JPACalcScaleAnmRepeatY__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcScaleAnmRepeatY__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_80095F10

lbl_80095EFC:
	lis      r5,
JPACalcScaleAnmReverseY__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0xc(r15) addi     r5, r5,
JPACalcScaleAnmReverseY__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0

lbl_80095F10:
	addi     r3, r3, 1
	b        lbl_80095F30

lbl_80095F18:
	lis      r5, JPACalcScaleCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5,
JPACalcScaleCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5, r4, r0

lbl_80095F30:
	lis      r5, JPACalcScaleX__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	addi     r5, r5, JPACalcScaleX__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	lwz      r4, 0x20(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm   r0, r0, 0x18, 0x1e, 0x1f
	cmpwi    r0, 1
	beq      lbl_80095F94
	bge      lbl_80095F6C
	cmpwi    r0, 0
	bge      lbl_80095F78
	b        lbl_80095FC8

lbl_80095F6C:
	cmpwi    r0, 3
	bge      lbl_80095FC8
	b        lbl_80095FB0

lbl_80095F78:
	addi     r0, r3, 1
	lis      r4,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r4, r4,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0 b        lbl_80095FC8

lbl_80095F94:
	addi     r0, r3, 1
	lis      r4,
JPACalcScaleAnmRepeatX__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r4, r4,
JPACalcScaleAnmRepeatX__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0 b        lbl_80095FC8

lbl_80095FB0:
	addi     r0, r3, 1
	lis      r4,
JPACalcScaleAnmReverseX__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r3,
0xc(r15) addi     r4, r4,
JPACalcScaleAnmReverseX__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0

lbl_80095FC8:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_80095FF0
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 9, 9
	beq      lbl_80095FF0
	lbz      r3, 0x46(r15)
	addi     r0, r3, 1
	stb      r0, 0x46(r15)

lbl_80095FF0:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_80096018
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 8, 8
	beq      lbl_80096018
	lbz      r3, 0x46(r15)
	addi     r0, r3, 1
	stb      r0, 0x46(r15)

lbl_80096018:
	lbz      r0, 0x46(r15)
	cmplwi   r0, 0
	beq      lbl_80096038
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x14(r15)

lbl_80096038:
	lwz      r3, 0x24(r15)
	li       r0, 0
	cmplwi   r3, 0
	beq      lbl_8009606C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 9, 9
	beq      lbl_8009606C
	lis      r4,
JPACalcChildScaleOut__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x14(r15) addi     r4, r4,
JPACalcChildScaleOut__FP18JPAEmitterWorkDataP15JPABaseParticle@l li       r0, 1
	stw      r4, 0(r3)

lbl_8009606C:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_8009609C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 8, 8
	beq      lbl_8009609C
	lis      r4,
JPACalcChildAlphaOut__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x14(r15) addi     r4, r4,
JPACalcChildAlphaOut__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0

lbl_8009609C:
	cmpwi    r18, 0
	beq      lbl_800960B8
	cmpwi    r22, 0
	beq      lbl_800960B8
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_800960B8:
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)
	lwz      r0, 0x28(r15)
	cmplwi   r0, 0
	beq      lbl_800960DC
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_800960DC:
	cmpwi    r27, 0
	bne      lbl_800960EC
	cmpwi    r28, 0
	bne      lbl_800960F8

lbl_800960EC:
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_800960F8:
	lbz      r3, 0x42(r15)
	cmpwi    r21, 0
	addi     r0, r3, 1
	stb      r0, 0x42(r15)
	beq      lbl_80096118
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_80096118:
	cmpwi    r21, 0
	beq      lbl_80096134
	cmpwi    r26, 0
	bne      lbl_80096134
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_80096134:
	cmpwi    r31, 0
	bne      lbl_80096154
	cmpwi    r30, 0
	bne      lbl_8009614C
	cmpwi    r25, 0
	beq      lbl_80096154

lbl_8009614C:
	cmpwi    r29, 0
	bne      lbl_80096160

lbl_80096154:
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_80096160:
	lbz      r0, 0x42(r15)
	cmplwi   r0, 0
	beq      lbl_80096180
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 4(r15)

lbl_80096180:
	cmpwi    r18, 0
	li       r3, 0
	beq      lbl_800961D8
	cmpwi    r22, 0
	beq      lbl_800961D8
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 5
	bne      lbl_800961C4
	lis      r3, JPADrawStripe__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r0, r3, JPADrawStripe__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)
	b        lbl_800961D8

lbl_800961C4:
	lis      r3, JPADrawStripeX__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r0, r3, JPADrawStripeX__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)

lbl_800961D8:
	lis      r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	lwz      r0, 0x28(r15)
	cmplwi   r0, 0
	beq      lbl_80096214
	lis      r5, JPALoadExTex__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadExTex__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096214:
	cmpwi    r28, 0
	bne      lbl_80096238
	lis      r5, JPALoadTex__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadTex__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096258

lbl_80096238:
	cmpwi    r27, 0
	beq      lbl_80096258
	lis      r5, JPALoadTexAnm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadTexAnm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096258:
	cmpwi    r21, 0
	beq      lbl_8009627C
	lis      r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_8009627C:
	lwz      r0, 0x10(r1)
	cmpwi    r0, 0
	beq      lbl_800962A4
	lis      r5, JPAGenTexCrdMtxPrj__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxPrj__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_800962A4:
	lwz      r0, 0x14(r1)
	cmpwi    r0, 0
	beq      lbl_800962F0
	cmpwi    r22, 0
	beq      lbl_800962D4
	lis      r5, JPAGenCalcTexCrdMtxAnm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenCalcTexCrdMtxAnm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_800962D4:
	lis      r5, JPAGenTexCrdMtxAnm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxAnm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_800962F0:
	lis      r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096308:
	cmpwi    r21, 0
	beq      lbl_80096328
	lis      r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096328:
	cmpwi    r21, 0
	beq      lbl_80096378
	cmpwi    r26, 0
	bne      lbl_80096378
	lwz      r0, 0xc(r1)
	cmpwi    r0, 0
	beq      lbl_80096360
	lis      r5, JPASetPointSize__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetPointSize__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096378

lbl_80096360:
	lis      r5, JPASetLineWidth__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetLineWidth__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096378:
	cmpwi    r31, 0
	beq      lbl_800963C4
	cmpwi    r22, 0
	bne      lbl_80096390
	cmpwi    r25, 0
	bne      lbl_800963A8

lbl_80096390:
	lis      r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_800963A8:
	beq      lbl_80096428
	lis      r5, JPARegistEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_800963C4:
	cmpwi    r30, 0
	bne      lbl_8009640C
	cmpwi    r25, 0
	bne      lbl_8009640C
	cmpwi    r29, 0
	bne      lbl_800963F4
	lis      r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_800963F4:
	lis      r5, JPARegistPrm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistPrm__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_8009640C:
	cmpwi    r29, 0
	bne      lbl_80096428
	lis      r5, JPARegistEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_80096428:
	cmpwi    r17, 0
	beq      lbl_80096444
	cmpwi    r20, 0
	beq      lbl_80096444
	lbz      r3, 0x43(r15)
	addi     r0, r3, 1
	stb      r0, 0x43(r15)

lbl_80096444:
	lbz      r3, 0x43(r15)
	cmpwi    r19, 0
	addi     r0, r3, 1
	stb      r0, 0x43(r15)
	beq      lbl_80096464
	lbz      r3, 0x43(r15)
	addi     r0, r3, 1
	stb      r0, 0x43(r15)

lbl_80096464:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_8009649C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 8, 8
	bne      lbl_8009649C
	rlwinm.  r0, r3, 0, 0xe, 0xe
	bne      lbl_8009649C
	rlwinm.  r0, r3, 0, 0xd, 0xd
	bne      lbl_8009649C
	lbz      r3, 0x43(r15)
	addi     r0, r3, 1
	stb      r0, 0x43(r15)

lbl_8009649C:
	lbz      r0, 0x43(r15)
	cmplwi   r0, 0
	beq      lbl_800964BC
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 8(r15)

lbl_800964BC:
	cmpwi    r17, 0
	li       r3, 0
	beq      lbl_80096514
	cmpwi    r20, 0
	beq      lbl_80096514
	lwz      r3, 0x24(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 5
	bne      lbl_80096500
	lis      r3, JPADrawStripe__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	addi     r0, r3, JPADrawStripe__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)
	b        lbl_80096514

lbl_80096500:
	lis      r3, JPADrawStripeX__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	addi     r0, r3, JPADrawStripeX__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)

lbl_80096514:
	lis      r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	slwi     r0, r3, 2
	cmpwi    r19, 0
	addi     r5, r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@l
	addi     r3, r3, 1
	stwx     r5, r4, r0
	beq      lbl_8009654C
	lis      r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_8009654C:
	lwz      r4, 0x24(r15)
	cmplwi   r4, 0
	beq      lbl_8009658C
	lwz      r4, 0(r4)
	lwz      r4, 8(r4)
	rlwinm.  r0, r4, 0, 8, 8
	bne      lbl_8009658C
	rlwinm.  r0, r4, 0, 0xe, 0xe
	bne      lbl_8009658C
	rlwinm.  r0, r4, 0, 0xd, 0xd
	bne      lbl_8009658C
	lis      r5, JPARegistChildPrmEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	addi     r5, r5, JPARegistChildPrmEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_8009658C:
	cmpwi    r18, 0
	beq      lbl_800965A8
	cmpwi    r22, 0
	bne      lbl_800965A8
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_800965A8:
	lbz      r3, 0x45(r15)
	cmpwi    r27, 0
	addi     r0, r3, 1
	stb      r0, 0x45(r15)
	bne      lbl_800965D0
	cmpwi    r28, 0
	beq      lbl_800965D0
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_800965D0:
	cmpwi    r21, 0
	beq      lbl_800965E0
	cmpwi    r26, 0
	bne      lbl_800965F8

lbl_800965E0:
	lwz      r0, 0x14(r1)
	cmpwi    r0, 0
	beq      lbl_80096604
	lwz      r0, 0x10(r1)
	cmpwi    r0, 0
	bne      lbl_80096604

lbl_800965F8:
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_80096604:
	cmpwi    r31, 0
	bne      lbl_80096624
	cmpwi    r30, 0
	bne      lbl_8009663C
	cmpwi    r29, 0
	bne      lbl_8009663C
	cmpwi    r25, 0
	bne      lbl_8009663C

lbl_80096624:
	cmpwi    r31, 0
	beq      lbl_80096648
	cmpwi    r25, 0
	beq      lbl_80096648
	cmpwi    r22, 0
	bne      lbl_80096648

lbl_8009663C:
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_80096648:
	lbz      r0, 0x45(r15)
	cmplwi   r0, 0
	beq      lbl_80096668
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x10(r15)

lbl_80096668:
	cmpwi    r18, 0
	li       r3, 0
	beq      lbl_8009678C
	cmpwi    r22, 0
	bne      lbl_8009678C
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 0xa
	bgt      lbl_80096788
	lis      r3, lbl_804A352C@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A352C@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800966AC

lbl_800966AC:
	cmpwi    r24, 0
	beq      lbl_800966C8
	lis      r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x10(r15) addi     r0, r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096788

lbl_800966C8:
	lis      r4, JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_800966DC

lbl_800966DC:
	cmpwi    r24, 0
	beq      lbl_800966F8
	lis      r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x10(r15) addi     r0, r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096788

lbl_800966F8:
	lis      r4, JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_8009670C

lbl_8009670C:
	cmpwi    r24, 0
	beq      lbl_80096728
	lis      r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x10(r15) addi     r0, r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096788

lbl_80096728:
	lis      r4, JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_8009673C

lbl_8009673C:
	lis      r4, JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_80096750

lbl_80096750:
	lis      r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_80096764

lbl_80096764:
	lis      r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_80096778

lbl_80096778:
	lis      r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	.global  lbl_80096788

lbl_80096788:
	li       r3, 1

lbl_8009678C:
	lis      r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0x10(r15) slwi     r0, r3, 2 cmpwi    r27, 0 addi     r5, r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@l addi     r3,
r3, 1 stwx     r5, r4, r0 bne      lbl_800967CC cmpwi    r28, 0 beq lbl_800967CC
	lis      r5, JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_800967CC:
	cmpwi    r21, 0
	beq      lbl_80096820
	cmpwi    r26, 0
	beq      lbl_80096820
	lwz      r0, 0xc(r1)
	cmpwi    r0, 0
	beq      lbl_80096804
	lis      r5, JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0
	b        lbl_80096850

lbl_80096804:
	lis      r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0
	b        lbl_80096850

lbl_80096820:
	lwz      r0, 0x14(r1)
	cmpwi    r0, 0
	beq      lbl_80096850
	lwz      r0, 0x10(r1)
	cmpwi    r0, 0
	bne      lbl_80096850
	lis      r5,
JPALoadCalcTexCrdMtxAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0x10(r15) slwi     r0, r3, 2 addi     r3, r3, 1 addi     r5, r5,
JPALoadCalcTexCrdMtxAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5,
r4, r0

lbl_80096850:
	cmpwi    r31, 0
	bne      lbl_800968F8
	cmpwi    r30, 0
	beq      lbl_80096898
	cmpwi    r29, 0
	beq      lbl_80096880
	lis      r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0x10(r15) addi     r5, r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_8009691C

lbl_80096880:
	lis      r5, JPARegistPrmAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5,
JPARegistPrmAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_80096898:
	cmpwi    r25, 0
	beq      lbl_800968D8
	cmpwi    r29, 0
	beq      lbl_800968C0
	lis      r5, JPARegistAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5,
JPARegistAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_800968C0:
	lis      r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_800968D8:
	cmpwi    r29, 0
	beq      lbl_8009691C
	lis      r5, JPARegistEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5, JPARegistEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_800968F8:
	cmpwi    r25, 0
	beq      lbl_8009691C
	cmpwi    r22, 0
	bne      lbl_8009691C
	lis      r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_8009691C:
	cmpwi    r17, 0
	beq      lbl_80096944
	lwz      r0, 0x24(r15)
	cmplwi   r0, 0
	beq      lbl_80096944
	cmpwi    r20, 0
	bne      lbl_80096944
	lbz      r3, 0x47(r15)
	addi     r0, r3, 1
	stb      r0, 0x47(r15)

lbl_80096944:
	lbz      r3, 0x47(r15)
	cmpwi    r19, 0
	addi     r0, r3, 1
	stb      r0, 0x47(r15)
	beq      lbl_80096964
	lbz      r3, 0x47(r15)
	addi     r0, r3, 1
	stb      r0, 0x47(r15)

lbl_80096964:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_8009699C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 8, 8
	bne      lbl_80096990
	rlwinm.  r0, r3, 0, 0xe, 0xe
	bne      lbl_80096990
	rlwinm.  r0, r3, 0, 0xd, 0xd
	beq      lbl_8009699C

lbl_80096990:
	lbz      r3, 0x47(r15)
	addi     r0, r3, 1
	stb      r0, 0x47(r15)

lbl_8009699C:
	lbz      r0, 0x47(r15)
	cmplwi   r0, 0
	beq      lbl_800969BC
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x18(r15)

lbl_800969BC:
	cmpwi    r17, 0
	li       r3, 0
	beq      lbl_80096AE8
	lwz      r4, 0x24(r15)
	cmplwi   r4, 0
	beq      lbl_80096AE8
	cmpwi    r20, 0
	bne      lbl_80096AE8
	lwz      r3, 0(r4)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 0xa
	bgt      lbl_80096AE4
	lis      r3, lbl_804A3500@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A3500@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80096A08

lbl_80096A08:
	cmpwi    r23, 0
	beq      lbl_80096A24
	lis      r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x18(r15) addi     r0, r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096AE4

lbl_80096A24:
	lis      r4, JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096A38

lbl_80096A38:
	cmpwi    r23, 0
	beq      lbl_80096A54
	lis      r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x18(r15) addi     r0, r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096AE4

lbl_80096A54:
	lis      r4, JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096A68

lbl_80096A68:
	cmpwi    r23, 0
	beq      lbl_80096A84
	lis      r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x18(r15) addi     r0, r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096AE4

lbl_80096A84:
	lis      r4, JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096A98

lbl_80096A98:
	lis      r4, JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096AAC

lbl_80096AAC:
	lis      r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096AC0

lbl_80096AC0:
	lis      r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096AD4

lbl_80096AD4:
	lis      r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	.global  lbl_80096AE4

lbl_80096AE4:
	li       r3, 1

lbl_80096AE8:
	lis      r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0x18(r15) slwi     r0, r3, 2 cmpwi    r19, 0 addi     r5, r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@l addi     r3,
r3, 1 stwx     r5, r4, r0 beq      lbl_80096B48 lwz      r0, 8(r1) cmpwi    r0,
0 beq      lbl_80096B30 lis      r5,
JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0x18(r15) slwi     r0, r3, 2 addi     r3, r3, 1 addi     r5, r5,
JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5, r4, r0
	b        lbl_80096B48

lbl_80096B30:
	lis      r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x18(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80096B48:
	lwz      r4, 0x24(r15)
	cmplwi   r4, 0
	beq      lbl_80096B88
	lwz      r4, 0(r4)
	lwz      r4, 8(r4)
	rlwinm.  r0, r4, 0, 8, 8
	bne      lbl_80096B74
	rlwinm.  r0, r4, 0, 0xe, 0xe
	bne      lbl_80096B74
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_80096B88

lbl_80096B74:
	lis      r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0x18(r15) addi     r5, r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0

lbl_80096B88:
	lmw      r14, 0x18(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80096B9C
 * Size:	00055C
 */
void JPAResource::calc(JPAEmitterWorkData*, JPABaseEmitter*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stmw     r27, 0xc(r1)
	mr       r29, r5
	mr       r30, r3
	mr       r28, r4
	mr       r3, r29
	stw      r29, 0(r4)
	stw      r30, 4(r4)
	stw      r0, 0x40(r4)
	bl       processTillStartFrame__14JPABaseEmitterFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80096BE0
	li       r3, 0
	b        lbl_800970E4

lbl_80096BE0:
	mr       r3, r29
	bl       processTermination__14JPABaseEmitterFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80096BF8
	li       r3, 1
	b        lbl_800970E4

lbl_80096BF8:
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80096C64
	lwz      r3, 0xec(r29)
	cmplwi   r3, 0
	beq      lbl_800970E0
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80096C38
	li       r3, 1
	b        lbl_800970E4

lbl_80096C38:
	lwz      r3, 0xec(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_800970E0
	li       r3, 1
	b        lbl_800970E4

lbl_80096C64:
	mr       r3, r30
	mr       r4, r28
	bl       calcKey__11JPAResourceFP18JPAEmitterWorkData
	lbz      r3, 0x3e(r30)
	addic.   r3, r3, -1
	slwi     r6, r3, 2
	addi     r3, r3, 1
	blt      lbl_80096D94
	rlwinm.  r0, r3, 0x1f, 1, 0x1f
	mtctr    r0
	beq      lbl_80096D3C

lbl_80096C90:
	lwz      r4, 0x30(r30)
	lwzx     r5, r4, r6
	addi     r6, r6, -4
	lwz      r4, 0(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x18(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x24(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x28(r5)
	lwz      r4, 0x30(r30)
	lwzx     r5, r4, r6
	addi     r6, r6, -4
	lwz      r4, 0(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x18(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x24(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x28(r5)
	bdnz     lbl_80096C90
	andi.    r3, r3, 1
	beq      lbl_80096D94

lbl_80096D3C:
	mtctr    r3

lbl_80096D40:
	lwz      r4, 0x30(r30)
	lwzx     r5, r4, r6
	addi     r6, r6, -4
	lwz      r4, 0(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x18(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x24(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x28(r5)
	bdnz     lbl_80096D40

lbl_80096D94:
	lwz      r3, 0xec(r29)
	cmplwi   r3, 0
	beq      lbl_80096DC8
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80096DC8
	li       r3, 1
	b        lbl_800970E4

lbl_80096DC8:
	mr       r3, r30
	mr       r4, r28
	bl       calcWorkData_c__11JPAResourceFP18JPAEmitterWorkData
	lbz      r3, 0x41(r30)
	addi     r27, r3, -1
	slwi     r31, r27, 2
	b        lbl_80096E00

lbl_80096DE4:
	lwz      r4, 0(r30)
	mr       r3, r28
	lwzx     r12, r4, r31
	mtctr    r12
	bctrl
	addi     r31, r31, -4
	addi     r27, r27, -1

lbl_80096E00:
	cmpwi    r27, 0
	bge      lbl_80096DE4
	lbz      r3, 0x3e(r30)
	addi     r27, r3, -1
	slwi     r31, r27, 2
	b        lbl_80096E40

lbl_80096E18:
	lwz      r3, 0x30(r30)
	mr       r4, r28
	lwzx     r5, r3, r31
	lwz      r3, 4(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, -4
	addi     r27, r27, -1

lbl_80096E40:
	cmpwi    r27, 0
	bge      lbl_80096E18
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_80096E60
	lwz      r3, 0x2c(r30)
	mr       r4, r28
	bl       create__16JPADynamicsBlockFP18JPAEmitterWorkData

lbl_80096E60:
	lwz      r3, 0xec(r29)
	cmplwi   r3, 0
	beq      lbl_80096E94
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80096E94
	li       r3, 1
	b        lbl_800970E4

lbl_80096E94:
	lwz      r30, 0xc8(r29)
	b        lbl_80096FAC

lbl_80096E9C:
	lwz      r31, 4(r30)
	mr       r4, r28
	addi     r3, r30, 8
	bl       calc_p__15JPABaseParticleFP18JPAEmitterWorkData
	clrlwi.  r0, r3, 0x18
	beq      lbl_80096FA8
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	beq      lbl_80096EEC
	lwz      r4, 0(r30)
	cmplwi   r4, 0
	beq      lbl_80096EEC
	stw      r3, 4(r4)
	lwz      r0, 0(r30)
	lwz      r3, 4(r30)
	stw      r0, 0(r3)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)
	b        lbl_80096F58

lbl_80096EEC:
	cmplwi   r3, 0
	beq      lbl_80096F14
	li       r0, 0
	stw      r0, 0(r3)
	lwz      r0, 4(r30)
	stw      r0, 0xc8(r29)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)
	b        lbl_80096F58

lbl_80096F14:
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80096F40
	li       r0, 0
	stw      r0, 4(r3)
	lwz      r0, 0(r30)
	stw      r0, 0xcc(r29)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)
	b        lbl_80096F58

lbl_80096F40:
	li       r0, 0
	stw      r0, 0xcc(r29)
	stw      r0, 0xc8(r29)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)

lbl_80096F58:
	lwz      r4, 0xe0(r29)
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_80096F88
	li       r0, 0
	stw      r0, 0(r30)
	lwz      r0, 0(r4)
	stw      r0, 4(r30)
	lwz      r3, 0(r4)
	stw      r30, 0(r3)
	stw      r30, 0(r4)
	b        lbl_80096F9C

lbl_80096F88:
	stw      r30, 4(r4)
	li       r0, 0
	stw      r30, 0(r4)
	stw      r0, 0(r30)
	stw      r0, 4(r30)

lbl_80096F9C:
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)

lbl_80096FA8:
	mr       r30, r31

lbl_80096FAC:
	cmplwi   r30, 0
	bne      lbl_80096E9C
	lwz      r30, 0xd4(r29)
	b        lbl_800970CC

lbl_80096FBC:
	lwz      r31, 4(r30)
	mr       r4, r28
	addi     r3, r30, 8
	bl       calc_c__15JPABaseParticleFP18JPAEmitterWorkData
	clrlwi.  r0, r3, 0x18
	beq      lbl_800970C8
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	beq      lbl_8009700C
	lwz      r4, 0(r30)
	cmplwi   r4, 0
	beq      lbl_8009700C
	stw      r3, 4(r4)
	lwz      r0, 0(r30)
	lwz      r3, 4(r30)
	stw      r0, 0(r3)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)
	b        lbl_80097078

lbl_8009700C:
	cmplwi   r3, 0
	beq      lbl_80097034
	li       r0, 0
	stw      r0, 0(r3)
	lwz      r0, 4(r30)
	stw      r0, 0xd4(r29)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)
	b        lbl_80097078

lbl_80097034:
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80097060
	li       r0, 0
	stw      r0, 4(r3)
	lwz      r0, 0(r30)
	stw      r0, 0xd8(r29)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)
	b        lbl_80097078

lbl_80097060:
	li       r0, 0
	stw      r0, 0xd8(r29)
	stw      r0, 0xd4(r29)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)

lbl_80097078:
	lwz      r4, 0xe0(r29)
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_800970A8
	li       r0, 0
	stw      r0, 0(r30)
	lwz      r0, 0(r4)
	stw      r0, 4(r30)
	lwz      r3, 0(r4)
	stw      r30, 0(r3)
	stw      r30, 0(r4)
	b        lbl_800970BC

lbl_800970A8:
	stw      r30, 4(r4)
	li       r0, 0
	stw      r30, 0(r4)
	stw      r0, 0(r30)
	stw      r0, 4(r30)

lbl_800970BC:
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)

lbl_800970C8:
	mr       r30, r31

lbl_800970CC:
	cmplwi   r30, 0
	bne      lbl_80096FBC
	lwz      r3, 0x100(r29)
	addi     r0, r3, 1
	stw      r0, 0x100(r29)

lbl_800970E0:
	li       r3, 0

lbl_800970E4:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800970F8
 * Size:	0000F0
 */
void JPAResource::draw(JPAEmitterWorkData*, JPABaseEmitter*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r30, 0(r4)
	stw      r28, 4(r4)
	stb      r0, 0x216(r4)
	bl       calcWorkData_d__11JPAResourceFP18JPAEmitterWorkData
	lwz      r3, 0x1c(r28)
	mr       r4, r29
	bl       setGX__12JPABaseShapeCFP18JPAEmitterWorkData
	li       r31, 1
	b        lbl_800971BC

lbl_80097148:
	lbz      r3, 0x216(r29)
	addi     r0, r3, 1
	stb      r0, 0x216(r29)
	lwz      r3, 0x1c(r28)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 9, 9
	beq      lbl_80097180
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_80097180
	mr       r3, r28
	mr       r4, r29
	bl       drawC__11JPAResourceFP18JPAEmitterWorkData

lbl_80097180:
	mr       r3, r28
	mr       r4, r29
	bl       drawP__11JPAResourceFP18JPAEmitterWorkData
	lwz      r3, 0x1c(r28)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 9, 9
	bne      lbl_800971B8
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_800971B8
	mr       r3, r28
	mr       r4, r29
	bl       drawC__11JPAResourceFP18JPAEmitterWorkData

lbl_800971B8:
	addi     r31, r31, 1

lbl_800971BC:
	lbz      r0, 0x110(r30)
	cmpw     r31, r0
	ble      lbl_80097148
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
 * Address:	800971E8
 * Size:	000334
 */
void JPAResource::drawP(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0(r4)
	lwz      r0, 0xf4(r3)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0xf4(r3)
	lwz      r3, 0x1c(r30)
	lwz      r4, 0(r4)
	lwz      r3, 0(r3)
	lfs      f1, 0xb0(r4)
	lfs      f0, 0x10(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r31)
	lwz      r3, 0x1c(r30)
	lwz      r4, 0(r31)
	lwz      r3, 0(r3)
	lfs      f1, 0xb4(r4)
	lfs      f0, 0x14(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1c
	bne      lbl_80097270
	lfs      f1, 0x144(r31)
	lfs      f0, lbl_80516C58@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r31)
	b        lbl_80097298

lbl_80097270:
	cmplwi   r0, 1
	bne      lbl_80097298
	lfs      f2, 0x144(r31)
	lfs      f1, lbl_80516C58@sda21(r2)
	lfs      f0, lbl_80516C5C@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x144(r31)
	lfs      f1, 0x148(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)

lbl_80097298:
	lwz      r3, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_80097308
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80097308
	lis      r0, 0x4330
	rlwinm   r3, r3, 0x14, 0x1e, 0x1f
	stw      r3, 0xc(r1)
	lfd      f2, lbl_80516C68@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80516C60@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x10(r1)
	fsubs    f0, f0, f2
	fsubs    f0, f0, f1
	stfs     f0, 0x14c(r31)
	lwz      r3, 0x20(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x12, 0x1e, 0x1f
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fsubs    f0, f0, f1
	stfs     f0, 0x150(r31)
	b        lbl_80097314

lbl_80097308:
	lfs      f0, lbl_80516C64@sda21(r2)
	stfs     f0, 0x150(r31)
	stfs     f0, 0x14c(r31)

lbl_80097314:
	lwz      r3, 0x1c(r30)
	li       r4, 1
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x1c, 0x1d, 0x1f
	stw      r0, 0x200(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x19, 0x1d, 0x1f
	stw      r0, 0x204(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 4
	beq      lbl_80097364
	cmplwi   r0, 8
	beq      lbl_80097364
	li       r4, 0

lbl_80097364:
	clrlwi   r0, r4, 0x18
	stw      r0, 0x20c(r31)
	lwz      r0, 0x20c(r31)
	cmplwi   r0, 0
	beq      lbl_80097380
	li       r0, 2
	b        lbl_80097390

lbl_80097380:
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x16, 0x1f, 0x1f

lbl_80097390:
	stw      r0, 0x208(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 0xb, 0xb
	beq      lbl_800973B4
	rlwinm   r3, r3, 8, 0x1f, 0x1f
	addi     r0, r3, 1
	b        lbl_800973B8

lbl_800973B4:
	li       r0, 0

lbl_800973B8:
	stw      r0, 0x210(r31)
	mr       r3, r30
	lwz      r4, 0(r31)
	addi     r0, r4, 0xc8
	stw      r0, 0x1e4(r31)
	bl       setPTev__11JPAResourceFv
	lbz      r3, 0x42(r30)
	addi     r28, r3, -1
	slwi     r29, r28, 2
	b        lbl_800973FC

lbl_800973E0:
	lwz      r4, 4(r30)
	mr       r3, r31
	lwzx     r12, r4, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r28, r28, -1

lbl_800973FC:
	cmpwi    r28, 0
	bge      lbl_800973E0
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_8009747C
	lwz      r3, 0(r31)
	lwz      r28, 0xcc(r3)
	b        lbl_80097470

lbl_80097424:
	stw      r28, 0x1e8(r31)
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8009746C
	lbz      r3, 0x45(r30)
	addi     r27, r3, -1
	slwi     r29, r27, 2
	b        lbl_80097464

lbl_80097444:
	lwz      r5, 0x10(r30)
	mr       r3, r31
	addi     r4, r28, 8
	lwzx     r12, r5, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r27, r27, -1

lbl_80097464:
	cmpwi    r27, 0
	bge      lbl_80097444

lbl_8009746C:
	lwz      r28, 0(r28)

lbl_80097470:
	cmplwi   r28, 0
	bne      lbl_80097424
	b        lbl_800974DC

lbl_8009747C:
	lwz      r3, 0(r31)
	lwz      r27, 0xc8(r3)
	b        lbl_800974D4

lbl_80097488:
	stw      r27, 0x1e8(r31)
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_800974D0
	lbz      r3, 0x45(r30)
	addi     r28, r3, -1
	slwi     r29, r28, 2
	b        lbl_800974C8

lbl_800974A8:
	lwz      r5, 0x10(r30)
	mr       r3, r31
	addi     r4, r27, 8
	lwzx     r12, r5, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r28, r28, -1

lbl_800974C8:
	cmpwi    r28, 0
	bge      lbl_800974A8

lbl_800974D0:
	lwz      r27, 4(r27)

lbl_800974D4:
	cmplwi   r27, 0
	bne      lbl_80097488

lbl_800974DC:
	li       r3, 1
	li       r4, 0
	bl       GXSetMisc
	lwz      r4, 0(r31)
	lwz      r3, 0xec(r4)
	cmplwi   r3, 0
	beq      lbl_80097508
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80097508:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009751C
 * Size:	0002F0
 */
void JPAResource::drawC(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0(r4)
	lwz      r0, 0xf4(r3)
	ori      r0, r0, 0x80
	stw      r0, 0xf4(r3)
	lwz      r3, 0x24(r30)
	lwz      r4, 0(r3)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0xf, 0xf
	beq      lbl_80097594
	lwz      r3, 0x1c(r30)
	lwz      r4, 0(r31)
	lwz      r3, 0(r3)
	lfs      f1, 0xb0(r4)
	lfs      f0, 0x10(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r31)
	lwz      r3, 0x1c(r30)
	lwz      r4, 0(r31)
	lwz      r3, 0(r3)
	lfs      f1, 0xb4(r4)
	lfs      f0, 0x14(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)
	b        lbl_800975C4

lbl_80097594:
	lwz      r3, 0(r31)
	lfs      f0, 0x20(r4)
	lfs      f1, 0xb0(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r31)
	lwz      r3, 0x24(r30)
	lwz      r4, 0(r31)
	lwz      r3, 0(r3)
	lfs      f1, 0xb4(r4)
	lfs      f0, 0x24(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)

lbl_800975C4:
	lwz      r3, 0x24(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1c
	bne      lbl_800975EC
	lfs      f1, 0x144(r31)
	lfs      f0, lbl_80516C58@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r31)
	b        lbl_80097614

lbl_800975EC:
	cmplwi   r0, 1
	bne      lbl_80097614
	lfs      f2, 0x144(r31)
	lfs      f1, lbl_80516C58@sda21(r2)
	lfs      f0, lbl_80516C5C@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x144(r31)
	lfs      f1, 0x148(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)

lbl_80097614:
	lfs      f0, lbl_80516C64@sda21(r2)
	li       r4, 1
	stfs     f0, 0x150(r31)
	stfs     f0, 0x14c(r31)
	lwz      r3, 0x24(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x1c, 0x1d, 0x1f
	stw      r0, 0x200(r31)
	lwz      r3, 0x24(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x19, 0x1d, 0x1f
	stw      r0, 0x204(r31)
	lwz      r3, 0x24(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 4
	beq      lbl_80097670
	cmplwi   r0, 8
	beq      lbl_80097670
	li       r4, 0

lbl_80097670:
	clrlwi   r0, r4, 0x18
	stw      r0, 0x20c(r31)
	lwz      r0, 0x20c(r31)
	cmplwi   r0, 0
	beq      lbl_8009768C
	li       r0, 2
	b        lbl_8009769C

lbl_8009768C:
	lwz      r3, 0x24(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x16, 0x1f, 0x1f

lbl_8009769C:
	stw      r0, 0x208(r31)
	li       r0, 0
	mr       r3, r30
	mr       r4, r31
	stw      r0, 0x210(r31)
	lwz      r5, 0(r31)
	addi     r0, r5, 0xd4
	stw      r0, 0x1e4(r31)
	bl       setCTev__11JPAResourceFP18JPAEmitterWorkData
	lbz      r3, 0x43(r30)
	addi     r28, r3, -1
	slwi     r29, r28, 2
	b        lbl_800976EC

lbl_800976D0:
	lwz      r4, 8(r30)
	mr       r3, r31
	lwzx     r12, r4, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r28, r28, -1

lbl_800976EC:
	cmpwi    r28, 0
	bge      lbl_800976D0
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_8009776C
	lwz      r3, 0(r31)
	lwz      r28, 0xd8(r3)
	b        lbl_80097760

lbl_80097714:
	stw      r28, 0x1e8(r31)
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_8009775C
	lbz      r3, 0x47(r30)
	addi     r27, r3, -1
	slwi     r29, r27, 2
	b        lbl_80097754

lbl_80097734:
	lwz      r5, 0x18(r30)
	mr       r3, r31
	addi     r4, r28, 8
	lwzx     r12, r5, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r27, r27, -1

lbl_80097754:
	cmpwi    r27, 0
	bge      lbl_80097734

lbl_8009775C:
	lwz      r28, 0(r28)

lbl_80097760:
	cmplwi   r28, 0
	bne      lbl_80097714
	b        lbl_800977CC

lbl_8009776C:
	lwz      r3, 0(r31)
	lwz      r27, 0xd4(r3)
	b        lbl_800977C4

lbl_80097778:
	stw      r27, 0x1e8(r31)
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_800977C0
	lbz      r3, 0x47(r30)
	addi     r28, r3, -1
	slwi     r29, r28, 2
	b        lbl_800977B8

lbl_80097798:
	lwz      r5, 0x18(r30)
	mr       r3, r31
	addi     r4, r27, 8
	lwzx     r12, r5, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r28, r28, -1

lbl_800977B8:
	cmpwi    r28, 0
	bge      lbl_80097798

lbl_800977C0:
	lwz      r27, 4(r27)

lbl_800977C4:
	cmplwi   r27, 0
	bne      lbl_80097778

lbl_800977CC:
	li       r3, 1
	li       r4, 0
	bl       GXSetMisc
	lwz      r4, 0(r31)
	lwz      r3, 0xec(r4)
	cmplwi   r3, 0
	beq      lbl_800977F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_800977F8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009780C
 * Size:	000278
 */
void JPAResource::setPTev()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 1
	stmw     r26, 0x18(r1)
	mr       r26, r3
	li       r30, 1
	li       r29, 1
	li       r28, 1
	li       r27, 0
	lwz      r3, 0x1c(r3)
	lwz      r3, 0(r3)
	lwz      r31, 8(r3)
	clrlwi   r3, r31, 0x1c
	cmplwi   r3, 3
	beq      lbl_80097858
	cmplwi   r3, 7
	beq      lbl_80097858
	li       r0, 0

lbl_80097858:
	clrlwi   r4, r0, 0x18
	lwz      r5, 0x20(r26)
	neg      r3, r4
	rlwinm   r0, r31, 0x16, 0x1f, 0x1f
	or       r3, r3, r4
	cmplwi   r5, 0
	srawi    r3, r3, 0x1f
	and      r4, r0, r3
	beq      lbl_8009789C
	lwz      r3, 0(r5)
	lwz      r3, 8(r3)
	rlwinm   r0, r3, 0x12, 0x1e, 0x1f
	rlwinm   r3, r3, 0x14, 0x1e, 0x1f
	mulli    r0, r0, 3
	add      r0, r3, r0
	mulli    r6, r0, 0xc
	b        lbl_800978A0

lbl_8009789C:
	li       r6, 0x30

lbl_800978A0:
	mulli    r5, r4, 0x6c
	lis      r4, jpa_pos@ha
	li       r3, 9
	addi     r0, r4, jpa_pos@l
	add      r4, r6, r5
	li       r5, 3
	add      r4, r4, r0
	bl       GXSetArray
	rlwinm   r3, r31, 7, 0x1f, 0x1f
	rlwinm   r0, r31, 7, 0x1e, 0x1e
	add      r0, r3, r0
	li       r5, 2
	lis      r3, jpa_crd@ha
	slwi     r4, r0, 3
	addi     r0, r3, jpa_crd@l
	li       r3, 0xd
	add      r4, r0, r4
	bl       GXSetArray
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0xff
	bl       GXSetTevOrder
	lwz      r3, 0x28(r26)
	cmplwi   r3, 0
	beq      lbl_80097A24
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8009798C
	li       r3, 0
	li       r4, 1
	li       r5, 2
	bl       GXSetIndTexOrder
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	lwz      r4, 0x28(r26)
	li       r3, 1
	lwz      r4, 0(r4)
	lbz      r5, 0x24(r4)
	addi     r4, r4, 0xc
	bl       GXSetIndTexMtx
	li       r0, 0
	li       r3, 0
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 7
	stw      r0, 0xc(r1)
	li       r7, 1
	li       r8, 0
	li       r9, 0
	li       r10, 0
	bl       GXSetTevIndirect
	li       r30, 2
	li       r27, 1
	li       r28, 2

lbl_8009798C:
	lwz      r3, 0x28(r26)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80097A24
	mr       r4, r30
	li       r3, 1
	li       r5, 3
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 1
	li       r4, 0xf
	li       r5, 8
	li       r6, 0
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 1
	li       r4, 7
	li       r5, 4
	li       r6, 0
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r29, 2
	addi     r28, r28, 1

lbl_80097A24:
	mr       r3, r29
	bl       GXSetNumTevStages
	mr       r3, r27
	bl       GXSetNumIndStages
	lwz      r3, 0x1c(r26)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 8, 8
	beq      lbl_80097A60
	li       r3, 1
	li       r4, 8
	bl       GXSetMisc
	li       r3, 0
	bl       GXSetClipMode
	b        lbl_80097A68

lbl_80097A60:
	li       r3, 1
	bl       GXSetClipMode

lbl_80097A68:
	mr       r3, r28
	bl       GXSetNumTexGens
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80097A84
 * Size:	000164
 */
void JPAResource::setCTev(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x24(r3)
	lwz      r3, 0(r3)
	lwz      r4, 8(r3)
	clrlwi   r3, r4, 0x1c
	cmplwi   r3, 3
	beq      lbl_80097AC8
	cmplwi   r3, 7
	beq      lbl_80097AC8
	li       r0, 0

lbl_80097AC8:
	clrlwi   r5, r0, 0x18
	lis      r3, jpa_pos@ha
	neg      r0, r5
	rlwinm   r4, r4, 0x16, 0x1f, 0x1f
	or       r5, r0, r5
	addi     r0, r3, jpa_pos@l
	srawi    r5, r5, 0x1f
	li       r3, 9
	and      r4, r4, r5
	li       r5, 3
	mulli    r4, r4, 0x6c
	add      r4, r4, r0
	addi     r4, r4, 0x30
	bl       GXSetArray
	lis      r4, jpa_crd@ha
	li       r3, 0xd
	addi     r4, r4, jpa_crd@l
	li       r5, 2
	bl       GXSetArray
	li       r3, 0
	li       r4, 0
	li       r5, 1
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	li       r3, 0
	bl       GXSetTevDirect
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	bl       GXSetNumIndStages
	lwz      r3, 0x24(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0xb, 0xb
	beq      lbl_80097B88
	li       r3, 1
	li       r4, 8
	bl       GXSetMisc
	li       r3, 0
	bl       GXSetClipMode
	b        lbl_80097B90

lbl_80097B88:
	li       r3, 1
	bl       GXSetClipMode

lbl_80097B90:
	li       r3, 1
	bl       GXSetNumTexGens
	lwz      r3, 0x24(r30)
	li       r4, 1
	lwz      r5, 4(r31)
	lwz      r3, 0(r3)
	lwz      r6, 8(r31)
	lbz      r0, 0x45(r3)
	lwz      r3, 0x38(r5)
	slwi     r0, r0, 1
	lwz      r5, 8(r6)
	lhzx     r0, r3, r0
	slwi     r0, r0, 2
	lwzx     r3, r5, r0
	addi     r3, r3, 4
	bl       load__10JUTTextureF11_GXTexMapID
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
 * Address:	80097BE8
 * Size:	000074
 */
void JPAResource::calc_p(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	if (_0C == nullptr) {
		return;
	}
	for (int i = _44 - 1; 0 <= i; i--) {
		_0C[i](workData, particle);
	}
}

/*
 * --INFO--
 * Address:	80097C5C
 * Size:	000074
 */
void JPAResource::calc_c(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	if (_14 == nullptr) {
		return;
	}
	for (int i = _46 - 1; 0 <= i; i--) {
		_14[i](workData, particle);
	}
}

/*
 * --INFO--
 * Address:	80097CD0
 * Size:	000074
 */
void JPAResource::calcField(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	lbz      r3, 0x3e(r3)
	addi     r30, r3, -1
	slwi     r31, r30, 2
	b        lbl_80097D28

lbl_80097CFC:
	lwz      r3, 0x30(r27)
	mr       r4, r28
	mr       r6, r29
	lwzx     r5, r3, r31
	lwz      r3, 4(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, -4
	addi     r30, r30, -1

lbl_80097D28:
	cmpwi    r30, 0
	bge      lbl_80097CFC
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80097D44
 * Size:	000138
 */
void JPAResource::calcKey(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lfd      f31, lbl_80516C68@sda21(r2)
	lbz      r3, 0x3f(r3)
	mr       r28, r4
	lis      r31, 0x4330
	addi     r29, r3, -1
	slwi     r30, r29, 2
	b        lbl_80097E58

lbl_80097D7C:
	lwz      r3, 0(r28)
	lwz      r4, 0x34(r27)
	lwz      r0, 0x100(r3)
	stw      r31, 8(r1)
	lwzx     r3, r4, r30
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f31
	bl       calc__11JPAKeyBlockFf
	lwz      r3, 0x34(r27)
	lwzx     r3, r3, r30
	lwz      r3, 0(r3)
	lbz      r0, 8(r3)
	cmplwi   r0, 0xa
	bgt      lbl_80097E50
	lis      r3, lbl_804A3558@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A3558@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80097DD0

lbl_80097DD0:
	lwz      r3, 0(r28)
	stfs     f1, 0x28(r3)
	b        lbl_80097E50
	.global  lbl_80097DDC

lbl_80097DDC:
	fctiwz   f0, f1
	lwz      r3, 0(r28)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, 0x54(r3)
	b        lbl_80097E50
	.global  lbl_80097DF4

lbl_80097DF4:
	lwz      r3, 0(r28)
	stfs     f1, 0x30(r3)
	b        lbl_80097E50
	.global  lbl_80097E00

lbl_80097E00:
	fctiwz   f0, f1
	lwz      r3, 0(r28)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, 0x52(r3)
	b        lbl_80097E50
	.global  lbl_80097E18

lbl_80097E18:
	lwz      r3, 0(r28)
	stfs     f1, 0x34(r3)
	b        lbl_80097E50
	.global  lbl_80097E24

lbl_80097E24:
	lwz      r3, 0(r28)
	stfs     f1, 0x38(r3)
	b        lbl_80097E50
	.global  lbl_80097E30

lbl_80097E30:
	lwz      r3, 0(r28)
	stfs     f1, 0x3c(r3)
	b        lbl_80097E50
	.global  lbl_80097E3C

lbl_80097E3C:
	lwz      r3, 0(r28)
	stfs     f1, 0x40(r3)
	b        lbl_80097E50
	.global  lbl_80097E48

lbl_80097E48:
	lwz      r3, 0(r28)
	stfs     f1, 0xfc(r3)
	.global  lbl_80097E50

lbl_80097E50:
	addi     r30, r30, -4
	addi     r29, r29, -1

lbl_80097E58:
	cmpwi    r29, 0
	bge      lbl_80097D7C
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80097E7C
 * Size:	0001DC
 */
void JPAResource::calcWorkData_c(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lfd      f1, lbl_80516C68@sda21(r2)
	stw      r0, 0xb4(r1)
	lis      r0, 0x4330
	stw      r31, 0xac(r1)
	mr       r31, r4
	lwz      r5, 0(r4)
	li       r4, 0
	stw      r0, 0x98(r1)
	li       r0, 1
	lhz      r5, 0x54(r5)
	stw      r5, 0x9c(r1)
	lfd      f0, 0x98(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x34(r31)
	lwz      r5, 0(r31)
	lfs      f0, 0x30(r5)
	stfs     f0, 0x38(r31)
	lwz      r5, 0(r31)
	lfs      f0, 0x2c(r5)
	stfs     f0, 0x3c(r31)
	stw      r4, 0x1f4(r31)
	stw      r4, 0x1ec(r31)
	stw      r0, 0x1f0(r31)
	lwz      r4, 0x2c(r3)
	addi     r3, r1, 0x68
	lwz      r4, 0(r4)
	lhz      r0, 0x76(r4)
	slwi     r4, r0, 1
	addi     r0, r4, 1
	stw      r0, 0x1f8(r31)
	lwz      r4, 0(r31)
	lfs      f1, 0(r4)
	lfs      f2, 4(r4)
	lfs      f3, 8(r4)
	bl       PSMTXScale
	lwz      r5, 0(r31)
	addi     r6, r1, 0x38
	lha      r4, 0x4c(r5)
	lha      r3, 0x4e(r5)
	lha      r0, 0x50(r5)
	mulli    r5, r4, 0xb6
	mulli    r4, r3, 0xb6
	extsh    r3, r5
	mulli    r0, r0, 0xb6
	extsh    r4, r4
	extsh    r5, r0
	bl       JPAGetXYZRotateMtx__FsssPA4_f
	lwz      r4, 0(r31)
	addi     r3, r1, 8
	lfs      f1, 0x98(r4)
	lfs      f2, 0x9c(r4)
	lfs      f3, 0xa0(r4)
	bl       PSMTXScale
	lwz      r3, 0(r31)
	addi     r4, r1, 8
	mr       r5, r4
	addi     r3, r3, 0x68
	bl       PSMTXConcat
	lwz      r5, 0(r31)
	addi     r4, r31, 0x78
	lfs      f0, 0xa4(r5)
	addi     r3, r5, 0x68
	stfs     f0, 0x14(r1)
	lfs      f0, 0xa8(r5)
	stfs     f0, 0x24(r1)
	lfs      f0, 0xac(r5)
	stfs     f0, 0x34(r1)
	bl       PSMTXCopy
	addi     r3, r31, 0x78
	addi     r4, r1, 0x38
	addi     r5, r31, 0xa8
	bl       PSMTXConcat
	addi     r3, r31, 0xa8
	addi     r4, r1, 0x68
	addi     r5, r31, 0xd8
	bl       PSMTXConcat
	lwz      r3, 0(r31)
	addi     r4, r31, 0x48
	lfs      f0, 0xc(r3)
	stfs     f0, 0x108(r31)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x10c(r31)
	lfs      f0, 0x14(r3)
	stfs     f0, 0x110(r31)
	lwz      r3, 0(r31)
	lfs      f1, 0x98(r3)
	lfs      f0, 0(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x114(r31)
	lfs      f1, 0x9c(r3)
	lfs      f0, 4(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x118(r31)
	lfs      f1, 0xa0(r3)
	lfs      f0, 8(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x11c(r31)
	lwz      r3, 0(r31)
	addi     r3, r3, 0x18
	bl       "JPAGetDirMtx__FRCQ29JGeometry8TVec3<f>PA4_f"
	lwz      r4, 0(r31)
	addi     r3, r1, 8
	addi     r5, r31, 0x138
	lfs      f0, 0x98(r4)
	stfs     f0, 0x12c(r31)
	lfs      f0, 0x9c(r4)
	stfs     f0, 0x130(r31)
	lfs      f0, 0xa0(r4)
	stfs     f0, 0x134(r31)
	lwz      r4, 0(r31)
	addi     r4, r4, 0xc
	bl       PSMTXMultVec
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098058
 * Size:	000080
 */
void JPAResource::calcWorkData_d(JPAEmitterWorkData* workData)
{
	Mtx v1;
	JPAGetXYZRotateMtx(workData->m_emitter->_4C * 182, workData->m_emitter->_4E * 182, workData->m_emitter->_50 * 182, v1);
	PSMTXConcat(workData->m_emitter->_68, v1, workData->_A8);
	PSMTXMultVecSR(workData->_A8, reinterpret_cast<Vec*>(&workData->m_emitter->_18), reinterpret_cast<Vec*>(&workData->_120));
}
