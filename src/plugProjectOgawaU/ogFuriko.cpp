#include "og/Screen/callbackNodes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F550
    lbl_8048F550:
        .4byte 0x6F674675
        .4byte 0x72696B6F
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x4E554C4C
        .4byte 0x2070616E
        .4byte 0x652E0A00
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen15CallBack_Furiko
    __vt__Q32og6Screen15CallBack_Furiko:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen15CallBack_FurikoFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen15CallBack_FurikoFv
        .4byte draw__Q32og6Screen15CallBack_FurikoFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DEA8
    lbl_8051DEA8:
        .4byte 0x00000000
    .global lbl_8051DEAC
    lbl_8051DEAC:
        .4byte 0x43660000
    .global lbl_8051DEB0
    lbl_8051DEB0:
        .4byte 0x42660000
    .global lbl_8051DEB4
    lbl_8051DEB4:
        .4byte 0x3EDC28F6
    .global lbl_8051DEB8
    lbl_8051DEB8:
        .4byte 0x3D088889
    .global lbl_8051DEBC
    lbl_8051DEBC:
        .4byte 0x42B40000
    .global lbl_8051DEC0
    lbl_8051DEC0:
        .4byte 0x42652EE0
    .global lbl_8051DEC4
    lbl_8051DEC4:
        .float 0.5
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
CallBack_Furiko::CallBack_Furiko(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80329F18
 * Size:	000040
 */
void CallBack_Furiko::stop(void)
{
	/*
li       r4, 0
li       r0, 1
stb      r4, 0x20(r3)
lfs      f2, lbl_8051DEA8@sda21(r2)
stb      r0, 0x21(r3)
stfs     f2, 0x24(r3)
stfs     f2, 0x28(r3)
lfs      f0, 0x24(r3)
stfs     f0, 0x38(r3)
lfs      f1, 0x28(r3)
lfs      f0, 0x2c(r3)
fadds    f0, f1, f0
stfs     f0, 0x3c(r3)
stfs     f2, 0x40(r3)
stfs     f2, 0x44(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void CallBack_Furiko::init(J2DPane*, float, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80329F58
 * Size:	000010
 */
void CallBack_Furiko::setParam(float, float, float)
{
	/*
stfs     f1, 0x2c(r3)
stfs     f2, 0x34(r3)
stfs     f3, 0x30(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80329F68
 * Size:	000168
 */
void CallBack_Furiko::update(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_8051DEB8@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, sys@sda21(r13)
lwz      r0, 0x1c(r3)
lfs      f1, 0x54(r4)
cmplwi   r0, 0
fdivs    f0, f1, f0
beq      lbl_8032A0BC
lbz      r0, 0x20(r31)
cmplwi   r0, 0
beq      lbl_8032A0BC
lfs      f2, 0x28(r31)
lfs      f1, 0x3c(r31)
lfs      f3, 0x24(r31)
fsubs    f6, f2, f1
lfs      f2, 0x38(r31)
lfs      f1, lbl_8051DEA8@sda21(r2)
fsubs    f3, f3, f2
fmuls    f2, f6, f6
fmadds   f5, f3, f3, f2
fcmpo    cr0, f5, f1
ble      lbl_80329FE0
ble      lbl_80329FE4
frsqrte  f1, f5
fmuls    f5, f1, f5
b        lbl_80329FE4

lbl_80329FE0:
fmr      f5, f1

lbl_80329FE4:
lfs      f1, lbl_8051DEA8@sda21(r2)
fcmpo    cr0, f5, f1
ble      lbl_8032A0B4
fdivs    f2, f3, f5
lfs      f1, 0x2c(r31)
lis      r3, atanTable___5JMath@ha
lfs      f4, 0x40(r31)
lfs      f3, 0x34(r31)
addi     r3, r3, atanTable___5JMath@l
fsubs    f7, f5, f1
fdivs    f1, f6, f5
fmuls    f2, f7, f2
fmuls    f1, f7, f1
fmuls    f2, f0, f2
fmuls    f1, f0, f1
fnmsubs  f2, f4, f3, f2
fmadds   f2, f0, f2, f4
stfs     f2, 0x40(r31)
lfs      f3, 0x44(r31)
lfs      f2, 0x34(r31)
lfs      f4, 0x30(r31)
fnmsubs  f1, f3, f2, f1
fadds    f1, f4, f1
fmadds   f1, f0, f1, f3
stfs     f1, 0x44(r31)
lfs      f2, 0x40(r31)
lfs      f1, 0x38(r31)
fmadds   f1, f2, f0, f1
stfs     f1, 0x38(r31)
lfs      f2, 0x44(r31)
lfs      f1, 0x3c(r31)
fmadds   f0, f2, f0, f1
stfs     f0, 0x3c(r31)
lfs      f1, 0x24(r31)
lfs      f0, 0x38(r31)
lfs      f2, 0x28(r31)
fsubs    f0, f1, f0
lfs      f1, 0x3c(r31)
fsubs    f1, f2, f1
fneg     f2, f0
bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
lfs      f2, lbl_8051DEC0@sda21(r2)
lfs      f0, lbl_8051DEBC@sda21(r2)
fmadds   f0, f2, f1, f0
stfs     f0, 0x48(r31)
lwz      r3, 0x1c(r31)
lfs      f0, 0x48(r31)
stfs     f0, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl

lbl_8032A0B4:
li       r0, 0
stb      r0, 0x20(r31)

lbl_8032A0BC:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8032A0D0
 * Size:	0001A0
 */
void CallBack_Furiko::draw(Graphics&, J2DGrafContext&)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stw      r31, 0x3c(r1)
mr       r31, r3
lwz      r4, 0x1c(r3)
cmplwi   r4, 0
beq      lbl_8032A25C
addi     r3, r1, 0x14
li       r5, 0
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x14(r1)
addi     r3, r1, 8
lwz      r6, 0x18(r1)
li       r5, 3
lwz      r0, 0x1c(r1)
stw      r4, 0x2c(r1)
lwz      r4, 0x1c(r31)
stw      r6, 0x30(r1)
stw      r0, 0x34(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r4, 0x1c(r31)
lis      r3, 0x55555556@ha
lwz      r6, 8(r1)
addi     r0, r3, 0x55555556@l
lbz      r7, 0xb7(r4)
lwz      r5, 0xc(r1)
mulhw    r3, r0, r7
lwz      r4, 0x10(r1)
stw      r6, 0x20(r1)
stw      r5, 0x24(r1)
srwi     r0, r3, 0x1f
stw      r4, 0x28(r1)
add      r0, r3, r0
mulli    r0, r0, 3
subf     r0, r0, r7
cmpwi    r0, 1
beq      lbl_8032A190
bge      lbl_8032A178
cmpwi    r0, 0
bge      lbl_8032A184
b        lbl_8032A1B4

lbl_8032A178:
cmpwi    r0, 3
bge      lbl_8032A1B4
b        lbl_8032A1AC

lbl_8032A184:
lfs      f0, 0x2c(r1)
stfs     f0, 0x24(r31)
b        lbl_8032A1B4

lbl_8032A190:
lfs      f2, 0x2c(r1)
lfs      f1, 0x20(r1)
lfs      f0, lbl_8051DEC4@sda21(r2)
fadds    f1, f2, f1
fmuls    f0, f1, f0
stfs     f0, 0x24(r31)
b        lbl_8032A1B4

lbl_8032A1AC:
lfs      f0, 0x20(r1)
stfs     f0, 0x24(r31)

lbl_8032A1B4:
lis      r3, 0x55555556@ha
addi     r0, r3, 0x55555556@l
mulhw    r3, r0, r7
srwi     r0, r3, 0x1f
add      r0, r3, r0
cmpwi    r0, 1
beq      lbl_8032A1F8
bge      lbl_8032A1E0
cmpwi    r0, 0
bge      lbl_8032A1EC
b        lbl_8032A21C

lbl_8032A1E0:
cmpwi    r0, 3
bge      lbl_8032A21C
b        lbl_8032A214

lbl_8032A1EC:
lfs      f0, 0x30(r1)
stfs     f0, 0x28(r31)
b        lbl_8032A21C

lbl_8032A1F8:
lfs      f2, 0x30(r1)
lfs      f1, 0x24(r1)
lfs      f0, lbl_8051DEC4@sda21(r2)
fadds    f1, f2, f1
fmuls    f0, f1, f0
stfs     f0, 0x28(r31)
b        lbl_8032A21C

lbl_8032A214:
lfs      f0, 0x24(r1)
stfs     f0, 0x28(r31)

lbl_8032A21C:
lbz      r0, 0x21(r31)
cmplwi   r0, 0
beq      lbl_8032A254
lfs      f1, 0x24(r31)
li       r0, 0
lfs      f0, lbl_8051DEA8@sda21(r2)
stfs     f1, 0x38(r31)
lfs      f2, 0x28(r31)
lfs      f1, 0x2c(r31)
fadds    f1, f2, f1
stfs     f1, 0x3c(r31)
stfs     f0, 0x40(r31)
stfs     f0, 0x44(r31)
stb      r0, 0x21(r31)

lbl_8032A254:
li       r0, 1
stb      r0, 0x20(r31)

lbl_8032A25C:
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8032A270
 * Size:	0001D0
 */
void setCallBack_Furiko(P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r4, lbl_8048F550@ha
stw      r0, 0x24(r1)
stmw     r26, 8(r1)
mr       r29, r3
mr       r31, r5
mr       r30, r6
addi     r27, r4, lbl_8048F550@l
li       r3, 0x4c
bl       __nw__FUl
or.      r26, r3, r3
beq      lbl_8032A32C
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r3, __vt__Q32og6Screen15CallBack_Furiko@ha
stw      r0, 0(r26)
li       r5, 0
addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r3, r3, __vt__Q32og6Screen15CallBack_Furiko@l
stw      r5, 0x18(r26)
li       r0, 1
lfs      f3, lbl_8051DEA8@sda21(r2)
stw      r4, 0(r26)
lfs      f2, lbl_8051DEAC@sda21(r2)
stw      r3, 0(r26)
lfs      f1, lbl_8051DEB0@sda21(r2)
stw      r5, 0x1c(r26)
lfs      f0, lbl_8051DEB4@sda21(r2)
stb      r5, 0x20(r26)
stb      r0, 0x21(r26)
stfs     f3, 0x24(r26)
stfs     f3, 0x28(r26)
stfs     f2, 0x2c(r26)
stfs     f1, 0x30(r26)
stfs     f0, 0x34(r26)
lfs      f0, 0x24(r26)
stfs     f0, 0x38(r26)
lfs      f1, 0x28(r26)
lfs      f0, 0x2c(r26)
fadds    f0, f1, f0
stfs     f0, 0x3c(r26)
stfs     f3, 0x40(r26)
stfs     f3, 0x44(r26)
stfs     f3, 0x48(r26)

lbl_8032A32C:
cmplwi   r26, 0
bne      lbl_8032A348
addi     r3, r27, 0
addi     r5, r27, 0x1c
li       r4, 0xe3
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032A348:
mr       r3, r29
mr       r6, r30
mr       r5, r31
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
or.      r28, r3, r3
bne      lbl_8032A374
addi     r3, r27, 0
addi     r5, r27, 0x1c
li       r4, 0xe5
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032A374:
cmplwi   r28, 0
beq      lbl_8032A3F4
stw      r28, 0x1c(r26)
lfs      f0, lbl_8051DEA8@sda21(r2)
lwz      r3, 0x1c(r26)
stfs     f0, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f0, lbl_8051DEAC@sda21(r2)
li       r3, 0
lfs      f1, lbl_8051DEB0@sda21(r2)
li       r0, 1
stfs     f0, 0x2c(r26)
lfs      f0, lbl_8051DEB4@sda21(r2)
stfs     f1, 0x30(r26)
lfs      f2, lbl_8051DEA8@sda21(r2)
stfs     f0, 0x34(r26)
stb      r3, 0x20(r26)
stb      r0, 0x21(r26)
stfs     f2, 0x24(r26)
stfs     f2, 0x28(r26)
lfs      f0, 0x24(r26)
stfs     f0, 0x38(r26)
lfs      f1, 0x28(r26)
lfs      f0, 0x2c(r26)
fadds    f0, f1, f0
stfs     f0, 0x3c(r26)
stfs     f2, 0x40(r26)
stfs     f2, 0x44(r26)
b        lbl_8032A408

lbl_8032A3F4:
addi     r3, r27, 0
addi     r5, r27, 0x10
li       r4, 0x76
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032A408:
mr       r3, r29
mr       r6, r30
mr       r5, r31
mr       r7, r26
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
stw      r26, 0x1c(r28)
li       r0, 0
mr       r3, r26
stw      r0, 0x18(r28)
lmw      r26, 8(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	8032A440
 * Size:	000270
 */
void setFurikoScreen(P2DScreen::Mgr*)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lis      r7, lbl_8048F550@ha
lis      r6, 0x66666667@ha
stw      r0, 0x44(r1)
lis      r5, 0x6B6F3030@ha
lis      r4, 0x66757269@ha
stmw     r21, 0x14(r1)
mr       r22, r3
addi     r27, r7, lbl_8048F550@l
addi     r28, r6, 0x66666667@l
addi     r29, r5, 0x6B6F3030@l
addi     r30, r4, 0x66757269@l
li       r25, 0

lbl_8032A478:
mulhw    r5, r28, r25
lwz      r12, 0(r22)
mr       r3, r22
lwz      r12, 0x3c(r12)
srawi    r0, r5, 2
srwi     r4, r0, 0x1f
add      r0, r0, r4
mulli    r0, r0, 0xa
subf     r4, r0, r25
srawi    r0, r4, 0x1f
addc     r6, r4, r29
adde     r7, r0, r30
srawi    r0, r5, 2
srwi     r4, r0, 0x1f
add      r5, r0, r4
mulhw    r0, r28, r5
srawi    r0, r0, 2
srwi     r4, r0, 0x1f
add      r0, r0, r4
mulli    r0, r0, 0xa
subf     r0, r0, r5
slwi     r4, r0, 8
srawi    r0, r4, 0x1f
addc     r6, r6, r4
adde     r5, r7, r0
mr       r23, r6
mr       r24, r5
mtctr    r12
bctrl
or.      r31, r3, r3
beq      lbl_8032A690
li       r3, 0x4c
bl       __nw__FUl
or.      r26, r3, r3
beq      lbl_8032A58C
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r3, __vt__Q32og6Screen15CallBack_Furiko@ha
stw      r0, 0(r26)
li       r5, 0
addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r3, r3, __vt__Q32og6Screen15CallBack_Furiko@l
stw      r5, 0x18(r26)
li       r0, 1
lfs      f3, lbl_8051DEA8@sda21(r2)
stw      r4, 0(r26)
lfs      f2, lbl_8051DEAC@sda21(r2)
stw      r3, 0(r26)
lfs      f1, lbl_8051DEB0@sda21(r2)
stw      r5, 0x1c(r26)
lfs      f0, lbl_8051DEB4@sda21(r2)
stb      r5, 0x20(r26)
stb      r0, 0x21(r26)
stfs     f3, 0x24(r26)
stfs     f3, 0x28(r26)
stfs     f2, 0x2c(r26)
stfs     f1, 0x30(r26)
stfs     f0, 0x34(r26)
lfs      f0, 0x24(r26)
stfs     f0, 0x38(r26)
lfs      f1, 0x28(r26)
lfs      f0, 0x2c(r26)
fadds    f0, f1, f0
stfs     f0, 0x3c(r26)
stfs     f3, 0x40(r26)
stfs     f3, 0x44(r26)
stfs     f3, 0x48(r26)

lbl_8032A58C:
cmplwi   r26, 0
bne      lbl_8032A5A8
addi     r3, r27, 0
addi     r5, r27, 0x1c
li       r4, 0xe3
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032A5A8:
mr       r3, r22
mr       r6, r23
mr       r5, r24
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
or.      r21, r3, r3
bne      lbl_8032A5D4
addi     r3, r27, 0
addi     r5, r27, 0x1c
li       r4, 0xe5
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032A5D4:
cmplwi   r21, 0
beq      lbl_8032A654
stw      r21, 0x1c(r26)
lfs      f0, lbl_8051DEA8@sda21(r2)
lwz      r3, 0x1c(r26)
stfs     f0, 0xc0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lfs      f0, lbl_8051DEAC@sda21(r2)
li       r3, 0
lfs      f1, lbl_8051DEB0@sda21(r2)
li       r0, 1
stfs     f0, 0x2c(r26)
lfs      f0, lbl_8051DEB4@sda21(r2)
stfs     f1, 0x30(r26)
lfs      f2, lbl_8051DEA8@sda21(r2)
stfs     f0, 0x34(r26)
stb      r3, 0x20(r26)
stb      r0, 0x21(r26)
stfs     f2, 0x24(r26)
stfs     f2, 0x28(r26)
lfs      f0, 0x24(r26)
stfs     f0, 0x38(r26)
lfs      f1, 0x28(r26)
lfs      f0, 0x2c(r26)
fadds    f0, f1, f0
stfs     f0, 0x3c(r26)
stfs     f2, 0x40(r26)
stfs     f2, 0x44(r26)
b        lbl_8032A668

lbl_8032A654:
addi     r3, r27, 0
addi     r5, r27, 0x10
li       r4, 0x76
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8032A668:
mr       r3, r22
mr       r6, r23
mr       r5, r24
mr       r7, r26
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
stw      r26, 0x1c(r21)
li       r0, 0
stw      r0, 0x18(r21)
stw      r26, 0x1c(r31)
stw      r0, 0x18(r31)

lbl_8032A690:
addi     r25, r25, 1
cmpwi    r25, 0x64
blt      lbl_8032A478
lmw      r21, 0x14(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8032A6B0
 * Size:	000024
 */
void getFurikoPtr(P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
lwz      r0, 0x14(r1)
lwz      r3, 0x1c(r3)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8032A6D4
 * Size:	000080
 */
CallBack_Furiko::~CallBack_Furiko(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8032A738
lis      r4, __vt__Q32og6Screen15CallBack_Furiko@ha
addi     r0, r4, __vt__Q32og6Screen15CallBack_Furiko@l
stw      r0, 0(r30)
beq      lbl_8032A728
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_8032A728
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_8032A728:
extsh.   r0, r31
ble      lbl_8032A738
mr       r3, r30
bl       __dl__FPv

lbl_8032A738:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Screen
} // namespace og
