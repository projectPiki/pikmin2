#include "types.h"
#include "Game/IllustratedBook.h"
#include "nans.h"

namespace Game {
namespace IllustratedBook {

static const int unusedIllustratedBookArray[] = { 0, 0, 0 };

/*
 * --INFO--
 * Address:	80130B9C
 * Size:	0001D0
 */
ColorSetting::ColorSetting()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	li       r9, 0
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__5CNode@l
	addi     r8, r2, lbl_80518150@sda21
	lis      r5, __vt__Q34Game15IllustratedBook12ColorSetting@ha
	stmw     r26, 8(r1)
	mr       r31, r3
	li       r6, 4
	li       r7, 0xa
	stw      r0, 0(r3)
	addi     r0, r5, __vt__Q34Game15IllustratedBook12ColorSetting@l
	lis      r3, __ct__6Color4Fv@ha
	li       r5, 0
	stw      r9, 0x10(r31)
	addi     r4, r3, __ct__6Color4Fv@l
	addi     r3, r31, 0x18
	stw      r9, 0xc(r31)
	stw      r9, 8(r31)
	stw      r9, 4(r31)
	stw      r8, 0x14(r31)
	stw      r0, 0(r31)
	bl       __construct_array
	lis      r4, __ct__6Color4Fv@ha
	addi     r3, r31, 0x40
	addi     r4, r4, __ct__6Color4Fv@l
	li       r5, 0
	li       r6, 4
	li       r7, 5
	bl       __construct_array
	li       r0, 0x58
	li       r3, 0x5b
	stb      r0, 0x18(r31)
	li       r0, 0x99
	li       r26, 0xff
	li       r27, 0x40
	stb      r3, 0x19(r31)
	li       r28, 0xa6
	li       r29, 0xe8
	li       r30, 0xfd
	stb      r0, 0x1a(r31)
	li       r12, 0xc0
	li       r11, 0x80
	li       r10, 0x8f
	stb      r26, 0x1b(r31)
	li       r9, 0x49
	li       r8, 8
	li       r7, 0x32
	stb      r27, 0x1c(r31)
	li       r6, 0x28
	li       r5, 0x34
	li       r4, 0x20
	stb      r27, 0x1d(r31)
	li       r0, 0xa
	mr       r3, r31
	stb      r27, 0x1e(r31)
	stb      r26, 0x1f(r31)
	stb      r28, 0x20(r31)
	stb      r29, 0x21(r31)
	stb      r30, 0x22(r31)
	stb      r26, 0x23(r31)
	stb      r26, 0x24(r31)
	stb      r26, 0x25(r31)
	stb      r26, 0x26(r31)
	stb      r26, 0x27(r31)
	stb      r28, 0x28(r31)
	stb      r29, 0x29(r31)
	stb      r30, 0x2a(r31)
	stb      r26, 0x2b(r31)
	stb      r26, 0x2c(r31)
	stb      r26, 0x2d(r31)
	stb      r26, 0x2e(r31)
	stb      r26, 0x2f(r31)
	stb      r26, 0x30(r31)
	stb      r12, 0x31(r31)
	stb      r11, 0x32(r31)
	stb      r26, 0x33(r31)
	stb      r26, 0x34(r31)
	stb      r26, 0x35(r31)
	stb      r10, 0x36(r31)
	stb      r26, 0x37(r31)
	stb      r26, 0x38(r31)
	stb      r26, 0x39(r31)
	stb      r26, 0x3a(r31)
	stb      r26, 0x3b(r31)
	stb      r26, 0x3c(r31)
	stb      r26, 0x3d(r31)
	stb      r26, 0x3e(r31)
	stb      r26, 0x3f(r31)
	stb      r9, 0x40(r31)
	stb      r9, 0x41(r31)
	stb      r9, 0x42(r31)
	stb      r26, 0x43(r31)
	stb      r8, 0x44(r31)
	stb      r8, 0x45(r31)
	stb      r8, 0x46(r31)
	stb      r26, 0x47(r31)
	stb      r7, 0x48(r31)
	stb      r7, 0x49(r31)
	stb      r6, 0x4a(r31)
	stb      r26, 0x4b(r31)
	stb      r5, 0x4c(r31)
	stb      r4, 0x4d(r31)
	stb      r0, 0x4e(r31)
	stb      r26, 0x4f(r31)
	stb      r4, 0x50(r31)
	stb      r4, 0x51(r31)
	stb      r0, 0x52(r31)
	stb      r26, 0x53(r31)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130D70
 * Size:	000098
 */
void ColorSetting::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r31, r28

lbl_80130D9C:
	mr       r4, r29
	addi     r3, r31, 0x18
	bl       read__6Color4FR6Stream
	mr       r4, r29
	addi     r3, r31, 0x1c
	bl       read__6Color4FR6Stream
	addi     r30, r30, 1
	addi     r31, r31, 8
	cmpwi    r30, 4
	blt      lbl_80130D9C
	li       r30, 0
	mr       r31, r28

lbl_80130DCC:
	mr       r4, r29
	addi     r3, r31, 0x40
	bl       read__6Color4FR6Stream
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_80130DCC
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
 * Address:	80130E08
 * Size:	0008CC
 */
void ColorSetting::update()
{
	/*
	stwu     r1, -0x1a0(r1)
	mflr     r0
	stw      r0, 0x1a4(r1)
	stw      r31, 0x19c(r1)
	stw      r30, 0x198(r1)
	mr       r30, r3
	stw      r29, 0x194(r1)
	stw      r28, 0x190(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r4)
	lwz      r0, 0x210(r3)
	cmpwi    r0, 2
	beq      lbl_80130E7C
	bge      lbl_80130E50
	cmpwi    r0, 0
	beq      lbl_80130E5C
	bge      lbl_80130E6C
	b        lbl_80130E9C

lbl_80130E50:
	cmpwi    r0, 4
	bge      lbl_80130E9C
	b        lbl_80130E8C

lbl_80130E5C:
	li       r29, 0
	li       r28, 0
	li       r31, 0
	b        lbl_80130EB8

lbl_80130E6C:
	li       r29, 0
	li       r28, 1
	li       r31, 2
	b        lbl_80130EB8

lbl_80130E7C:
	li       r29, 2
	li       r28, 2
	li       r31, 2
	b        lbl_80130EB8

lbl_80130E8C:
	li       r29, 2
	li       r28, 3
	li       r31, 0
	b        lbl_80130EB8

lbl_80130E9C:
	lis      r3, lbl_8047C364@ha
	lis      r5, lbl_8047C37C@ha
	addi     r3, r3, lbl_8047C364@l
	li       r4, 0xcd
	addi     r5, r5, lbl_8047C37C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80130EB8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	slwi     r6, r29, 2
	slwi     r4, r28, 2
	slwi     r5, r31, 2
	lwz      r3, 0x40(r3)
	slwi     r8, r29, 3
	slwi     r7, r28, 3
	slwi     r0, r31, 3
	lfs      f2, 0x214(r3)
	addi     r3, r6, 0x40
	lfs      f0, lbl_80518158@sda21(r2)
	addi     r4, r4, 0x40
	addi     r5, r5, 0x40
	add      r8, r30, r8
	fcmpo    cr0, f2, f0
	add      r6, r30, r7
	add      r7, r30, r0
	add      r3, r30, r3
	add      r4, r30, r4
	add      r5, r30, r5
	bge      lbl_801312E0
	lbz      r7, 0x18(r8)
	lis      r5, 0x4330
	lbz      r0, 0x18(r6)
	stw      r5, 8(r1)
	lfs      f1, lbl_8051815C@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, lbl_80518160@sda21(r2)
	fmuls    f1, f2, f1
	lfd      f2, 8(r1)
	stw      r7, 0x14(r1)
	fsubs    f4, f2, f0
	stw      r5, 0x10(r1)
	lfd      f2, 0x10(r1)
	stw      r7, 0x1c(r1)
	fsubs    f3, f2, f0
	stw      r5, 0x18(r1)
	lfd      f2, 0x18(r1)
	fsubs    f3, f4, f3
	stw      r5, 0x28(r1)
	fsubs    f2, f2, f0
	stw      r5, 0x30(r1)
	fmadds   f2, f1, f3, f2
	stw      r5, 0x38(r1)
	stw      r5, 0x48(r1)
	fctiwz   f2, f2
	stw      r5, 0x50(r1)
	stfd     f2, 0x20(r1)
	lwz      r0, 0x24(r1)
	stw      r5, 0x58(r1)
	stb      r0, 0x54(r30)
	lbz      r7, 0x19(r8)
	lbz      r0, 0x19(r6)
	stw      r7, 0x34(r1)
	stw      r0, 0x2c(r1)
	lfd      f2, 0x30(r1)
	lfd      f4, 0x28(r1)
	stw      r7, 0x3c(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x38(r1)
	stw      r5, 0x68(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	stw      r5, 0x70(r1)
	stw      r5, 0x78(r1)
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x40(r1)
	lwz      r0, 0x44(r1)
	stb      r0, 0x55(r30)
	lbz      r7, 0x1a(r8)
	lbz      r0, 0x1a(r6)
	stw      r7, 0x54(r1)
	stw      r0, 0x4c(r1)
	lfd      f2, 0x50(r1)
	lfd      f4, 0x48(r1)
	stw      r7, 0x5c(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x58(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x60(r1)
	lwz      r0, 0x64(r1)
	stb      r0, 0x56(r30)
	lbz      r7, 0x1b(r8)
	lbz      r0, 0x1b(r6)
	stw      r7, 0x74(r1)
	stw      r0, 0x6c(r1)
	lfd      f2, 0x70(r1)
	lfd      f4, 0x68(r1)
	stw      r7, 0x7c(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x78(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x80(r1)
	lwz      r0, 0x84(r1)
	stb      r0, 0x57(r30)
	lbz      r7, 0x1c(r8)
	lbz      r0, 0x1c(r6)
	stw      r5, 0x88(r1)
	stw      r0, 0x8c(r1)
	lfd      f2, 0x88(r1)
	stw      r7, 0x94(r1)
	fsubs    f4, f2, f0
	stw      r5, 0x90(r1)
	lfd      f2, 0x90(r1)
	stw      r7, 0x9c(r1)
	fsubs    f3, f2, f0
	stw      r5, 0x98(r1)
	lfd      f2, 0x98(r1)
	fsubs    f3, f4, f3
	stw      r5, 0xa8(r1)
	fsubs    f2, f2, f0
	stw      r5, 0xb0(r1)
	fmadds   f2, f1, f3, f2
	stw      r5, 0xb8(r1)
	stw      r5, 0xc8(r1)
	fctiwz   f2, f2
	stw      r5, 0xd0(r1)
	stfd     f2, 0xa0(r1)
	lwz      r0, 0xa4(r1)
	stw      r5, 0xd8(r1)
	stb      r0, 0x58(r30)
	lbz      r7, 0x1d(r8)
	lbz      r0, 0x1d(r6)
	stw      r7, 0xb4(r1)
	stw      r0, 0xac(r1)
	lfd      f2, 0xb0(r1)
	lfd      f4, 0xa8(r1)
	stw      r7, 0xbc(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0xb8(r1)
	stw      r5, 0xe8(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	stw      r5, 0xf0(r1)
	stw      r5, 0xf8(r1)
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	stb      r0, 0x59(r30)
	lbz      r7, 0x1e(r8)
	lbz      r0, 0x1e(r6)
	stw      r7, 0xd4(r1)
	stw      r0, 0xcc(r1)
	lfd      f2, 0xd0(r1)
	lfd      f4, 0xc8(r1)
	stw      r7, 0xdc(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0xd8(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	stb      r0, 0x5a(r30)
	lbz      r7, 0x1f(r8)
	lbz      r0, 0x1f(r6)
	stw      r7, 0xf4(r1)
	stw      r0, 0xec(r1)
	lfd      f2, 0xf0(r1)
	lfd      f4, 0xe8(r1)
	stw      r7, 0xfc(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0xf8(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x100(r1)
	lwz      r0, 0x104(r1)
	stb      r0, 0x5b(r30)
	lbz      r6, 0(r3)
	lbz      r0, 0(r4)
	stw      r5, 0x108(r1)
	stw      r0, 0x10c(r1)
	lfd      f2, 0x108(r1)
	stw      r6, 0x114(r1)
	fsubs    f4, f2, f0
	stw      r5, 0x110(r1)
	lfd      f2, 0x110(r1)
	stw      r6, 0x11c(r1)
	fsubs    f3, f2, f0
	stw      r5, 0x118(r1)
	lfd      f2, 0x118(r1)
	fsubs    f3, f4, f3
	stw      r5, 0x128(r1)
	fsubs    f2, f2, f0
	stw      r5, 0x130(r1)
	fmadds   f2, f1, f3, f2
	stw      r5, 0x138(r1)
	stw      r5, 0x148(r1)
	fctiwz   f2, f2
	stw      r5, 0x150(r1)
	stfd     f2, 0x120(r1)
	lwz      r0, 0x124(r1)
	stw      r5, 0x158(r1)
	stb      r0, 0x5c(r30)
	lbz      r6, 1(r3)
	lbz      r0, 1(r4)
	stw      r6, 0x134(r1)
	stw      r0, 0x12c(r1)
	lfd      f2, 0x130(r1)
	lfd      f4, 0x128(r1)
	stw      r6, 0x13c(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x138(r1)
	stw      r5, 0x168(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	stw      r5, 0x170(r1)
	stw      r5, 0x178(r1)
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x140(r1)
	lwz      r0, 0x144(r1)
	stb      r0, 0x5d(r30)
	lbz      r5, 2(r3)
	lbz      r0, 2(r4)
	stw      r5, 0x154(r1)
	stw      r0, 0x14c(r1)
	lfd      f2, 0x150(r1)
	lfd      f4, 0x148(r1)
	stw      r5, 0x15c(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x158(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x160(r1)
	lwz      r0, 0x164(r1)
	stb      r0, 0x5e(r30)
	lbz      r3, 3(r3)
	lbz      r0, 3(r4)
	stw      r3, 0x174(r1)
	stw      r0, 0x16c(r1)
	lfd      f2, 0x170(r1)
	lfd      f4, 0x168(r1)
	stw      r3, 0x17c(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x178(r1)
	fsubs    f3, f4, f3
	fsubs    f0, f2, f0
	fmadds   f0, f1, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x180(r1)
	lwz      r0, 0x184(r1)
	stb      r0, 0x5f(r30)
	b        lbl_801316B4

lbl_801312E0:
	lbz      r8, 0x18(r6)
	lis      r3, 0x4330
	lbz      r0, 0x18(r7)
	fsubs    f1, f2, f0
	stw      r3, 0x180(r1)
	lfs      f2, lbl_8051815C@sda21(r2)
	stw      r0, 0x184(r1)
	lfd      f0, lbl_80518160@sda21(r2)
	fmuls    f1, f2, f1
	lfd      f2, 0x180(r1)
	stw      r8, 0x17c(r1)
	fsubs    f4, f2, f0
	stw      r3, 0x178(r1)
	lfd      f2, 0x178(r1)
	stw      r8, 0x174(r1)
	fsubs    f3, f2, f0
	stw      r3, 0x170(r1)
	lfd      f2, 0x170(r1)
	fsubs    f3, f4, f3
	stw      r3, 0x160(r1)
	fsubs    f2, f2, f0
	stw      r3, 0x158(r1)
	fmadds   f2, f1, f3, f2
	stw      r3, 0x150(r1)
	stw      r3, 0x140(r1)
	fctiwz   f2, f2
	stw      r3, 0x138(r1)
	stfd     f2, 0x168(r1)
	lwz      r0, 0x16c(r1)
	stw      r3, 0x130(r1)
	stb      r0, 0x54(r30)
	lbz      r8, 0x19(r6)
	lbz      r0, 0x19(r7)
	stw      r8, 0x15c(r1)
	stw      r0, 0x164(r1)
	lfd      f2, 0x158(r1)
	lfd      f4, 0x160(r1)
	stw      r8, 0x154(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x150(r1)
	stw      r3, 0x120(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	stw      r3, 0x118(r1)
	stw      r3, 0x110(r1)
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x148(r1)
	lwz      r0, 0x14c(r1)
	stb      r0, 0x55(r30)
	lbz      r8, 0x1a(r6)
	lbz      r0, 0x1a(r7)
	stw      r8, 0x13c(r1)
	stw      r0, 0x144(r1)
	lfd      f2, 0x138(r1)
	lfd      f4, 0x140(r1)
	stw      r8, 0x134(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x130(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x128(r1)
	lwz      r0, 0x12c(r1)
	stb      r0, 0x56(r30)
	lbz      r8, 0x1b(r6)
	lbz      r0, 0x1b(r7)
	stw      r8, 0x11c(r1)
	stw      r0, 0x124(r1)
	lfd      f2, 0x118(r1)
	lfd      f4, 0x120(r1)
	stw      r8, 0x114(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x110(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x108(r1)
	lwz      r0, 0x10c(r1)
	stb      r0, 0x57(r30)
	lbz      r8, 0x1c(r6)
	lbz      r0, 0x1c(r7)
	stw      r3, 0x100(r1)
	stw      r0, 0x104(r1)
	lfd      f2, 0x100(r1)
	stw      r8, 0xfc(r1)
	fsubs    f4, f2, f0
	stw      r3, 0xf8(r1)
	lfd      f2, 0xf8(r1)
	stw      r8, 0xf4(r1)
	fsubs    f3, f2, f0
	stw      r3, 0xf0(r1)
	lfd      f2, 0xf0(r1)
	fsubs    f3, f4, f3
	stw      r3, 0xe0(r1)
	fsubs    f2, f2, f0
	stw      r3, 0xd8(r1)
	fmadds   f2, f1, f3, f2
	stw      r3, 0xd0(r1)
	stw      r3, 0xc0(r1)
	fctiwz   f2, f2
	stw      r3, 0xb8(r1)
	stfd     f2, 0xe8(r1)
	lwz      r0, 0xec(r1)
	stw      r3, 0xb0(r1)
	stb      r0, 0x58(r30)
	lbz      r8, 0x1d(r6)
	lbz      r0, 0x1d(r7)
	stw      r8, 0xdc(r1)
	stw      r0, 0xe4(r1)
	lfd      f2, 0xd8(r1)
	lfd      f4, 0xe0(r1)
	stw      r8, 0xd4(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0xd0(r1)
	stw      r3, 0xa0(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	stw      r3, 0x98(r1)
	stw      r3, 0x90(r1)
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	stb      r0, 0x59(r30)
	lbz      r8, 0x1e(r6)
	lbz      r0, 0x1e(r7)
	stw      r8, 0xbc(r1)
	stw      r0, 0xc4(r1)
	lfd      f2, 0xb8(r1)
	lfd      f4, 0xc0(r1)
	stw      r8, 0xb4(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0xb0(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0xa8(r1)
	lwz      r0, 0xac(r1)
	stb      r0, 0x5a(r30)
	lbz      r6, 0x1f(r6)
	lbz      r0, 0x1f(r7)
	stw      r6, 0x9c(r1)
	stw      r0, 0xa4(r1)
	lfd      f2, 0x98(r1)
	lfd      f4, 0xa0(r1)
	stw      r6, 0x94(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x90(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x88(r1)
	lwz      r0, 0x8c(r1)
	stb      r0, 0x5b(r30)
	lbz      r6, 0(r4)
	lbz      r0, 0(r5)
	stw      r3, 0x80(r1)
	stw      r0, 0x84(r1)
	lfd      f2, 0x80(r1)
	stw      r6, 0x7c(r1)
	fsubs    f4, f2, f0
	stw      r3, 0x78(r1)
	lfd      f2, 0x78(r1)
	stw      r6, 0x74(r1)
	fsubs    f3, f2, f0
	stw      r3, 0x70(r1)
	lfd      f2, 0x70(r1)
	fsubs    f3, f4, f3
	stw      r3, 0x60(r1)
	fsubs    f2, f2, f0
	stw      r3, 0x58(r1)
	fmadds   f2, f1, f3, f2
	stw      r3, 0x50(r1)
	stw      r3, 0x40(r1)
	fctiwz   f2, f2
	stw      r3, 0x38(r1)
	stfd     f2, 0x68(r1)
	lwz      r0, 0x6c(r1)
	stw      r3, 0x30(r1)
	stb      r0, 0x5c(r30)
	lbz      r6, 1(r4)
	lbz      r0, 1(r5)
	stw      r6, 0x5c(r1)
	stw      r0, 0x64(r1)
	lfd      f2, 0x58(r1)
	lfd      f4, 0x60(r1)
	stw      r6, 0x54(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x50(r1)
	stw      r3, 0x20(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	stw      r3, 0x18(r1)
	stw      r3, 0x10(r1)
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x48(r1)
	lwz      r0, 0x4c(r1)
	stb      r0, 0x5d(r30)
	lbz      r3, 2(r4)
	lbz      r0, 2(r5)
	stw      r3, 0x3c(r1)
	stw      r0, 0x44(r1)
	lfd      f2, 0x38(r1)
	lfd      f4, 0x40(r1)
	stw      r3, 0x34(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x30(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f0
	fmadds   f2, f1, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x28(r1)
	lwz      r0, 0x2c(r1)
	stb      r0, 0x5e(r30)
	lbz      r3, 3(r4)
	lbz      r0, 3(r5)
	stw      r3, 0x1c(r1)
	stw      r0, 0x24(r1)
	lfd      f2, 0x18(r1)
	lfd      f4, 0x20(r1)
	stw      r3, 0x14(r1)
	fsubs    f3, f2, f0
	fsubs    f4, f4, f0
	lfd      f2, 0x10(r1)
	fsubs    f3, f4, f3
	fsubs    f0, f2, f0
	fmadds   f0, f1, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	stb      r0, 0x5f(r30)

lbl_801316B4:
	lwz      r0, 0x1a4(r1)
	lwz      r31, 0x19c(r1)
	lwz      r30, 0x198(r1)
	lwz      r29, 0x194(r1)
	lwz      r28, 0x190(r1)
	mtlr     r0
	addi     r1, r1, 0x1a0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801316D4
 * Size:	000148
 */
PositionParms::PositionParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	li       r10, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__5CNode@l
	lis      r5, lbl_8047C358@ha
	stw      r31, 0xc(r1)
	addi     r31, r5, lbl_8047C358@l
	lis      r5, 0x66303030@ha
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, __vt__Q34Game15IllustratedBook13PositionParms@ha
	addi     r5, r5, 0x66303030@l
	stw      r0, 0(r30)
	addi     r9, r30, 0xa0
	addi     r8, r3, __vt__Q34Game15IllustratedBook13PositionParms@l
	addi     r4, r30, 0x18
	stw      r10, 0x10(r30)
	addi     r7, r30, 0x9c
	addi     r0, r31, 0x34
	addi     r3, r4, 0xc
	stw      r10, 0xc(r30)
	addi     r6, r31, 0x44
	stw      r10, 8(r30)
	stw      r10, 4(r30)
	stw      r9, 0x14(r30)
	stw      r8, 0(r30)
	stw      r7, 0x18(r30)
	stw      r10, 0x1c(r30)
	stw      r0, 0x20(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r30, 0x18
	stw      r0, 0x24(r30)
	addi     r3, r4, 0x34
	lfs      f0, lbl_80518168@sda21(r2)
	addi     r5, r5, 0x66303031@l
	lfs      f1, lbl_8051816C@sda21(r2)
	addi     r6, r31, 0x54
	stfs     f0, 0x3c(r30)
	lfs      f0, lbl_80518170@sda21(r2)
	stfs     f1, 0x44(r30)
	stfs     f0, 0x48(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r30, 0x18
	stw      r0, 0x4c(r30)
	addi     r3, r4, 0x5c
	lfs      f0, lbl_80518168@sda21(r2)
	addi     r5, r5, 0x66303032@l
	lfs      f1, lbl_8051816C@sda21(r2)
	addi     r6, r31, 0x64
	stfs     f0, 0x64(r30)
	lfs      f0, lbl_80518170@sda21(r2)
	stfs     f1, 0x6c(r30)
	stfs     f0, 0x70(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_80518168@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051816C@sda21(r2)
	stw      r0, 0x74(r30)
	addi     r3, r30, 0xa0
	lfs      f0, lbl_80518170@sda21(r2)
	addi     r4, r31, 0x74
	stfs     f2, 0x8c(r30)
	stfs     f1, 0x94(r30)
	stfs     f0, 0x98(r30)
	crclr    6
	bl       sprintf
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
 * Address:	8013181C
 * Size:	000050
 */
void PositionParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x20
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	addi     r4, r30, 0xa0
	bl       readString__6StreamFPci
	mr       r4, r31
	addi     r3, r30, 0x18
	bl       read__10ParametersFR6Stream
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
 * Address:	8013186C
 * Size:	000060
 */
PositionParms::~PositionParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801318B0
	lis      r5, __vt__Q34Game15IllustratedBook13PositionParms@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game15IllustratedBook13PositionParms@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801318B0
	mr       r3, r30
	bl       __dl__FPv

lbl_801318B0:
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
 * Address:	801318CC
 * Size:	000068
 */
void PositionParmsList::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4

lbl_801318F0:
	addi     r3, r31, 0x18
	mr       r4, r29
	lwz      r12, 0x18(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 0xc0
	cmplwi   r30, 0xa
	blt      lbl_801318F0
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
 * Address:	80131934
 * Size:	000020
 */
void CameraParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       read__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80131954
 * Size:	000130
 */
EnemyParms::EnemyParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, __vt__Q34Game15IllustratedBook10EnemyParms@ha
	lis      r5, 0x66303031@ha
	stw      r0, 0x14(r1)
	lis      r4, __vt__5CNode@ha
	addi     r8, r6, __vt__Q34Game15IllustratedBook10EnemyParms@l
	li       r10, 0
	stw      r31, 0xc(r1)
	addi     r0, r4, __vt__5CNode@l
	mr       r31, r3
	addi     r9, r2, lbl_80518174@sda21
	stw      r0, 0(r3)
	lis      r3, lbl_8047C3E8@ha
	addi     r7, r31, 0x9c
	addi     r4, r31, 0x18
	stw      r10, 0x10(r31)
	addi     r0, r3, lbl_8047C3E8@l
	addi     r3, r4, 0xc
	addi     r5, r5, 0x66303031@l
	stw      r10, 0xc(r31)
	addi     r6, r2, lbl_80518178@sda21
	stw      r10, 8(r31)
	stw      r10, 4(r31)
	stw      r9, 0x14(r31)
	stw      r8, 0(r31)
	stw      r7, 0x18(r31)
	stw      r10, 0x1c(r31)
	stw      r0, 0x20(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66303030@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518180@sda21(r2)
	stw      r0, 0x24(r31)
	lis      r3, lbl_8047C3F4@ha
	lfs      f1, lbl_80518168@sda21(r2)
	addi     r4, r31, 0x18
	stfs     f0, 0x3c(r31)
	addi     r6, r3, lbl_8047C3F4@l
	lfs      f0, lbl_80518184@sda21(r2)
	addi     r3, r4, 0x34
	stfs     f1, 0x44(r31)
	addi     r5, r5, 0x66303030@l
	stfs     f0, 0x48(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x69303030@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r31, 0x18
	stw      r0, 0x4c(r31)
	addi     r3, r4, 0x5c
	lfs      f1, lbl_80518168@sda21(r2)
	addi     r5, r5, 0x69303030@l
	lfs      f0, lbl_80518184@sda21(r2)
	addi     r6, r2, lbl_80518188@sda21
	stfs     f1, 0x64(r31)
	stfs     f1, 0x6c(r31)
	stfs     f0, 0x70(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	li       r4, 1
	addi     r3, r3, "__vt__7Parm<i>"@l
	li       r0, 0x63
	stw      r3, 0x74(r31)
	addi     r3, r31, 0xa4
	stw      r4, 0x8c(r31)
	stw      r4, 0x94(r31)
	stw      r0, 0x98(r31)
	bl       __ct__Q34Game15IllustratedBook11CameraParmsFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80131A84
 * Size:	000040
 */
CameraParms::CameraParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q34Game15IllustratedBook11CameraParms@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q34Game15IllustratedBook11CameraParms@l
	li       r4, 1
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x1c8(r3)
	bl       __ct__Q44Game15IllustratedBook11CameraParms5ParmsFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80131DA8
 * Size:	000064
 */
void EnemyParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0xa0(r30)
	mr       r4, r31
	addi     r3, r30, 0x18
	bl       read__10ParametersFR6Stream
	addi     r3, r30, 0xa4
	mr       r4, r31
	lwz      r12, 0x26c(r30)
	lwz      r12, 8(r12)
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
 * Address:	80131E0C
 * Size:	000060
 */
EnemyParms::~EnemyParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80131E50
	lis      r5, __vt__Q34Game15IllustratedBook10EnemyParms@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game15IllustratedBook10EnemyParms@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80131E50
	mr       r3, r30
	bl       __dl__FPv

lbl_80131E50:
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
 * Address:	80131E6C
 * Size:	000084
 */
void EnemyModeParms::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	mr       r28, r4
	mr       r3, r28
	bl       readInt__6StreamFv
	mr       r31, r3
	mr       r30, r29
	li       r29, 0
	b        lbl_80131EC8

lbl_80131EA8:
	addi     r3, r30, 0x18
	mr       r4, r28
	lwz      r12, 0x18(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 0x274
	addi     r29, r29, 1

lbl_80131EC8:
	cmplw    r29, r31
	blt      lbl_80131EA8
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
 * Address:	80131EF0
 * Size:	000148
 */
ItemParms::ItemParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	li       r10, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__5CNode@l
	addi     r9, r2, lbl_805181C4@sda21
	lis      r5, lbl_8047C358@ha
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__Q34Game15IllustratedBook9ItemParms@ha
	stw      r30, 8(r1)
	addi     r30, r5, lbl_8047C358@l
	lis      r5, 0x66303030@ha
	addi     r8, r3, __vt__Q34Game15IllustratedBook9ItemParms@l
	stw      r0, 0(r31)
	addi     r4, r31, 0x18
	addi     r7, r31, 0x9c
	addi     r0, r30, 0x90
	stw      r10, 0x10(r31)
	addi     r3, r4, 0xc
	addi     r5, r5, 0x66303030@l
	addi     r6, r30, 0x154
	stw      r10, 0xc(r31)
	stw      r10, 8(r31)
	stw      r10, 4(r31)
	stw      r9, 0x14(r31)
	stw      r8, 0(r31)
	stw      r7, 0x18(r31)
	stw      r10, 0x1c(r31)
	stw      r0, 0x20(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r31, 0x18
	stw      r0, 0x24(r31)
	addi     r3, r4, 0x34
	lfs      f0, lbl_80518168@sda21(r2)
	addi     r5, r5, 0x66303031@l
	lfs      f1, lbl_8051816C@sda21(r2)
	addi     r6, r30, 0x164
	stfs     f0, 0x3c(r31)
	lfs      f0, lbl_80518170@sda21(r2)
	stfs     f1, 0x44(r31)
	stfs     f0, 0x48(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	addi     r4, r31, 0x18
	stw      r0, 0x4c(r31)
	addi     r3, r4, 0x5c
	lfs      f0, lbl_80518168@sda21(r2)
	addi     r5, r5, 0x66303032@l
	lfs      f1, lbl_8051816C@sda21(r2)
	addi     r6, r30, 0x174
	stfs     f0, 0x64(r31)
	lfs      f0, lbl_80518170@sda21(r2)
	stfs     f1, 0x6c(r31)
	stfs     f0, 0x70(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_80518168@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051816C@sda21(r2)
	stw      r0, 0x74(r31)
	addi     r3, r31, 0xa4
	lfs      f0, lbl_80518170@sda21(r2)
	stfs     f2, 0x8c(r31)
	stfs     f1, 0x94(r31)
	stfs     f0, 0x98(r31)
	bl       __ct__Q34Game15IllustratedBook11CameraParmsFv
	li       r0, -1
	mr       r3, r31
	stw      r0, 0x274(r31)
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
 * Address:	80132038
 * Size:	000064
 */
void ItemParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 0xa0(r30)
	mr       r4, r31
	addi     r3, r30, 0x18
	bl       read__10ParametersFR6Stream
	addi     r3, r30, 0xa4
	mr       r4, r31
	lwz      r12, 0x26c(r30)
	lwz      r12, 8(r12)
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
 * Address:	8013209C
 * Size:	000060
 */
ItemParms::~ItemParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801320E0
	lis      r5, __vt__Q34Game15IllustratedBook9ItemParms@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game15IllustratedBook9ItemParms@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801320E0
	mr       r3, r30
	bl       __dl__FPv

lbl_801320E0:
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
 * Address:	801320FC
 * Size:	000080
 */
void ItemModeParms::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_80132150

lbl_8013212C:
	lwz      r0, 0x18(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 0x278
	addi     r30, r30, 1

lbl_80132150:
	lwz      r0, 0x1c(r28)
	cmplw    r30, r0
	blt      lbl_8013212C
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
 * Address:	8013217C
 * Size:	00029C
 */
Parms::Parms()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__5CNode@ha
	li       r5, 0
	stw      r0, 0x34(r1)
	addi     r0, r4, __vt__5CNode@l
	stmw     r25, 0x14(r1)
	mr       r30, r3
	lis      r3, lbl_8047C358@ha
	addi     r31, r3, lbl_8047C358@l
	addi     r4, r31, 0x190
	lis      r3, __vt__Q34Game15IllustratedBook5Parms@ha
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q34Game15IllustratedBook5Parms@l
	addi     r3, r30, 0x18
	stw      r5, 0x10(r30)
	stw      r5, 0xc(r30)
	stw      r5, 8(r30)
	stw      r5, 4(r30)
	stw      r4, 0x14(r30)
	stw      r0, 0(r30)
	bl       __ct__Q34Game15IllustratedBook12ColorSettingFv
	lis      r3, __vt__5CNode@ha
	lis      r4, __ct__Q34Game15IllustratedBook13PositionParmsFv@ha
	addi     r0, r3, __vt__5CNode@l
	li       r9, 0
	stw      r0, 0x78(r30)
	lis      r6, __vt__Q34Game15IllustratedBook17PositionParmsList@ha
	addi     r0, r6, __vt__Q34Game15IllustratedBook17PositionParmsList@l
	lis      r3, __dt__Q34Game15IllustratedBook13PositionParmsFv@ha
	stw      r9, 0x88(r30)
	addi     r8, r31, 0x80
	addi     r25, r30, 0x78
	addi     r5, r3, __dt__Q34Game15IllustratedBook13PositionParmsFv@l
	stw      r9, 0x84(r30)
	addi     r4, r4, __ct__Q34Game15IllustratedBook13PositionParmsFv@l
	addi     r3, r25, 0x18
	li       r6, 0xc0
	stw      r9, 0x80(r30)
	li       r7, 0xa
	stw      r9, 0x7c(r30)
	stw      r8, 0x8c(r30)
	stw      r0, 0x78(r30)
	bl       __construct_array
	li       r27, 0
	mr       r26, r27

lbl_80132234:
	addi     r4, r26, 0x18
	mr       r3, r25
	add      r4, r25, r4
	bl       add__5CNodeFP5CNode
	addi     r27, r27, 1
	addi     r26, r26, 0xc0
	cmplwi   r27, 0xa
	blt      lbl_80132234
	lis      r3, __vt__5CNode@ha
	lis      r4, __ct__Q34Game15IllustratedBook10EnemyParmsFv@ha
	addi     r0, r3, __vt__5CNode@l
	li       r9, 0
	stw      r0, 0x810(r30)
	lis      r6, __vt__Q34Game15IllustratedBook14EnemyModeParms@ha
	addi     r0, r6, __vt__Q34Game15IllustratedBook14EnemyModeParms@l
	lis      r3, __dt__Q34Game15IllustratedBook10EnemyParmsFv@ha
	stw      r9, 0x820(r30)
	addi     r8, r2, lbl_805181BC@sda21
	addi     r29, r30, 0x810
	addi     r5, r3, __dt__Q34Game15IllustratedBook10EnemyParmsFv@l
	stw      r9, 0x81c(r30)
	addi     r4, r4, __ct__Q34Game15IllustratedBook10EnemyParmsFv@l
	addi     r3, r29, 0x18
	li       r6, 0x274
	stw      r9, 0x818(r30)
	li       r7, 0x66
	stw      r9, 0x814(r30)
	stw      r8, 0x824(r30)
	stw      r0, 0x810(r30)
	bl       __construct_array
	li       r26, 0
	addi     r28, r30, 0x78
	mr       r25, r26
	lis      r27, 0x0000FFFF@ha

lbl_801322BC:
	mr       r3, r26
	addi     r4, r27, 0x0000FFFF@l
	bl       getEnemyName__Q24Game13EnemyInfoFuncFii
	addi     r0, r25, 0x2c
	addi     r4, r25, 0x18
	stwx     r3, r29, r0
	addi     r0, r25, 0x288
	mr       r3, r29
	add      r4, r29, r4
	stwx     r28, r29, r0
	bl       add__5CNodeFP5CNode
	addi     r26, r26, 1
	addi     r25, r25, 0x274
	cmpwi    r26, 0x66
	blt      lbl_801322BC
	lis      r4, __vt__5CNode@ha
	addis    r29, r30, 1
	addi     r0, r4, __vt__5CNode@l
	li       r5, 0
	stw      r0, 0x260(r29)
	lis      r3, __vt__Q34Game15IllustratedBook13ItemModeParms@ha
	addi     r4, r31, 0x184
	stw      r5, 0x270(r29)
	addi     r0, r3, __vt__Q34Game15IllustratedBook13ItemModeParms@l
	stw      r5, 0x26c(r29)
	stw      r5, 0x268(r29)
	stw      r5, 0x264(r29)
	stw      r4, 0x274(r29)
	stwu     r0, 0x260(r29)
	bl       getMaxPelletID__Q34Game10SingleGame10ZukanStateFv
	stw      r3, 0x1c(r29)
	lwz      r26, 0x1c(r29)
	mulli    r3, r26, 0x278
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game15IllustratedBook9ItemParmsFv@ha
	lis      r5, __dt__Q34Game15IllustratedBook9ItemParmsFv@ha
	addi     r4, r4, __ct__Q34Game15IllustratedBook9ItemParmsFv@l
	mr       r7, r26
	addi     r5, r5, __dt__Q34Game15IllustratedBook9ItemParmsFv@l
	li       r6, 0x278
	bl       __construct_new_array
	li       r26, 0
	stw      r3, 0x18(r29)
	mr       r25, r26
	addi     r31, r30, 0x78
	b        lbl_801323C0

lbl_80132378:
	mr       r3, r26
	bl       getCurrentPelletConfig__Q34Game10SingleGame10ZukanStateFi
	lwz      r6, 0x18(r29)
	addi     r5, r25, 0x274
	addi     r4, r25, 0x14
	addi     r0, r25, 0x270
	stwx     r26, r6, r5
	lwz      r6, 0x40(r3)
	mr       r3, r29
	lwz      r5, 0x18(r29)
	stwx     r6, r5, r4
	lwz      r4, 0x18(r29)
	stwx     r31, r4, r0
	lwz      r0, 0x18(r29)
	add      r4, r0, r25
	bl       add__5CNodeFP5CNode
	addi     r25, r25, 0x278
	addi     r26, r26, 1

lbl_801323C0:
	lwz      r0, 0x1c(r29)
	cmplw    r26, r0
	blt      lbl_80132378
	mr       r3, r30
	addi     r4, r30, 0x18
	bl       add__5CNodeFP5CNode
	mr       r3, r30
	addi     r4, r30, 0x78
	bl       add__5CNodeFP5CNode
	mr       r3, r30
	addi     r4, r30, 0x810
	bl       add__5CNodeFP5CNode
	addis    r4, r30, 1
	mr       r3, r30
	addi     r4, r4, 0x260
	bl       add__5CNodeFP5CNode
	mr       r3, r30
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80132418
 * Size:	000060
 */
ItemModeParms::~ItemModeParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8013245C
	lis      r5, __vt__Q34Game15IllustratedBook13ItemModeParms@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game15IllustratedBook13ItemModeParms@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8013245C
	mr       r3, r30
	bl       __dl__FPv

lbl_8013245C:
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
 * Address:	80132478
 * Size:	00007C
 */
EnemyModeParms::~EnemyModeParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801324D8
	lis      r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@ha
	lis      r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@ha
	addi     r0, r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@l
	li       r5, 0x274
	stw      r0, 0(r30)
	addi     r3, r30, 0x18
	addi     r4, r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@l
	li       r6, 0x66
	bl       __destroy_arr
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801324D8
	mr       r3, r30
	bl       __dl__FPv

lbl_801324D8:
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
 * Address:	801324F4
 * Size:	00007C
 */
PositionParmsList::~PositionParmsList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80132554
	lis      r3, __vt__Q34Game15IllustratedBook17PositionParmsList@ha
	lis      r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@ha
	addi     r0, r3, __vt__Q34Game15IllustratedBook17PositionParmsList@l
	li       r5, 0xc0
	stw      r0, 0(r30)
	addi     r3, r30, 0x18
	addi     r4, r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@l
	li       r6, 0xa
	bl       __destroy_arr
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80132554
	mr       r3, r30
	bl       __dl__FPv

lbl_80132554:
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
 * Address:	80132570
 * Size:	000060
 */
ColorSetting::~ColorSetting()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801325B4
	lis      r5, __vt__Q34Game15IllustratedBook12ColorSetting@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game15IllustratedBook12ColorSetting@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801325B4
	mr       r3, r30
	bl       __dl__FPv

lbl_801325B4:
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
 * Address:	801325D0
 * Size:	000090
 */
void Parms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x18
	lwz      r12, 0x18(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x78
	mr       r4, r31
	lwz      r12, 0x78(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x810
	mr       r4, r31
	lwz      r12, 0x810(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addis    r3, r30, 1
	lwzu     r12, 0x260(r3)
	mr       r4, r31
	lwz      r12, 0x10(r12)
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
 * Address:	80132660
 * Size:	0000D0
 */
void Parms::loadFile(JKRArchive*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	stw      r31, 0x43c(r1)
	stw      r30, 0x438(r1)
	or.      r30, r4, r4
	lis      r4, lbl_8047C358@ha
	stw      r29, 0x434(r1)
	mr       r29, r3
	addi     r31, r4, lbl_8047C358@l
	bne      lbl_801326A0
	addi     r3, r31, 0xc
	addi     r5, r31, 0x19c
	li       r4, 0x2de
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801326A0:
	mr       r3, r30
	addi     r4, r31, 0x1a8
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	bne      lbl_801326D4
	addi     r3, r31, 0xc
	addi     r5, r31, 0x19c
	li       r4, 0x2e0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801326D4:
	mr       r4, r30
	addi     r3, r1, 8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x14(r1)
	bne      lbl_801326FC
	li       r0, 0
	stw      r0, 0x41c(r1)

lbl_801326FC:
	mr       r3, r29
	addi     r4, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80132730
 * Size:	000114
 */
Parms::~Parms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80132828
	addis    r3, r30, 1
	lis      r4, __vt__Q34Game15IllustratedBook5Parms@ha
	addi     r4, r4, __vt__Q34Game15IllustratedBook5Parms@l
	addic.   r0, r3, 0x260
	stw      r4, 0(r30)
	beq      lbl_8013277C
	lis      r4, __vt__Q34Game15IllustratedBook13ItemModeParms@ha
	addi     r0, r4, __vt__Q34Game15IllustratedBook13ItemModeParms@l
	stwu     r0, 0x260(r3)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8013277C:
	addic.   r0, r30, 0x810
	beq      lbl_801327B4
	lis      r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@ha
	lis      r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@ha
	addi     r0, r3, __vt__Q34Game15IllustratedBook14EnemyModeParms@l
	li       r5, 0x274
	stw      r0, 0x810(r30)
	addi     r3, r30, 0x828
	addi     r4, r4, __dt__Q34Game15IllustratedBook10EnemyParmsFv@l
	li       r6, 0x66
	bl       __destroy_arr
	addi     r3, r30, 0x810
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801327B4:
	addic.   r0, r30, 0x78
	beq      lbl_801327EC
	lis      r3, __vt__Q34Game15IllustratedBook17PositionParmsList@ha
	lis      r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@ha
	addi     r0, r3, __vt__Q34Game15IllustratedBook17PositionParmsList@l
	li       r5, 0xc0
	stw      r0, 0x78(r30)
	addi     r3, r30, 0x90
	addi     r4, r4, __dt__Q34Game15IllustratedBook13PositionParmsFv@l
	li       r6, 0xa
	bl       __destroy_arr
	addi     r3, r30, 0x78
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801327EC:
	addic.   r0, r30, 0x18
	beq      lbl_8013280C
	lis      r4, __vt__Q34Game15IllustratedBook12ColorSetting@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q34Game15IllustratedBook12ColorSetting@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_8013280C:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80132828
	mr       r3, r30
	bl       __dl__FPv

lbl_80132828:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace IllustratedBook
} // namespace Game
