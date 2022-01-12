#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804840F8
    lbl_804840F8:
        .4byte 0x00000004
        .4byte 0x00000003
        .4byte 0x00000005
        .4byte 0x00000006
        .4byte 0x00000007
    .global lbl_8048410C
    lbl_8048410C:
        .4byte 0x00000001
        .4byte 0x00000000
        .4byte 0x00000002
    .global lbl_80484118
    lbl_80484118:
        .4byte 0x00000001
        .4byte 0x00000000
        .4byte 0x00000002
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave10FixObjNode
    __vt__Q34Game4Cave10FixObjNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave10FixObjNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte getObjectId__Q34Game4Cave10FixObjNodeFv
        .4byte getObjectType__Q34Game4Cave10FixObjNodeFv
        .4byte getBirthCount__Q34Game4Cave10FixObjNodeFv
        .4byte getDirection__Q34Game4Cave10FixObjNodeFv
        .4byte getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv
        .4byte getBirthPosition__Q34Game4Cave10FixObjNodeFRfRf
        .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
        .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A7F8
    lbl_8051A7F8:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051A800
    lbl_8051A800:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A808
    lbl_8051A808:
        .float 1.0
    .global lbl_8051A80C
    lbl_8051A80C:
        .float 0.5
    .global lbl_8051A810
    lbl_8051A810:
        .4byte 0x00000001
    .global lbl_8051A814
    lbl_8051A814:
        .4byte 0x00000002
    .global lbl_8051A818
    lbl_8051A818:
        .4byte 0x01010000
    .global lbl_8051A81C
    lbl_8051A81C:
        .4byte 0x00000000
    .global lbl_8051A820
    lbl_8051A820:
        .4byte 0x6974656D
        .4byte 0x00000000
    .global lbl_8051A828
    lbl_8051A828:
        .4byte 0x00000001
    .global lbl_8051A82C
    lbl_8051A82C:
        .4byte 0x00000002
    .global lbl_8051A830
    lbl_8051A830:
        .4byte 0x01010000
    .global lbl_8051A834
    lbl_8051A834:
        .4byte 0x43160000

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
    .global lbl_80520EA8
    lbl_80520EA8:
        .skip 0x4
    .global lbl_80520EAC
    lbl_80520EAC:
        .skip 0x4
    .global lbl_80520EB0
    lbl_80520EB0:
        .skip 0x4
    .global lbl_80520EB4
    lbl_80520EB4:
        .skip 0x4
*/

