#include "Dolphin/os.h"
#include "Game/CPlate.h"
#include "Game/Piki.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047EFA8
    lbl_8047EFA8:
        .4byte 0x4E617669
        .4byte 0x3A3A5061
        .4byte 0x726D7300
        .4byte 0x90E693AA
        .4byte 0x83498374
        .4byte 0x835A8362
        .4byte 0x83670000
        .4byte 0x92B782B3
        .4byte 0x838A837E
        .4byte 0x83628367
        .4byte 0x00000000
        .4byte 0x837C8357
        .4byte 0x83568387
        .4byte 0x839382CC
        .4byte 0x91E582AB
        .4byte 0x82B3288D
        .4byte 0xC591E529
        .4byte 0x00000000
    .global lbl_8047EFF0
    lbl_8047EFF0:
        .4byte 0x67616D65
        .4byte 0x43506C61
        .4byte 0x74652E63
        .4byte 0x70700000
    .global lbl_8047F000
    lbl_8047F000:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047F00C
    lbl_8047F00C:
        .4byte 0x20736F72
        .4byte 0x7279202E
        .4byte 0x2E2E0A00
    .global lbl_8047F018
    lbl_8047F018:
        .4byte 0x636F6C20
        .4byte 0x2564203A
        .4byte 0x20736F72
        .4byte 0x74206661
        .4byte 0x696C6564
        .4byte 0x20210A00
    .global lbl_8047F030
    lbl_8047F030:
        .4byte 0x696E7661
        .4byte 0x6C696420
        .4byte 0x736C6F74
        .4byte 0x20696478
        .4byte 0x2025640A
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "__vt__27Container<Q24Game8Creature>"
    "__vt__27Container<Q24Game8Creature>":
        .4byte 0
        .4byte 0
        .4byte "__dt__27Container<Q24Game8Creature>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8Creature>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__27Container<Q24Game8Creature>Fi"
        .4byte "getTo__27Container<Q24Game8Creature>Fv"
    .global __vt__Q24Game6CPlate
    __vt__Q24Game6CPlate:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game6CPlateFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8Creature>FPv"
        .4byte getNext__Q24Game6CPlateFPv
        .4byte getStart__Q24Game6CPlateFv
        .4byte getEnd__Q24Game6CPlateFv
        .4byte get__Q24Game6CPlateFPv
        .4byte "getAt__27Container<Q24Game8Creature>Fi"
        .4byte "getTo__27Container<Q24Game8Creature>Fv"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518EF0
    lbl_80518EF0:
        .4byte 0x418C0000
    .global lbl_80518EF4
    lbl_80518EF4:
        .4byte 0x00000000
    .global lbl_80518EF8
    lbl_80518EF8:
        .4byte 0x42C80000
    .global lbl_80518EFC
    lbl_80518EFC:
        .4byte 0x43020000
    .global lbl_80518F00
    lbl_80518F00:
        .4byte 0x41200000
    .global lbl_80518F04
    lbl_80518F04:
        .4byte 0x447A0000
    .global lbl_80518F08
    lbl_80518F08:
        .4byte 0x40C00000
    .global lbl_80518F0C
    lbl_80518F0C:
        .float 1.0
    .global lbl_80518F10
    lbl_80518F10:
        .4byte 0x42480000
    .global lbl_80518F14
    lbl_80518F14:
        .4byte 0x40A00000
    .global lbl_80518F18
    lbl_80518F18:
        .4byte 0x43A2F983
    .global lbl_80518F1C
    lbl_80518F1C:
        .4byte 0xC3A2F983
    .global lbl_80518F20
    lbl_80518F20:
        .float 0.5
    .global lbl_80518F24
    lbl_80518F24:
        .4byte 0x40490FDB
    .global lbl_80518F28
    lbl_80518F28:
        .4byte 0x40066666
    .global lbl_80518F2C
    lbl_80518F2C:
        .4byte 0x3FF33333
    .global lbl_80518F30
    lbl_80518F30:
        .4byte 0x40800000
        .4byte 0x00000000
    .global lbl_80518F38
    lbl_80518F38:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518F40
    lbl_80518F40:
        .4byte 0x40000000
    .global lbl_80518F44
    lbl_80518F44:
        .float 0.1
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char* name, ...) { OSReport(""); }

