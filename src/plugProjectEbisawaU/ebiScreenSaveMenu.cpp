#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496E70
    lbl_80496E70:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E536176
        .4byte 0x654D656E
        .4byte 0x75000000
    .global lbl_80496E84
    lbl_80496E84:
        .4byte 0x696E666F
        .4byte 0x5F77696E
        .4byte 0x646F772E
        .4byte 0x626C6F00
        .4byte 0x54536372
        .4byte 0x65656E53
        .4byte 0x6176654D
        .4byte 0x656E753A
        .4byte 0x3A6C6F61
        .4byte 0x64526573
        .4byte 0x6F757263
        .4byte 0x65000000
        .4byte 0x696E666F
        .4byte 0x5F77696E
        .4byte 0x646F772E
        .4byte 0x737A7300
    .global lbl_80496EC4
    lbl_80496EC4:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E536176
        .4byte 0x654D656E
        .4byte 0x752E6370
        .4byte 0x70000000
    .global lbl_80496EDC
    lbl_80496EDC:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80496EE8
    lbl_80496EE8:
        .4byte 0x82A082E8
        .4byte 0x82A682C8
        .4byte 0x82A28149
        .4byte 0x82A082E8
        .4byte 0x82A682C8
        .4byte 0x82A28149
        .4byte 0x82BD82CD
        .4byte 0x82A082C1
        .4byte 0x81490A00
    .global lbl_80496F0C
    lbl_80496F0C:
        .4byte 0x54536176
        .4byte 0x654D656E
        .4byte 0x75000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q33ebi6Screen9TSaveMenu
    __vt__Q33ebi6Screen9TSaveMenu:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen9TSaveMenuFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen9TSaveMenuFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen9TSaveMenuFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen9TSaveMenuFv
        .4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
        .4byte doUpdateStateOpen__Q33ebi6Screen9TSaveMenuFv
        .4byte doUpdateStateWait__Q33ebi6Screen9TSaveMenuFv
        .4byte doUpdateStateClose__Q33ebi6Screen9TSaveMenuFv
        .4byte doDraw__Q33ebi6Screen9TSaveMenuFv
        .4byte getName__Q33ebi6Screen9TSaveMenuFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FBC8
    lbl_8051FBC8:
        .4byte 0x00000000
    .global lbl_8051FBCC
    lbl_8051FBCC:
        .4byte 0x44480000
    .global lbl_8051FBD0
    lbl_8051FBD0:
        .float 1.0
    .global lbl_8051FBD4
    lbl_8051FBD4:
        .float 0.3
    .global lbl_8051FBD8
    lbl_8051FBD8:
        .4byte 0xC4480000
        .4byte 0x00000000
    .global lbl_8051FBE0
    lbl_8051FBE0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051FBE8
    lbl_8051FBE8:
        .4byte 0x3F19999A
    .global lbl_8051FBEC
    lbl_8051FBEC:
        .4byte 0x3F4CCCCD
    .global lbl_8051FBF0
    lbl_8051FBF0:
        .float 0.5
    .global lbl_8051FBF4
    lbl_8051FBF4:
        .4byte 0xBF000000
*/

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803DD0A8
 * Size:	000350
 */
