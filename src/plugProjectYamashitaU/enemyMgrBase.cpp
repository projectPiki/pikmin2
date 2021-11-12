#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C1E8
    lbl_8047C1E8:
        .4byte 0x656E656D
        .4byte 0x794D6772
        .4byte 0x42617365
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x6B696C6C
        .4byte 0x20646561
        .4byte 0x6420656E
        .4byte 0x656D792E
        .4byte 0x20257320
        .4byte 0x25640A20
        .4byte 0x73746174
        .4byte 0x653A2573
        .4byte 0x00000000
        .4byte 0x6B696C6C
        .4byte 0x20646561
        .4byte 0x6420656E
        .4byte 0x656D792E
        .4byte 0x20257320
        .4byte 0x25640A20
        .4byte 0x73746174
        .4byte 0x653A2564
        .4byte 0x00000000
    .global lbl_8047C244
    lbl_8047C244:
        .4byte 0x6D4E756D
        .4byte 0x4F626A65
        .4byte 0x63747320
        .4byte 0x6973206E
        .4byte 0x6F74207A
        .4byte 0x65726F2E
        .4byte 0x205B2564
        .4byte 0x5D200A00
    .global lbl_8047C264
    lbl_8047C264:
        .4byte 0x50535379
        .4byte 0x7374656D
        .4byte 0x49462E68
        .4byte 0x00000000
    .global lbl_8047C274
    lbl_8047C274:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047C280
    lbl_8047C280:
        .4byte 0x25732F65
        .4byte 0x6E656D79
        .4byte 0x5061726D
        .4byte 0x2E747874
        .4byte 0x00000000
    .global lbl_8047C294
    lbl_8047C294:
        .4byte 0x25732F65
        .4byte 0x6E656D79
        .4byte 0x436F6C6C
        .4byte 0x2E747874
        .4byte 0x00000000
    .global lbl_8047C2A8
    lbl_8047C2A8:
        .4byte 0x25732F65
        .4byte 0x6E656D79
        .4byte 0x53746F6E
        .4byte 0x65496E66
        .4byte 0x6F2E7478
        .4byte 0x74000000
        .4byte 0x656E656D
        .4byte 0x792E626D
        .4byte 0x64000000
        .4byte 0x656E656D
        .4byte 0x792E6264
        .4byte 0x6C000000
        .4byte 0x456E656D
        .4byte 0x794D6772
        .4byte 0x42617365
        .4byte 0x3A43616E
        .4byte 0x206E6F74
        .4byte 0x206D616B
        .4byte 0x65206D64
        .4byte 0x6C446174
        .4byte 0x610A0000
    .global lbl_8047C2FC
    lbl_8047C2FC:
        .4byte 0x2F656E65
        .4byte 0x6D792F64
        .4byte 0x6174612F
        .4byte 0x25732F6D
        .4byte 0x6F64656C
        .4byte 0x2E737A73
        .4byte 0x00000000
    .global lbl_8047C318
    lbl_8047C318:
        .4byte 0x2F656E65
        .4byte 0x6D792F64
        .4byte 0x6174612F
        .4byte 0x25732F61
        .4byte 0x6E696D2E
        .4byte 0x737A7300
    .global lbl_8047C330
    lbl_8047C330:
        .4byte 0x25732F65
        .4byte 0x6E656D79
        .4byte 0x416E696D
        .4byte 0x4D67722E
        .4byte 0x74787400
    .global lbl_8047C344
    lbl_8047C344:
        .4byte 0x456E656D
        .4byte 0x7947656E
        .4byte 0x65726174
        .4byte 0x6F720000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game12EnemyMgrBase
    __vt__Q24Game12EnemyMgrBase:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12EnemyMgrBaseFv
        .4byte doEntry__Q24Game12EnemyMgrBaseFv
        .4byte doSetView__Q24Game12EnemyMgrBaseFi
        .4byte doViewCalc__Q24Game12EnemyMgrBaseFv
        .4byte doSimulation__Q24Game12EnemyMgrBaseFf
        .4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q24Game12EnemyMgrBaseFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q24Game12EnemyMgrBaseFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
        .4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
        .4byte getGenerator__Q24Game12EnemyMgrBaseCFv
        .4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
        .4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
        .4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
        .4byte startMovie__Q24Game12EnemyMgrBaseFv
        .4byte endMovie__Q24Game12EnemyMgrBaseFv
        .4byte get__Q24Game12EnemyMgrBaseFPv
        .4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
        .4byte 0
        .4byte 0
        .4byte doAlloc__Q24Game12EnemyMgrBaseFv
        .4byte getEnemyTypeID__Q24Game12EnemyMgrBaseFv
        .4byte createModel__Q24Game12EnemyMgrBaseFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q24Game12EnemyMgrBaseFv
        .4byte loadAnimData__Q24Game12EnemyMgrBaseFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518130
    lbl_80518130:
        .4byte 0x00000000
    .global lbl_80518134
    lbl_80518134:
        .4byte 0x652D7570
        .4byte 0x64000000
    .global lbl_8051813C
    lbl_8051813C:
        .4byte 0x652D646F
        .4byte 0x61000000
    .global lbl_80518144
    lbl_80518144:
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012EC24
 * Size:	000070
 */