namespace Game {

/*
 * --INFO--
 * Address:	80194FF4
 * Size:	000014
 */
Creature* CPlate::get(void* index) { return m_slots[(long)index].m_creature; }

/*
 * --INFO--
 * Address:	80195008
 * Size:	00003C
 */
void* CPlate::getNext(void* index)
{
	getEnd();
	return (void*)((s32)index + 1);
}

/*
 * --INFO--
 * Address:	80195044
 * Size:	000008
 */
void* CPlate::getStart() { return 0; }

/*
 * --INFO--
 * Address:	8019504C
 * Size:	000008
 */
void* CPlate::getEnd() { return (void*)m_slotCount; }

/*
 * --INFO--
 * Address:	80195054
 * Size:	00000C
 */
void CPlate::shrink()
{
	// Generated from stb r0, 0x100(r3)
	_100 = 10;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void CPlate::updateShrink(void)
{
	// UNUSED FUNCTION
}

/*
 * ct__
 * --INFO--
 * Address:	80195060
 * Size:	0001F0
 */
CPlate::CPlate(int slotLimit)
    : Container<Creature>()
    , m_parms()
    , m_slotLimit(slotLimit)
{
	_B4          = 10.0f;
	_B0          = 10.0f;
	m_position.x = 0.0f;
	m_position.y = 0.0f;
	m_position.z = 0.0f;
	_F0          = 0.0f;
	m_slots      = new Slot[m_slotLimit];
	_BC          = 0;
	m_slotCount  = 0;
	_110         = 0;
	_111         = 1;
	_F4          = 0.0f;
	_F8          = 0.0f;
	_FC          = 0.0f;
	_104         = nullptr;
	_108         = 0;
	_10C         = 0;
	m_velocity.x = 0.0f;
	m_velocity.y = 0.0f;
	m_velocity.z = 0.0f;
	_D8.x        = 0.0f;
	_D8.y        = 0.0f;
	_D8.z        = 0.0f;
	_100         = 0;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047EFA8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8047EFA8@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r0, r29
	stw      r28, 0x10(r1)
	mr       r28, r0
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	lis      r5, 0x70303030@ha
	addi     r0, r3, __vt__16GenericContainer@l
	li       r8, 0
	lis      r3, "__vt__27Container<Q24Game8Creature>"@ha
	stw      r0, 0(r28)
	addi     r0, r3, "__vt__27Container<Q24Game8Creature>"@l
	addi     r7, r29, 0xa0
	stw      r0, 0(r28)
	lis      r3, __vt__Q24Game6CPlate@ha
	addi     r6, r3, __vt__Q24Game6CPlate@l
	addi     r4, r29, 0x1c
	stb      r8, 0x18(r28)
	addi     r0, r31, 0
	addi     r3, r4, 0xc
	addi     r5, r5, 0x70303030@l
	stw      r6, 0(r29)
	addi     r6, r31, 0xc
	stw      r7, 0x1c(r29)
	stw      r8, 0x20(r29)
	stw      r0, 0x24(r29)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r29, 0x1c
	stw      r0, 0x28(r29)
	addi     r3, r4, 0x34
	lfs      f0, lbl_80518EF0@sda21(r2)
	addi     r5, r5, 0x70303031@l
	lfs      f1, lbl_80518EF4@sda21(r2)
	addi     r6, r31, 0x1c
	stfs     f0, 0x40(r29)
	lfs      f0, lbl_80518EF8@sda21(r2)
	stfs     f1, 0x48(r29)
	stfs     f0, 0x4c(r29)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r29, 0x1c
	stw      r0, 0x50(r29)
	addi     r3, r4, 0x5c
	lfs      f0, lbl_80518EFC@sda21(r2)
	addi     r5, r5, 0x70303032@l
	lfs      f1, lbl_80518F00@sda21(r2)
	addi     r6, r31, 0x2c
	stfs     f0, 0x68(r29)
	lfs      f0, lbl_80518F04@sda21(r2)
	stfs     f1, 0x70(r29)
	stfs     f0, 0x74(r29)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f1, lbl_80518F08@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518F0C@sda21(r2)
	stw      r0, 0x78(r29)
	lfs      f2, lbl_80518F10@sda21(r2)
	stfs     f1, 0x90(r29)
	lfs      f1, lbl_80518F00@sda21(r2)
	stfs     f0, 0x98(r29)
	lfs      f0, lbl_80518EF4@sda21(r2)
	stfs     f2, 0x9c(r29)
	stw      r30, 0xc4(r29)
	stfs     f1, 0xb4(r29)
	stfs     f1, 0xb0(r29)
	stfs     f0, 0xcc(r29)
	stfs     f0, 0xd0(r29)
	stfs     f0, 0xd4(r29)
	stfs     f0, 0xf0(r29)
	lwz      r30, 0xc4(r29)
	slwi     r3, r30, 5
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game6CPlate4SlotFv@ha
	mr       r7, r30
	addi     r4, r4, __ct__Q34Game6CPlate4SlotFv@l
	li       r5, 0
	li       r6, 0x20
	bl       __construct_new_array
	stw      r3, 0xc0(r29)
	li       r4, 0
	li       r0, 1
	lfs      f0, lbl_80518EF4@sda21(r2)
	stw      r4, 0xbc(r29)
	mr       r3, r29
	stw      r4, 0xc8(r29)
	stb      r4, 0x110(r29)
	stb      r0, 0x111(r29)
	stfs     f0, 0xf4(r29)
	stfs     f0, 0xf8(r29)
	stfs     f0, 0xfc(r29)
	stw      r4, 0x104(r29)
	stw      r4, 0x108(r29)
	stw      r4, 0x10c(r29)
	stfs     f0, 0xe4(r29)
	stfs     f0, 0xe8(r29)
	stfs     f0, 0xec(r29)
	stfs     f0, 0xd8(r29)
	stfs     f0, 0xdc(r29)
	stfs     f0, 0xe0(r29)
	stb      r4, 0x100(r29)
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
 * __ct__Q34Game6CPlate4SlotFv
 * --INFO--
 * Address:	80195250
 * Size:	00002C
 */
CPlate::Slot::Slot(void)
{
	m_creature = nullptr;
	_1C        = 0;
	_00.x      = 0.0f;
	_00.y      = 0.0f;
	_00.z      = 0.0f;
	_0C.x      = 0.0f;
	_0C.y      = 0.0f;
	_0C.z      = 0.0f;
}

/*
 * @generated{__dt__27Container<Q24Game8Creature>Fv}
 * --INFO--
 * Address:	8019527C
 * Size:	000070
 */
// void Container<Game::Creature>::~Container()
// {
// }

/*
 * --INFO--
 * Address:	801952EC
 * Size:	000210
 */
// void setPos__Q24Game6CPlateFR10Vector3f fR10Vector3f f(void)
void CPlate::setPos(Vector3f& position, float directionMaybe, Vector3f& velocity, float p4)
{

	/*
	stwu     r1, -0x40(r1)
	lfs      f4, 0xe4(r3)
	lfs      f0, 0xec(r3)
	fmuls    f3, f4, f4
	lfs      f6, 0x40(r3)
	fmuls    f5, f0, f0
	lfs      f0, lbl_80518EF4@sda21(r2)
	fmuls    f6, f6, f2
	fadds    f2, f3, f5
	fcmpo    cr0, f2, f0
	ble      lbl_80195330
	fmadds   f2, f4, f4, f5
	fcmpo    cr0, f2, f0
	ble      lbl_80195334
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80195334

lbl_80195330:
	fmr      f2, f0

lbl_80195334:
	lfs      f0, lbl_80518F14@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80195344
	lfs      f6, lbl_80518EF4@sda21(r2)

lbl_80195344:
	lfs      f2, 0xb0(r3)
	fmr      f4, f1
	lfs      f0, lbl_80518EF4@sda21(r2)
	stfs     f1, 0xf0(r3)
	fadds    f6, f2, f6
	fcmpo    cr0, f1, f0
	lfs      f0, 0(r4)
	stfs     f0, 0xcc(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0xd0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0xd4(r3)
	bge      lbl_8019537C
	fneg     f4, f1

lbl_8019537C:
	lfs      f3, lbl_80518F18@sda21(r2)
	lis      r6, sincosTable___5JMath@ha
	lfs      f0, lbl_80518EF4@sda21(r2)
	addi     r6, r6, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	addi     r7, r6, 4
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r7, r0
	fmuls    f5, f6, f0
	bge      lbl_801953D8
	lfs      f0, lbl_80518F1C@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r6, r0
	fneg     f0, f0
	b        lbl_801953F0

lbl_801953D8:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r6, r0

lbl_801953F0:
	fmuls    f0, f6, f0
	lfs      f2, 0xcc(r3)
	lfs      f3, lbl_80518EF4@sda21(r2)
	fmr      f6, f1
	lfs      f4, 0xd0(r3)
	fadds    f0, f2, f0
	lfs      f2, 0xd4(r3)
	fadds    f4, f4, f3
	fcmpo    cr0, f1, f3
	stfs     f0, 0xd8(r3)
	fadds    f0, f2, f5
	stfs     f4, 0xdc(r3)
	stfs     f0, 0xe0(r3)
	lfs      f0, 0(r5)
	stfs     f0, 0xe4(r3)
	lfs      f0, 4(r5)
	stfs     f0, 0xe8(r3)
	lfs      f0, 8(r5)
	stfs     f0, 0xec(r3)
	bge      lbl_80195444
	fneg     f6, f1

lbl_80195444:
	lfs      f3, lbl_80518F18@sda21(r2)
	lfs      f0, lbl_80518EF4@sda21(r2)
	fmuls    f2, f6, f3
	lfs      f5, 0xb8(r3)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r7, r0
	fmuls    f4, f5, f0
	bge      lbl_801954A0
	lfs      f0, lbl_80518F1C@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_801954C0

lbl_801954A0:
	fmuls    f0, f1, f3
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_801954C0:
	fmuls    f0, f5, f0
	lfs      f1, 0(r4)
	lfs      f3, 8(r4)
	li       r0, 0
	lfs      f2, 4(r4)
	fadds    f0, f1, f0
	lfs      f1, lbl_80518EF4@sda21(r2)
	fadds    f3, f3, f4
	fadds    f1, f2, f1
	stfs     f0, 0xa4(r3)
	stfs     f1, 0xa8(r3)
	stfs     f3, 0xac(r3)
	stb      r0, 0x111(r3)
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801954FC
 * Size:	00020C
 */
// void setPosGray__Q24Game6CPlateFR10Vector3f fR10Vector3f f(void)
void CPlate::setPosGray(Vector3f& p1, float p2, Vector3f& p3, float p4)
{
	/*
	stwu     r1, -0x40(r1)
	lfs      f4, 0xe4(r3)
	lfs      f0, 0xec(r3)
	fmuls    f3, f4, f4
	lfs      f6, 0x40(r3)
	fmuls    f5, f0, f0
	lfs      f0, lbl_80518EF4@sda21(r2)
	fmuls    f6, f6, f2
	fadds    f2, f3, f5
	fcmpo    cr0, f2, f0
	ble      lbl_80195540
	fmadds   f2, f4, f4, f5
	fcmpo    cr0, f2, f0
	ble      lbl_80195544
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80195544

lbl_80195540:
	fmr      f2, f0

lbl_80195544:
	lfs      f0, lbl_80518F14@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80195554
	lfs      f6, lbl_80518EF4@sda21(r2)

lbl_80195554:
	lfs      f3, 0xb0(r3)
	fmr      f4, f1
	lfs      f2, 0(r4)
	lfs      f0, lbl_80518EF4@sda21(r2)
	fadds    f6, f3, f6
	stfs     f2, 0xcc(r3)
	fcmpo    cr0, f1, f0
	lfs      f0, 4(r4)
	stfs     f0, 0xd0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0xd4(r3)
	bge      lbl_80195588
	fneg     f4, f1

lbl_80195588:
	lfs      f3, lbl_80518F18@sda21(r2)
	lis      r6, sincosTable___5JMath@ha
	lfs      f0, lbl_80518EF4@sda21(r2)
	addi     r6, r6, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	addi     r7, r6, 4
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r7, r0
	fmuls    f5, f6, f0
	bge      lbl_801955E4
	lfs      f0, lbl_80518F1C@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r6, r0
	fneg     f0, f0
	b        lbl_801955FC

lbl_801955E4:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r6, r0

lbl_801955FC:
	fmuls    f0, f6, f0
	lfs      f2, 0xcc(r3)
	lfs      f3, lbl_80518EF4@sda21(r2)
	fmr      f6, f1
	lfs      f4, 0xd0(r3)
	fadds    f0, f2, f0
	lfs      f2, 0xd4(r3)
	fadds    f4, f4, f3
	fcmpo    cr0, f1, f3
	stfs     f0, 0xd8(r3)
	fadds    f0, f2, f5
	stfs     f4, 0xdc(r3)
	stfs     f0, 0xe0(r3)
	lfs      f0, 0(r5)
	stfs     f0, 0xe4(r3)
	lfs      f0, 4(r5)
	stfs     f0, 0xe8(r3)
	lfs      f0, 8(r5)
	stfs     f0, 0xec(r3)
	bge      lbl_80195650
	fneg     f6, f1

lbl_80195650:
	lfs      f3, lbl_80518F18@sda21(r2)
	lfs      f0, lbl_80518EF4@sda21(r2)
	fmuls    f2, f6, f3
	lfs      f5, 0xb8(r3)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r7, r0
	fmuls    f4, f5, f0
	bge      lbl_801956AC
	lfs      f0, lbl_80518F1C@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_801956CC

lbl_801956AC:
	fmuls    f0, f1, f3
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_801956CC:
	fmuls    f0, f5, f0
	lfs      f1, 0(r4)
	lfs      f3, 8(r4)
	li       r0, 0
	lfs      f2, 4(r4)
	fadds    f0, f1, f0
	lfs      f1, lbl_80518EF4@sda21(r2)
	fadds    f3, f3, f4
	fadds    f1, f2, f1
	stfs     f0, 0xa4(r3)
	stfs     f1, 0xa8(r3)
	stfs     f3, 0xac(r3)
	stb      r0, 0x111(r3)
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
// void setPosNeutral__Q24Game6CPlateFR10Vector3f fR10Vector3f f(void)
void CPlate::setPosNeutral(Vector3f& p1, float p2, Vector3f& p3, float p4)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80195708
 * Size:	0000A8
 */
void CPlate::getSlot(Game::Creature* p1, Game::SlotChangeListener* p2, bool p3)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r6, 0x18
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_80195750
	lwz      r3, 0x2c4(r30)
	bl       getOlimarData__Q24Game4NaviFv
	lwz      r0, 0xc8(r29)
	cmpwi    r0, 0x64
	blt      lbl_80195750
	li       r3, -1
	b        lbl_80195794

lbl_80195750:
	lbz      r0, 0x2b9(r30)
	slwi     r0, r0, 2
	add      r4, r29, r0
	lwz      r3, 0x104(r4)
	addi     r0, r3, 1
	stw      r0, 0x104(r4)
	lwz      r3, 0xc8(r29)
	lwz      r0, 0xc0(r29)
	slwi     r5, r3, 5
	add      r4, r0, r5
	stw      r30, 0x18(r4)
	lwz      r0, 0xc0(r29)
	add      r4, r0, r5
	stw      r31, 0x1c(r4)
	lwz      r4, 0xc8(r29)
	addi     r0, r4, 1
	stw      r0, 0xc8(r29)

lbl_80195794:
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
 * Address:	801957B0
 * Size:	0000B8
 */
void CPlate::changeFlower(Game::Creature* creature)
{
	P2ASSERTLINE(312, creature->isPiki());
	_104[static_cast<Piki*>(creature)->m_happaKind]++;
	_104[(static_cast<Piki*>(creature)->m_happaKind + 2) % 3]--;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80195804
	lis      r3, lbl_8047EFF0@ha
	lis      r5, lbl_8047F000@ha
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x138
	addi     r5, r5, lbl_8047F000@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80195804:
	lbz      r5, 0x2b9(r30)
	lis      r3, 0x55555556@ha
	addi     r0, r3, 0x55555556@l
	addi     r4, r5, 2
	slwi     r5, r5, 2
	mulhw    r3, r0, r4
	add      r6, r31, r5
	lwz      r5, 0x104(r6)
	addi     r5, r5, 1
	srwi     r0, r3, 0x1f
	stw      r5, 0x104(r6)
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r0, r0, r4
	slwi     r0, r0, 2
	add      r4, r31, r0
	lwz      r3, 0x104(r4)
	addi     r0, r3, -1
	stw      r0, 0x104(r4)
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
 * Address:	80195868
 * Size:	000128
 */
void CPlate::releaseSlot(Game::Creature*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	slwi     r31, r5, 5
	mr       r29, r4
	mr       r28, r3
	mr       r30, r5
	lwz      r0, 0xc0(r3)
	add      r27, r0, r31
	lwz      r0, 0x18(r27)
	cmplw    r0, r29
	beq      lbl_801958B8
	lis      r3, lbl_8047EFF0@ha
	lis      r5, lbl_8047F00C@ha
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x14b
	addi     r5, r5, lbl_8047F00C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801958B8:
	lbz      r3, 0x2b9(r29)
	li       r0, 0
	slwi     r3, r3, 2
	add      r4, r28, r3
	lwz      r3, 0x104(r4)
	addi     r3, r3, -1
	stw      r3, 0x104(r4)
	stw      r0, 0x18(r27)
	lwz      r3, 0xc8(r28)
	addi     r0, r3, -1
	stw      r0, 0xc8(r28)
	lwz      r3, 0xbc(r28)
	addi     r0, r3, -1
	stw      r0, 0xbc(r28)
	lwz      r0, 0xc8(r28)
	cmpwi    r0, 0
	bge      lbl_80195910
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80195910:
	mr       r27, r30
	li       r29, 0
	b        lbl_80195970

lbl_8019591C:
	lwz      r5, 0xc0(r28)
	addi     r3, r31, 0x18
	addi     r0, r31, 0x1c
	mr       r4, r27
	stwx     r29, r5, r3
	lwz      r3, 0xc0(r28)
	add      r5, r3, r31
	lwz      r3, 0x38(r5)
	stw      r3, 0x18(r5)
	lwz      r3, 0xc0(r28)
	add      r5, r3, r31
	lwz      r3, 0x3c(r5)
	stw      r3, 0x1c(r5)
	lwz      r3, 0xc0(r28)
	lwzx     r3, r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 0x20
	addi     r27, r27, 1

lbl_80195970:
	lwz      r0, 0xc8(r28)
	cmpw     r27, r0
	blt      lbl_8019591C
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
 * Size:	0000B0
 */
void CPlate::swapSlot(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80195990
 * Size:	000024
 */
bool CPlate::validSlot(int index)
{
	if (0 > index || index >= m_slotCount) {
		return false;
	}
	return true;
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void getPriority(int*, int)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	801959B4
 * Size:	0004A0
 */
void CPlate::sortByColor(Game::Creature*, int)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, 0x92492493@ha
	stw      r0, 0x64(r1)
	addi     r10, r6, 0x92492493@l
	stmw     r22, 0x38(r1)
	mr       r30, r5
	mr       r29, r3
	cmpwi    r30, -1
	lbz      r11, 0x2b8(r4)
	lbz      r31, 0x2b9(r4)
	mulhw    r7, r10, r11
	addi     r8, r11, 1
	addi     r0, r11, 4
	addi     r6, r11, 2
	addi     r4, r11, 3
	addi     r27, r11, 5
	mulhw    r5, r10, r8
	add      r7, r7, r11
	addi     r24, r11, 6
	srawi    r9, r7, 2
	srwi     r12, r9, 0x1f
	add      r5, r5, r8
	srawi    r25, r5, 2
	add      r9, r9, r12
	mulhw    r7, r10, r6
	srwi     r26, r25, 0x1f
	add      r12, r7, r6
	add      r7, r25, r26
	srawi    r25, r12, 2
	mulhw    r5, r10, r4
	srwi     r26, r25, 0x1f
	add      r12, r5, r4
	add      r5, r25, r26
	srawi    r26, r12, 2
	mulhw    r3, r10, r0
	srwi     r28, r26, 0x1f
	mulhw    r12, r10, r27
	add      r25, r3, r0
	add      r3, r26, r28
	srawi    r25, r25, 2
	mulhw    r10, r10, r24
	srwi     r26, r25, 0x1f
	add      r12, r12, r27
	add      r28, r25, r26
	srawi    r25, r12, 2
	mulli    r5, r5, 7
	add      r10, r10, r24
	srwi     r26, r25, 0x1f
	subf     r5, r5, r6
	srawi    r10, r10, 2
	mulli    r3, r3, 7
	stw      r5, 0x1c(r1)
	srwi     r12, r10, 0x1f
	add      r25, r25, r26
	mulli    r5, r28, 7
	add      r10, r10, r12
	subf     r3, r3, r4
	stw      r3, 0x20(r1)
	subf     r0, r5, r0
	mulli    r9, r9, 7
	stw      r0, 0x24(r1)
	mulli    r7, r7, 7
	subf     r9, r9, r11
	stw      r9, 0x14(r1)
	mulli    r3, r25, 7
	subf     r7, r7, r8
	stw      r7, 0x18(r1)
	mulli    r0, r10, 7
	subf     r3, r3, r27
	stw      r3, 0x28(r1)
	subf     r0, r0, r24
	stw      r0, 0x2c(r1)
	beq      lbl_80195B3C
	lis      r3, 0x55555556@ha
	addi     r7, r30, 1
	addi     r0, r3, 0x55555556@l
	addi     r4, r30, 2
	mulhw    r6, r0, r7
	slwi     r3, r30, 2
	addi     r9, r1, 8
	li       r5, 0
	stwx     r5, r9, r3
	li       r8, 1
	mulhw    r3, r0, r4
	srwi     r0, r6, 0x1f
	li       r5, 2
	add      r0, r6, r0
	mulli    r6, r0, 3
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r3, r6, r7
	slwi     r3, r3, 2
	subf     r0, r0, r4
	stwx     r8, r9, r3
	slwi     r0, r0, 2
	stwx     r5, r9, r0

lbl_80195B3C:
	li       r25, 0
	li       r26, 0
	b        lbl_80195E34

lbl_80195B48:
	li       r24, 0
	li       r27, 0
	b        lbl_80195E20

lbl_80195B54:
	lwz      r3, 0xc0(r29)
	addi     r0, r3, 0x18
	add      r5, r3, r27
	lwzx     r4, r26, r0
	lwz      r7, 0x18(r5)
	lbz      r6, 0x2b8(r4)
	lbz      r28, 0x2b8(r7)
	cmpw     r6, r28
	beq      lbl_80195D54
	lwz      r0, 0x14(r1)
	cmpw     r6, r0
	bne      lbl_80195B8C
	li       r23, 0
	b        lbl_80195C24

lbl_80195B8C:
	lwz      r0, 0x18(r1)
	cmpw     r6, r0
	bne      lbl_80195BA0
	li       r23, 1
	b        lbl_80195C24

lbl_80195BA0:
	lwz      r0, 0x1c(r1)
	cmpw     r6, r0
	bne      lbl_80195BB4
	li       r23, 2
	b        lbl_80195C24

lbl_80195BB4:
	lwz      r0, 0x20(r1)
	cmpw     r6, r0
	bne      lbl_80195BC8
	li       r23, 3
	b        lbl_80195C24

lbl_80195BC8:
	lwz      r0, 0x24(r1)
	cmpw     r6, r0
	bne      lbl_80195BDC
	li       r23, 4
	b        lbl_80195C24

lbl_80195BDC:
	lwz      r0, 0x28(r1)
	cmpw     r6, r0
	bne      lbl_80195BF0
	li       r23, 5
	b        lbl_80195C24

lbl_80195BF0:
	lwz      r0, 0x2c(r1)
	cmpw     r6, r0
	bne      lbl_80195C04
	li       r23, 6
	b        lbl_80195C24

lbl_80195C04:
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F018@ha
	addi     r5, r4, lbl_8047F018@l
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x195
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r23, 0x80

lbl_80195C24:
	lwz      r0, 0x14(r1)
	cmpw     r28, r0
	bne      lbl_80195C38
	li       r0, 0
	b        lbl_80195CD4

lbl_80195C38:
	lwz      r0, 0x18(r1)
	cmpw     r28, r0
	bne      lbl_80195C4C
	li       r0, 1
	b        lbl_80195CD4

lbl_80195C4C:
	lwz      r0, 0x1c(r1)
	cmpw     r28, r0
	bne      lbl_80195C60
	li       r0, 2
	b        lbl_80195CD4

lbl_80195C60:
	lwz      r0, 0x20(r1)
	cmpw     r28, r0
	bne      lbl_80195C74
	li       r0, 3
	b        lbl_80195CD4

lbl_80195C74:
	lwz      r0, 0x24(r1)
	cmpw     r28, r0
	bne      lbl_80195C88
	li       r0, 4
	b        lbl_80195CD4

lbl_80195C88:
	lwz      r0, 0x28(r1)
	cmpw     r28, r0
	bne      lbl_80195C9C
	li       r0, 5
	b        lbl_80195CD4

lbl_80195C9C:
	lwz      r0, 0x2c(r1)
	cmpw     r28, r0
	bne      lbl_80195CB0
	li       r0, 6
	b        lbl_80195CD4

lbl_80195CB0:
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F018@ha
	addi     r5, r4, lbl_8047F018@l
	mr       r6, r28
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x195
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r0, 0x80

lbl_80195CD4:
	cmpw     r24, r25
	ble      lbl_80195E18
	cmpw     r0, r23
	bge      lbl_80195E18
	lwz      r3, 0xc0(r29)
	li       r0, 0
	mr       r4, r24
	add      r6, r3, r27
	add      r22, r3, r26
	lwz      r28, 0x18(r6)
	lwz      r23, 0x1c(r6)
	lwz      r5, 0x18(r22)
	lwz      r3, 0x1c(r22)
	stw      r0, 0x18(r6)
	stw      r5, 0x18(r6)
	stw      r3, 0x1c(r6)
	lwz      r3, 0x1c(r6)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x18(r22)
	stw      r28, 0x18(r22)
	stw      r23, 0x1c(r22)
	lwz      r3, 0x1c(r22)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80195E18

lbl_80195D54:
	cmpwi    r30, -1
	bne      lbl_80195D88
	lbz      r4, 0x2b9(r4)
	lbz      r0, 0x2b9(r7)
	subf     r6, r31, r4
	subf     r4, r4, r31
	or       r6, r6, r4
	subf     r4, r31, r0
	subf     r0, r0, r31
	or       r0, r4, r0
	srwi     r4, r6, 0x1f
	srwi     r0, r0, 0x1f
	b        lbl_80195DA4

lbl_80195D88:
	lbz      r4, 0x2b9(r4)
	addi     r6, r1, 8
	lbz      r0, 0x2b9(r7)
	slwi     r4, r4, 2
	slwi     r0, r0, 2
	lwzx     r4, r6, r4
	lwzx     r0, r6, r0

lbl_80195DA4:
	cmpw     r24, r25
	ble      lbl_80195E18
	cmpw     r0, r4
	bge      lbl_80195E18
	add      r28, r3, r26
	lwz      r23, 0x18(r5)
	lwz      r22, 0x1c(r5)
	li       r0, 0
	lwz      r6, 0x18(r28)
	mr       r4, r24
	lwz      r3, 0x1c(r28)
	stw      r0, 0x18(r5)
	stw      r6, 0x18(r5)
	stw      r3, 0x1c(r5)
	lwz      r3, 0x1c(r5)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x18(r28)
	stw      r23, 0x18(r28)
	stw      r22, 0x1c(r28)
	lwz      r3, 0x1c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80195E18:
	addi     r27, r27, 0x20
	addi     r24, r24, 1

lbl_80195E20:
	lwz      r0, 0xc8(r29)
	cmpw     r24, r0
	blt      lbl_80195B54
	addi     r26, r26, 0x20
	addi     r25, r25, 1

lbl_80195E34:
	lwz      r0, 0xc8(r29)
	cmpw     r25, r0
	blt      lbl_80195B48
	lmw      r22, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80195E54
 * Size:	0001E0
 */
// void rearrangeSlot__Q24Game6CPlateFR10Vector3f fR10Vector3f(void)
void CPlate::rearrangeSlot(Vector3f& p1, float p2, Vector3f& p3)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stmw     r24, 0x20(r1)
	mr       r27, r3
	lwz      r3, 0xc8(r3)
	lfs      f31, lbl_80518EF4@sda21(r2)
	mr       r28, r4
	addi     r30, r3, -1
	b        lbl_80196008

lbl_80195E8C:
	mr       r29, r30
	slwi     r31, r30, 5
	b        lbl_80195FFC

lbl_80195E98:
	lwz      r4, 0xc0(r27)
	addi     r0, r31, 0x18
	addi     r3, r1, 0x14
	lwzx     r4, r4, r0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r28)
	lfs      f0, 0x18(r1)
	lfs      f3, 8(r28)
	fsubs    f4, f1, f0
	lfs      f2, 0x1c(r1)
	lfs      f1, 0(r28)
	lfs      f0, 0x14(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f0, f1, f0
	fmuls    f1, f2, f2
	fmadds   f0, f0, f0, f3
	fadds    f30, f1, f0
	fcmpo    cr0, f30, f31
	ble      lbl_80195F04
	ble      lbl_80195F08
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_80195F08

lbl_80195F04:
	fmr      f30, f31

lbl_80195F08:
	lwz      r4, 0xc0(r27)
	addi     r0, r31, -8
	addi     r3, r1, 8
	lwzx     r4, r4, r0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r28)
	lfs      f0, 0xc(r1)
	lfs      f3, 0(r28)
	fsubs    f4, f1, f0
	lfs      f2, 8(r1)
	lfs      f1, 8(r28)
	lfs      f0, 0x10(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	fmadds   f0, f2, f2, f3
	fmuls    f1, f1, f1
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_80195F74
	ble      lbl_80195F78
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_80195F78

lbl_80195F74:
	fmr      f0, f31

lbl_80195F78:
	fcmpo    cr0, f30, f0
	bge      lbl_80195FF4
	addi     r0, r29, -1
	lwz      r5, 0xc0(r27)
	slwi     r3, r0, 5
	li       r0, 0
	add      r6, r5, r31
	mr       r4, r29
	add      r24, r5, r3
	lwz      r25, 0x18(r6)
	lwz      r26, 0x1c(r6)
	lwz      r5, 0x18(r24)
	lwz      r3, 0x1c(r24)
	stw      r0, 0x18(r6)
	stw      r5, 0x18(r6)
	stw      r3, 0x1c(r6)
	lwz      r3, 0x1c(r6)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r4, r29, -1
	stw      r0, 0x18(r24)
	stw      r25, 0x18(r24)
	stw      r26, 0x1c(r24)
	lwz      r3, 0x1c(r24)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80195FF4:
	addi     r31, r31, -32
	addi     r29, r29, -1

lbl_80195FFC:
	cmpwi    r29, 1
	bge      lbl_80195E98
	addi     r30, r30, -1

lbl_80196008:
	cmpwi    r30, 1
	bge      lbl_80195E8C
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80196034
 * Size:	0000C4
 */
// void getSlotPosition__Q24Game6CPlateFiR10Vector3f(void)
void CPlate::getSlotPosition(int p1, Vector3f& p2)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	blt      lbl_80196068
	lwz      r0, 0xc8(r29)
	cmpw     r30, r0
	blt      lbl_80196070

lbl_80196068:
	li       r0, 0
	b        lbl_80196074

lbl_80196070:
	li       r0, 1

lbl_80196074:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8019609C
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F030@ha
	addi     r5, r4, lbl_8047F030@l
	mr       r6, r30
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x273
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019609C:
	slwi     r3, r30, 5
	lwz      r0, 0xc0(r29)
	addi     r3, r3, 0xc
	lfs      f0, 0xd8(r29)
	add      r3, r0, r3
	lfs      f2, 0xdc(r29)
	lfs      f1, 0(r3)
	lfs      f3, 4(r3)
	fadds    f0, f1, f0
	lfs      f4, 8(r3)
	lfs      f1, 0xe0(r29)
	fadds    f2, f3, f2
	stfs     f0, 0(r31)
	fadds    f0, f4, f1
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801960F8
 * Size:	0001B8
 */
void CPlate::refresh(int, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80518F0C@sda21(r2)
	stw      r0, 0x14(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80196118
	fmr      f1, f0
	b        lbl_80196128

lbl_80196118:
	lfs      f0, lbl_80518EF4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80196128
	fmr      f1, f0

lbl_80196128:
	lwz      r5, 0xbc(r3)
	cmpw     r4, r5
	bge      lbl_80196144
	lwz      r0, 0xc8(r3)
	subf     r5, r4, r5
	subf     r0, r5, r0
	stw      r0, 0xc8(r3)

lbl_80196144:
	stw      r4, 0xbc(r3)
	lbz      r0, 0x100(r3)
	lfs      f2, 0x90(r3)
	cmplwi   r0, 0
	beq      lbl_80196160
	lfs      f0, lbl_80518F20@sda21(r2)
	b        lbl_80196164

lbl_80196160:
	lfs      f0, lbl_80518F0C@sda21(r2)

lbl_80196164:
	xoris    r5, r4, 0x8000
	lis      r0, 0x4330
	stw      r5, 0xc(r1)
	fmuls    f0, f2, f0
	lfd      f5, lbl_80518F38@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_80518F24@sda21(r2)
	lfd      f4, 8(r1)
	lfs      f2, lbl_80518EF4@sda21(r2)
	fsubs    f4, f4, f5
	fdivs    f4, f4, f3
	fcmpo    cr0, f4, f2
	ble      lbl_801961A8
	ble      lbl_801961AC
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_801961AC

lbl_801961A8:
	fmr      f4, f2

lbl_801961AC:
	lfs      f3, lbl_80518F28@sda21(r2)
	lfs      f2, lbl_80518F2C@sda21(r2)
	fmuls    f3, f3, f0
	fmuls    f5, f2, f0
	fmuls    f2, f3, f4
	stfs     f2, 0xb8(r3)
	lfs      f2, 0xb8(r3)
	fcmpo    cr0, f5, f2
	ble      lbl_801961D8
	fmr      f4, f5
	b        lbl_801961E0

lbl_801961D8:
	fmr      f4, f2
	fmr      f2, f5

lbl_801961E0:
	fsubs    f3, f4, f2
	lfs      f2, lbl_80518EF4@sda21(r2)
	fneg     f3, f3
	fmadds   f3, f1, f3, f4
	stfs     f3, 0xb4(r3)
	lfs      f3, 0xb4(r3)
	fcmpu    cr0, f2, f3
	bne      lbl_8019620C
	lfs      f2, lbl_80518F00@sda21(r2)
	stfs     f2, 0xb0(r3)
	b        lbl_80196248

lbl_8019620C:
	xoris    r5, r4, 0x8000
	lis      r0, 0x4330
	stw      r5, 0xc(r1)
	lfs      f2, lbl_80518F24@sda21(r2)
	stw      r0, 8(r1)
	lfd      f4, lbl_80518F38@sda21(r2)
	fmuls    f2, f2, f3
	lfd      f3, 8(r1)
	lfs      f5, lbl_80518F30@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f3, f5, f3
	fmuls    f3, f3, f0
	fmuls    f3, f0, f3
	fdivs    f2, f3, f2
	stfs     f2, 0xb0(r3)

lbl_80196248:
	lfs      f4, 0x68(r3)
	lfs      f2, 0xb0(r3)
	fcmpo    cr0, f2, f4
	ble      lbl_8019629C
	xoris    r4, r4, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfd      f3, lbl_80518F38@sda21(r2)
	stw      r0, 8(r1)
	lfs      f5, lbl_80518F30@sda21(r2)
	lfd      f2, 8(r1)
	stfs     f4, 0xb0(r3)
	fsubs    f4, f2, f3
	lfs      f3, lbl_80518F24@sda21(r2)
	lfs      f2, 0xb0(r3)
	fmuls    f4, f5, f4
	fmuls    f2, f3, f2
	fmuls    f3, f4, f0
	fmuls    f0, f0, f3
	fdivs    f0, f0, f2
	stfs     f0, 0xb4(r3)

lbl_8019629C:
	bl       refreshSlot__Q24Game6CPlateFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801962B0
 * Size:	0002EC
 */
void CPlate::refreshSlot(float)
{
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stfd     f24, 0xd0(r1)
	psq_st   f24, 216(r1), 0, qr0
	stfd     f23, 0xc0(r1)
	psq_st   f23, 200(r1), 0, qr0
	stfd     f22, 0xb0(r1)
	psq_st   f22, 184(r1), 0, qr0
	stmw     r25, 0x94(r1)
	mr       r29, r3
	lfs      f2, lbl_80518EF4@sda21(r2)
	lfs      f3, 0xb0(r3)
	fmr      f24, f1
	lfs      f1, 0xf0(r3)
	addi     r3, r1, 0x44
	lfs      f0, lbl_80518F0C@sda21(r2)
	fneg     f26, f3
	stfs     f2, 0x38(r1)
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x38
	stfs     f1, 0x3c(r1)
	li       r31, 0
	stfs     f2, 0x40(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lbz      r0, 0x100(r29)
	lfs      f2, 0x90(r29)
	cmplwi   r0, 0
	beq      lbl_80196370
	lfs      f1, lbl_80518F20@sda21(r2)
	b        lbl_80196374

lbl_80196370:
	lfs      f1, lbl_80518F0C@sda21(r2)

lbl_80196374:
	lfs      f0, lbl_80518EF4@sda21(r2)
	fmuls    f25, f2, f1
	addi     r3, r1, 0x44
	addi     r4, r1, 0x20
	stfs     f0, 0x20(r1)
	addi     r5, r1, 0x14
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       PSMTXMultVec
	lfs      f1, 0x18(r1)
	li       r30, 1
	lfs      f2, 0x1c(r1)
	li       r26, 0
	lfs      f0, 0x14(r1)
	lis      r28, 0x4330
	lfs      f28, lbl_80518F40@sda21(r2)
	stfs     f0, 0xf4(r29)
	fmuls    f27, f28, f25
	lfs      f29, lbl_80518EF4@sda21(r2)
	stfs     f1, 0xf8(r29)
	lfs      f30, lbl_80518F44@sda21(r2)
	stfs     f2, 0xfc(r29)
	lfd      f31, lbl_80518F38@sda21(r2)
	b        lbl_8019652C

lbl_801963D4:
	lfs      f2, 0xb0(r29)
	fmuls    f1, f26, f26
	fmuls    f0, f2, f2
	fsubs    f0, f0, f1
	fcmpo    cr0, f0, f29
	ble      lbl_80196404
	fmsubs   f1, f2, f2, f1
	fcmpo    cr0, f1, f29
	ble      lbl_80196408
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80196408

lbl_80196404:
	fmr      f1, f29

lbl_80196408:
	lfs      f0, 0xb4(r29)
	fmuls    f0, f0, f1
	fdivs    f0, f0, f2
	fdivs    f0, f0, f27
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r3, 0x7c(r1)
	cmpwi    r3, 0
	bge      lbl_80196430
	li       r3, 0

lbl_80196430:
	fcmpo    cr0, f24, f30
	bge      lbl_80196450
	cmpwi    r3, 0
	bne      lbl_80196450
	subf     r0, r31, r0
	cmpwi    r0, 1
	ble      lbl_80196450
	li       r3, 1

lbl_80196450:
	xoris    r0, r3, 0x8000
	xoris    r4, r30, 0x8000
	stw      r0, 0x84(r1)
	slwi     r3, r3, 1
	mr       r27, r26
	stw      r28, 0x80(r1)
	addi     r25, r3, 1
	lfd      f0, 0x80(r1)
	stw      r4, 0x8c(r1)
	fsubs    f1, f0, f31
	stw      r28, 0x88(r1)
	lfd      f0, 0x88(r1)
	fmuls    f1, f1, f25
	stw      r4, 0x7c(r1)
	fsubs    f0, f0, f31
	stw      r28, 0x78(r1)
	fmuls    f1, f28, f1
	lfd      f2, 0x78(r1)
	fmuls    f0, f0, f25
	fsubs    f2, f2, f31
	fmuls    f23, f28, f0
	fmuls    f22, f2, f1
	b        lbl_8019651C

lbl_801964AC:
	lwz      r0, 0xbc(r29)
	cmpw     r31, r0
	bge      lbl_80196514
	lwz      r0, 0xc0(r29)
	addi     r3, r1, 0x44
	lfs      f0, lbl_80518EF4@sda21(r2)
	addi     r5, r1, 8
	add      r4, r0, r27
	stfs     f22, 0(r4)
	stfs     f0, 4(r4)
	stfs     f26, 8(r4)
	lwz      r0, 0xc0(r29)
	add      r4, r0, r27
	bl       PSMTXMultVec
	lwz      r0, 0xc0(r29)
	addi     r3, r27, 0xc
	lfs      f1, 0xc(r1)
	addi     r26, r26, 0x20
	lfs      f2, 0x10(r1)
	add      r3, r0, r3
	lfs      f0, 8(r1)
	addi     r27, r27, 0x20
	addi     r31, r31, 1
	stfs     f0, 0(r3)
	stfs     f1, 4(r3)
	stfs     f2, 8(r3)

lbl_80196514:
	fsubs    f22, f22, f23
	addi     r25, r25, -1

lbl_8019651C:
	cmpwi    r25, 0
	bgt      lbl_801964AC
	fadds    f26, f26, f27
	mulli    r30, r30, -1

lbl_8019652C:
	lwz      r0, 0xbc(r29)
	cmpw     r31, r0
	blt      lbl_801963D4
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	psq_l    f24, 216(r1), 0, qr0
	lfd      f24, 0xd0(r1)
	psq_l    f23, 200(r1), 0, qr0
	lfd      f23, 0xc0(r1)
	psq_l    f22, 184(r1), 0, qr0
	lfd      f22, 0xb0(r1)
	lmw      r25, 0x94(r1)
	lwz      r0, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/*
 * update__Q24Game6CPlateFv
 *
 * --INFO--
 * Address:	8019659C
 * Size:	000018
 */
void CPlate::update(void)
{
	if (_100 == 0) {
		return;
	}
	_100--;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void CPlate::directDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801965B4
 * Size:	000080
 */
// CPlate::~CPlate(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80196618
// 	lis      r4, __vt__Q24Game6CPlate@ha
// 	addi     r0, r4, __vt__Q24Game6CPlate@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80196608
// 	lis      r4, "__vt__27Container<Q24Game8Creature>"@ha
// 	addi     r0, r4, "__vt__27Container<Q24Game8Creature>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80196608
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_80196608:
// 	extsh.   r0, r31
// 	ble      lbl_80196618
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80196618:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

} // namespace Game

/*
 * @generated{getObject__27Container<Q24Game8Creature>FPv}
 * --INFO--
 * Address:	80196634
 * Size:	00002C
 */
// void Container<Game::Creature>::getObject(void*)
// {
// }

// /*
//  * @generated{getAt__27Container<Q24Game8Creature>Fi}
//  * --INFO--
//  * Address:	80196660
//  * Size:	000008
//  */
// u32 Container<Game::Creature>::getAt(int) { return 0x0; }

// /*
//  * @generated{getTo__27Container<Q24Game8Creature>Fv}
//  * --INFO--
//  * Address:	80196668
//  * Size:	000008
//  */
// u32 Container<Game::Creature>::getTo() { return 0x0; }
