#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047C648
    lbl_8047C648:
        .4byte 0x44796E61
        .4byte 0x6D696373
        .4byte 0x00000000
        .4byte 0x90568374
        .4byte 0x838A834E
        .4byte 0x83568387
        .4byte 0x83930000
        .4byte 0x5374612D
        .4byte 0x5061726D
        .4byte 0x00000000
        .4byte 0x6D696372
        .4byte 0x6F20636F
        .4byte 0x6C6C6973
        .4byte 0x696F6E00
        .4byte 0x5265736F
        .4byte 0x6C76658E
        .4byte 0x9E82CC96
        .4byte 0x808E4300
        .4byte 0x656C6173
        .4byte 0x74696369
        .4byte 0x74790000
        .4byte 0x96808E43
        .4byte 0x3A74616E
        .4byte 0x76656C00
        .4byte 0x8CC592E8
        .4byte 0x96808E43
        .4byte 0x00000000
        .4byte 0x8CC592E8
        .4byte 0x96808E43
        .4byte 0x926C0000
        .4byte 0x89F1935D
        .4byte 0x89658BBF
        .4byte 0x82C882B5
        .4byte 0x82C982B7
        .4byte 0x82E90000
        .4byte 0x89F1935D
        .4byte 0x8382815B
        .4byte 0x83818393
        .4byte 0x83672044
        .4byte 0x616D7000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13DynamicsParms
    __vt__13DynamicsParms:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@12@__dt__13DynamicsParmsFv"
        .4byte __dt__13DynamicsParmsFv
    .global "__vt__7Parm<b>"
    "__vt__7Parm<b>":
        .4byte 0
        .4byte 0
        .4byte "size__7Parm<b>Fv"
        .4byte "write__7Parm<b>FR6Stream"
        .4byte "read__7Parm<b>FR6Stream"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global mInstance__13DynamicsParms
    mInstance__13DynamicsParms:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518238
    lbl_80518238:
        .4byte 0x430C0000
    .global lbl_8051823C
    lbl_8051823C:
        .4byte 0x00000000
    .global lbl_80518240
    lbl_80518240:
        .4byte 0x459C4000
    .global lbl_80518244
    lbl_80518244:
        .4byte 0x53746174
        .4byte 0x69630000
    .global lbl_8051824C
    lbl_8051824C:
        .4byte 0x41200000
    .global lbl_80518250
    lbl_80518250:
        .4byte 0x3C75C28F
    .global lbl_80518254
    lbl_80518254:
        .float 0.3
    .global lbl_80518258
    lbl_80518258:
        .float 1.0
    .global lbl_8051825C
    lbl_8051825C:
        .4byte 0x96808E43
        .4byte 0x00000000
    .global lbl_80518264
    lbl_80518264:
        .4byte 0x42C80000
    .global lbl_80518268
    lbl_80518268:
        .4byte 0x461C4000
    .global lbl_8051826C
    lbl_8051826C:
        .float 0.05
    .global lbl_80518270
    lbl_80518270:
        .float 0.5
    .global lbl_80518274
    lbl_80518274:
        .4byte 0x447A0000
    .global lbl_80518278
    lbl_80518278:
        .4byte 0x448C0000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80139C60
 * Size:	000334
 */
DynamicsParms::DynamicsParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_8047C648@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047C648@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80139C90
	addi     r0, r30, 0x1c0
	stw      r0, 0(r30)

