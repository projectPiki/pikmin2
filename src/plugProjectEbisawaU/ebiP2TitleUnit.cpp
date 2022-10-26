#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_ebiP2TitleUnit_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804961D8
    lbl_804961D8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x65626950
        .4byte 0x32546974
        .4byte 0x6C65556E
        .4byte 0x69740000
        .4byte 0x6F70656E
        .4byte 0x696E672E
        .4byte 0x626D6400
    .global lbl_80496200
    lbl_80496200:
        .4byte 0x65626950
        .4byte 0x32546974
        .4byte 0x6C65556E
        .4byte 0x69742E63
        .4byte 0x70700000
    .global lbl_80496214
    lbl_80496214:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x6F70656E
        .4byte 0x696E675F
        .4byte 0x77616974
        .4byte 0x2E62636B
        .4byte 0x00000000
        .4byte 0x6F70656E
        .4byte 0x696E675F
        .4byte 0x6B617A65
        .4byte 0x2E62636B
        .4byte 0x00000000
        .4byte 0x656E656D
        .4byte 0x792E626D
        .4byte 0x64000000
        .4byte 0x656E656D
        .4byte 0x792E6263
        .4byte 0x6B000000
    .global lbl_80496260
    lbl_80496260:
        .4byte 0x626C6163
        .4byte 0x6B5F706C
        .4byte 0x616E6500
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E79B8
    lbl_804E79B8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805160B8
    lbl_805160B8:
        .skip 0x4
    .global lbl_805160BC
    lbl_805160BC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F838
    lbl_8051F838:
        .float 1.0
    .global lbl_8051F83C
    lbl_8051F83C:
        .4byte 0x00000000
    .global lbl_8051F840
    lbl_8051F840:
        .float 0.5
    .global lbl_8051F844
    lbl_8051F844:
        .4byte 0x42700000
    .global lbl_8051F848
    lbl_8051F848:
        .4byte 0x3E4CCCCD
    .global lbl_8051F84C
    lbl_8051F84C:
        .4byte 0x3F4CCCCD
    .global lbl_8051F850
    lbl_8051F850:
        .4byte 0xC0A00001
        .4byte 0x00000000
    .global lbl_8051F858
    lbl_8051F858:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051F860
    lbl_8051F860:
        .4byte 0x63616D2E
        .4byte 0x626D6400
    .global lbl_8051F868
    lbl_8051F868:
        .4byte 0x63616D2E
        .4byte 0x62636B00
    .global lbl_8051F870
    lbl_8051F870:
        .4byte 0x63616D2E
        .4byte 0x62726B00
    .global lbl_8051F878
    lbl_8051F878:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void E3DModel_set2DCoordToBaseTRMatrix__Q23ebi5titleFP8J3DModelR10Vector2<float> R10Vector2<float> f(void)
{
	// UNUSED FUNCTION
}

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	803C0AF8
 * Size:	000088
 */
void TParamBase::loadSettingFile(JKRArchive*, char*)
{
	/*
stwu     r1, -0x430(r1)
mflr     r0
stw      r0, 0x434(r1)
stw      r31, 0x42c(r1)
mr       r31, r3
mr       r3, r4
lwz      r12, 0(r4)
mr       r4, r5
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
beq      lbl_803C0B68
mr       r4, r3
addi     r3, r1, 8
li       r5, -1
bl       __ct__9RamStreamFPvi
li       r0, 1
cmpwi    r0, 1
stw      r0, 0x14(r1)
bne      lbl_803C0B54
li       r0, 0
stw      r0, 0x41c(r1)

lbl_803C0B54:
mr       r3, r31
addi     r4, r1, 8
bl       read__10ParametersFR6Stream
li       r3, 1
b        lbl_803C0B6C

lbl_803C0B68:
li       r3, 0

lbl_803C0B6C:
lwz      r0, 0x434(r1)
lwz      r31, 0x42c(r1)
mtlr     r0
addi     r1, r1, 0x430
blr
	*/
}

/*
 * --INFO--
 * Address:	803C0B80
 * Size:	0000B0
 */
