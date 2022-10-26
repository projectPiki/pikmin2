#include "types.h"

#include "Vector2.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497138
    lbl_80497138:
        .4byte 0x54436F6F
        .4byte 0x72644D67
        .4byte 0x72000000
    .global lbl_80497144
    lbl_80497144:
        .4byte 0x54546761
        .4byte 0x4C6F6164
        .4byte 0x50617261
        .4byte 0x6D657465
        .4byte 0x72730000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FC20
    lbl_8051FC20:
        .4byte 0x4F666673
        .4byte 0x65745800
    .global lbl_8051FC28
    lbl_8051FC28:
        .4byte 0xC3A00000
    .global lbl_8051FC2C
    lbl_8051FC2C:
        .4byte 0xC3FA0000
    .global lbl_8051FC30
    lbl_8051FC30:
        .4byte 0x43FA0000
    .global lbl_8051FC34
    lbl_8051FC34:
        .4byte 0x4F666673
        .4byte 0x65745900
    .global lbl_8051FC3C
    lbl_8051FC3C:
        .4byte 0xC3700000
    .global lbl_8051FC40
    lbl_8051FC40:
        .4byte 0x588AD48A
        .4byte 0x75000000
    .global lbl_8051FC48
    lbl_8051FC48:
        .float 1.0
    .global lbl_8051FC4C
    lbl_8051FC4C:
        .4byte 0x00000000
    .global lbl_8051FC50
    lbl_8051FC50:
        .4byte 0x42C80000
    .global lbl_8051FC54
    lbl_8051FC54:
        .4byte 0x598AD48A
        .4byte 0x75000000
*/