lbl_80139C90:
	li       r3, 0
	addi     r0, r31, 0
	stw      r3, 4(r30)
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__13DynamicsParms@ha
	lis      r5, 0x64303039@ha
	addi     r3, r3, __vt__13DynamicsParms@l
	mr       r4, r30
	stw      r3, 0x1bc(r30)
	addi     r0, r3, 8
	addi     r3, r30, 0x24
	addi     r5, r5, 0x64303039@l
	stw      r0, 0xc(r30)
	addi     r6, r31, 0xc
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<b>"@ha
	lis      r5, 0x64303131@ha
	addi     r0, r3, "__vt__7Parm<b>"@l
	li       r7, 1
	stw      r0, 0x24(r30)
	li       r0, 0
	mr       r4, r30
	addi     r3, r30, 0x40
	stb      r7, 0x3c(r30)
	addi     r5, r5, 0x64303131@l
	addi     r6, r31, 0x1c
	stb      r0, 0x3e(r30)
	stb      r7, 0x3f(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x64303130@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518238@sda21(r2)
	stw      r0, 0x40(r30)
	mr       r4, r30
	lfs      f1, lbl_8051823C@sda21(r2)
	addi     r3, r30, 0x68
	stfs     f0, 0x58(r30)
	addi     r5, r5, 0x64303130@l
	lfs      f0, lbl_80518240@sda21(r2)
	addi     r6, r2, lbl_80518244@sda21
	stfs     f1, 0x60(r30)
	stfs     f0, 0x64(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x64303030@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051824C@sda21(r2)
	stw      r0, 0x68(r30)
	mr       r4, r30
	lfs      f1, lbl_8051823C@sda21(r2)
	addi     r3, r30, 0x90
	stfs     f0, 0x80(r30)
	addi     r5, r5, 0x64303030@l
	lfs      f0, lbl_80518240@sda21(r2)
	addi     r6, r31, 0x28
	stfs     f1, 0x88(r30)
	stfs     f0, 0x8c(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x64303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518250@sda21(r2)
	stw      r0, 0x90(r30)
	mr       r4, r30
	lfs      f1, lbl_8051823C@sda21(r2)
	addi     r3, r30, 0xb8
	stfs     f0, 0xa8(r30)
	addi     r5, r5, 0x64303031@l
	lfs      f0, lbl_8051824C@sda21(r2)
	addi     r6, r31, 0x38
	stfs     f1, 0xb0(r30)
	stfs     f0, 0xb4(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<b>"@ha
	lis      r5, 0x64303032@ha
	addi     r0, r3, "__vt__7Parm<b>"@l
	li       r7, 0
	stw      r0, 0xb8(r30)
	li       r0, 1
	mr       r4, r30
	addi     r3, r30, 0xd4
	stb      r7, 0xd0(r30)
	addi     r5, r5, 0x64303032@l
	addi     r6, r31, 0x48
	stb      r7, 0xd2(r30)
	stb      r0, 0xd3(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x64303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518254@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051823C@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x64303033@l
	lfs      f0, lbl_80518258@sda21(r2)
	addi     r6, r2, lbl_8051825C@sda21
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<b>"@ha
	lis      r5, 0x64303034@ha
	addi     r0, r3, "__vt__7Parm<b>"@l
	li       r7, 1
	stw      r0, 0xfc(r30)
	li       r0, 0
	mr       r4, r30
	addi     r3, r30, 0x118
	stb      r7, 0x114(r30)
	addi     r5, r5, 0x64303034@l
	addi     r6, r31, 0x54
	stb      r0, 0x116(r30)
	stb      r7, 0x117(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<b>"@ha
	lis      r5, 0x64303035@ha
	addi     r0, r3, "__vt__7Parm<b>"@l
	li       r7, 1
	stw      r0, 0x118(r30)
	li       r0, 0
	mr       r4, r30
	addi     r3, r30, 0x134
	stb      r7, 0x130(r30)
	addi     r5, r5, 0x64303035@l
	addi     r6, r31, 0x60
	stb      r0, 0x132(r30)
	stb      r7, 0x133(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<b>"@ha
	lis      r5, 0x64303036@ha
	addi     r0, r3, "__vt__7Parm<b>"@l
	li       r7, 1
	stw      r0, 0x134(r30)
	li       r0, 0
	mr       r4, r30
	addi     r3, r30, 0x150
	stb      r7, 0x14c(r30)
	addi     r5, r5, 0x64303036@l
	addi     r6, r31, 0x6c
	stb      r0, 0x14e(r30)
	stb      r7, 0x14f(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x64303037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518264@sda21(r2)
	stw      r0, 0x150(r30)
	mr       r4, r30
	lfs      f1, lbl_8051823C@sda21(r2)
	addi     r3, r30, 0x178
	stfs     f0, 0x168(r30)
	addi     r5, r5, 0x64303037@l
	lfs      f0, lbl_80518268@sda21(r2)
	addi     r6, r31, 0x78
	stfs     f1, 0x170(r30)
	stfs     f0, 0x174(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<b>"@ha
	lis      r5, 0x64303038@ha
	addi     r0, r3, "__vt__7Parm<b>"@l
	li       r7, 1
	stw      r0, 0x178(r30)
	li       r0, 0
	mr       r4, r30
	addi     r3, r30, 0x194
	stb      r7, 0x190(r30)
	addi     r5, r5, 0x64303038@l
	addi     r6, r31, 0x8c
	stb      r0, 0x192(r30)
	stb      r7, 0x193(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_8051826C@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051823C@sda21(r2)
	stw      r0, 0x194(r30)
	mr       r3, r30
	lfs      f0, lbl_80518258@sda21(r2)
	stfs     f2, 0x1ac(r30)
	stfs     f1, 0x1b4(r30)
	stfs     f0, 0x1b8(r30)
	stw      r30, mInstance__13DynamicsParms@sda21(r13)
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
 * Address:	80139F94
 * Size:	000074
 */
DynamicsParms::~DynamicsParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80139FEC
	lis      r3, __vt__13DynamicsParms@ha
	li       r0, 0
	addi     r4, r3, __vt__13DynamicsParms@l
	addi     r3, r30, 0xc
	stw      r4, 0x1bc(r30)
	addi     r5, r4, 8
	li       r4, 0
	stw      r5, 0xc(r30)
	stw      r0, mInstance__13DynamicsParms@sda21(r13)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80139FEC
	mr       r3, r30
	bl       __dl__FPv

lbl_80139FEC:
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
 * Address:	8013A008
 * Size:	000048
 */
void DynamicsParms::globalInstance()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, mInstance__13DynamicsParms@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8013A040
	li       r3, 0x1c4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8013A03C
	li       r4, 1
	bl       __ct__13DynamicsParmsFv
	mr       r0, r3

lbl_8013A03C:
	stw      r0, mInstance__13DynamicsParms@sda21(r13)

lbl_8013A040:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8013A050
 * Size:	000054
 */
Rigid::Rigid()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __ct__Q24Game11RigidConfigFv@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r4, r4, __ct__Q24Game11RigidConfigFv@l
	li       r6, 0x88
	li       r7, 2
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x34
	bl       __construct_array
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x175(r31)
	stb      r0, 0x175(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013A0A4
 * Size:	000034
 */
RigidConfig::RigidConfig()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x48
	bl       __ct__4QuatFv
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
 * Address:	8013A0D8
 * Size:	00008C
 */
void Rigid::initPosition(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	li       r5, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	mr       r6, r31
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       "initPositionIndex__Q24Game5RigidFR10Vector3<f>iR10Vector3<f>"
	mr       r3, r29
	mr       r4, r30
	mr       r6, r31
	li       r5, 1
	bl       "initPositionIndex__Q24Game5RigidFR10Vector3<f>iR10Vector3<f>"
	addi     r3, r29, 0x8c
	bl       PSMTXIdentity
	addi     r3, r29, 0x114
	bl       PSMTXIdentity
	addi     r3, r29, 0x144
	bl       PSMTXIdentity
	lfs      f0, lbl_80518258@sda21(r2)
	mr       r3, r29
	li       r4, 0
	stfs     f0, 0(r29)
	bl       updateMatrix__Q24Game5RigidFi
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
 * Address:	8013A164
 * Size:	00008C
 */
void Rigid::initPositionIndex(Vector3f&, int, Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mulli    r5, r5, 0x88
	lfs      f0, lbl_8051823C@sda21(r2)
	stw      r0, 0x14(r1)
	addi     r5, r5, 0x34
	lfs      f1, 0(r4)
	add      r5, r3, r5
	stfs     f1, 0(r5)
	addi     r3, r5, 0x48
	lfs      f1, 4(r4)
	stfs     f1, 4(r5)
	lfs      f1, 8(r4)
	mr       r4, r6
	stfs     f1, 8(r5)
	stfs     f0, 0x18(r5)
	stfs     f0, 0x1c(r5)
	stfs     f0, 0x20(r5)
	stfs     f0, 0xc(r5)
	stfs     f0, 0x10(r5)
	stfs     f0, 0x14(r5)
	stfs     f0, 0x24(r5)
	stfs     f0, 0x28(r5)
	stfs     f0, 0x2c(r5)
	stfs     f0, 0x30(r5)
	stfs     f0, 0x34(r5)
	stfs     f0, 0x38(r5)
	stfs     f0, 0x3c(r5)
	stfs     f0, 0x40(r5)
	stfs     f0, 0x44(r5)
	bl       "set__4QuatFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013A1F0
 * Size:	000038
 */
void Rigid::updateMatrix(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mulli    r4, r4, 0x88
	mr       r5, r3
	stw      r0, 0x14(r1)
	addi     r3, r5, 4
	addi     r4, r4, 0x34
	add      r4, r5, r4
	addi     r5, r4, 0x48
	bl       "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013A228
 * Size:	00006C
 */
void Rigid::computeForces(int)
{
	/*
	mulli    r4, r4, 0x88
	lfs      f0, lbl_8051823C@sda21(r2)
	addi     r4, r4, 0x34
	add      r4, r3, r4
	stfs     f0, 0x18(r4)
	stfs     f0, 0x1c(r4)
	stfs     f0, 0x20(r4)
	stfs     f0, 0x3c(r4)
	stfs     f0, 0x40(r4)
	stfs     f0, 0x44(r4)
	lwz      r3, mInstance__13DynamicsParms@sda21(r13)
	lfs      f3, 0x1ac(r3)
	fcmpo    cr0, f3, f0
	blelr
	lfs      f2, 0x30(r4)
	lfs      f5, 0x34(r4)
	fmuls    f0, f2, f3
	lfs      f4, 0x38(r4)
	fmuls    f1, f5, f3
	fmuls    f3, f4, f3
	fsubs    f2, f2, f0
	fsubs    f1, f5, f1
	fsubs    f0, f4, f3
	stfs     f2, 0x30(r4)
	stfs     f1, 0x34(r4)
	stfs     f0, 0x38(r4)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8013A294
 * Size:	000268
 */
void getYDegree(Quat&, Vector3f&)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	lfs      f1, lbl_8051823C@sda21(r2)
	stw      r0, 0xc4(r1)
	lfs      f0, lbl_80518258@sda21(r2)
	stw      r31, 0xbc(r1)
	mr       r31, r4
	addi     r4, r1, 0x70
	stfs     f1, 0xac(r1)
	stfs     f0, 0xb0(r1)
	lwz      r6, 0xac(r1)
	stw      r30, 0xb8(r1)
	mr       r30, r3
	lwz      r5, 0xb0(r1)
	addi     r3, r1, 0x9c
	stfs     f1, 0xb4(r1)
	lwz      r0, 0xb4(r1)
	stw      r6, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r0, 0x78(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	addi     r3, r1, 0x8c
	bl       __ct__4QuatFv
	addi     r3, r1, 0x7c
	bl       __ct__4QuatFv
	mr       r4, r30
	addi     r3, r1, 0x60
	bl       inverse__4QuatFv
	lfs      f3, 0x60(r1)
	addi     r3, r1, 0x24
	lfs      f2, 0x64(r1)
	lfs      f1, 0x68(r1)
	lfs      f0, 0x6c(r1)
	stfs     f3, 0x7c(r1)
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)
	bl       __ct__4QuatFv
	lfs      f9, 0xc(r30)
	addi     r3, r1, 0x50
	lfs      f13, 0xa4(r1)
	addi     r4, r1, 0x34
	lfs      f7, 8(r30)
	lfs      f3, 0xa0(r1)
	fmuls    f1, f9, f13
	lfs      f12, 0xa8(r1)
	fmuls    f2, f7, f13
	lfs      f8, 4(r30)
	fmuls    f0, f7, f3
	fmsubs   f6, f7, f12, f1
	fmuls    f1, f8, f12
	lfs      f10, 0(r30)
	fmadds   f2, f8, f3, f2
	lfs      f11, 0x9c(r1)
	fmuls    f5, f3, f10
	fmsubs   f4, f9, f3, f1
	fmadds   f1, f9, f12, f2
	fmsubs   f2, f8, f13, f0
	fmuls    f0, f12, f10
	fmuls    f3, f13, f10
	fmuls    f9, f9, f11
	fadds    f0, f2, f0
	fadds    f2, f4, f3
	fmuls    f7, f7, f11
	fadds    f0, f0, f9
	fmuls    f4, f8, f11
	fadds    f2, f2, f7
	stfs     f0, 0x30(r1)
	fadds    f3, f6, f5
	fmsubs   f1, f10, f11, f1
	stfs     f2, 0x2c(r1)
	fadds    f0, f3, f4
	lwz      r0, 0x30(r1)
	lwz      r5, 0x2c(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r6, 0x28(r1)
	stw      r5, 0x38(r1)
	stw      r6, 0x34(r1)
	stw      r0, 0x3c(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0x50(r1)
	addi     r3, r1, 8
	lfs      f2, 0x54(r1)
	lfs      f1, 0x58(r1)
	lfs      f0, 0x5c(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	bl       __ct__4QuatFv
	lfs      f8, 0x98(r1)
	addi     r3, r1, 0x40
	lfs      f13, 0x84(r1)
	addi     r4, r1, 0x18
	lfs      f9, 0x94(r1)
	lfs      f3, 0x80(r1)
	fmuls    f1, f8, f13
	lfs      f12, 0x88(r1)
	fmuls    f2, f9, f13
	lfs      f10, 0x90(r1)
	fmuls    f0, f9, f3
	fmsubs   f6, f9, f12, f1
	fmuls    f1, f10, f12
	lfs      f11, 0x8c(r1)
	fmadds   f2, f10, f3, f2
	lfs      f7, 0x7c(r1)
	fmuls    f5, f3, f11
	fmsubs   f4, f8, f3, f1
	fmadds   f1, f8, f12, f2
	fmuls    f3, f13, f11
	fmsubs   f2, f10, f13, f0
	fmuls    f0, f12, f11
	fadds    f6, f6, f5
	fmuls    f5, f10, f7
	fadds    f4, f4, f3
	fmuls    f3, f9, f7
	fadds    f2, f2, f0
	fmuls    f0, f8, f7
	fadds    f5, f6, f5
	fadds    f3, f4, f3
	fadds    f0, f2, f0
	stfs     f5, 0xc(r1)
	fmsubs   f1, f11, f7, f1
	stfs     f3, 0x10(r1)
	lwz      r6, 0xc(r1)
	stfs     f0, 0x14(r1)
	lwz      r5, 0x10(r1)
	lwz      r0, 0x14(r1)
	stfs     f1, 8(r1)
	stw      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0x40(r1)
	lfs      f2, 0x44(r1)
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	stfs     f2, 0(r31)
	lfs      f0, 0x94(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x98(r1)
	stfs     f0, 8(r31)
	lfs      f1, 0x94(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8013A4FC
 * Size:	000678
 */
void Rigid::integrate(float, int)
{
	/*
	stwu     r1, -0x240(r1)
	mflr     r0
	stw      r0, 0x244(r1)
	stfd     f31, 0x230(r1)
	psq_st   f31, 568(r1), 0, qr0
	stfd     f30, 0x220(r1)
	psq_st   f30, 552(r1), 0, qr0
	stfd     f29, 0x210(r1)
	psq_st   f29, 536(r1), 0, qr0
	stw      r31, 0x20c(r1)
	stw      r30, 0x208(r1)
	mulli    r5, r4, 0x88
	subfic   r0, r4, 1
	mr       r30, r3
	fmr      f31, f1
	addi     r3, r1, 0x1d0
	mulli    r4, r0, 0x88
	addi     r31, r5, 0x34
	add      r31, r30, r31
	addi     r5, r4, 0x34
	lfs      f0, 0(r31)
	add      r5, r30, r5
	addi     r4, r31, 0x48
	stfs     f0, 0(r5)
	lfs      f0, 4(r31)
	stfs     f0, 4(r5)
	lfs      f0, 8(r31)
	stfs     f0, 8(r5)
	lfs      f0, 0x48(r31)
	stfs     f0, 0x48(r5)
	lfs      f0, 0x4c(r31)
	stfs     f0, 0x4c(r5)
	lfs      f0, 0x50(r31)
	stfs     f0, 0x50(r5)
	lfs      f0, 0x54(r31)
	stfs     f0, 0x54(r5)
	bl       makeQ__7MatrixfFR4Quat
	addi     r3, r1, 0x1d0
	addi     r4, r1, 0x170
	bl       PSMTXTranspose
	addi     r3, r1, 0x1d0
	addi     r4, r30, 0x144
	addi     r5, r1, 0x1a0
	bl       PSMTXConcat
	addi     r3, r1, 0x1a0
	addi     r4, r1, 0x170
	addi     r5, r31, 0x58
	bl       PSMTXConcat
	lfs      f0, 0xc(r31)
	addi     r3, r31, 0x58
	lfs      f2, 0x10(r31)
	addi     r4, r31, 0x30
	fmuls    f0, f0, f31
	lfs      f1, 0(r31)
	lfs      f4, 0x14(r31)
	fmuls    f2, f2, f31
	lfs      f3, 4(r31)
	addi     r5, r1, 0x90
	fadds    f0, f1, f0
	lfs      f5, 8(r31)
	fmuls    f1, f4, f31
	fadds    f2, f3, f2
	stfs     f0, 0(r31)
	fadds    f0, f5, f1
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)
	lfs      f0, 0x3c(r31)
	lfs      f2, 0x40(r31)
	fmuls    f0, f0, f31
	lfs      f1, 0x30(r31)
	lfs      f4, 0x44(r31)
	fmuls    f2, f2, f31
	lfs      f3, 0x34(r31)
	fadds    f0, f1, f0
	lfs      f5, 0x38(r31)
	fmuls    f1, f4, f31
	fadds    f2, f3, f2
	stfs     f0, 0x30(r31)
	fadds    f0, f5, f1
	stfs     f2, 0x34(r31)
	stfs     f0, 0x38(r31)
	lfs      f1, 0(r30)
	lfs      f0, 0x18(r31)
	fmuls    f6, f31, f1
	lfs      f2, 0x1c(r31)
	lfs      f4, 0x20(r31)
	lfs      f1, 0xc(r31)
	fmuls    f0, f0, f6
	lfs      f3, 0x10(r31)
	fmuls    f2, f2, f6
	lfs      f5, 0x14(r31)
	fmuls    f4, f4, f6
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	bl       PSMTXMultVec
	lfs      f1, 0x94(r1)
	addi     r3, r1, 0x160
	lfs      f2, 0x98(r1)
	lfs      f0, 0x90(r1)
	stfs     f0, 0x24(r31)
	stfs     f1, 0x28(r31)
	stfs     f2, 0x2c(r31)
	bl       __ct__4QuatFv
	lwz      r5, 0x24(r31)
	addi     r3, r1, 0x150
	lwz      r0, 0x28(r31)
	addi     r4, r1, 0xfc
	lfs      f1, lbl_8051823C@sda21(r2)
	stw      r5, 0xfc(r1)
	stw      r0, 0x100(r1)
	lwz      r0, 0x2c(r31)
	stw      r0, 0x104(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	addi     r3, r1, 0x74
	bl       __ct__4QuatFv
	lfs      f5, 0x50(r31)
	addi     r3, r1, 0xec
	lfs      f12, 0x158(r1)
	addi     r4, r1, 0x84
	lfs      f11, 0x15c(r1)
	lfs      f6, 0x4c(r31)
	fmuls    f2, f12, f5
	lfs      f13, 0x154(r1)
	fmuls    f3, f11, f5
	lfs      f7, 0x54(r31)
	fmuls    f0, f12, f6
	lfs      f29, 0x150(r1)
	fmuls    f1, f13, f7
	lfs      f8, 0x48(r31)
	fmadds   f4, f13, f6, f2
	fmuls    f10, f7, f29
	fmsubs   f2, f11, f6, f1
	fmadds   f1, f11, f7, f4
	fmsubs   f0, f13, f5, f0
	fmuls    f9, f5, f29
	fmuls    f4, f6, f29
	fmsubs   f3, f12, f7, f3
	fmuls    f5, f13, f8
	fmsubs   f1, f29, f8, f1
	fadds    f6, f3, f4
	fadds    f4, f2, f9
	fmuls    f3, f12, f8
	stfs     f1, 0x74(r1)
	fadds    f2, f0, f10
	fmuls    f0, f11, f8
	fadds    f5, f6, f5
	fadds    f3, f4, f3
	fadds    f0, f2, f0
	stfs     f5, 0x78(r1)
	stfs     f3, 0x7c(r1)
	lwz      r6, 0x78(r1)
	stfs     f0, 0x80(r1)
	lwz      r5, 0x7c(r1)
	lwz      r0, 0x80(r1)
	stw      r6, 0x84(r1)
	stw      r5, 0x88(r1)
	stw      r0, 0x8c(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0xec(r1)
	lfs      f2, 0xf0(r1)
	lfs      f1, 0xf4(r1)
	lfs      f0, 0xf8(r1)
	stfs     f3, 0x160(r1)
	stfs     f2, 0x164(r1)
	stfs     f1, 0x168(r1)
	stfs     f0, 0x16c(r1)
	lbz      r0, 0x175(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8013AA38
	addi     r3, r1, 0x140
	bl       __ct__4QuatFv
	lfs      f0, lbl_80518270@sda21(r2)
	addi     r3, r1, 0xdc
	lfs      f3, 0x164(r1)
	addi     r4, r1, 0x5c
	fmuls    f5, f0, f31
	lfs      f2, 0x168(r1)
	lfs      f1, 0x16c(r1)
	lfs      f0, 0x160(r1)
	fmuls    f4, f3, f5
	fmuls    f3, f2, f5
	fmuls    f2, f1, f5
	stfs     f4, 0x68(r1)
	fmuls    f1, f5, f0
	stfs     f3, 0x6c(r1)
	lwz      r6, 0x68(r1)
	stfs     f2, 0x70(r1)
	lwz      r5, 0x6c(r1)
	lwz      r0, 0x70(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r0, 0x64(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0xdc(r1)
	addi     r3, r1, 0x130
	lfs      f2, 0xe0(r1)
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	stfs     f3, 0x140(r1)
	stfs     f2, 0x144(r1)
	stfs     f1, 0x148(r1)
	stfs     f0, 0x14c(r1)
	bl       __ct__4QuatFv
	addi     r3, r1, 0x4c
	bl       __ct__4QuatFv
	lfs      f1, 0x48(r31)
	addi     r3, r1, 0xcc
	lfs      f0, 0x140(r1)
	addi     r4, r1, 0x4c
	lfs      f4, 0x14c(r1)
	fadds    f1, f1, f0
	lfs      f2, 0x148(r1)
	lfs      f0, 0x144(r1)
	stfs     f1, 0x4c(r1)
	lfs      f5, 0x54(r31)
	lfs      f3, 0x50(r31)
	lfs      f1, 0x4c(r31)
	fadds    f4, f5, f4
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x58(r1)
	stfs     f0, 0x50(r1)
	stfs     f2, 0x54(r1)
	bl       __ct__4QuatFR4Quat
	lfs      f3, 0xcc(r1)
	addi     r3, r31, 0x48
	lfs      f2, 0xd0(r1)
	addi     r4, r1, 0x124
	lfs      f1, 0xd4(r1)
	lfs      f0, 0xd8(r1)
	stfs     f3, 0x130(r1)
	stfs     f2, 0x134(r1)
	stfs     f1, 0x138(r1)
	stfs     f0, 0x13c(r1)
	bl       "getYDegree__FR4QuatR10Vector3<f>"
	fmr      f30, f1
	addi     r3, r1, 0x130
	addi     r4, r1, 0x118
	bl       "getYDegree__FR4QuatR10Vector3<f>"
	lis      r3, sincosTable___5JMath@ha
	fmr      f31, f1
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0xaa8(r3)
	lfs      f29, 0x800(r3)
	fcmpo    cr0, f30, f0
	bge      lbl_8013A9C0
	fcmpo    cr0, f31, f30
	bge      lbl_8013A99C
	lfs      f0, 0x128(r1)
	addi     r3, r31, 0x58
	lfs      f1, lbl_8051823C@sda21(r2)
	addi     r4, r31, 0x30
	lfs      f8, 0x124(r1)
	addi     r5, r1, 0x40
	fmuls    f5, f0, f1
	lfs      f2, lbl_80518258@sda21(r2)
	lfs      f3, 0x12c(r1)
	fmuls    f0, f8, f1
	lfs      f4, lbl_80518274@sda21(r2)
	fnmsubs  f6, f3, f2, f5
	fmsubs   f7, f3, f1, f0
	lfs      f1, 0x30(r31)
	fmsubs   f5, f8, f2, f5
	lfs      f3, 0x34(r31)
	fmuls    f0, f6, f4
	fmuls    f2, f7, f4
	fmuls    f4, f5, f4
	lfs      f5, 0x38(r31)
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0x30(r31)
	stfs     f1, 0x34(r31)
	stfs     f2, 0x38(r31)
	bl       PSMTXMultVec
	lfs      f1, 0x44(r1)
	fcmpo    cr0, f31, f29
	lfs      f2, 0x48(r1)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x24(r31)
	stfs     f1, 0x28(r31)
	stfs     f2, 0x2c(r31)
	blt      lbl_8013AB2C
	lfs      f0, 0x130(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0x134(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0x138(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0x13c(r1)
	stfs     f0, 0x54(r31)
	b        lbl_8013AB2C

lbl_8013A99C:
	lfs      f0, 0x130(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0x134(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0x138(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0x13c(r1)
	stfs     f0, 0x54(r31)
	b        lbl_8013AB2C

lbl_8013A9C0:
	addi     r3, r1, 0x30
	bl       __ct__4QuatFv
	lfs      f1, 0x48(r31)
	addi     r3, r1, 0xbc
	lfs      f0, 0x140(r1)
	addi     r4, r1, 0x30
	lfs      f4, 0x14c(r1)
	fadds    f1, f1, f0
	lfs      f2, 0x148(r1)
	lfs      f0, 0x144(r1)
	stfs     f1, 0x30(r1)
	lfs      f5, 0x54(r31)
	lfs      f3, 0x50(r31)
	lfs      f1, 0x4c(r31)
	fadds    f4, f5, f4
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x3c(r1)
	stfs     f0, 0x34(r1)
	stfs     f2, 0x38(r1)
	bl       __ct__4QuatFR4Quat
	lfs      f0, 0xbc(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0xc0(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0xc4(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0xc8(r1)
	stfs     f0, 0x54(r31)
	b        lbl_8013AB2C

lbl_8013AA38:
	addi     r3, r1, 0x108
	bl       __ct__4QuatFv
	lfs      f0, lbl_80518270@sda21(r2)
	addi     r3, r1, 0xac
	lfs      f3, 0x164(r1)
	addi     r4, r1, 0x18
	fmuls    f5, f0, f31
	lfs      f2, 0x168(r1)
	lfs      f1, 0x16c(r1)
	lfs      f0, 0x160(r1)
	fmuls    f4, f3, f5
	fmuls    f3, f2, f5
	fmuls    f2, f1, f5
	stfs     f4, 0x24(r1)
	fmuls    f1, f5, f0
	stfs     f3, 0x28(r1)
	lwz      r6, 0x24(r1)
	stfs     f2, 0x2c(r1)
	lwz      r5, 0x28(r1)
	lwz      r0, 0x2c(r1)
	stw      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       "__ct__4QuatFf10Vector3<f>"
	lfs      f3, 0xac(r1)
	addi     r3, r1, 8
	lfs      f2, 0xb0(r1)
	lfs      f1, 0xb4(r1)
	lfs      f0, 0xb8(r1)
	stfs     f3, 0x108(r1)
	stfs     f2, 0x10c(r1)
	stfs     f1, 0x110(r1)
	stfs     f0, 0x114(r1)
	bl       __ct__4QuatFv
	lfs      f1, 0x48(r31)
	addi     r3, r1, 0x9c
	lfs      f0, 0x108(r1)
	addi     r4, r1, 8
	lfs      f4, 0x114(r1)
	fadds    f1, f1, f0
	lfs      f2, 0x110(r1)
	lfs      f0, 0x10c(r1)
	stfs     f1, 8(r1)
	lfs      f5, 0x54(r31)
	lfs      f3, 0x50(r31)
	lfs      f1, 0x4c(r31)
	fadds    f4, f5, f4
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x14(r1)
	stfs     f0, 0xc(r1)
	stfs     f2, 0x10(r1)
	bl       __ct__4QuatFR4Quat
	lfs      f0, 0x9c(r1)
	stfs     f0, 0x48(r31)
	lfs      f0, 0xa0(r1)
	stfs     f0, 0x4c(r31)
	lfs      f0, 0xa4(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0xa8(r1)
	stfs     f0, 0x54(r31)

lbl_8013AB2C:
	addi     r3, r31, 0x48
	bl       normalise__4QuatFv
	mr       r4, r31
	addi     r3, r30, 4
	addi     r5, r31, 0x48
	bl       "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
	psq_l    f31, 568(r1), 0, qr0
	lfd      f31, 0x230(r1)
	psq_l    f30, 552(r1), 0, qr0
	lfd      f30, 0x220(r1)
	psq_l    f29, 536(r1), 0, qr0
	lfd      f29, 0x210(r1)
	lwz      r31, 0x20c(r1)
	lwz      r0, 0x244(r1)
	lwz      r30, 0x208(r1)
	mtlr     r0
	addi     r1, r1, 0x240
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013AB74
 * Size:	000300
 */
void Rigid::resolveCollision(int, Vector3f&, Vector3f&, float)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	lwz      r7, mInstance__13DynamicsParms@sda21(r13)
	mr       r29, r3
	lfs      f3, lbl_80518278@sda21(r2)
	mr       r30, r6
	lfs      f2, 0xa8(r7)
	lfs      f0, lbl_8051823C@sda21(r2)
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f0
	mulli    r3, r4, 0x88
	lfs      f2, lbl_8051823C@sda21(r2)
	lfs      f8, 8(r5)
	lfs      f6, 4(r5)
	fneg     f0, f2
	addi     r31, r3, 0x34
	add      r31, r29, r31
	lfs      f4, 0(r5)
	lfs      f7, 8(r31)
	lfs      f5, 4(r31)
	lfs      f3, 0(r31)
	fsubs    f29, f8, f7
	lfs      f7, 0x24(r31)
	fsubs    f30, f6, f5
	fsubs    f31, f4, f3
	stfs     f7, 0x20(r1)
	fmuls    f4, f7, f29
	lfs      f6, 0x28(r31)
	stfs     f6, 0x24(r1)
	fmuls    f3, f6, f31
	lfs      f5, 0x2c(r31)
	fmsubs   f8, f7, f30, f3
	fmuls    f3, f5, f30
	stfs     f5, 0x28(r1)
	fmsubs   f4, f5, f31, f4
	stfs     f8, 0x28(r1)
	fmsubs   f6, f6, f29, f3
	stfs     f4, 0x24(r1)
	stfs     f6, 0x20(r1)
	lfs      f3, 0x10(r31)
	lfs      f5, 0xc(r31)
	fadds    f4, f3, f4
	lfs      f7, 0x14(r31)
	fadds    f6, f5, f6
	lfs      f3, 4(r30)
	fadds    f8, f7, f8
	lfs      f5, 0(r30)
	fneg     f4, f4
	lfs      f7, 8(r30)
	fneg     f6, f6
	fneg     f8, f8
	fmuls    f3, f4, f3
	fmadds   f3, f6, f5, f3
	fmadds   f3, f8, f7, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8013AC94
	li       r3, 0
	b        lbl_8013AE30

lbl_8013AC94:
	fabs     f0, f3
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_8013ACB0
	lfs      f1, lbl_80518258@sda21(r2)
	fmr      f3, f2

lbl_8013ACB0:
	lfs      f27, 0(r29)
	addi     r3, r31, 0x58
	lfs      f0, lbl_80518258@sda21(r2)
	addi     r4, r1, 0x20
	stfs     f31, 0x20(r1)
	addi     r5, r1, 0x14
	fadds    f0, f0, f1
	stfs     f30, 0x24(r1)
	stfs     f29, 0x28(r1)
	fneg     f0, f0
	lfs      f4, 0(r30)
	lfs      f5, 8(r30)
	fmuls    f28, f0, f3
	lfs      f3, 4(r30)
	fmuls    f1, f30, f4
	fmuls    f2, f31, f5
	fmuls    f0, f29, f3
	fmsubs   f3, f31, f3, f1
	fmsubs   f1, f29, f4, f2
	fmsubs   f0, f30, f5, f0
	stfs     f3, 0x28(r1)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	bl       PSMTXMultVec
	lfs      f5, 0x14(r1)
	addi     r3, r31, 0x58
	lfs      f4, 0x18(r1)
	addi     r4, r31, 0x30
	lfs      f3, 0x1c(r1)
	fmuls    f2, f5, f29
	fmuls    f1, f4, f31
	stfs     f5, 0x20(r1)
	fmuls    f0, f3, f30
	addi     r5, r1, 8
	fmsubs   f6, f3, f31, f2
	stfs     f4, 0x24(r1)
	fmsubs   f2, f4, f29, f0
	fmsubs   f4, f5, f30, f1
	stfs     f3, 0x28(r1)
	stfs     f2, 0x20(r1)
	stfs     f6, 0x24(r1)
	stfs     f4, 0x28(r1)
	lfs      f9, 4(r30)
	lfs      f8, 0(r30)
	fmuls    f0, f9, f6
	lfs      f6, 8(r30)
	lfs      f3, 0(r29)
	lfs      f1, 0xc(r31)
	fmadds   f0, f8, f2, f0
	lfs      f5, 0x10(r31)
	lfs      f7, 0x14(r31)
	fmadds   f0, f6, f4, f0
	fadds    f27, f27, f0
	fdivs    f0, f28, f27
	fneg     f0, f0
	fmuls    f8, f8, f0
	fmuls    f9, f9, f0
	fmuls    f10, f6, f0
	fmuls    f0, f8, f3
	fmuls    f4, f9, f3
	fmuls    f6, f10, f3
	fadds    f3, f1, f0
	fmuls    f2, f31, f10
	fmuls    f1, f30, f8
	fmuls    f0, f29, f9
	stfs     f3, 0xc(r31)
	fadds    f3, f5, f4
	fadds    f4, f7, f6
	fmsubs   f5, f29, f8, f2
	stfs     f3, 0x10(r31)
	fmsubs   f6, f31, f9, f1
	fmsubs   f3, f30, f10, f0
	stfs     f4, 0x14(r31)
	stfs     f31, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f29, 0x28(r1)
	stfs     f3, 0x20(r1)
	stfs     f5, 0x24(r1)
	stfs     f6, 0x28(r1)
	lfs      f0, 0x30(r31)
	lfs      f1, 0x34(r31)
	lfs      f2, 0x38(r31)
	fadds    f0, f0, f3
	fadds    f1, f1, f5
	fadds    f2, f2, f6
	stfs     f0, 0x30(r31)
	stfs     f1, 0x34(r31)
	stfs     f2, 0x38(r31)
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	li       r3, 1
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x24(r31)
	stfs     f1, 0x28(r31)
	stfs     f2, 0x2c(r31)

lbl_8013AE30:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8013AE74
 * Size:	000008
 */
u32 Parm<bool>::size() { return 0x1; }

/*
 * --INFO--
 * Address:	8013AE7C
 * Size:	000008
 */
void DynamicsParms::@12 @__dt()
{
	/*
	addi     r3, r3, -12
	b        __dt__13DynamicsParmsFv
	*/
}