namespace Game {

/*
 * --INFO--
 * Address:	8024C878
 * Size:	0000A8
 */
Cave::RandMapScore::RandMapScore(Game::Cave::MapUnitGenerator*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0(r3)
	li       r3, 0x14
	stw      r0, 0xc(r31)
	stw      r0, 0x10(r31)
	bl       __nwa__FUl
	stw      r3, 4(r31)
	li       r3, 0x14
	bl       __nwa__FUl
	stw      r3, 8(r31)
	li       r0, 0
	mr       r3, r31
	lwz      r4, 4(r31)
	stw      r0, 0(r4)
	lwz      r4, 8(r31)
	stw      r0, 0(r4)
	lwz      r4, 4(r31)
	stw      r0, 4(r4)
	lwz      r4, 8(r31)
	stw      r0, 4(r4)
	lwz      r4, 4(r31)
	stw      r0, 8(r4)
	lwz      r4, 8(r31)
	stw      r0, 8(r4)
	lwz      r4, 4(r31)
	stw      r0, 0xc(r4)
	lwz      r4, 8(r31)
	stw      r0, 0xc(r4)
	lwz      r4, 4(r31)
	stw      r0, 0x10(r4)
	lwz      r4, 8(r31)
	stw      r0, 0x10(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C920
 * Size:	00006C
 */
void Cave::RandMapScore::setMapUnitScore(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       clearRoomAndDoorScore__Q34Game4Cave12RandMapScoreFv
	mr       r3, r30
	bl       isScoreSetDone__Q34Game4Cave12RandMapScoreFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024C974
	li       r31, 0

lbl_8024C950:
	mr       r3, r30
	bl       setUnitAndDoorScore__Q34Game4Cave12RandMapScoreFv
	mr       r3, r30
	bl       isScoreSetDone__Q34Game4Cave12RandMapScoreFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024C974
	addi     r31, r31, 1
	cmpwi    r31, 0x1f4
	blt      lbl_8024C950

lbl_8024C974:
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
 * Address:	8024C98C
 * Size:	000038
 */
void Cave::RandMapScore::setStartSlot(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0(r3)
	lbz      r0, 2(r4)
	cmplwi   r0, 0
	beq      lbl_8024C9B0
	bl       setVersusOnyon__Q34Game4Cave12RandMapScoreFv
	b        lbl_8024C9B4

lbl_8024C9B0:
	bl       setChallengePod__Q34Game4Cave12RandMapScoreFv

lbl_8024C9B4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C9C4
 * Size:	000058
 */
void Cave::RandMapScore::setGoalSlot(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0(r3)
	lbz      r0, 2(r4)
	cmplwi   r0, 0
	bne      lbl_8024CA08
	bl       isGoalSetHard__Q34Game4Cave12RandMapScoreFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024CA00
	mr       r3, r31
	bl       setChallengeFixObjHard__Q34Game4Cave12RandMapScoreFv
	b        lbl_8024CA08

lbl_8024CA00:
	mr       r3, r31
	bl       setChallengeFixObjNormal__Q34Game4Cave12RandMapScoreFv

lbl_8024CA08:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024CA1C
 * Size:	00018C
 */
void Cave::RandMapScore::makeObjectLayout(Game::Cave::MapNode*, Game::Cave::ObjectLayout*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stmw      r24, 0x30(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  addi      r29, r1, 0x14
	  li        r28, 0
	  li        r30, 0

	.loc_0x40:
	  lwz       r3, 0x4(r25)
	  lwzx      r0, r3, r30
	  cmplw     r26, r0
	  bne-      .loc_0x14C
	  lis       r4, 0x8048
	  li        r3, 0x2C
	  addi      r8, r4, 0x40F8
	  lwz       r7, 0x0(r8)
	  lwz       r6, 0x4(r8)
	  lwz       r5, 0x8(r8)
	  lwz       r4, 0xC(r8)
	  lwz       r0, 0x10(r8)
	  stw       r7, 0x14(r1)
	  stw       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)
	  bl        -0x228BFC
	  mr.       r31, r3
	  beq-      .loc_0xB4
	  bl        0x1C48E4
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  addi      r4, r4, 0x1AA8
	  lwz       r0, 0x0(r29)
	  stw       r4, 0x0(r31)
	  addi      r3, r3, 0x1B18
	  stw       r3, 0x0(r31)
	  stw       r0, 0x18(r31)

	.loc_0xB4:
	  li        r3, 0x2C
	  bl        -0x228C30
	  mr.       r24, r3
	  beq-      .loc_0xE8
	  bl        0x1C48B0
	  lis       r4, 0x804C
	  lis       r3, 0x804C
	  addi      r4, r4, 0x1AA8
	  lwz       r0, 0x0(r29)
	  stw       r4, 0x0(r24)
	  addi      r3, r3, 0x1B18
	  stw       r3, 0x0(r24)
	  stw       r0, 0x18(r24)

	.loc_0xE8:
	  lwz       r4, 0x4(r25)
	  addi      r3, r1, 0x8
	  lwz       r5, 0x8(r25)
	  lwzx      r4, r4, r30
	  lwzx      r5, r5, r30
	  bl        -0x903C
	  lwz       r3, 0x4(r25)
	  lwz       r4, 0x8(r25)
	  lfs       f31, 0x8(r1)
	  lfs       f30, 0xC(r1)
	  lfs       f29, 0x10(r1)
	  lwzx      r3, r3, r30
	  lwzx      r4, r4, r30
	  bl        -0x8C3C
	  stfs      f31, 0x20(r24)
	  mr        r3, r31
	  mr        r4, r24
	  stfs      f30, 0x24(r24)
	  stfs      f29, 0x28(r24)
	  stfs      f1, 0x1C(r24)
	  bl        0x1C48B4
	  lwz       r4, 0x0(r29)
	  mr        r3, r27
	  mr        r5, r31
	  bl        0x3D8C

	.loc_0x14C:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x5
	  addi      r30, r30, 0x4
	  blt+      .loc_0x40
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  lmw       r24, 0x30(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024CBA8
 * Size:	000010
 */
void Cave::RandMapScore::getFixObjNode(int)
{
	/*
	lwz      r3, 4(r3)
	slwi     r0, r4, 2
	lwzx     r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024CBB8
 * Size:	000010
 */
void Cave::RandMapScore::getFixObjGen(int)
{
	/*
	lwz      r3, 8(r3)
	slwi     r0, r4, 2
	lwzx     r3, r3, r0
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8024CBC8
 * Size:	000064
 */
void getGlobalPosition__Q34Game4Cave12RandMapScoreFiR10Vector3f(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	slwi     r0, r4, 2
	stw      r31, 0x1c(r1)
	mr       r31, r5
	lwz      r4, 4(r3)
	lwzx     r4, r4, r0
	cmplwi   r4, 0
	beq      lbl_8024CC18
	lwz      r5, 8(r3)
	addi     r3, r1, 8
	lwzx     r5, r5, r0
	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen lfs
f0, 8(r1) stfs     f0, 0(r31) lfs      f0, 0xc(r1) stfs     f0, 4(r31) lfs f0,
0x10(r1) stfs     f0, 8(r31)

lbl_8024CC18:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8024CC2C
 * Size:	000008
 */
void Cave::RandMapScore::getVersusHighScore(void)
{
	/*
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024CC34
 * Size:	000008
 */
void Cave::RandMapScore::getVersusLowScore(void)
{
	/*
	lwz      r3, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024CC3C
 * Size:	000084
 */
void Cave::RandMapScore::isScoreSetDone(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r31, 0x10(r3)
	b        lbl_8024CC9C

lbl_8024CC60:
	li       r30, 0
	b        lbl_8024CC88

lbl_8024CC68:
	mr       r3, r31
	mr       r4, r30
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024CC84
	li       r3, 0
	b        lbl_8024CCA8

lbl_8024CC84:
	addi     r30, r30, 1

lbl_8024CC88:
	mr       r3, r31
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r30, r3
	blt      lbl_8024CC68
	lwz      r31, 4(r31)

lbl_8024CC9C:
	cmplwi   r31, 0
	bne      lbl_8024CC60
	li       r3, 1

lbl_8024CCA8:
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
 * Address:	8024CCC0
 * Size:	0000C4
 */
void Cave::RandMapScore::clearRoomAndDoorScore(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r31, 0x10(r3)
	b        lbl_8024CD08

lbl_8024CCE8:
	mr       r3, r31
	bl       setEnemyScore__Q34Game4Cave7MapNodeFv
	mr       r3, r31
	li       r4, -1
	bl       setNodeScore__Q34Game4Cave7MapNodeFi
	mr       r3, r31
	bl       resetDoorScore__Q34Game4Cave7MapNodeFv
	lwz      r31, 4(r31)

lbl_8024CD08:
	cmplwi   r31, 0
	bne      lbl_8024CCE8
	lwz      r3, 0(r30)
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	beq      lbl_8024CD54
	lwz      r3, 4(r30)
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_8024CD38
	mr       r3, r30
	bl setStartMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode

lbl_8024CD38:
	lwz      r3, 4(r30)
	lwz      r4, 0x10(r3)
	cmplwi   r4, 0
	beq      lbl_8024CD6C
	mr       r3, r30
	bl setStartMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode b
lbl_8024CD6C

lbl_8024CD54:
	lwz      r3, 4(r30)
	lwz      r4, 0(r3)
	cmplwi   r4, 0
	beq      lbl_8024CD6C
	mr       r3, r30
	bl setStartMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode

lbl_8024CD6C:
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
 * Address:	8024CD84
 * Size:	000154
 */
void Cave::RandMapScore::setUnitAndDoorScore(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, 0x00C35000@ha
	stw      r0, 0x44(r1)
	stmw     r20, 0x10(r1)
	mr       r22, r3
	addi     r27, r4, 0x00C35000@l
	li       r29, 0
	li       r28, -1
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r26, 0x10(r3)
	b        lbl_8024CE8C

lbl_8024CDB8:
	mr       r3, r26
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	mr       r3, r26
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r31, r3
	li       r25, 0
	li       r30, 0
	b        lbl_8024CE80

lbl_8024CDD8:
	mr       r3, r26
	mr       r4, r25
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024CE78
	mr       r3, r26
	mr       r4, r25
	bl       getAdjustNode__Q34Game4Cave7MapNodeFi
	lwz      r24, 0x10(r3)
	b        lbl_8024CE70

lbl_8024CE00:
	lwz      r4, 0x18(r24)
	mr       r3, r26
	lwz      r23, 0(r4)
	mr       r4, r23
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024CE6C
	lwz      r20, 0x18(r24)
	mr       r3, r26
	bl       getEnemyScore__Q34Game4Cave7MapNodeFv
	lwz      r0, 8(r20)
	mr       r4, r23
	lwz      r5, 0x28(r26)
	mullw    r6, r0, r3
	lwz      r20, 4(r20)
	addi     r0, r5, 8
	lwzx     r0, r30, r0
	mr       r3, r26
	add      r21, r0, r6
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	add      r0, r21, r3
	add      r0, r20, r0
	cmpw     r27, r0
	ble      lbl_8024CE6C
	mr       r27, r0
	mr       r29, r26
	mr       r28, r23

lbl_8024CE6C:
	lwz      r24, 4(r24)

lbl_8024CE70:
	cmplwi   r24, 0
	bne      lbl_8024CE00

lbl_8024CE78:
	addi     r30, r30, 0xc
	addi     r25, r25, 1

lbl_8024CE80:
	cmpw     r25, r31
	blt      lbl_8024CDD8
	lwz      r26, 4(r26)

lbl_8024CE8C:
	cmplwi   r26, 0
	bne      lbl_8024CDB8
	cmplwi   r29, 0
	beq      lbl_8024CEC4
	mr       r3, r29
	mr       r4, r28
	mr       r5, r27
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	mulli    r0, r28, 0xc
	lwz      r4, 0x28(r29)
	mr       r3, r22
	mr       r5, r27
	lwzx     r4, r4, r0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024CEC4:
	lmw      r20, 0x10(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024CED8
 * Size:	0000B0
 */
void Cave::RandMapScore::setStartMapNodeScore(Game::Cave::MapNode*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r29, 0
	li       r30, 0
	b        lbl_8024CF64

lbl_8024CF04:
	mr       r3, r28
	mr       r4, r29
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024CF5C
	mr       r3, r28
	mr       r4, r29
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r31, r3
	mr       r3, r28
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r31, r31, 1
	mr       r4, r29
	add      r31, r3, r31
	mr       r3, r28
	mr       r5, r31
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r28)
	mr       r3, r27
	mr       r5, r31
	lwzx     r4, r4, r30
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024CF5C:
	addi     r30, r30, 0xc
	addi     r29, r29, 1

lbl_8024CF64:
	mr       r3, r28
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r29, r3
	blt      lbl_8024CF04
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Cave::RandMapScore::getRandRoomMapNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8024CF88
 * Size:	00013C
 */
void Cave::RandMapScore::setChallengePod(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r29, r3
	lwz      r3, 4(r3)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8024D0A8
	lwz      r3, 0(r29)
	li       r31, 0
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_8024CFE8

lbl_8024CFC8:
	lwz      r3, 0x18(r30)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_8024CFE4
	lwz      r3, 4(r29)
	stw      r30, 0(r3)
	b        lbl_8024CFF0

lbl_8024CFE4:
	lwz      r30, 4(r30)

lbl_8024CFE8:
	cmplwi   r30, 0
	bne      lbl_8024CFC8

lbl_8024CFF0:
	lwz      r3, 4(r29)
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_8024D0A8
	lwz      r3, 0x18(r3)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8024D040
	lwz      r4, 0x10(r3)
	addi     r3, r1, 8
	b        lbl_8024D038

lbl_8024D01C:
	lwz      r0, 0x18(r4)
	cmpwi    r0, 7
	bne      lbl_8024D034
	stw      r4, 0(r3)
	addi     r3, r3, 4
	addi     r31, r31, 1

lbl_8024D034:
	lwz      r4, 4(r4)

lbl_8024D038:
	cmplwi   r4, 0
	bne      lbl_8024D01C

lbl_8024D040:
	cmpwi    r31, 0
	beq      lbl_8024D0A8
	bl       rand
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x4c(r1)
	xoris    r0, r31, 0x8000
	lfd      f2, lbl_8051A800@sda21(r2)
	addi     r4, r1, 8
	stw      r5, 0x48(r1)
	lfs      f0, lbl_8051A7F8@sda21(r2)
	lfd      f1, 0x48(r1)
	stw      r0, 0x54(r1)
	fsubs    f1, f1, f2
	lwz      r3, 8(r29)
	stw      r5, 0x50(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	slwi     r0, r0, 2
	lwzx     r0, r4, r0
	stw      r0, 0(r3)

lbl_8024D0A8:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024D0C4
 * Size:	0001B8
 */
void Cave::RandMapScore::setVersusOnyon(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	lwz      r3, 4(r3)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_8024D25C
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_8024D25C
	lwz      r3, 0(r31)
	addi     r28, r1, 0x18
	li       r29, 0
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_8024D138

lbl_8024D118:
	lwz      r3, 0x18(r30)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_8024D134
	stw      r30, 0(r28)
	addi     r28, r28, 4
	addi     r29, r29, 1

lbl_8024D134:
	lwz      r30, 4(r30)

lbl_8024D138:
	cmplwi   r30, 0
	bne      lbl_8024D118
	cmpwi    r29, 0
	beq      lbl_8024D1A4
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x5c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051A800@sda21(r2)
	addi     r3, r1, 0x18
	stw      r4, 0x58(r1)
	lfs      f0, lbl_8051A7F8@sda21(r2)
	lfd      f1, 0x58(r1)
	stw      r0, 0x64(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x60(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x60(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	slwi     r0, r0, 2
	lwzx     r30, r3, r0
	b        lbl_8024D1A8

lbl_8024D1A4:
	li       r30, 0

lbl_8024D1A8:
	lwz      r5, lbl_80520EA8@sda21(r2)
	cmplwi   r30, 0
	lwz      r4, lbl_80520EAC@sda21(r2)
	lwz      r3, lbl_80520EB0@sda21(r2)
	lwz      r0, lbl_80520EB4@sda21(r2)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	beq      lbl_8024D25C
	mr       r3, r31
	mr       r4, r30
	bl       calcNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode
	mr       r3, r31
	mr       r4, r30
	addi     r5, r1, 8
	bl
getMaxScoreRoomMapNode__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePPQ34Game4Cave7BaseGen
	mr       r4, r3
	mr       r3, r31
	stw      r4, 0x10(r1)
	bl       calcNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode
	mr       r3, r31
	bl       copyNodeScore__Q34Game4Cave12RandMapScoreFv
	lwz      r4, 0x10(r1)
	addi     r5, r1, 0xc
	mr       r3, r31
	bl
getMaxScoreRoomMapNode__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePPQ34Game4Cave7BaseGen
	mr       r30, r3
	mr       r3, r31
	stw      r30, 0x14(r1)
	mr       r4, r30
	bl       calcNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNode
	lwz      r0, 0x10(r1)
	mr       r3, r31
	lwz      r4, 4(r31)
	stw      r0, 0xc(r4)
	lwz      r4, 4(r31)
	stw      r30, 0x10(r4)
	lwz      r0, 8(r1)
	lwz      r4, 8(r31)
	stw      r0, 0xc(r4)
	lwz      r0, 0xc(r1)
	lwz      r4, 8(r31)
	stw      r0, 0x10(r4)
	bl       subNodeScore__Q34Game4Cave12RandMapScoreFv

lbl_8024D25C:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024D27C
 * Size:	0000FC
 */
void Cave::RandMapScore::getMaxScoreRoomMapNode(Game::Cave::MapNode*, Game::Cave::BaseGen**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r4
	  mr        r26, r5
	  li        r31, 0
	  li        r30, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r29, 0x10(r3)
	  b         .loc_0xDC

	.loc_0x30:
	  cmplw     r29, r25
	  beq-      .loc_0xD8
	  lwz       r3, 0x18(r29)
	  bl        -0xA740
	  cmpwi     r3, 0x1
	  bne-      .loc_0xD8
	  mr        r3, r29
	  bl        -0x9914
	  addi      r28, r3, 0xA
	  lwz       r3, 0x18(r29)
	  bl        -0xA714
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  lwz       r27, 0x10(r3)
	  b         .loc_0xD0

	.loc_0x6C:
	  lwz       r0, 0x18(r27)
	  cmpwi     r0, 0x7
	  bne-      .loc_0xCC
	  cmpw      r28, r30
	  bgt-      .loc_0xC0
	  bne-      .loc_0xCC
	  bl        -0x183D60
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x3B60(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x3B58(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x3B68(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x3B54(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xCC

	.loc_0xC0:
	  stw       r27, 0x0(r26)
	  mr        r31, r29
	  mr        r30, r28

	.loc_0xCC:
	  lwz       r27, 0x4(r27)

	.loc_0xD0:
	  cmplwi    r27, 0
	  bne+      .loc_0x6C

	.loc_0xD8:
	  lwz       r29, 0x4(r29)

	.loc_0xDC:
	  cmplwi    r29, 0
	  bne+      .loc_0x30
	  mr        r3, r31
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024D378
 * Size:	0003B0
 */
void Cave::RandMapScore::calcNodeScore(Game::Cave::MapNode*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_8024D3C0

lbl_8024D3A0:
	mr       r3, r29
	bl       setEnemyScore__Q34Game4Cave7MapNodeFv
	mr       r3, r29
	li       r4, -1
	bl       setNodeScore__Q34Game4Cave7MapNodeFi
	mr       r3, r29
	bl       resetDoorScore__Q34Game4Cave7MapNodeFv
	lwz      r29, 4(r29)

lbl_8024D3C0:
	cmplwi   r29, 0
	bne      lbl_8024D3A0
	lwz      r3, 0(r30)
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	beq      lbl_8024D514
	lwz      r3, 4(r30)
	lwz      r25, 0xc(r3)
	cmplwi   r25, 0
	beq      lbl_8024D474
	mr       r3, r30
	mr       r4, r25
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r27, 0
	mr       r26, r27
	b        lbl_8024D464

lbl_8024D404:
	mr       r3, r25
	mr       r4, r27
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D45C
	mr       r3, r25
	mr       r4, r27
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r25
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r28, r29, 1
	mr       r4, r27
	add      r28, r3, r28
	mr       r3, r25
	mr       r5, r28
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r25)
	mr       r3, r30
	mr       r5, r28
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D45C:
	addi     r26, r26, 0xc
	addi     r27, r27, 1

lbl_8024D464:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r27, r3
	blt      lbl_8024D404

lbl_8024D474:
	lwz      r3, 4(r30)
	lwz      r25, 0x10(r3)
	cmplwi   r25, 0
	beq      lbl_8024D5B0
	mr       r3, r30
	mr       r4, r25
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r28, 0
	mr       r26, r28
	b        lbl_8024D500

lbl_8024D4A0:
	mr       r3, r25
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D4F8
	mr       r3, r25
	mr       r4, r28
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r25
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r27, r29, 1
	mr       r4, r28
	add      r27, r3, r27
	mr       r3, r25
	mr       r5, r27
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r25)
	mr       r3, r30
	mr       r5, r27
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D4F8:
	addi     r26, r26, 0xc
	addi     r28, r28, 1

lbl_8024D500:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D4A0
	b        lbl_8024D5B0

lbl_8024D514:
	lwz      r3, 4(r30)
	lwz      r25, 0(r3)
	cmplwi   r25, 0
	beq      lbl_8024D5B0
	mr       r3, r30
	mr       r4, r25
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r28, 0
	mr       r26, r28
	b        lbl_8024D5A0

lbl_8024D540:
	mr       r3, r25
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D598
	mr       r3, r25
	mr       r4, r28
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r25
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r27, r29, 1
	mr       r4, r28
	add      r27, r3, r27
	mr       r3, r25
	mr       r5, r27
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r25)
	mr       r3, r30
	mr       r5, r27
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D598:
	addi     r26, r26, 0xc
	addi     r28, r28, 1

lbl_8024D5A0:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D540

lbl_8024D5B0:
	mr       r3, r30
	mr       r4, r31
	li       r5, 0
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei
	li       r28, 0
	mr       r26, r28
	b        lbl_8024D62C

lbl_8024D5CC:
	mr       r3, r31
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D624
	mr       r3, r31
	mr       r4, r28
	bl       getGateScore__Q34Game4Cave7MapNodeFi
	mr       r29, r3
	mr       r3, r31
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	addi     r29, r29, 1
	mr       r4, r28
	add      r29, r3, r29
	mr       r3, r31
	mr       r5, r29
	bl       setDoorScore__Q34Game4Cave7MapNodeFii
	lwz      r4, 0x28(r31)
	mr       r3, r30
	mr       r5, r29
	lwzx     r4, r4, r26
	bl       setMapNodeScore__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodei

lbl_8024D624:
	addi     r26, r26, 0xc
	addi     r28, r28, 1

lbl_8024D62C:
	mr       r3, r31
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D5CC
	lwz      r3, 0(r30)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_8024D688

lbl_8024D64C:
	li       r28, 0
	b        lbl_8024D674

lbl_8024D654:
	mr       r3, r29
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D670
	li       r0, 0
	b        lbl_8024D694

lbl_8024D670:
	addi     r28, r28, 1

lbl_8024D674:
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D654
	lwz      r29, 4(r29)

lbl_8024D688:
	cmplwi   r29, 0
	bne      lbl_8024D64C
	li       r0, 1

lbl_8024D694:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8024D714
	li       r25, 0

lbl_8024D6A0:
	mr       r3, r30
	bl       setUnitAndDoorScore__Q34Game4Cave12RandMapScoreFv
	lwz      r3, 0(r30)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_8024D6F4

lbl_8024D6B8:
	li       r28, 0
	b        lbl_8024D6E0

lbl_8024D6C0:
	mr       r3, r29
	mr       r4, r28
	bl       isDoorScoreSetDone__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8024D6DC
	li       r0, 0
	b        lbl_8024D700

lbl_8024D6DC:
	addi     r28, r28, 1

lbl_8024D6E0:
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_8024D6C0
	lwz      r29, 4(r29)

lbl_8024D6F4:
	cmplwi   r29, 0
	bne      lbl_8024D6B8
	li       r0, 1

lbl_8024D700:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8024D714
	addi     r25, r25, 1
	cmpwi    r25, 0x1f4
	blt      lbl_8024D6A0

lbl_8024D714:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024D728
 * Size:	000048
 */
void Cave::RandMapScore::copyNodeScore(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r31, 0x10(r3)
	b        lbl_8024D754

lbl_8024D748:
	mr       r3, r31
	bl       copyNodeScoreToVersusScore__Q34Game4Cave7MapNodeFv
	lwz      r31, 4(r31)

lbl_8024D754:
	cmplwi   r31, 0
	bne      lbl_8024D748
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024D770
 * Size:	00008C
 */
void Cave::RandMapScore::subNodeScore(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r31, 0x10(r3)
	b        lbl_8024D7DC

lbl_8024D798:
	mr       r3, r31
	bl       subNodeScoreToVersusScore__Q34Game4Cave7MapNodeFv
	lwz      r3, 4(r30)
	lwz      r0, 0xc(r3)
	cmplw    r31, r0
	bne      lbl_8024D7C0
	mr       r3, r31
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	stw      r3, 0x10(r30)
	b        lbl_8024D7D8

lbl_8024D7C0:
	lwz      r0, 0x10(r3)
	cmplw    r31, r0
	bne      lbl_8024D7D8
	mr       r3, r31
	bl       getVersusScore__Q34Game4Cave7MapNodeFv
	stw      r3, 0xc(r30)

lbl_8024D7D8:
	lwz      r31, 4(r31)

lbl_8024D7DC:
	cmplwi   r31, 0
	bne      lbl_8024D798
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
 * Address:	8024D7FC
 * Size:	000064
 */
void Cave::RandMapScore::setMapNodeScore(Game::Cave::MapNode*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	bl       getEnemyScore__Q34Game4Cave7MapNodeFv
	add      r31, r31, r3
	mr       r3, r30
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 0
	blt      lbl_8024D83C
	cmpw     r3, r31
	ble      lbl_8024D848

lbl_8024D83C:
	mr       r3, r30
	mr       r4, r31
	bl       setNodeScore__Q34Game4Cave7MapNodeFi

lbl_8024D848:
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
 * Address:	8024D860
 * Size:	0003BC
 */
void Cave::RandMapScore::setChallengeFixObjNormal(void)
{
	/*
	stwu     r1, -0x1880(r1)
	mflr     r0
	stw      r0, 0x1884(r1)
	stmw     r16, 0x1840(r1)
	mr       r17, r3
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8024DC08
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8024D894
	b        lbl_8024DC08

lbl_8024D894:
	lwz      r6, 0(r17)
	lwz      r5, lbl_8051A810@sda21(r2)
	lbz      r0, 0(r6)
	lwz      r4, lbl_8051A814@sda21(r2)
	lhz      r3, lbl_8051A818@sda21(r2)
	cmplwi   r0, 0
	stw      r5, 0xc(r1)
	lwz      r31, 0x28(r6)
	stw      r4, 0x10(r1)
	sth      r3, 8(r1)
	beq      lbl_8024D8CC
	li       r0, 0
	stb      r0, 8(r1)
	b        lbl_8024D8E0

lbl_8024D8CC:
	lbz      r0, 1(r6)
	cmplwi   r0, 0
	bne      lbl_8024D8E0
	li       r0, 0
	stb      r0, 9(r1)

lbl_8024D8E0:
	addi     r26, r1, 8
	addi     r25, r1, 0xc
	li       r24, 0

lbl_8024D8EC:
	lbz      r0, 0(r26)
	cmplwi   r0, 0
	beq      lbl_8024DBF4
	lwz      r0, 0(r25)
	lwz      r3, 4(r17)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	cmplwi   r0, 0
	bne      lbl_8024DBF4
	lis      r3, lbl_8048410C@ha
	li       r16, 0
	addi     r5, r3, lbl_8048410C@l
	stw      r16, 0x1020(r1)
	lwz      r4, 0(r5)
	addi     r27, r1, 0x14
	lwz      r3, 4(r5)
	li       r23, 0
	lwz      r0, 8(r5)
	li       r22, 0
	stw      r4, 0x14(r1)
	li       r21, 0
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)

lbl_8024D948:
	lwz      r0, 0x1020(r1)
	cmplwi   r0, 0
	beq      lbl_8024D95C
	cmpwi    r21, 2
	bge      lbl_8024DB2C

lbl_8024D95C:
	lwz      r20, 0x10(r31)
	b        lbl_8024DB24

lbl_8024D964:
	lwz      r3, 0x18(r20)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r27)
	cmpw     r0, r3
	bne      lbl_8024DB20
	mr       r3, r20
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 0
	ble      lbl_8024D9C4
	mr       r3, r20
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1824(r1)
	lfd      f2, lbl_8051A800@sda21(r2)
	stw      r0, 0x1820(r1)
	lfs      f0, lbl_8051A81C@sda21(r2)
	lfd      f1, 0x1820(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8024D9C8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8024D9C8

lbl_8024D9C4:
	lfs      f1, lbl_8051A81C@sda21(r2)

lbl_8024D9C8:
	fctiwz   f0, f1
	lwz      r0, 0(r27)
	cmpwi    r0, 1
	stfd     f0, 0x1820(r1)
	lwz      r3, 0x1824(r1)
	addi     r19, r3, 0xa
	bne      lbl_8024DA70
	lwz      r3, 0x18(r20)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8024DB20
	addi     r30, r1, 0x1020
	addi     r29, r1, 0x820
	addi     r28, r1, 0x20
	lwz      r18, 0x10(r3)
	add      r30, r30, r16
	add      r29, r29, r16
	add      r28, r28, r16
	b        lbl_8024DA64

lbl_8024DA14:
	lwz      r0, 0x18(r18)
	cmpwi    r0, 4
	bne      lbl_8024DA60
	mr       r3, r17
	mr       r4, r20
	mr       r5, r18
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DA60
	stw      r19, 0(r28)
	addi     r23, r23, 1
	addi     r16, r16, 4
	lwz      r0, 0(r28)
	addi     r28, r28, 4
	stw      r20, 0(r30)
	addi     r30, r30, 4
	add      r22, r22, r0
	stw      r18, 0(r29)
	addi     r29, r29, 4

lbl_8024DA60:
	lwz      r18, 4(r18)

lbl_8024DA64:
	cmplwi   r18, 0
	bne      lbl_8024DA14
	b        lbl_8024DB20

lbl_8024DA70:
	cmpwi    r0, 0
	bne      lbl_8024DADC
	mr       r3, r20
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	addi     r4, r2, lbl_8051A820@sda21
	li       r5, 4
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_8024DB20
	mr       r3, r17
	mr       r4, r20
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DB20
	addi     r6, r1, 0x20
	addi     r5, r1, 0x1020
	stwx     r19, r6, r16
	addi     r3, r1, 0x820
	li       r4, 0
	addi     r23, r23, 1
	lwzx     r0, r6, r16
	stwx     r20, r5, r16
	add      r22, r22, r0
	stwx     r4, r3, r16
	addi     r16, r16, 4
	b        lbl_8024DB20

lbl_8024DADC:
	mr       r3, r17
	mr       r4, r20
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DB20
	addi     r6, r1, 0x20
	addi     r5, r1, 0x1020
	stwx     r19, r6, r16
	addi     r3, r1, 0x820
	li       r4, 0
	addi     r23, r23, 1
	lwzx     r0, r6, r16
	stwx     r20, r5, r16
	add      r22, r22, r0
	stwx     r4, r3, r16
	addi     r16, r16, 4

lbl_8024DB20:
	lwz      r20, 4(r20)

lbl_8024DB24:
	cmplwi   r20, 0
	bne      lbl_8024D964

lbl_8024DB2C:
	addi     r21, r21, 1
	addi     r27, r27, 4
	cmpwi    r21, 3
	blt      lbl_8024D948
	cmpwi    r22, 0
	beq      lbl_8024DBF4
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1824(r1)
	xoris    r0, r22, 0x8000
	lfd      f2, lbl_8051A800@sda21(r2)
	addi     r5, r1, 0x20
	stw      r4, 0x1820(r1)
	li       r6, 0
	lfs      f0, lbl_8051A7F8@sda21(r2)
	li       r7, 0
	lfd      f1, 0x1820(r1)
	stw      r0, 0x182c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x1828(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x1828(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x1830(r1)
	lwz      r3, 0x1834(r1)
	mtctr    r23
	cmpwi    r23, 0
	ble      lbl_8024DBF4

lbl_8024DBA8:
	lwz      r0, 0(r5)
	add      r6, r6, r0
	cmpw     r6, r3
	ble      lbl_8024DBE8
	lwz      r0, 0(r25)
	slwi     r7, r7, 2
	addi     r3, r1, 0x1020
	lwz      r5, 4(r17)
	lwzx     r6, r3, r7
	slwi     r4, r0, 2
	addi     r3, r1, 0x820
	stwx     r6, r5, r4
	lwzx     r0, r3, r7
	lwz      r3, 8(r17)
	stwx     r0, r3, r4
	b        lbl_8024DBF4

lbl_8024DBE8:
	addi     r5, r5, 4
	addi     r7, r7, 1
	bdnz     lbl_8024DBA8

lbl_8024DBF4:
	addi     r24, r24, 1
	addi     r25, r25, 4
	cmpwi    r24, 2
	addi     r26, r26, 1
	blt      lbl_8024D8EC

lbl_8024DC08:
	lmw      r16, 0x1840(r1)
	lwz      r0, 0x1884(r1)
	mtlr     r0
	addi     r1, r1, 0x1880
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024DC1C
 * Size:	000324
 */
void Cave::RandMapScore::setChallengeFixObjHard(void)
{
	/*
	stwu     r1, -0x1070(r1)
	mflr     r0
	stw      r0, 0x1074(r1)
	stmw     r18, 0x1038(r1)
	mr       r20, r3
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8024DF2C
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8024DC50
	b        lbl_8024DF2C

lbl_8024DC50:
	lwz      r6, 0(r20)
	lwz      r5, lbl_8051A828@sda21(r2)
	lbz      r0, 0(r6)
	lwz      r4, lbl_8051A82C@sda21(r2)
	lhz      r3, lbl_8051A830@sda21(r2)
	cmplwi   r0, 0
	stw      r5, 0xc(r1)
	lwz      r31, 0x28(r6)
	stw      r4, 0x10(r1)
	sth      r3, 8(r1)
	beq      lbl_8024DC88
	li       r0, 0
	stb      r0, 8(r1)
	b        lbl_8024DC9C

lbl_8024DC88:
	lbz      r0, 1(r6)
	cmplwi   r0, 0
	bne      lbl_8024DC9C
	li       r0, 0
	stb      r0, 9(r1)

lbl_8024DC9C:
	addi     r29, r1, 8
	addi     r28, r1, 0xc
	li       r27, 0

lbl_8024DCA8:
	lbz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_8024DF18
	lwz      r0, 0(r28)
	lwz      r3, 4(r20)
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	cmplwi   r0, 0
	bne      lbl_8024DF18
	lis      r3, lbl_80484118@ha
	li       r0, 0
	addi     r5, r3, lbl_80484118@l
	stw      r0, 0x820(r1)
	lwz      r4, 0(r5)
	addi     r30, r1, 0x14
	lwz      r3, 4(r5)
	li       r26, 0
	lwz      r0, 8(r5)
	li       r25, -1
	stw      r4, 0x14(r1)
	li       r24, 0
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)

lbl_8024DD04:
	lwz      r0, 0x820(r1)
	cmplwi   r0, 0
	beq      lbl_8024DD18
	cmpwi    r24, 2
	bge      lbl_8024DE88

lbl_8024DD18:
	lwz      r23, 0x10(r31)
	b        lbl_8024DE80

lbl_8024DD20:
	lwz      r3, 0x18(r23)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0(r30)
	cmpw     r0, r3
	bne      lbl_8024DE7C
	mr       r3, r23
	bl       getNodeScore__Q34Game4Cave7MapNodeFv
	lwz      r0, 0(r30)
	mr       r22, r3
	cmpwi    r0, 1
	bne      lbl_8024DDC4
	lwz      r3, 0x18(r23)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8024DE7C
	lwz      r21, 0x10(r3)
	addi     r18, r1, 0x820
	addi     r19, r1, 0x20
	b        lbl_8024DDB8

lbl_8024DD6C:
	lwz      r0, 0x18(r21)
	cmpwi    r0, 4
	bne      lbl_8024DDB4
	mr       r3, r20
	mr       r4, r23
	mr       r5, r21
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DDB4
	cmpw     r22, r25
	blt      lbl_8024DDB4
	ble      lbl_8024DDA4
	li       r26, 0
	mr       r25, r22

lbl_8024DDA4:
	slwi     r0, r26, 2
	addi     r26, r26, 1
	stwx     r23, r18, r0
	stwx     r21, r19, r0

lbl_8024DDB4:
	lwz      r21, 4(r21)

lbl_8024DDB8:
	cmplwi   r21, 0
	bne      lbl_8024DD6C
	b        lbl_8024DE7C

lbl_8024DDC4:
	cmpwi    r0, 0
	bne      lbl_8024DE34
	mr       r3, r23
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	addi     r4, r2, lbl_8051A820@sda21
	li       r5, 4
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_8024DE7C
	mr       r3, r20
	mr       r4, r23
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DE7C
	cmpw     r22, r25
	blt      lbl_8024DE7C
	ble      lbl_8024DE14
	li       r26, 0
	mr       r25, r22

lbl_8024DE14:
	slwi     r5, r26, 2
	addi     r4, r1, 0x820
	addi     r3, r1, 0x20
	li       r0, 0
	stwx     r23, r4, r5
	addi     r26, r26, 1
	stwx     r0, r3, r5
	b        lbl_8024DE7C

lbl_8024DE34:
	mr       r3, r20
	mr       r4, r23
	li       r5, 0
	bl
isFixObjSet__Q34Game4Cave12RandMapScoreFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024DE7C
	cmpw     r22, r25
	blt      lbl_8024DE7C
	ble      lbl_8024DE60
	li       r26, 0
	mr       r25, r22

lbl_8024DE60:
	slwi     r5, r26, 2
	addi     r4, r1, 0x820
	addi     r3, r1, 0x20
	li       r0, 0
	stwx     r23, r4, r5
	addi     r26, r26, 1
	stwx     r0, r3, r5

lbl_8024DE7C:
	lwz      r23, 4(r23)

lbl_8024DE80:
	cmplwi   r23, 0
	bne      lbl_8024DD20

lbl_8024DE88:
	addi     r24, r24, 1
	addi     r30, r30, 4
	cmpwi    r24, 3
	blt      lbl_8024DD04
	cmpwi    r26, 0
	beq      lbl_8024DF18
	bl       rand
	lis      r7, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1024(r1)
	xoris    r5, r26, 0x8000
	lwz      r0, 0(r28)
	addi     r6, r1, 0x820
	stw      r7, 0x1020(r1)
	addi     r3, r1, 0x20
	lfd      f2, lbl_8051A800@sda21(r2)
	slwi     r4, r0, 2
	lfd      f1, 0x1020(r1)
	lfs      f0, lbl_8051A7F8@sda21(r2)
	fsubs    f1, f1, f2
	stw      r5, 0x102c(r1)
	lwz      r5, 4(r20)
	stw      r7, 0x1028(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x1028(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x1030(r1)
	lwz      r0, 0x1034(r1)
	slwi     r0, r0, 2
	lwzx     r6, r6, r0
	lwzx     r0, r3, r0
	stwx     r6, r5, r4
	lwz      r3, 8(r20)
	stwx     r0, r3, r4

lbl_8024DF18:
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 2
	addi     r29, r29, 1
	blt      lbl_8024DCA8

lbl_8024DF2C:
	lmw      r18, 0x1038(r1)
	lwz      r0, 0x1074(r1)
	mtlr     r0
	addi     r1, r1, 0x1070
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024DF40
 * Size:	000064
 */
void Cave::RandMapScore::isGoalSetHard(void)
{
	/*
	lwz      r3, 0(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 2
	beq      lbl_8024DF84
	bge      lbl_8024DF64
	cmpwi    r0, 0
	beq      lbl_8024DF74
	bge      lbl_8024DF7C
	b        lbl_8024DF9C

lbl_8024DF64:
	cmpwi    r0, 4
	beq      lbl_8024DF94
	bge      lbl_8024DF9C
	b        lbl_8024DF8C

lbl_8024DF74:
	li       r3, 0
	blr

lbl_8024DF7C:
	li       r3, 1
	blr

lbl_8024DF84:
	li       r3, 0
	blr

lbl_8024DF8C:
	li       r3, 1
	blr

lbl_8024DF94:
	li       r3, 1
	blr

lbl_8024DF9C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024DFA4
 * Size:	000128
 */
void Cave::RandMapScore::isFixObjSet(Game::Cave::MapNode*, Game::Cave::BaseGen*)
{
	/*
	lwz      r7, 4(r3)
	lwz      r0, 0(r7)
	cmplw    r4, r0
	bne      lbl_8024E034
	cmplwi   r5, 0
	beq      lbl_8024E034
	lwz      r6, 8(r3)
	lwz      r6, 0(r6)
	cmplwi   r6, 0
	beq      lbl_8024E034
	lfs      f1, 0x20(r6)
	lfs      f0, 0x20(r5)
	lfs      f3, 0x1c(r6)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r5)
	lfs      f1, 0x24(r6)
	lfs      f0, 0x24(r5)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A81C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8024E01C
	ble      lbl_8024E020
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8024E020

lbl_8024E01C:
	fmr      f1, f0

lbl_8024E020:
	lfs      f0, lbl_8051A834@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8024E034
	li       r3, 0
	blr

lbl_8024E034:
	lwz      r0, 4(r7)
	cmplw    r4, r0
	bne      lbl_8024E058
	lwz      r6, 8(r3)
	lwz      r0, 4(r6)
	cmplw    r5, r0
	bne      lbl_8024E058
	li       r3, 0
	blr

lbl_8024E058:
	lwz      r0, 8(r7)
	cmplw    r4, r0
	bne      lbl_8024E07C
	lwz      r6, 8(r3)
	lwz      r0, 8(r6)
	cmplw    r5, r0
	bne      lbl_8024E07C
	li       r3, 0
	blr

lbl_8024E07C:
	lwz      r0, 0xc(r7)
	cmplw    r4, r0
	bne      lbl_8024E0A0
	lwz      r6, 8(r3)
	lwz      r0, 0xc(r6)
	cmplw    r5, r0
	bne      lbl_8024E0A0
	li       r3, 0
	blr

lbl_8024E0A0:
	lwz      r0, 0x10(r7)
	cmplw    r4, r0
	bne      lbl_8024E0C4
	lwz      r6, 8(r3)
	lwz      r0, 0x10(r6)
	cmplw    r5, r0
	bne      lbl_8024E0C4
	li       r3, 0
	blr

lbl_8024E0C4:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E0CC
 * Size:	000070
 */
Cave::FixObjNode::~FixObjNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8024E120
	lis      r4, __vt__Q34Game4Cave10FixObjNode@ha
	addi     r0, r4, __vt__Q34Game4Cave10FixObjNode@l
	stw      r0, 0(r30)
	beq      lbl_8024E110
	lis      r5, __vt__Q24Game16ObjectLayoutNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game16ObjectLayoutNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8024E110:
	extsh.   r0, r31
	ble      lbl_8024E120
	mr       r3, r30
	bl       __dl__FPv

lbl_8024E120:
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
 * Address:	8024E13C
 * Size:	000008
 */
u32 Cave::FixObjNode::getObjectId(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8024E144
 * Size:	000008
 */
void Cave::FixObjNode::getObjectType(void)
{
	/*
	lwz      r3, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E14C
 * Size:	000008
 */
u32 Cave::FixObjNode::getBirthCount(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8024E154
 * Size:	000008
 */
void Cave::FixObjNode::getDirection(void)
{
	/*
	lfs      f1, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024E15C
 * Size:	000014
 */
void Cave::FixObjNode::getBirthPosition(float&, float&)
{
	/*
	lfs      f0, 0x20(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x28(r3)
	stfs     f0, 0(r5)
	blr
	*/
}
} // namespace Game
