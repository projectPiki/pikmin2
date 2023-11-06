#include "Game/IllustratedBook.h"
#include "Game/GameSystem.h"
#include "Game/SingleGame.h"
#include "nans.h"

namespace Game {
namespace IllustratedBook {

Game::SingleGame::ZukanState* Parms::sZukanState;
Camera* Parms::sCamera;

static const int unusedIllustratedBookArray[] = { 0, 0, 0 };

#define COMPLEMENT(src, dest, proportion) (proportion) * ((f32)(dest) - (f32)(src)) + (f32)(src)

/*
 * --INFO--
 * Address:	80130B9C
 * Size:	0001D0
 */
ColorSetting::ColorSetting()
    : CNode("êFê›íË")
{
	_18[0][0] = Color4(88, 91, 153, 255);
	_18[0][1] = Color4(64, 64, 64, 255);
	_18[1][0] = Color4(166, 232, 253, 255);
	_18[1][1] = Color4(255, 255, 255, 255);
	_18[2][0] = Color4(166, 232, 253, 255);
	_18[2][1] = Color4(255, 255, 255, 255);
	_18[3][0] = Color4(255, 192, 128, 255);
	_18[3][1] = Color4(255, 255, 143, 255);
	_18[4][0] = Color4(255, 255, 255, 255);
	_18[4][1] = Color4(255, 255, 255, 255);

	_40[0] = Color4(73, 73, 73, 255);
	_40[1] = Color4(8, 8, 8, 255);
	_40[2] = Color4(50, 50, 40, 255);
	_40[3] = Color4(52, 32, 10, 255);
	_40[4] = Color4(32, 32, 10, 255);
}

/*
 * --INFO--
 * Address:	80130D70
 * Size:	000098
 */
void ColorSetting::read(Stream& stream)
{
	for (int i = 0; i < 4; i++) {
		_18[i][0].read(stream);
		_18[i][1].read(stream);
	}

	for (int i = 0; i < 4; i++) {
		_40[i].read(stream);
	}
}

/*
 * --INFO--
 * Address:	80130E08
 * Size:	0008CC
 */
void ColorSetting::update()
{
	int start, middle, stop;
	switch (gameSystem->mTimeMgr->mLightSetting) {
	case SUNTIME_Night:
		start  = SUNTIME_Night;
		middle = SUNTIME_Night;
		stop   = SUNTIME_Night;
		break;
	case SUNTIME_Morning:
		start  = SUNTIME_Night;
		middle = SUNTIME_Morning;
		stop   = SUNTIME_Noon;
		break;
	case SUNTIME_Noon:
		start  = SUNTIME_Noon;
		middle = SUNTIME_Noon;
		stop   = SUNTIME_Noon;
		break;
	case SUNTIME_Evening:
		start  = SUNTIME_Noon;
		middle = SUNTIME_Evening;
		stop   = SUNTIME_Night;
		break;
	default:
		JUT_PANICLINE(205, "Illegal slot.\n");
		break;
	}

	f32 ratio             = gameSystem->mTimeMgr->mLightSettingRatio;
	Color4* startColor40  = &_40[start];
	Color4* middleColor40 = &_40[middle];
	Color4* stopColor40   = &_40[stop];

	// how are these meant to get loaded in/pointed to?
	Color4* startColor18  = _18[start];
	Color4* middleColor18 = _18[middle];
	Color4* stopColor18   = _18[stop];

	if (ratio < 0.5f) {
		ratio *= 2.0f;
		_54.r = COMPLEMENT(startColor18[0].r, middleColor18[0].r, ratio);
		_54.g = COMPLEMENT(startColor18[0].g, middleColor18[0].g, ratio);
		_54.b = COMPLEMENT(startColor18[0].b, middleColor18[0].b, ratio);
		_54.a = COMPLEMENT(startColor18[0].a, middleColor18[0].a, ratio);

		_58.r = COMPLEMENT(startColor18[1].r, middleColor18[1].r, ratio);
		_58.g = COMPLEMENT(startColor18[1].g, middleColor18[1].g, ratio);
		_58.b = COMPLEMENT(startColor18[1].b, middleColor18[1].b, ratio);
		_58.a = COMPLEMENT(startColor18[1].a, middleColor18[1].a, ratio);

		_5C.r = COMPLEMENT(startColor40->r, middleColor40->r, ratio);
		_5C.g = COMPLEMENT(startColor40->g, middleColor40->g, ratio);
		_5C.b = COMPLEMENT(startColor40->b, middleColor40->b, ratio);
		_5C.a = COMPLEMENT(startColor40->a, middleColor40->a, ratio);

	} else {
		ratio = 2.0f * (ratio - 0.5f);
		_54.r = COMPLEMENT(middleColor18[0].r, stopColor18[0].r, ratio);
		_54.g = COMPLEMENT(middleColor18[0].g, stopColor18[0].g, ratio);
		_54.b = COMPLEMENT(middleColor18[0].b, stopColor18[0].b, ratio);
		_54.a = COMPLEMENT(middleColor18[0].a, stopColor18[0].a, ratio);

		_58.r = COMPLEMENT(middleColor18[1].r, stopColor18[1].r, ratio);
		_58.g = COMPLEMENT(middleColor18[1].g, stopColor18[1].g, ratio);
		_58.b = COMPLEMENT(middleColor18[1].b, stopColor18[1].b, ratio);
		_58.a = COMPLEMENT(middleColor18[1].a, stopColor18[1].a, ratio);

		_5C.r = COMPLEMENT(middleColor40->r, stopColor40->r, ratio);
		_5C.g = COMPLEMENT(middleColor40->g, stopColor40->g, ratio);
		_5C.b = COMPLEMENT(middleColor40->b, stopColor40->b, ratio);
		_5C.a = COMPLEMENT(middleColor40->a, stopColor40->a, ratio);
	}
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
    : CNode(mEnemyName)
{
	sprintf(mEnemyName, "èoåªèÍèäñº"); // 'appearance location name'
}

/*
 * --INFO--
 * Address:	8013181C
 * Size:	000050
 */
void PositionParms::read(Stream& stream)
{
	stream.readString(mEnemyName, sizeof(mEnemyName));
	mParms.read(stream);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
PositionParmsList::PositionParmsList()
    : CNode("èoåªà íuÉäÉXÉg")
{
	for (u32 i = 0; i < 10; i++) {
		add(&mParms[i]);
	}
}

/*
 * --INFO--
 * Address:	801318CC
 * Size:	000068
 */
void PositionParmsList::read(Stream& stream)
{
	for (u32 i = 0; i < 10; i++) {
		mParms[i].read(stream);
	}
}

/*
 * --INFO--
 * Address:	80131934
 * Size:	000020
 */
void CameraParms::read(Stream& stream) { mParms.read(stream); }

/*
 * --INFO--
 * Address:	80131954
 * Size:	000130
 */
EnemyParms::EnemyParms()
    : CNode("")
{
}

/*
 * --INFO--
 * Address:	80131DA8
 * Size:	000064
 */
void EnemyParms::read(Stream& stream)
{
	mGroupID = stream.readByte();
	mParms.read(stream);
	mCameraParms.read(stream);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
EnemyModeParms::EnemyModeParms(PositionParmsList* list)
    : CNode("ìGê}ä”") // 'enemy encyclopedia'
{
	for (int i = 0; i < EnemyTypeID::EnemyID_COUNT; i++) {
		mEnemyParms[i].mName         = EnemyInfoFunc::getEnemyName(i, 0xFFFF);
		mEnemyParms[i].mPosParmsList = list;
		add(&mEnemyParms[i]);
	}
}

/*
 * --INFO--
 * Address:	80131E6C
 * Size:	000084
 */
void EnemyModeParms::read(Stream& stream)
{
	int max = stream.readInt();

	for (u32 i = 0; i < max; i++) {
		mEnemyParms[i].read(stream);
	}
}

/*
 * --INFO--
 * Address:	80131EF0
 * Size:	000148
 */
ItemParms::ItemParms()
    : CNode("ê›íË") // 'setting'
{
	mIndex = -1;
}

/*
 * --INFO--
 * Address:	80132038
 * Size:	000064
 */
void ItemParms::read(Stream& stream)
{
	mGroupID = stream.readByte();
	mParms.read(stream);
	mCameraParms.read(stream);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
ItemModeParms::ItemModeParms(PositionParmsList* list)
    : CNode("Ç®ïÛê}ä”") // 'treasure book'
{
	mItemCount = SingleGame::ZukanState::getMaxPelletID();
	mItemParms = new ItemParms[mItemCount];

	for (int i = 0; i < mItemCount; i++) {
		PelletConfig* config        = SingleGame::ZukanState::getCurrentPelletConfig(i);
		mItemParms[i].mIndex        = i;
		mItemParms[i].mName         = config->mParams.mName.mData;
		mItemParms[i].mPosParmsList = list;
		add(&mItemParms[i]);
	}
}

/*
 * --INFO--
 * Address:	801320FC
 * Size:	000080
 */
void ItemModeParms::read(Stream& stream)
{
	for (int i = 0; i < mItemCount; i++) {
		mItemParms[i].read(stream);
	}
}

/*
 * --INFO--
 * Address:	8013217C
 * Size:	00029C
 */
Parms::Parms()
    : CNode("ê}ä”ê›íË") // 'picture book setting'
    , mEnemyParms(&mPosParmsList)
    , mItemParms(&mPosParmsList)
{
	add(&mColorSetting);
	add(&mPosParmsList);
	add(&mEnemyParms);
	add(&mItemParms);
}

/*
 * --INFO--
 * Address:	801325D0
 * Size:	000090
 */
void Parms::read(Stream& stream)
{
	mColorSetting.read(stream);
	mPosParmsList.read(stream);
	mEnemyParms.read(stream);
	mItemParms.read(stream);
}

/*
 * --INFO--
 * Address:	80132660
 * Size:	0000D0
 */
void Parms::loadFile(JKRArchive* archive)
{
	P2ASSERTLINE(734, archive);
	void* resource = archive->getResource("setting.ini");
	P2ASSERTLINE(736, resource);
	RamStream stream(resource, -1);
	stream.resetPosition(true, true);
	read(stream);
}

// these are from Parms::loadFile(const char* fileName), which is stripped:
static const char unusedLoadFileStr1[] = "load error.[%s]\n";
static const char unusedLoadFileStr2[] = "no fileName";

} // namespace IllustratedBook
} // namespace Game
