#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048D1F0
    lbl_8048D1F0:
        .asciz "otakara_elec_eff"
        .skip 3
    .global lbl_8048D204
    lbl_8048D204:
        .asciz "otakara_fire_eff"
        .skip 3
    .global lbl_8048D218
    lbl_8048D218:
        .asciz "otakara_gas_eff"
    .global lbl_8048D228
    lbl_8048D228:
        .asciz "otakara_water_eff"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx12TOootaWbShot
    __vt__Q23efx12TOootaWbShot:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global "__vt__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>"
    "__vt__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx10TChaseMtx6
    __vt__Q23efx10TChaseMtx6:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx17TOootaElecAttack2
    __vt__Q23efx17TOootaElecAttack2:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx17TOootaElecAttack1
    __vt__Q23efx17TOootaElecAttack1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx17TOootaElecAttack1Fv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx17TOootaElecAttack1Fv
    .global __vt__Q23efx13TOootaElecLeg
    __vt__Q23efx13TOootaElecLeg:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TOootaElecLegFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx13TOootaElecLegFv
    .global __vt__Q23efx9TOootaGas
    __vt__Q23efx9TOootaGas:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
        .4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
        .4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
        .4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
    .global __vt__Q23efx11TOootaPdead
    __vt__Q23efx11TOootaPdead:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>"
    "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>":
        .4byte 0
        .4byte 0
        .4byte
   "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"
        .4byte
   "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv" .4byte
   "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv" .4byte
   "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
        .4byte
   "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
    .global __vt__Q23efx24TChasePosPosLocalZScale3
    __vt__Q23efx24TChasePosPosLocalZScale3:
        .4byte 0
        .4byte 0
        .4byte
   "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"
        .4byte
   "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv" .4byte
   "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv" .4byte
   "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
        .4byte
   "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
    .global __vt__Q23efx13TOootaPhouden
    __vt__Q23efx13TOootaPhouden:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx15TOootaElecparts
    __vt__Q23efx15TOootaElecparts:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx15TOootaElecpartsFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx15TOootaElecpartsFv
    .global __vt__Q23efx10TOootaElec
    __vt__Q23efx10TOootaElec:
        .4byte 0
        .4byte 0
        .4byte
   "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"
        .4byte
   "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv" .4byte
   "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv" .4byte
   "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
        .4byte
   "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
    .global __vt__Q34Game11BigTreasure21BigTreasureElecAttack
    __vt__Q34Game11BigTreasure21BigTreasureElecAttack:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11BigTreasure21BigTreasureElecAttackFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q23efx11TOootaWbHit
    __vt__Q23efx11TOootaWbHit:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple4FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple4Fv
        .4byte fade__Q23efx8TSimple4Fv
    .global "__vt__Q23efx29TSyncGroup4<Q23efx9TChasePos>"
    "__vt__Q23efx29TSyncGroup4<Q23efx9TChasePos>":
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx10TChasePos4
    __vt__Q23efx10TChasePos4:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx11TOootaWbomb
    __vt__Q23efx11TOootaWbomb:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
    .global __vt__Q34Game11BigTreasure22BigTreasureWaterAttack
    __vt__Q34Game11BigTreasure22BigTreasureWaterAttack:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11BigTreasure22BigTreasureWaterAttackFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game11BigTreasure20BigTreasureGasAttack
    __vt__Q34Game11BigTreasure20BigTreasureGasAttack:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11BigTreasure20BigTreasureGasAttackFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game11BigTreasure21BigTreasureFireAttack
    __vt__Q34Game11BigTreasure21BigTreasureFireAttack:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11BigTreasure21BigTreasureFireAttackFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q34Game11BigTreasure16AttackShadowNode
    __vt__Q34Game11BigTreasure16AttackShadowNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11BigTreasure16AttackShadowNodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D200
    lbl_8051D200:
        .4byte 0x00000000
    .global lbl_8051D204
    lbl_8051D204:
        .4byte 0x41700000
    .global lbl_8051D208
    lbl_8051D208:
        .4byte 0x40200000
    .global lbl_8051D20C
    lbl_8051D20C:
        .4byte 0xC1C80000
    .global lbl_8051D210
    lbl_8051D210:
        .float 1.0
    .global lbl_8051D214
    lbl_8051D214:
        .4byte 0x40400000
    .global lbl_8051D218
    lbl_8051D218:
        .4byte 0x43480000
    .global lbl_8051D21C
    lbl_8051D21C:
        .4byte 0x42200000
    .global lbl_8051D220
    lbl_8051D220:
        .4byte 0x41C80000
    .global lbl_8051D224
    lbl_8051D224:
        .4byte 0x47000000
    .global lbl_8051D228
    lbl_8051D228:
        .4byte 0x3EA8F5C3
    .global lbl_8051D22C
    lbl_8051D22C:
        .4byte 0xC47A0000
    .global lbl_8051D230
    lbl_8051D230:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051D238
    lbl_8051D238:
        .4byte 0x43A2F983
    .global lbl_8051D23C
    lbl_8051D23C:
        .4byte 0xC3A2F983
    .global lbl_8051D240
    lbl_8051D240:
        .4byte 0xC1700000
    .global lbl_8051D244
    lbl_8051D244:
        .4byte 0x3E8A3D71
    .global lbl_8051D248
    lbl_8051D248:
        .4byte 0x41200000
    .global lbl_8051D24C
    lbl_8051D24C:
        .float 0.5
    .global lbl_8051D250
    lbl_8051D250:
        .4byte 0x43F00000
    .global lbl_8051D254
    lbl_8051D254:
        .4byte 0x41F00000
    .global lbl_8051D258
    lbl_8051D258:
        .4byte 0x3F2B851F
    .global lbl_8051D25C
    lbl_8051D25C:
        .4byte 0x41A00000
    .global lbl_8051D260
    lbl_8051D260:
        .4byte 0x43960000
    .global lbl_8051D264
    lbl_8051D264:
        .4byte 0x3F19999A
    .global lbl_8051D268
    lbl_8051D268:
        .4byte 0x43160000
    .global lbl_8051D26C
    lbl_8051D26C:
        .4byte 0x3F400000
    .global lbl_8051D270
    lbl_8051D270:
        .4byte 0x3F266666
    .global lbl_8051D274
    lbl_8051D274:
        .4byte 0x42C80000
    .global lbl_8051D278
    lbl_8051D278:
        .4byte 0x435C0000
    .global lbl_8051D27C
    lbl_8051D27C:
        .4byte 0x432A0000
    .global lbl_8051D280
    lbl_8051D280:
        .4byte 0x402CCCCD
    .global lbl_8051D284
    lbl_8051D284:
        .float 0.1
    .global lbl_8051D288
    lbl_8051D288:
        .4byte 0x3CA3D70A
    .global lbl_8051D28C
    lbl_8051D28C:
        .float 0.25
    .global lbl_8051D290
    lbl_8051D290:
        .4byte 0x42480000
    .global lbl_8051D294
    lbl_8051D294:
        .4byte 0x3F0CCCCD
    .global lbl_8051D298
    lbl_8051D298:
        .4byte 0x40C90FDB
    .global lbl_8051D29C
    lbl_8051D29C:
        .4byte 0x01010101
    .global lbl_8051D2A0
    lbl_8051D2A0:
        .4byte 0x43FA0000
    .global lbl_8051D2A4
    lbl_8051D2A4:
        .4byte 0x40000000
    .global lbl_8051D2A8
    lbl_8051D2A8:
        .4byte 0x43AF0000
    .global lbl_8051D2AC
    lbl_8051D2AC:
        .4byte 0x43340000
    .global lbl_8051D2B0
    lbl_8051D2B0:
        .4byte 0x44A00000
    .global lbl_8051D2B4
    lbl_8051D2B4:
        .4byte 0x3E4CCCCD
    .global lbl_8051D2B8
    lbl_8051D2B8:
        .4byte 0x41480000
    .global lbl_8051D2BC
    lbl_8051D2BC:
        .4byte 0x40F00000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
