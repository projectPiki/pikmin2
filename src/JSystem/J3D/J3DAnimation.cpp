#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmCluster.h"
#include "JSystem/J3D/J3DAnmColor.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/J3D/J3DFrameCtrl.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__14J3DAnmColorKey
    __vt__14J3DAnmColorKey:
        .4byte 0
        .4byte 0
        .4byte __dt__14J3DAnmColorKeyFv
        .4byte getKind__14J3DAnmColorKeyCFv
        .4byte getColor__14J3DAnmColorKeyCFUsP8_GXColor
    .global __vt__10J3DAnmBase
    __vt__10J3DAnmBase:
        .4byte 0
        .4byte 0
        .4byte __dt__10J3DAnmBaseFv
        .4byte 0
    .global __vt__11J3DAnmColor
    __vt__11J3DAnmColor:
        .4byte 0
        .4byte 0
        .4byte __dt__11J3DAnmColorFv
        .4byte getKind__11J3DAnmColorCFv
        .4byte getColor__11J3DAnmColorCFUsP8_GXColor
    .global __vt__15J3DAnmColorFull
    __vt__15J3DAnmColorFull:
        .4byte 0
        .4byte 0
        .4byte __dt__15J3DAnmColorFullFv
        .4byte getKind__15J3DAnmColorFullCFv
        .4byte getColor__15J3DAnmColorFullCFUsP8_GXColor
    .global __vt__17J3DAnmVtxColorKey
    __vt__17J3DAnmVtxColorKey:
        .4byte 0
        .4byte 0
        .4byte __dt__17J3DAnmVtxColorKeyFv
        .4byte getKind__17J3DAnmVtxColorKeyCFv
        .4byte getColor__17J3DAnmVtxColorKeyCFUcUsP8_GXColor
    .global __vt__14J3DAnmVtxColor
    __vt__14J3DAnmVtxColor:
        .4byte 0
        .4byte 0
        .4byte __dt__14J3DAnmVtxColorFv
        .4byte getKind__14J3DAnmVtxColorCFv
        .4byte getColor__14J3DAnmVtxColorCFUcUsP8_GXColor
    .global __vt__18J3DAnmVtxColorFull
    __vt__18J3DAnmVtxColorFull:
        .4byte 0
        .4byte 0
        .4byte __dt__18J3DAnmVtxColorFullFv
        .4byte getKind__18J3DAnmVtxColorFullCFv
        .4byte getColor__18J3DAnmVtxColorFullCFUcUsP8_GXColor
    .global __vt__16J3DAnmClusterKey
    __vt__16J3DAnmClusterKey:
        .4byte 0
        .4byte 0
        .4byte __dt__16J3DAnmClusterKeyFv
        .4byte getKind__16J3DAnmClusterKeyCFv
        .4byte getWeight__16J3DAnmClusterKeyCFUs
    .global __vt__13J3DAnmCluster
    __vt__13J3DAnmCluster:
        .4byte 0
        .4byte 0
        .4byte __dt__13J3DAnmClusterFv
        .4byte getKind__13J3DAnmClusterCFv
        .4byte getWeight__13J3DAnmClusterCFUs
    .global __vt__17J3DAnmClusterFull
    __vt__17J3DAnmClusterFull:
        .4byte 0
        .4byte 0
        .4byte __dt__17J3DAnmClusterFullFv
        .4byte getKind__17J3DAnmClusterFullCFv
        .4byte getWeight__17J3DAnmClusterFullCFUs
    .global __vt__19J3DAnmTransformFull
    __vt__19J3DAnmTransformFull:
        .4byte 0
        .4byte 0
        .4byte __dt__19J3DAnmTransformFullFv
        .4byte getKind__19J3DAnmTransformFullCFv
        .4byte getTransform__19J3DAnmTransformFullCFUsP16J3DTransformInfo
    .global __vt__15J3DAnmTransform
    __vt__15J3DAnmTransform:
        .4byte 0
        .4byte 0
        .4byte __dt__15J3DAnmTransformFv
        .4byte getKind__15J3DAnmTransformCFv
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516A18
    lbl_80516A18:
        .float 1.0
    .global lbl_80516A1C
    lbl_80516A1C:
        .4byte 0x00000000
    .global lbl_80516A20
    lbl_80516A20:
        .4byte 0x3A83126F
        .4byte 0x00000000
    .global lbl_80516A28
    lbl_80516A28:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516A30
    lbl_80516A30:
        .float 0.5
    .global lbl_80516A34
    lbl_80516A34:
        .4byte 0x437F0000
    .global lbl_80516A38
    lbl_80516A38:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516A40
    lbl_80516A40:
        .4byte 0xC4800000
    .global lbl_80516A44
    lbl_80516A44:
        .4byte 0x447FC000
*/

/*
 * --INFO--
 * Address:	80067678
 * Size:	000030
 */
void J3DFrameCtrl::init(short p1)
{
	m_attr = 2;
	_05    = 0;
	_06    = 0;
	_08    = p1;
	_0A    = 0;
	_0C    = 1.0f;
	_10    = 0.0f;
}

/*
 * --INFO--
 * Address:	800676A8
 * Size:	000474
 */
void J3DFrameCtrl::update()
{
	_05 = 0;
	_10 = _10 + _0C;
	switch (m_attr) {
	case 0:
		if (_10 < _06) {
			_10 = _06;
			_0C = 0.0f;
			_05 = _05 | 1;
		}
		if (_10 >= _08) {
			_10 = _08 - 0.001f;
			_0C = 0.0f;
			_05 = _05 | 1;
		}
		return;
	case 1:
		if (_10 < _06) {
			_10 = _06;
			_0C = 0.0f;
			_05 = _05 | 1;
		}
		if (_10 >= _08) {
			_10 = _06;
			_0C = 0.0f;
			_05 = _05 | 1;
		}
		return;
	case 2:
		while (_10 < _06) {
			_05    = _05 | 2;
			int v1 = _0A - _06;
			if (v1 <= 0.0f) {
				break;
			}
			_10 = _10 + v1;
		}
		while (_10 >= _08) {
			_05    = _05 | 2;
			int v1 = _08 - _0A;
			if (v1 <= 0.0f) {
				break;
			}
			_10 = _10 - v1;
		}
		return;
	case 3:
		if (_10 >= _08) {
			_10 = _08 - (_10 - _08);
			_0C = -_0C;
		}
		if (_10 < _06) {
			_10 = _06 - (_10 - _06);
			_0C = 0.0f;
			_05 = _05 | 1;
		}
		return;
	case 4: {
		f32 v2 = _08 - 1.0f;
		if (_10 >= v2) {
			_10 = v2 - (_10 - v2);
			_0C = -_0C;
		}
		if (_10 < _06) {
			_10 = _06 - (_10 - _06);
			_0C = -_0C;
			_05 = _05 | 2;
		}
		return;
	}
	}
}

/*
 * --INFO--
 * Address:	80067B1C
 * Size:	000360
 */