void TObjBase::calcModelBaseMtx_(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lfs      f6, lbl_8051F83C@sda21(r2)
stw      r0, 0x44(r1)
lfs      f7, lbl_8051F838@sda21(r2)
stw      r31, 0x3c(r1)
lfs      f0, 0x10(r3)
lfs      f1, 0x18(r3)
fneg     f8, f0
lwz      r4, 0x28(r3)
lfs      f5, 0xc(r3)
fmr      f2, f1
addi     r31, r4, 0x24
fmsubs   f3, f7, f8, f6
fmuls    f4, f6, f8
fnmsubs  f0, f7, f5, f6
stfs     f3, 0x24(r4)
fmr      f3, f1
fmsubs   f4, f6, f5, f4
stfs     f6, 0x28(r4)
stfs     f5, 0x2c(r4)
lfs      f5, 4(r3)
stfs     f5, 0x30(r4)
stfs     f4, 0x34(r4)
stfs     f7, 0x38(r4)
stfs     f6, 0x3c(r4)
stfs     f6, 0x40(r4)
stfs     f0, 0x44(r4)
stfs     f6, 0x48(r4)
stfs     f8, 0x4c(r4)
lfs      f0, 8(r3)
addi     r3, r1, 8
fneg     f0, f0
stfs     f0, 0x50(r4)
bl       PSMTXScale
mr       r3, r31
mr       r5, r31
addi     r4, r1, 8
bl       PSMTXConcat
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

} // namespace title
} // namespace ebi

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void pushOut___Q33ebi5title8TObjBaseFP10Vector2<float> f(void)
{
	// UNUSED FUNCTION
}

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	803C0C30
 * Size:	000094
 */