namespace ebi {
namespace title {
namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	803E396C
 * Size:	0001A4
 */
void TCoordMgr::TCoordMgr(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lis      r6, lbl_80497138@ha
lis      r4, __vt__5CNode@ha
stw      r0, 0x14(r1)
addi     r8, r6, lbl_80497138@l
addi     r0, r4, __vt__5CNode@l
li       r9, 0
stw      r31, 0xc(r1)
mr       r31, r3
lis      r5, __vt__Q33ebi5title9TCoordMgr@ha
li       r6, 8
stw      r0, 0(r3)
addi     r0, r5, __vt__Q33ebi5title9TCoordMgr@l
lis      r3, "__ct__10Vector2<f>Fv"@ha
li       r5, 0
stw      r9, 0x10(r31)
addi     r4, r3, "__ct__10Vector2<f>Fv"@l
addi     r3, r31, 0x2c
li       r7, 0x1f4
stw      r9, 0xc(r31)
stw      r9, 8(r31)
stw      r9, 4(r31)
stw      r8, 0x14(r31)
stw      r0, 0(r31)
bl       __construct_array
addi     r0, r31, 0x1078
lis      r5, 0x74676130@ha
stw      r0, 0xfcc(r31)
li       r0, 0
lis      r3, lbl_80497144@ha
addi     r4, r31, 0xfcc
stw      r0, 0xfd0(r31)
addi     r0, r3, lbl_80497144@l
addi     r3, r4, 0xc
addi     r5, r5, 0x74676130@l
stw      r0, 0xfd4(r31)
addi     r6, r2, lbl_8051FC20@sda21
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<f>"@ha
lis      r5, 0x74676131@ha
addi     r0, r3, "__vt__7Parm<f>"@l
addi     r4, r31, 0xfcc
stw      r0, 0xfd8(r31)
addi     r3, r4, 0x34
lfs      f0, lbl_8051FC28@sda21(r2)
addi     r5, r5, 0x74676131@l
lfs      f1, lbl_8051FC2C@sda21(r2)
addi     r6, r2, lbl_8051FC34@sda21
stfs     f0, 0xff0(r31)
lfs      f0, lbl_8051FC30@sda21(r2)
stfs     f1, 0xff8(r31)
stfs     f0, 0xffc(r31)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<f>"@ha
lis      r5, 0x74676132@ha
addi     r0, r3, "__vt__7Parm<f>"@l
addi     r4, r31, 0xfcc
stw      r0, 0x1000(r31)
addi     r3, r4, 0x5c
lfs      f0, lbl_8051FC3C@sda21(r2)
addi     r5, r5, 0x74676132@l
lfs      f1, lbl_8051FC2C@sda21(r2)
addi     r6, r2, lbl_8051FC40@sda21
stfs     f0, 0x1018(r31)
lfs      f0, lbl_8051FC30@sda21(r2)
stfs     f1, 0x1020(r31)
stfs     f0, 0x1024(r31)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<f>"@ha
lis      r5, 0x74676133@ha
addi     r0, r3, "__vt__7Parm<f>"@l
addi     r4, r31, 0xfcc
stw      r0, 0x1028(r31)
addi     r3, r4, 0x84
lfs      f0, lbl_8051FC48@sda21(r2)
addi     r5, r5, 0x74676133@l
lfs      f1, lbl_8051FC4C@sda21(r2)
addi     r6, r2, lbl_8051FC54@sda21
stfs     f0, 0x1040(r31)
lfs      f0, lbl_8051FC50@sda21(r2)
stfs     f1, 0x1048(r31)
stfs     f0, 0x104c(r31)
bl       __ct__8BaseParmFP10ParametersUlPc
lis      r3, "__vt__7Parm<f>"@ha
lfs      f2, lbl_8051FC48@sda21(r2)
addi     r0, r3, "__vt__7Parm<f>"@l
lfs      f1, lbl_8051FC4C@sda21(r2)
stw      r0, 0x1050(r31)
li       r0, 0
lfs      f0, lbl_8051FC50@sda21(r2)
mr       r3, r31
stfs     f2, 0x1068(r31)
stfs     f1, 0x1070(r31)
stfs     f0, 0x1074(r31)
stw      r0, 0x18(r31)
stw      r0, 0x1c(r31)
stw      r0, 0x20(r31)
stw      r0, 0x24(r31)
stw      r0, 0x28(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void TCoordMgr::getDestPos(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E3B10
 * Size:	000118
 */
void TCoordMgr::copyCoordinate(Vector2<float>*)
{
	/*
mr       r5, r3
li       r7, 0
mr       r6, r4
b        lbl_803E3B3C

lbl_803E3B20:
lfs      f0, 0x34c(r5)
addi     r7, r7, 1
stfs     f0, 0x320(r6)
lfs      f0, 0x350(r5)
addi     r5, r5, 8
stfs     f0, 0x324(r6)
addi     r6, r6, 8

lbl_803E3B3C:
lwz      r0, 0x1c(r3)
cmpw     r7, r0
blt      lbl_803E3B20
mr       r5, r3
mr       r6, r4
li       r7, 0
b        lbl_803E3B74

lbl_803E3B58:
lfs      f0, 0x66c(r5)
addi     r7, r7, 1
stfs     f0, 0x640(r6)
lfs      f0, 0x670(r5)
addi     r5, r5, 8
stfs     f0, 0x644(r6)
addi     r6, r6, 8

lbl_803E3B74:
lwz      r0, 0x20(r3)
cmpw     r7, r0
blt      lbl_803E3B58
mr       r5, r3
mr       r6, r4
li       r7, 0
b        lbl_803E3BAC

lbl_803E3B90:
lfs      f0, 0x2c(r5)
addi     r7, r7, 1
stfs     f0, 0(r6)
lfs      f0, 0x30(r5)
addi     r5, r5, 8
stfs     f0, 4(r6)
addi     r6, r6, 8

lbl_803E3BAC:
lwz      r0, 0x18(r3)
cmpw     r7, r0
blt      lbl_803E3B90
mr       r5, r3
mr       r6, r4
li       r7, 0
b        lbl_803E3BE4

lbl_803E3BC8:
lfs      f0, 0x98c(r5)
addi     r7, r7, 1
stfs     f0, 0x960(r6)
lfs      f0, 0x990(r5)
addi     r5, r5, 8
stfs     f0, 0x964(r6)
addi     r6, r6, 8

lbl_803E3BE4:
lwz      r0, 0x24(r3)
cmpw     r7, r0
blt      lbl_803E3BC8
mr       r5, r3
li       r6, 0
b        lbl_803E3C18

lbl_803E3BFC:
lfs      f0, 0xcac(r5)
addi     r6, r6, 1
stfs     f0, 0xc80(r4)
lfs      f0, 0xcb0(r5)
addi     r5, r5, 8
stfs     f0, 0xc84(r4)
addi     r4, r4, 8

lbl_803E3C18:
lwz      r0, 0x28(r3)
cmpw     r6, r0
blt      lbl_803E3BFC
blr
	*/
}

/*
 * --INFO--
 * Address:	803E3C28
 * Size:	00007C
 */
void TCoordMgr::readCoordinate(JKRArchive*, char*)
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
beq      lbl_803E3C90
mr       r4, r3
addi     r3, r1, 8
li       r5, -1
bl       __ct__9RamStreamFPvi
li       r0, 1
cmpwi    r0, 1
stw      r0, 0x14(r1)
bne      lbl_803E3C84
li       r0, 0
stw      r0, 0x41c(r1)

lbl_803E3C84:
mr       r3, r31
addi     r4, r1, 8
bl       readCoordinate__Q33ebi5title9TCoordMgrFR6Stream

lbl_803E3C90:
lwz      r0, 0x434(r1)
lwz      r31, 0x42c(r1)
mtlr     r0
addi     r1, r1, 0x430
blr
	*/
}

/*
 * --INFO--
 * Address:	803E3CA4
 * Size:	000144
 */
void TCoordMgr::readCoordinate(Stream&)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stmw     r25, 0x14(r1)
mr       r28, r3
mr       r29, r4
li       r31, 0
mr       r27, r28

lbl_803E3CC4:
mr       r3, r29
bl       readInt__6StreamFv
cmpwi    r31, 2
stw      r3, 0x18(r27)
li       r30, 0
beq      lbl_803E3D38
bge      lbl_803E3CF0
cmpwi    r31, 0
beq      lbl_803E3D1C
bge      lbl_803E3D00
b        lbl_803E3D88

lbl_803E3CF0:
cmpwi    r31, 4
beq      lbl_803E3D70
bge      lbl_803E3D88
b        lbl_803E3D54

lbl_803E3D00:
lwz      r0, 0x18(r27)
li       r30, 0x64
cmpwi    r0, 0x64
ble      lbl_803E3D88
li       r0, 0x64
stw      r0, 0x18(r27)
b        lbl_803E3D88

lbl_803E3D1C:
lwz      r0, 0x18(r27)
li       r30, 0
cmpwi    r0, 0x64
ble      lbl_803E3D88
li       r0, 0x64
stw      r0, 0x18(r27)
b        lbl_803E3D88

lbl_803E3D38:
lwz      r0, 0x18(r27)
li       r30, 0xc8
cmpwi    r0, 0x64
ble      lbl_803E3D88
li       r0, 0x64
stw      r0, 0x18(r27)
b        lbl_803E3D88

lbl_803E3D54:
lwz      r0, 0x18(r27)
li       r30, 0x12c
cmpwi    r0, 0x64
ble      lbl_803E3D88
li       r0, 0x64
stw      r0, 0x18(r27)
b        lbl_803E3D88

lbl_803E3D70:
lwz      r0, 0x18(r27)
li       r30, 0x190
cmpwi    r0, 0x64
ble      lbl_803E3D88
li       r0, 0x64
stw      r0, 0x18(r27)

lbl_803E3D88:
li       r25, 0
b        lbl_803E3DB8

lbl_803E3D90:
mr       r3, r29
bl       readFloat__6StreamFv
add      r0, r25, r30
mr       r3, r29
slwi     r0, r0, 3
add      r26, r28, r0
stfs     f1, 0x2c(r26)
bl       readFloat__6StreamFv
stfs     f1, 0x30(r26)
addi     r25, r25, 1

lbl_803E3DB8:
lwz      r0, 0x18(r27)
cmpw     r25, r0
blt      lbl_803E3D90
addi     r31, r31, 1
addi     r27, r27, 4
cmpwi    r31, 5
blt      lbl_803E3CC4
lmw      r25, 0x14(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}
} // namespace title
} // namespace ebi
} // namespace title
} // namespace ebi