BigTreasure::AttackShadowNode::AttackShadowNode(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F39A8
 * Size:	000108
 */
void BigTreasure::AttackShadowNode::makeShadowSRT(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f1, lbl_8051D200@sda21(r2)
	stw      r0, 0x44(r1)
	addi     r4, r1, 0x2c
	lfs      f0, lbl_8051D204@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f2, 0x28(r3)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	lwz      r5, 0x24(r31)
	lfs      f2, 8(r5)
	lfs      f1, 4(r5)
	lfs      f0, 0(r5)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_8051D208@sda21(r2)
	lfs      f0, 8(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x30(r1)
	lwz      r3, 0x1c(r31)
	stfs     f0, 0(r3)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x20(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 4(r3)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 8(r3)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x28(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x2c(r3)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
BigTreasure::BigTreasureFireAttack::BigTreasureFireAttack((Game::BigTreasure::Obj*, Game::BigTreasure::BigTreasureAttackParameter*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void BigTreasure::BigTreasureFireAttack::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void start__Q34Game11BigTreasure21BigTreasureFireAttackFR10Vector3f R10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F3AB0
 * Size:	000374
 */
void BigTreasure::BigTreasureFireAttack::update(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stfd     f27, 0xd0(r1)
	psq_st   f27, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	mr       r30, r3
	lfs      f2, lbl_8051D210@sda21(r2)
	lfs      f3, 0x20(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_802F3B24
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051D214@sda21(r2)
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x20(r30)
	lfs      f0, 0x20(r30)
	fcmpo    cr0, f0, f2
	ble      lbl_802F3B24
	stfs     f2, 0x20(r30)

lbl_802F3B24:
	lwz      r5, 0x1c(r30)
	addi     r3, r1, 0x54
	lfs      f0, lbl_8051D218@sda21(r2)
	addi     r4, r1, 0x30
	lfs      f4, 0x28(r5)
	lfs      f3, lbl_8051D220@sda21(r2)
	fmuls    f1, f0, f4
	lfs      f2, 0x20(r30)
	fmuls    f5, f3, f4
	lfs      f0, lbl_8051D21C@sda21(r2)
	lfs      f31, 0x24(r30)
	fmuls    f6, f2, f1
	lfs      f30, 0x28(r30)
	fmuls    f28, f0, f4
	lfs      f29, 0x2c(r30)
	fmuls    f27, f5, f5
	fmuls    f31, f31, f6
	lfs      f2, 0x30(r30)
	fmuls    f30, f30, f6
	lfs      f1, 0x34(r30)
	fmuls    f29, f29, f6
	lfs      f0, 0x38(r30)
	fadds    f31, f31, f2
	fadds    f30, f30, f1
	stfs     f3, 0x3c(r1)
	fadds    f29, f29, f0
	stfs     f31, 0x30(r1)
	stfs     f30, 0x34(r1)
	stfs     f29, 0x38(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802F3DB8

lbl_802F3BBC:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3DB0
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f1, f30, f1
	lfs      f2, 8(r1)
	lfs      f3, 0x10(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_802F3C18
	b        lbl_802F3C1C

lbl_802F3C18:
	fneg     f1, f1

lbl_802F3C1C:
	fcmpo    cr0, f1, f28
	bge      lbl_802F3DB0
	fsubs    f0, f29, f3
	fsubs    f1, f31, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f27
	bge      lbl_802F3DB0
	lwz      r7, 0x18(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractFire@ha
	mr       r3, r31
	lwz      r6, 0xc0(r7)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game12InteractFire@l
	lfs      f0, 0x604(r6)
	stw      r5, 0x24(r1)
	stw      r7, 0x28(r1)
	stw      r0, 0x24(r1)
	stfs     f0, 0x2c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3D7C
	mr       r3, r31
	addi     r4, r1, 0x24
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F3DB0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0xc0(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 0xc0(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D228@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F3D30
	lwz      r5, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D22C@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r31
	addi     r4, r1, 0x40
	stw      r5, 0x44(r1)
	stw      r0, 0x40(r1)
	stfs     f1, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F3DB0

lbl_802F3D30:
	lwz      r4, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051D200@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x14(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	stw      r4, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stfs     f0, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F3DB0

lbl_802F3D7C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3DB0
	mr       r3, r31
	addi     r4, r1, 0x24
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802F3DB0:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_802F3DB8:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3BBC
	lfs      f1, 0x20(r30)
	lfs      f0, lbl_8051D210@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	psq_l    f27, 216(r1), 0, qr0
	lfd      f27, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r0, 0x124(r1)
	lwz      r30, 0xc8(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BigTreasure::BigTreasureFireAttack::finish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
BigTreasure::BigTreasureGasAttack::BigTreasureGasAttack((Game::BigTreasure::Obj*, Game::BigTreasure::BigTreasureAttackParameter*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void BigTreasure::BigTreasureGasAttack::init(void)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void start__Q34Game11BigTreasure20BigTreasureGasAttackFR10Vector3f f(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	802F3E24
 * Size:	000364
 */
void BigTreasure::BigTreasureGasAttack::update(void)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	mr       r30, r3
	lfs      f2, lbl_8051D210@sda21(r2)
	lfs      f3, 0x20(r3)
	fcmpo    cr0, f3, f2
	bge      lbl_802F3E90
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051D244@sda21(r2)
	lfs      f0, 0x54(r3)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x20(r30)
	lfs      f0, 0x20(r30)
	fcmpo    cr0, f0, f2
	ble      lbl_802F3E90
	stfs     f2, 0x20(r30)

lbl_802F3E90:
	lfs      f1, 0x20(r30)
	lfs      f0, lbl_8051D24C@sda21(r2)
	lfs      f28, lbl_8051D248@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802F3EA8
	lfs      f28, lbl_8051D204@sda21(r2)

lbl_802F3EA8:
	lfs      f0, lbl_8051D250@sda21(r2)
	fmuls    f28, f28, f28
	lfs      f31, 0x24(r30)
	addi     r3, r1, 0x54
	fmuls    f0, f0, f1
	lfs      f30, 0x28(r30)
	lfs      f29, 0x2c(r30)
	lfs      f2, 0x30(r30)
	addi     r4, r1, 0x30
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	lfs      f1, 0x34(r30)
	fmuls    f29, f29, f0
	lfs      f0, 0x38(r30)
	fadds    f31, f31, f2
	fadds    f30, f30, f1
	fadds    f29, f29, f0
	lfs      f0, lbl_8051D204@sda21(r2)
	stfs     f31, 0x30(r1)
	stfs     f30, 0x34(r1)
	stfs     f29, 0x38(r1)
	stfs     f0, 0x3c(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802F4124

lbl_802F3F24:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F411C
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f1, f30, f1
	lfs      f2, 8(r1)
	lfs      f3, 0x10(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_802F3F80
	b        lbl_802F3F84

lbl_802F3F80:
	fneg     f1, f1

lbl_802F3F84:
	lfs      f0, lbl_8051D254@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F411C
	fsubs    f0, f29, f3
	fsubs    f1, f31, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_802F411C
	lwz      r7, 0x18(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game11InteractGas@ha
	mr       r3, r31
	lwz      r6, 0xc0(r7)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game11InteractGas@l
	lfs      f0, 0x604(r6)
	stw      r5, 0x24(r1)
	stw      r7, 0x28(r1)
	stw      r0, 0x24(r1)
	stfs     f0, 0x2c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F40E8
	mr       r3, r31
	addi     r4, r1, 0x24
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F411C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0xc0(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 0xc0(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D258@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F409C
	lwz      r5, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D22C@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r31
	addi     r4, r1, 0x40
	stw      r5, 0x44(r1)
	stw      r0, 0x40(r1)
	stfs     f1, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F411C

lbl_802F409C:
	lwz      r4, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051D200@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x14(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	stw      r4, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stfs     f0, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F411C

lbl_802F40E8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F411C
	mr       r3, r31
	addi     r4, r1, 0x24
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802F411C:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_802F4124:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3F24
	lfs      f1, 0x20(r30)
	lfs      f0, lbl_8051D210@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r0, 0x114(r1)
	lwz      r30, 0xc8(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
BigTreasure::BigTreasureWaterAttack::BigTreasureWaterAttack((Game::BigTreasure::Obj*, Game::BigTreasure::BigTreasureAttackParameter*))
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
TChasePos4::~TChasePos4(void)
{
	// UNUSED FUNCTION
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void BigTreasure::BigTreasureWaterAttack::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void start__Q34Game11BigTreasure22BigTreasureWaterAttackFR10Vector3f R10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F4188
 * Size:	000324
 */
void BigTreasure::BigTreasureWaterAttack::update(void)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	lwz      r5, sys@sda21(r13)
	mr       r29, r3
	lfs      f0, lbl_8051D25C@sda21(r2)
	addi     r4, r29, 0x2c
	lfs      f3, 0x20(r3)
	li       r31, 0
	lfs      f2, 0x54(r5)
	fmr      f31, f0
	lfs      f1, 0x2c(r3)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x2c(r3)
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x24(r29)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x30(r29)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x30(r29)
	lwz      r3, sys@sda21(r13)
	lfs      f3, 0x28(r29)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x34(r29)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x34(r29)
	lfs      f1, 0x24(r29)
	fsubs    f0, f1, f0
	stfs     f0, 0x24(r29)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x30(r29)
	fcmpo    cr0, f0, f1
	bge      lbl_802F423C
	stfs     f1, 0x30(r29)
	li       r31, 1
	lfs      f31, lbl_8051D254@sda21(r2)

lbl_802F423C:
	lfs      f1, 0x2c(r29)
	fmuls    f31, f31, f31
	lfs      f0, lbl_8051D254@sda21(r2)
	addi     r3, r1, 0x54
	stfs     f1, 0x30(r1)
	addi     r4, r1, 0x30
	lfs      f1, 0x30(r29)
	stfs     f1, 0x34(r1)
	lfs      f1, 0x34(r29)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802F4474

lbl_802F428C:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F446C
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x30(r29)
	lfs      f0, 0xc(r1)
	lfs      f3, 0x2c(r29)
	fsubs    f4, f1, f0
	lfs      f0, 8(r1)
	lfs      f2, 0x34(r29)
	fsubs    f3, f3, f0
	lfs      f1, 0x10(r1)
	fmuls    f0, f4, f4
	fsubs    f1, f2, f1
	fmadds   f0, f3, f3, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802F446C
	lwz      r4, 0x18(r29)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051D200@sda21(r2)
	lis      r3, __vt__Q24Game14InteractBubble@ha
	stw      r0, 0x24(r1)
	addi     r0, r3, __vt__Q24Game14InteractBubble@l
	mr       r3, r30
	stw      r4, 0x28(r1)
	stw      r0, 0x24(r1)
	stfs     f0, 0x2c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4438
	mr       r3, r30
	addi     r4, r1, 0x24
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F446C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0xc0(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f1, 0xc0(r1)
	lfs      f0, lbl_8051D224@sda21(r2)
	fsubs    f1, f1, f3
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f2
	bge      lbl_802F43EC
	lwz      r5, 0x18(r29)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D22C@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r30
	addi     r4, r1, 0x40
	stw      r5, 0x44(r1)
	stw      r0, 0x40(r1)
	stfs     f1, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F446C

lbl_802F43EC:
	lwz      r4, 0x18(r29)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051D200@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x14(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	stw      r4, 0x18(r1)
	mr       r3, r30
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stfs     f0, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F446C

lbl_802F4438:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F446C
	mr       r3, r30
	addi     r4, r1, 0x24
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802F446C:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_802F4474:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F428C
	mr       r3, r31
	psq_l    f31, 232(r1), 0, qr0
	lwz      r0, 0xf4(r1)
	lfd      f31, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void BigTreasure::BigTreasureWaterAttack::finish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
BigTreasure::BigTreasureElecAttack::BigTreasureElecAttack((Game::BigTreasure::Obj*, Game::BigTreasure::BigTreasureAttackParameter*))
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
TChasePosPosLocalZScale3::~TChasePosPosLocalZScale3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F44AC
 * Size:	000084
 */
TChasePosPosLocalZScale::~TChasePosPosLocalZScale(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F4514
lis      r3, __vt__Q23efx23TChasePosPosLocalZScale@ha
addi     r3, r3, __vt__Q23efx23TChasePosPosLocalZScale@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802F4504
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_802F4504:
extsh.   r0, r31
ble      lbl_802F4514
mr       r3, r30
bl       __dl__FPv

lbl_802F4514:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void BigTreasure::BigTreasureElecAttack::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void start__Q34Game11BigTreasure21BigTreasureElecAttackFR10Vector3f R10Vector3f b(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void BigTreasure::BigTreasureElecAttack::startInteract((Game::BigTreasure::BigTreasureElecAttack*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F4530
 * Size:	000738
 */
void BigTreasure::BigTreasureElecAttack::update(void)
{
	/*
	stwu     r1, -0x230(r1)
	mflr     r0
	stw      r0, 0x234(r1)
	stfd     f31, 0x220(r1)
	psq_st   f31, 552(r1), 0, qr0
	stfd     f30, 0x210(r1)
	psq_st   f30, 536(r1), 0, qr0
	stfd     f29, 0x200(r1)
	psq_st   f29, 520(r1), 0, qr0
	stfd     f28, 0x1f0(r1)
	psq_st   f28, 504(r1), 0, qr0
	stfd     f27, 0x1e0(r1)
	psq_st   f27, 488(r1), 0, qr0
	stfd     f26, 0x1d0(r1)
	psq_st   f26, 472(r1), 0, qr0
	stfd     f25, 0x1c0(r1)
	psq_st   f25, 456(r1), 0, qr0
	stfd     f24, 0x1b0(r1)
	psq_st   f24, 440(r1), 0, qr0
	stfd     f23, 0x1a0(r1)
	psq_st   f23, 424(r1), 0, qr0
	stfd     f22, 0x190(r1)
	psq_st   f22, 408(r1), 0, qr0
	stw      r31, 0x18c(r1)
	stw      r30, 0x188(r1)
	mr       r30, r3
	lbz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_802F4700
	lfs      f4, 0x38(r30)
	lis      r3, sincosTable___5JMath@ha
	lfs      f3, lbl_8051D25C@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f5, 0x3c(r30)
	addi     r8, r1, 0x34
	lfs      f0, 0x34(r30)
	fadds    f4, f4, f3
	lfs      f2, lbl_8051D200@sda21(r2)
	addi     r7, r30, 0x28
	stfs     f0, 0x34(r1)
	li       r6, 0
	lfs      f1, 0x800(r3)
	stfs     f4, 0x38(r1)
	li       r0, -1
	lfs      f0, lbl_8051D264@sda21(r2)
	addi     r4, r1, 0xd8
	stfs     f5, 0x3c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f3, 0x40(r1)
	lwz      r5, sys@sda21(r13)
	lwz      r9, 0x1c(r30)
	lfs      f3, 0(r9)
	stw      r8, 0xd8(r1)
	stw      r7, 0xdc(r1)
	stfs     f3, 0xe0(r1)
	stfs     f2, 0xe4(r1)
	stw      r6, 0xe8(r1)
	stw      r6, 0x11c(r1)
	stb      r6, 0x14c(r1)
	stb      r6, 0xf1(r1)
	stb      r6, 0xf0(r1)
	stw      r6, 0x120(r1)
	stw      r6, 0xec(r1)
	stb      r6, 0x168(r1)
	stw      r6, 0x16c(r1)
	stfs     f1, 0x104(r1)
	stfs     f0, 0x108(r1)
	stw      r0, 0x170(r1)
	stw      r6, 0x124(r1)
	stb      r6, 0xf2(r1)
	lwz      r0, 0x18(r30)
	stw      r0, 0xec(r1)
	lwz      r12, 4(r3)
	lfs      f1, 0x54(r5)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x34(r1)
	lfs      f0, lbl_8051D25C@sda21(r2)
	stfs     f1, 0x34(r30)
	lfs      f1, 0x38(r1)
	stfs     f1, 0x38(r30)
	lfs      f1, 0x3c(r1)
	stfs     f1, 0x3c(r30)
	lfs      f1, 0x38(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x38(r30)
	lwz      r0, 0x11c(r1)
	cmplwi   r0, 0
	beq      lbl_802F46E4
	lwz      r3, 0x1c(r30)
	lfs      f1, 0x28(r30)
	lfs      f0, 4(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x28(r30)
	lwz      r3, 0x1c(r30)
	lfs      f1, 0x30(r30)
	lfs      f0, 4(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x30(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_802F46D8
	addi     r4, r30, 0x34
	li       r3, 0x595c
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F46D8:
	lwz      r0, 0x11c(r1)
	stw      r0, 0x24(r30)
	b        lbl_802F46EC

lbl_802F46E4:
	li       r0, 0
	stw      r0, 0x24(r30)

lbl_802F46EC:
	lfs      f1, 0x2c(r30)
	lfs      f0, lbl_8051D25C@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x2c(r30)
	b        lbl_802F4730

lbl_802F4700:
	lwz      r5, 0x18(r30)
	lis      r3, lbl_8048D1F0@ha
	addi     r4, r3, lbl_8048D1F0@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x34(r30)
	stfs     f1, 0x38(r30)
	stfs     f2, 0x3c(r30)

lbl_802F4730:
	lwz      r3, 0x40(r30)
	cmplwi   r3, 0
	beq      lbl_802F4BFC
	lfs      f0, 0x38(r3)
	lfs      f1, 0x38(r30)
	lfs      f4, 0x3c(r3)
	fsubs    f26, f0, f1
	lfs      f2, 0x3c(r30)
	lfs      f3, 0x34(r3)
	fsubs    f31, f4, f2
	lfs      f0, 0x34(r30)
	fmuls    f4, f26, f26
	fsubs    f30, f3, f0
	lfs      f3, lbl_8051D200@sda21(r2)
	fmuls    f5, f31, f31
	fmadds   f4, f30, f30, f4
	fadds    f29, f5, f4
	fcmpo    cr0, f29, f3
	ble      lbl_802F478C
	ble      lbl_802F4790
	frsqrte  f3, f29
	fmuls    f29, f3, f29
	b        lbl_802F4790

lbl_802F478C:
	fmr      f29, f3

lbl_802F4790:
	lfs      f3, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f29, f3
	ble      lbl_802F47B4
	lfs      f3, lbl_8051D210@sda21(r2)
	fdivs    f3, f3, f29
	fmuls    f30, f30, f3
	fmuls    f26, f26, f3
	fmuls    f31, f31, f3
	b        lbl_802F47B8

lbl_802F47B4:
	fmr      f29, f3

lbl_802F47B8:
	lfs      f4, lbl_8051D200@sda21(r2)
	lfs      f5, lbl_8051D210@sda21(r2)
	fmuls    f3, f30, f4
	fmuls    f6, f26, f4
	fmsubs   f25, f31, f4, f3
	fmsubs   f27, f30, f5, f6
	fnmsubs  f28, f31, f5, f6
	fmuls    f3, f25, f25
	fmuls    f5, f27, f27
	fmadds   f3, f28, f28, f3
	fadds    f5, f5, f3
	fcmpo    cr0, f5, f4
	ble      lbl_802F47FC
	ble      lbl_802F4800
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_802F4800

lbl_802F47FC:
	fmr      f5, f4

lbl_802F4800:
	lfs      f3, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_802F4820
	lfs      f3, lbl_8051D210@sda21(r2)
	fdivs    f3, f3, f5
	fmuls    f28, f28, f3
	fmuls    f25, f25, f3
	fmuls    f27, f27, f3

lbl_802F4820:
	fmuls    f5, f28, f31
	lfs      f3, lbl_8051D200@sda21(r2)
	fmuls    f6, f25, f30
	fmuls    f4, f27, f26
	fmsubs   f23, f27, f30, f5
	fmsubs   f24, f28, f26, f6
	fmsubs   f22, f25, f31, f4
	fmuls    f4, f23, f23
	fmuls    f5, f24, f24
	fmadds   f4, f22, f22, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_802F4864
	ble      lbl_802F4868
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_802F4868

lbl_802F4864:
	fmr      f4, f3

lbl_802F4868:
	lfs      f3, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_802F4888
	lfs      f3, lbl_8051D210@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f22, f22, f3
	fmuls    f23, f23, f3
	fmuls    f24, f24, f3

lbl_802F4888:
	lfs      f4, lbl_8051D24C@sda21(r2)
	addi     r3, r1, 0x70
	lfs      f3, lbl_8051D204@sda21(r2)
	addi     r4, r1, 0x24
	fmuls    f7, f4, f29
	fmuls    f4, f30, f7
	fmuls    f5, f26, f7
	fmuls    f6, f31, f7
	fadds    f4, f4, f0
	fadds    f5, f5, f1
	fadds    f6, f6, f2
	fadds    f0, f3, f7
	stfs     f4, 0x24(r1)
	stfs     f5, 0x28(r1)
	stfs     f6, 0x2c(r1)
	stfs     f0, 0x30(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x90
	stb      r0, 0x8c(r1)
	addi     r4, r1, 0x70
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x90
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802F4BEC

lbl_802F48EC:
	addi     r3, r1, 0x90
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BE4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F4948
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BE4

lbl_802F4948:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	lfs      f0, 0x38(r30)
	lfs      f1, 8(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0x34(r30)
	lfs      f2, 0x10(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0x3c(r30)
	fmuls    f1, f25, f4
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051D200@sda21(r2)
	fmadds   f1, f28, f3, f1
	fmadds   f5, f27, f2, f1
	fcmpo    cr0, f5, f0
	ble      lbl_802F49A4
	fmr      f1, f5
	b        lbl_802F49A8

lbl_802F49A4:
	fneg     f1, f5

lbl_802F49A8:
	lfs      f0, lbl_8051D248@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F4BE4
	fmuls    f1, f23, f4
	lfs      f0, lbl_8051D200@sda21(r2)
	fmadds   f1, f22, f3, f1
	fmadds   f1, f24, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802F49D0
	b        lbl_802F49D4

lbl_802F49D0:
	fneg     f1, f1

lbl_802F49D4:
	lfs      f0, lbl_8051D25C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F4BE4
	fmuls    f0, f26, f4
	lfs      f1, lbl_8051D200@sda21(r2)
	fmadds   f0, f30, f3, f0
	fmadds   f0, f31, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802F4BE4
	fcmpo    cr0, f0, f29
	bge      lbl_802F4BE4
	fmuls    f4, f5, f27
	fmuls    f3, f5, f28
	fmuls    f2, f4, f4
	fmadds   f0, f3, f3, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802F4A2C
	ble      lbl_802F4A30
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802F4A30

lbl_802F4A2C:
	fmr      f2, f1

lbl_802F4A30:
	lfs      f0, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802F4A4C
	lfs      f0, lbl_8051D210@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802F4A4C:
	lwz      r7, 0x18(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_8051D268@sda21(r2)
	lis      r4, __vt__Q24Game12InteractWind@ha
	lwz      r6, 0xc0(r7)
	lis      r3, __vt__Q24Game13InteractDenki@ha
	addi     r5, r5, __vt__Q24Game11Interaction@l
	fmuls    f3, f3, f0
	lfs      f1, 0x604(r6)
	fmuls    f4, f4, f0
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r5, 0x58(r1)
	mr       r3, r31
	stw      r4, 0x58(r1)
	stw      r7, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f3, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f4, 0x6c(r1)
	stw      r0, 0x58(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BB0
	mr       r3, r31
	addi     r4, r1, 0x58
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F4BE4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x17c(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0x178(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 0x178(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D24C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F4B64
	lwz      r5, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D22C@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r31
	addi     r4, r1, 0x44
	stw      r5, 0x48(r1)
	stw      r0, 0x44(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F4BE4

lbl_802F4B64:
	lwz      r4, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051D200@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x14(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	stw      r4, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stfs     f0, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F4BE4

lbl_802F4BB0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BE4
	mr       r3, r31
	addi     r4, r1, 0x58
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802F4BE4:
	addi     r3, r1, 0x90
	bl       next__Q24Game12CellIteratorFv

lbl_802F4BEC:
	addi     r3, r1, 0x90
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F48EC

lbl_802F4BFC:
	li       r3, 0
	psq_l    f31, 552(r1), 0, qr0
	lfd      f31, 0x220(r1)
	psq_l    f30, 536(r1), 0, qr0
	lfd      f30, 0x210(r1)
	psq_l    f29, 520(r1), 0, qr0
	lfd      f29, 0x200(r1)
	psq_l    f28, 504(r1), 0, qr0
	lfd      f28, 0x1f0(r1)
	psq_l    f27, 488(r1), 0, qr0
	lfd      f27, 0x1e0(r1)
	psq_l    f26, 472(r1), 0, qr0
	lfd      f26, 0x1d0(r1)
	psq_l    f25, 456(r1), 0, qr0
	lfd      f25, 0x1c0(r1)
	psq_l    f24, 440(r1), 0, qr0
	lfd      f24, 0x1b0(r1)
	psq_l    f23, 424(r1), 0, qr0
	lfd      f23, 0x1a0(r1)
	psq_l    f22, 408(r1), 0, qr0
	lfd      f22, 0x190(r1)
	lwz      r31, 0x18c(r1)
	lwz      r0, 0x234(r1)
	lwz      r30, 0x188(r1)
	mtlr     r0
	addi     r1, r1, 0x230
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void BigTreasure::BigTreasureElecAttack::finish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F4C68
 * Size:	0007B4
 */
BigTreasure::BigTreasureAttackMgr::BigTreasureAttackMgr((Game::BigTreasure::Obj*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r22, 0x8(r1)
	  lis       r5, 0x8012
	  mr        r31, r3
	  subi      r0, r5, 0xCB8
	  mr        r22, r4
	  mr        r4, r0
	  addi      r3, r31, 0x28
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x3
	  bl        -0x233468
	  lis       r4, 0x8012
	  addi      r3, r31, 0x70
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x4
	  bl        -0x233484
	  li        r0, 0
	  lfs       f0, -0x1160(r2)
	  stb       r0, 0x0(r31)
	  li        r3, 0x48
	  stb       r0, 0x1(r31)
	  stb       r0, 0x2(r31)
	  stb       r0, 0x3(r31)
	  stw       r22, 0x4(r31)
	  stfs      f0, 0x54(r31)
	  stfs      f0, 0x58(r31)
	  stfs      f0, 0x5C(r31)
	  stfs      f0, 0x60(r31)
	  bl        -0x2D0E50
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lfs       f0, -0x10F4(r2)
	  li        r6, 0xF
	  lfs       f1, -0x10F0(r2)
	  li        r5, 0
	  stfs      f0, 0x0(r3)
	  li        r4, 0x1
	  lfs       f0, -0x10EC(r2)
	  li        r0, 0x3
	  stfs      f1, 0x4(r3)
	  lfs       f1, -0x10E8(r2)
	  stfs      f0, 0x8(r3)
	  lfs       f0, -0x10E4(r2)
	  stfs      f1, 0xC(r3)
	  lfs       f1, -0x1148(r2)
	  stfs      f0, 0x10(r3)
	  lfs       f0, -0x10E0(r2)
	  stfs      f1, 0x14(r3)
	  lfs       f1, -0x10DC(r2)
	  stfs      f0, 0x18(r3)
	  lfs       f0, -0x1150(r2)
	  stfs      f1, 0x1C(r3)
	  lfs       f4, -0x10D8(r2)
	  stw       r6, 0x20(r3)
	  lfs       f3, -0x110C(r2)
	  stw       r5, 0x24(r3)
	  lfs       f2, -0x1114(r2)
	  stfs      f0, 0x28(r3)
	  lfs       f1, -0x10D4(r2)
	  stb       r4, 0x2C(r3)
	  lfs       f0, -0x10D0(r2)
	  stw       r0, 0x30(r3)
	  stfs      f4, 0x34(r3)
	  stfs      f3, 0x38(r3)
	  stfs      f2, 0x3C(r3)
	  stfs      f1, 0x40(r3)
	  stfs      f0, 0x44(r3)

	.loc_0x128:
	  stw       r3, 0x11C(r31)
	  li        r3, 0x18
	  bl        -0x2D0EF4
	  mr.       r0, r3
	  beq-      .loc_0x144
	  bl        0x11C5EC
	  mr        r0, r3

	.loc_0x144:
	  stw       r0, 0x10(r31)
	  li        r3, 0x18
	  bl        -0x2D0F10
	  mr.       r0, r3
	  beq-      .loc_0x160
	  bl        0x11C5D0
	  mr        r0, r3

	.loc_0x160:
	  stw       r0, 0x14(r31)
	  li        r25, 0

	.loc_0x168:
	  li        r3, 0x3C
	  bl        -0x2D0F30
	  mr.       r22, r3
	  beq-      .loc_0x1B8
	  lwz       r24, 0x11C(r31)
	  lwz       r23, 0x4(r31)
	  bl        0x11C5A8
	  lis       r3, 0x804D
	  lfs       f0, -0x1160(r2)
	  addi      r0, r3, 0x59BC
	  stw       r0, 0x0(r22)
	  stw       r23, 0x18(r22)
	  stw       r24, 0x1C(r22)
	  stfs      f0, 0x20(r22)
	  stfs      f0, 0x2C(r22)
	  stfs      f0, 0x28(r22)
	  stfs      f0, 0x24(r22)
	  stfs      f0, 0x38(r22)
	  stfs      f0, 0x34(r22)
	  stfs      f0, 0x30(r22)

	.loc_0x1B8:
	  lwz       r3, 0x14(r31)
	  mr        r4, r22
	  bl        0x11C5E0
	  addi      r25, r25, 0x1
	  cmpwi     r25, 0x8
	  blt+      .loc_0x168
	  li        r3, 0x18
	  bl        -0x2D0F98
	  mr.       r0, r3
	  beq-      .loc_0x1E8
	  bl        0x11C548
	  mr        r0, r3

	.loc_0x1E8:
	  stw       r0, 0x4C(r31)
	  li        r3, 0x18
	  bl        -0x2D0FB4
	  mr.       r0, r3
	  beq-      .loc_0x204
	  bl        0x11C52C
	  mr        r0, r3

	.loc_0x204:
	  stw       r0, 0x50(r31)
	  li        r25, 0

	.loc_0x20C:
	  li        r3, 0x3C
	  bl        -0x2D0FD4
	  mr.       r22, r3
	  beq-      .loc_0x25C
	  lwz       r24, 0x11C(r31)
	  lwz       r23, 0x4(r31)
	  bl        0x11C504
	  lis       r3, 0x804D
	  lfs       f0, -0x1160(r2)
	  addi      r0, r3, 0x59AC
	  stw       r0, 0x0(r22)
	  stw       r23, 0x18(r22)
	  stw       r24, 0x1C(r22)
	  stfs      f0, 0x20(r22)
	  stfs      f0, 0x2C(r22)
	  stfs      f0, 0x28(r22)
	  stfs      f0, 0x24(r22)
	  stfs      f0, 0x38(r22)
	  stfs      f0, 0x34(r22)
	  stfs      f0, 0x30(r22)

	.loc_0x25C:
	  lwz       r3, 0x50(r31)
	  mr        r4, r22
	  bl        0x11C53C
	  addi      r25, r25, 0x1
	  cmpwi     r25, 0xC8
	  blt+      .loc_0x20C
	  li        r3, 0x18
	  bl        -0x2D103C
	  mr.       r0, r3
	  beq-      .loc_0x28C
	  bl        0x11C4A4
	  mr        r0, r3

	.loc_0x28C:
	  stw       r0, 0xB0(r31)
	  li        r3, 0x18
	  bl        -0x2D1058
	  mr.       r0, r3
	  beq-      .loc_0x2A8
	  bl        0x11C488
	  mr        r0, r3

	.loc_0x2A8:
	  stw       r0, 0xB4(r31)
	  li        r24, 0

	.loc_0x2B0:
	  li        r3, 0x3C
	  bl        -0x2D1078
	  mr.       r4, r3
	  beq-      .loc_0x33C
	  lwz       r23, 0x11C(r31)
	  mr        r25, r4
	  lwz       r22, 0x4(r31)
	  bl        0x11C45C
	  lis       r3, 0x804D
	  lfs       f0, -0x1160(r2)
	  addi      r0, r3, 0x599C
	  li        r3, 0x54
	  stw       r0, 0x0(r25)
	  stw       r22, 0x18(r25)
	  stw       r23, 0x1C(r25)
	  stfs      f0, 0x28(r25)
	  stfs      f0, 0x24(r25)
	  stfs      f0, 0x20(r25)
	  stfs      f0, 0x34(r25)
	  stfs      f0, 0x30(r25)
	  stfs      f0, 0x2C(r25)
	  bl        -0x2D10C8
	  mr.       r22, r3
	  beq-      .loc_0x334
	  addi      r4, r25, 0x2C
	  li        r5, 0x117
	  li        r6, 0x118
	  li        r7, 0x119
	  li        r8, 0x11A
	  bl        0xBB464
	  lis       r3, 0x804D
	  addi      r0, r3, 0x5980
	  stw       r0, 0x0(r22)

	.loc_0x334:
	  stw       r22, 0x38(r25)
	  mr        r4, r25

	.loc_0x33C:
	  lwz       r3, 0xB4(r31)
	  bl        0x11C460
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x10
	  blt+      .loc_0x2B0
	  li        r3, 0x18
	  bl        -0x2D1118
	  mr.       r0, r3
	  beq-      .loc_0x368
	  bl        0x11C3C8
	  mr        r0, r3

	.loc_0x368:
	  stw       r0, 0xC8(r31)
	  li        r3, 0x18
	  bl        -0x2D1134
	  mr.       r0, r3
	  beq-      .loc_0x384
	  bl        0x11C3AC
	  mr        r0, r3

	.loc_0x384:
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  lis       r3, 0x804D
	  stw       r0, 0xCC(r31)
	  addi      r5, r5, 0x698C
	  addi      r4, r4, 0x6940
	  addi      r3, r3, 0x58BC
	  li        r26, 0
	  addi      r25, r5, 0x14
	  addi      r24, r4, 0x14
	  addi      r30, r3, 0x14

	.loc_0x3B0:
	  li        r3, 0x50
	  bl        -0x2D1178
	  mr.       r4, r3
	  beq-      .loc_0x504
	  lwz       r27, 0x11C(r31)
	  mr        r22, r4
	  lwz       r23, 0x4(r31)
	  bl        0x11C35C
	  lis       r3, 0x804D
	  li        r4, 0x1
	  addi      r3, r3, 0x5924
	  li        r0, 0
	  stw       r3, 0x0(r22)
	  li        r3, 0x58
	  lfs       f0, -0x1160(r2)
	  stw       r23, 0x18(r22)
	  stw       r27, 0x1C(r22)
	  stb       r4, 0x20(r22)
	  stw       r0, 0x24(r22)
	  stfs      f0, 0x30(r22)
	  stfs      f0, 0x2C(r22)
	  stfs      f0, 0x28(r22)
	  stfs      f0, 0x3C(r22)
	  stfs      f0, 0x38(r22)
	  stfs      f0, 0x34(r22)
	  stw       r0, 0x40(r22)
	  bl        -0x2D11DC
	  mr.       r23, r3
	  beq-      .loc_0x44C
	  lfs       f1, -0x1100(r2)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x108
	  li        r7, 0x109
	  li        r8, 0x10A
	  bl        0xBBC64
	  lis       r3, 0x804D
	  addi      r0, r3, 0x5908
	  stw       r0, 0x0(r23)

	.loc_0x44C:
	  stw       r23, 0x44(r22)
	  li        r3, 0x14
	  bl        -0x2D1218
	  cmplwi    r3, 0
	  beq-      .loc_0x4CC
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r7, r5, 0x6940
	  addi      r6, r22, 0x34
	  li        r5, 0x248
	  stw       r25, 0x4(r3)
	  addi      r0, r4, 0x58BC
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r24, 0x4(r3)
	  stw       r6, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r30, 0x4(r3)

	.loc_0x4CC:
	  stw       r3, 0x48(r22)
	  li        r3, 0x2C
	  bl        -0x2D1298
	  mr.       r23, r3
	  beq-      .loc_0x4FC
	  addi      r4, r22, 0x34
	  li        r5, 0x24A
	  li        r6, 0x24B
	  bl        0xBB0EC
	  lis       r3, 0x804D
	  addi      r0, r3, 0x58A0
	  stw       r0, 0x0(r23)

	.loc_0x4FC:
	  stw       r23, 0x4C(r22)
	  mr        r4, r22

	.loc_0x504:
	  lwz       r3, 0xCC(r31)
	  bl        0x11C298
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0x11
	  blt+      .loc_0x3B0
	  li        r3, 0x7C
	  bl        -0x2D12E0
	  mr.       r22, r3
	  beq-      .loc_0x554
	  li        r4, 0
	  li        r5, 0x10C
	  li        r6, 0x10D
	  li        r7, 0x10E
	  li        r8, 0x10F
	  li        r9, 0x257
	  li        r10, 0x110
	  bl        0xBB570
	  lis       r3, 0x804F
	  subi      r0, r3, 0x5EE4
	  stw       r0, 0x0(r22)

	.loc_0x554:
	  lis       r4, 0x804E
	  lis       r3, 0x804D
	  addi      r4, r4, 0x67C4
	  stw       r22, 0x18(r31)
	  addi      r3, r3, 0x57EC
	  mr        r29, r31
	  mr        r28, r31
	  addi      r27, r4, 0x14
	  addi      r26, r3, 0x14
	  li        r23, 0

	.loc_0x57C:
	  li        r3, 0x34
	  bl        -0x2D1344
	  mr.       r22, r3
	  beq-      .loc_0x5AC
	  addi      r4, r31, 0x64
	  addi      r5, r29, 0x54
	  li        r6, 0x113
	  li        r7, 0x114
	  bl        0xBB7C8
	  lis       r3, 0x804D
	  addi      r0, r3, 0x5838
	  stw       r0, 0x0(r22)

	.loc_0x5AC:
	  stw       r22, 0xA0(r29)
	  mr        r30, r28
	  li        r22, 0

	.loc_0x5B8:
	  li        r3, 0x1C
	  bl        -0x2D1380
	  cmplwi    r3, 0
	  beq-      .loc_0x63C
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x67C4
	  lfs       f0, -0x10EC(r2)
	  li        r5, 0x10B
	  stw       r25, 0x4(r3)
	  addi      r0, r4, 0x57EC
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r27, 0x4(r3)
	  stw       r8, 0x10(r3)
	  stw       r8, 0x14(r3)
	  stfs      f0, 0x18(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r26, 0x4(r3)

	.loc_0x63C:
	  addi      r22, r22, 0x1
	  stw       r3, 0xD0(r30)
	  cmpwi     r22, 0x3
	  addi      r30, r30, 0x4
	  blt+      .loc_0x5B8
	  addi      r23, r23, 0x1
	  addi      r28, r28, 0xC
	  cmpwi     r23, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0x57C
	  li        r3, 0x14
	  bl        -0x2D142C
	  cmplwi    r3, 0
	  beq-      .loc_0x6E0
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  addi      r4, r4, 0x57A0
	  li        r8, 0
	  stw       r0, 0x0(r3)
	  li        r7, 0x2B2
	  addi      r6, r5, 0x6940
	  li        r5, 0x24F
	  stw       r25, 0x4(r3)
	  addi      r0, r4, 0x14
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r24, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x6E0:
	  stw       r3, 0x100(r31)
	  li        r3, 0x2C
	  bl        -0x2D14AC
	  mr.       r22, r3
	  beq-      .loc_0x710
	  li        r4, 0
	  li        r5, 0x250
	  li        r6, 0x251
	  bl        0xBAED8
	  lis       r3, 0x804D
	  addi      r0, r3, 0x5784
	  stw       r0, 0x0(r22)

	.loc_0x710:
	  stw       r22, 0x104(r31)
	  li        r3, 0x20
	  bl        -0x2D14DC
	  mr.       r0, r3
	  beq-      .loc_0x730
	  lwz       r4, 0x4(r31)
	  bl        -0xB4114
	  mr        r0, r3

	.loc_0x730:
	  stw       r0, 0x114(r31)
	  li        r3, 0x40
	  bl        -0x2D13F4
	  li        r25, 0
	  lis       r4, 0x804D
	  stw       r3, 0x118(r31)
	  mr        r22, r25
	  lfs       f31, -0x1160(r2)
	  addi      r23, r4, 0x59CC
	  li        r26, 0

	.loc_0x758:
	  li        r3, 0x2C
	  bl        -0x2D1520
	  mr.       r24, r3
	  beq-      .loc_0x77C
	  li        r4, 0x2
	  bl        -0xB40F8
	  stw       r23, 0x0(r24)
	  stw       r22, 0x24(r24)
	  stfs      f31, 0x28(r24)

	.loc_0x77C:
	  lwz       r3, 0x118(r31)
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0x10
	  stwx      r24, r3, r25
	  addi      r25, r25, 0x4
	  blt+      .loc_0x758
	  mr        r3, r31
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r22, 0x8(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
TChaseMtx6::~TChaseMtx6(void)
{
	// UNUSED FUNCTION
}

} // namespace efx

/*
 * --INFO--
 * Address:	802F541C
 * Size:	0001C8
 */
void BigTreasure::BigTreasureAttackMgr::init(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051D200@sda21(r2)
	stw      r0, 0x24(r1)
	li       r0, 0
	stmw     r26, 8(r1)
	mr       r31, r3
	stb      r0, 0(r3)
	stb      r0, 1(r3)
	stb      r0, 2(r3)
	stb      r0, 3(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x54(r3)
	stfs     f0, 0x58(r3)
	stfs     f0, 0x5c(r3)
	stfs     f0, 0x60(r3)
	lwz      r3, 0x14(r3)
	lwz      r3, 0x10(r3)
	b        lbl_802F548C

lbl_802F546C:
	stfs     f0, 0x20(r3)
	stfs     f0, 0x2c(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x38(r3)
	stfs     f0, 0x34(r3)
	stfs     f0, 0x30(r3)
	lwz      r3, 4(r3)

lbl_802F548C:
	cmplwi   r3, 0
	bne      lbl_802F546C
	lwz      r3, 0x50(r31)
	lfs      f0, lbl_8051D200@sda21(r2)
	lwz      r3, 0x10(r3)
	b        lbl_802F54C4

lbl_802F54A4:
	stfs     f0, 0x20(r3)
	stfs     f0, 0x2c(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x38(r3)
	stfs     f0, 0x34(r3)
	stfs     f0, 0x30(r3)
	lwz      r3, 4(r3)

lbl_802F54C4:
	cmplwi   r3, 0
	bne      lbl_802F54A4
	lwz      r3, 0xb4(r31)
	lfs      f0, lbl_8051D200@sda21(r2)
	lwz      r3, 0x10(r3)
	b        lbl_802F54F8

lbl_802F54DC:
	stfs     f0, 0x28(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x20(r3)
	stfs     f0, 0x34(r3)
	stfs     f0, 0x30(r3)
	stfs     f0, 0x2c(r3)
	lwz      r3, 4(r3)

lbl_802F54F8:
	cmplwi   r3, 0
	bne      lbl_802F54DC
	lwz      r4, 0xcc(r31)
	li       r3, 1
	lfs      f0, lbl_8051D200@sda21(r2)
	li       r0, 0
	lwz      r4, 0x10(r4)
	b        lbl_802F5540

lbl_802F5518:
	stb      r3, 0x20(r4)
	stw      r0, 0x24(r4)
	stfs     f0, 0x30(r4)
	stfs     f0, 0x2c(r4)
	stfs     f0, 0x28(r4)
	stfs     f0, 0x3c(r4)
	stfs     f0, 0x38(r4)
	stfs     f0, 0x34(r4)
	stw      r0, 0x40(r4)
	lwz      r4, 4(r4)

lbl_802F5540:
	cmplwi   r4, 0
	bne      lbl_802F5518
	lwz      r5, 4(r31)
	lis      r3, lbl_8048D204@ha
	addi     r4, r3, lbl_8048D204@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	lwz      r3, 0x18(r31)
	mr       r4, r0
	bl       setMtxptr__Q23efx10TChaseMtx6FPA4_f
	li       r27, 0
	mr       r28, r31

lbl_802F5578:
	li       r26, 0
	mr       r29, r28

lbl_802F5580:
	lwz      r3, 4(r31)
	mr       r4, r27
	addi     r5, r26, 1
	bl       getJointPositionPtr__Q34Game11BigTreasure3ObjFii
	mr       r30, r3
	lwz      r3, 4(r31)
	mr       r4, r27
	mr       r5, r26
	bl       getJointPositionPtr__Q34Game11BigTreasure3ObjFii
	lwz      r4, 0xd0(r29)
	addi     r26, r26, 1
	cmpwi    r26, 3
	addi     r29, r29, 4
	stw      r3, 0x10(r4)
	stw      r30, 0x14(r4)
	blt      lbl_802F5580
	addi     r27, r27, 1
	addi     r28, r28, 0xc
	cmpwi    r27, 4
	blt      lbl_802F5578
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F55E4
 * Size:	0000E8
 */
void BigTreasure::BigTreasureAttackMgr::update(void)
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
	bl       updateFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	mr       r3, r28
	bl       updateGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	mr       r3, r28
	bl       updateWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	mr       r3, r28
	bl       updateElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	mr       r3, r28
	bl       updateAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	mr       r31, r28
	li       r30, 0
	li       r29, 0

lbl_802F5634:
	lbz      r0, 0(r31)
	cmplwi   r0, 0
	beq      lbl_802F566C
	lwz      r3, 4(r28)
	li       r30, 1
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_802F566C
	mr       r4, r29
	bl       isCapturedTreasure__Q34Game11BigTreasure3ObjFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F566C
	mr       r3, r28
	bl       finishAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

lbl_802F566C:
	addi     r29, r29, 1
	addi     r31, r31, 1
	cmpwi    r29, 4
	blt      lbl_802F5634
	clrlwi.  r0, r30, 0x18
	beq      lbl_802F56AC
	lwz      r3, sys@sda21(r13)
	lfs      f1, 8(r28)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 8(r28)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0xc(r28)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0xc(r28)

lbl_802F56AC:
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
 * Address:	........
 * Size:	00008C
 */
void BigTreasure::BigTreasureAttackMgr::setFireAttackParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F56CC
 * Size:	000130
 */
void BigTreasure::BigTreasureAttackMgr::startFireAttack(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lbz      r0, 1(r3)
	cmplwi   r0, 0
	bne      lbl_802F57E8
	li       r0, 1
	lfs      f0, lbl_8051D200@sda21(r2)
	stb      r0, 1(r31)
	li       r4, 1
	stfs     f0, 8(r31)
	stfs     f0, 0xc(r31)
	lwz      r3, 4(r31)
	bl       isNormalAttack__Q34Game11BigTreasure3ObjFi
	clrlwi   r3, r3, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	addi     r0, r3, 2
	cmpwi    r0, 2
	beq      lbl_802F5750
	bge      lbl_802F5764
	cmpwi    r0, 1
	bge      lbl_802F5738
	b        lbl_802F5764

lbl_802F5738:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x103c(r4)
	stfs     f0, 0x28(r3)
	b        lbl_802F5764

lbl_802F5750:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x1064(r4)
	stfs     f0, 0x28(r3)

lbl_802F5764:
	mr       r3, r31
	bl updateFireEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv mr
r3, r31 bl       startNewFireList__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	lis      r3, "zero__10Vector3<f>"@ha
	lwz      r9, 0x11c(r31)
	addi     r8, r3, "zero__10Vector3<f>"@l
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r7, 0(r8)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lwz      r6, 4(r8)
	addi     r5, r4, __vt__Q23efx3Arg@l
	lfs      f3, 0x28(r9)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	lwz      r3, 8(r8)
	addi     r4, r1, 0x14
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r3, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x14(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stw      r0, 0x14(r1)
	stfs     f3, 0x24(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F57E8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F57FC
 * Size:	00009C
 */
void BigTreasure::BigTreasureAttackMgr::startNewFireList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x14(r3)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_802F5880
	mr       r31, r3
	bl       del__5CNodeFv
	lfs      f1, lbl_8051D200@sda21(r2)
	mr       r4, r31
	lfs      f0, lbl_8051D20C@sda21(r2)
	stfs     f1, 0x20(r31)
	lfs      f1, 0x1c(r30)
	stfs     f1, 0x24(r31)
	lfs      f1, 0x20(r30)
	stfs     f1, 0x28(r31)
	lfs      f1, 0x24(r30)
	stfs     f1, 0x2c(r31)
	lfs      f1, 0x28(r30)
	stfs     f1, 0x30(r31)
	lfs      f1, 0x2c(r30)
	stfs     f1, 0x34(r31)
	lfs      f1, 0x30(r30)
	stfs     f1, 0x38(r31)
	lfs      f1, 0x34(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x34(r31)
	lwz      r3, 0x10(r30)
	bl       add__5CNodeFP5CNode

lbl_802F5880:
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
 * Address:	802F5898
 * Size:	00018C
 */
void BigTreasure::BigTreasureAttackMgr::updateFireAttack(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 1
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x10(r3)
	lwz      r29, 0x10(r3)
	b        lbl_802F5958

lbl_802F58C8:
	lwz      r31, 4(r29)
	mr       r3, r29
	bl       update__Q34Game11BigTreasure21BigTreasureFireAttackFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F58F0
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0x14(r28)
	mr       r4, r29
	bl       add__5CNodeFP5CNode

lbl_802F58F0:
	lwz      r3, 0x10(r28)
	lwz      r0, 0x10(r3)
	cmplw    r29, r0
	bne      lbl_802F591C
	mr       r3, r28
	mr       r4, r29
	li       r5, 2
	bl
updateFireSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureFireAttacki
	addi     r4, r28, 0x40
	li       r3, 0x5152
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F591C:
	clrlwi.  r0, r30, 0x18
	beq      lbl_802F5954
	lfs      f1, 0x20(r29)
	lfs      f0, lbl_8051D294@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F5954
	mr       r3, r28
	mr       r4, r29
	li       r30, 0
	li       r5, 1
	bl
updateFireSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureFireAttacki
	addi     r4, r28, 0x34
	li       r3, 0x5151
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F5954:
	mr       r29, r31

lbl_802F5958:
	cmplwi   r29, 0
	bne      lbl_802F58C8
	lbz      r0, 1(r28)
	cmplwi   r0, 0
	beq      lbl_802F5A04
	mr       r3, r28
	bl updateFireEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv lfs
f1, 8(r28) lfs      f0, lbl_8051D284@sda21(r2) fcmpo    cr0, f1, f0 ble
lbl_802F59F8 lfs      f0, lbl_8051D200@sda21(r2) stfs     f0, 8(r28) lwz r3,
0x14(r28) lwz      r31, 0x10(r3) cmplwi   r31, 0 beq      lbl_802F59F8 mr r3,
r31 bl       del__5CNodeFv lfs      f1, lbl_8051D200@sda21(r2) mr       r4, r31
	lfs      f0, lbl_8051D20C@sda21(r2)
	stfs     f1, 0x20(r31)
	lfs      f1, 0x1c(r28)
	stfs     f1, 0x24(r31)
	lfs      f1, 0x20(r28)
	stfs     f1, 0x28(r31)
	lfs      f1, 0x24(r28)
	stfs     f1, 0x2c(r31)
	lfs      f1, 0x28(r28)
	stfs     f1, 0x30(r31)
	lfs      f1, 0x2c(r28)
	stfs     f1, 0x34(r31)
	lfs      f1, 0x30(r28)
	stfs     f1, 0x38(r31)
	lfs      f1, 0x34(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x34(r31)
	lwz      r3, 0x10(r28)
	bl       add__5CNodeFP5CNode

lbl_802F59F8:
	addi     r4, r28, 0x28
	li       r3, 0x5150
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F5A04:
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
 * Address:	........
 * Size:	000030
 */
void BigTreasure::BigTreasureAttackMgr::finishFireAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F5A24
 * Size:	000070
 */
void BigTreasure::BigTreasureAttackMgr::updateFireEmitPosition(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8048D204@ha
	lwz      r5, 4(r31)
	addi     r4, r3, lbl_8048D204@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0(r3)
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x20(r31)
	lfs      f0, 0x20(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x30(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F5A94
 * Size:	0000A0
 */
void BigTreasure::BigTreasureAttackMgr::updateFireSePosition((Game::BigTreasure::BigTreasureFireAttack*, int))
{
	/*
	.loc_0x0:
	  mulli     r0, r5, 0xC
	  lwz       r5, 0x11C(r3)
	  lfs       f3, 0x20(r4)
	  lfs       f1, 0x28(r5)
	  lfs       f0, 0x24(r4)
	  add       r3, r3, r0
	  lfs       f2, -0x1148(r2)
	  stfs      f0, 0x28(r3)
	  fmuls     f2, f2, f1
	  lfs       f0, -0x1154(r2)
	  lfs       f1, 0x28(r4)
	  stfs      f1, 0x2C(r3)
	  fmuls     f2, f3, f2
	  lfs       f1, 0x2C(r4)
	  stfs      f1, 0x30(r3)
	  lfs       f1, 0x28(r3)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x28(r3)
	  lfs       f1, 0x2C(r3)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x2C(r3)
	  lfs       f1, 0x30(r3)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x30(r3)
	  lfs       f2, 0x28(r3)
	  lfs       f1, 0x30(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x28(r3)
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x34(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C(r3)
	  lfs       f2, 0x30(r3)
	  lfs       f1, 0x38(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x30(r3)
	  lfs       f1, 0x2C(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void BigTreasure::BigTreasureAttackMgr::setGasAttackParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F5B34
 * Size:	0002C4
 */
void BigTreasure::BigTreasureAttackMgr::startGasAttack(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r31, r3
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	bne      lbl_802F5DC0
	li       r0, 1
	lfs      f0, lbl_8051D200@sda21(r2)
	stb      r0, 2(r31)
	li       r4, 2
	stfs     f0, 8(r31)
	stfs     f0, 0xc(r31)
	lwz      r3, 4(r31)
	bl       isNormalAttack__Q34Game11BigTreasure3ObjFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F5BA8
	li       r0, 1
	b        lbl_802F5BF0

lbl_802F5BA8:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D24C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F5BEC
	li       r0, 2
	b        lbl_802F5BF0

lbl_802F5BEC:
	li       r0, 3

lbl_802F5BF0:
	cmpwi    r0, 2
	beq      lbl_802F5C44
	bge      lbl_802F5C08
	cmpwi    r0, 1
	bge      lbl_802F5C14
	b        lbl_802F5CB0

lbl_802F5C08:
	cmpwi    r0, 4
	bge      lbl_802F5CB0
	b        lbl_802F5C7C

lbl_802F5C14:
	lwz      r3, 0x11c(r31)
	li       r0, 3
	lfs      f0, lbl_8051D254@sda21(r2)
	stw      r0, 0x30(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f1, 0x10b4(r4)
	stfs     f1, 0x34(r3)
	lwz      r3, 0x11c(r31)
	stfs     f0, 0x38(r3)
	b        lbl_802F5CB0

lbl_802F5C44:
	lwz      r3, 0x11c(r31)
	li       r0, 4
	stw      r0, 0x30(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x10dc(r4)
	stfs     f0, 0x34(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x1104(r4)
	stfs     f0, 0x38(r3)
	b        lbl_802F5CB0

lbl_802F5C7C:
	lwz      r3, 0x11c(r31)
	li       r0, 4
	stw      r0, 0x30(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x10dc(r4)
	stfs     f0, 0x34(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x112c(r4)
	stfs     f0, 0x38(r3)

lbl_802F5CB0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D24C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F5CFC
	lwz      r3, 0x11c(r31)
	li       r0, 1
	stb      r0, 0x2c(r3)
	b        lbl_802F5D08

lbl_802F5CFC:
	lwz      r3, 0x11c(r31)
	li       r0, 0
	stb      r0, 0x2c(r3)

lbl_802F5D08:
	mr       r3, r31
	bl       updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	bl       rand
	lwz      r4, 0x11c(r31)
	lis      r30, 0x4330
	xoris    r3, r3, 0x8000
	stw      r30, 8(r1)
	lwz      r0, 0x30(r4)
	mr       r29, r31
	stw      r3, 0xc(r1)
	li       r28, 0
	xoris    r0, r0, 0x8000
	lfd      f31, lbl_8051D230@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f2, f0, f31
	lfs      f3, lbl_8051D298@sda21(r2)
	stw      r30, 0x10(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	lfd      f0, 0x10(r1)
	fmuls    f2, f3, f2
	fsubs    f0, f0, f31
	fdivs    f30, f2, f1
	fdivs    f29, f3, f0
	b        lbl_802F5DA8

lbl_802F5D6C:
	xoris    r0, r28, 0x8000
	stw      r30, 0x10(r1)
	li       r4, 0
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f31
	fmadds   f0, f29, f0, f30
	stfs     f0, 0x54(r29)
	lwz      r3, 0xa0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_802F5DA8:
	lwz      r3, 0x11c(r31)
	lwz      r0, 0x30(r3)
	cmpw     r28, r0
	blt      lbl_802F5D6C
	mr       r3, r31
	bl       startNewGasList__Q34Game11BigTreasure20BigTreasureAttackMgrFv

lbl_802F5DC0:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r0, 0x64(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F5DF8
 * Size:	00014C
 */
void BigTreasure::BigTreasureAttackMgr::startNewGasList(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r31, r28
	b        lbl_802F5F14

lbl_802F5E24:
	lwz      r3, 0x50(r28)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_802F5F0C
	mr       r29, r3
	bl       del__5CNodeFv
	lfs      f3, 0x54(r31)
	lfs      f0, lbl_8051D200@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	stfs     f0, 0x20(r29)
	bge      lbl_802F5E58
	fneg     f1, f3

lbl_802F5E58:
	lfs      f2, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D200@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f4, 4(r3)
	bge      lbl_802F5EB0
	lfs      f0, lbl_8051D23C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802F5EC8

lbl_802F5EB0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802F5EC8:
	stfs     f0, 0x24(r29)
	mr       r4, r29
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D240@sda21(r2)
	stfs     f1, 0x28(r29)
	stfs     f4, 0x2c(r29)
	lfs      f1, 0x64(r28)
	stfs     f1, 0x30(r29)
	lfs      f1, 0x68(r28)
	stfs     f1, 0x34(r29)
	lfs      f1, 0x6c(r28)
	stfs     f1, 0x38(r29)
	lfs      f1, 0x34(r29)
	fadds    f0, f1, f0
	stfs     f0, 0x34(r29)
	lwz      r3, 0x4c(r28)
	bl       add__5CNodeFP5CNode

lbl_802F5F0C:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_802F5F14:
	lwz      r3, 0x11c(r28)
	lwz      r0, 0x30(r3)
	cmpw     r30, r0
	blt      lbl_802F5E24
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F5F44
 * Size:	000344
 */
void BigTreasure::BigTreasureAttackMgr::updateGasAttack(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r26, 0x28(r1)
	mr       r31, r3
	addi     r29, r1, 8
	li       r30, 0
	lwz      r0, lbl_8051D29C@sda21(r2)
	lwz      r3, 0x4c(r3)
	stw      r0, 8(r1)
	lwz      r27, 0x10(r3)
	b        lbl_802F6068

lbl_802F5F74:
	lwz      r28, 4(r27)
	mr       r3, r27
	bl       update__Q34Game11BigTreasure20BigTreasureGasAttackFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F5F9C
	mr       r3, r27
	bl       del__5CNodeFv
	lwz      r3, 0x50(r31)
	mr       r4, r27
	bl       add__5CNodeFP5CNode

lbl_802F5F9C:
	lwz      r3, 0x11c(r31)
	lwz      r3, 0x30(r3)
	divw     r0, r30, r3
	mullw    r0, r0, r3
	subf     r26, r0, r30
	lbzx     r0, r29, r26
	cmplwi   r0, 0
	beq      lbl_802F6060
	lfs      f1, 0x20(r27)
	lfs      f0, lbl_8051D24C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F6060
	li       r0, 0
	mr       r3, r31
	stbx     r0, r29, r26
	mr       r4, r27
	mr       r5, r26
	bl
updateGasSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure20BigTreasureGasAttacki
	cmpwi    r26, 0
	bne      lbl_802F6004
	mulli    r4, r26, 0xc
	li       r3, 0x5156
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F6060

lbl_802F6004:
	cmpwi    r26, 1
	bne      lbl_802F6024
	mulli    r4, r26, 0xc
	li       r3, 0x5157
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F6060

lbl_802F6024:
	cmpwi    r26, 2
	bne      lbl_802F6044
	mulli    r4, r26, 0xc
	li       r3, 0x5158
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F6060

lbl_802F6044:
	cmpwi    r26, 3
	bne      lbl_802F6060
	mulli    r4, r26, 0xc
	li       r3, 0x5159
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F6060:
	mr       r27, r28
	addi     r30, r30, 1

lbl_802F6068:
	cmplwi   r27, 0
	bne      lbl_802F5F74
	lbz      r0, 2(r31)
	cmplwi   r0, 0
	beq      lbl_802F6274
	mr       r3, r31
	bl       updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	mr       r4, r31
	li       r6, 0
	b        lbl_802F610C

lbl_802F6090:
	lwz      r3, 4(r31)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802F6104
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_802F60D8
	lfs      f2, 0x54(r4)
	lfs      f1, 0x34(r5)
	lfs      f0, lbl_8051D298@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x54(r4)
	lfs      f1, 0x54(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802F6104
	fsubs    f0, f1, f0
	stfs     f0, 0x54(r4)
	b        lbl_802F6104

lbl_802F60D8:
	lfs      f2, 0x54(r4)
	lfs      f1, 0x34(r5)
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x54(r4)
	lfs      f1, 0x54(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_802F6104
	lfs      f0, lbl_8051D298@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x54(r4)

lbl_802F6104:
	addi     r4, r4, 4
	addi     r6, r6, 1

lbl_802F610C:
	lwz      r5, 0x11c(r31)
	lwz      r0, 0x30(r5)
	cmpw     r6, r0
	blt      lbl_802F6090
	lfs      f1, 8(r31)
	lfs      f0, lbl_8051D284@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802F6240
	lfs      f0, lbl_8051D200@sda21(r2)
	mr       r29, r31
	li       r30, 0
	stfs     f0, 8(r31)
	b        lbl_802F6230

lbl_802F6140:
	lwz      r3, 0x50(r31)
	lwz      r28, 0x10(r3)
	cmplwi   r28, 0
	beq      lbl_802F6228
	mr       r3, r28
	bl       del__5CNodeFv
	lfs      f3, 0x54(r29)
	lfs      f0, lbl_8051D200@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	stfs     f0, 0x20(r28)
	bge      lbl_802F6174
	fneg     f1, f3

lbl_802F6174:
	lfs      f2, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D200@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f4, 4(r3)
	bge      lbl_802F61CC
	lfs      f0, lbl_8051D23C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802F61E4

lbl_802F61CC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802F61E4:
	stfs     f0, 0x24(r28)
	mr       r4, r28
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D240@sda21(r2)
	stfs     f1, 0x28(r28)
	stfs     f4, 0x2c(r28)
	lfs      f1, 0x64(r31)
	stfs     f1, 0x30(r28)
	lfs      f1, 0x68(r31)
	stfs     f1, 0x34(r28)
	lfs      f1, 0x6c(r31)
	stfs     f1, 0x38(r28)
	lfs      f1, 0x34(r28)
	fadds    f0, f1, f0
	stfs     f0, 0x34(r28)
	lwz      r3, 0x4c(r31)
	bl       add__5CNodeFP5CNode

lbl_802F6228:
	addi     r29, r29, 4
	addi     r30, r30, 1

lbl_802F6230:
	lwz      r3, 0x11c(r31)
	lwz      r0, 0x30(r3)
	cmpw     r30, r0
	blt      lbl_802F6140

lbl_802F6240:
	lwz      r3, 0x11c(r31)
	lfs      f1, 0xc(r31)
	lfs      f0, 0x38(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802F6268
	lbz      r0, 0x2c(r3)
	lfs      f0, lbl_8051D200@sda21(r2)
	xori     r0, r0, 1
	stb      r0, 0x2c(r3)
	stfs     f0, 0xc(r31)

lbl_802F6268:
	addi     r4, r31, 0x64
	li       r3, 0x5155
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F6274:
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void BigTreasure::BigTreasureAttackMgr::finishGasAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F6288
 * Size:	000058
 */
void BigTreasure::BigTreasureAttackMgr::updateGasEmitPosition(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8048D218@ha
	lwz      r5, 4(r31)
	addi     r4, r3, lbl_8048D218@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x64(r31)
	stfs     f1, 0x68(r31)
	stfs     f2, 0x6c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F62E0
 * Size:	0000A0
 */
void BigTreasure::BigTreasureAttackMgr::updateGasSePosition((Game::BigTreasure::BigTreasureGasAttack*, int))
{
	/*
	.loc_0x0:
	  mulli     r0, r5, 0xC
	  lwz       r5, 0x11C(r3)
	  lfs       f3, 0x20(r4)
	  lfs       f1, 0x28(r5)
	  lfs       f0, 0x24(r4)
	  add       r3, r3, r0
	  lfs       f2, -0x1110(r2)
	  stfs      f0, 0x70(r3)
	  fmuls     f2, f2, f1
	  lfs       f0, -0x1120(r2)
	  lfs       f1, 0x28(r4)
	  stfs      f1, 0x74(r3)
	  fmuls     f2, f3, f2
	  lfs       f1, 0x2C(r4)
	  stfs      f1, 0x78(r3)
	  lfs       f1, 0x70(r3)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x70(r3)
	  lfs       f1, 0x74(r3)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x74(r3)
	  lfs       f1, 0x78(r3)
	  fmuls     f1, f1, f2
	  stfs      f1, 0x78(r3)
	  lfs       f2, 0x70(r3)
	  lfs       f1, 0x30(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x70(r3)
	  lfs       f2, 0x74(r3)
	  lfs       f1, 0x34(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x74(r3)
	  lfs       f2, 0x78(r3)
	  lfs       f1, 0x38(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x78(r3)
	  lfs       f1, 0x74(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x74(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void BigTreasure::BigTreasureAttackMgr::setWaterAttackParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F6380
 * Size:	00010C
 */
void BigTreasure::BigTreasureAttackMgr::startWaterAttack(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 3(r3)
	cmplwi   r0, 0
	bne      lbl_802F6478
	li       r0, 1
	lfs      f0, lbl_8051D200@sda21(r2)
	stb      r0, 3(r31)
	li       r4, 3
	stfs     f0, 8(r31)
	stfs     f0, 0xc(r31)
	lwz      r3, 4(r31)
	bl       isNormalAttack__Q34Game11BigTreasure3ObjFi
	clrlwi   r3, r3, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	addi     r0, r3, 2
	cmpwi    r0, 2
	beq      lbl_802F642C
	bge      lbl_802F6468
	cmpwi    r0, 1
	bge      lbl_802F63EC
	b        lbl_802F6468

lbl_802F63EC:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x117c(r4)
	stfs     f0, 0x3c(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x11a4(r4)
	stfs     f0, 0x40(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x11cc(r4)
	stfs     f0, 0x44(r3)
	b        lbl_802F6468

lbl_802F642C:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x11f4(r4)
	stfs     f0, 0x3c(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x121c(r4)
	stfs     f0, 0x40(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x1244(r4)
	stfs     f0, 0x44(r3)

lbl_802F6468:
	mr       r3, r31
	bl updateWaterEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv mr
r3, r31 bl       startNewWaterList__Q34Game11BigTreasure20BigTreasureAttackMgrFv

lbl_802F6478:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F648C
 * Size:	00047C
 */
void BigTreasure::BigTreasureAttackMgr::startNewWaterList(void)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r31, r3
	lwz      r3, 0xb4(r3)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_802F68B8
	lwz      r5, 4(r31)
	lis      r3, lbl_8048D228@ha
	addi     r4, r3, lbl_8048D228@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x20(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx12TOootaWbShot@ha
	stw      r0, 0x20(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x11f
	li       r5, 0x120
	stw      r0, 0x20(r1)
	addi     r0, r4, __vt__Q23efx12TOootaWbShot@l
	li       r4, 0
	stw      r3, 0x30(r1)
	addi     r3, r1, 0x20
	sth      r7, 0x24(r1)
	sth      r5, 0x26(r1)
	stw      r6, 0x28(r1)
	stw      r6, 0x2c(r1)
	stw      r0, 0x20(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lfs      f30, 0xbc(r31)
	mr       r3, r31
	lfs      f29, 0xc0(r31)
	lfs      f28, 0xc4(r31)
	bl getWaterTargetCreature__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	cmplwi   r3, 0
	beq      lbl_802F65A0
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f27, 0x14(r1)
	lfs      f26, 0x1c(r1)
	b        lbl_802F66BC

lbl_802F65A0:
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f27, 8(r1)
	lfs      f26, 0x10(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051D2A0@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_8051D224@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f2, lbl_8051D298@sda21(r2)
	lfd      f0, 0x40(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D200@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f2, f2, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802F6658
	lfs      f0, lbl_8051D23C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_802F667C

lbl_802F6658:
	lfs      f0, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_802F667C:
	lfs      f0, lbl_8051D200@sda21(r2)
	fmadds   f27, f31, f1, f27
	fcmpo    cr0, f2, f0
	bge      lbl_802F6690
	fneg     f2, f2

lbl_802F6690:
	lfs      f0, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmadds   f26, f31, f0, f26

lbl_802F66BC:
	fsubs    f1, f26, f28
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f2, f27, f30
	fmuls    f1, f1, f1
	fmadds   f25, f2, f2, f1
	fcmpo    cr0, f25, f0
	ble      lbl_802F66E8
	ble      lbl_802F66EC
	frsqrte  f0, f25
	fmuls    f25, f0, f25
	b        lbl_802F66EC

lbl_802F66E8:
	fmr      f25, f0

lbl_802F66EC:
	lwz      r3, 0x11c(r31)
	lfs      f31, 0x44(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfs      f0, lbl_8051D2A4@sda21(r2)
	stw      r0, 0x58(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	fmuls    f2, f0, f31
	lfd      f0, 0x58(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D210@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f1, f1, f31
	fadds    f2, f25, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802F6740
	fmr      f2, f0

lbl_802F6740:
	lwz      r4, sys@sda21(r13)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, lbl_8051D24C@sda21(r2)
	fsubs    f1, f27, f30
	lfs      f5, 0x54(r4)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f4, lbl_8051D2A8@sda21(r2)
	fmuls    f3, f0, f2
	lfs      f0, lbl_8051D25C@sda21(r2)
	fdivs    f4, f4, f5
	fdivs    f27, f4, f0
	fdivs    f0, f27, f0
	fdivs    f0, f3, f0
	fsubs    f2, f26, f28
	fdivs    f26, f0, f5
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 0x11c(r31)
	fmr      f31, f1
	lfs      f25, 0x40(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfs      f0, lbl_8051D2A4@sda21(r2)
	stw      r0, 0x50(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	fmuls    f2, f0, f25
	lfd      f0, 0x50(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D200@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f1, f1, f25
	fadds    f3, f31, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802F67DC
	fneg     f1, f3

lbl_802F67DC:
	lfs      f2, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D200@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f26, f0
	bge      lbl_802F6838
	lfs      f0, lbl_8051D23C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f25, f0
	b        lbl_802F6850

lbl_802F6838:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f25, r4, r0

lbl_802F6850:
	lwz      r3, 0xb4(r31)
	lwz      r30, 0x10(r3)
	mr       r3, r30
	bl       del__5CNodeFv
	fmuls    f0, f26, f25
	li       r4, 0
	stfs     f0, 0x20(r30)
	stfs     f27, 0x24(r30)
	stfs     f31, 0x28(r30)
	stfs     f30, 0x2c(r30)
	stfs     f29, 0x30(r30)
	stfs     f28, 0x34(r30)
	lwz      r3, 0x38(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb0(r31)
	mr       r4, r30
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	mr       r4, r30
	bl
addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack
	addi     r4, r31, 0xbc
	li       r3, 0x5954
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F68B8:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F6908
 * Size:	000164
 */
void BigTreasure::BigTreasureAttackMgr::updateWaterAttack(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	lwz      r3, 0xb0(r3)
	lwz      r29, 0x10(r3)
	b        lbl_802F6A10

lbl_802F6930:
	lwz      r30, 4(r29)
	mr       r3, r29
	bl       update__Q34Game11BigTreasure22BigTreasureWaterAttackFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F6A0C
	lwz      r3, 0x38(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	lis      r4, __vt__Q23efx8TSimple4@ha
	stw      r0, 8(r1)
	lis      r3, __vt__Q23efx11TOootaWbHit@ha
	addi     r11, r5, __vt__Q23efx5TBase@l
	addi     r10, r4, __vt__Q23efx8TSimple4@l
	lfs      f0, 0x2c(r29)
	addi     r0, r3, __vt__Q23efx11TOootaWbHit@l
	li       r9, 0x11b
	li       r8, 0x11c
	stfs     f0, 0xc(r1)
	li       r7, 0x11d
	li       r6, 0x11e
	li       r5, 0
	lfs      f0, 0x30(r29)
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	stfs     f0, 0x10(r1)
	lfs      f0, 0x34(r29)
	stw      r11, 0x18(r1)
	stw      r10, 0x18(r1)
	stfs     f0, 0x14(r1)
	sth      r9, 0x1c(r1)
	sth      r8, 0x1e(r1)
	sth      r7, 0x20(r1)
	sth      r6, 0x22(r1)
	stw      r5, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r5, 0x30(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx8TSimple4FPQ23efx3Arg
	addi     r4, r29, 0x2c
	li       r3, 0x5953
	bl       PSStartSoundVec__FUlP3Vec
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0xb4(r31)
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	mr       r4, r29
	bl
delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack

lbl_802F6A0C:
	mr       r29, r30

lbl_802F6A10:
	cmplwi   r29, 0
	bne      lbl_802F6930
	lbz      r0, 3(r31)
	cmplwi   r0, 0
	beq      lbl_802F6A50
	mr       r3, r31
	bl updateWaterEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv lwz
r3, 0x11c(r31) lfs      f1, 8(r31) lfs      f0, 0x3c(r3) fcmpo    cr0, f1, f0
	ble      lbl_802F6A50
	lfs      f0, lbl_8051D200@sda21(r2)
	mr       r3, r31
	stfs     f0, 8(r31)
	bl       startNewWaterList__Q34Game11BigTreasure20BigTreasureAttackMgrFv

lbl_802F6A50:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BigTreasure::BigTreasureAttackMgr::finishWaterAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F6A6C
 * Size:	000058
 */
void BigTreasure::BigTreasureAttackMgr::updateWaterEmitPosition(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8048D228@ha
	lwz      r5, 4(r31)
	addi     r4, r3, lbl_8048D228@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xbc(r31)
	stfs     f1, 0xc0(r31)
	stfs     f2, 0xc4(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F6AC4
 * Size:	0002D8
 */
void BigTreasure::BigTreasureAttackMgr::getWaterTargetCreature(void)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r4, 0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x444(r1)
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r4, 0
	stw      r31, 0x43c(r1)
	li       r31, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	stw      r29, 0x434(r1)
	stw      r28, 0x430(r1)
	lwz      r0, pikiMgr__4Game@sda21(r13)
	stw      r4, 0x14(r1)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	bne      lbl_802F6B2C
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802F6BB8

lbl_802F6B2C:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802F6B9C

lbl_802F6B48:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F6BB8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802F6B9C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F6B48

lbl_802F6BB8:
	addi     r28, r1, 0x18
	b        lbl_802F6CE0

lbl_802F6BC0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F6C24
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F6C24
	lbz      r0, 0x2b8(r29)
	cmpwi    r0, 0
	beq      lbl_802F6C24
	stw      r29, 0(r28)
	addi     r28, r28, 4
	addi     r31, r31, 1

lbl_802F6C24:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_802F6C50
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802F6CE0

lbl_802F6C50:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802F6CC4

lbl_802F6C70:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F6CE0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802F6CC4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F6C70

lbl_802F6CE0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_802F6BC0
	cmpwi    r31, 0
	beq      lbl_802F6D64
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x41c(r1)
	xoris    r0, r31, 0x8000
	lfd      f2, lbl_8051D230@sda21(r2)
	addi     r3, r1, 0x18
	stw      r4, 0x418(r1)
	lfs      f0, lbl_8051D224@sda21(r2)
	lfd      f1, 0x418(r1)
	stw      r0, 0x424(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x420(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x420(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x428(r1)
	lwz      r0, 0x42c(r1)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	b        lbl_802F6D7C

lbl_802F6D64:
	lwz      r3, 4(r30)
	li       r4, 0
	lfs      f1, lbl_8051D2AC@sda21(r2)
	li       r5, 0
	lfs      f2, lbl_8051D2B0@sda21(r2)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"

lbl_802F6D7C:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	lwz      r28, 0x430(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F6D9C
 * Size:	0003FC
 */
void BigTreasure::BigTreasureAttackMgr::setElecAttackParameter(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	bl       isNormalAttack__Q34Game11BigTreasure3ObjFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F6E10
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D24C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F6E08
	li       r0, 1
	b        lbl_802F6E58

lbl_802F6E08:
	li       r0, 2
	b        lbl_802F6E58

lbl_802F6E10:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D24C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F6E54
	li       r0, 3
	b        lbl_802F6E58

lbl_802F6E54:
	li       r0, 4

lbl_802F6E58:
	cmpwi    r0, 3
	beq      lbl_802F6FF0
	bge      lbl_802F6E74
	cmpwi    r0, 1
	beq      lbl_802F6E80
	bge      lbl_802F6F38
	b        lbl_802F715C

lbl_802F6E74:
	cmpwi    r0, 5
	bge      lbl_802F715C
	b        lbl_802F70A8

lbl_802F6E80:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xa74(r4)
	stfs     f0, 0(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xa9c(r4)
	stfs     f0, 4(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xac4(r4)
	stfs     f0, 8(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xaec(r4)
	stfs     f0, 0xc(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xb14(r4)
	stfs     f0, 0x10(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xb3c(r4)
	stfs     f0, 0x14(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xb64(r4)
	stfs     f0, 0x18(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xb8c(r4)
	stfs     f0, 0x1c(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lwz      r0, 0xbb4(r4)
	stw      r0, 0x20(r3)
	b        lbl_802F715C

lbl_802F6F38:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xbdc(r4)
	stfs     f0, 0(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xc04(r4)
	stfs     f0, 4(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xc2c(r4)
	stfs     f0, 8(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xc54(r4)
	stfs     f0, 0xc(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xc7c(r4)
	stfs     f0, 0x10(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xca4(r4)
	stfs     f0, 0x14(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xccc(r4)
	stfs     f0, 0x18(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xcf4(r4)
	stfs     f0, 0x1c(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lwz      r0, 0xd1c(r4)
	stw      r0, 0x20(r3)
	b        lbl_802F715C

lbl_802F6FF0:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xd44(r4)
	stfs     f0, 0(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xd6c(r4)
	stfs     f0, 4(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xd94(r4)
	stfs     f0, 8(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xdbc(r4)
	stfs     f0, 0xc(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xde4(r4)
	stfs     f0, 0x10(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xe0c(r4)
	stfs     f0, 0x14(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xe34(r4)
	stfs     f0, 0x18(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xe5c(r4)
	stfs     f0, 0x1c(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lwz      r0, 0xe84(r4)
	stw      r0, 0x20(r3)
	b        lbl_802F715C

lbl_802F70A8:
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xeac(r4)
	stfs     f0, 0(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xed4(r4)
	stfs     f0, 4(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xefc(r4)
	stfs     f0, 8(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xf24(r4)
	stfs     f0, 0xc(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xf4c(r4)
	stfs     f0, 0x10(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xf74(r4)
	stfs     f0, 0x14(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xf9c(r4)
	stfs     f0, 0x18(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0xfc4(r4)
	stfs     f0, 0x1c(r3)
	lwz      r4, 4(r31)
	lwz      r3, 0x11c(r31)
	lwz      r4, 0xc0(r4)
	lwz      r0, 0xfec(r4)
	stw      r0, 0x20(r3)

lbl_802F715C:
	lwz      r3, 0x11c(r31)
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, 0x1c(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_802F717C
	lwz      r0, 0x20(r3)
	stw      r0, 0x24(r3)
	b        lbl_802F7184

lbl_802F717C:
	li       r0, 0
	stw      r0, 0x24(r3)

lbl_802F7184:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F7198
 * Size:	000494
 */
void BigTreasure::BigTreasureAttackMgr::startElecAttack(void)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stfd     f25, 0x60(r1)
	psq_st   f25, 104(r1), 0, qr0
	stfd     f24, 0x50(r1)
	psq_st   f24, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r28, r3
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_802F75D8
	li       r0, 1
	lfs      f0, lbl_8051D200@sda21(r2)
	stb      r0, 0(r28)
	stfs     f0, 8(r28)
	stfs     f0, 0xc(r28)
	bl setElecAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv li
r31, 0 mr       r30, r28

lbl_802F7218:
	li       r27, 0
	mr       r29, r30

lbl_802F7220:
	lwz      r3, 0xd0(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 1
	addi     r29, r29, 4
	cmpwi    r27, 3
	blt      lbl_802F7220
	addi     r31, r31, 1
	addi     r30, r30, 0xc
	cmpwi    r31, 4
	blt      lbl_802F7218
	lwz      r5, 4(r28)
	lis      r3, lbl_8048D1F0@ha
	addi     r4, r3, lbl_8048D1F0@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0xcc(r28)
	lfs      f29, 0x2c(r3)
	lwz      r27, 0x10(r4)
	lfs      f30, 0x1c(r3)
	cmplwi   r27, 0
	lfs      f31, 0xc(r3)
	beq      lbl_802F7320
	li       r0, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0x24(r27)
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0x28(r27)
	lfs      f0, 4(r3)
	stfs     f0, 0x2c(r27)
	lfs      f0, 8(r3)
	stfs     f0, 0x30(r27)
	stfs     f31, 0x34(r27)
	stfs     f30, 0x38(r27)
	stfs     f29, 0x3c(r27)
	stb      r0, 0x20(r27)
	stw      r0, 0x40(r27)
	lbz      r0, 0x20(r27)
	cmplwi   r0, 0
	beq      lbl_802F72E8
	lwz      r3, 0x48(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F72E8:
	mr       r3, r27
	bl       del__5CNodeFv
	lwz      r3, 0xc8(r28)
	mr       r4, r27
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x100(r28)
	addi     r0, r27, 0x34
	li       r4, 0
	stw      r0, 0x10(r3)
	lwz      r3, 0x100(r28)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F7320:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	li       r31, 0
	lwz      r3, 0x11c(r28)
	stw      r4, 8(r1)
	lwz      r0, 0x20(r3)
	lfd      f4, lbl_8051D230@sda21(r2)
	lfd      f0, 8(r1)
	xoris    r0, r0, 0x8000
	lfs      f3, lbl_8051D298@sda21(r2)
	fsubs    f0, f0, f4
	stw      r0, 0x14(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	stw      r4, 0x10(r1)
	fmuls    f2, f3, f0
	lwz      r3, 0xcc(r28)
	lfd      f0, 0x10(r1)
	lwz      r4, 0x10(r3)
	fdivs    f1, f2, f1
	fsubs    f0, f0, f4
	fmr      f28, f1
	fdivs    f27, f3, f0
	b        lbl_802F755C

lbl_802F7384:
	lwz      r3, 0x11c(r28)
	lwz      r30, 4(r4)
	lwz      r0, 0x20(r3)
	cmpw     r31, r0
	bge      lbl_802F7554
	mr       r29, r4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lwz      r3, 0x11c(r28)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_8051D230@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f2, lbl_8051D2B4@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, lbl_8051D224@sda21(r2)
	lfs      f0, lbl_8051D284@sda21(r2)
	lfs      f25, 0xc(r3)
	fmuls    f2, f2, f3
	lfs      f24, 0x14(r3)
	fdivs    f1, f2, f1
	fsubs    f0, f1, f0
	fadds    f26, f28, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0x11c(r28)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051D230@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 8(r3)
	fmuls    f2, f25, f2
	fdivs    f1, f2, f1
	fadds    f25, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	fmr      f4, f26
	lwz      r3, 0x11c(r28)
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051D230@sda21(r2)
	lfd      f1, 0x18(r1)
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f3, f1, f2
	lfs      f2, lbl_8051D224@sda21(r2)
	lfs      f1, 0x10(r3)
	fcmpo    cr0, f26, f0
	fmuls    f0, f24, f3
	fdivs    f0, f0, f2
	fadds    f3, f1, f0
	bge      lbl_802F7468
	fneg     f4, f26

lbl_802F7468:
	lfs      f2, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D200@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	fcmpo    cr0, f26, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f25, f0
	bge      lbl_802F74C4
	lfs      f0, lbl_8051D23C@sda21(r2)
	fmuls    f0, f26, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802F74DC

lbl_802F74C4:
	fmuls    f0, f26, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802F74DC:
	li       r3, 0
	fmuls    f0, f25, f0
	stw      r3, 0x24(r29)
	li       r0, 1
	fadds    f28, f28, f27
	stfs     f0, 0x28(r29)
	stfs     f3, 0x2c(r29)
	stfs     f1, 0x30(r29)
	stfs     f31, 0x34(r29)
	stfs     f30, 0x38(r29)
	stfs     f29, 0x3c(r29)
	stb      r0, 0x20(r29)
	stw      r3, 0x40(r29)
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_802F7534
	lwz      r3, 0x48(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F7534:
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0xc8(r28)
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	mr       r3, r28
	mr       r4, r29
	bl
addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack

lbl_802F7554:
	mr       r4, r30
	addi     r31, r31, 1

lbl_802F755C:
	cmplwi   r4, 0
	bne      lbl_802F7384
	lwz      r3, 0x11c(r28)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lwz      r0, 0x20(r3)
	lfd      f4, lbl_8051D230@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f3, lbl_8051D28C@sda21(r2)
	stw      r0, 0x34(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 0x30(r1)
	lfs      f1, lbl_8051D2A4@sda21(r2)
	fsubs    f4, f0, f4
	lfs      f0, lbl_8051D214@sda21(r2)
	fmuls    f3, f4, f3
	fmuls    f2, f3, f2
	fmuls    f1, f3, f1
	fmuls    f0, f3, f0
	fctiwz   f2, f2
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f2, 0x28(r1)
	stfd     f1, 0x20(r1)
	lwz      r0, 0x2c(r1)
	stfd     f0, 0x18(r1)
	lwz      r3, 0x24(r1)
	stw      r0, 0x108(r28)
	lwz      r0, 0x1c(r1)
	stw      r3, 0x10c(r28)
	stw      r0, 0x110(r28)

lbl_802F75D8:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	psq_l    f25, 104(r1), 0, qr0
	lfd      f25, 0x60(r1)
	psq_l    f24, 88(r1), 0, qr0
	lfd      f24, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void BigTreasure::BigTreasureAttackMgr::startNewElecList(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F762C
 * Size:	000288
 */
void BigTreasure::BigTreasureAttackMgr::updateElecAttack(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	li       r29, 0
	lwz      r3, 0xc8(r3)
	lwz      r30, 0x10(r3)
	b        lbl_802F7700

lbl_802F7650:
	lwz      r28, 4(r30)
	mr       r3, r30
	lwz      r27, 8(r30)
	bl       update__Q34Game11BigTreasure21BigTreasureElecAttackFv
	lwz      r3, 0xc8(r31)
	lwz      r0, 0x10(r3)
	cmplw    r30, r0
	bne      lbl_802F768C
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	beq      lbl_802F768C
	addi     r4, r30, 0x34
	li       r3, 0x515b
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F76F8

lbl_802F768C:
	cmplwi   r27, 0
	beq      lbl_802F76BC
	lwz      r0, 0x40(r27)
	cmplwi   r0, 0
	beq      lbl_802F76BC
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	bne      lbl_802F76BC
	addi     r4, r30, 0x34
	li       r3, 0x515b
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F76F8

lbl_802F76BC:
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	beq      lbl_802F76F8
	li       r0, 3
	mr       r3, r31
	mtctr    r0

lbl_802F76D4:
	lwz      r0, 0x108(r3)
	cmpw     r29, r0
	bne      lbl_802F76F0
	addi     r4, r30, 0x34
	li       r3, 0x515a
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F76F8

lbl_802F76F0:
	addi     r3, r3, 4
	bdnz     lbl_802F76D4

lbl_802F76F8:
	mr       r30, r28
	addi     r29, r29, 1

lbl_802F7700:
	cmplwi   r30, 0
	bne      lbl_802F7650
	lbz      r0, 0(r31)
	cmplwi   r0, 0
	beq      lbl_802F78A0
	lwz      r4, 0x11c(r31)
	lfs      f1, 8(r31)
	lfs      f0, 0x18(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802F78A0
	lfs      f1, 0xc(r31)
	lfs      f0, 0x1c(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802F78A0
	lwz      r3, 0x24(r4)
	lwz      r0, 0x20(r4)
	cmpw     r3, r0
	bgt      lbl_802F78A0
	lwz      r3, 0xc8(r31)
	lwz      r30, 0x10(r3)
	cmplwi   r30, 0
	beq      lbl_802F7888
	lwz      r3, 0x100(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x104(r31)
	addi     r4, r30, 0x34
	bl       "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
	lwz      r3, 0x104(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r29, 4(r30)
	cmplwi   r29, 0
	beq      lbl_802F77FC
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	bne      lbl_802F77FC
	stw      r29, 0x40(r30)
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	beq      lbl_802F77FC
	lwz      r3, 0x4c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x40(r30)
	addi     r4, r30, 0x34
	lwz      r3, 0x44(r30)
	addi     r5, r5, 0x34
	bl "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>"
	lwz      r3, 0x44(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F77FC:
	li       r30, 0
	b        lbl_802F7878

lbl_802F7804:
	lwz      r28, 4(r29)
	cmplwi   r28, 0
	beq      lbl_802F7870
	lwz      r0, 0x40(r29)
	cmplwi   r0, 0
	bne      lbl_802F7870
	stw      r28, 0x40(r29)
	lwz      r0, 0x40(r29)
	cmplwi   r0, 0
	beq      lbl_802F7870
	lwz      r3, 0x4c(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x40(r29)
	addi     r4, r29, 0x34
	lwz      r3, 0x44(r29)
	addi     r5, r5, 0x34
	bl "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>"
	lwz      r3, 0x44(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F7870:
	mr       r29, r28
	addi     r30, r30, 1

lbl_802F7878:
	lwz      r3, 0x11c(r31)
	lwz      r0, 0x24(r3)
	cmpw     r30, r0
	blt      lbl_802F7804

lbl_802F7888:
	lfs      f0, lbl_8051D200@sda21(r2)
	stfs     f0, 0xc(r31)
	lwz      r4, 0x11c(r31)
	lwz      r3, 0x24(r4)
	addi     r0, r3, 1
	stw      r0, 0x24(r4)

lbl_802F78A0:
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
 * Size:	000190
 */
void BigTreasure::BigTreasureAttackMgr::finishElecAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F78B4
 * Size:	0001E4
 */
void BigTreasure::BigTreasureAttackMgr::finishAttack(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stmw     r27, 0x2c(r1)
	mr       r31, r3
	stb      r0, 0(r3)
	stb      r0, 1(r3)
	stb      r0, 2(r3)
	stb      r0, 3(r3)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r30, 0
	mr       r29, r31

lbl_802F78F8:
	lwz      r3, 0xa0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 4
	blt      lbl_802F78F8
	lwz      r3, 0xc8(r31)
	lwz      r29, 0x10(r3)
	b        lbl_802F7A10

lbl_802F7928:
	lwz      r30, 4(r29)
	li       r0, 0
	stw      r0, 0x40(r29)
	lwz      r3, 0x48(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_802F79E0
	lis      r3, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	lis      r4, __vt__Q23efx8TSimple1@ha
	stw      r0, 8(r1)
	lis      r3, __vt__Q23efx11TOootaPdead@ha
	addi     r8, r5, __vt__Q23efx5TBase@l
	addi     r7, r4, __vt__Q23efx8TSimple1@l
	lfs      f0, 0x34(r29)
	addi     r0, r3, __vt__Q23efx11TOootaPdead@l
	li       r6, 0x249
	li       r5, 0
	stfs     f0, 0xc(r1)
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	lfs      f0, 0x38(r29)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x3c(r29)
	stw      r8, 0x18(r1)
	stw      r7, 0x18(r1)
	stfs     f0, 0x14(r1)
	sth      r6, 0x1c(r1)
	stw      r5, 0x20(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg

lbl_802F79E0:
	addi     r4, r29, 0x34
	li       r3, 0x595d
	bl       PSStartSoundVec__FUlP3Vec
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0xcc(r31)
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	mr       r4, r29
	bl
delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack
	mr       r29, r30

lbl_802F7A10:
	cmplwi   r29, 0
	bne      lbl_802F7928
	li       r29, 0
	mr       r27, r31

lbl_802F7A20:
	li       r30, 0
	mr       r28, r27

lbl_802F7A28:
	lwz      r3, 0xd0(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r28, r28, 4
	cmpwi    r30, 3
	blt      lbl_802F7A28
	addi     r29, r29, 1
	addi     r27, r27, 0xc
	cmpwi    r29, 4
	blt      lbl_802F7A20
	lwz      r3, 0x100(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x104(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F7A98
 * Size:	000080
 */
void BigTreasure::BigTreasureAttackMgr::addAttackShadow((Game::BigTreasure::BigTreasureWaterAttack*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r8, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x10
	  mtctr     r0

	.loc_0x1C:
	  lwz       r7, 0x118(r3)
	  lwzx      r5, r7, r6
	  lwz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  rlwinm    r5,r8,2,0,29
	  addi      r0, r4, 0x2C
	  lwzx      r4, r7, r5
	  lfs       f0, -0x10A8(r2)
	  stw       r0, 0x24(r4)
	  lwz       r4, 0x118(r3)
	  lwzx      r4, r4, r5
	  stfs      f0, 0x28(r4)
	  lwz       r4, 0x118(r3)
	  lwz       r3, 0x114(r3)
	  lwzx      r4, r4, r5
	  bl        0x119914
	  b         .loc_0x70

	.loc_0x64:
	  addi      r6, r6, 0x4
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0x1C

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F7B18
 * Size:	000080
 */
void BigTreasure::BigTreasureAttackMgr::addAttackShadow((Game::BigTreasure::BigTreasureElecAttack*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r8, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x10
	  mtctr     r0

	.loc_0x1C:
	  lwz       r7, 0x118(r3)
	  lwzx      r5, r7, r6
	  lwz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  rlwinm    r5,r8,2,0,29
	  addi      r0, r4, 0x34
	  lwzx      r4, r7, r5
	  lfs       f0, -0x10A4(r2)
	  stw       r0, 0x24(r4)
	  lwz       r4, 0x118(r3)
	  lwzx      r4, r4, r5
	  stfs      f0, 0x28(r4)
	  lwz       r4, 0x118(r3)
	  lwz       r3, 0x114(r3)
	  lwzx      r4, r4, r5
	  bl        0x119894
	  b         .loc_0x70

	.loc_0x64:
	  addi      r6, r6, 0x4
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0x1C

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F7B98
 * Size:	00006C
 */
void BigTreasure::BigTreasureAttackMgr::delAttackShadow((Game::BigTreasure::BigTreasureWaterAttack*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  li        r29, 0
	  mr        r27, r3
	  addi      r30, r4, 0x2C
	  mr        r31, r29
	  li        r28, 0

	.loc_0x24:
	  lwz       r3, 0x118(r27)
	  lwzx      r3, r3, r29
	  lwz       r0, 0x24(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x48
	  stw       r31, 0x24(r3)
	  lwz       r3, 0x118(r27)
	  lwzx      r3, r3, r29
	  bl        0x1199F4

	.loc_0x48:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x10
	  blt+      .loc_0x24
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F7C04
 * Size:	00006C
 */
void BigTreasure::BigTreasureAttackMgr::delAttackShadow((Game::BigTreasure::BigTreasureElecAttack*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  li        r29, 0
	  mr        r27, r3
	  addi      r30, r4, 0x34
	  mr        r31, r29
	  li        r28, 0

	.loc_0x24:
	  lwz       r3, 0x118(r27)
	  lwzx      r3, r3, r29
	  lwz       r0, 0x24(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x48
	  stw       r31, 0x24(r3)
	  lwz       r3, 0x118(r27)
	  lwzx      r3, r3, r29
	  bl        0x119988

	.loc_0x48:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x10
	  blt+      .loc_0x24
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F7C70
 * Size:	000044
 */
void BigTreasure::BigTreasureAttackMgr::updateAttackShadow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, 0x114(r3)
	lwz      r31, 0x10(r3)
	b        lbl_802F7C98

lbl_802F7C8C:
	mr       r3, r31
	bl       makeShadowSRT__Q34Game11BigTreasure16AttackShadowNodeFv
	lwz      r31, 4(r31)

lbl_802F7C98:
	cmplwi   r31, 0
	bne      lbl_802F7C8C
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	802F7CB4
 * Size:	00009C
 */
TOootaElecAttack1::~TOootaElecAttack1(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F7D34
lis      r3, __vt__Q23efx17TOootaElecAttack1@ha
addi     r3, r3, __vt__Q23efx17TOootaElecAttack1@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802F7D24
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802F7D24
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_802F7D24:
extsh.   r0, r31
ble      lbl_802F7D34
mr       r3, r30
bl       __dl__FPv

lbl_802F7D34:
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
 * Address:	802F7D50
 * Size:	00009C
 */
TOootaElecLeg::~TOootaElecLeg(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F7DD0
lis      r3, __vt__Q23efx13TOootaElecLeg@ha
addi     r3, r3, __vt__Q23efx13TOootaElecLeg@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802F7DC0
lis      r3, __vt__Q23efx23TChasePosPosLocalZScale@ha
addi     r3, r3, __vt__Q23efx23TChasePosPosLocalZScale@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802F7DC0
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_802F7DC0:
extsh.   r0, r31
ble      lbl_802F7DD0
mr       r3, r30
bl       __dl__FPv

lbl_802F7DD0:
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
 * Address:	802F7DEC
 * Size:	00009C
 */
TOootaElecparts::~TOootaElecparts(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F7E6C
lis      r3, __vt__Q23efx15TOootaElecparts@ha
addi     r3, r3, __vt__Q23efx15TOootaElecparts@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802F7E5C
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_802F7E5C
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_802F7E5C:
extsh.   r0, r31
ble      lbl_802F7E6C
mr       r3, r30
bl       __dl__FPv

lbl_802F7E6C:
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
 * Address:	802F7E88
 * Size:	000060
 */
BigTreasure::BigTreasureElecAttack::~BigTreasureElecAttack(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F7ECC
lis      r5, __vt__Q34Game11BigTreasure21BigTreasureElecAttack@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game11BigTreasure21BigTreasureElecAttack@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_802F7ECC
mr       r3, r30
bl       __dl__FPv

lbl_802F7ECC:
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
 * Address:	802F7EE8
 * Size:	000060
 */
BigTreasure::BigTreasureWaterAttack::~BigTreasureWaterAttack(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F7F2C
lis      r5, __vt__Q34Game11BigTreasure22BigTreasureWaterAttack@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game11BigTreasure22BigTreasureWaterAttack@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_802F7F2C
mr       r3, r30
bl       __dl__FPv

lbl_802F7F2C:
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
 * Address:	802F7F48
 * Size:	000060
 */
BigTreasure::BigTreasureGasAttack::~BigTreasureGasAttack(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F7F8C
lis      r5, __vt__Q34Game11BigTreasure20BigTreasureGasAttack@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game11BigTreasure20BigTreasureGasAttack@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_802F7F8C
mr       r3, r30
bl       __dl__FPv

lbl_802F7F8C:
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
 * Address:	802F7FA8
 * Size:	000060
 */
BigTreasure::BigTreasureFireAttack::~BigTreasureFireAttack(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F7FEC
lis      r5, __vt__Q34Game11BigTreasure21BigTreasureFireAttack@ha
li       r4, 0
addi     r0, r5, __vt__Q34Game11BigTreasure21BigTreasureFireAttack@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv
extsh.   r0, r31
ble      lbl_802F7FEC
mr       r3, r30
bl       __dl__FPv

lbl_802F7FEC:
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
 * Address:	802F8008
 * Size:	000070
 */
BigTreasure::AttackShadowNode::~AttackShadowNode(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_802F805C
lis      r4, __vt__Q34Game11BigTreasure16AttackShadowNode@ha
addi     r0, r4, __vt__Q34Game11BigTreasure16AttackShadowNode@l
stw      r0, 0(r30)
beq      lbl_802F804C
lis      r5, __vt__Q24Game15JointShadowNode@ha
li       r4, 0
addi     r0, r5, __vt__Q24Game15JointShadowNode@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_802F804C:
extsh.   r0, r31
ble      lbl_802F805C
mr       r3, r30
bl       __dl__FPv

lbl_802F805C:
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
 * Address:	802F8078
 * Size:	000008
 */
@4 @efx::TOootaElecparts::~TOootaElecparts(void)
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx15TOootaElecpartsFv
	*/
}

/*
 * --INFO--
 * Address:	802F8080
 * Size:	000008
 */
@4 @efx::TOootaElecLeg::~TOootaElecLeg(void)
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx13TOootaElecLegFv
	*/
}

/*
 * --INFO--
 * Address:	802F8088
 * Size:	000008
 */
@4 @efx::TOootaElecAttack1::~TOootaElecAttack1(void)
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx17TOootaElecAttack1Fv
	*/
}
} // namespace efx

} // namespace Game
