#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_ebiP2TitleLight_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E79D8
    lbl_804E79D8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q33ebi5title14TTitleLightMgr
    __vt__Q33ebi5title14TTitleLightMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q33ebi5title14TTitleLightMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q33ebi5title14TTitleLightMgrFv
        .4byte set__8LightMgrFR8Graphics
        .4byte set__8LightMgrFR7Matrixf
        .4byte drawDebugInfo__8LightMgrFR8Graphics
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805160C8
    lbl_805160C8:
        .skip 0x4
    .global lbl_805160CC
    lbl_805160CC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F8A0
    lbl_8051F8A0:
        .4byte 0x00000000
    .global lbl_8051F8A4
    lbl_8051F8A4:
        .float 1.0
*/

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	803C1F58
 * Size:	000094
 */
void TTitleLightMgr::loadSettingFile(JKRArchive*, char*)
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
beq      lbl_803C1FD8
mr       r4, r3
addi     r3, r1, 8
li       r5, -1
bl       __ct__9RamStreamFPvi
li       r0, 1
cmpwi    r0, 1
stw      r0, 0x14(r1)
bne      lbl_803C1FB4
li       r0, 0
stw      r0, 0x41c(r1)

lbl_803C1FB4:
addi     r3, r31, 0x100
addi     r4, r1, 8
bl       read__10ParametersFR6Stream
addi     r3, r31, 0x1b0
addi     r4, r1, 8
bl       read__10ParametersFR6Stream
addi     r3, r31, 0x3c8
addi     r4, r1, 8
bl       read__10ParametersFR6Stream

lbl_803C1FD8:
lwz      r0, 0x434(r1)
lwz      r31, 0x42c(r1)
mtlr     r0
addi     r1, r1, 0x430
blr
	*/
}

/*
 * --INFO--
 * Address:	803C1FEC
 * Size:	00017C
 */
void TTitleLightMgr::setParam_(void)
{
	/*
lwz      r6, 0x19c(r3)
lwz      r5, 0x174(r3)
lwz      r4, 0x14c(r3)
lwz      r0, 0x124(r3)
lfs      f0, lbl_8051F8A0@sda21(r2)
stb      r0, 0x30(r3)
stb      r4, 0x31(r3)
stb      r5, 0x32(r3)
stb      r6, 0x33(r3)
lwz      r6, 0x24c(r3)
lwz      r5, 0x224(r3)
lwz      r4, 0x1fc(r3)
lwz      r0, 0x1d4(r3)
stb      r0, 0x84(r3)
stb      r4, 0x85(r3)
stb      r5, 0x86(r3)
stb      r6, 0x87(r3)
lfs      f3, 0x2c4(r3)
lfs      f2, 0x29c(r3)
lfs      f1, 0x274(r3)
stfs     f1, 0x6c(r3)
stfs     f2, 0x70(r3)
stfs     f3, 0x74(r3)
lfs      f3, 0x314(r3)
lfs      f4, 0x33c(r3)
fmuls    f1, f3, f3
lfs      f2, 0x2ec(r3)
fmuls    f5, f4, f4
fmadds   f1, f2, f2, f1
fadds    f1, f5, f1
fcmpo    cr0, f1, f0
ble      lbl_803C207C
ble      lbl_803C2080
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803C2080

lbl_803C207C:
fmr      f1, f0

lbl_803C2080:
lfs      f0, lbl_8051F8A0@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803C20A0
lfs      f0, lbl_8051F8A4@sda21(r2)
fdivs    f0, f0, f1
fmuls    f2, f2, f0
fmuls    f3, f3, f0
fmuls    f4, f4, f0

lbl_803C20A0:
stfs     f2, 0x78(r3)
li       r4, 1
li       r0, 3
lfs      f0, lbl_8051F8A0@sda21(r2)
stfs     f3, 0x7c(r3)
stfs     f4, 0x80(r3)
lfs      f2, 0x3b4(r3)
lfs      f3, 0x38c(r3)
lfs      f1, 0x364(r3)
stfs     f1, 0x8c(r3)
stfs     f3, 0x90(r3)
stfs     f2, 0x94(r3)
stb      r4, 0x98(r3)
stb      r0, 0x99(r3)
lwz      r6, 0x464(r3)
lwz      r5, 0x43c(r3)
lwz      r4, 0x414(r3)
lwz      r0, 0x3ec(r3)
stb      r0, 0xdc(r3)
stb      r4, 0xdd(r3)
stb      r5, 0xde(r3)
stb      r6, 0xdf(r3)
lfs      f4, 0x4b4(r3)
lfs      f5, 0x4dc(r3)
fmuls    f1, f4, f4
lfs      f3, 0x48c(r3)
fmuls    f2, f5, f5
fmadds   f1, f3, f3, f1
fadds    f1, f2, f1
fcmpo    cr0, f1, f0
ble      lbl_803C212C
ble      lbl_803C2130
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803C2130

lbl_803C212C:
fmr      f1, f0

lbl_803C2130:
lfs      f0, lbl_8051F8A0@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803C2150
lfs      f0, lbl_8051F8A4@sda21(r2)
fdivs    f0, f0, f1
fmuls    f3, f3, f0
fmuls    f4, f4, f0
fmuls    f5, f5, f0

lbl_803C2150:
stfs     f3, 0xd0(r3)
stfs     f4, 0xd4(r3)
stfs     f5, 0xd8(r3)
lfs      f0, 0x504(r3)
stfs     f0, 0xf4(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803C2168
 * Size:	000020
 */
void TTitleLightMgr::update(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
bl       setParam___Q33ebi5title14TTitleLightMgrFv
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803C2188
 * Size:	000094
 */
void TTitleLightMgr::setCameraMtx(float (*)[4])
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
mr       r31, r3
mr       r3, r4
addi     r4, r1, 0x10
bl       PSMTXCopy
lbz      r7, 0x30(r31)
addi     r4, r1, 0xc
lbz      r6, 0x31(r31)
li       r3, 4
lbz      r5, 0x32(r31)
lbz      r0, 0x33(r31)
stb      r7, 8(r1)
stb      r6, 9(r1)
stb      r5, 0xa(r1)
stb      r0, 0xb(r1)
lwz      r0, 8(r1)
stw      r0, 0xc(r1)
bl       GXSetChanAmbColor
lwz      r31, 0x44(r31)
b        lbl_803C2200

lbl_803C21E4:
mr       r3, r31
addi     r4, r1, 0x10
lwz      r12, 0(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r31, 4(r31)

lbl_803C2200:
cmplwi   r31, 0
bne      lbl_803C21E4
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

} // namespace title
} // namespace ebi

/*
 * --INFO--
 * Address:	803C221C
 * Size:	000028
 */
void __sinit_ebiP2TitleLight_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804E79D8@ha
	stw      r0, lbl_805160C8@sda21(r13)
	stfsu    f0, lbl_804E79D8@l(r3)
	stfs     f0, lbl_805160CC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