void TSaveMenu::doSetArchive(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r4
stw      r30, 0x18(r1)
mr       r30, r3
li       r3, 0x148
stw      r29, 0x14(r1)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803DD0E0
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803DD0E0:
stw      r0, 0x40(r30)
lis      r3, lbl_80496E84@ha
addi     r4, r3, lbl_80496E84@l
mr       r6, r31
lwz      r3, 0x40(r30)
lis      r5, 0x110
bl       set__9J2DScreenFPCcUlP10JKRArchive
lis      r4, 0x6D303179@ha
lwz      r3, 0x40(r30)
addi     r6, r4, 0x6D303179@l
li       r5, 0x54
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x54(r30)
lis      r3, 0x6D30316E@ha
addi     r6, r3, 0x6D30316E@l
li       r5, 0x54
lwz      r3, 0x40(r30)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x58(r30)
lis      r3, 0x546D3032@ha
addi     r6, r3, 0x546D3032@l
li       r5, 0
lwz      r3, 0x40(r30)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x5c(r30)
lis      r5, 0x795F696C@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x795F696C@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x44(r30)
lis      r5, 0x795F6972@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x795F6972@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x48(r30)
lis      r5, 0x6E5F696C@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x6E5F696C@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x4c(r30)
lis      r5, 0x6E5F6972@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x6E5F6972@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x50(r30)
lis      r6, 0x6D303179@ha
mr       r3, r31
li       r5, 0x54
lwz      r4, 0x40(r30)
addi     r6, r6, 0x6D303179@l
bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
stw      r3, 0x60(r30)
lis      r6, 0x6D30316E@ha
mr       r3, r31
li       r5, 0x54
lwz      r4, 0x40(r30)
addi     r6, r6, 0x6D30316E@l
bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
stw      r3, 0x64(r30)
lis      r6, 0x546D3032@ha
mr       r3, r31
li       r5, 0
lwz      r4, 0x40(r30)
addi     r6, r6, 0x546D3032@l
bl       setMenuTitleScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
stw      r3, 0x68(r30)
lwz      r3, 0x40(r30)
bl       E2DPane_setTreeShow__3ebiFP7J2DPane
lis      r5, 0x795F696C@ha
lis      r4, 0x506D3030@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x795F696C@l
addi     r5, r4, 0x506D3030@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r5, 0x795F6972@ha
lis      r4, 0x506D3030@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x795F6972@l
addi     r5, r4, 0x506D3030@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r5, 0x6E5F696C@ha
lis      r4, 0x506D3030@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x6E5F696C@l
addi     r5, r4, 0x506D3030@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r5, 0x6E5F6972@ha
lis      r4, 0x506D3030@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x6E5F6972@l
addi     r5, r4, 0x506D3030@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r5, 0x795F696C@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x795F696C@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r5, 0x795F6972@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x795F6972@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r5, 0x6E5F696C@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x6E5F696C@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lis      r5, 0x6E5F6972@ha
lis      r4, 0x506D3031@ha
lwz      r3, 0x40(r30)
addi     r6, r5, 0x6E5F6972@l
addi     r5, r4, 0x506D3031@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r29, 0
mr       r31, r30

lbl_803DD378:
lwz      r3, 0x44(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r29, r29, 1
addi     r31, r31, 4
cmpwi    r29, 4
blt      lbl_803DD378
lwz      r7, 0x4c(r30)
lis      r4, 0x6B6F3030@ha
lwz      r0, 0x44(r30)
lis      r3, 0x66757269@ha
addi     r6, r4, 0x6B6F3030@l
stw      r0, 0x9c(r30)
addi     r5, r3, 0x66757269@l
stw      r7, 0xa0(r30)
lwz      r3, 0x50(r30)
lwz      r0, 0x48(r30)
stw      r0, 0xd4(r30)
stw      r3, 0xd8(r30)
lwz      r3, 0x40(r30)
bl       setCallBack_Furiko__Q22og6ScreenFPQ29P2DScreen3MgrUx
stw      r3, 0xdc(r30)
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
 * Address:	803DD3F8
 * Size:	00007C
 */
void TSaveMenu::doOpenScreen(ebi::Screen::ArgOpen*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
stw      r0, 0x14(r1)
li       r0, 0xc8
stw      r31, 0xc(r1)
mr       r31, r3
stb      r0, 0x18(r3)
li       r0, 0
stw      r0, 0x1c(r3)
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x20(r31)
li       r0, 2
lfs      f0, lbl_8051FBC8@sda21(r2)
stw      r3, 0x24(r31)
stw      r0, 0x1c(r31)
stfs     f0, 0xe4(r31)
lwz      r3, 0xdc(r31)
bl       stop__Q32og6Screen15CallBack_FurikoFv
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1811
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DD474
 * Size:	000064
 */
void TSaveMenu::doCloseScreen(ebi::Screen::ArgClose*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_8051FBC8@sda21(r2)
stw      r0, 0x14(r1)
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
stw      r31, 0xc(r1)
mr       r31, r3
stfs     f0, 0xe4(r3)
lwz      r3, sys@sda21(r13)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x20(r31)
li       r0, 1
li       r4, 0x1811
li       r5, 0
stw      r3, 0x24(r31)
stw      r0, 0x1c(r31)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DD4D8
 * Size:	000084
 */
void TSaveMenu::doKillScreen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
li       r4, 0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
stw      r30, 8(r1)
bl
startMsgState___Q33ebi6Screen9TSaveMenuFQ43ebi6Screen9TSaveMenu12enumMsgState li
r0, 0 addi     r3, r31, 0x6c stw      r0, 0x1c(r31) lwz      r12, 0x6c(r31) lwz
r12, 0xc(r12) mtctr    r12 bctrl addi     r3, r31, 0xa4 lwz      r12, 0xa4(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
li       r30, 0

lbl_803DD52C:
lwz      r3, 0x60(r31)
bl       stop__Q32og6Screen15AnimText_ScreenFv
addi     r30, r30, 1
addi     r31, r31, 4
cmpwi    r30, 3
blt      lbl_803DD52C
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
 * Address:	803DD55C
 * Size:	0000DC
 */
void TSaveMenu::doUpdateStateOpen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       updateMsg___Q33ebi6Screen9TSaveMenuFv
lwz      r0, 0x1c(r31)
cmpwi    r0, 0
beq      lbl_803DD594
lwz      r3, 0x20(r31)
cmplwi   r3, 0
beq      lbl_803DD594
addi     r0, r3, -1
stw      r0, 0x20(r31)

lbl_803DD594:
lwz      r3, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x6c
bl       update__Q23ebi12TYesNoCursorFv
addi     r3, r31, 0xa4
bl       update__Q23ebi12TYesNoCursorFv
lwz      r3, sys@sda21(r13)
lfs      f1, 0xe4(r31)
lfs      f0, 0x54(r3)
lfs      f2, lbl_8051FBD4@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0xe4(r31)
lfs      f1, 0xe4(r31)
bl       calcSmooth0to1__Q22og6ScreenFff
lfs      f0, lbl_8051FBD0@sda21(r2)
lfs      f3, lbl_8051FBCC@sda21(r2)
fsubs    f4, f0, f1
lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
lfs      f1, lbl_8051FBC8@sda21(r2)
lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
fmuls    f3, f3, f4
fadds    f0, f1, f0
stfs     f3, 0xe0(r31)
lfs      f3, 0xe0(r31)
lwz      r3, 0x40(r31)
fadds    f2, f3, f2
stfs     f2, 0x140(r3)
stfs     f0, 0x144(r3)
lfs      f0, 0xe0(r31)
fcmpo    cr0, f0, f1
cror     2, 0, 2
mfcr     r0
lwz      r31, 0xc(r1)
rlwinm   r3, r0, 3, 0x1f, 0x1f
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DD638
 * Size:	000074
 */
void TSaveMenu::doUpdateStateWait(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       updateMsg___Q33ebi6Screen9TSaveMenuFv
lwz      r0, 0x1c(r31)
cmpwi    r0, 0
beq      lbl_803DD670
lwz      r3, 0x20(r31)
cmplwi   r3, 0
beq      lbl_803DD670
addi     r0, r3, -1
stw      r0, 0x20(r31)

lbl_803DD670:
lwz      r3, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x6c
bl       update__Q23ebi12TYesNoCursorFv
addi     r3, r31, 0xa4
bl       update__Q23ebi12TYesNoCursorFv
lwz      r0, 0x14(r1)
li       r3, 0
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DD6AC
 * Size:	0000D4
 */
void TSaveMenu::doUpdateStateClose(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       updateMsg___Q33ebi6Screen9TSaveMenuFv
lwz      r0, 0x1c(r31)
cmpwi    r0, 0
beq      lbl_803DD6E4
lwz      r3, 0x20(r31)
cmplwi   r3, 0
beq      lbl_803DD6E4
addi     r0, r3, -1
stw      r0, 0x20(r31)

lbl_803DD6E4:
lwz      r3, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x6c
bl       update__Q23ebi12TYesNoCursorFv
addi     r3, r31, 0xa4
bl       update__Q23ebi12TYesNoCursorFv
lwz      r3, sys@sda21(r13)
lfs      f1, 0xe4(r31)
lfs      f0, 0x54(r3)
lfs      f2, lbl_8051FBD4@sda21(r2)
fadds    f0, f1, f0
stfs     f0, 0xe4(r31)
lfs      f1, 0xe4(r31)
bl       calcSmooth0to1__Q22og6ScreenFff
lfs      f0, lbl_8051FBD8@sda21(r2)
lfs      f2, lbl_8051FBC8@sda21(r2)
fmuls    f4, f0, f1
lfs      f1, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
lfs      f3, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
fadds    f1, f2, f1
lfs      f0, lbl_8051FBD4@sda21(r2)
stfs     f4, 0xe0(r31)
lfs      f2, 0xe0(r31)
lwz      r3, 0x40(r31)
fadds    f2, f2, f3
stfs     f2, 0x140(r3)
stfs     f1, 0x144(r3)
lfs      f1, 0xe4(r31)
fcmpo    cr0, f1, f0
mfcr     r0
lwz      r31, 0xc(r1)
rlwinm   r3, r0, 2, 0x1f, 0x1f
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DD780
 * Size:	000234
 */
void TSaveMenu::doDraw(void)
{
	/*
stwu     r1, -0x70(r1)
mflr     r0
stw      r0, 0x74(r1)
stmw     r27, 0x5c(r1)
mr       r28, r3
lwz      r4, sys@sda21(r13)
lwz      r30, 0x24(r4)
addi     r29, r30, 0x190
lwz      r12, 0(r29)
mr       r3, r29
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r0, 0x1c(r28)
cmpwi    r0, 0
beq      lbl_803DD984
lwz      r3, sys@sda21(r13)
lwz      r3, 0x24(r3)
addi     r31, r3, 0x190
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r0, 0x1c(r28)
lwz      r3, 0x14(r28)
cmpwi    r0, 2
stw      r3, 0x18(r1)
beq      lbl_803DD87C
bge      lbl_803DD8F8
cmpwi    r0, 1
bge      lbl_803DD804
b        lbl_803DD8F8

lbl_803DD804:
lwz      r4, 0x24(r28)
cmplwi   r4, 0
beq      lbl_803DD844
lwz      r3, 0x20(r28)
lis      r0, 0x4330
stw      r0, 0x30(r1)
lfd      f2, lbl_8051FBE0@sda21(r2)
stw      r3, 0x34(r1)
lfd      f0, 0x30(r1)
stw      r4, 0x3c(r1)
fsubs    f1, f0, f2
stw      r0, 0x38(r1)
lfd      f0, 0x38(r1)
fsubs    f0, f0, f2
fdivs    f2, f1, f0
b        lbl_803DD848

lbl_803DD844:
lfs      f2, lbl_8051FBC8@sda21(r2)

lbl_803DD848:
lbz      r3, 0x18(r28)
lis      r0, 0x4330
stw      r0, 0x40(r1)
lfd      f1, lbl_8051FBE0@sda21(r2)
stw      r3, 0x44(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f1
fmuls    f0, f0, f2
fctiwz   f0, f0
stfd     f0, 0x48(r1)
lwz      r0, 0x4c(r1)
stb      r0, 0x1b(r1)
b        lbl_803DD8F8

lbl_803DD87C:
lwz      r4, 0x24(r28)
cmplwi   r4, 0
beq      lbl_803DD8BC
lwz      r3, 0x20(r28)
lis      r0, 0x4330
stw      r0, 0x48(r1)
lfd      f2, lbl_8051FBE0@sda21(r2)
stw      r3, 0x4c(r1)
lfd      f0, 0x48(r1)
stw      r4, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803DD8C0

lbl_803DD8BC:
lfs      f1, lbl_8051FBC8@sda21(r2)

lbl_803DD8C0:
lbz      r3, 0x18(r28)
lis      r0, 0x4330
lfs      f0, lbl_8051FBD0@sda21(r2)
stw      r3, 0x3c(r1)
lfd      f2, lbl_8051FBE0@sda21(r2)
fsubs    f0, f0, f1
stw      r0, 0x38(r1)
lfd      f1, 0x38(r1)
fsubs    f1, f1, f2
fmuls    f0, f1, f0
fctiwz   f0, f0
stfd     f0, 0x30(r1)
lwz      r0, 0x34(r1)
stb      r0, 0x1b(r1)

lbl_803DD8F8:
lwz      r0, 0x18(r1)
mr       r3, r31
addi     r4, r1, 8
addi     r5, r1, 0xc
stw      r0, 0x14(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r27, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_8051FBC8@sda21(r2)
mr       r3, r31
stw      r4, 0x4c(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_8051FBE0@sda21(r2)
stw      r0, 0x48(r1)
lfd      f0, 0x48(r1)
stw      r27, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fadds    f1, f3, f1
stfs     f3, 0x1c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x20(r1)
fadds    f0, f3, f0
stfs     f1, 0x24(r1)
stfs     f0, 0x28(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803DD984:
lwz      r3, 0x40(r28)
mr       r4, r30
mr       r5, r29
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lmw      r27, 0x5c(r1)
lwz      r0, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	803DD9B4
 * Size:	0000B0
 */
void TSaveMenu::loadResource(void)
{
	/*
stwu     r1, -0x120(r1)
mflr     r0
lis      r4, lbl_80496E70@ha
li       r5, 0
stw      r0, 0x124(r1)
stw      r31, 0x11c(r1)
addi     r31, r4, lbl_80496E70@l
addi     r4, r31, 0x24
stw      r30, 0x118(r1)
stw      r29, 0x114(r1)
mr       r29, r3
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
addi     r3, r1, 8
addi     r4, r31, 0x44
bl       makeLanguageResName__Q22og9newScreenFPcPCc
addi     r3, r1, 8
li       r4, 1
li       r5, 0
li       r6, 1
bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
or.      r30, r3, r3
bne      lbl_803DDA24
addi     r3, r31, 0x54
addi     r5, r31, 0x6c
li       r4, 0xe2
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803DDA24:
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x24
bl       heapStatusEnd__6SystemFPc
mr       r3, r29
mr       r4, r30
lwz      r12, 0(r29)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lwz      r0, 0x124(r1)
lwz      r31, 0x11c(r1)
lwz      r30, 0x118(r1)
lwz      r29, 0x114(r1)
mtlr     r0
addi     r1, r1, 0x120
blr
	*/
}

/*
 * --INFO--
 * Address:	803DDA64
 * Size:	000094
 */
void TSaveMenu::openMsg(long)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
li       r0, 0
stw      r31, 0xc(r1)
or.      r31, r4, r4
stw      r30, 8(r1)
mr       r30, r3
blt      lbl_803DDA94
cmpwi    r31, 4
bge      lbl_803DDA94
li       r0, 1

lbl_803DDA94:
clrlwi.  r0, r0, 0x18
bne      lbl_803DDAB8
lis      r3, lbl_80496EC4@ha
lis      r5, lbl_80496EDC@ha
addi     r3, r3, lbl_80496EC4@l
li       r4, 0xef
addi     r5, r5, lbl_80496EDC@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803DDAB8:
stw      r31, 0x2c(r30)
lwz      r0, 0x28(r30)
cmpwi    r0, 0
beq      lbl_803DDAD0
li       r3, 0
b        lbl_803DDAE0

lbl_803DDAD0:
mr       r3, r30
li       r4, 1
bl
startMsgState___Q33ebi6Screen9TSaveMenuFQ43ebi6Screen9TSaveMenu12enumMsgState li
r3, 1

lbl_803DDAE0:
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
 * Address:	803DDAF8
 * Size:	00003C
 */
void TSaveMenu::closeMsg(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
lwz      r0, 0x28(r3)
cmpwi    r0, 2
beq      lbl_803DDB18
li       r3, 0
b        lbl_803DDB24

lbl_803DDB18:
li       r4, 3
bl
startMsgState___Q33ebi6Screen9TSaveMenuFQ43ebi6Screen9TSaveMenu12enumMsgState li
r3, 1

lbl_803DDB24:
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DDB34
 * Size:	000054
 */
void TSaveMenu::noMsg(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
li       r0, 0
stw      r31, 0xc(r1)
mr       r31, r3
stw      r30, 8(r1)
li       r30, 0
stw      r0, 0x28(r3)

lbl_803DDB58:
lwz      r3, 0x60(r31)
bl       stop__Q32og6Screen15AnimText_ScreenFv
addi     r30, r30, 1
addi     r31, r31, 4
cmpwi    r30, 3
blt      lbl_803DDB58
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
 * Address:	803DDB88
 * Size:	000010
 */
void TSaveMenu::isFinishMsg(void)
{
	/*
lwz      r0, 0x28(r3)
cntlzw   r0, r0
rlwinm   r3, r0, 0x1b, 0x18, 0x1f
blr
	*/
}

/*
 * --INFO--
 * Address:	803DDB98
 * Size:	0003B4
 */
void TSaveMenu::startMsgState_(ebi::Screen::TSaveMenu::enumMsgState)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
stw      r4, 0x28(r3)
lwz      r0, 0x28(r3)
cmpwi    r0, 2
beq      lbl_803DDF38
bge      lbl_803DDBD0
cmpwi    r0, 0
beq      lbl_803DDBDC
bge      lbl_803DDC08
b        lbl_803DDF38

lbl_803DDBD0:
cmpwi    r0, 4
bge      lbl_803DDF38
b        lbl_803DDE98

lbl_803DDBDC:
addi     r3, r31, 0x6c
lwz      r12, 0x6c(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xa4
lwz      r12, 0xa4(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
b        lbl_803DDF38

lbl_803DDC08:
addi     r3, r31, 0x6c
lwz      r12, 0x6c(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xa4
lwz      r12, 0xa4(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r0, 0x2c(r31)
cmpwi    r0, 0
bne      lbl_803DDD20
li       r0, 0
lis      r4, 0x305F3030@ha
stb      r0, 0x3d(r31)
li       r0, 1
lis      r3, 0x00383337@ha
addi     r6, r4, 0x305F3030@l
stb      r0, 0x3c(r31)
addi     r5, r3, 0x00383337@l
lwz      r3, 0x60(r31)
bl       setText__Q32og6Screen15AnimText_ScreenFUx
lis      r5, 0x315F3030@ha
lis      r4, 0x00383337@ha
lwz      r3, 0x64(r31)
addi     r6, r5, 0x315F3030@l
addi     r5, r4, 0x00383337@l
bl       setText__Q32og6Screen15AnimText_ScreenFUx
lwz      r3, 0x60(r31)
lfs      f1, lbl_8051FBC8@sda21(r2)
bl       open__Q32og6Screen15AnimText_ScreenFf
lwz      r3, 0x60(r31)
lfs      f1, lbl_8051FBE8@sda21(r2)
lfs      f2, lbl_8051FBC8@sda21(r2)
bl       blink__Q32og6Screen15AnimText_ScreenFff
lwz      r3, 0x64(r31)
lfs      f1, lbl_8051FBC8@sda21(r2)
bl       open__Q32og6Screen15AnimText_ScreenFf
lfs      f1, lbl_8051FBC8@sda21(r2)
lwz      r3, 0x64(r31)
fmr      f2, f1
bl       blink__Q32og6Screen15AnimText_ScreenFff
lwz      r6, 0x4c(r31)
li       r0, 1
lwz      r5, 0x44(r31)
addi     r3, r31, 0x6c
lfs      f0, lbl_8051FBD0@sda21(r2)
li       r4, 0
stw      r5, 0x9c(r31)
stw      r6, 0xa0(r31)
lwz      r6, 0x50(r31)
lwz      r5, 0x48(r31)
stw      r5, 0xd4(r31)
stw      r6, 0xd8(r31)
stfs     f0, 0x94(r31)
stb      r0, 0x98(r31)
stfs     f0, 0xcc(r31)
stb      r0, 0xd0(r31)
lwz      r12, 0x6c(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xa4
li       r4, 0
lwz      r12, 0xa4(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
b        lbl_803DDE78

lbl_803DDD20:
cmpwi    r0, 3
bne      lbl_803DDE0C
li       r0, 0
lis      r4, 0x345F3030@ha
stb      r0, 0x3d(r31)
li       r0, 1
lis      r3, 0x00383337@ha
addi     r6, r4, 0x345F3030@l
stb      r0, 0x3c(r31)
addi     r5, r3, 0x00383337@l
lwz      r3, 0x60(r31)
bl       setText__Q32og6Screen15AnimText_ScreenFUx
lis      r5, 0x355F3030@ha
lis      r4, 0x00383337@ha
lwz      r3, 0x64(r31)
addi     r6, r5, 0x355F3030@l
addi     r5, r4, 0x00383337@l
bl       setText__Q32og6Screen15AnimText_ScreenFUx
lwz      r3, 0x60(r31)
lfs      f1, lbl_8051FBC8@sda21(r2)
bl       open__Q32og6Screen15AnimText_ScreenFf
lwz      r3, 0x60(r31)
lfs      f1, lbl_8051FBE8@sda21(r2)
lfs      f2, lbl_8051FBC8@sda21(r2)
bl       blink__Q32og6Screen15AnimText_ScreenFff
lwz      r3, 0x64(r31)
lfs      f1, lbl_8051FBC8@sda21(r2)
bl       open__Q32og6Screen15AnimText_ScreenFf
lfs      f1, lbl_8051FBC8@sda21(r2)
lwz      r3, 0x64(r31)
fmr      f2, f1
bl       blink__Q32og6Screen15AnimText_ScreenFff
lwz      r6, 0x4c(r31)
li       r0, 1
lwz      r5, 0x44(r31)
addi     r3, r31, 0x6c
lfs      f0, lbl_8051FBD0@sda21(r2)
li       r4, 0
stw      r5, 0x9c(r31)
stw      r6, 0xa0(r31)
lwz      r6, 0x50(r31)
lwz      r5, 0x48(r31)
stw      r5, 0xd4(r31)
stw      r6, 0xd8(r31)
stfs     f0, 0x94(r31)
stb      r0, 0x98(r31)
stfs     f0, 0xcc(r31)
stb      r0, 0xd0(r31)
lwz      r12, 0x6c(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xa4
li       r4, 0
lwz      r12, 0xa4(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
b        lbl_803DDE78

lbl_803DDE0C:
cmpwi    r0, 1
bne      lbl_803DDE3C
lis      r5, 0x325F3030@ha
lis      r4, 0x00383337@ha
lwz      r3, 0x68(r31)
addi     r6, r5, 0x325F3030@l
addi     r5, r4, 0x00383337@l
bl       setText__Q32og6Screen15AnimText_ScreenFUx
lwz      r3, 0x68(r31)
lfs      f1, lbl_8051FBC8@sda21(r2)
bl       open__Q32og6Screen15AnimText_ScreenFf
b        lbl_803DDE78

lbl_803DDE3C:
cmpwi    r0, 2
bne      lbl_803DDE78
lis      r5, 0x335F3030@ha
lis      r4, 0x00383337@ha
lwz      r3, 0x68(r31)
addi     r6, r5, 0x335F3030@l
addi     r5, r4, 0x00383337@l
bl       setText__Q32og6Screen15AnimText_ScreenFUx
lwz      r3, 0x68(r31)
lfs      f1, lbl_8051FBC8@sda21(r2)
bl       open__Q32og6Screen15AnimText_ScreenFf
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180c
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803DDE78:
lwz      r3, sys@sda21(r13)
lfs      f1, lbl_8051FBEC@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x34(r31)
stw      r3, 0x38(r31)
b        lbl_803DDF38

lbl_803DDE98:
lwz      r0, 0x2c(r31)
cmpwi    r0, 3
beq      lbl_803DDEB8
bge      lbl_803DDF00
cmpwi    r0, 0
beq      lbl_803DDEB8
bge      lbl_803DDEF4
b        lbl_803DDF00

lbl_803DDEB8:
lwz      r3, 0x60(r31)
bl       close__Q32og6Screen15AnimText_ScreenFv
lwz      r3, 0x64(r31)
bl       close__Q32og6Screen15AnimText_ScreenFv
addi     r3, r31, 0x6c
lwz      r12, 0x6c(r31)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xa4
lwz      r12, 0xa4(r31)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
b        lbl_803DDF1C

lbl_803DDEF4:
lwz      r3, 0x68(r31)
bl       close__Q32og6Screen15AnimText_ScreenFv
b        lbl_803DDF1C

lbl_803DDF00:
lis      r3, lbl_80496EC4@ha
lis      r5, lbl_80496EE8@ha
addi     r3, r3, lbl_80496EC4@l
li       r4, 0x18b
addi     r5, r5, lbl_80496EE8@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803DDF1C:
lwz      r3, sys@sda21(r13)
lfs      f1, lbl_8051FBF0@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x34(r31)
stw      r3, 0x38(r31)

lbl_803DDF38:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DDF4C
 * Size:	000368
 */
void TSaveMenu::updateMsg_(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lwz      r3, 0x34(r3)
cmplwi   r3, 0
beq      lbl_803DDF78
addi     r0, r3, -1
stw      r0, 0x34(r30)

lbl_803DDF78:
lwz      r0, 0x28(r30)
cmpwi    r0, 2
beq      lbl_803DDFBC
bge      lbl_803DDF94
cmpwi    r0, 1
bge      lbl_803DDFA0
b        lbl_803DE29C

lbl_803DDF94:
cmpwi    r0, 4
bge      lbl_803DE29C
b        lbl_803DE230

lbl_803DDFA0:
lwz      r0, 0x34(r30)
cmplwi   r0, 0
bne      lbl_803DE29C
mr       r3, r30
li       r4, 2
bl
startMsgState___Q33ebi6Screen9TSaveMenuFQ43ebi6Screen9TSaveMenu12enumMsgState b
lbl_803DE29C

lbl_803DDFBC:
lwz      r0, 0x2c(r30)
cmpwi    r0, 2
beq      lbl_803DE29C
bge      lbl_803DDFDC
cmpwi    r0, 0
beq      lbl_803DDFE4
bge      lbl_803DE21C
b        lbl_803DE29C

lbl_803DDFDC:
cmpwi    r0, 4
bge      lbl_803DE29C

lbl_803DDFE4:
lwz      r0, 0x2c(r30)
cmpwi    r0, 0
bne      lbl_803DDFFC
li       r4, 0
li       r31, 1
b        lbl_803DE00C

lbl_803DDFFC:
cmpwi    r0, 3
bne      lbl_803DE00C
li       r4, 0
li       r31, 1

lbl_803DE00C:
lwz      r3, 0xc(r30)
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1c, 0x1c
bne      lbl_803DE02C
lfs      f1, 0x4c(r3)
lfs      f0, lbl_8051FBF0@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803DE034

lbl_803DE02C:
li       r0, 1
b        lbl_803DE038

lbl_803DE034:
li       r0, 0

lbl_803DE038:
clrlwi.  r0, r0, 0x18
beq      lbl_803DE0A8
lbz      r0, 0x3c(r30)
cmplwi   r0, 0
bne      lbl_803DE29C
li       r3, 1
slwi     r0, r4, 2
stb      r3, 0x3c(r30)
add      r3, r30, r0
lfs      f1, lbl_8051FBE8@sda21(r2)
lwz      r3, 0x60(r3)
lfs      f2, lbl_8051FBC8@sda21(r2)
bl       blink__Q32og6Screen15AnimText_ScreenFff
lfs      f1, lbl_8051FBC8@sda21(r2)
slwi     r0, r31, 2
add      r3, r30, r0
fmr      f2, f1
lwz      r3, 0x60(r3)
bl       blink__Q32og6Screen15AnimText_ScreenFff
lbz      r0, 0x3c(r30)
li       r4, 0x1802
li       r5, 0
stb      r0, 0x98(r30)
lbz      r0, 0x3c(r30)
stb      r0, 0xd0(r30)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803DE29C

lbl_803DE0A8:
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1d, 0x1d
bne      lbl_803DE0C4
lfs      f1, 0x4c(r3)
lfs      f0, lbl_8051FBF4@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_803DE0CC

lbl_803DE0C4:
li       r0, 1
b        lbl_803DE0D0

lbl_803DE0CC:
li       r0, 0

lbl_803DE0D0:
clrlwi.  r0, r0, 0x18
beq      lbl_803DE140
lbz      r0, 0x3c(r30)
cmplwi   r0, 1
bne      lbl_803DE29C
lfs      f1, lbl_8051FBC8@sda21(r2)
li       r3, 0
slwi     r0, r4, 2
stb      r3, 0x3c(r30)
add      r3, r30, r0
fmr      f2, f1
lwz      r3, 0x60(r3)
bl       blink__Q32og6Screen15AnimText_ScreenFff
slwi     r0, r31, 2
lfs      f1, lbl_8051FBE8@sda21(r2)
add      r3, r30, r0
lfs      f2, lbl_8051FBC8@sda21(r2)
lwz      r3, 0x60(r3)
bl       blink__Q32og6Screen15AnimText_ScreenFff
lbz      r0, 0x3c(r30)
li       r4, 0x1802
li       r5, 0
stb      r0, 0x98(r30)
lbz      r0, 0x3c(r30)
stb      r0, 0xd0(r30)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803DE29C

lbl_803DE140:
lwz      r3, 0x1c(r3)
rlwinm.  r0, r3, 0, 0x17, 0x17
beq      lbl_803DE1BC
li       r3, 1
stb      r3, 0x3d(r30)
lbz      r0, 0x3c(r30)
cmplwi   r0, 0
beq      lbl_803DE180
li       r0, 0
lfs      f0, lbl_8051FBD0@sda21(r2)
stw      r0, 0x30(r30)
stfs     f0, 0x94(r30)
stb      r3, 0x98(r30)
stfs     f0, 0xcc(r30)
stb      r3, 0xd0(r30)
b        lbl_803DE19C

lbl_803DE180:
stw      r3, 0x30(r30)
li       r0, 0
lfs      f0, lbl_8051FBC8@sda21(r2)
stfs     f0, 0x94(r30)
stb      r0, 0x98(r30)
stfs     f0, 0xcc(r30)
stb      r0, 0xd0(r30)

lbl_803DE19C:
mr       r3, r30
li       r4, 3
bl
startMsgState___Q33ebi6Screen9TSaveMenuFQ43ebi6Screen9TSaveMenu12enumMsgState
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1800
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803DE29C

lbl_803DE1BC:
rlwinm.  r0, r3, 0, 0x16, 0x16
beq      lbl_803DE29C
li       r3, 2
li       r0, 1
stw      r3, 0x30(r30)
addi     r3, r30, 0x6c
stb      r0, 0x3d(r30)
lwz      r12, 0x6c(r30)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
addi     r3, r30, 0xa4
lwz      r12, 0xa4(r30)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
mr       r3, r30
li       r4, 3
bl
startMsgState___Q33ebi6Screen9TSaveMenuFQ43ebi6Screen9TSaveMenu12enumMsgState
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1801
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803DE29C

lbl_803DE21C:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x100b
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803DE29C

lbl_803DE230:
lwz      r0, 0x2c(r30)
cmpwi    r0, 2
beq      lbl_803DE274
bge      lbl_803DE250
cmpwi    r0, 0
beq      lbl_803DE25C
bge      lbl_803DE26C
b        lbl_803DE278

lbl_803DE250:
cmpwi    r0, 4
bge      lbl_803DE278
b        lbl_803DE264

lbl_803DE25C:
lwz      r4, 0x60(r30)
b        lbl_803DE278

lbl_803DE264:
lwz      r4, 0x60(r30)
b        lbl_803DE278

lbl_803DE26C:
lwz      r4, 0x68(r30)
b        lbl_803DE278

lbl_803DE274:
lwz      r4, 0x68(r30)

lbl_803DE278:
lbz      r0, 0x3c(r4)
cmplwi   r0, 0
beq      lbl_803DE29C
lwz      r0, 0x34(r30)
cmplwi   r0, 0
bne      lbl_803DE29C
mr       r3, r30
li       r4, 0
bl
startMsgState___Q33ebi6Screen9TSaveMenuFQ43ebi6Screen9TSaveMenu12enumMsgState

lbl_803DE29C:
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
 * Address:	803DE2B4
 * Size:	00000C
 */
void TSaveMenu::getName(void)
{
	/*
lis      r3, lbl_80496F0C@ha
addi     r3, r3, lbl_80496F0C@l
blr
	*/
}
} // namespace Screen
} // namespace ebi