EnemyBirthArg::EnemyBirthArg()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518130@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stfs     f0, 0(r3)
	addi     r3, r31, 0x1c
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)
	stfs     f0, 0xc(r31)
	stb      r0, 0x10(r31)
	stw      r0, 0x14(r31)
	sth      r0, 0x18(r31)
	bl       __ct__Q24Game15EnemyPelletInfoFv
	li       r0, -1
	lfs      f0, lbl_80518130@sda21(r2)
	stw      r0, 0x28(r31)
	li       r0, 1
	mr       r3, r31
	stfs     f0, 0x2c(r31)
	stb      r0, 0x30(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012EC94
 * Size:	0000C4
 */
EnemyMgrBase::EnemyMgrBase(int, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r29, r28, 4
	stw      r0, 0(r3)
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	lis      r4, __vt__Q24Game13IEnemyMgrBase@ha
	addi     r0, r3, __vt__16GenericContainer@l
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	stw      r0, 0(r29)
	addi     r4, r4, __vt__Q24Game13IEnemyMgrBase@l
	addi     r5, r3, __vt__Q24Game12EnemyMgrBase@l
	li       r0, 0
	stw      r4, 0(r28)
	addi     r6, r4, 0x38
	addi     r4, r5, 0x38
	mr       r3, r28
	stw      r6, 4(r28)
	stw      r5, 0(r28)
	stw      r4, 4(r28)
	stw      r0, 0x1c(r28)
	stw      r0, 0x20(r28)
	stb      r31, 0x24(r28)
	stw      r0, 0x28(r28)
	stw      r30, 0x2c(r28)
	stw      r0, 0x30(r28)
	stw      r0, 0x34(r28)
	stw      r0, 0x38(r28)
	stb      r0, 0x3c(r28)
	stw      r0, 0x40(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012ED58
 * Size:	000070
 */
void EnemyMgrBase::startMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_8012EDA4

lbl_8012ED78:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012EDA0
	bl       startMovie__Q24Game9EnemyBaseFv

lbl_8012EDA0:
	addi     r31, r31, 1

lbl_8012EDA4:
	lwz      r0, 0x2c(r30)
	cmpw     r31, r0
	blt      lbl_8012ED78
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
 * Address:	8012EDC8
 * Size:	000070
 */
void EnemyMgrBase::endMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_8012EE14

lbl_8012EDE8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012EE10
	bl       endMovie__Q24Game9EnemyBaseFv

lbl_8012EE10:
	addi     r31, r31, 1

lbl_8012EE14:
	lwz      r0, 0x2c(r30)
	cmpw     r31, r0
	blt      lbl_8012EDE8
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
 * Address:	8012EE38
 * Size:	0000A0
 */
void EnemyMgrBase::alloc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r0, 0x30(r3)
	lwz      r12, 0(r3)
	lwz      r4, 0x2c(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	li       r31, 0
	b        lbl_8012EEA0

lbl_8012EE74:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_8012EEA0:
	lwz      r0, 0x2c(r30)
	cmpw     r31, r0
	blt      lbl_8012EE74
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
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
 * Address:	8012EED8
 * Size:	000110
 */
void EnemyMgrBase::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8012EFC0

lbl_8012EEFC:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	mr       r30, r3
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012EFBC
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	lbz      r0, 0x1c(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8012EF4C
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012EFBC

lbl_8012EF4C:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518134@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c8(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518134@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051813C@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051813C@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc

lbl_8012EFBC:
	addi     r31, r31, 1

lbl_8012EFC0:
	lwz      r0, 0x2c(r29)
	cmpw     r31, r0
	blt      lbl_8012EEFC
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
 * Address:	8012EFE8
 * Size:	0000B4
 */
void EnemyMgrBase::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8012F074

lbl_8012F00C:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	mr       r30, r3
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F070
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	lbz      r0, 0x1c(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8012F05C
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012F070

lbl_8012F05C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8012F070:
	addi     r31, r31, 1

lbl_8012F074:
	lwz      r0, 0x2c(r29)
	cmpw     r31, r0
	blt      lbl_8012F00C
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
 * Address:	8012F09C
 * Size:	00008C
 */
void EnemyMgrBase::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8012F100

lbl_8012F0C4:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F0FC
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_8012F0FC:
	addi     r31, r31, 1

lbl_8012F100:
	lwz      r0, 0x2c(r29)
	cmpw     r31, r0
	blt      lbl_8012F0C4
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
 * Address:	8012F128
 * Size:	00007C
 */
void EnemyMgrBase::doViewCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_8012F180

lbl_8012F148:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F17C
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl

lbl_8012F17C:
	addi     r31, r31, 1

lbl_8012F180:
	lwz      r0, 0x2c(r30)
	cmpw     r31, r0
	blt      lbl_8012F148
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
 * Address:	8012F1A4
 * Size:	0000EC
 */
void EnemyMgrBase::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_8012F264

lbl_8012F1D0:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x17c(r3)
	mr       r30, r3
	lwz      r0, 4(r4)
	cmplwi   r0, 0
	beq      lbl_8012F214
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x1e8(r12)
	mtctr    r12
	bctrl
	b        lbl_8012F260

lbl_8012F214:
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F260
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	lbz      r0, 0x1c(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8012F248
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012F260

lbl_8012F248:
	mr       r3, r30
	fmr      f1, f31
	lwz      r12, 0(r30)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_8012F260:
	addi     r31, r31, 1

lbl_8012F264:
	lwz      r0, 0x2c(r29)
	cmpw     r31, r0
	blt      lbl_8012F1D0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012F290
 * Size:	0000C4
 */
void EnemyMgrBase::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8012F328

lbl_8012F2BC:
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	mr       r30, r3
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F324
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	lbz      r0, 0x1c(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8012F30C
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012F324

lbl_8012F30C:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_8012F324:
	addi     r31, r31, 1

lbl_8012F328:
	lwz      r0, 0x2c(r28)
	cmpw     r31, r0
	blt      lbl_8012F2BC
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
 * Address:	8012F354
 * Size:	000074
 */
void EnemyMgrBase::getNext(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, 1
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_8012F3A4

lbl_8012F374:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F3A0
	mr       r3, r31
	b        lbl_8012F3B0

lbl_8012F3A0:
	addi     r31, r31, 1

lbl_8012F3A4:
	lwz      r3, 0x2c(r30)
	cmpw     r31, r3
	blt      lbl_8012F374

lbl_8012F3B0:
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
 * Address:	8012F3C8
 * Size:	000184
 */
void EnemyMgrBase::birth(Game::EnemyBirthArg&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r30, r4
	mr       r26, r3
	lwz      r0, 0x28(r4)
	cmpwi    r0, -1
	bne      lbl_8012F400
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r30)

lbl_8012F400:
	li       r31, 0
	lwz      r27, 0x28(r30)
	mr       r28, r31
	b        lbl_8012F45C

lbl_8012F410:
	mr       r3, r26
	mr       r4, r28
	lwz      r12, 0(r26)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpw     r27, r3
	bne      lbl_8012F458
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 3, 3
	bne      lbl_8012F458
	mr       r31, r29
	b        lbl_8012F468

lbl_8012F458:
	addi     r28, r28, 1

lbl_8012F45C:
	lwz      r0, 0x2c(r26)
	cmpw     r28, r0
	blt      lbl_8012F410

lbl_8012F468:
	cmplwi   r31, 0
	beq      lbl_8012F534
	lwz      r5, 0x30(r26)
	mr       r3, r31
	mr       r4, r30
	addi     r0, r5, 1
	stw      r0, 0x30(r26)
	lwz      r12, 0(r31)
	lfs      f1, 0xc(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x2c(r30)
	mr       r3, r31
	addi     r4, r30, 0x18
	stfs     f0, 0x2ac(r31)
	bl setOtakaraCode__Q24Game9EnemyBaseFRQ34Game9PelletMgr15OtakaraItemCode lbz
r0, 0x1c(r30) stb      r0, 0x258(r31) lbz      r0, 0x1d(r30) stb      r0,
0x259(r31) lbz      r0, 0x1e(r30) stb      r0, 0x25a(r31) lbz      r0, 0x1f(r30)
	stb      r0, 0x25b(r31)
	lfs      f0, 0x20(r30)
	stfs     f0, 0x25c(r31)
	lbz      r0, 0x30(r30)
	cmplwi   r0, 0
	beq      lbl_8012F4EC
	li       r0, 1
	stb      r0, 0x1f3(r31)
	b        lbl_8012F4F4

lbl_8012F4EC:
	li       r0, 0
	stb      r0, 0x1f3(r31)

lbl_8012F4F4:
	lbz      r0, 0x10(r30)
	stb      r0, 0x2b0(r31)
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_8012F534
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_8012F534
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x1c4(r12)
	mtctr    r12
	bctrl

lbl_8012F534:
	mr       r3, r31
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012F54C
 * Size:	000008
 */
s32 EnemyMgrBase::getEnemyTypeID() { return -0x1; }

/*
 * --INFO--
 * Address:	8012F554
 * Size:	000164
 */
void EnemyMgrBase::kill(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	lis      r4, lbl_8047C1E8@ha
	lwz      r0, 0x1e0(r28)
	addi     r29, r4, lbl_8047C1E8@l
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F5E4
	li       r29, 0
	b        lbl_8012F5D4

lbl_8012F594:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	cmplw    r3, r28
	bne      lbl_8012F5D0
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 4, 2
	stw      r0, 0x1e0(r3)
	lwz      r3, 0x30(r30)
	addi     r0, r3, -1
	stw      r0, 0x30(r30)
	b        lbl_8012F698

lbl_8012F5D0:
	addi     r29, r29, 1

lbl_8012F5D4:
	lwz      r0, 0x2c(r30)
	cmpw     r29, r0
	blt      lbl_8012F594
	b        lbl_8012F698

lbl_8012F5E4:
	lwz      r31, 0x2b4(r28)
	cmplwi   r31, 0
	beq      lbl_8012F640
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	lwz      r8, 0xc(r31)
	mr       r6, r3
	mr       r7, r30
	addi     r3, r29, 0
	addi     r5, r29, 0x14
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8012F698

lbl_8012F640:
	mr       r3, r28
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r30, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	mr       r6, r3
	mr       r7, r31
	mr       r8, r30
	addi     r3, r29, 0
	addi     r5, r29, 0x38
	li       r4, 0x1c5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012F698:
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
 * Address:	8012F6B8
 * Size:	0000A8
 */
void EnemyMgrBase::killAll(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8012F710

lbl_8012F6E0:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8012F70C
	mr       r4, r30
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8012F70C:
	addi     r31, r31, 1

lbl_8012F710:
	lwz      r0, 0x2c(r29)
	cmpw     r31, r0
	blt      lbl_8012F6E0
	lwz      r6, 0x30(r29)
	cmpwi    r6, 0
	beq      lbl_8012F744
	lis      r3, lbl_8047C1E8@ha
	lis      r4, lbl_8047C244@ha
	addi     r5, r4, lbl_8047C244@l
	addi     r3, r3, lbl_8047C1E8@l
	li       r4, 0x1e0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012F744:
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
 * Address:	8012F760
 * Size:	00003C
 */
void EnemyMgrBase::isValidEnemyTypeID()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	subfic   r4, r3, -1
	addi     r0, r3, 1
	or       r0, r4, r0
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012F79C
 * Size:	000100
 */
void EnemyMgrBase::setupSoundViewerAndBas()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	subfic   r4, r3, -1
	addi     r0, r3, 1
	or       r0, r4, r0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_8012F880
	lwz      r0, 0x20(r31)
	cmplwi   r0, 0
	beq      lbl_8012F880
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyResName__Q24Game13EnemyInfoFuncFii
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r30, r0
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii
	lwz      r0, "sInstance__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@sda21(r13)
	mr       r29, r3
	cmplwi   r0, 0
	bne      lbl_8012F85C
	lis      r3, lbl_8047C264@ha
	lis      r5, lbl_8047C274@ha
	addi     r3, r3, lbl_8047C264@l
	li       r4, 0x50
	addi     r5, r5, lbl_8047C274@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012F85C:
	lwz      r6, "sInstance__Q28PSSystem24ArcMgr<Q26PSGame6BASARC>"@sda21(r13)
	mr       r4, r30
	lwz      r3, 0x20(r31)
	mr       r5, r29
	lwz      r6, 0x18(r6)
	bl       connectBasArc__Q28SysShape7AnimMgrFPcPcP13JKRFileLoader
	lwz      r3, 0x20(r31)
	addi     r4, r1, 8
	bl registerSoundViewer__Q28SysShape7AnimMgrFPQ26PSGame16SoundCreatureMgr

lbl_8012F880:
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
 * Address:	8012F89C
 * Size:	00008C
 */
void EnemyMgrBase::init(Game::EnemyParmsBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x34(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xdc(r12)
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
 * Address:	8012F928
 * Size:	000024
 */
void EnemyMgrBase::setDebugParm(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x34(r3)
	bl       setDebugParm__Q24Game14EnemyParmsBaseFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012F94C
 * Size:	000024
 */
void EnemyMgrBase::resetDebugParm(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x34(r3)
	bl       resetDebugParm__Q24Game14EnemyParmsBaseFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012F970
 * Size:	0000AC
 */
void EnemyMgrBase::createModel()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8012F9AC
	lwz      r4, 0x1c(r30)
	lis      r5, 2
	lbz      r6, 0x24(r30)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r31, r3

lbl_8012F9AC:
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lis      r4, j3dSys@ha
	addi     r3, r1, 8
	addi     r4, r4, j3dSys@l
	bl       PSMTXCopy
	lwz      r30, 8(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       makeDL__8J3DModelFv
	mr       r3, r30
	bl       lock__8J3DModelFv
	lwz      r0, 0x44(r1)
	mr       r3, r31
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012FA1C
 * Size:	0000C0
 */
void EnemyMgrBase::initParms()
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	subfic   r4, r3, -1
	addi     r0, r3, 1
	or       r0, r4, r0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_8012FAC8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0x1c(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_8012FAA4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_8012FAA4:
	lis      r4, lbl_8047C280@ha
	mr       r5, r3
	addi     r4, r4, lbl_8047C280@l
	addi     r3, r1, 8
	crclr    6
	bl       sprintf
	mr       r3, r31
	addi     r4, r1, 8
	bl       setupParms__Q24Game12EnemyMgrBaseFPCc

lbl_8012FAC8:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012FADC
 * Size:	000078
 */
void EnemyMgrBase::loadStoneSetting(const char*)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stw      r31, 0x42c(r1)
	mr       r31, r3
	lwz      r3, gParmArc__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8012FB40
	mr       r4, r3
	addi     r3, r1, 8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x14(r1)
	bne      lbl_8012FB34
	li       r0, 0
	stw      r0, 0x41c(r1)

lbl_8012FB34:
	addi     r3, r31, 0x3c
	addi     r4, r1, 8
	bl       setup__Q34Game10EnemyStone4InfoFR6Stream

lbl_8012FB40:
	lwz      r0, 0x434(r1)
	lwz      r31, 0x42c(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012FB54
 * Size:	000090
 */
void EnemyMgrBase::setupParms(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x34(r3)
	lwz      r4, gParmArc__4Game@sda21(r13)
	bl       loadSettingFile__Q24Game14EnemyParmsBaseFP10JKRArchivePc
	li       r29, 0
	mr       r30, r3
	b        lbl_8012FBB4

lbl_8012FB90:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r31, 0x34(r28)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	stw      r31, 0xc0(r3)
	addi     r29, r29, 1

lbl_8012FBB4:
	lwz      r0, 0x2c(r28)
	cmpw     r29, r0
	blt      lbl_8012FB90
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	8012FBE4
 * Size:	000088
 */
void EnemyMgrBase::loadResource()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	subfic   r4, r3, -1
	addi     r0, r3, 1
	or       r0, r4, r0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_8012FC58
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl

lbl_8012FC58:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012FC6C
 * Size:	0002FC
 */
void EnemyMgrBase::initObjects()
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	mr       r31, r3
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	subfic   r4, r3, -1
	addi     r0, r3, 1
	or       r0, r4, r0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_8012FF4C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0x20(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_8012FCFC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_8012FCFC:
	lis      r4, lbl_8047C294@ha
	mr       r5, r3
	addi     r4, r4, lbl_8047C294@l
	addi     r3, r1, 8
	crclr    6
	bl       sprintf
	li       r29, 0
	b        lbl_8012FE5C

lbl_8012FD1C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x20(r31)
	mr       r30, r3
	mr       r3, r31
	mr       r4, r29
	stw      r30, 0x18(r5)
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	stb      r29, 0x1f1(r3)
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x180(r3)
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x174(r3)
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r31)
	bl       setAnimMgr__Q24Game9EnemyBaseFPQ28SysShape7AnimMgr
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x22c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x230(r12)
	mtctr    r12
	bctrl
	li       r3, 0x54
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8012FE3C
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	addi     r5, r31, 0x3c
	bl __ct__Q34Game10EnemyStone3ObjFPQ24Game9EnemyBasePQ34Game10EnemyStone4Info
	mr       r30, r3

lbl_8012FE3C:
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x24c(r3)
	addi     r29, r29, 1

lbl_8012FE5C:
	lwz      r0, 0x2c(r31)
	cmpw     r29, r0
	blt      lbl_8012FD1C
	lwz      r3, gParmArc__4Game@sda21(r13)
	addi     r4, r1, 8
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x28(r31)
	li       r29, 0
	b        lbl_8012FF40

lbl_8012FE80:
	li       r3, 8
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8012FE98
	bl       __ct__8CollTreeFv
	mr       r30, r3

lbl_8012FE98:
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x114(r3)
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r4, r29
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r3)
	li       r6, 0
	lwz      r4, 0x174(r30)
	lwz      r5, 0x28(r31)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r4, r29
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r3)
	lwz      r4, 0x174(r30)
	bl       attachModel__8CollTreeFPQ28SysShape9MtxObject
	addi     r29, r29, 1

lbl_8012FF40:
	lwz      r0, 0x2c(r31)
	cmpw     r29, r0
	blt      lbl_8012FE80

lbl_8012FF4C:
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012FF68
 * Size:	0000C0
 */
void EnemyMgrBase::initStoneSetting()
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	subfic   r4, r3, -1
	addi     r0, r3, 1
	or       r0, r4, r0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_80130014
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0x24(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_8012FFF0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_8012FFF0:
	lis      r4, lbl_8047C2A8@ha
	mr       r5, r3
	addi     r4, r4, lbl_8047C2A8@l
	addi     r3, r1, 8
	crclr    6
	bl       sprintf
	mr       r3, r31
	addi     r4, r1, 8
	bl       loadStoneSetting__Q24Game12EnemyMgrBaseFPCc

lbl_80130014:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130028
 * Size:	0000E4
 */
void EnemyMgrBase::loadModelData(JKRArchive*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047C1E8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8047C1E8@l
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r3, r31, 0xd8
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r4, r3, r3
	beq      lbl_80130084
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	b        lbl_801300B0

lbl_80130084:
	mr       r4, r29
	addi     r3, r31, 0xe4
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r4, r3, r3
	beq      lbl_801300B0
	lwz      r12, 0(r28)
	mr       r3, r28
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_801300B0:
	cmplwi   r30, 0
	beq      lbl_801300D4
	stw      r30, 0x1c(r28)
	lis      r4, 4
	lwz      r3, 0x1c(r28)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r28)
	bl       makeSharedDL__12J3DModelDataFv
	b        lbl_801300E8

lbl_801300D4:
	addi     r3, r31, 0
	addi     r5, r31, 0xf0
	li       r4, 0x32f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801300E8:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	8013010C
 * Size:	0000C0
 */
void EnemyMgrBase::loadModelData()
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stw      r31, 0x13c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0xc(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_8013016C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_8013016C:
	lis      r4, lbl_8047C2FC@ha
	mr       r5, r3
	addi     r4, r4, lbl_8047C2FC@l
	addi     r3, r1, 0x38
	crclr    6
	bl       sprintf
	addi     r3, r1, 8
	addi     r4, r1, 0x38
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	mr       r4, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r4, 0x34(r4)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x144(r1)
	lwz      r31, 0x13c(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	801301CC
 * Size:	000154
 */
void EnemyMgrBase::loadAnimData()
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stw      r31, 0x13c(r1)
	mr       r31, r3
	stw      r30, 0x138(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0x10(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_80130230
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_80130230:
	lis      r4, lbl_8047C318@ha
	mr       r5, r3
	addi     r4, r4, lbl_8047C318@l
	addi     r3, r1, 0x38
	crclr    6
	bl       sprintf
	addi     r3, r1, 8
	addi     r4, r1, 0x38
	li       r30, 0
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_80130270
	lwz      r30, 0x34(r3)

lbl_80130270:
	cmplwi   r30, 0
	beq      lbl_80130300
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0x14(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_801302C8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_801302C8:
	lis      r4, lbl_8047C330@ha
	mr       r5, r3
	addi     r4, r4, lbl_8047C330@l
	addi     r3, r1, 0x38
	crclr    6
	bl       sprintf
	lwz      r3, gParmArc__4Game@sda21(r13)
	mr       r6, r30
	lwz      r5, 0x1c(r31)
	addi     r4, r1, 0x38
	addi     r7, r2, lbl_80518144@sda21
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, 0x20(r31)
	b        lbl_80130308

lbl_80130300:
	li       r0, 0
	stw      r0, 0x20(r31)

lbl_80130308:
	lwz      r0, 0x144(r1)
	lwz      r31, 0x13c(r1)
	lwz      r30, 0x138(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130320
 * Size:	000074
 */
void EnemyMgrBase::loadTexData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r3, 0x18(r3)
	lbz      r0, 0(r3)
	extsb.   r0, r0
	bne      lbl_80130380
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x0000FFFF@ha
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii

lbl_80130380:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130394
 * Size:	00002C
 */
void EnemyMgrBase::doLoadBmd(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x00240010@ha
	mr       r3, r4
	stw      r0, 0x14(r1)
	addi     r4, r5, 0x00240010@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801303C0
 * Size:	000028
 */
void EnemyMgrBase::doLoadBdl(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	li       r4, 0x2000
	stw      r0, 0x14(r1)
	bl       loadBinaryDisplayList__22J3DModelLoaderDataBaseFPCvUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801303E8
 * Size:	000090
 */
void EnemyMgrBase::initGenerator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x24
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8013045C
	lis      r3, __vt__5CNode@ha
	mr       r7, r31
	addi     r0, r3, __vt__5CNode@l
	lis      r5, lbl_8047C344@ha
	stw      r0, 0(r31)
	li       r6, 0
	lis      r3, __vt__Q24Game18EnemyGeneratorBase@ha
	lis      r4, 0x3F3F3F3F@ha
	stw      r6, 0x10(r31)
	addi     r5, r5, lbl_8047C344@l
	addi     r0, r3, __vt__Q24Game18EnemyGeneratorBase@l
	addi     r3, r7, 0x18
	stw      r6, 0xc(r31)
	addi     r4, r4, 0x3F3F3F3F@l
	stw      r6, 8(r31)
	stw      r6, 4(r31)
	stw      r5, 0x14(r31)
	stw      r0, 0(r31)
	bl       __ct__4ID32FUl

lbl_8013045C:
	stw      r31, 0x38(r30)
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
 * Address:	80130478
 * Size:	0000E8
 */
void EnemyMgrBase::doAnimationAlwaysMovieActor()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80130538

lbl_8013049C:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	mr       r30, r3
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_80130534
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518134@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c8(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518134@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051813C@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8051813C@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc

lbl_80130534:
	addi     r31, r31, 1

lbl_80130538:
	lwz      r0, 0x2c(r29)
	cmpw     r31, r0
	blt      lbl_8013049C
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
 * Address:	80130560
 * Size:	00007C
 */
void EnemyMgrBase::doEntryAlwaysMovieActor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_801305B8

lbl_80130580:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_801305B4
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_801305B4:
	addi     r31, r31, 1

lbl_801305B8:
	lwz      r0, 0x2c(r30)
	cmpw     r31, r0
	blt      lbl_80130580
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
 * Address:	801305DC
 * Size:	00009C
 */
void EnemyMgrBase::doSimulationAlwaysMovieActor(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	mr       r30, r3
	b        lbl_80130650

lbl_80130604:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_8013064C
	lwz      r4, 0x17c(r3)
	lwz      r0, 4(r4)
	cmplwi   r0, 0
	bne      lbl_8013064C
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_8013064C:
	addi     r31, r31, 1

lbl_80130650:
	lwz      r0, 0x2c(r30)
	cmpw     r31, r0
	blt      lbl_80130604
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130678
 * Size:	00008C
 */
void EnemyMgrBase::doDirectDrawAlwaysMovieActor(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801306DC

lbl_801306A0:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_801306D8
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_801306D8:
	addi     r31, r31, 1

lbl_801306DC:
	lwz      r0, 0x2c(r29)
	cmpw     r31, r0
	blt      lbl_801306A0
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
 * Address:	80130704
 * Size:	000008
 */
EnemyMgrBase::@4 @~EnemyMgrBase()
{
	/*
	addi     r3, r3, -4
	b        __dt__Q24Game12EnemyMgrBaseFv
	*/
}
} // namespace Game