void J3DAnmTransformFull::getTransform(unsigned short p1, J3DTransformInfo* info) const
{
	// u16* v1 = _20->_00[p1];
	// u16* v2 = _20->_00[p1+1];
	/*
	mulli    r0, r4, 3
	lfs      f1, 8(r3)
	lfs      f0, lbl_80516A1C@sda21(r2)
	lwz      r8, 0x20(r3)
	clrlwi   r6, r0, 0x10
	fcmpo    cr0, f1, f0
	addi     r0, r6, 2
	stwu     r1, -0x10(r1)
	addi     r4, r6, 1
	mulli    r7, r6, 0xc
	mulli    r6, r4, 0xc
	add      r4, r8, r7
	mulli    r0, r0, 0xc
	add      r6, r8, r6
	add      r7, r8, r0
	bge      lbl_80067BFC
	lhz      r0, 2(r4)
	lwz      r9, 0xc(r3)
	slwi     r0, r0, 2
	lwz      r8, 0x10(r3)
	lfsx     f0, r9, r0
	lwz      r3, 0x14(r3)
	stfs     f0, 0(r5)
	lhz      r0, 2(r6)
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 4(r5)
	lhz      r0, 2(r7)
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 8(r5)
	lhz      r0, 6(r4)
	slwi     r0, r0, 1
	lhax     r0, r8, r0
	sth      r0, 0xc(r5)
	lhz      r0, 6(r6)
	slwi     r0, r0, 1
	lhax     r0, r8, r0
	sth      r0, 0xe(r5)
	lhz      r0, 6(r7)
	slwi     r0, r0, 1
	lhax     r0, r8, r0
	sth      r0, 0x10(r5)
	lhz      r0, 0xa(r4)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0
	stfs     f0, 0x14(r5)
	lhz      r0, 0xa(r6)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0
	stfs     f0, 0x18(r5)
	lhz      r0, 0xa(r7)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0
	stfs     f0, 0x1c(r5)
	b        lbl_80067E74

lbl_80067BFC:
	lfs      f0, lbl_80516A30@sda21(r2)
	lhz      r10, 0(r4)
	fadds    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	cmplw    r0, r10
	blt      lbl_80067C3C
	lhz      r8, 2(r4)
	lwz      r9, 0xc(r3)
	add      r8, r10, r8
	addi     r8, r8, -1
	slwi     r8, r8, 2
	lfsx     f0, r9, r8
	stfs     f0, 0(r5)
	b        lbl_80067C54

lbl_80067C3C:
	lhz      r8, 2(r4)
	lwz      r9, 0xc(r3)
	add      r8, r8, r0
	slwi     r8, r8, 2
	lfsx     f0, r9, r8
	stfs     f0, 0(r5)

lbl_80067C54:
	lhz      r10, 4(r4)
	cmplw    r0, r10
	blt      lbl_80067C80
	lhz      r8, 6(r4)
	lwz      r9, 0x10(r3)
	add      r8, r10, r8
	addi     r8, r8, -1
	slwi     r8, r8, 1
	lhax     r8, r9, r8
	sth      r8, 0xc(r5)
	b        lbl_80067C98

lbl_80067C80:
	lhz      r8, 6(r4)
	lwz      r9, 0x10(r3)
	add      r8, r8, r0
	slwi     r8, r8, 1
	lhax     r8, r9, r8
	sth      r8, 0xc(r5)

lbl_80067C98:
	lhz      r9, 8(r4)
	cmplw    r0, r9
	blt      lbl_80067CC4
	lhz      r4, 0xa(r4)
	lwz      r8, 0x14(r3)
	add      r4, r9, r4
	addi     r4, r4, -1
	slwi     r4, r4, 2
	lfsx     f0, r8, r4
	stfs     f0, 0x14(r5)
	b        lbl_80067CDC

lbl_80067CC4:
	lhz      r4, 0xa(r4)
	lwz      r8, 0x14(r3)
	add      r4, r4, r0
	slwi     r4, r4, 2
	lfsx     f0, r8, r4
	stfs     f0, 0x14(r5)

lbl_80067CDC:
	lhz      r9, 0(r6)
	cmplw    r0, r9
	blt      lbl_80067D08
	lhz      r4, 2(r6)
	lwz      r8, 0xc(r3)
	add      r4, r9, r4
	addi     r4, r4, -1
	slwi     r4, r4, 2
	lfsx     f0, r8, r4
	stfs     f0, 4(r5)
	b        lbl_80067D20

lbl_80067D08:
	lhz      r4, 2(r6)
	lwz      r8, 0xc(r3)
	add      r4, r4, r0
	slwi     r4, r4, 2
	lfsx     f0, r8, r4
	stfs     f0, 4(r5)

lbl_80067D20:
	lhz      r9, 4(r6)
	cmplw    r0, r9
	blt      lbl_80067D4C
	lhz      r4, 6(r6)
	lwz      r8, 0x10(r3)
	add      r4, r9, r4
	addi     r4, r4, -1
	slwi     r4, r4, 1
	lhax     r4, r8, r4
	sth      r4, 0xe(r5)
	b        lbl_80067D64

lbl_80067D4C:
	lhz      r4, 6(r6)
	lwz      r8, 0x10(r3)
	add      r4, r4, r0
	slwi     r4, r4, 1
	lhax     r4, r8, r4
	sth      r4, 0xe(r5)

lbl_80067D64:
	lhz      r8, 8(r6)
	cmplw    r0, r8
	blt      lbl_80067D90
	lhz      r4, 0xa(r6)
	lwz      r6, 0x14(r3)
	add      r4, r8, r4
	addi     r4, r4, -1
	slwi     r4, r4, 2
	lfsx     f0, r6, r4
	stfs     f0, 0x18(r5)
	b        lbl_80067DA8

lbl_80067D90:
	lhz      r4, 0xa(r6)
	lwz      r6, 0x14(r3)
	add      r4, r4, r0
	slwi     r4, r4, 2
	lfsx     f0, r6, r4
	stfs     f0, 0x18(r5)

lbl_80067DA8:
	lhz      r8, 0(r7)
	cmplw    r0, r8
	blt      lbl_80067DD4
	lhz      r4, 2(r7)
	lwz      r6, 0xc(r3)
	add      r4, r8, r4
	addi     r4, r4, -1
	slwi     r4, r4, 2
	lfsx     f0, r6, r4
	stfs     f0, 8(r5)
	b        lbl_80067DEC

lbl_80067DD4:
	lhz      r4, 2(r7)
	lwz      r6, 0xc(r3)
	add      r4, r4, r0
	slwi     r4, r4, 2
	lfsx     f0, r6, r4
	stfs     f0, 8(r5)

lbl_80067DEC:
	lhz      r8, 4(r7)
	cmplw    r0, r8
	blt      lbl_80067E18
	lhz      r4, 6(r7)
	lwz      r6, 0x10(r3)
	add      r4, r8, r4
	addi     r4, r4, -1
	slwi     r4, r4, 1
	lhax     r4, r6, r4
	sth      r4, 0x10(r5)
	b        lbl_80067E30

lbl_80067E18:
	lhz      r4, 6(r7)
	lwz      r6, 0x10(r3)
	add      r4, r4, r0
	slwi     r4, r4, 1
	lhax     r4, r6, r4
	sth      r4, 0x10(r5)

lbl_80067E30:
	lhz      r6, 8(r7)
	cmplw    r0, r6
	blt      lbl_80067E5C
	lhz      r0, 0xa(r7)
	lwz      r4, 0x14(r3)
	add      r3, r6, r0
	addi     r0, r3, -1
	slwi     r0, r0, 2
	lfsx     f0, r4, r0
	stfs     f0, 0x1c(r5)
	b        lbl_80067E74

lbl_80067E5C:
	lhz      r4, 0xa(r7)
	lwz      r3, 0x14(r3)
	add      r0, r4, r0
	slwi     r0, r0, 2
	lfsx     f0, r3, r0
	stfs     f0, 0x1c(r5)

lbl_80067E74:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80067E7C
 * Size:	000420
 */
void J3DAnmTransformKey::calcTransform(float, unsigned short, J3DTransformInfo*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mulli     r0, r4, 0x3
	  mr        r27, r3
	  lwz       r6, 0x24(r3)
	  fmr       f31, f1
	  mr        r28, r5
	  rlwinm    r3,r0,0,16,31
	  mulli     r0, r3, 0x12
	  addi      r4, r3, 0x1
	  addi      r3, r3, 0x2
	  add       r31, r6, r0
	  lhz       r0, 0x0(r31)
	  mulli     r4, r4, 0x12
	  cmpwi     r0, 0x1
	  mulli     r3, r3, 0x12
	  add       r30, r6, r4
	  add       r29, r6, r3
	  beq-      .loc_0x78
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x90

	.loc_0x6C:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0xC(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0xC(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x2054
	  stfs      f1, 0x0(r28)

	.loc_0xB0:
	  lhz       r0, 0x0(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xF0
	  cmpwi     r0, 0
	  bge-      .loc_0xCC
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0xC(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0xC(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1FF4
	  stfs      f1, 0x4(r28)

	.loc_0x110:
	  lhz       r0, 0x0(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x138
	  bge-      .loc_0x150
	  cmpwi     r0, 0
	  bge-      .loc_0x12C
	  b         .loc_0x150

	.loc_0x12C:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x138:
	  lhz       r0, 0x2(r29)
	  lwz       r3, 0xC(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x150:
	  lhz       r0, 0x2(r29)
	  fmr       f1, f31
	  lwz       r4, 0xC(r27)
	  mr        r3, r29
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1F94
	  stfs      f1, 0x8(r28)

	.loc_0x170:
	  lhz       r0, 0x6(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x198
	  bge-      .loc_0x1B8
	  cmpwi     r0, 0
	  bge-      .loc_0x18C
	  b         .loc_0x1B8

	.loc_0x18C:
	  li        r0, 0
	  sth       r0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x198:
	  lhz       r0, 0x8(r31)
	  lwz       r4, 0x10(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x20(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B8:
	  lhz       r0, 0x8(r31)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  addi      r3, r31, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1CF8
	  fctiwz    f0, f1
	  lwz       r0, 0x20(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0xC(r28)

	.loc_0x1EC:
	  lhz       r0, 0x6(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x214
	  bge-      .loc_0x234
	  cmpwi     r0, 0
	  bge-      .loc_0x208
	  b         .loc_0x234

	.loc_0x208:
	  li        r0, 0
	  sth       r0, 0xE(r28)
	  b         .loc_0x268

	.loc_0x214:
	  lhz       r0, 0x8(r30)
	  lwz       r4, 0x10(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x20(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xE(r28)
	  b         .loc_0x268

	.loc_0x234:
	  lhz       r0, 0x8(r30)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  addi      r3, r30, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1C7C
	  fctiwz    f0, f1
	  lwz       r0, 0x20(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0xE(r28)

	.loc_0x268:
	  lhz       r0, 0x6(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x290
	  bge-      .loc_0x2B0
	  cmpwi     r0, 0
	  bge-      .loc_0x284
	  b         .loc_0x2B0

	.loc_0x284:
	  li        r0, 0
	  sth       r0, 0x10(r28)
	  b         .loc_0x2E4

	.loc_0x290:
	  lhz       r0, 0x8(r29)
	  lwz       r4, 0x10(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x20(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x10(r28)
	  b         .loc_0x2E4

	.loc_0x2B0:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1C00
	  fctiwz    f0, f1
	  lwz       r0, 0x20(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0x10(r28)

	.loc_0x2E4:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x30C
	  bge-      .loc_0x324
	  cmpwi     r0, 0
	  bge-      .loc_0x300
	  b         .loc_0x324

	.loc_0x300:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x30C:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x14(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x324:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1DC0
	  stfs      f1, 0x14(r28)

	.loc_0x344:
	  lhz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x36C
	  bge-      .loc_0x384
	  cmpwi     r0, 0
	  bge-      .loc_0x360
	  b         .loc_0x384

	.loc_0x360:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x36C:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x14(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x384:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1D60
	  stfs      f1, 0x18(r28)

	.loc_0x3A4:
	  lhz       r0, 0xC(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3CC
	  bge-      .loc_0x3E4
	  cmpwi     r0, 0
	  bge-      .loc_0x3C0
	  b         .loc_0x3E4

	.loc_0x3C0:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3CC:
	  lhz       r0, 0xE(r29)
	  lwz       r3, 0x14(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3E4:
	  lhz       r0, 0xE(r29)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r29, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1D00
	  stfs      f1, 0x1C(r28)

	.loc_0x404:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006829C
 * Size:	000268
 */
void J3DAnmTextureSRTKey::calcTransform(float, unsigned short, J3DTextureSRTInfo*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mulli     r0, r4, 0x3
	  mr        r27, r3
	  lwz       r6, 0x10(r3)
	  fmr       f31, f1
	  mr        r28, r5
	  rlwinm    r3,r0,0,16,31
	  mulli     r0, r3, 0x12
	  addi      r4, r3, 0x1
	  addi      r3, r3, 0x2
	  add       r31, r6, r0
	  lhz       r0, 0x0(r31)
	  mulli     r4, r4, 0x12
	  cmpwi     r0, 0x1
	  mulli     r3, r3, 0x12
	  add       r30, r6, r4
	  add       r29, r6, r3
	  beq-      .loc_0x78
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x90

	.loc_0x6C:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x1C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0x1C(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1C34
	  stfs      f1, 0x0(r28)

	.loc_0xB0:
	  lhz       r0, 0x0(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xF0
	  cmpwi     r0, 0
	  bge-      .loc_0xCC
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, -0x7948(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0x1C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0x1C(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1BD4
	  stfs      f1, 0x4(r28)

	.loc_0x110:
	  lhz       r0, 0x6(r29)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x138
	  bge-      .loc_0x158
	  cmpwi     r0, 0
	  bge-      .loc_0x12C
	  b         .loc_0x158

	.loc_0x12C:
	  li        r0, 0
	  sth       r0, 0x8(r28)
	  b         .loc_0x18C

	.loc_0x138:
	  lhz       r0, 0x8(r29)
	  lwz       r4, 0x20(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0xC(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x8(r28)
	  b         .loc_0x18C

	.loc_0x158:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x20(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1938
	  fctiwz    f0, f1
	  lwz       r0, 0xC(r27)
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  slw       r0, r3, r0
	  sth       r0, 0x8(r28)

	.loc_0x18C:
	  lhz       r0, 0xC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B4
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0
	  bge-      .loc_0x1A8
	  b         .loc_0x1CC

	.loc_0x1A8:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B4:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1CC:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1AF8
	  stfs      f1, 0xC(r28)

	.loc_0x1EC:
	  lhz       r0, 0xC(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x214
	  bge-      .loc_0x22C
	  cmpwi     r0, 0
	  bge-      .loc_0x208
	  b         .loc_0x22C

	.loc_0x208:
	  lfs       f0, -0x7944(r2)
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x214:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x22C:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1A98
	  stfs      f1, 0x10(r28)

	.loc_0x24C:
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80068504
 * Size:	000094
 */
float J3DAnmClusterFull::getWeight(unsigned short) const
{
	/*
	lfs      f1, lbl_80516A30@sda21(r2)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516A1C@sda21(r2)
	fadds    f1, f1, f2
	stwu     r1, -0x10(r1)
	fcmpo    cr0, f2, f0
	lwz      r4, 0x10(r3)
	fctiwz   f0, f1
	lhzx     r6, r4, r0
	stfd     f0, 8(r1)
	lwz      r5, 0xc(r1)
	bge      lbl_80068550
	add      r4, r4, r0
	lwz      r3, 0xc(r3)
	lhz      r0, 2(r4)
	slwi     r0, r0, 2
	lfsx     f1, r3, r0
	b        lbl_80068590

lbl_80068550:
	cmpw     r5, r6
	blt      lbl_80068578
	add      r4, r4, r0
	lwz      r5, 0xc(r3)
	lhz      r0, 2(r4)
	add      r3, r6, r0
	addi     r0, r3, -1
	slwi     r0, r0, 2
	lfsx     f1, r5, r0
	b        lbl_80068590

lbl_80068578:
	add      r4, r4, r0
	lwz      r3, 0xc(r3)
	lhz      r0, 2(r4)
	add      r0, r5, r0
	slwi     r0, r0, 2
	lfsx     f1, r3, r0

lbl_80068590:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80068598
 * Size:	000084
 * getWeight__16J3DAnmClusterKeyCFUs
 */
float J3DAnmClusterKey::getWeight(unsigned short p1) const
{
	switch (_10[p1]._00) {
	case 0:
		return 1.0f;
	case 1:
		return _0C[_10[p1]._02];
	default:
		return J3DGetKeyFrameInterpolation<float>(m_fTime, &_10[p1], &_0C[_10[p1]._02]);
	}
}

/*
 * --INFO--
 * Address:	8006861C
 * Size:	000178
 */
void J3DAnmVtxColorFull::getColor(unsigned char, unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,22,29
	  lfs       f1, 0x8(r3)
	  add       r4, r3, r0
	  lfs       f0, -0x7944(r2)
	  lwz       r4, 0x18(r4)
	  rlwinm    r0,r5,4,12,27
	  fcmpo     cr0, f1, f0
	  stwu      r1, -0x10(r1)
	  add       r4, r4, r0
	  bge-      .loc_0x6C
	  lwz       r5, 0x20(r3)
	  lhz       r0, 0x2(r4)
	  lwz       r7, 0x24(r3)
	  lbzx      r0, r5, r0
	  lwz       r5, 0x28(r3)
	  stb       r0, 0x0(r6)
	  lwz       r3, 0x2C(r3)
	  lhz       r0, 0x6(r4)
	  lbzx      r0, r7, r0
	  stb       r0, 0x1(r6)
	  lhz       r0, 0xA(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x2(r6)
	  lhz       r0, 0xE(r4)
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)
	  b         .loc_0x170

	.loc_0x6C:
	  lfs       f0, -0x7930(r2)
	  lhz       r8, 0x0(r4)
	  fadds     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  cmpw      r0, r8
	  blt-      .loc_0xA8
	  lwz       r7, 0x20(r3)
	  lhz       r5, 0x2(r4)
	  add       r5, r7, r5
	  add       r5, r5, r8
	  lbz       r5, -0x1(r5)
	  stb       r5, 0x0(r6)
	  b         .loc_0xBC

	.loc_0xA8:
	  lhz       r5, 0x2(r4)
	  lwz       r7, 0x20(r3)
	  add       r5, r5, r0
	  lbzx      r5, r7, r5
	  stb       r5, 0x0(r6)

	.loc_0xBC:
	  lhz       r8, 0x4(r4)
	  cmpw      r0, r8
	  blt-      .loc_0xE4
	  lwz       r7, 0x24(r3)
	  lhz       r5, 0x6(r4)
	  add       r5, r7, r5
	  add       r5, r5, r8
	  lbz       r5, -0x1(r5)
	  stb       r5, 0x1(r6)
	  b         .loc_0xF8

	.loc_0xE4:
	  lhz       r5, 0x6(r4)
	  lwz       r7, 0x24(r3)
	  add       r5, r5, r0
	  lbzx      r5, r7, r5
	  stb       r5, 0x1(r6)

	.loc_0xF8:
	  lhz       r8, 0x8(r4)
	  cmpw      r0, r8
	  blt-      .loc_0x120
	  lwz       r7, 0x28(r3)
	  lhz       r5, 0xA(r4)
	  add       r5, r7, r5
	  add       r5, r5, r8
	  lbz       r5, -0x1(r5)
	  stb       r5, 0x2(r6)
	  b         .loc_0x134

	.loc_0x120:
	  lhz       r5, 0xA(r4)
	  lwz       r7, 0x28(r3)
	  add       r5, r5, r0
	  lbzx      r5, r7, r5
	  stb       r5, 0x2(r6)

	.loc_0x134:
	  lhz       r5, 0xC(r4)
	  cmpw      r0, r5
	  blt-      .loc_0x15C
	  lwz       r3, 0x2C(r3)
	  lhz       r0, 0xE(r4)
	  add       r0, r3, r0
	  add       r3, r0, r5
	  lbz       r0, -0x1(r3)
	  stb       r0, 0x3(r6)
	  b         .loc_0x170

	.loc_0x15C:
	  lhz       r4, 0xE(r4)
	  lwz       r3, 0x2C(r3)
	  add       r0, r4, r0
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)

	.loc_0x170:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80068794
 * Size:	0002F4
 */
void J3DAnmVtxColorKey::getColor(unsigned char, unsigned short, _GXColor*) const
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r5, 0x10
	mr       r29, r3
	rlwinm   r3, r4, 2, 0x16, 0x1d
	mr       r30, r6
	add      r3, r29, r3
	mulli    r0, r0, 0x18
	lwz      r3, 0x18(r3)
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_800687FC
	bge      lbl_80068814
	cmpwi    r0, 0
	bge      lbl_800687F0
	b        lbl_80068814

lbl_800687F0:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_800687FC:
	lhz      r0, 2(r31)
	lwz      r3, 0x20(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_80068814:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x20(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068850
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_80068850:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068870
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)
	b        lbl_80068878

lbl_80068870:
	li       r0, 0xff
	stb      r0, 0(r30)

lbl_80068878:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_800688A0
	bge      lbl_800688B8
	cmpwi    r0, 0
	bge      lbl_80068894
	b        lbl_800688B8

lbl_80068894:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_800688A0:
	lhz      r0, 8(r31)
	lwz      r3, 0x24(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_800688B8:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x24(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_800688F4
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_800688F4:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068914
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)
	b        lbl_8006891C

lbl_80068914:
	li       r0, 0xff
	stb      r0, 1(r30)

lbl_8006891C:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_80068944
	bge      lbl_8006895C
	cmpwi    r0, 0
	bge      lbl_80068938
	b        lbl_8006895C

lbl_80068938:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_80068944:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x28(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_8006895C:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x28(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068998
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_80068998:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_800689B8
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)
	b        lbl_800689C0

lbl_800689B8:
	li       r0, 0xff
	stb      r0, 2(r30)

lbl_800689C0:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_800689E8
	bge      lbl_80068A00
	cmpwi    r0, 0
	bge      lbl_800689DC
	b        lbl_80068A00

lbl_800689DC:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_800689E8:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x2c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_80068A00:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x2c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068A3C
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_80068A3C:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80068A5C
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)
	b        lbl_80068A64

lbl_80068A5C:
	li       r0, 0xff
	stb      r0, 3(r30)

lbl_80068A64:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80068A88
 * Size:	0000A8
 */
void J3DAnmColor::searchUpdateMaterialID(J3DModelData* data)
{
	for (u16 i = 0; i < _14; i++) {
		JUTNameTab* matNameTable = data->m_materialTable._0C;
		int index                = matNameTable->getIndex(m_nameTab.getName(i));
		if (index != -1) {
			_18[i] = index;
		} else {
			_18[i] = 0xFFFF;
		}
	}
}

/*
 * --INFO--
 * Address:	80068B30
 * Size:	000170
 */
void J3DAnmColorFull::getColor(unsigned short, _GXColor*) const
{
	/*
	lfs      f1, 8(r3)
	rlwinm   r0, r4, 4, 0xc, 0x1b
	lfs      f0, lbl_80516A1C@sda21(r2)
	lwz      r4, 0x3c(r3)
	fcmpo    cr0, f1, f0
	stwu     r1, -0x10(r1)
	add      r4, r4, r0
	bge      lbl_80068B94
	lwz      r6, 0x2c(r3)
	lhz      r0, 2(r4)
	lwz      r7, 0x30(r3)
	lbzx     r0, r6, r0
	lwz      r6, 0x34(r3)
	stb      r0, 0(r5)
	lwz      r3, 0x38(r3)
	lhz      r0, 6(r4)
	lbzx     r0, r7, r0
	stb      r0, 1(r5)
	lhz      r0, 0xa(r4)
	lbzx     r0, r6, r0
	stb      r0, 2(r5)
	lhz      r0, 0xe(r4)
	lbzx     r0, r3, r0
	stb      r0, 3(r5)
	b        lbl_80068C98

lbl_80068B94:
	lfs      f0, lbl_80516A30@sda21(r2)
	lhz      r8, 0(r4)
	fadds    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	cmpw     r0, r8
	blt      lbl_80068BD0
	lwz      r7, 0x2c(r3)
	lhz      r6, 2(r4)
	add      r6, r7, r6
	add      r6, r6, r8
	lbz      r6, -1(r6)
	stb      r6, 0(r5)
	b        lbl_80068BE4

lbl_80068BD0:
	lhz      r6, 2(r4)
	lwz      r7, 0x2c(r3)
	add      r6, r6, r0
	lbzx     r6, r7, r6
	stb      r6, 0(r5)

lbl_80068BE4:
	lhz      r8, 4(r4)
	cmpw     r0, r8
	blt      lbl_80068C0C
	lwz      r7, 0x30(r3)
	lhz      r6, 6(r4)
	add      r6, r7, r6
	add      r6, r6, r8
	lbz      r6, -1(r6)
	stb      r6, 1(r5)
	b        lbl_80068C20

lbl_80068C0C:
	lhz      r6, 6(r4)
	lwz      r7, 0x30(r3)
	add      r6, r6, r0
	lbzx     r6, r7, r6
	stb      r6, 1(r5)

lbl_80068C20:
	lhz      r8, 8(r4)
	cmpw     r0, r8
	blt      lbl_80068C48
	lwz      r7, 0x34(r3)
	lhz      r6, 0xa(r4)
	add      r6, r7, r6
	add      r6, r6, r8
	lbz      r6, -1(r6)
	stb      r6, 2(r5)
	b        lbl_80068C5C

lbl_80068C48:
	lhz      r6, 0xa(r4)
	lwz      r7, 0x34(r3)
	add      r6, r6, r0
	lbzx     r6, r7, r6
	stb      r6, 2(r5)

lbl_80068C5C:
	lhz      r6, 0xc(r4)
	cmpw     r0, r6
	blt      lbl_80068C84
	lwz      r3, 0x38(r3)
	lhz      r0, 0xe(r4)
	add      r0, r3, r0
	add      r3, r0, r6
	lbz      r0, -1(r3)
	stb      r0, 3(r5)
	b        lbl_80068C98

lbl_80068C84:
	lhz      r4, 0xe(r4)
	lwz      r3, 0x38(r3)
	add      r0, r4, r0
	lbzx     r0, r3, r0
	stb      r0, 3(r5)

lbl_80068C98:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80068CA0
 * Size:	0002CC
 */
void J3DAnmColorKey::getColor(unsigned short, _GXColor*) const
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r4, 0x10
	mr       r29, r3
	mulli    r0, r0, 0x18
	lwz      r3, 0x3c(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_80068D00
	bge      lbl_80068D18
	cmpwi    r0, 0
	bge      lbl_80068CF4
	b        lbl_80068D18

lbl_80068CF4:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D00:
	lhz      r0, 2(r31)
	lwz      r3, 0x2c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D18:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x2c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068D50
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D50:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068D68
	li       r0, 0xff
	stb      r0, 0(r30)
	b        lbl_80068D74

lbl_80068D68:
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)

lbl_80068D74:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_80068D9C
	bge      lbl_80068DB4
	cmpwi    r0, 0
	bge      lbl_80068D90
	b        lbl_80068DB4

lbl_80068D90:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068D9C:
	lhz      r0, 8(r31)
	lwz      r3, 0x30(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068DB4:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x30(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068DEC
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068DEC:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068E04
	li       r0, 0xff
	stb      r0, 1(r30)
	b        lbl_80068E10

lbl_80068E04:
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)

lbl_80068E10:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_80068E38
	bge      lbl_80068E50
	cmpwi    r0, 0
	bge      lbl_80068E2C
	b        lbl_80068E50

lbl_80068E2C:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068E38:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x34(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068E50:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x34(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068E88
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068E88:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068EA0
	li       r0, 0xff
	stb      r0, 2(r30)
	b        lbl_80068EAC

lbl_80068EA0:
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)

lbl_80068EAC:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_80068ED4
	bge      lbl_80068EEC
	cmpwi    r0, 0
	bge      lbl_80068EC8
	b        lbl_80068EEC

lbl_80068EC8:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068ED4:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x38(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068EEC:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x38(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80068F24
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068F24:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80068F3C
	li       r0, 0xff
	stb      r0, 3(r30)
	b        lbl_80068F48

lbl_80068F3C:
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)

lbl_80068F48:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80068F6C
 * Size:	0000B4
 */
void J3DAnmTexPattern::getTexNo(unsigned short, unsigned short*) const
{
	/*
	lfs      f2, 8(r3)
	rlwinm   r4, r4, 3, 0xd, 0x1c
	lfs      f0, lbl_80516A1C@sda21(r2)
	stwu     r1, -0x10(r1)
	lwz      r6, 0x10(r3)
	fcmpo    cr0, f2, f0
	lhzx     r7, r6, r4
	bge      lbl_80068FA8
	add      r4, r6, r4
	lwz      r3, 0xc(r3)
	lhz      r0, 2(r4)
	slwi     r0, r0, 1
	lhzx     r0, r3, r0
	sth      r0, 0(r5)
	b        lbl_80069018

lbl_80068FA8:
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f1, lbl_80516A38@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80068FF0
	add      r4, r6, r4
	lwz      r6, 0xc(r3)
	lhz      r0, 2(r4)
	add      r3, r7, r0
	addi     r0, r3, -1
	slwi     r0, r0, 1
	lhzx     r0, r6, r0
	sth      r0, 0(r5)
	b        lbl_80069018

lbl_80068FF0:
	fctiwz   f0, f2
	add      r4, r6, r4
	lhz      r0, 2(r4)
	lwz      r4, 0xc(r3)
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	add      r0, r3, r0
	slwi     r0, r0, 1
	lhzx     r0, r4, r0
	sth      r0, 0(r5)

lbl_80069018:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80069020
 * Size:	000124
 */
void J3DAnmTextureSRTKey::searchUpdateMaterialID(J3DModelData*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, 0x55555556@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4
	li       r28, 0
	addi     r29, r5, 0x55555556@l
	b        lbl_80069094

lbl_80069048:
	lwz      r27, 0x64(r31)
	mr       r4, r28
	addi     r3, r30, 0x30
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	mr       r3, r27
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_8006907C
	lwz      r4, 0x2c(r30)
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_80069090

lbl_8006907C:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x2c(r30)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_80069090:
	addi     r28, r28, 1

lbl_80069094:
	lhz      r0, 0x14(r30)
	clrlwi   r4, r28, 0x10
	mulhw    r3, r29, r0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	blt      lbl_80069048
	lis      r3, 0x55555556@ha
	li       r28, 0
	addi     r29, r3, 0x55555556@l
	b        lbl_80069110

lbl_800690C4:
	lwz      r27, 0x64(r31)
	mr       r4, r28
	addi     r3, r30, 0x64
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	mr       r3, r27
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_800690F8
	lwz      r4, 0x60(r30)
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_8006910C

lbl_800690F8:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x60(r30)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_8006910C:
	addi     r28, r28, 1

lbl_80069110:
	lhz      r0, 0x4a(r30)
	clrlwi   r4, r28, 0x10
	mulhw    r3, r29, r0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	blt      lbl_800690C4
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80069144
 * Size:	0002CC
 */
void J3DAnmTevRegKey::getTevColorReg(unsigned short, _GXColorS10*) const
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r4, 0x10
	mr       r29, r3
	mulli    r0, r0, 0x1c
	lwz      r3, 0x48(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_800691A4
	bge      lbl_800691BC
	cmpwi    r0, 0
	bge      lbl_80069198
	b        lbl_800691BC

lbl_80069198:
	li       r0, 0
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_800691A4:
	lhz      r0, 2(r31)
	lwz      r3, 0x50(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_800691BC:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x50(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800691F4
	li       r0, -1024
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_800691F4:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8006920C
	li       r0, 0x3ff
	sth      r0, 0(r30)
	b        lbl_80069218

lbl_8006920C:
	psq_st   f31, 20(r1), 1, qr5
	lha      r0, 0x14(r1)
	sth      r0, 0(r30)

lbl_80069218:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_80069240
	bge      lbl_80069258
	cmpwi    r0, 0
	bge      lbl_80069234
	b        lbl_80069258

lbl_80069234:
	li       r0, 0
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_80069240:
	lhz      r0, 8(r31)
	lwz      r3, 0x54(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_80069258:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x54(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80069290
	li       r0, -1024
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_80069290:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800692A8
	li       r0, 0x3ff
	sth      r0, 2(r30)
	b        lbl_800692B4

lbl_800692A8:
	psq_st   f31, 16(r1), 1, qr5
	lha      r0, 0x10(r1)
	sth      r0, 2(r30)

lbl_800692B4:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_800692DC
	bge      lbl_800692F4
	cmpwi    r0, 0
	bge      lbl_800692D0
	b        lbl_800692F4

lbl_800692D0:
	li       r0, 0
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_800692DC:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x58(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_800692F4:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x58(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8006932C
	li       r0, -1024
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_8006932C:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80069344
	li       r0, 0x3ff
	sth      r0, 4(r30)
	b        lbl_80069350

lbl_80069344:
	psq_st   f31, 12(r1), 1, qr5
	lha      r0, 0xc(r1)
	sth      r0, 4(r30)

lbl_80069350:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_80069378
	bge      lbl_80069390
	cmpwi    r0, 0
	bge      lbl_8006936C
	b        lbl_80069390

lbl_8006936C:
	li       r0, 0
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_80069378:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x5c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_80069390:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x5c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A40@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800693C8
	li       r0, -1024
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_800693C8:
	lfs      f0, lbl_80516A44@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800693E0
	li       r0, 0x3ff
	sth      r0, 6(r30)
	b        lbl_800693EC

lbl_800693E0:
	psq_st   f31, 8(r1), 1, qr5
	lha      r0, 8(r1)
	sth      r0, 6(r30)

lbl_800693EC:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80069410
 * Size:	0002CC
 */
void J3DAnmTevRegKey::getTevKonstReg(unsigned short, _GXColor*) const
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r4, 0x10
	mr       r29, r3
	mulli    r0, r0, 0x1c
	lwz      r3, 0x4c(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_80069470
	bge      lbl_80069488
	cmpwi    r0, 0
	bge      lbl_80069464
	b        lbl_80069488

lbl_80069464:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_80069470:
	lhz      r0, 2(r31)
	lwz      r3, 0x60(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_80069488:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x60(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800694C0
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_800694C0:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800694D8
	li       r0, 0xff
	stb      r0, 0(r30)
	b        lbl_800694E4

lbl_800694D8:
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)

lbl_800694E4:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_8006950C
	bge      lbl_80069524
	cmpwi    r0, 0
	bge      lbl_80069500
	b        lbl_80069524

lbl_80069500:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_8006950C:
	lhz      r0, 8(r31)
	lwz      r3, 0x64(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_80069524:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x64(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8006955C
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_8006955C:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80069574
	li       r0, 0xff
	stb      r0, 1(r30)
	b        lbl_80069580

lbl_80069574:
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)

lbl_80069580:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_800695A8
	bge      lbl_800695C0
	cmpwi    r0, 0
	bge      lbl_8006959C
	b        lbl_800695C0

lbl_8006959C:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_800695A8:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x68(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_800695C0:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x68(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_800695F8
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_800695F8:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80069610
	li       r0, 0xff
	stb      r0, 2(r30)
	b        lbl_8006961C

lbl_80069610:
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)

lbl_8006961C:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_80069644
	bge      lbl_8006965C
	cmpwi    r0, 0
	bge      lbl_80069638
	b        lbl_8006965C

lbl_80069638:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_80069644:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x6c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_8006965C:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x6c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516A1C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80069694
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_80069694:
	lfs      f0, lbl_80516A34@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_800696AC
	li       r0, 0xff
	stb      r0, 3(r30)
	b        lbl_800696B8

lbl_800696AC:
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)

lbl_800696B8:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800696DC
 * Size:	00010C
 * searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData
 */
void J3DAnmTevRegKey::searchUpdateMaterialID(J3DModelData* data)
{
	u16 i;
	for (i = 0; i < m_countTevColorAnm; i++) {
		JUTNameTab* nameTable = data->m_materialTable._0C;
		int index             = nameTable->getIndex(_24.getName(i));
		if (index != -1) {
			_20[i] = index;
		} else {
			_20[i] = 0xFFFF;
		}
	}
	for (i = 0; i < m_countTevKColorAnm; i++) {
		JUTNameTab* nameTable = data->m_materialTable._0C;
		int index             = nameTable->getIndex(_38.getName(i));
		if (index != -1) {
			_34[i] = index;
		} else {
			_34[i] = 0xFFFF;
		}
	}
}

/*
 * --INFO--
 * Address:	800697E8
 * Size:	000084
 * __dt__14J3DAnmColorKeyFv
 */
// J3DAnmColorKey::~J3DAnmColorKey() { }

/*
 * --INFO--
 * Address:	8006986C
 * Size:	000008
 */
// J3DAnmKind J3DAnmColorKey::getKind() const { return J3DAnmKind_ColorKey; }

/*
 * --INFO--
 * Address:	80069874
 * Size:	000048
 * __dt__10J3DAnmBaseFv
 */
// J3DAnmBase::~J3DAnmBase() { }

/*
 * --INFO--
 * Address:	800698BC
 * Size:	000074
 * __dt__11J3DAnmColorFv
 */
// J3DAnmColor::~J3DAnmColor() { }

/*
 * --INFO--
 * Address:	80069930
 * Size:	000008
 */
// J3DAnmKind J3DAnmColor::getKind() const { return J3DAnmKind_Color; }

/*
 * --INFO--
 * Address:	80069938
 * Size:	000004
 */
// void J3DAnmColor::getColor(unsigned short, _GXColor*) const { }

/*
 * --INFO--
 * Address:	8006993C
 * Size:	000084
 * __dt__15J3DAnmColorFullFv
 */
// J3DAnmColorFull::~J3DAnmColorFull() { }

/*
 * --INFO--
 * Address:	800699C0
 * Size:	000008
 */
// J3DAnmKind J3DAnmColorFull::getKind() const { return J3DAnmKind_ColorFull; }

/*
 * --INFO--
 * Address:	800699C8
 * Size:	00006C
 * __dt__17J3DAnmVtxColorKeyFv
 */
// J3DAnmVtxColorKey::~J3DAnmVtxColorKey() { }

/*
 * --INFO--
 * Address:	80069A34
 * Size:	000008
 */
// J3DAnmKind J3DAnmVtxColorKey::getKind() const { return J3DAnmKind_VtxColorKey; }

/*
 * --INFO--
 * Address:	80069A3C
 * Size:	00005C
 * __dt__14J3DAnmVtxColorFv
 */
// J3DAnmVtxColor::~J3DAnmVtxColor() { }

/*
 * --INFO--
 * Address:	80069A98
 * Size:	000008
 */
// J3DAnmKind J3DAnmVtxColor::getKind() const { return J3DAnmKind_VtxColor; }

/*
 * --INFO--
 * Address:	80069AA0
 * Size:	000004
 */
// void J3DAnmVtxColor::getColor(unsigned char, unsigned short, _GXColor*) const { }

/*
 * --INFO--
 * Address:	80069AA4
 * Size:	00006C
 * __dt__18J3DAnmVtxColorFullFv
 */
// J3DAnmVtxColorFull::~J3DAnmVtxColorFull() { }

/*
 * --INFO--
 * Address:	80069B10
 * Size:	000008
 */
// J3DAnmKind J3DAnmVtxColorFull::getKind() const { return J3DAnmKind_VtxColorFull; }

/*
 * --INFO--
 * Address:	80069B18
 * Size:	00006C
 * __dt__16J3DAnmClusterKeyFv
 */
// J3DAnmClusterKey::~J3DAnmClusterKey() { }

/*
 * --INFO--
 * Address:	80069B84
 * Size:	000008
 */
// J3DAnmKind J3DAnmClusterKey::getKind() const { return J3DAnmKind_ClusterKey; }

/*
 * --INFO--
 * Address:	80069B8C
 * Size:	00005C
 * __dt__13J3DAnmClusterFv
 */
// J3DAnmCluster::~J3DAnmCluster() { }

/*
 * --INFO--
 * Address:	80069BE8
 * Size:	000008
 */
// J3DAnmKind J3DAnmCluster::getKind() const { return J3DAnmKind_Cluster; }

/*
 * --INFO--
 * Address:	80069BF0
 * Size:	000008
 */
float J3DAnmCluster::getWeight(unsigned short) const
{
	/*
	lfs      f1, lbl_80516A18@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80069BF8
 * Size:	00006C
 * __dt__17J3DAnmClusterFullFv
 */
// J3DAnmClusterFull::~J3DAnmClusterFull() { }

/*
 * --INFO--
 * Address:	80069C64
 * Size:	000008
 */
// J3DAnmKind J3DAnmClusterFull::getKind() const { return J3DAnmKind_ClusterFull; }

/*
 * --INFO--
 * Address:	80069C6C
 * Size:	00006C
 * __dt__19J3DAnmTransformFullFv
 */
// J3DAnmTransformFull::~J3DAnmTransformFull() { }

/*
 * --INFO--
 * Address:	80069CD8
 * Size:	000008
 */
// J3DAnmKind J3DAnmTransformFull::getKind() const { return J3DAnmKind_TransformFull; }

/*
 * --INFO--
 * Address:	80069CE0
 * Size:	00005C
 * __dt__15J3DAnmTransformFv
 */
// J3DAnmTransform::~J3DAnmTransform() { }

/*
 * --INFO--
 * Address:	80069D3C
 * Size:	000008
 */
// J3DAnmKind J3DAnmTransform::getKind() const { return J3DAnmKind_Transform; }

/*
 * --INFO--
 * Address:	80069D44
 * Size:	000234
 * J3DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs
 */
// void J3DGetKeyFrameInterpolation<short>(float, J3DAnmKeyTableBase*, short*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	lis      r5, 0x4330
// 	lfd      f2, lbl_80516A28@sda21(r2)
// 	lha      r0, 0(r4)
// 	stw      r5, 8(r1)
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f0, f0, f2
// 	fcmpo    cr0, f1, f0
// 	bge      lbl_80069D8C
// 	lha      r0, 2(r4)
// 	stw      r5, 8(r1)
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f1, f0, f2
// 	b        lbl_80069F70

// lbl_80069D8C:
// 	lhz      r0, 4(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_80069E88
// 	lhz      r6, 0(r3)
// 	stw      r5, 8(r1)
// 	addi     r0, r6, -1
// 	mulli    r3, r0, 6
// 	lhax     r0, r4, r3
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f0, f0, f2
// 	fcmpo    cr0, f0, f1
// 	cror     2, 0, 2
// 	bne      lbl_80069E2C
// 	add      r3, r4, r3
// 	stw      r5, 8(r1)
// 	lha      r0, 2(r3)
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f1, f0, f2
// 	b        lbl_80069F70
// 	b        lbl_80069E2C

// lbl_80069DEC:
// 	srwi     r7, r6, 1
// 	stw      r5, 8(r1)
// 	mulli    r0, r7, 3
// 	slwi     r3, r0, 1
// 	lhax     r0, r4, r3
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f0, f0, f2
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_80069E28
// 	add      r4, r4, r3
// 	subf     r6, r7, r6
// 	b        lbl_80069E2C

// lbl_80069E28:
// 	mr       r6, r7

// lbl_80069E2C:
// 	cmplwi   r6, 1
// 	bgt      lbl_80069DEC
// 	psq_l    f2, 0(r4), 1, qr5
// 	psq_l    f0, 6(r4), 1, qr5
// 	psq_l    f7, 2(r4), 1, qr5
// 	fsubs    f5, f0, f2
// 	psq_l    f6, 8(r4), 1, qr5
// 	fsubs    f3, f1, f2
// 	psq_l    f0, 10(r4), 1, qr5
// 	fsubs    f4, f6, f7
// 	fdivs    f3, f3, f5
// 	psq_l    f1, 4(r4), 1, qr5
// 	fmadds   f0, f0, f5, f7
// 	fnmsubs  f4, f5, f1, f4
// 	fmuls    f2, f3, f3
// 	fsubs    f0, f0, f6
// 	fsubs    f0, f0, f4
// 	fmuls    f0, f2, f0
// 	fmadds   f1, f5, f1, f0
// 	fmadds   f1, f1, f3, f7
// 	fmadds   f1, f4, f2, f1
// 	fsubs    f1, f1, f0
// 	b        lbl_80069F70

// lbl_80069E88:
// 	lhz      r6, 0(r3)
// 	stw      r5, 8(r1)
// 	addi     r0, r6, -1
// 	slwi     r3, r0, 3
// 	lhax     r0, r4, r3
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f0, f0, f2
// 	fcmpo    cr0, f0, f1
// 	cror     2, 0, 2
// 	bne      lbl_80069F18
// 	add      r3, r4, r3
// 	stw      r5, 8(r1)
// 	lha      r0, 2(r3)
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f1, f0, f2
// 	b        lbl_80069F70
// 	b        lbl_80069F18

// lbl_80069EDC:
// 	rlwinm   r3, r6, 2, 0, 0x1c
// 	stw      r5, 8(r1)
// 	lhax     r0, r4, r3
// 	srwi     r7, r6, 1
// 	xoris    r0, r0, 0x8000
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsubs    f0, f0, f2
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_80069F14
// 	add      r4, r4, r3
// 	subf     r6, r7, r6
// 	b        lbl_80069F18

// lbl_80069F14:
// 	mr       r6, r7

// lbl_80069F18:
// 	cmplwi   r6, 1
// 	bgt      lbl_80069EDC
// 	psq_l    f2, 0(r4), 1, qr5
// 	psq_l    f0, 8(r4), 1, qr5
// 	psq_l    f7, 2(r4), 1, qr5
// 	fsubs    f5, f0, f2
// 	psq_l    f6, 10(r4), 1, qr5
// 	fsubs    f3, f1, f2
// 	psq_l    f0, 12(r4), 1, qr5
// 	fsubs    f4, f6, f7
// 	fdivs    f3, f3, f5
// 	psq_l    f1, 6(r4), 1, qr5
// 	fmadds   f0, f0, f5, f7
// 	fnmsubs  f4, f5, f1, f4
// 	fmuls    f2, f3, f3
// 	fsubs    f0, f0, f6
// 	fsubs    f0, f0, f4
// 	fmuls    f0, f2, f0
// 	fmadds   f1, f5, f1, f0
// 	fmadds   f1, f1, f3, f7
// 	fmadds   f1, f4, f2, f1
// 	fsubs    f1, f1, f0

// lbl_80069F70:
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80069F78
 * Size:	00017C
 * J3DGetKeyFrameInterpolation<f>__FfP18J3DAnmKeyTableBasePf
 */
// void J3DGetKeyFrameInterpolation<float>(float, J3DAnmKeyTableBase*, float*)
// {
// 	/*
// 	lfs      f0, 0(r4)
// 	fcmpo    cr0, f1, f0
// 	bge      lbl_80069F8C
// 	lfs      f1, 4(r4)
// 	blr

// lbl_80069F8C:
// 	lhz      r0, 4(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_8006A048
// 	lhz      r3, 0(r3)
// 	addi     r0, r3, -1
// 	mulli    r0, r0, 0xc
// 	lfsx     f0, r4, r0
// 	fcmpo    cr0, f0, f1
// 	cror     2, 0, 2
// 	bne      lbl_80069FF0
// 	add      r3, r4, r0
// 	lfs      f1, 4(r3)
// 	blr
// 	b        lbl_80069FF0

// lbl_80069FC4:
// 	srwi     r5, r3, 1
// 	mulli    r0, r5, 3
// 	slwi     r0, r0, 2
// 	lfsx     f0, r4, r0
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_80069FEC
// 	add      r4, r4, r0
// 	subf     r3, r5, r3
// 	b        lbl_80069FF0

// lbl_80069FEC:
// 	mr       r3, r5

// lbl_80069FF0:
// 	cmplwi   r3, 1
// 	bgt      lbl_80069FC4
// 	lfs      f0, 0(r4)
// 	lfs      f2, 0xc(r4)
// 	fsubs    f5, f1, f0
// 	lfs      f6, 4(r4)
// 	fsubs    f4, f2, f0
// 	lfs      f2, 0x10(r4)
// 	lfs      f7, 8(r4)
// 	lfs      f8, 0x14(r4)
// 	fdivs    f3, f5, f4
// 	fmuls    f0, f3, f3
// 	fsubs    f4, f6, f2
// 	fadds    f1, f3, f3
// 	fsubs    f2, f0, f3
// 	fmsubs   f0, f1, f2, f0
// 	fmadds   f1, f7, f2, f7
// 	fmadds   f0, f0, f4, f6
// 	fmadds   f1, f8, f2, f1
// 	fmsubs   f1, f3, f7, f1
// 	fnmsubs  f1, f5, f1, f0
// 	blr

// lbl_8006A048:
// 	lhz      r3, 0(r3)
// 	addi     r0, r3, -1
// 	slwi     r0, r0, 4
// 	lfsx     f0, r4, r0
// 	fcmpo    cr0, f0, f1
// 	cror     2, 0, 2
// 	bne      lbl_8006A09C
// 	add      r3, r4, r0
// 	lfs      f1, 4(r3)
// 	blr
// 	b        lbl_8006A09C

// lbl_8006A074:
// 	rlwinm   r0, r3, 3, 0, 0x1b
// 	srwi     r5, r3, 1
// 	lfsx     f0, r4, r0
// 	fcmpo    cr0, f1, f0
// 	cror     2, 1, 2
// 	bne      lbl_8006A098
// 	add      r4, r4, r0
// 	subf     r3, r5, r3
// 	b        lbl_8006A09C

// lbl_8006A098:
// 	mr       r3, r5

// lbl_8006A09C:
// 	cmplwi   r3, 1
// 	bgt      lbl_8006A074
// 	lfs      f0, 0(r4)
// 	lfs      f2, 0x10(r4)
// 	fsubs    f5, f1, f0
// 	lfs      f6, 4(r4)
// 	fsubs    f4, f2, f0
// 	lfs      f2, 0x14(r4)
// 	lfs      f7, 0xc(r4)
// 	lfs      f8, 0x18(r4)
// 	fdivs    f3, f5, f4
// 	fmuls    f0, f3, f3
// 	fsubs    f4, f6, f2
// 	fadds    f1, f3, f3
// 	fsubs    f2, f0, f3
// 	fmsubs   f0, f1, f2, f0
// 	fmadds   f1, f7, f2, f7
// 	fmadds   f0, f0, f4, f6
// 	fmadds   f1, f8, f2, f1
// 	fmsubs   f1, f3, f7, f1
// 	fnmsubs  f1, f5, f1, f0
// 	blr
// 	*/
// }
