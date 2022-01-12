#include "JSystem/J2D/J2DAnm.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__15J2DAnmTevRegKey
    __vt__15J2DAnmTevRegKey:
        .4byte 0
        .4byte 0
        .4byte __dt__15J2DAnmTevRegKeyFv
        .4byte searchUpdateMaterialID__15J2DAnmTevRegKeyFP9J2DScreen
    .global __vt__16J2DAnmTexPattern
    __vt__16J2DAnmTexPattern:
        .4byte 0
        .4byte 0
        .4byte __dt__16J2DAnmTexPatternFv
        .4byte searchUpdateMaterialID__16J2DAnmTexPatternFP9J2DScreen
    .global __vt__19J2DAnmTextureSRTKey
    __vt__19J2DAnmTextureSRTKey:
        .4byte 0
        .4byte 0
        .4byte __dt__19J2DAnmTextureSRTKeyFv
        .4byte searchUpdateMaterialID__19J2DAnmTextureSRTKeyFP9J2DScreen
    .global __vt__17J2DAnmVtxColorKey
    __vt__17J2DAnmVtxColorKey:
        .4byte 0
        .4byte 0
        .4byte __dt__17J2DAnmVtxColorKeyFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
        .4byte getColor__17J2DAnmVtxColorKeyCFUcUsP8_GXColor
    .global __vt__18J2DAnmVtxColorFull
    __vt__18J2DAnmVtxColorFull:
        .4byte 0
        .4byte 0
        .4byte __dt__18J2DAnmVtxColorFullFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
        .4byte getColor__18J2DAnmVtxColorFullCFUcUsP8_GXColor
    .global __vt__14J2DAnmColorKey
    __vt__14J2DAnmColorKey:
        .4byte 0
        .4byte 0
        .4byte __dt__14J2DAnmColorKeyFv
        .4byte searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen
        .4byte getColor__14J2DAnmColorKeyCFUsP8_GXColor
    .global __vt__15J2DAnmColorFull
    __vt__15J2DAnmColorFull:
        .4byte 0
        .4byte 0
        .4byte __dt__15J2DAnmColorFullFv
        .4byte searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen
        .4byte getColor__15J2DAnmColorFullCFUsP8_GXColor
    .global __vt__11J2DAnmColor
    __vt__11J2DAnmColor:
        .4byte 0
        .4byte 0
        .4byte __dt__11J2DAnmColorFv
        .4byte searchUpdateMaterialID__11J2DAnmColorFP9J2DScreen
        .4byte getColor__11J2DAnmColorCFUsP8_GXColor
    .global __vt__18J2DAnmTransformKey
    __vt__18J2DAnmTransformKey:
        .4byte 0
        .4byte 0
        .4byte __dt__18J2DAnmTransformKeyFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
        .4byte getTransform__18J2DAnmTransformKeyCFUsP16J3DTransformInfo
        .4byte calcTransform__18J2DAnmTransformKeyCFfUsP16J3DTransformInfo
    .global __vt__19J2DAnmTransformFull
    __vt__19J2DAnmTransformFull:
        .4byte 0
        .4byte 0
        .4byte __dt__19J2DAnmTransformFullFv
        .4byte searchUpdateMaterialID__10J2DAnmBaseFP9J2DScreen
        .4byte getTransform__19J2DAnmTransformFullCFUsP16J3DTransformInfo

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516960
    lbl_80516960:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516968
    lbl_80516968:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516970
    lbl_80516970:
        .float 1.0
    .global lbl_80516974
    lbl_80516974:
        .4byte 0x437F0000
    .global lbl_80516978
    lbl_80516978:
        .4byte 0xC4800000
    .global lbl_8051697C
    lbl_8051697C:
        .4byte 0x447FC000
    .global lbl_80516980
    lbl_80516980:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	8005AF0C
 * Size:	00056C
 */