void TObjBase::pushOut(ebi::title::TObjBase*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r4
stw      r30, 0x18(r1)
mr       r30, r3
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_803C0CAC
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_803C0CAC
lfs      f1, 0x1c(r30)
addi     r3, r1, 8
lfs      f0, 0x1c(r31)
addi     r4, r31, 4
fadds    f0, f1, f0
stfs     f0, 0x10(r1)
lfs      f0, 4(r30)
stfs     f0, 8(r1)
lfs      f0, 8(r30)
stfs     f0, 0xc(r1)
bl       "out__Q23ebi11EGECircle2fFP10Vector2<f>"

lbl_803C0CAC:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803C0CC4
 * Size:	000220
 */
void TMapBase::setArchive(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
stw      r28, 0x10(r1)
mr       r28, r4
lis      r4, lbl_804961D8@ha
lwz      r12, 0(r28)
addi     r30, r4, lbl_804961D8@l
mr       r3, r28
lwz      r12, 0x14(r12)
addi     r4, r30, 0x1c
mtctr    r12
bctrl
or.      r29, r3, r3
bne      lbl_803C0D24
addi     r3, r30, 0x28
addi     r5, r30, 0x3c
li       r4, 0x60
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C0D24:
mr       r3, r29
lis      r4, 0x2010
bl       load__22J3DModelLoaderDataBaseFPCvUl
stw      r3, 0x30(r31)
mr       r3, r28
addi     r4, r30, 0x48
lwz      r12, 0(r28)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r29, r3, r3
bne      lbl_803C0D68
addi     r3, r30, 0x28
addi     r5, r30, 0x3c
li       r4, 0x6a
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C0D68:
mr       r3, r29
bl       load__20J3DAnmLoaderDataBaseFPCv
stw      r3, 0x48(r31)
mr       r3, r28
addi     r4, r30, 0x5c
lwz      r12, 0(r28)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r29, r3, r3
bne      lbl_803C0DA8
addi     r3, r30, 0x28
addi     r5, r30, 0x3c
li       r4, 0x6f
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C0DA8:
mr       r3, r29
bl       load__20J3DAnmLoaderDataBaseFPCv
stw      r3, 0x64(r31)
lis      r4, 4
lwz      r3, 0x30(r31)
bl       newSharedDisplayList__12J3DModelDataFUl
lwz      r3, 0x30(r31)
bl       makeSharedDL__12J3DModelDataFv
lwz      r3, 0x30(r31)
lwz      r4, 0x48(r31)
lwz      r0, 0x18(r3)
clrlwi   r3, r0, 0x1c
bl       J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
stw      r3, 0x4c(r31)
li       r6, 0
li       r7, 0
li       r8, 0
lwz      r3, 0x30(r31)
lwz      r4, 0x48(r31)
lwz      r0, 0x18(r3)
lwz      r5, 0x64(r31)
clrlwi   r3, r0, 0x1c
bl
J3DUNewMtxCalcAnm__FUlP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransform14J3DMtxCalcFlag
stw      r3, 0x68(r31)
li       r3, 0xdc
lfs      f0, lbl_8051F83C@sda21(r2)
stfs     f0, 0x14(r31)
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_803C0E58
lis      r3, __vt__8J3DModel@ha
lwz      r29, 0x30(r31)
addi     r0, r3, __vt__8J3DModel@l
mr       r28, r30
stw      r0, 0(r30)
addi     r3, r28, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r28
bl       initialize__8J3DModelFv
mr       r3, r28
mr       r4, r29
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl

lbl_803C0E58:
stw      r30, 0x28(r31)
addi     r3, r31, 0x34
lwz      r4, 0x48(r31)
lha      r4, 6(r4)
bl       init__12J3DFrameCtrlFs
li       r0, 2
lfs      f1, lbl_8051F844@sda21(r2)
stb      r0, 0x38(r31)
addi     r3, r31, 0x50
lfs      f2, lbl_8051F840@sda21(r2)
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
stfs     f0, 0x40(r31)
lwz      r4, 0x64(r31)
lha      r4, 6(r4)
bl       init__12J3DFrameCtrlFs
li       r0, 2
lfs      f1, lbl_8051F844@sda21(r2)
stb      r0, 0x54(r31)
lfs      f2, lbl_8051F840@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
stfs     f0, 0x5c(r31)
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
 * Address:	803C0EE4
 * Size:	000048
 */
void TMapBase::startWind(float)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
li       r0, 1
stw      r31, 0xc(r1)
mr       r31, r3
stw      r0, 0x2c(r3)
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x6c(r31)
stw      r3, 0x70(r31)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803C0F2C
 * Size:	00027C
 */
void TMapBase::update(void)
{
	/*
stwu     r1, -0x60(r1)
mflr     r0
stw      r0, 0x64(r1)
stfd     f31, 0x50(r1)
psq_st   f31, 88(r1), 0, qr0
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
lfs      f0, 0x10(r3)
mr       r31, r3
lfs      f1, 0x18(r31)
addi     r3, r1, 8
fneg     f8, f0
lfs      f6, lbl_8051F83C@sda21(r2)
lfs      f7, lbl_8051F838@sda21(r2)
fmr      f2, f1
lwz      r4, 0x28(r31)
fmsubs   f3, f7, f8, f6
lfs      f5, 0xc(r31)
fmuls    f4, f6, f8
addi     r30, r4, 0x24
stfs     f3, 0x24(r4)
fnmsubs  f0, f7, f5, f6
fmsubs   f4, f6, f5, f4
stfs     f6, 0x28(r4)
fmr      f3, f1
stfs     f5, 0x2c(r4)
lfs      f5, 4(r31)
stfs     f5, 0x30(r4)
stfs     f4, 0x34(r4)
stfs     f7, 0x38(r4)
stfs     f6, 0x3c(r4)
stfs     f6, 0x40(r4)
stfs     f0, 0x44(r4)
stfs     f6, 0x48(r4)
stfs     f8, 0x4c(r4)
lfs      f0, 8(r31)
fneg     f0, f0
stfs     f0, 0x50(r4)
bl       PSMTXScale
mr       r3, r30
mr       r5, r30
addi     r4, r1, 8
bl       PSMTXConcat
lwz      r0, 0x6c(r31)
cmplwi   r0, 0
bne      lbl_803C0FEC
li       r0, 0
stw      r0, 0x2c(r31)

lbl_803C0FEC:
lwz      r0, 0x2c(r31)
cmpwi    r0, 1
beq      lbl_803C1038
bge      lbl_803C114C
cmpwi    r0, 0
bge      lbl_803C1008
b        lbl_803C114C

lbl_803C1008:
addi     r3, r31, 0x34
bl       update__12J3DFrameCtrlFv
lfs      f0, 0x44(r31)
lwz      r3, 0x48(r31)
stfs     f0, 8(r3)
lwz      r3, 0x28(r31)
lwz      r0, 0x4c(r31)
lwz      r3, 4(r3)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)
b        lbl_803C114C

lbl_803C1038:
addi     r3, r31, 0x34
bl       update__12J3DFrameCtrlFv
addi     r3, r31, 0x50
bl       update__12J3DFrameCtrlFv
lfs      f0, 0x44(r31)
lwz      r3, 0x48(r31)
stfs     f0, 8(r3)
lfs      f0, 0x60(r31)
lwz      r3, 0x64(r31)
stfs     f0, 8(r3)
lwz      r3, 0x6c(r31)
lwz      r30, 0x68(r31)
cmplwi   r3, 0
beq      lbl_803C1078
addi     r0, r3, -1
stw      r0, 0x6c(r31)

lbl_803C1078:
lwz      r4, 0x70(r31)
cmplwi   r4, 0
beq      lbl_803C10B8
lwz      r3, 0x6c(r31)
lis      r0, 0x4330
stw      r0, 0x38(r1)
lfd      f2, lbl_8051F858@sda21(r2)
stw      r3, 0x3c(r1)
lfd      f0, 0x38(r1)
stw      r4, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803C10BC

lbl_803C10B8:
lfs      f1, lbl_8051F83C@sda21(r2)

lbl_803C10BC:
lfs      f31, lbl_8051F838@sda21(r2)
lfs      f0, lbl_8051F848@sda21(r2)
fsubs    f2, f31, f1
fcmpo    cr0, f2, f0
cror     2, 0, 2
bne      lbl_803C10DC
fdivs    f31, f2, f0
b        lbl_803C10FC

lbl_803C10DC:
lfs      f0, lbl_8051F84C@sda21(r2)
fcmpo    cr0, f2, f0
cror     2, 0, 2
bne      lbl_803C10F0
b        lbl_803C10FC

lbl_803C10F0:
lfs      f1, lbl_8051F850@sda21(r2)
fneg     f0, f1
fmadds   f31, f1, f2, f0

lbl_803C10FC:
mr       r3, r30
lfs      f0, lbl_8051F838@sda21(r2)
lwz      r12, 0(r30)
li       r4, 0
fsubs    f1, f0, f31
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
mr       r3, r30
fmr      f1, f31
lwz      r12, 0(r30)
li       r4, 1
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
lwz      r3, 4(r3)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r30, 0x54(r3)

lbl_803C114C:
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
psq_l    f31, 88(r1), 0, qr0
lwz      r0, 0x64(r1)
lfd      f31, 0x50(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803C11A8
 * Size:	000150
 */
void TBGEnemyBase::setArchive(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r4
lis      r4, lbl_804961D8@ha
stw      r28, 0x10(r1)
addi     r31, r4, lbl_804961D8@l
mr       r28, r3
mr       r3, r29
lwz      r12, 0(r29)
addi     r4, r31, 0x70
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r30, r3, r3
bne      lbl_803C1208
addi     r3, r31, 0x28
addi     r5, r31, 0x3c
li       r4, 0xc7
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C1208:
mr       r3, r30
lis      r4, 0x2010
bl       load__22J3DModelLoaderDataBaseFPCvUl
stw      r3, 0x2c(r28)
mr       r3, r29
addi     r4, r31, 0x7c
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r30, r3, r3
bne      lbl_803C124C
addi     r3, r31, 0x28
addi     r5, r31, 0x3c
li       r4, 0xd1
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C124C:
mr       r3, r30
bl       load__20J3DAnmLoaderDataBaseFPCv
stw      r3, 0x44(r28)
lis      r4, 4
lwz      r3, 0x2c(r28)
bl       newSharedDisplayList__12J3DModelDataFUl
lwz      r3, 0x2c(r28)
bl       makeSharedDL__12J3DModelDataFv
lwz      r3, 0x2c(r28)
lwz      r4, 0x44(r28)
lwz      r0, 0x18(r3)
clrlwi   r3, r0, 0x1c
bl       J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
stw      r3, 0x48(r28)
li       r3, 0xdc
lfs      f0, lbl_8051F83C@sda21(r2)
stfs     f0, 0x14(r28)
bl       __nw__FUl
or.      r31, r3, r3
beq      lbl_803C12D4
lis      r3, __vt__8J3DModel@ha
lwz      r30, 0x2c(r28)
addi     r0, r3, __vt__8J3DModel@l
mr       r29, r31
stw      r0, 0(r31)
addi     r3, r29, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r29
bl       initialize__8J3DModelFv
mr       r3, r29
mr       r4, r30
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl

lbl_803C12D4:
stw      r31, 0x28(r28)
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
 * Address:	803C12F8
 * Size:	00005C
 */
void TBGEnemyBase::start(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, 0x44(r3)
addi     r3, r31, 0x30
lha      r4, 6(r4)
bl       init__12J3DFrameCtrlFs
li       r0, 0
lfs      f1, lbl_8051F844@sda21(r2)
stb      r0, 0x34(r31)
lfs      f2, lbl_8051F840@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
stfs     f0, 0x3c(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803C1354
 * Size:	000124
 */
void TBGEnemyBase::update(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lfs      f7, lbl_8051F838@sda21(r2)
stw      r0, 0x44(r1)
lfs      f6, lbl_8051F83C@sda21(r2)
stw      r31, 0x3c(r1)
stw      r30, 0x38(r1)
mr       r30, r3
lfs      f0, 0x10(r3)
addi     r3, r1, 8
lfs      f1, 0x18(r30)
fneg     f8, f0
lwz      r4, 0x28(r30)
lfs      f5, 0xc(r30)
fmr      f2, f1
addi     r31, r4, 0x24
fmsubs   f3, f7, f8, f6
fmuls    f4, f6, f8
fnmsubs  f0, f7, f5, f6
stfs     f3, 0x24(r4)
fmr      f3, f1
fmsubs   f4, f6, f5, f4
stfs     f6, 0x28(r4)
stfs     f5, 0x2c(r4)
lfs      f5, 4(r30)
stfs     f5, 0x30(r4)
stfs     f4, 0x34(r4)
stfs     f7, 0x38(r4)
stfs     f6, 0x3c(r4)
stfs     f6, 0x40(r4)
stfs     f0, 0x44(r4)
stfs     f6, 0x48(r4)
stfs     f8, 0x4c(r4)
lfs      f0, 8(r30)
fneg     f0, f0
stfs     f0, 0x50(r4)
bl       PSMTXScale
mr       r3, r31
mr       r5, r31
addi     r4, r1, 8
bl       PSMTXConcat
addi     r3, r30, 0x30
bl       update__12J3DFrameCtrlFv
lfs      f0, 0x40(r30)
lwz      r3, 0x44(r30)
stfs     f0, 8(r3)
lwz      r3, 0x28(r30)
lwz      r0, 0x48(r30)
lwz      r3, 4(r3)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)
lwz      r3, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	803C1478
 * Size:	0002D8
 */
void TBlackPlane::setArchive(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r4
mr       r3, r29
addi     r4, r2, lbl_8051F860@sda21
stw      r28, 0x10(r1)
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r28, r3, r3
bne      lbl_803C14D8
lis      r3, lbl_80496200@ha
lis      r5, lbl_80496214@ha
addi     r3, r3, lbl_80496200@l
li       r4, 0x102
addi     r5, r5, lbl_80496214@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C14D8:
mr       r3, r28
lis      r4, 0x1010
bl       load__22J3DModelLoaderDataBaseFPCvUl
stw      r3, 0x2c(r31)
mr       r3, r29
addi     r4, r2, lbl_8051F868@sda21
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r28, r3, r3
bne      lbl_803C1524
lis      r3, lbl_80496200@ha
lis      r5, lbl_80496214@ha
addi     r3, r3, lbl_80496200@l
li       r4, 0x10c
addi     r5, r5, lbl_80496214@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C1524:
mr       r3, r28
bl       load__20J3DAnmLoaderDataBaseFPCv
stw      r3, 0x44(r31)
mr       r3, r29
addi     r4, r2, lbl_8051F870@sda21
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r28, r3, r3
bne      lbl_803C156C
lis      r3, lbl_80496200@ha
lis      r5, lbl_80496214@ha
addi     r3, r3, lbl_80496200@l
li       r4, 0x111
addi     r5, r5, lbl_80496214@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C156C:
mr       r3, r28
bl       load__20J3DAnmLoaderDataBaseFPCv
stw      r3, 0x60(r31)
lwz      r3, 0x2c(r31)
lwz      r4, 0x44(r31)
lwz      r0, 0x18(r3)
clrlwi   r3, r0, 0x1c
bl       J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
stw      r3, 0x48(r31)
li       r3, 0xdc
lfs      f0, lbl_8051F83C@sda21(r2)
stfs     f0, 0x14(r31)
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_803C15E0
lis      r3, __vt__8J3DModel@ha
lwz      r30, 0x2c(r31)
addi     r0, r3, __vt__8J3DModel@l
mr       r28, r29
stw      r0, 0(r29)
addi     r3, r28, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r28
bl       initialize__8J3DModelFv
mr       r3, r28
mr       r4, r30
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl

lbl_803C15E0:
stw      r29, 0x28(r31)
lwz      r4, 0x28(r31)
lwz      r3, 0x60(r31)
lwz      r4, 4(r4)
bl       searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData
li       r29, 0
b        lbl_803C16FC

lbl_803C15FC:
li       r3, 0xf4
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_803C16C0
lis      r3, __vt__14J3DMaterialAnm@ha
lis      r4, __ct__14J3DMatColorAnmFv@ha
addi     r0, r3, __vt__14J3DMaterialAnm@l
li       r6, 8
lis      r3, __dt__14J3DMatColorAnmFv@ha
stw      r0, 0(r30)
addi     r5, r3, __dt__14J3DMatColorAnmFv@l
addi     r4, r4, __ct__14J3DMatColorAnmFv@l
addi     r3, r30, 4
li       r7, 2
bl       __construct_array
lis      r3, __ct__12J3DTexMtxAnmFv@ha
lis      r5, __dt__12J3DTexMtxAnmFv@ha
addi     r4, r3, __ct__12J3DTexMtxAnmFv@l
li       r6, 8
addi     r3, r30, 0x14
addi     r5, r5, __dt__12J3DTexMtxAnmFv@l
li       r7, 8
bl       __construct_array
lis      r3, __ct__11J3DTexNoAnmFv@ha
lis      r5, __dt__11J3DTexNoAnmFv@ha
addi     r4, r3, __ct__11J3DTexNoAnmFv@l
li       r6, 0xc
addi     r3, r30, 0x54
addi     r5, r5, __dt__11J3DTexNoAnmFv@l
li       r7, 8
bl       __construct_array
lis      r3, __ct__14J3DTevColorAnmFv@ha
lis      r5, __dt__14J3DTevColorAnmFv@ha
addi     r4, r3, __ct__14J3DTevColorAnmFv@l
li       r6, 8
addi     r3, r30, 0xb4
addi     r5, r5, __dt__14J3DTevColorAnmFv@l
li       r7, 4
bl       __construct_array
lis      r3, __ct__15J3DTevKColorAnmFv@ha
lis      r5, __dt__15J3DTevKColorAnmFv@ha
addi     r4, r3, __ct__15J3DTevKColorAnmFv@l
li       r6, 8
addi     r3, r30, 0xd4
addi     r5, r5, __dt__15J3DTevKColorAnmFv@l
li       r7, 4
bl       __construct_array
mr       r3, r30
bl       initialize__14J3DMaterialAnmFv

lbl_803C16C0:
lwz      r3, 0x28(r31)
rlwinm   r28, r29, 2, 0xe, 0x1d
lwz      r3, 4(r3)
lwz      r3, 0x60(r3)
lwzx     r3, r3, r28
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
addi     r29, r29, 1
lwz      r3, 4(r3)
lwz      r3, 0x60(r3)
lwzx     r3, r3, r28
stw      r30, 0x3c(r3)

lbl_803C16FC:
lwz      r4, 0x28(r31)
clrlwi   r3, r29, 0x10
lwz      r5, 4(r4)
lhz      r0, 0x5c(r5)
cmplw    r3, r0
blt      lbl_803C15FC
lwz      r4, 0x60(r31)
addi     r3, r5, 0x58
bl       entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey
lis      r5, j3dSys@ha
mr       r4, r3
addi     r3, r5, j3dSys@l
bl       ErrorReport__6J3DSysCF10J3DErrType
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
 * Address:	803C1750
 * Size:	0000A0
 */
void TBlackPlane::start(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, 0x44(r3)
addi     r3, r31, 0x30
lha      r4, 6(r4)
addi     r0, r4, -2
extsh    r4, r0
bl       init__12J3DFrameCtrlFs
li       r0, 0
lfs      f1, lbl_8051F844@sda21(r2)
stb      r0, 0x34(r31)
addi     r3, r31, 0x4c
lfs      f2, lbl_8051F840@sda21(r2)
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
stfs     f0, 0x3c(r31)
lwz      r4, 0x60(r31)
lha      r4, 6(r4)
addi     r0, r4, -2
extsh    r4, r0
bl       init__12J3DFrameCtrlFs
li       r0, 0
lfs      f1, lbl_8051F844@sda21(r2)
stb      r0, 0x50(r31)
lfs      f2, lbl_8051F840@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
stfs     f0, 0x58(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803C17F0
 * Size:	000110
 */
void TBlackPlane::updateBeforeCamera(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lfs      f7, lbl_8051F838@sda21(r2)
stw      r0, 0x44(r1)
lfs      f6, lbl_8051F83C@sda21(r2)
stw      r31, 0x3c(r1)
stw      r30, 0x38(r1)
mr       r30, r3
lfs      f0, 0x10(r3)
addi     r3, r1, 8
lfs      f1, 0x18(r30)
fneg     f8, f0
lwz      r4, 0x28(r30)
lfs      f5, 0xc(r30)
fmr      f2, f1
addi     r31, r4, 0x24
fmsubs   f3, f7, f8, f6
fmuls    f4, f6, f8
fnmsubs  f0, f7, f5, f6
stfs     f3, 0x24(r4)
fmr      f3, f1
fmsubs   f4, f6, f5, f4
stfs     f6, 0x28(r4)
stfs     f5, 0x2c(r4)
lfs      f5, 4(r30)
stfs     f5, 0x30(r4)
stfs     f4, 0x34(r4)
stfs     f7, 0x38(r4)
stfs     f6, 0x3c(r4)
stfs     f6, 0x40(r4)
stfs     f0, 0x44(r4)
stfs     f6, 0x48(r4)
stfs     f8, 0x4c(r4)
lfs      f0, 8(r30)
fneg     f0, f0
stfs     f0, 0x50(r4)
bl       PSMTXScale
mr       r3, r31
mr       r5, r31
addi     r4, r1, 8
bl       PSMTXConcat
addi     r3, r30, 0x30
bl       update__12J3DFrameCtrlFv
addi     r3, r30, 0x4c
bl       update__12J3DFrameCtrlFv
lfs      f0, 0x5c(r30)
lwz      r3, 0x60(r30)
stfs     f0, 8(r3)
lfs      f0, 0x40(r30)
lwz      r3, 0x44(r30)
stfs     f0, 8(r3)
lwz      r3, 0x28(r30)
lwz      r0, 0x48(r30)
lwz      r3, 4(r3)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)
lwz      r3, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	803C1900
 * Size:	000050
 */
void TBlackPlane::updateAfterCamera(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x28(r3)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
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
 * Address:	803C1950
 * Size:	00004C
 */
void TBlackPlane::setLogo(void)
{
	/*
stwu     r1, -0x20(r1)
lis      r0, 0x4330
lfd      f1, lbl_8051F878@sda21(r2)
lha      r4, 0x38(r3)
stw      r0, 8(r1)
xoris    r4, r4, 0x8000
stw      r4, 0xc(r1)
lfd      f0, 8(r1)
stw      r0, 0x10(r1)
fsubs    f0, f0, f1
stfs     f0, 0x40(r3)
lha      r0, 0x54(r3)
xoris    r0, r0, 0x8000
stw      r0, 0x14(r1)
lfd      f0, 0x10(r1)
fsubs    f0, f0, f1
stfs     f0, 0x5c(r3)
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803C199C
 * Size:	000078
 */
void TBlackPlane::getCameraPos(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
lis      r4, lbl_80496260@ha
stw      r30, 8(r1)
mr       r30, r3
addi     r4, r4, lbl_80496260@l
lwz      r5, 0x28(r31)
lwz      r3, 4(r5)
lwz      r3, 0x54(r3)
bl       getIndex__10JUTNameTabCFPCc
lwz      r4, 0x28(r31)
mulli    r0, r3, 0x30
lwz      r3, 0x84(r4)
lwz      r3, 0xc(r3)
add      r3, r3, r0
lfs      f2, 0x2c(r3)
lfs      f1, 0x1c(r3)
lfs      f0, 0xc(r3)
stfs     f0, 0(r30)
stfs     f1, 4(r30)
stfs     f2, 8(r30)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace title
} // namespace ebi

/*
 * --INFO--
 * Address:	803C1A14
 * Size:	000028
 */
void __sinit_ebiP2TitleUnit_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804E79B8@ha
	stw      r0, lbl_805160B8@sda21(r13)
	stfsu    f0, lbl_804E79B8@l(r3)
	stfs     f0, lbl_805160BC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