void J2DAnmTransformFull::getTransform(unsigned short, J3DTransformInfo*) const
{
	/*
	mulli    r0, r4, 3
	lwz      r8, 0x24(r3)
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	clrlwi   r6, r0, 0x10
	stwu     r1, -0x10(r1)
	mulli    r7, r6, 0xc
	fcmpo    cr0, f2, f0
	addi     r0, r6, 2
	addi     r4, r6, 1
	mulli    r6, r4, 0xc
	add      r4, r8, r7
	lhz      r10, 0(r4)
	mulli    r0, r0, 0xc
	add      r6, r8, r6
	add      r7, r8, r0
	bge      lbl_8005AF68
	lhz      r0, 2(r4)
	lwz      r8, 0x10(r3)
	slwi     r0, r0, 2
	lfsx     f0, r8, r0
	stfs     f0, 0(r5)
	b        lbl_8005AFD0

lbl_8005AF68:
	lis      r0, 0x4330
	stw      r10, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005AFAC
	lhz      r0, 2(r4)
	lwz      r9, 0x10(r3)
	add      r8, r10, r0
	addi     r0, r8, -1
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 0(r5)
	b        lbl_8005AFD0

lbl_8005AFAC:
	fctiwz   f0, f2
	lhz      r8, 2(r4)
	lwz      r9, 0x10(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r8, r0
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 0(r5)

lbl_8005AFD0:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r8, 0(r6)
	fcmpo    cr0, f2, f0
	bge      lbl_8005AFFC
	lhz      r0, 2(r6)
	lwz      r8, 0x10(r3)
	slwi     r0, r0, 2
	lfsx     f0, r8, r0
	stfs     f0, 4(r5)
	b        lbl_8005B064

lbl_8005AFFC:
	lis      r0, 0x4330
	stw      r8, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B040
	lhz      r0, 2(r6)
	lwz      r9, 0x10(r3)
	add      r8, r8, r0
	addi     r0, r8, -1
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 4(r5)
	b        lbl_8005B064

lbl_8005B040:
	fctiwz   f0, f2
	lhz      r8, 2(r6)
	lwz      r9, 0x10(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r8, r0
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 4(r5)

lbl_8005B064:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r8, 0(r7)
	fcmpo    cr0, f2, f0
	bge      lbl_8005B090
	lhz      r0, 2(r7)
	lwz      r8, 0x10(r3)
	slwi     r0, r0, 2
	lfsx     f0, r8, r0
	stfs     f0, 8(r5)
	b        lbl_8005B0F8

lbl_8005B090:
	lis      r0, 0x4330
	stw      r8, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B0D4
	lhz      r0, 2(r7)
	lwz      r9, 0x10(r3)
	add      r8, r8, r0
	addi     r0, r8, -1
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 8(r5)
	b        lbl_8005B0F8

lbl_8005B0D4:
	fctiwz   f0, f2
	lhz      r8, 2(r7)
	lwz      r9, 0x10(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r8, r0
	slwi     r0, r0, 2
	lfsx     f0, r9, r0
	stfs     f0, 8(r5)

lbl_8005B0F8:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r8, 4(r4)
	fcmpo    cr0, f2, f0
	bge      lbl_8005B124
	lhz      r0, 6(r4)
	lwz      r8, 0x14(r3)
	slwi     r0, r0, 1
	lhax     r0, r8, r0
	sth      r0, 0xc(r5)
	b        lbl_8005B18C

lbl_8005B124:
	lis      r0, 0x4330
	stw      r8, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B168
	lhz      r0, 6(r4)
	lwz      r9, 0x14(r3)
	add      r8, r8, r0
	addi     r0, r8, -1
	slwi     r0, r0, 1
	lhax     r0, r9, r0
	sth      r0, 0xc(r5)
	b        lbl_8005B18C

lbl_8005B168:
	fctiwz   f0, f2
	lhz      r8, 6(r4)
	lwz      r9, 0x14(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r8, r0
	slwi     r0, r0, 1
	lhax     r0, r9, r0
	sth      r0, 0xc(r5)

lbl_8005B18C:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r8, 4(r6)
	fcmpo    cr0, f2, f0
	bge      lbl_8005B1B8
	lhz      r0, 6(r6)
	lwz      r8, 0x14(r3)
	slwi     r0, r0, 1
	lhax     r0, r8, r0
	sth      r0, 0xe(r5)
	b        lbl_8005B220

lbl_8005B1B8:
	lis      r0, 0x4330
	stw      r8, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B1FC
	lhz      r0, 6(r6)
	lwz      r9, 0x14(r3)
	add      r8, r8, r0
	addi     r0, r8, -1
	slwi     r0, r0, 1
	lhax     r0, r9, r0
	sth      r0, 0xe(r5)
	b        lbl_8005B220

lbl_8005B1FC:
	fctiwz   f0, f2
	lhz      r8, 6(r6)
	lwz      r9, 0x14(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r8, r0
	slwi     r0, r0, 1
	lhax     r0, r9, r0
	sth      r0, 0xe(r5)

lbl_8005B220:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r8, 4(r7)
	fcmpo    cr0, f2, f0
	bge      lbl_8005B24C
	lhz      r0, 6(r7)
	lwz      r8, 0x14(r3)
	slwi     r0, r0, 1
	lhax     r0, r8, r0
	sth      r0, 0x10(r5)
	b        lbl_8005B2B4

lbl_8005B24C:
	lis      r0, 0x4330
	stw      r8, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B290
	lhz      r0, 6(r7)
	lwz      r9, 0x14(r3)
	add      r8, r8, r0
	addi     r0, r8, -1
	slwi     r0, r0, 1
	lhax     r0, r9, r0
	sth      r0, 0x10(r5)
	b        lbl_8005B2B4

lbl_8005B290:
	fctiwz   f0, f2
	lhz      r8, 6(r7)
	lwz      r9, 0x14(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r8, r0
	slwi     r0, r0, 1
	lhax     r0, r9, r0
	sth      r0, 0x10(r5)

lbl_8005B2B4:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r9, 8(r4)
	fcmpo    cr0, f2, f0
	bge      lbl_8005B2E0
	lhz      r0, 0xa(r4)
	lwz      r4, 0x18(r3)
	slwi     r0, r0, 2
	lfsx     f0, r4, r0
	stfs     f0, 0x14(r5)
	b        lbl_8005B348

lbl_8005B2E0:
	lis      r0, 0x4330
	stw      r9, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B324
	lhz      r0, 0xa(r4)
	lwz      r8, 0x18(r3)
	add      r4, r9, r0
	addi     r0, r4, -1
	slwi     r0, r0, 2
	lfsx     f0, r8, r0
	stfs     f0, 0x14(r5)
	b        lbl_8005B348

lbl_8005B324:
	fctiwz   f0, f2
	lhz      r4, 0xa(r4)
	lwz      r8, 0x18(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r4, r0
	slwi     r0, r0, 2
	lfsx     f0, r8, r0
	stfs     f0, 0x14(r5)

lbl_8005B348:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r4, 8(r6)
	fcmpo    cr0, f2, f0
	bge      lbl_8005B374
	lhz      r0, 0xa(r6)
	lwz      r4, 0x18(r3)
	slwi     r0, r0, 2
	lfsx     f0, r4, r0
	stfs     f0, 0x18(r5)
	b        lbl_8005B3DC

lbl_8005B374:
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B3B8
	lhz      r0, 0xa(r6)
	lwz      r6, 0x18(r3)
	add      r4, r4, r0
	addi     r0, r4, -1
	slwi     r0, r0, 2
	lfsx     f0, r6, r0
	stfs     f0, 0x18(r5)
	b        lbl_8005B3DC

lbl_8005B3B8:
	fctiwz   f0, f2
	lhz      r4, 0xa(r6)
	lwz      r6, 0x18(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r4, r0
	slwi     r0, r0, 2
	lfsx     f0, r6, r0
	stfs     f0, 0x18(r5)

lbl_8005B3DC:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r6, 8(r7)
	fcmpo    cr0, f2, f0
	bge      lbl_8005B408
	lhz      r0, 0xa(r7)
	lwz      r3, 0x18(r3)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0
	stfs     f0, 0x1c(r5)
	b        lbl_8005B470

lbl_8005B408:
	lis      r0, 0x4330
	stw      r6, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B44C
	lhz      r0, 0xa(r7)
	lwz      r4, 0x18(r3)
	add      r3, r6, r0
	addi     r0, r3, -1
	slwi     r0, r0, 2
	lfsx     f0, r4, r0
	stfs     f0, 0x1c(r5)
	b        lbl_8005B470

lbl_8005B44C:
	fctiwz   f0, f2
	lhz      r4, 0xa(r7)
	lwz      r3, 0x18(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r4, r0
	slwi     r0, r0, 2
	lfsx     f0, r3, r0
	stfs     f0, 0x1c(r5)

lbl_8005B470:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005B478
 * Size:	000420
 */
void J2DAnmTransformKey::calcTransform(float, unsigned short, J3DTransformInfo*) const
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
	  lwz       r6, 0x28(r3)
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
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x10(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x2410
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
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0x10(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x23B0
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
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x138:
	  lhz       r0, 0x2(r29)
	  lwz       r3, 0x10(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x8(r28)
	  b         .loc_0x170

	.loc_0x150:
	  lhz       r0, 0x2(r29)
	  fmr       f1, f31
	  lwz       r4, 0x10(r27)
	  mr        r3, r29
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x2350
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
	  lwz       r4, 0x14(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x24(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B8:
	  lhz       r0, 0x8(r31)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r31, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x20B4
	  fctiwz    f0, f1
	  lwz       r0, 0x24(r27)
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
	  lwz       r4, 0x14(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x24(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0xE(r28)
	  b         .loc_0x268

	.loc_0x234:
	  lhz       r0, 0x8(r30)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r30, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x2038
	  fctiwz    f0, f1
	  lwz       r0, 0x24(r27)
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
	  lwz       r4, 0x14(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x24(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x10(r28)
	  b         .loc_0x2E4

	.loc_0x2B0:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x14(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1FBC
	  fctiwz    f0, f1
	  lwz       r0, 0x24(r27)
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
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x30C:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x18(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x14(r28)
	  b         .loc_0x344

	.loc_0x324:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x18(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x217C
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
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x36C:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x18(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x18(r28)
	  b         .loc_0x3A4

	.loc_0x384:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x18(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x211C
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
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3CC:
	  lhz       r0, 0xE(r29)
	  lwz       r3, 0x18(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x1C(r28)
	  b         .loc_0x404

	.loc_0x3E4:
	  lhz       r0, 0xE(r29)
	  fmr       f1, f31
	  lwz       r4, 0x18(r27)
	  addi      r3, r29, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x20BC
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
 * Address:	8005B898
 * Size:	0000AC
 */
void J2DAnmColor::searchUpdateMaterialID(J2DScreen*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_8005B928
	lwz      r0, 0x110(r30)
	cmplwi   r0, 0
	beq      lbl_8005B928
	li       r31, 0
	b        lbl_8005B918

lbl_8005B8D0:
	mr       r4, r31
	addi     r3, r29, 0x20
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	lwz      r3, 0x110(r30)
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_8005B900
	lwz      r4, 0x1c(r29)
	rlwinm   r0, r31, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_8005B914

lbl_8005B900:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x1c(r29)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r31, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_8005B914:
	addi     r31, r31, 1

lbl_8005B918:
	lhz      r0, 0x18(r29)
	clrlwi   r3, r31, 0x10
	cmplw    r3, r0
	blt      lbl_8005B8D0

lbl_8005B928:
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
 * Address:	8005B944
 * Size:	000238
 */
void J2DAnmColorFull::getColor(unsigned short, GXColor*) const
{
	/*
	lwz      r6, 0x40(r3)
	rlwinm   r0, r4, 4, 0xc, 0x1b
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	add      r4, r6, r0
	stwu     r1, -0x10(r1)
	fcmpo    cr0, f2, f0
	lhz      r7, 0(r4)
	bge      lbl_8005B97C
	lwz      r6, 0x30(r3)
	lhz      r0, 2(r4)
	lbzx     r0, r6, r0
	stb      r0, 0(r5)
	b        lbl_8005B9DC

lbl_8005B97C:
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005B9BC
	lwz      r6, 0x30(r3)
	lhz      r0, 2(r4)
	add      r0, r6, r0
	add      r6, r0, r7
	lbz      r0, -1(r6)
	stb      r0, 0(r5)
	b        lbl_8005B9DC

lbl_8005B9BC:
	fctiwz   f0, f2
	lhz      r6, 2(r4)
	lwz      r7, 0x30(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r6, r0
	lbzx     r0, r7, r0
	stb      r0, 0(r5)

lbl_8005B9DC:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r7, 4(r4)
	fcmpo    cr0, f2, f0
	bge      lbl_8005BA04
	lwz      r6, 0x34(r3)
	lhz      r0, 6(r4)
	lbzx     r0, r6, r0
	stb      r0, 1(r5)
	b        lbl_8005BA64

lbl_8005BA04:
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005BA44
	lwz      r6, 0x34(r3)
	lhz      r0, 6(r4)
	add      r0, r6, r0
	add      r6, r0, r7
	lbz      r0, -1(r6)
	stb      r0, 1(r5)
	b        lbl_8005BA64

lbl_8005BA44:
	fctiwz   f0, f2
	lhz      r6, 6(r4)
	lwz      r7, 0x34(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r6, r0
	lbzx     r0, r7, r0
	stb      r0, 1(r5)

lbl_8005BA64:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r7, 8(r4)
	fcmpo    cr0, f2, f0
	bge      lbl_8005BA8C
	lwz      r6, 0x38(r3)
	lhz      r0, 0xa(r4)
	lbzx     r0, r6, r0
	stb      r0, 2(r5)
	b        lbl_8005BAEC

lbl_8005BA8C:
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005BACC
	lwz      r6, 0x38(r3)
	lhz      r0, 0xa(r4)
	add      r0, r6, r0
	add      r6, r0, r7
	lbz      r0, -1(r6)
	stb      r0, 2(r5)
	b        lbl_8005BAEC

lbl_8005BACC:
	fctiwz   f0, f2
	lhz      r6, 0xa(r4)
	lwz      r7, 0x38(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r6, r0
	lbzx     r0, r7, r0
	stb      r0, 2(r5)

lbl_8005BAEC:
	lfs      f2, 8(r3)
	lfs      f0, lbl_80516960@sda21(r2)
	lhz      r6, 0xc(r4)
	fcmpo    cr0, f2, f0
	bge      lbl_8005BB14
	lwz      r3, 0x3c(r3)
	lhz      r0, 0xe(r4)
	lbzx     r0, r3, r0
	stb      r0, 3(r5)
	b        lbl_8005BB74

lbl_8005BB14:
	lis      r0, 0x4330
	stw      r6, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005BB54
	lwz      r3, 0x3c(r3)
	lhz      r0, 0xe(r4)
	add      r0, r3, r0
	add      r3, r0, r6
	lbz      r0, -1(r3)
	stb      r0, 3(r5)
	b        lbl_8005BB74

lbl_8005BB54:
	fctiwz   f0, f2
	lhz      r4, 0xe(r4)
	lwz      r3, 0x3c(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r4, r0
	lbzx     r0, r3, r0
	stb      r0, 3(r5)

lbl_8005BB74:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005BB7C
 * Size:	0002CC
 */
void J2DAnmColorKey::getColor(unsigned short, GXColor*) const
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
	lwz      r3, 0x40(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_8005BBDC
	bge      lbl_8005BBF4
	cmpwi    r0, 0
	bge      lbl_8005BBD0
	b        lbl_8005BBF4

lbl_8005BBD0:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_8005BC50

lbl_8005BBDC:
	lhz      r0, 2(r31)
	lwz      r3, 0x30(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_8005BC50

lbl_8005BBF4:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x30(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005BC2C
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_8005BC50

lbl_8005BC2C:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005BC44
	li       r0, 0xff
	stb      r0, 0(r30)
	b        lbl_8005BC50

lbl_8005BC44:
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)

lbl_8005BC50:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_8005BC78
	bge      lbl_8005BC90
	cmpwi    r0, 0
	bge      lbl_8005BC6C
	b        lbl_8005BC90

lbl_8005BC6C:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8005BCEC

lbl_8005BC78:
	lhz      r0, 8(r31)
	lwz      r3, 0x34(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_8005BCEC

lbl_8005BC90:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x34(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005BCC8
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8005BCEC

lbl_8005BCC8:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005BCE0
	li       r0, 0xff
	stb      r0, 1(r30)
	b        lbl_8005BCEC

lbl_8005BCE0:
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)

lbl_8005BCEC:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_8005BD14
	bge      lbl_8005BD2C
	cmpwi    r0, 0
	bge      lbl_8005BD08
	b        lbl_8005BD2C

lbl_8005BD08:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8005BD88

lbl_8005BD14:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x38(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_8005BD88

lbl_8005BD2C:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x38(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005BD64
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8005BD88

lbl_8005BD64:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005BD7C
	li       r0, 0xff
	stb      r0, 2(r30)
	b        lbl_8005BD88

lbl_8005BD7C:
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)

lbl_8005BD88:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_8005BDB0
	bge      lbl_8005BDC8
	cmpwi    r0, 0
	bge      lbl_8005BDA4
	b        lbl_8005BDC8

lbl_8005BDA4:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_8005BE24

lbl_8005BDB0:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x3c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_8005BE24

lbl_8005BDC8:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x3c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005BE00
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_8005BE24

lbl_8005BE00:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005BE18
	li       r0, 0xff
	stb      r0, 3(r30)
	b        lbl_8005BE24

lbl_8005BE18:
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)

lbl_8005BE24:
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
 * Address:	8005BE48
 * Size:	000240
 */
void J2DAnmVtxColorFull::getColor(u8, u16, GXColor*) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,22,29
	  lfs       f2, 0x8(r3)
	  add       r4, r3, r0
	  lfs       f0, -0x7A00(r2)
	  lwz       r4, 0x24(r4)
	  rlwinm    r0,r5,4,12,27
	  stwu      r1, -0x10(r1)
	  fcmpo     cr0, f2, f0
	  add       r4, r4, r0
	  lhz       r7, 0x0(r4)
	  bge-      .loc_0x40
	  lwz       r5, 0x2C(r3)
	  lhz       r0, 0x2(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x0(r6)
	  b         .loc_0xA0

	.loc_0x40:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x80
	  lwz       r5, 0x2C(r3)
	  lhz       r0, 0x2(r4)
	  add       r0, r5, r0
	  add       r5, r0, r7
	  lbz       r0, -0x1(r5)
	  stb       r0, 0x0(r6)
	  b         .loc_0xA0

	.loc_0x80:
	  fctiwz    f0, f2
	  lhz       r5, 0x2(r4)
	  lwz       r7, 0x2C(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r5, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x0(r6)

	.loc_0xA0:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r7, 0x4(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xC8
	  lwz       r5, 0x30(r3)
	  lhz       r0, 0x6(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x1(r6)
	  b         .loc_0x128

	.loc_0xC8:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x108
	  lwz       r5, 0x30(r3)
	  lhz       r0, 0x6(r4)
	  add       r0, r5, r0
	  add       r5, r0, r7
	  lbz       r0, -0x1(r5)
	  stb       r0, 0x1(r6)
	  b         .loc_0x128

	.loc_0x108:
	  fctiwz    f0, f2
	  lhz       r5, 0x6(r4)
	  lwz       r7, 0x30(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r5, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x1(r6)

	.loc_0x128:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r7, 0x8(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x150
	  lwz       r5, 0x34(r3)
	  lhz       r0, 0xA(r4)
	  lbzx      r0, r5, r0
	  stb       r0, 0x2(r6)
	  b         .loc_0x1B0

	.loc_0x150:
	  lis       r0, 0x4330
	  stw       r7, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x190
	  lwz       r5, 0x34(r3)
	  lhz       r0, 0xA(r4)
	  add       r0, r5, r0
	  add       r5, r0, r7
	  lbz       r0, -0x1(r5)
	  stb       r0, 0x2(r6)
	  b         .loc_0x1B0

	.loc_0x190:
	  fctiwz    f0, f2
	  lhz       r5, 0xA(r4)
	  lwz       r7, 0x34(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r5, r0
	  lbzx      r0, r7, r0
	  stb       r0, 0x2(r6)

	.loc_0x1B0:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x7A00(r2)
	  lhz       r5, 0xC(r4)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1D8
	  lwz       r3, 0x38(r3)
	  lhz       r0, 0xE(r4)
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)
	  b         .loc_0x238

	.loc_0x1D8:
	  lis       r0, 0x4330
	  stw       r5, 0xC(r1)
	  lfd       f1, -0x79F8(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x218
	  lwz       r3, 0x38(r3)
	  lhz       r0, 0xE(r4)
	  add       r0, r3, r0
	  add       r3, r0, r5
	  lbz       r0, -0x1(r3)
	  stb       r0, 0x3(r6)
	  b         .loc_0x238

	.loc_0x218:
	  fctiwz    f0, f2
	  lhz       r4, 0xE(r4)
	  lwz       r3, 0x38(r3)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  add       r0, r4, r0
	  lbzx      r0, r3, r0
	  stb       r0, 0x3(r6)

	.loc_0x238:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005C088
 * Size:	0002F4
 */
void J2DAnmVtxColorKey::getColor(u8, u16, GXColor*) const
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
	lwz      r3, 0x24(r3)
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_8005C0F0
	bge      lbl_8005C108
	cmpwi    r0, 0
	bge      lbl_8005C0E4
	b        lbl_8005C108

lbl_8005C0E4:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_8005C16C

lbl_8005C0F0:
	lhz      r0, 2(r31)
	lwz      r3, 0x2c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_8005C16C

lbl_8005C108:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x2c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C144
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_8005C16C

lbl_8005C144:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C164
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)
	b        lbl_8005C16C

lbl_8005C164:
	li       r0, 0xff
	stb      r0, 0(r30)

lbl_8005C16C:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_8005C194
	bge      lbl_8005C1AC
	cmpwi    r0, 0
	bge      lbl_8005C188
	b        lbl_8005C1AC

lbl_8005C188:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8005C210

lbl_8005C194:
	lhz      r0, 8(r31)
	lwz      r3, 0x30(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_8005C210

lbl_8005C1AC:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x30(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C1E8
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8005C210

lbl_8005C1E8:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C208
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)
	b        lbl_8005C210

lbl_8005C208:
	li       r0, 0xff
	stb      r0, 1(r30)

lbl_8005C210:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_8005C238
	bge      lbl_8005C250
	cmpwi    r0, 0
	bge      lbl_8005C22C
	b        lbl_8005C250

lbl_8005C22C:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8005C2B4

lbl_8005C238:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x34(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_8005C2B4

lbl_8005C250:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x34(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C28C
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8005C2B4

lbl_8005C28C:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C2AC
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)
	b        lbl_8005C2B4

lbl_8005C2AC:
	li       r0, 0xff
	stb      r0, 2(r30)

lbl_8005C2B4:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_8005C2DC
	bge      lbl_8005C2F4
	cmpwi    r0, 0
	bge      lbl_8005C2D0
	b        lbl_8005C2F4

lbl_8005C2D0:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_8005C358

lbl_8005C2DC:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x38(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_8005C358

lbl_8005C2F4:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x38(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C330
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_8005C358

lbl_8005C330:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8005C350
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)
	b        lbl_8005C358

lbl_8005C350:
	li       r0, 0xff
	stb      r0, 3(r30)

lbl_8005C358:
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
 * Address:	8005C37C
 * Size:	000268
 */
void J2DAnmTextureSRTKey::calcTransform(float, unsigned short, J3DTextureSRTInfo*) const
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
	  lwz       r6, 0x18(r3)
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
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x78:
	  lhz       r0, 0x2(r31)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x0(r28)
	  b         .loc_0xB0

	.loc_0x90:
	  lhz       r0, 0x2(r31)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  mr        r3, r31
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x150C
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
	  lfs       f0, -0x79F0(r2)
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xD8:
	  lhz       r0, 0x2(r30)
	  lwz       r3, 0x24(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x4(r28)
	  b         .loc_0x110

	.loc_0xF0:
	  lhz       r0, 0x2(r30)
	  fmr       f1, f31
	  lwz       r4, 0x24(r27)
	  mr        r3, r30
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x14AC
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
	  lwz       r4, 0x28(r27)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x10(r27)
	  lhax      r3, r4, r3
	  slw       r0, r3, r0
	  sth       r0, 0x8(r28)
	  b         .loc_0x18C

	.loc_0x158:
	  lhz       r0, 0x8(r29)
	  fmr       f1, f31
	  lwz       r4, 0x28(r27)
	  addi      r3, r29, 0x6
	  rlwinm    r0,r0,1,0,30
	  add       r4, r4, r0
	  bl        0x1210
	  fctiwz    f0, f1
	  lwz       r0, 0x10(r27)
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
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1B4:
	  lhz       r0, 0xE(r31)
	  lwz       r3, 0x2C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0xC(r28)
	  b         .loc_0x1EC

	.loc_0x1CC:
	  lhz       r0, 0xE(r31)
	  fmr       f1, f31
	  lwz       r4, 0x2C(r27)
	  addi      r3, r31, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x13D0
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
	  lfs       f0, -0x7A00(r2)
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x214:
	  lhz       r0, 0xE(r30)
	  lwz       r3, 0x2C(r27)
	  rlwinm    r0,r0,2,0,29
	  lfsx      f0, r3, r0
	  stfs      f0, 0x10(r28)
	  b         .loc_0x24C

	.loc_0x22C:
	  lhz       r0, 0xE(r30)
	  fmr       f1, f31
	  lwz       r4, 0x2C(r27)
	  addi      r3, r30, 0xC
	  rlwinm    r0,r0,2,0,29
	  add       r4, r4, r0
	  bl        0x1370
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
 * Address:	........
 * Size:	000274
 */
void J2DAnmTextureSRTKey::calcPostTransform(float, unsigned short, J3DTextureSRTInfo*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005C5E4
 * Size:	0000CC
 */
void J2DAnmTextureSRTKey::searchUpdateMaterialID(J2DScreen*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r4, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	beq      lbl_8005C690
	lwz      r0, 0x110(r31)
	cmplwi   r0, 0
	beq      lbl_8005C690
	lis      r3, 0x55555556@ha
	li       r28, 0
	addi     r29, r3, 0x55555556@l
	b        lbl_8005C670

lbl_8005C628:
	mr       r4, r28
	addi     r3, r30, 0x38
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	lwz      r3, 0x110(r31)
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_8005C658
	lwz      r4, 0x34(r30)
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_8005C66C

lbl_8005C658:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x34(r30)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r28, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_8005C66C:
	addi     r28, r28, 1

lbl_8005C670:
	lhz      r0, 0x14(r30)
	clrlwi   r4, r28, 0x10
	mulhw    r3, r29, r0
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	clrlwi   r0, r0, 0x10
	cmplw    r4, r0
	blt      lbl_8005C628

lbl_8005C690:
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
 * Address:	8005C6B0
 * Size:	0001D4
 */
void J2DAnmTexPattern::searchUpdateMaterialID(J2DScreen*)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stmw     r26, 0x118(r1)
	or.      r30, r4, r4
	mr       r29, r3
	beq      lbl_8005C870
	lwz      r0, 0x110(r30)
	cmplwi   r0, 0
	beq      lbl_8005C870
	lwz      r0, 0x108(r30)
	cmplwi   r0, 0
	beq      lbl_8005C870
	li       r27, 0
	b        lbl_8005C734

lbl_8005C6EC:
	mr       r4, r27
	addi     r3, r29, 0x20
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	lwz      r3, 0x110(r30)
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_8005C71C
	lwz      r4, 0x1c(r29)
	rlwinm   r0, r27, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_8005C730

lbl_8005C71C:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x1c(r29)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r27, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_8005C730:
	addi     r27, r27, 1

lbl_8005C734:
	lhz      r0, 0x1a(r29)
	clrlwi   r3, r27, 0x10
	cmplw    r3, r0
	blt      lbl_8005C6EC
	lis      r4, __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@ha
	lwz      r3, 0x30(r29)
	addi     r4, r4, __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@l
	bl       __destroy_new_array
	lwz      r3, 0x108(r30)
	lhz      r28, 0(r3)
	slwi     r3, r28, 3
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@ha
	lis      r5, __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@ha
	addi     r4, r4, __ct__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@l
	mr       r7, r28
	addi     r5, r5, __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@l
	li       r6, 8
	bl       __construct_new_array
	stw      r3, 0x30(r29)
	lwz      r0, 0x30(r29)
	cmplwi   r0, 0
	beq      lbl_8005C870
	li       r0, 0
	li       r31, 0
	stb      r0, 8(r1)
	b        lbl_8005C85C

lbl_8005C7A4:
	mr       r4, r31
	bl       getResReference__15J2DResReferenceCFUs
	cmplwi   r3, 0
	li       r26, 0
	beq      lbl_8005C800
	lis      r5, 0x54494D47@ha
	mr       r4, r3
	addi     r3, r1, 8
	li       r6, 0
	addi     r5, r5, 0x54494D47@l
	bl       getResource__15JUTResReferenceFPCvUlP10JKRArchive
	or.      r26, r3, r3
	bne      lbl_8005C800
	lwz      r28, mDataManage__9J2DScreen@sda21(r13)
	cmplwi   r28, 0
	beq      lbl_8005C800
	lwz      r3, 0x108(r30)
	mr       r4, r31
	bl       getName__15J2DResReferenceCFUs
	mr       r4, r3
	mr       r3, r28
	bl       get__13J2DDataManageFPCc
	mr       r26, r3

lbl_8005C800:
	lwz      r3, 0x30(r29)
	rlwinm   r27, r31, 3, 0xd, 0x1c
	cmplwi   r26, 0
	stwx     r26, r3, r27
	beq      lbl_8005C858
	lbz      r0, 8(r26)
	cmplwi   r0, 0
	beq      lbl_8005C858
	li       r3, 0x18
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8005C84C
	lwz      r0, 0xc(r26)
	li       r4, 0
	lbz      r5, 9(r26)
	lbz      r6, 1(r26)
	add      r8, r26, r0
	lhz      r7, 0xa(r26)
	bl       storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv

lbl_8005C84C:
	lwz      r3, 0x30(r29)
	addi     r0, r27, 4
	stwx     r28, r3, r0

lbl_8005C858:
	addi     r31, r31, 1

lbl_8005C85C:
	lwz      r3, 0x108(r30)
	clrlwi   r4, r31, 0x10
	lhz      r0, 0(r3)
	cmplw    r4, r0
	blt      lbl_8005C7A4

lbl_8005C870:
	lmw      r26, 0x118(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005C884
 * Size:	000010
 */
J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::J2DAnmTexPatternTIMGPointer(void)
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005C894
 * Size:	000054
 */
J2DAnmTexPattern::J2DAnmTexPatternTIMGPointer::~J2DAnmTexPatternTIMGPointer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x38
	  lwz       r3, 0x4(r30)
	  bl        -0x38804
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x38814

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005C8E8
 * Size:	0000B4
 */
void J2DAnmTexPattern::getTexNo(unsigned short, unsigned short*) const
{
	/*
	lfs      f2, 8(r3)
	rlwinm   r4, r4, 3, 0xd, 0x1c
	lfs      f0, lbl_80516960@sda21(r2)
	stwu     r1, -0x10(r1)
	lwz      r6, 0x14(r3)
	fcmpo    cr0, f2, f0
	lhzx     r7, r6, r4
	bge      lbl_8005C924
	add      r4, r6, r4
	lwz      r3, 0x10(r3)
	lhz      r0, 2(r4)
	slwi     r0, r0, 1
	lhzx     r0, r3, r0
	sth      r0, 0(r5)
	b        lbl_8005C994

lbl_8005C924:
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005C96C
	add      r4, r6, r4
	lwz      r6, 0x10(r3)
	lhz      r0, 2(r4)
	add      r3, r7, r0
	addi     r0, r3, -1
	slwi     r0, r0, 1
	lhzx     r0, r6, r0
	sth      r0, 0(r5)
	b        lbl_8005C994

lbl_8005C96C:
	fctiwz   f0, f2
	add      r4, r6, r4
	lhz      r0, 2(r4)
	lwz      r4, 0x10(r3)
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	add      r0, r3, r0
	slwi     r0, r0, 1
	lhzx     r0, r4, r0
	sth      r0, 0(r5)

lbl_8005C994:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005C99C
 * Size:	0000C4
 */
void J2DAnmTexPattern::getResTIMG(unsigned short) const
{
	/*
	lwz      r7, 0x30(r3)
	stwu     r1, -0x10(r1)
	cmplwi   r7, 0
	bne      lbl_8005C9B4
	li       r3, 0
	b        lbl_8005CA58

lbl_8005C9B4:
	lfs      f2, 8(r3)
	rlwinm   r4, r4, 3, 0xd, 0x1c
	lfs      f0, lbl_80516960@sda21(r2)
	lwz      r5, 0x14(r3)
	fcmpo    cr0, f2, f0
	lhzx     r6, r5, r4
	bge      lbl_8005C9E8
	add      r4, r5, r4
	lwz      r3, 0x10(r3)
	lhz      r0, 2(r4)
	slwi     r0, r0, 1
	lhzx     r0, r3, r0
	b        lbl_8005CA50

lbl_8005C9E8:
	lis      r0, 0x4330
	stw      r6, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005CA2C
	add      r4, r5, r4
	lwz      r5, 0x10(r3)
	lhz      r0, 2(r4)
	add      r3, r6, r0
	addi     r0, r3, -1
	slwi     r0, r0, 1
	lhzx     r0, r5, r0
	b        lbl_8005CA50

lbl_8005CA2C:
	fctiwz   f0, f2
	add      r4, r5, r4
	lhz      r0, 2(r4)
	lwz      r4, 0x10(r3)
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	add      r0, r3, r0
	slwi     r0, r0, 1
	lhzx     r0, r4, r0

lbl_8005CA50:
	rlwinm   r0, r0, 3, 0xd, 0x1c
	lwzx     r3, r7, r0

lbl_8005CA58:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005CA60
 * Size:	0000C8
 */
void J2DAnmTexPattern::getPalette(unsigned short) const
{
	/*
	lwz      r7, 0x30(r3)
	stwu     r1, -0x10(r1)
	cmplwi   r7, 0
	bne      lbl_8005CA78
	li       r3, 0
	b        lbl_8005CB20

lbl_8005CA78:
	lfs      f2, 8(r3)
	rlwinm   r4, r4, 3, 0xd, 0x1c
	lfs      f0, lbl_80516960@sda21(r2)
	lwz      r5, 0x14(r3)
	fcmpo    cr0, f2, f0
	lhzx     r6, r5, r4
	bge      lbl_8005CAAC
	add      r4, r5, r4
	lwz      r3, 0x10(r3)
	lhz      r0, 2(r4)
	slwi     r0, r0, 1
	lhzx     r0, r3, r0
	b        lbl_8005CB14

lbl_8005CAAC:
	lis      r0, 0x4330
	stw      r6, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005CAF0
	add      r4, r5, r4
	lwz      r5, 0x10(r3)
	lhz      r0, 2(r4)
	add      r3, r6, r0
	addi     r0, r3, -1
	slwi     r0, r0, 1
	lhzx     r0, r5, r0
	b        lbl_8005CB14

lbl_8005CAF0:
	fctiwz   f0, f2
	add      r4, r5, r4
	lhz      r0, 2(r4)
	lwz      r4, 0x10(r3)
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	add      r0, r3, r0
	slwi     r0, r0, 1
	lhzx     r0, r4, r0

lbl_8005CB14:
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r3, r7, r0
	lwz      r3, 4(r3)

lbl_8005CB20:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005CB28
 * Size:	0000A8
 */
void J2DAnmVisibilityFull::getVisibility(unsigned short, unsigned char*) const
{
	/*
	lfs      f2, 8(r3)
	rlwinm   r4, r4, 2, 0xe, 0x1d
	lfs      f0, lbl_80516960@sda21(r2)
	stwu     r1, -0x10(r1)
	lwz      r6, 0x14(r3)
	fcmpo    cr0, f2, f0
	lhzx     r7, r6, r4
	bge      lbl_8005CB60
	add      r4, r6, r4
	lwz      r3, 0x18(r3)
	lhz      r0, 2(r4)
	lbzx     r0, r3, r0
	stb      r0, 0(r5)
	b        lbl_8005CBC8

lbl_8005CB60:
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f1, lbl_80516968@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8005CBA4
	add      r4, r6, r4
	lwz      r3, 0x18(r3)
	lhz      r0, 2(r4)
	add      r3, r3, r7
	add      r3, r3, r0
	lbz      r0, -1(r3)
	stb      r0, 0(r5)
	b        lbl_8005CBC8

lbl_8005CBA4:
	fctiwz   f0, f2
	add      r4, r6, r4
	lhz      r0, 2(r4)
	lwz      r4, 0x18(r3)
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	add      r0, r3, r0
	lbzx     r0, r4, r0
	stb      r0, 0(r5)

lbl_8005CBC8:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005CBD0
 * Size:	0002CC
 */
void J2DAnmTevRegKey::getTevColorReg(unsigned short, _GXColorS10*) const
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
	beq      lbl_8005CC30
	bge      lbl_8005CC48
	cmpwi    r0, 0
	bge      lbl_8005CC24
	b        lbl_8005CC48

lbl_8005CC24:
	li       r0, 0
	sth      r0, 0(r30)
	b        lbl_8005CCA4

lbl_8005CC30:
	lhz      r0, 2(r31)
	lwz      r3, 0x54(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 0(r30)
	b        lbl_8005CCA4

lbl_8005CC48:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x54(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516978@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005CC80
	li       r0, -1024
	sth      r0, 0(r30)
	b        lbl_8005CCA4

lbl_8005CC80:
	lfs      f0, lbl_8051697C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005CC98
	li       r0, 0x3ff
	sth      r0, 0(r30)
	b        lbl_8005CCA4

lbl_8005CC98:
	psq_st   f31, 20(r1), 1, qr5
	lha      r0, 0x14(r1)
	sth      r0, 0(r30)

lbl_8005CCA4:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_8005CCCC
	bge      lbl_8005CCE4
	cmpwi    r0, 0
	bge      lbl_8005CCC0
	b        lbl_8005CCE4

lbl_8005CCC0:
	li       r0, 0
	sth      r0, 2(r30)
	b        lbl_8005CD40

lbl_8005CCCC:
	lhz      r0, 8(r31)
	lwz      r3, 0x58(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 2(r30)
	b        lbl_8005CD40

lbl_8005CCE4:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x58(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516978@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005CD1C
	li       r0, -1024
	sth      r0, 2(r30)
	b        lbl_8005CD40

lbl_8005CD1C:
	lfs      f0, lbl_8051697C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005CD34
	li       r0, 0x3ff
	sth      r0, 2(r30)
	b        lbl_8005CD40

lbl_8005CD34:
	psq_st   f31, 16(r1), 1, qr5
	lha      r0, 0x10(r1)
	sth      r0, 2(r30)

lbl_8005CD40:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_8005CD68
	bge      lbl_8005CD80
	cmpwi    r0, 0
	bge      lbl_8005CD5C
	b        lbl_8005CD80

lbl_8005CD5C:
	li       r0, 0
	sth      r0, 4(r30)
	b        lbl_8005CDDC

lbl_8005CD68:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x5c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 4(r30)
	b        lbl_8005CDDC

lbl_8005CD80:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x5c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516978@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005CDB8
	li       r0, -1024
	sth      r0, 4(r30)
	b        lbl_8005CDDC

lbl_8005CDB8:
	lfs      f0, lbl_8051697C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005CDD0
	li       r0, 0x3ff
	sth      r0, 4(r30)
	b        lbl_8005CDDC

lbl_8005CDD0:
	psq_st   f31, 12(r1), 1, qr5
	lha      r0, 0xc(r1)
	sth      r0, 4(r30)

lbl_8005CDDC:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_8005CE04
	bge      lbl_8005CE1C
	cmpwi    r0, 0
	bge      lbl_8005CDF8
	b        lbl_8005CE1C

lbl_8005CDF8:
	li       r0, 0
	sth      r0, 6(r30)
	b        lbl_8005CE78

lbl_8005CE04:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x60(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	sth      r0, 6(r30)
	b        lbl_8005CE78

lbl_8005CE1C:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x60(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516978@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005CE54
	li       r0, -1024
	sth      r0, 6(r30)
	b        lbl_8005CE78

lbl_8005CE54:
	lfs      f0, lbl_8051697C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005CE6C
	li       r0, 0x3ff
	sth      r0, 6(r30)
	b        lbl_8005CE78

lbl_8005CE6C:
	psq_st   f31, 8(r1), 1, qr5
	lha      r0, 8(r1)
	sth      r0, 6(r30)

lbl_8005CE78:
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
 * Address:	8005CE9C
 * Size:	0002CC
 */
void J2DAnmTevRegKey::getTevKonstReg(unsigned short, _GXColor*) const
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
	lwz      r3, 0x50(r3)
	mr       r30, r5
	add      r31, r3, r0
	lhz      r0, 0(r31)
	cmpwi    r0, 1
	beq      lbl_8005CEFC
	bge      lbl_8005CF14
	cmpwi    r0, 0
	bge      lbl_8005CEF0
	b        lbl_8005CF14

lbl_8005CEF0:
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_8005CF70

lbl_8005CEFC:
	lhz      r0, 2(r31)
	lwz      r3, 0x64(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 0(r30)
	b        lbl_8005CF70

lbl_8005CF14:
	lhz      r0, 2(r31)
	mr       r3, r31
	lwz      r4, 0x64(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005CF4C
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_8005CF70

lbl_8005CF4C:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005CF64
	li       r0, 0xff
	stb      r0, 0(r30)
	b        lbl_8005CF70

lbl_8005CF64:
	psq_st   f31, 20(r1), 1, qr2
	lbz      r0, 0x14(r1)
	stb      r0, 0(r30)

lbl_8005CF70:
	lhz      r0, 6(r31)
	cmpwi    r0, 1
	beq      lbl_8005CF98
	bge      lbl_8005CFB0
	cmpwi    r0, 0
	bge      lbl_8005CF8C
	b        lbl_8005CFB0

lbl_8005CF8C:
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8005D00C

lbl_8005CF98:
	lhz      r0, 8(r31)
	lwz      r3, 0x68(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 1(r30)
	b        lbl_8005D00C

lbl_8005CFB0:
	lhz      r0, 8(r31)
	addi     r3, r31, 6
	lwz      r4, 0x68(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005CFE8
	li       r0, 0
	stb      r0, 1(r30)
	b        lbl_8005D00C

lbl_8005CFE8:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005D000
	li       r0, 0xff
	stb      r0, 1(r30)
	b        lbl_8005D00C

lbl_8005D000:
	psq_st   f31, 16(r1), 1, qr2
	lbz      r0, 0x10(r1)
	stb      r0, 1(r30)

lbl_8005D00C:
	lhz      r0, 0xc(r31)
	cmpwi    r0, 1
	beq      lbl_8005D034
	bge      lbl_8005D04C
	cmpwi    r0, 0
	bge      lbl_8005D028
	b        lbl_8005D04C

lbl_8005D028:
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8005D0A8

lbl_8005D034:
	lhz      r0, 0xe(r31)
	lwz      r3, 0x6c(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 2(r30)
	b        lbl_8005D0A8

lbl_8005D04C:
	lhz      r0, 0xe(r31)
	addi     r3, r31, 0xc
	lwz      r4, 0x6c(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005D084
	li       r0, 0
	stb      r0, 2(r30)
	b        lbl_8005D0A8

lbl_8005D084:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005D09C
	li       r0, 0xff
	stb      r0, 2(r30)
	b        lbl_8005D0A8

lbl_8005D09C:
	psq_st   f31, 12(r1), 1, qr2
	lbz      r0, 0xc(r1)
	stb      r0, 2(r30)

lbl_8005D0A8:
	lhz      r0, 0x12(r31)
	cmpwi    r0, 1
	beq      lbl_8005D0D0
	bge      lbl_8005D0E8
	cmpwi    r0, 0
	bge      lbl_8005D0C4
	b        lbl_8005D0E8

lbl_8005D0C4:
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_8005D144

lbl_8005D0D0:
	lhz      r0, 0x14(r31)
	lwz      r3, 0x70(r29)
	slwi     r0, r0, 1
	lhax     r0, r3, r0
	stb      r0, 3(r30)
	b        lbl_8005D144

lbl_8005D0E8:
	lhz      r0, 0x14(r31)
	addi     r3, r31, 0x12
	lwz      r4, 0x70(r29)
	slwi     r0, r0, 1
	lfs      f1, 8(r29)
	add      r4, r4, r0
	bl       "J2DGetKeyFrameInterpolation<s>__FfP18J3DAnmKeyTableBasePs"
	fmr      f31, f1
	lfs      f0, lbl_80516960@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8005D120
	li       r0, 0
	stb      r0, 3(r30)
	b        lbl_8005D144

lbl_8005D120:
	lfs      f0, lbl_80516974@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8005D138
	li       r0, 0xff
	stb      r0, 3(r30)
	b        lbl_8005D144

lbl_8005D138:
	psq_st   f31, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 3(r30)

lbl_8005D144:
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
 * Address:	8005D168
 * Size:	00010C
 */
void J2DAnmTevRegKey::searchUpdateMaterialID(J2DScreen*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r4, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	beq      lbl_8005D258
	lwz      r0, 0x110(r31)
	cmplwi   r0, 0
	beq      lbl_8005D258
	li       r29, 0
	b        lbl_8005D1E8

lbl_8005D1A0:
	mr       r4, r29
	addi     r3, r30, 0x28
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	lwz      r3, 0x110(r31)
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_8005D1D0
	lwz      r4, 0x24(r30)
	rlwinm   r0, r29, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_8005D1E4

lbl_8005D1D0:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x24(r30)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r29, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_8005D1E4:
	addi     r29, r29, 1

lbl_8005D1E8:
	lhz      r0, 0x10(r30)
	clrlwi   r3, r29, 0x10
	cmplw    r3, r0
	blt      lbl_8005D1A0
	li       r29, 0
	b        lbl_8005D248

lbl_8005D200:
	mr       r4, r29
	addi     r3, r30, 0x3c
	bl       getName__10JUTNameTabCFUs
	mr       r4, r3
	lwz      r3, 0x110(r31)
	bl       getIndex__10JUTNameTabCFPCc
	cmpwi    r3, -1
	beq      lbl_8005D230
	lwz      r4, 0x38(r30)
	rlwinm   r0, r29, 1, 0xf, 0x1e
	sthx     r3, r4, r0
	b        lbl_8005D244

lbl_8005D230:
	lis      r4, 0x0000FFFF@ha
	lwz      r3, 0x38(r30)
	addi     r4, r4, 0x0000FFFF@l
	rlwinm   r0, r29, 1, 0xf, 0x1e
	sthx     r4, r3, r0

lbl_8005D244:
	addi     r29, r29, 1

lbl_8005D248:
	lhz      r0, 0x12(r30)
	clrlwi   r3, r29, 0x10
	cmplw    r3, r0
	blt      lbl_8005D200

lbl_8005D258:
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
 * Address:	8005D274
 * Size:	000088
 */
J2DAnmTevRegKey::~J2DAnmTevRegKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D2E4
	lis      r3, __vt__15J2DAnmTevRegKey@ha
	addic.   r0, r31, 0x3c
	addi     r0, r3, __vt__15J2DAnmTevRegKey@l
	stw      r0, 0(r31)
	beq      lbl_8005D2AC
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x3c(r31)

lbl_8005D2AC:
	addic.   r0, r31, 0x28
	beq      lbl_8005D2C0
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x28(r31)

lbl_8005D2C0:
	cmplwi   r31, 0
	beq      lbl_8005D2D4
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D2D4:
	extsh.   r0, r4
	ble      lbl_8005D2E4
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D2E4:
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
 * Address:	8005D2FC
 * Size:	000090
 */
J2DAnmTexPattern::~J2DAnmTexPattern()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8005D370
	lis      r4, __vt__16J2DAnmTexPattern@ha
	lis      r3, __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@ha
	addi     r0, r4, __vt__16J2DAnmTexPattern@l
	stw      r0, 0(r30)
	addi     r4, r3, __dt__Q216J2DAnmTexPattern27J2DAnmTexPatternTIMGPointerFv@l
	lwz      r3, 0x30(r30)
	bl       __destroy_new_array
	addic.   r0, r30, 0x20
	beq      lbl_8005D34C
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x20(r30)

lbl_8005D34C:
	cmplwi   r30, 0
	beq      lbl_8005D360
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r30)

lbl_8005D360:
	extsh.   r0, r31
	ble      lbl_8005D370
	mr       r3, r30
	bl       __dl__FPv

lbl_8005D370:
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
 * Address:	8005D38C
 * Size:	000088
 */
J2DAnmTextureSRTKey::~J2DAnmTextureSRTKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D3FC
	lis      r3, __vt__19J2DAnmTextureSRTKey@ha
	addic.   r0, r31, 0x70
	addi     r0, r3, __vt__19J2DAnmTextureSRTKey@l
	stw      r0, 0(r31)
	beq      lbl_8005D3C4
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x70(r31)

lbl_8005D3C4:
	addic.   r0, r31, 0x38
	beq      lbl_8005D3D8
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x38(r31)

lbl_8005D3D8:
	cmplwi   r31, 0
	beq      lbl_8005D3EC
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D3EC:
	extsh.   r0, r4
	ble      lbl_8005D3FC
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D3FC:
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
 * Address:	8005D414
 * Size:	00006C
 */
J2DAnmVtxColorKey::~J2DAnmVtxColorKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D468
	lis      r3, __vt__17J2DAnmVtxColorKey@ha
	addi     r0, r3, __vt__17J2DAnmVtxColorKey@l
	stw      r0, 0(r31)
	beq      lbl_8005D458
	lis      r3, __vt__14J2DAnmVtxColor@ha
	addi     r0, r3, __vt__14J2DAnmVtxColor@l
	stw      r0, 0(r31)
	beq      lbl_8005D458
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D458:
	extsh.   r0, r4
	ble      lbl_8005D468
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D468:
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
 * Address:	8005D480
 * Size:	00006C
 */
J2DAnmVtxColorFull::~J2DAnmVtxColorFull()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D4D4
	lis      r3, __vt__18J2DAnmVtxColorFull@ha
	addi     r0, r3, __vt__18J2DAnmVtxColorFull@l
	stw      r0, 0(r31)
	beq      lbl_8005D4C4
	lis      r3, __vt__14J2DAnmVtxColor@ha
	addi     r0, r3, __vt__14J2DAnmVtxColor@l
	stw      r0, 0(r31)
	beq      lbl_8005D4C4
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D4C4:
	extsh.   r0, r4
	ble      lbl_8005D4D4
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D4D4:
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
 * Address:	8005D4EC
 * Size:	000084
 */
J2DAnmColorKey::~J2DAnmColorKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D558
	lis      r3, __vt__14J2DAnmColorKey@ha
	addi     r0, r3, __vt__14J2DAnmColorKey@l
	stw      r0, 0(r31)
	beq      lbl_8005D548
	lis      r3, __vt__11J2DAnmColor@ha
	addic.   r0, r31, 0x20
	addi     r0, r3, __vt__11J2DAnmColor@l
	stw      r0, 0(r31)
	beq      lbl_8005D534
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x20(r31)

lbl_8005D534:
	cmplwi   r31, 0
	beq      lbl_8005D548
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D548:
	extsh.   r0, r4
	ble      lbl_8005D558
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D558:
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
 * Address:	8005D570
 * Size:	000084
 */
J2DAnmColorFull::~J2DAnmColorFull()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D5DC
	lis      r3, __vt__15J2DAnmColorFull@ha
	addi     r0, r3, __vt__15J2DAnmColorFull@l
	stw      r0, 0(r31)
	beq      lbl_8005D5CC
	lis      r3, __vt__11J2DAnmColor@ha
	addic.   r0, r31, 0x20
	addi     r0, r3, __vt__11J2DAnmColor@l
	stw      r0, 0(r31)
	beq      lbl_8005D5B8
	lis      r3, __vt__10JUTNameTab@ha
	addi     r0, r3, __vt__10JUTNameTab@l
	stw      r0, 0x20(r31)

lbl_8005D5B8:
	cmplwi   r31, 0
	beq      lbl_8005D5CC
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D5CC:
	extsh.   r0, r4
	ble      lbl_8005D5DC
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D5DC:
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
 * Address:	8005D5F4
 * Size:	00006C
 */
J2DAnmTransformKey::~J2DAnmTransformKey()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D648
	lis      r3, __vt__18J2DAnmTransformKey@ha
	addi     r0, r3, __vt__18J2DAnmTransformKey@l
	stw      r0, 0(r31)
	beq      lbl_8005D638
	lis      r3, __vt__15J2DAnmTransform@ha
	addi     r0, r3, __vt__15J2DAnmTransform@l
	stw      r0, 0(r31)
	beq      lbl_8005D638
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D638:
	extsh.   r0, r4
	ble      lbl_8005D648
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D648:
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
 * Address:	8005D660
 * Size:	000030
 */
void J2DAnmTransformKey::getTransform(unsigned short, J3DTransformInfo*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, 8(r3)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005D690
 * Size:	00006C
 */
J2DAnmTransformFull::~J2DAnmTransformFull()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8005D6E4
	lis      r3, __vt__19J2DAnmTransformFull@ha
	addi     r0, r3, __vt__19J2DAnmTransformFull@l
	stw      r0, 0(r31)
	beq      lbl_8005D6D4
	lis      r3, __vt__15J2DAnmTransform@ha
	addi     r0, r3, __vt__15J2DAnmTransform@l
	stw      r0, 0(r31)
	beq      lbl_8005D6D4
	lis      r3, __vt__10J2DAnmBase@ha
	addi     r0, r3, __vt__10J2DAnmBase@l
	stw      r0, 0(r31)

lbl_8005D6D4:
	extsh.   r0, r4
	ble      lbl_8005D6E4
	mr       r3, r31
	bl       __dl__FPv

lbl_8005D6E4:
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
 * Address:	8005D6FC
 * Size:	000234
 */
void J2DGetKeyFrameInterpolation<short>(float, J3DAnmKeyTableBase*, short*)
{
	/*
	stwu     r1, -0x10(r1)
	lis      r5, 0x4330
	lfd      f2, lbl_80516980@sda21(r2)
	lha      r0, 0(r4)
	stw      r5, 8(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8005D744
	lha      r0, 2(r4)
	stw      r5, 8(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f2
	b        lbl_8005D928

lbl_8005D744:
	lhz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8005D840
	lhz      r6, 0(r3)
	stw      r5, 8(r1)
	addi     r0, r6, -1
	mulli    r3, r0, 6
	lhax     r0, r4, r3
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8005D7E4
	add      r3, r4, r3
	stw      r5, 8(r1)
	lha      r0, 2(r3)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f2
	b        lbl_8005D928
	b        lbl_8005D7E4

lbl_8005D7A4:
	srwi     r7, r6, 1
	stw      r5, 8(r1)
	mulli    r0, r7, 3
	slwi     r3, r0, 1
	lhax     r0, r4, r3
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8005D7E0
	add      r4, r4, r3
	subf     r6, r7, r6
	b        lbl_8005D7E4

lbl_8005D7E0:
	mr       r6, r7

lbl_8005D7E4:
	cmplwi   r6, 1
	bgt      lbl_8005D7A4
	psq_l    f2, 0(r4), 1, qr5
	psq_l    f0, 6(r4), 1, qr5
	psq_l    f7, 2(r4), 1, qr5
	fsubs    f5, f0, f2
	psq_l    f6, 8(r4), 1, qr5
	fsubs    f3, f1, f2
	psq_l    f0, 10(r4), 1, qr5
	fsubs    f4, f6, f7
	fdivs    f3, f3, f5
	psq_l    f1, 4(r4), 1, qr5
	fmadds   f0, f0, f5, f7
	fnmsubs  f4, f5, f1, f4
	fmuls    f2, f3, f3
	fsubs    f0, f0, f6
	fsubs    f0, f0, f4
	fmuls    f0, f2, f0
	fmadds   f1, f5, f1, f0
	fmadds   f1, f1, f3, f7
	fmadds   f1, f4, f2, f1
	fsubs    f1, f1, f0
	b        lbl_8005D928

lbl_8005D840:
	lhz      r6, 0(r3)
	stw      r5, 8(r1)
	addi     r0, r6, -1
	slwi     r3, r0, 3
	lhax     r0, r4, r3
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8005D8D0
	add      r3, r4, r3
	stw      r5, 8(r1)
	lha      r0, 2(r3)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f2
	b        lbl_8005D928
	b        lbl_8005D8D0

lbl_8005D894:
	rlwinm   r3, r6, 2, 0, 0x1c
	stw      r5, 8(r1)
	lhax     r0, r4, r3
	srwi     r7, r6, 1
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8005D8CC
	add      r4, r4, r3
	subf     r6, r7, r6
	b        lbl_8005D8D0

lbl_8005D8CC:
	mr       r6, r7

lbl_8005D8D0:
	cmplwi   r6, 1
	bgt      lbl_8005D894
	psq_l    f2, 0(r4), 1, qr5
	psq_l    f0, 8(r4), 1, qr5
	psq_l    f7, 2(r4), 1, qr5
	fsubs    f5, f0, f2
	psq_l    f6, 10(r4), 1, qr5
	fsubs    f3, f1, f2
	psq_l    f0, 12(r4), 1, qr5
	fsubs    f4, f6, f7
	fdivs    f3, f3, f5
	psq_l    f1, 6(r4), 1, qr5
	fmadds   f0, f0, f5, f7
	fnmsubs  f4, f5, f1, f4
	fmuls    f2, f3, f3
	fsubs    f0, f0, f6
	fsubs    f0, f0, f4
	fmuls    f0, f2, f0
	fmadds   f1, f5, f1, f0
	fmadds   f1, f1, f3, f7
	fmadds   f1, f4, f2, f1
	fsubs    f1, f1, f0

lbl_8005D928:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005D930
 * Size:	00017C
 */
void J2DGetKeyFrameInterpolation<float>(float, J3DAnmKeyTableBase*, float*)
{
	/*
	lfs      f0, 0(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_8005D944
	lfs      f1, 4(r4)
	blr

lbl_8005D944:
	lhz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_8005DA00
	lhz      r3, 0(r3)
	addi     r0, r3, -1
	mulli    r0, r0, 0xc
	lfsx     f0, r4, r0
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8005D9A8
	add      r3, r4, r0
	lfs      f1, 4(r3)
	blr
	b        lbl_8005D9A8

lbl_8005D97C:
	srwi     r5, r3, 1
	mulli    r0, r5, 3
	slwi     r0, r0, 2
	lfsx     f0, r4, r0
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8005D9A4
	add      r4, r4, r0
	subf     r3, r5, r3
	b        lbl_8005D9A8

lbl_8005D9A4:
	mr       r3, r5

lbl_8005D9A8:
	cmplwi   r3, 1
	bgt      lbl_8005D97C
	lfs      f0, 0(r4)
	lfs      f2, 0xc(r4)
	fsubs    f5, f1, f0
	lfs      f6, 4(r4)
	fsubs    f4, f2, f0
	lfs      f2, 0x10(r4)
	lfs      f7, 8(r4)
	lfs      f8, 0x14(r4)
	fdivs    f3, f5, f4
	fmuls    f0, f3, f3
	fsubs    f4, f6, f2
	fadds    f1, f3, f3
	fsubs    f2, f0, f3
	fmsubs   f0, f1, f2, f0
	fmadds   f1, f7, f2, f7
	fmadds   f0, f0, f4, f6
	fmadds   f1, f8, f2, f1
	fmsubs   f1, f3, f7, f1
	fnmsubs  f1, f5, f1, f0
	blr

lbl_8005DA00:
	lhz      r3, 0(r3)
	addi     r0, r3, -1
	slwi     r0, r0, 4
	lfsx     f0, r4, r0
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8005DA54
	add      r3, r4, r0
	lfs      f1, 4(r3)
	blr
	b        lbl_8005DA54

lbl_8005DA2C:
	rlwinm   r0, r3, 3, 0, 0x1b
	srwi     r5, r3, 1
	lfsx     f0, r4, r0
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8005DA50
	add      r4, r4, r0
	subf     r3, r5, r3
	b        lbl_8005DA54

lbl_8005DA50:
	mr       r3, r5

lbl_8005DA54:
	cmplwi   r3, 1
	bgt      lbl_8005DA2C
	lfs      f0, 0(r4)
	lfs      f2, 0x10(r4)
	fsubs    f5, f1, f0
	lfs      f6, 4(r4)
	fsubs    f4, f2, f0
	lfs      f2, 0x14(r4)
	lfs      f7, 0xc(r4)
	lfs      f8, 0x18(r4)
	fdivs    f3, f5, f4
	fmuls    f0, f3, f3
	fsubs    f4, f6, f2
	fadds    f1, f3, f3
	fsubs    f2, f0, f3
	fmsubs   f0, f1, f2, f0
	fmadds   f1, f7, f2, f7
	fmadds   f0, f0, f4, f6
	fmadds   f1, f8, f2, f1
	fmsubs   f1, f3, f7, f1
	fnmsubs  f1, f5, f1, f0
	blr
	*/
}
