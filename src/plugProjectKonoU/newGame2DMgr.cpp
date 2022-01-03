#include "JSystem/JUT/JUTException.h"
#include "Screen/Game2DMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80498510
    lbl_80498510:
        .4byte 0x6E657747
        .4byte 0x616D6532
        .4byte 0x444D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80498524
    lbl_80498524:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80498530
    lbl_80498530:
        .4byte 0x534D454E
        .4byte 0x55204D4F
        .4byte 0x44452045
        .4byte 0x52522100
    .global lbl_80498540
    lbl_80498540:
        .4byte 0x534D454E
        .4byte 0x55204669
        .4byte 0x6E697368
        .4byte 0x53746174
        .4byte 0x65457272
        .4byte 0x6F722025
        .4byte 0x64200A00
    .global lbl_8049855C
    lbl_8049855C:
        .4byte 0x6661696C
        .4byte 0x20746F20
        .4byte 0x6F70656E
        .4byte 0x204B616E
        .4byte 0x74656921
        .4byte 0x0A000000
    .global lbl_80498574
    lbl_80498574:
        .4byte 0x63616C6C
        .4byte 0x20746F20
        .4byte 0x4F472073
        .4byte 0x616E0000
    .global lbl_80498584
    lbl_80498584:
        .4byte 0x64697370
        .4byte 0x206D656D
        .4byte 0x62657220
        .4byte 0x65727200
    .global lbl_80498594
    lbl_80498594:
        .4byte 0x6B684669
        .4byte 0x6E616C46
        .4byte 0x6C6F6F72
        .4byte 0x2E680000
    .global lbl_804985A4
    lbl_804985A4:
        .4byte 0x496C6C65
        .4byte 0x67616C20
        .4byte 0x63616C6C
        .4byte 0x2E0A0000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EA7D8
    lbl_804EA7D8:
        .4byte lbl_803FD008
        .4byte lbl_803FCFB8
        .4byte lbl_803FCFC0
        .4byte lbl_803FCFCC
        .4byte lbl_803FCFD8
        .4byte lbl_803FCFE4
        .4byte lbl_803FCFF0
        .4byte lbl_803FCFFC
    .global __vt__Q26Screen11EndSceneArg
    __vt__Q26Screen11EndSceneArg:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q26Screen12SceneArgBaseCFv
        .4byte getClassSize__Q26Screen11EndSceneArgFv
    .global __vt__Q32og9newScreen15SArgChallenge1P
    __vt__Q32og9newScreen15SArgChallenge1P:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen15SArgChallenge1PCFv
        .4byte getClassSize__Q32og9newScreen15SArgChallenge1PFv
    .global __vt__Q32og9newScreen15SArgChallenge2P
    __vt__Q32og9newScreen15SArgChallenge2P:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen15SArgChallenge2PCFv
        .4byte getClassSize__Q32og9newScreen15SArgChallenge2PFv
    .global __vt__Q32og9newScreen17SArgChallengeBase
    __vt__Q32og9newScreen17SArgChallengeBase:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q26Screen12SceneArgBaseCFv
        .4byte 0
    .global __vt__Q32kh6Screen11DispReadyGo
    __vt__Q32kh6Screen11DispReadyGo:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32kh6Screen11DispReadyGoFv
        .4byte getOwnerID__Q32kh6Screen11DispReadyGoFv
        .4byte getMemberID__Q32kh6Screen11DispReadyGoFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32kh6Screen14DispFinalFloor
    __vt__Q32kh6Screen14DispFinalFloor:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32kh6Screen14DispFinalFloorFv
        .4byte getOwnerID__Q32kh6Screen14DispFinalFloorFv
        .4byte getMemberID__Q32kh6Screen14DispFinalFloorFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q26Screen9Game2DMgr
    __vt__Q26Screen9Game2DMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26Screen9Game2DMgrFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global gGame2DMgr__6Screen
    gGame2DMgr__6Screen:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520038
    lbl_80520038:
        .4byte 0x3FC00000
    .global lbl_8052003C
    lbl_8052003C:
        .4byte 0x3DA3D70A
    .global lbl_80520040
    lbl_80520040:
        .float 1.0
        .4byte 0x00000000
*/

namespace Screen {

/*
 * --INFO--
 * Address:	803FBEEC
 * Size:	000060
 */
void Game2DMgr::create()
{
	// TODO: Why is this so late in the file?!?
	P2ASSERTLINE(486, gGame2DMgr == nullptr);
	gGame2DMgr = new Game2DMgr();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, gGame2DMgr__6Screen@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803FBF20
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x1e6
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FBF20:
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803FBF38
	bl       __ct__Q26Screen9Game2DMgrFv
	mr       r0, r3

lbl_803FBF38:
	stw      r0, gGame2DMgr__6Screen@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FBF4C
 * Size:	000058
 */
Game2DMgr::Game2DMgr()
    : JKRDisposer()
    , m_screenMgr(nullptr)
{
	m_screenMgr = newScreen::Mgr::create();
	og::Lib2D::create();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q26Screen9Game2DMgr@ha
	li       r0, 0
	addi     r3, r3, __vt__Q26Screen9Game2DMgr@l
	stw      r3, 0(r31)
	stw      r0, 0x18(r31)
	bl       create__Q29newScreen3MgrFv
	stw      r3, 0x18(r31)
	lwz      r3, 0x18(r31)
	bl       init__Q26Screen3MgrFv
	bl       create__Q22og5Lib2DFv
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
 * Address:	803FBFA4
 * Size:	000068
 */
Game2DMgr::~Game2DMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803FBFF0
	lis      r4, __vt__Q26Screen9Game2DMgr@ha
	li       r0, 0
	addi     r5, r4, __vt__Q26Screen9Game2DMgr@l
	li       r4, 0
	stw      r5, 0(r30)
	stw      r0, gGame2DMgr__6Screen@sda21(r13)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_803FBFF0
	mr       r3, r30
	bl       __dl__FPv

lbl_803FBFF0:
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
 * Address:	803FC00C
 * Size:	000020
 */
void Game2DMgr::initInCourse()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       initGround__Q22og9newScreenFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC02C
 * Size:	000024
 */
void Game2DMgr::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       update__Q26Screen3MgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC050
 * Size:	000024
 */
void Game2DMgr::draw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       draw__Q26Screen3MgrFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC074
 * Size:	000004
 */
void Game2DMgr::drawIndirect(Graphics&) { }

/*
 * --INFO--
 * Address:	803FC078
 * Size:	000024
 */
void Game2DMgr::setGamePad(Controller*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       setGamePad__Q26Screen3MgrFP10Controller
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC09C
 * Size:	000034
 */
void Game2DMgr::setDispMember(og::Screen::DispMemberBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_803FC0BC
	bl       setDispMember__Q26Screen3MgrFPQ32og6Screen14DispMemberBase
	b        lbl_803FC0C0

lbl_803FC0BC:
	li       r3, 0

lbl_803FC0C0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC0D0
 * Size:	000038
 */
void Game2DMgr::setToumeiBG()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r6, 0
	li       r7, 0
	lwz      r3, 0x18(r3)
	lwz      r3, 0x1c(r3)
	bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC108
 * Size:	0000BC
 */
void Game2DMgr::open_GameGround(og::Screen::DispMemberGround&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r5, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803FC134
	li       r0, 1
	stb      r0, 0x5e(r4)

lbl_803FC134:
	lwz      r7, playData__4Game@sda21(r13)
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	li       r5, 0x2710
	lwz      r0, 0xe8(r7)
	addi     r7, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r6, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	stw      r0, 0x20(r4)
	li       r0, 1
	stw      r7, 8(r1)
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC1AC
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803FC1AC:
	lwz      r0, 0x24(r1)
	li       r3, 0
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC1C4
 * Size:	000060
 */
bool Game2DMgr::is_GameGround()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2710
	bne      lbl_803FC208
	lwz      r3, 0x18(r30)
	lwz      r3, 0x1c(r3)
	lwz      r0, 0x120(r3)
	cmpwi    r0, 1
	beq      lbl_803FC208
	li       r31, 1

lbl_803FC208:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC224
 * Size:	0001B4
 */
void Game2DMgr::open_GameCave(og::Screen::DispMemberCave&, int)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r6, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r6)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803FC250
	li       r0, 1
	stb      r0, 0x5d(r4)

lbl_803FC250:
	lwz      r3, playData__4Game@sda21(r13)
	cmpwi    r5, 0
	lwz      r0, 0xec(r3)
	stw      r0, 0x20(r4)
	bne      lbl_803FC2D4
	lis      r5, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2711
	stw      r0, 0x34(r1)
	addi     r6, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 0x40(r1)
	addi     r4, r1, 0x34
	stw      r6, 0x34(r1)
	stw      r5, 0x38(r1)
	stb      r3, 0x3c(r1)
	stb      r0, 0x3d(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC3C0
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FC3C0

lbl_803FC2D4:
	rlwinm.  r0, r5, 0, 0x1e, 0x1e
	beq      lbl_803FC3C0
	lis      r5, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2711
	stw      r0, 0x24(r1)
	addi     r6, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 0x30(r1)
	addi     r4, r1, 0x24
	stw      r6, 0x24(r1)
	stw      r5, 0x28(r1)
	stb      r3, 0x2c(r1)
	stb      r0, 0x2d(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC3C0
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	addi     r8, r4, __vt__Q32og6Screen14DispMemberBase@l
	li       r9, 0
	addi     r7, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q32kh6Screen14DispFinalFloor@ha
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x18
	li       r5, 0x4e22
	li       r3, 1
	stw      r8, 0x18(r1)
	addi     r8, r6, __vt__Q32kh6Screen14DispFinalFloor@l
	addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r9, 0x1c(r1)
	stw      r8, 0x18(r1)
	stb      r9, 0x20(r1)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stb      r9, 0x10(r1)
	stb      r3, 0x11(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC3C0
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803FC3C0:
	lwz      r0, 0x54(r1)
	li       r3, 0
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC3D8
 * Size:	000060
 */
bool Game2DMgr::is_GameCave()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2711
	bne      lbl_803FC41C
	lwz      r3, 0x18(r30)
	lwz      r3, 0x1c(r3)
	lwz      r0, 0x120(r3)
	cmpwi    r0, 1
	beq      lbl_803FC41C
	li       r31, 1

lbl_803FC41C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC438
 * Size:	0001A0
 */
void Game2DMgr::open_GameVs(og::Screen::DispMemberVs&, int)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	cmpwi    r5, 0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	bne      lbl_803FC4C4
	lis      r5, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2712
	stw      r0, 0x28(r1)
	addi     r6, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 0x34(r1)
	addi     r4, r1, 0x28
	stw      r6, 0x28(r1)
	stw      r5, 0x2c(r1)
	stb      r3, 0x30(r1)
	stb      r0, 0x31(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC5C0
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FC5C0

lbl_803FC4C4:
	clrlwi.  r0, r5, 0x1f
	beq      lbl_803FC5C0
	lis      r5, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2712
	stw      r0, 0x18(r1)
	addi     r6, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 0x24(r1)
	addi     r4, r1, 0x18
	stw      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stb      r3, 0x20(r1)
	stb      r0, 0x21(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC5C0
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	li       r9, 0
	lis      r5, __vt__Q32kh6Screen11DispReadyGo@ha
	addi     r10, r4, __vt__Q32og6Screen14DispMemberBase@l
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x38
	li       r7, 1
	stb      r9, 0x44(r1)
	li       r3, 0x4e21
	addi     r8, r5, __vt__Q32kh6Screen11DispReadyGo@l
	stw      r10, 0x38(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stw      r9, 0x3c(r1)
	stw      r8, 0x38(r1)
	stw      r9, 0x40(r1)
	stb      r9, 0x45(r1)
	stw      r9, 0x48(r1)
	stb      r7, 0x44(r1)
	stw      r5, 8(r1)
	stw      r3, 0xc(r1)
	stb      r9, 0x10(r1)
	stb      r7, 0x11(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC5C0
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803FC5C0:
	lwz      r0, 0x64(r1)
	li       r3, 1
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC5D8
 * Size:	00009C
 */
void Game2DMgr::check_VsStatus()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	li       r30, 3
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	or.      r31, r3, r3
	beq      lbl_803FC658
	lis      r4, 0x004F4741@ha
	li       r6, 0x5653
	addi     r4, r4, 0x004F4741@l
	li       r5, 0
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC658
	lwz      r0, 8(r31)
	cmpwi    r0, 1
	beq      lbl_803FC64C
	bge      lbl_803FC638
	cmpwi    r0, 0
	bge      lbl_803FC644
	b        lbl_803FC658

lbl_803FC638:
	cmpwi    r0, 3
	bge      lbl_803FC658
	b        lbl_803FC654

lbl_803FC644:
	li       r30, 0
	b        lbl_803FC658

lbl_803FC64C:
	li       r30, 1
	b        lbl_803FC658

lbl_803FC654:
	li       r30, 2

lbl_803FC658:
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
 * Address:	803FC674
 * Size:	000334
 */
void Game2DMgr::open_GameChallenge2P(og::Screen::DispMemberChallenge2P&, int)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	lis      r7, __vt__Q26Screen13StartSceneArg@ha
	stw      r0, 0x94(r1)
	addi     r8, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r0, r7, __vt__Q26Screen13StartSceneArg@l
	lis      r7, __vt__Q26Screen11SetSceneArg@ha
	stw      r31, 0x8c(r1)
	li       r9, 0x2724
	lfs      f0, lbl_80520038@sda21(r2)
	addi     r10, r7, __vt__Q26Screen11SetSceneArg@l
	stw      r8, 8(r1)
	li       r7, 1
	lis      r6, __vt__Q32og9newScreen17SArgChallengeBase@ha
	cmpwi    r5, 0
	stw      r0, 8(r1)
	addi     r0, r6, __vt__Q32og9newScreen17SArgChallengeBase@l
	lis      r6, __vt__Q32og9newScreen15SArgChallenge2P@ha
	mr       r31, r3
	stw      r8, 0x4c(r1)
	li       r8, 0
	stw      r0, 8(r1)
	addi     r0, r6, __vt__Q32og9newScreen15SArgChallenge2P@l
	stw      r10, 0x4c(r1)
	stw      r9, 0x50(r1)
	stb      r8, 0x54(r1)
	stb      r7, 0x55(r1)
	stw      r4, 0x58(r1)
	stfs     f0, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_803FC730
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC994
	lwz      r3, 0x18(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FC994

lbl_803FC730:
	clrlwi   r0, r5, 0x1e
	cmpwi    r0, 3
	bne      lbl_803FC808
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC994
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	li       r9, 0
	lis      r5, __vt__Q32kh6Screen11DispReadyGo@ha
	addi     r10, r4, __vt__Q32og6Screen14DispMemberBase@l
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x70
	li       r7, 1
	stb      r9, 0x7c(r1)
	li       r3, 0x4e21
	addi     r8, r5, __vt__Q32kh6Screen11DispReadyGo@l
	stw      r10, 0x70(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x3c
	stb      r9, 0x7d(r1)
	stw      r9, 0x80(r1)
	stw      r6, 0x3c(r1)
	stw      r9, 0x74(r1)
	stw      r8, 0x70(r1)
	stw      r9, 0x78(r1)
	stb      r7, 0x7c(r1)
	stb      r7, 0x7d(r1)
	stw      r7, 0x80(r1)
	stw      r5, 0x3c(r1)
	stw      r3, 0x40(r1)
	stb      r9, 0x44(r1)
	stb      r7, 0x45(r1)
	stw      r0, 0x48(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC994
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FC994

lbl_803FC808:
	clrlwi.  r0, r5, 0x1f
	beq      lbl_803FC8D8
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC994
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	li       r9, 0
	lis      r5, __vt__Q32kh6Screen11DispReadyGo@ha
	addi     r10, r4, __vt__Q32og6Screen14DispMemberBase@l
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x5c
	li       r7, 1
	stb      r9, 0x68(r1)
	li       r3, 0x4e21
	addi     r8, r5, __vt__Q32kh6Screen11DispReadyGo@l
	stw      r10, 0x5c(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x2c
	stw      r9, 0x6c(r1)
	stw      r6, 0x2c(r1)
	stw      r9, 0x60(r1)
	stw      r8, 0x5c(r1)
	stw      r9, 0x64(r1)
	stb      r9, 0x69(r1)
	stb      r7, 0x68(r1)
	stw      r7, 0x6c(r1)
	stw      r5, 0x2c(r1)
	stw      r3, 0x30(r1)
	stb      r9, 0x34(r1)
	stb      r7, 0x35(r1)
	stw      r0, 0x38(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC994
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FC994

lbl_803FC8D8:
	rlwinm.  r0, r5, 0, 0x1e, 0x1e
	beq      lbl_803FC994
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC994
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	li       r9, 0
	lis      r5, __vt__Q32kh6Screen14DispFinalFloor@ha
	addi     r10, r4, __vt__Q32og6Screen14DispMemberBase@l
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x20
	li       r7, 1
	stb      r9, 0x28(r1)
	li       r3, 0x4e22
	addi     r8, r5, __vt__Q32kh6Screen14DispFinalFloor@l
	stw      r10, 0x20(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x10
	stw      r6, 0x10(r1)
	stw      r9, 0x24(r1)
	stw      r8, 0x20(r1)
	stb      r7, 0x28(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	stb      r9, 0x18(r1)
	stb      r7, 0x19(r1)
	stw      r0, 0x1c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FC994
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803FC994:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FC9A8
 * Size:	000328
 */
void Game2DMgr::open_GameChallenge1P(og::Screen::DispMemberChallenge1P&, int)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	lis      r7, __vt__Q26Screen13StartSceneArg@ha
	stw      r0, 0x94(r1)
	addi     r8, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r0, r7, __vt__Q26Screen13StartSceneArg@l
	lis      r7, __vt__Q26Screen11SetSceneArg@ha
	stw      r31, 0x8c(r1)
	li       r9, 0x2727
	lfs      f0, lbl_80520038@sda21(r2)
	addi     r10, r7, __vt__Q26Screen11SetSceneArg@l
	stw      r8, 8(r1)
	li       r7, 1
	lis      r6, __vt__Q32og9newScreen17SArgChallengeBase@ha
	cmpwi    r5, 0
	stw      r0, 8(r1)
	addi     r0, r6, __vt__Q32og9newScreen17SArgChallengeBase@l
	lis      r6, __vt__Q32og9newScreen15SArgChallenge1P@ha
	mr       r31, r3
	stw      r8, 0x4c(r1)
	li       r8, 0
	stw      r0, 8(r1)
	addi     r0, r6, __vt__Q32og9newScreen15SArgChallenge1P@l
	stw      r10, 0x4c(r1)
	stw      r9, 0x50(r1)
	stb      r8, 0x54(r1)
	stb      r7, 0x55(r1)
	stw      r4, 0x58(r1)
	stfs     f0, 0xc(r1)
	stw      r0, 8(r1)
	bne      lbl_803FCA64
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCCBC
	lwz      r3, 0x18(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FCCBC

lbl_803FCA64:
	clrlwi   r0, r5, 0x1e
	cmpwi    r0, 3
	bne      lbl_803FCB38
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCCBC
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	li       r9, 0
	lis      r5, __vt__Q32kh6Screen11DispReadyGo@ha
	addi     r10, r4, __vt__Q32og6Screen14DispMemberBase@l
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x70
	li       r7, 1
	stb      r9, 0x7d(r1)
	li       r3, 0x4e21
	addi     r8, r5, __vt__Q32kh6Screen11DispReadyGo@l
	stw      r10, 0x70(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x3c
	stw      r9, 0x80(r1)
	stw      r6, 0x3c(r1)
	stw      r9, 0x74(r1)
	stw      r8, 0x70(r1)
	stw      r9, 0x78(r1)
	stb      r9, 0x7c(r1)
	stb      r7, 0x7d(r1)
	stw      r7, 0x80(r1)
	stw      r5, 0x3c(r1)
	stw      r3, 0x40(r1)
	stb      r9, 0x44(r1)
	stb      r7, 0x45(r1)
	stw      r0, 0x48(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCCBC
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FCCBC

lbl_803FCB38:
	cmpwi    r5, 1
	bne      lbl_803FCC04
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCCBC
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	li       r9, 0
	lis      r5, __vt__Q32kh6Screen11DispReadyGo@ha
	addi     r10, r4, __vt__Q32og6Screen14DispMemberBase@l
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x5c
	li       r7, 1
	stw      r9, 0x6c(r1)
	li       r3, 0x4e21
	addi     r8, r5, __vt__Q32kh6Screen11DispReadyGo@l
	stw      r10, 0x5c(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x2c
	stw      r6, 0x2c(r1)
	stw      r9, 0x60(r1)
	stw      r8, 0x5c(r1)
	stw      r9, 0x64(r1)
	stb      r9, 0x68(r1)
	stb      r9, 0x69(r1)
	stw      r7, 0x6c(r1)
	stw      r5, 0x2c(r1)
	stw      r3, 0x30(r1)
	stb      r9, 0x34(r1)
	stb      r7, 0x35(r1)
	stw      r0, 0x38(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCCBC
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FCCBC

lbl_803FCC04:
	cmpwi    r5, 2
	bne      lbl_803FCCBC
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x4c
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCCBC
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	addi     r8, r4, __vt__Q32og6Screen14DispMemberBase@l
	li       r9, 0
	addi     r7, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q32kh6Screen14DispFinalFloor@ha
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r1, 0x20
	li       r5, 0x4e22
	li       r3, 1
	stw      r8, 0x20(r1)
	addi     r8, r6, __vt__Q32kh6Screen14DispFinalFloor@l
	addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x10
	stw      r7, 0x10(r1)
	stw      r9, 0x24(r1)
	stw      r8, 0x20(r1)
	stb      r9, 0x28(r1)
	stw      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stb      r9, 0x18(r1)
	stb      r3, 0x19(r1)
	stw      r0, 0x1c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCCBC
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803FCCBC:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FCCD0
 * Size:	0000B0
 */
void Game2DMgr::open_SMenu(og::Screen::DispMemberSMenuAll&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCD04
	li       r3, 0
	b        lbl_803FCD68

lbl_803FCD04:
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2724
	beq      lbl_803FCD3C
	bge      lbl_803FCD2C
	cmpwi    r3, 0x2713
	bge      lbl_803FCD34
	cmpwi    r3, 0x2710
	bge      lbl_803FCD3C
	b        lbl_803FCD34

lbl_803FCD2C:
	cmpwi    r3, 0x2727
	beq      lbl_803FCD3C

lbl_803FCD34:
	li       r3, 0
	b        lbl_803FCD68

lbl_803FCD3C:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	bne      lbl_803FCD54
	li       r3, 0
	b        lbl_803FCD68

lbl_803FCD54:
	li       r0, 1
	mr       r3, r30
	stb      r0, 0xa6(r31)
	mr       r4, r31
	bl open_SMenu_Sub__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll

lbl_803FCD68:
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
 * Address:	803FCD80
 * Size:	0001B0
 */
void Game2DMgr::open_SMenu_Sub(og::Screen::DispMemberSMenuAll&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	li       r31, 0
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	stw      r28, 0x30(r1)
	lwz      r0, 0x14(r4)
	stw      r0, 0x28(r4)
	lwz      r3, 0x18(r3)
	lbz      r0, 0x91(r3)
	cmplwi   r0, 0
	beq      lbl_803FCDCC
	li       r0, 1
	stb      r0, 0xa5(r30)
	b        lbl_803FCDD4

lbl_803FCDCC:
	li       r0, 0
	stb      r0, 0xa5(r30)

lbl_803FCDD4:
	lwz      r0, 0x28(r30)
	cmplwi   r0, 0x2710
	bge      lbl_803FCDEC
	li       r0, 1
	stb      r0, 0x2c(r30)
	b        lbl_803FCDF4

lbl_803FCDEC:
	li       r0, 0
	stb      r0, 0x2c(r30)

lbl_803FCDF4:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setOpen__Q22og5SoundFv
	bl       PSPause_StartMenuOn__Fv
	lwz      r0, 0xbc(r30)
	cmpwi    r0, 0
	beq      lbl_803FCE1C
	blt      lbl_803FCEC4
	cmpwi    r0, 3
	bge      lbl_803FCEC4
	b        lbl_803FCE70

lbl_803FCE1C:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x271d
	stw      r0, 0x18(r1)
	addi     r4, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 0x18(r1)
	addi     r4, r1, 0x18
	stw      r5, 0x1c(r1)
	stb      r3, 0x20(r1)
	stb      r0, 0x21(r1)
	stw      r30, 0x24(r1)
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	b        lbl_803FCEE0

lbl_803FCE70:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2728
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stw      r30, 0x14(r1)
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	b        lbl_803FCEE0

lbl_803FCEC4:
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498530@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x3c9
	addi     r5, r5, lbl_80498530@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FCEE0:
	clrlwi.  r0, r28, 0x18
	beq      lbl_803FCF0C
	lwz      r3, 0x18(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCF0C
	li       r31, 1

lbl_803FCF0C:
	lwz      r0, 0x44(r1)
	mr       r3, r31
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FCF30
 * Size:	000128
 */
void Game2DMgr::check_SMenu()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, -1
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2728
	beq      lbl_803FCF80
	bge      lbl_803FCF74
	cmpwi    r3, 0x271e
	bge      lbl_803FD038
	cmpwi    r3, 0x271a
	bge      lbl_803FCF80
	b        lbl_803FD038

lbl_803FCF74:
	cmpwi    r3, 0x272b
	beq      lbl_803FCF80
	b        lbl_803FD038

lbl_803FCF80:
	lwz      r3, 0x18(r30)
	bl       isSceneFinish__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD030
	lwz      r3, 0x18(r30)
	bl       getSceneFinishState__Q26Screen3MgrFv
	cmplwi   r3, 7
	bgt      lbl_803FD008
	lis      r4, lbl_804EA7D8@ha
	slwi     r0, r3, 2
	addi     r4, r4, lbl_804EA7D8@l
	lwzx     r0, r4, r0
	mtctr    r0
	bctr
	.global  lbl_803FCFB8

lbl_803FCFB8:
	li       r31, 0
	b        lbl_803FD03C
	.global  lbl_803FCFC0

lbl_803FCFC0:
	bl       PSPause_StartMenuOff__Fv
	li       r31, 1
	b        lbl_803FD03C
	.global  lbl_803FCFCC

lbl_803FCFCC:
	bl       PSPause_StartMenuOff__Fv
	li       r31, 2
	b        lbl_803FD03C
	.global  lbl_803FCFD8

lbl_803FCFD8:
	bl       PSPause_StartMenuOff__Fv
	li       r31, 3
	b        lbl_803FD03C
	.global  lbl_803FCFE4

lbl_803FCFE4:
	bl       PSPause_StartMenuOff__Fv
	li       r31, 1
	b        lbl_803FD03C
	.global  lbl_803FCFF0

lbl_803FCFF0:
	bl       PSPause_StartMenuOff__Fv
	li       r31, 4
	b        lbl_803FD03C
	.global  lbl_803FCFFC

lbl_803FCFFC:
	bl       PSPause_StartMenuOff__Fv
	li       r31, 5
	b        lbl_803FD03C
	.global  lbl_803FD008

lbl_803FD008:
	lis      r5, lbl_80498510@ha
	lis      r4, lbl_80498540@ha
	addi     r0, r5, lbl_80498510@l
	mr       r6, r3
	addi     r5, r4, lbl_80498540@l
	li       r4, 0x415
	mr       r3, r0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_803FD03C

lbl_803FD030:
	li       r31, 0
	b        lbl_803FD03C

lbl_803FD038:
	li       r31, -1

lbl_803FD03C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD058
 * Size:	0000A8
 */
void Game2DMgr::open_WorldMapInfoWin0(og::Screen::DispMemberWorldMapInfoWin0&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2729
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD0E8
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD0E8
	li       r3, 1
	b        lbl_803FD0EC

lbl_803FD0E8:
	li       r3, 0

lbl_803FD0EC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD100
 * Size:	00007C
 */
void Game2DMgr::check_WorldMapInfoWin0() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2729
	beq      lbl_803FD12C
	li       r3, 2
	b        lbl_803FD168

lbl_803FD12C:
	lwz      r3, 0x18(r31)
	bl       isSceneFinish__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD164
	lwz      r3, 0x18(r31)
	bl       getSceneFinishState__Q26Screen3MgrFv
	cmpwi    r3, 0
	bne      lbl_803FD154
	li       r3, 0
	b        lbl_803FD168

lbl_803FD154:
	cmpwi    r3, 1
	bne      lbl_803FD164
	li       r3, 1
	b        lbl_803FD168

lbl_803FD164:
	li       r3, 3

lbl_803FD168:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD17C
 * Size:	0000A8
 */
void Game2DMgr::open_WorldMapInfoWin1(og::Screen::DispMemberWorldMapInfoWin1&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x272a
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD20C
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD20C
	li       r3, 1
	b        lbl_803FD210

lbl_803FD20C:
	li       r3, 0

lbl_803FD210:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD224
 * Size:	00007C
 */
void Game2DMgr::check_WorldMapInfoWin1() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x272a
	beq      lbl_803FD250
	li       r3, 2
	b        lbl_803FD28C

lbl_803FD250:
	lwz      r3, 0x18(r31)
	bl       isSceneFinish__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD288
	lwz      r3, 0x18(r31)
	bl       getSceneFinishState__Q26Screen3MgrFv
	cmpwi    r3, 0
	bne      lbl_803FD278
	li       r3, 0
	b        lbl_803FD28C

lbl_803FD278:
	cmpwi    r3, 1
	bne      lbl_803FD288
	li       r3, 1
	b        lbl_803FD28C

lbl_803FD288:
	li       r3, 3

lbl_803FD28C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD2A0
 * Size:	000124
 */
void Game2DMgr::open_Kantei(og::Screen::DispMemberKantei&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	lbz      r0, 0x91(r3)
	cmplwi   r0, 0
	beq      lbl_803FD2D0
	li       r0, 1
	stb      r0, 0x38(r4)
	b        lbl_803FD2D8

lbl_803FD2D0:
	li       r0, 0
	stb      r0, 0x38(r4)

lbl_803FD2D8:
	lwz      r0, 0xc(r4)
	cmplwi   r0, 0x2710
	blt      lbl_803FD2F0
	li       r0, 1
	stb      r0, 0x28(r4)
	b        lbl_803FD2F8

lbl_803FD2F0:
	li       r0, 0
	stb      r0, 0x28(r4)

lbl_803FD2F8:
	lbz      r0, 0x28(r4)
	cmplwi   r0, 0
	beq      lbl_803FD310
	li       r0, 1
	stw      r0, 0x34(r4)
	b        lbl_803FD318

lbl_803FD310:
	li       r0, 0
	stw      r0, 0x34(r4)

lbl_803FD318:
	lis      r5, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2722
	stw      r0, 8(r1)
	addi     r6, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD394
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD394
	bl       PSPause_StartMenuOn__Fv
	b        lbl_803FD3B0

lbl_803FD394:
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_8049855C@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x476
	addi     r5, r5, lbl_8049855C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FD3B0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD3C4
 * Size:	000084
 */
void Game2DMgr::close_Kantei()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2722
	bne      lbl_803FD434
	lwz      r3, 0x18(r31)
	bl       setBackupScene__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD418
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FD434

lbl_803FD418:
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498574@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x48f
	addi     r5, r5, lbl_80498574@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FD434:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD448
 * Size:	000074
 */
bool Game2DMgr::update_Kantei()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	li       r30, 1
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	or.      r31, r3, r3
	beq      lbl_803FD4A0
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4E544549@ha
	addi     r4, r4, 0x004F4741@l
	li       r5, 0x4b41
	addi     r6, r6, 0x4E544549@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD4A0
	lbz      r0, 0x30(r31)
	cmplwi   r0, 0
	beq      lbl_803FD4A0
	li       r30, 0

lbl_803FD4A0:
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
 * Address:	803FD4BC
 * Size:	000090
 */
void Game2DMgr::open_SpecialItem(og::Screen::DispMemberSpecialItem&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2723
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	bl       PSPause_StartMenuOn__Fv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD54C
 * Size:	000084
 */
void Game2DMgr::close_SpecialItem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2723
	bne      lbl_803FD5BC
	lwz      r3, 0x18(r31)
	bl       setBackupScene__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FD5A0
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FD5BC

lbl_803FD5A0:
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498574@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x4c7
	addi     r5, r5, lbl_80498574@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FD5BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD5D0
 * Size:	000090
 */
void Game2DMgr::open_Floor(og::Screen::DispMemberFloor&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q26Screen11SetSceneArg@ha
	stw      r31, 0x1c(r1)
	addi     r7, r6, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2713
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stb      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r0, 0x11(r1)
	stb      r0, 0x10(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD660
 * Size:	000070
 */
void Game2DMgr::close_Floor()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2713
	bne      lbl_803FD6BC
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11EndSceneArg@ha
	addi     r4, r4, __vt__Q26Screen12SceneArgBase@l
	li       r0, 1
	stw      r4, 8(r1)
	addi     r3, r3, __vt__Q26Screen11EndSceneArg@l
	addi     r4, r1, 8
	stw      r3, 8(r1)
	stb      r0, 0xc(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803FD6BC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD6D0
 * Size:	00005C
 */
void Game2DMgr::set_FloorVS_LoadEnd()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2713
	bne      lbl_803FD718
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	li       r0, 1
	mr       r4, r3
	stb      r0, 0x12(r3)
	lwz      r3, 0x18(r31)
	cmplwi   r3, 0
	beq      lbl_803FD718
	bl       setDispMember__Q26Screen3MgrFPQ32og6Screen14DispMemberBase

lbl_803FD718:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD72C
 * Size:	000048
 */
void Game2DMgr::startCount_Floor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2713
	bne      lbl_803FD760
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	li       r0, 1
	stb      r0, 0x10(r3)

lbl_803FD760:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD774
 * Size:	000048
 */
void Game2DMgr::startFadeBG_Floor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2713
	bne      lbl_803FD7A8
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	li       r0, 1
	stb      r0, 0x11(r3)

lbl_803FD7A8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD7BC
 * Size:	000090
 */
bool Game2DMgr::open_CourseName(og::Screen::DispMemberCourseName&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q26Screen11SetSceneArg@ha
	stw      r31, 0x1c(r1)
	addi     r7, r6, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x271e
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stb      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r0, 0x11(r1)
	stb      r0, 0x10(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD84C
 * Size:	000048
 */
void Game2DMgr::startFadeBG_CourseName()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x271e
	bne      lbl_803FD880
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	li       r0, 1
	stb      r0, 0xd(r3)

lbl_803FD880:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD894
 * Size:	000070
 */
void Game2DMgr::close_CourseName()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x271e
	bne      lbl_803FD8F0
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11EndSceneArg@ha
	addi     r4, r4, __vt__Q26Screen12SceneArgBase@l
	li       r0, 1
	stw      r4, 8(r1)
	addi     r3, r3, __vt__Q26Screen11EndSceneArg@l
	addi     r4, r1, 8
	stw      r3, 8(r1)
	stb      r0, 0xc(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803FD8F0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD904
 * Size:	000048
 */
void Game2DMgr::startCount_CourseName()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x271e
	bne      lbl_803FD938
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	li       r0, 1
	stb      r0, 0xc(r3)

lbl_803FD938:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FD94C
 * Size:	000258
 */
void Game2DMgr::open_GameOver(Screen::Game2DMgr::GameOverTitle)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	cmpwi    r4, 2
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	beq      lbl_803FDA5C
	bge      lbl_803FD97C
	cmpwi    r4, 0
	beq      lbl_803FD98C
	bge      lbl_803FD9F4
	b        lbl_803FDB90

lbl_803FD97C:
	cmpwi    r4, 4
	beq      lbl_803FDB2C
	bge      lbl_803FDB90
	b        lbl_803FDAC4

lbl_803FD98C:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	li       r3, 0
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	stw      r0, 0x48(r1)
	addi     r4, r4, __vt__Q26Screen11SetSceneArg@l
	li       r5, 0x272f
	li       r0, 1
	stw      r4, 0x48(r1)
	addi     r4, r1, 0x48
	stw      r5, 0x4c(r1)
	stb      r3, 0x50(r1)
	stb      r0, 0x51(r1)
	stw      r3, 0x54(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FDB90

lbl_803FD9F4:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	li       r3, 0
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	stw      r0, 0x38(r1)
	addi     r4, r4, __vt__Q26Screen11SetSceneArg@l
	li       r5, 0x2730
	li       r0, 1
	stw      r4, 0x38(r1)
	addi     r4, r1, 0x38
	stw      r5, 0x3c(r1)
	stb      r3, 0x40(r1)
	stb      r0, 0x41(r1)
	stw      r3, 0x44(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FDB90

lbl_803FDA5C:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	li       r3, 0
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	stw      r0, 0x28(r1)
	addi     r4, r4, __vt__Q26Screen11SetSceneArg@l
	li       r5, 0x2731
	li       r0, 1
	stw      r4, 0x28(r1)
	addi     r4, r1, 0x28
	stw      r5, 0x2c(r1)
	stb      r3, 0x30(r1)
	stb      r0, 0x31(r1)
	stw      r3, 0x34(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FDB90

lbl_803FDAC4:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	li       r3, 0
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	stw      r0, 0x18(r1)
	addi     r4, r4, __vt__Q26Screen11SetSceneArg@l
	li       r5, 0x2732
	li       r0, 1
	stw      r4, 0x18(r1)
	addi     r4, r1, 0x18
	stw      r5, 0x1c(r1)
	stb      r3, 0x20(r1)
	stb      r0, 0x21(r1)
	stw      r3, 0x24(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FDB90

lbl_803FDB2C:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	li       r3, 0
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q26Screen11SetSceneArg@l
	li       r5, 0x2733
	li       r0, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stw      r3, 0x14(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803FDB90:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FDBA4
 * Size:	0000AC
 */
void Game2DMgr::close_GameOver()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2733
	beq      lbl_803FDBDC
	bge      lbl_803FDC3C
	cmpwi    r3, 0x272f
	beq      lbl_803FDBDC
	bge      lbl_803FDBF8
	b        lbl_803FDC3C

lbl_803FDBDC:
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_803FDC3C

lbl_803FDBF8:
	lwz      r3, 0x18(r31)
	bl       setBackupScene__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDC24
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FDC3C

lbl_803FDC24:
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803FDC3C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FDC50
 * Size:	0000E0
 */
void Game2DMgr::open_CaveInMenu(og::Screen::DispMemberAnaDemo&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDC84
	li       r3, 0
	b        lbl_803FDD18

lbl_803FDC84:
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2710
	bne      lbl_803FDD14
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x271f
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stw      r31, 0x14(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDD14
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDD14
	bl       PSPause_StartMenuOn__Fv
	li       r3, 1
	b        lbl_803FDD18

lbl_803FDD14:
	li       r3, 0

lbl_803FDD18:
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
 * Address:	803FDD30
 * Size:	00009C
 */
void Game2DMgr::check_CaveInMenu()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	or.      r31, r3, r3
	beq      lbl_803FDDB0
	lis      r4, 0x004F4741@ha
	lis      r6, 0x44454D4F@ha
	lis      r5, 0x414E415F@ha
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x44454D4F@l
	addi     r5, r5, 0x414E415F@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDDA8
	lbz      r0, 0x1f(r31)
	cmplwi   r0, 0
	beq      lbl_803FDD88
	li       r31, 0
	b        lbl_803FDDB4

lbl_803FDD88:
	lbz      r0, 0x1e(r31)
	li       r3, 2
	cmplwi   r0, 0
	beq      lbl_803FDD9C
	li       r3, 1

lbl_803FDD9C:
	mr       r31, r3
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FDDB4

lbl_803FDDA8:
	li       r31, -1
	b        lbl_803FDDB4

lbl_803FDDB0:
	li       r31, -2

lbl_803FDDB4:
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
 * Address:	803FDDCC
 * Size:	0000E0
 */
void Game2DMgr::open_KanketuMenu(og::Screen::DispMemberKanketuMenu&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDE00
	li       r3, 0
	b        lbl_803FDE94

lbl_803FDE00:
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2711
	bne      lbl_803FDE90
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2720
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stw      r31, 0x14(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDE90
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDE90
	bl       PSPause_StartMenuOn__Fv
	li       r3, 1
	b        lbl_803FDE94

lbl_803FDE90:
	li       r3, 0

lbl_803FDE94:
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
 * Address:	803FDEAC
 * Size:	0000F4
 */
void Game2DMgr::open_ChallengeKanketuMenu(og::Screen::DispMemberKanketuMenu&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDEE0
	li       r3, 0
	b        lbl_803FDF88

lbl_803FDEE0:
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2727
	beq      lbl_803FDF00
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2724
	bne      lbl_803FDF84

lbl_803FDF00:
	li       r6, 1
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	stb      r6, 0x26(r31)
	addi     r0, r3, __vt__Q26Screen12SceneArgBase@l
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	li       r3, 0x2720
	stw      r0, 8(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	li       r0, 0
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r3, 0xc(r1)
	stb      r0, 0x10(r1)
	stb      r6, 0x11(r1)
	stw      r31, 0x14(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDF84
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FDF84
	bl       PSPause_StartMenuOn__Fv
	li       r3, 1
	b        lbl_803FDF88

lbl_803FDF84:
	li       r3, 0

lbl_803FDF88:
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
 * Address:	803FDFA0
 * Size:	00009C
 */
void Game2DMgr::check_KanketuMenu()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	or.      r31, r3, r3
	beq      lbl_803FE020
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4B455455@ha
	lis      r5, 0x004B414E@ha
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4B455455@l
	addi     r5, r5, 0x004B414E@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE018
	lbz      r0, 0x1f(r31)
	cmplwi   r0, 0
	beq      lbl_803FDFF8
	li       r31, 0
	b        lbl_803FE024

lbl_803FDFF8:
	lbz      r0, 0x1e(r31)
	li       r3, 2
	cmplwi   r0, 0
	beq      lbl_803FE00C
	li       r3, 1

lbl_803FE00C:
	mr       r31, r3
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FE024

lbl_803FE018:
	li       r31, -1
	b        lbl_803FE024

lbl_803FE020:
	li       r31, -2

lbl_803FE024:
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
 * Address:	803FE03C
 * Size:	000100
 */
void Game2DMgr::open_CaveMoreMenu(og::Screen::DispMemberCaveMore&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE070
	li       r3, 0
	b        lbl_803FE124

lbl_803FE070:
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2711
	beq      lbl_803FE0A0
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2727
	beq      lbl_803FE0A0
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2724
	bne      lbl_803FE120

lbl_803FE0A0:
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r4, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2721
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26Screen11SetSceneArg@l
	li       r3, 0
	li       r0, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stw      r31, 0x14(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE120
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE120
	bl       PSPause_StartMenuOn__Fv
	li       r3, 1
	b        lbl_803FE124

lbl_803FE120:
	li       r3, 0

lbl_803FE124:
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
 * Address:	803FE13C
 * Size:	00009C
 */
void Game2DMgr::check_CaveMoreMenu()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	or.      r31, r3, r3
	beq      lbl_803FE1BC
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4D4F5245@ha
	lis      r5, 0x43415645@ha
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4D4F5245@l
	addi     r5, r5, 0x43415645@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE1B4
	lbz      r0, 0x1f(r31)
	cmplwi   r0, 0
	beq      lbl_803FE194
	li       r31, 0
	b        lbl_803FE1C0

lbl_803FE194:
	lbz      r0, 0x1e(r31)
	li       r3, 2
	cmplwi   r0, 0
	beq      lbl_803FE1A8
	li       r3, 1

lbl_803FE1A8:
	mr       r31, r3
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FE1C0

lbl_803FE1B4:
	li       r31, -1
	b        lbl_803FE1C0

lbl_803FE1BC:
	li       r31, -2

lbl_803FE1C0:
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
 * Address:	803FE1D8
 * Size:	0000AC
 */
void Game2DMgr::open_FinalResult(kh::Screen::DispFinalResult&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q26Screen11SetSceneArg@ha
	stw      r31, 0x1c(r1)
	addi     r7, r6, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x4e26
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stb      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r0, 0x11(r1)
	stb      r0, 0x10(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE26C
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE26C
	li       r3, 1
	b        lbl_803FE270

lbl_803FE26C:
	li       r3, 0

lbl_803FE270:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE284
 * Size:	00008C
 */
void Game2DMgr::check_FinalResult() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e26
	beq      lbl_803FE2B0
	li       r3, -1
	b        lbl_803FE2FC

lbl_803FE2B0:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lis      r5, 0x52534C54@ha
	li       r4, 0x4b48
	addi     r6, r5, 0x52534C54@l
	li       r5, 0x465f
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	bne      lbl_803FE2F0
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498584@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x664
	addi     r5, r5, lbl_80498584@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FE2F0:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r3, 0x10(r3)

lbl_803FE2FC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE310
 * Size:	0000A8
 */
void Game2DMgr::open_CaveResult(kh::Screen::DispCaveResult&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x4e20
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE3A0
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE3A0
	li       r3, 1
	b        lbl_803FE3A4

lbl_803FE3A0:
	li       r3, 0

lbl_803FE3A4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE3B8
 * Size:	00008C
 */
void Game2DMgr::check_CaveResult() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e20
	beq      lbl_803FE3E4
	li       r3, -1
	b        lbl_803FE430

lbl_803FE3E4:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lis      r5, 0x52534C54@ha
	li       r4, 0x4b48
	addi     r6, r5, 0x52534C54@l
	li       r5, 0x435f
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	bne      lbl_803FE424
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498584@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x678
	addi     r5, r5, lbl_80498584@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FE424:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r3, 0x34(r3)

lbl_803FE430:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE444
 * Size:	0000AC
 */
void Game2DMgr::open_DayEndResult(kh::Screen::DispDayEndResult&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q26Screen11SetSceneArg@ha
	stw      r31, 0x1c(r1)
	addi     r7, r6, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x4e2a
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stb      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r0, 0x11(r1)
	stb      r0, 0x10(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE4D8
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE4D8
	li       r3, 1
	b        lbl_803FE4DC

lbl_803FE4D8:
	li       r3, 0

lbl_803FE4DC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE4F0
 * Size:	0000B0
 */
void Game2DMgr::check_DayEndResult() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e23
	beq      lbl_803FE53C
	lwz      r3, 0x18(r31)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e24
	beq      lbl_803FE53C
	lwz      r3, 0x18(r31)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e25
	beq      lbl_803FE53C
	li       r3, -1
	b        lbl_803FE58C

lbl_803FE53C:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lis      r4, 0x52534C54@ha
	lis      r5, 0x0044455F@ha
	addi     r6, r4, 0x52534C54@l
	li       r4, 0x4b48
	addi     r5, r5, 0x0044455F@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	bne      lbl_803FE580
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498584@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x697
	addi     r5, r5, lbl_80498584@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FE580:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r3, 0x58(r3)

lbl_803FE58C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE5A0
 * Size:	0000A8
 */
void Game2DMgr::open_PayDept(kh::Screen::DispPayDept&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x4e27
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE630
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE630
	li       r3, 1
	b        lbl_803FE634

lbl_803FE630:
	li       r3, 0

lbl_803FE634:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE648
 * Size:	00005C
 */
void Game2DMgr::check_PayDept() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e27
	bne      lbl_803FE688
	lwz      r3, 0x18(r30)
	bl       isSceneFinish__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE688
	li       r31, 1

lbl_803FE688:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE6A4
 * Size:	0000A8
 */
void Game2DMgr::open_Save(og::Screen::DispMemberSave&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2725
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE734
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE734
	li       r3, 1
	b        lbl_803FE738

lbl_803FE734:
	li       r3, 0

lbl_803FE738:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE74C
 * Size:	00005C
 */
void Game2DMgr::check_Save() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2725
	bne      lbl_803FE78C
	lwz      r3, 0x18(r30)
	bl       isSceneFinish__Q26Screen3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE78C
	li       r31, 1

lbl_803FE78C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE7A8
 * Size:	0000A8
 */
bool Game2DMgr::open_FinalMessage(og::Screen::DispMemberFinalMessage&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2726
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE838
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FE838
	li       r3, 1
	b        lbl_803FE83C

lbl_803FE838:
	li       r3, 0

lbl_803FE83C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE850
 * Size:	000048
 */
void Game2DMgr::check_FinalMessage() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2726
	beq      lbl_803FE87C
	li       r3, -10
	b        lbl_803FE884

lbl_803FE87C:
	lwz      r3, 0x18(r31)
	bl       getSceneFinishState__Q26Screen3MgrFv

lbl_803FE884:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE898
 * Size:	000070
 */
void Game2DMgr::stopFinalFloorSound()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e22
	bne      lbl_803FE8F4
	lwz      r3, 0x18(r31)
	lwz      r31, 0x1c(r3)
	lwz      r0, 0x220(r31)
	cmplwi   r0, 0
	bne      lbl_803FE8EC
	lis      r3, lbl_80498594@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498594@l
	li       r4, 0x7c
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FE8EC:
	lwz      r3, 0x220(r31)
	bl       stopSound__Q32kh6Screen13ObjFinalFloorFv

lbl_803FE8F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE908
 * Size:	000070
 */
void Game2DMgr::restartFinalFloorSound()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e22
	bne      lbl_803FE964
	lwz      r3, 0x18(r31)
	lwz      r31, 0x1c(r3)
	lwz      r0, 0x220(r31)
	cmplwi   r0, 0
	bne      lbl_803FE95C
	lis      r3, lbl_80498594@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498594@l
	li       r4, 0x7d
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FE95C:
	lwz      r3, 0x220(r31)
	bl       restartSound__Q32kh6Screen13ObjFinalFloorFv

lbl_803FE964:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FE978
 * Size:	000090
 */
void Game2DMgr::check_ReadyGo() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e21
	beq      lbl_803FE9A4
	li       r3, -1
	b        lbl_803FE9F4

lbl_803FE9A4:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lis      r4, 0x595F474F@ha
	lis      r5, 0x52454144@ha
	addi     r6, r4, 0x595F474F@l
	li       r4, 0x4b48
	addi     r5, r5, 0x52454144@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	bne      lbl_803FE9E8
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498584@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x6e6
	addi     r5, r5, lbl_80498584@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FE9E8:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r3, 8(r3)

lbl_803FE9F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FEA08
 * Size:	0000A8
 */
void Game2DMgr::open_WinLoseReason(kh::Screen::DispWinLoseReason&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x4e29
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEA98
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEA98
	li       r3, 1
	b        lbl_803FEA9C

lbl_803FEA98:
	li       r3, 0

lbl_803FEA9C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FEAB0
 * Size:	000068
 */
void Game2DMgr::check_WinLoseReason() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e29
	beq      lbl_803FEADC
	li       r3, 0
	b        lbl_803FEB04

lbl_803FEADC:
	lwz      r4, 0x18(r31)
	li       r3, 0
	lwz      r4, 0x1c(r4)
	lbz      r0, 0x230(r4)
	cmplwi   r0, 0
	beq      lbl_803FEB04
	lbz      r0, 0x231(r4)
	cmplwi   r0, 0
	beq      lbl_803FEB04
	li       r3, 1

lbl_803FEB04:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FEB18
 * Size:	0000A8
 */
void Game2DMgr::open_WinLose(kh::Screen::DispWinLose&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x4e28
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEBA8
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEBA8
	li       r3, 1
	b        lbl_803FEBAC

lbl_803FEBA8:
	li       r3, 0

lbl_803FEBAC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FEBC0
 * Size:	000090
 */
void Game2DMgr::check_WinLose() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x4e28
	beq      lbl_803FEBEC
	li       r3, -1
	b        lbl_803FEC3C

lbl_803FEBEC:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lis      r4, 0x4C4F5345@ha
	lis      r5, 0x57494E5F@ha
	addi     r6, r4, 0x4C4F5345@l
	li       r4, 0x4b48
	addi     r5, r5, 0x57494E5F@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	bne      lbl_803FEC30
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498584@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x709
	addi     r5, r5, lbl_80498584@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FEC30:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r3, 0xc(r3)

lbl_803FEC3C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FEC50
 * Size:	0000D4
 */
void Game2DMgr::open_TimeUp1P()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x34(r1)
	addi     r10, r5, __vt__Q32og6Screen14DispMemberBase@l
	addi     r7, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q32kh6Screen11DispWinLose@ha
	stw      r31, 0x2c(r1)
	li       r11, 0
	li       r8, 1
	addi     r0, r1, 0x18
	stw      r10, 0x18(r1)
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r10, r6, __vt__Q32kh6Screen11DispWinLose@l
	li       r9, 4
	li       r5, 0x4e28
	addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
	stw      r7, 8(r1)
	mr       r31, r3
	addi     r4, r1, 8
	stw      r11, 0x1c(r1)
	stw      r10, 0x18(r1)
	stw      r9, 0x20(r1)
	stw      r8, 0x24(r1)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stb      r11, 0x10(r1)
	stb      r8, 0x11(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FED0C
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FED0C
	li       r3, 1
	b        lbl_803FED10

lbl_803FED0C:
	li       r3, 0

lbl_803FED10:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FED24
 * Size:	0000D4
 */
void Game2DMgr::open_TimeUp2P()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x34(r1)
	addi     r10, r5, __vt__Q32og6Screen14DispMemberBase@l
	addi     r7, r4, __vt__Q26Screen12SceneArgBase@l
	lis      r6, __vt__Q32kh6Screen11DispWinLose@ha
	stw      r31, 0x2c(r1)
	li       r11, 0
	li       r8, 1
	addi     r0, r1, 0x18
	stw      r10, 0x18(r1)
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r10, r6, __vt__Q32kh6Screen11DispWinLose@l
	li       r9, 5
	li       r5, 0x4e28
	addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
	stw      r7, 8(r1)
	mr       r31, r3
	addi     r4, r1, 8
	stw      r11, 0x1c(r1)
	stw      r10, 0x18(r1)
	stw      r9, 0x20(r1)
	stw      r8, 0x24(r1)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stb      r11, 0x10(r1)
	stb      r8, 0x11(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEDE0
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEDE0
	li       r3, 1
	b        lbl_803FEDE4

lbl_803FEDE0:
	li       r3, 0

lbl_803FEDE4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FEDF8
 * Size:	000158
 */
void Game2DMgr::open_Contena(og::Screen::DispMemberContena&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEE2C
	li       r3, 0
	b        lbl_803FEF38

lbl_803FEE2C:
	lfs      f1, lbl_8052003C@sda21(r2)
	mr       r3, r30
	bl       checkDayEnd__Q26Screen9Game2DMgrCFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEE48
	li       r3, 0
	b        lbl_803FEF38

lbl_803FEE48:
	lwz      r0, 8(r31)
	li       r6, 0
	cmpwi    r0, 2
	beq      lbl_803FEE8C
	bge      lbl_803FEE6C
	cmpwi    r0, 0
	beq      lbl_803FEE7C
	bge      lbl_803FEE84
	b        lbl_803FEEA0

lbl_803FEE6C:
	cmpwi    r0, 4
	beq      lbl_803FEE94
	bge      lbl_803FEEA0
	b        lbl_803FEE9C

lbl_803FEE7C:
	li       r6, 0x2714
	b        lbl_803FEEA0

lbl_803FEE84:
	li       r6, 0x2715
	b        lbl_803FEEA0

lbl_803FEE8C:
	li       r6, 0x2716
	b        lbl_803FEEA0

lbl_803FEE94:
	li       r6, 0x2717
	b        lbl_803FEEA0

lbl_803FEE9C:
	li       r6, 0x2718

lbl_803FEEA0:
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r3, __vt__Q26Screen12SceneArgBase@l
	li       r3, 0
	stw      r0, 8(r1)
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	li       r0, 1
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r6, 0xc(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stw      r31, 0x14(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEF34
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEF34
	lwz      r0, 8(r31)
	cmpwi    r0, 3
	bge      lbl_803FEF2C
	cmpwi    r0, 0
	bge      lbl_803FEF28
	b        lbl_803FEF2C

lbl_803FEF28:
	bl       PSPause_StartMenuOn__Fv

lbl_803FEF2C:
	li       r3, 1
	b        lbl_803FEF38

lbl_803FEF34:
	li       r3, 0

lbl_803FEF38:
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
 * Address:	803FEF50
 * Size:	0000C8
 */
void Game2DMgr::check_Contena()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, -1
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	addi     r0, r3, -10004
	cmplwi   r0, 3
	ble      lbl_803FEF88
	cmpwi    r3, 0x2718
	bne      lbl_803FEFFC

lbl_803FEF88:
	lwz      r3, 0x18(r30)
	bl       getDispMember__Q26Screen3MgrFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x54454E41@ha
	lis      r5, 0x00434F4E@ha
	mr       r31, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x54454E41@l
	addi     r5, r5, 0x00434F4E@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FEFF8
	lwz      r0, 0x30(r31)
	cmpwi    r0, 4
	beq      lbl_803FEFDC
	bge      lbl_803FEFE4
	cmpwi    r0, 3
	bge      lbl_803FEFD4
	b        lbl_803FEFE4

lbl_803FEFD4:
	li       r31, 1
	b        lbl_803FEFE8

lbl_803FEFDC:
	li       r31, 2
	b        lbl_803FEFE8

lbl_803FEFE4:
	li       r31, 0

lbl_803FEFE8:
	cmpwi    r31, 0
	beq      lbl_803FEFFC
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FEFFC

lbl_803FEFF8:
	li       r31, -1

lbl_803FEFFC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF018
 * Size:	0000A8
 */
void Game2DMgr::result_Contena()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	li       r30, 0
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	addi     r0, r3, -10004
	cmplwi   r0, 3
	ble      lbl_803FF050
	cmpwi    r3, 0x2718
	bne      lbl_803FF088

lbl_803FF050:
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x54454E41@ha
	lis      r5, 0x00434F4E@ha
	mr       r31, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x54454E41@l
	addi     r5, r5, 0x00434F4E@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF0A4
	lha      r30, 0x34(r31)
	b        lbl_803FF0A4

lbl_803FF088:
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_804985A4@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x791
	addi     r5, r5, lbl_804985A4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF0A4:
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
 * Address:	803FF0C0
 * Size:	000244
 */
void Game2DMgr::open_UfoMenu(og::Screen::DispMemberUfoGroup&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF0F4
	li       r3, 0
	b        lbl_803FF2EC

lbl_803FF0F4:
	lfs      f1, lbl_8052003C@sda21(r2)
	mr       r3, r30
	bl       checkDayEnd__Q26Screen9Game2DMgrCFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF110
	li       r3, 0
	b        lbl_803FF2EC

lbl_803FF110:
	lbz      r3, 0x88(r31)
	cmplwi   r3, 0
	beq      lbl_803FF1C0
	lbz      r0, 0x89(r31)
	cmplwi   r0, 0
	beq      lbl_803FF1C0
	li       r7, 1
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	stb      r7, 0x44(r31)
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	li       r3, 0x2719
	stb      r7, 0x7c(r31)
	li       r0, 0
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x28
	stw      r6, 0x28(r1)
	stw      r5, 0x28(r1)
	stw      r3, 0x2c(r1)
	stb      r0, 0x30(r1)
	stb      r7, 0x31(r1)
	stw      r31, 0x34(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF2E8
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF2E8
	bl       PSPause_StartMenuOn__Fv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1803
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r3, 1
	b        lbl_803FF2EC

lbl_803FF1C0:
	cmplwi   r3, 0
	beq      lbl_803FF250
	li       r7, 0
	lis      r4, __vt__Q26Screen12SceneArgBase@ha
	stb      r7, 0x44(r31)
	li       r6, 1
	lis      r3, __vt__Q26Screen11SetSceneArg@ha
	addi     r5, r4, __vt__Q26Screen12SceneArgBase@l
	stw      r6, 0x10(r31)
	li       r0, 0x2717
	addi     r3, r3, __vt__Q26Screen11SetSceneArg@l
	addi     r4, r1, 0x18
	stw      r5, 0x18(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	stb      r7, 0x20(r1)
	stb      r6, 0x21(r1)
	stw      r31, 0x24(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF2E8
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF2E8
	bl       PSPause_StartMenuOn__Fv
	li       r3, 1
	b        lbl_803FF2EC

lbl_803FF250:
	lbz      r0, 0x89(r31)
	cmplwi   r0, 0
	beq      lbl_803FF2E8
	li       r7, 0
	lis      r3, __vt__Q26Screen12SceneArgBase@ha
	stb      r7, 0x7c(r31)
	li       r0, 2
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r6, r3, __vt__Q26Screen12SceneArgBase@l
	stw      r0, 0x10(r31)
	li       r3, 0x2718
	li       r0, 1
	addi     r5, r4, __vt__Q26Screen11SetSceneArg@l
	stw      r6, 8(r1)
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stw      r3, 0xc(r1)
	stb      r7, 0x10(r1)
	stb      r0, 0x11(r1)
	stw      r31, 0x14(r1)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF2E8
	lwz      r3, 0x18(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF2E8
	bl       PSPause_StartMenuOn__Fv
	li       r3, 1
	b        lbl_803FF2EC

lbl_803FF2E8:
	li       r3, 0

lbl_803FF2EC:
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
 * Address:	803FF304
 * Size:	000130
 */
void Game2DMgr::check_UfoMenu()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	mr       r31, r3
	lwz      r3, 0x18(r29)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2718
	beq      lbl_803FF3C8
	bge      lbl_803FF350
	cmpwi    r3, 0x2717
	bge      lbl_803FF378
	b        lbl_803FF414

lbl_803FF350:
	cmpwi    r3, 0x271a
	bge      lbl_803FF414
	lwz      r0, 0x10(r31)
	cmpwi    r0, 0
	bne      lbl_803FF370
	li       r30, 1
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FF414

lbl_803FF370:
	li       r30, 0
	b        lbl_803FF414

lbl_803FF378:
	lwz      r0, 0x48(r31)
	cmpwi    r0, 4
	beq      lbl_803FF394
	bge      lbl_803FF3C0
	cmpwi    r0, 3
	bge      lbl_803FF3A0
	b        lbl_803FF3C0

lbl_803FF394:
	li       r30, 2
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FF414

lbl_803FF3A0:
	lbz      r0, 0x44(r31)
	cmplwi   r0, 0
	beq      lbl_803FF3B4
	li       r30, 0
	b        lbl_803FF414

lbl_803FF3B4:
	li       r30, 1
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FF414

lbl_803FF3C0:
	li       r30, 0
	b        lbl_803FF414

lbl_803FF3C8:
	lwz      r0, 0x80(r31)
	cmpwi    r0, 4
	beq      lbl_803FF3E4
	bge      lbl_803FF410
	cmpwi    r0, 3
	bge      lbl_803FF3F0
	b        lbl_803FF410

lbl_803FF3E4:
	li       r30, 2
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FF414

lbl_803FF3F0:
	lbz      r0, 0x7c(r31)
	cmplwi   r0, 0
	beq      lbl_803FF404
	li       r30, 0
	b        lbl_803FF414

lbl_803FF404:
	li       r30, 1
	bl       PSPause_StartMenuOff__Fv
	b        lbl_803FF414

lbl_803FF410:
	li       r30, 0

lbl_803FF414:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	803FF434
 * Size:	000098
 */
void Game2DMgr::result_UfoMenu(int*, int*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	mr       r31, r3
	lwz      r3, 0x18(r28)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2718
	beq      lbl_803FF49C
	bge      lbl_803FF4AC
	cmpwi    r3, 0x2717
	bge      lbl_803FF488
	b        lbl_803FF4AC

lbl_803FF488:
	lha      r3, 0x4c(r31)
	li       r0, 0
	stw      r3, 0(r29)
	stw      r0, 0(r30)
	b        lbl_803FF4AC

lbl_803FF49C:
	li       r0, 0
	stw      r0, 0(r29)
	lha      r0, 0x84(r31)
	stw      r0, 0(r30)

lbl_803FF4AC:
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
 * Address:	803FF4CC
 * Size:	00009C
 */
void Game2DMgr::open_ZukanEnemy(Morimura::DispMemberZukanEnemy&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2734
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF550
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FF554

lbl_803FF550:
	li       r3, 0

lbl_803FF554:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF568
 * Size:	00009C
 */
void Game2DMgr::open_ZukanItem(Morimura::DispMemberZukanItem&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2735
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FF5EC
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FF5F0

lbl_803FF5EC:
	li       r3, 0

lbl_803FF5F0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF604
 * Size:	000030
 */
bool Game2DMgr::isZukanEnemy()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	subfic   r0, r3, 0x2734
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF634
 * Size:	000030
 */
bool Game2DMgr::isZukanItem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	subfic   r0, r3, 0x2735
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF664
 * Size:	000084
 */
void Game2DMgr::check_ZukanItemRequest(int&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FF6C8
	lwz      r3, 0x18(r29)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_803FF6C8
	lwz      r3, 0x220(r3)
	cmplwi   r3, 0
	beq      lbl_803FF6C0
	mr       r4, r30
	bl       checkRequest__Q28Morimura10TZukanBaseFRi
	b        lbl_803FF6C4

lbl_803FF6C0:
	li       r3, 0

lbl_803FF6C4:
	mr       r31, r3

lbl_803FF6C8:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	803FF6E8
 * Size:	000084
 */
void Game2DMgr::check_ZukanEnemyRequest(int&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2734
	bne      lbl_803FF74C
	lwz      r3, 0x18(r29)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_803FF74C
	lwz      r3, 0x220(r3)
	cmplwi   r3, 0
	beq      lbl_803FF744
	mr       r4, r30
	bl       checkRequest__Q28Morimura10TZukanBaseFRi
	b        lbl_803FF748

lbl_803FF744:
	li       r3, 0

lbl_803FF748:
	mr       r31, r3

lbl_803FF74C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	803FF76C
 * Size:	000090
 */
void Game2DMgr::getZukanEnemyCurrSelectId()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, -1
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2734
	bne      lbl_803FF7E0
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF7C4
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x893
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF7C4:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF7D8
	bl       getCurrSelectId__Q28Morimura10TZukanBaseFv
	b        lbl_803FF7DC

lbl_803FF7D8:
	li       r3, -1

lbl_803FF7DC:
	mr       r31, r3

lbl_803FF7E0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF7FC
 * Size:	000090
 */
void Game2DMgr::getZukanItemCurrSelectId()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, -1
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FF870
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF854
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8a2
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF854:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF868
	bl       getCurrSelectId__Q28Morimura10TZukanBaseFv
	b        lbl_803FF86C

lbl_803FF868:
	li       r3, -1

lbl_803FF86C:
	mr       r31, r3

lbl_803FF870:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF88C
 * Size:	0000BC
 */
void Game2DMgr::requireZukanRequest()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FF8F0
	lwz      r3, 0x18(r31)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF8DC
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8b3
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF8DC:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF934
	bl       requireRequest__Q28Morimura10TZukanBaseFv
	b        lbl_803FF934

lbl_803FF8F0:
	cmpwi    r3, 0x2734
	bne      lbl_803FF934
	lwz      r3, 0x18(r31)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF924
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8b9
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF924:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF934
	bl       requireRequest__Q28Morimura10TZukanBaseFv

lbl_803FF934:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF948
 * Size:	0000BC
 */
void Game2DMgr::requireZukanEffectOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FF9AC
	lwz      r3, 0x18(r31)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF998
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8c7
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF998:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF9F0
	bl       requireEffectOff__Q28Morimura10TZukanBaseFv
	b        lbl_803FF9F0

lbl_803FF9AC:
	cmpwi    r3, 0x2734
	bne      lbl_803FF9F0
	lwz      r3, 0x18(r31)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF9E0
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8cd
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF9E0:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF9F0
	bl       requireEffectOff__Q28Morimura10TZukanBaseFv

lbl_803FF9F0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFA04
 * Size:	0000E4
 */
bool Game2DMgr::isZukanEnlargedWindow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FFA7C
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFA5C
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8de
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFA5C:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFA70
	bl       isEnlargedWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFA74

lbl_803FFA70:
	li       r3, 0

lbl_803FFA74:
	mr       r31, r3
	b        lbl_803FFACC

lbl_803FFA7C:
	cmpwi    r3, 0x2734
	bne      lbl_803FFACC
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFAB0
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8e5
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFAB0:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFAC4
	bl       isEnlargedWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFAC8

lbl_803FFAC4:
	li       r3, 0

lbl_803FFAC8:
	mr       r31, r3

lbl_803FFACC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFAE8
 * Size:	0000E4
 */
bool Game2DMgr::isZukanMemoWindow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FFB60
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFB40
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8fa
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFB40:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFB54
	bl       isMemoWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFB58

lbl_803FFB54:
	li       r3, 0

lbl_803FFB58:
	mr       r31, r3
	b        lbl_803FFBB0

lbl_803FFB60:
	cmpwi    r3, 0x2734
	bne      lbl_803FFBB0
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFB94
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x901
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFB94:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFBA8
	bl       isMemoWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFBAC

lbl_803FFBA8:
	li       r3, 0

lbl_803FFBAC:
	mr       r31, r3

lbl_803FFBB0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFBCC
 * Size:	0000C4
 */
bool Game2DMgr::isAppearConfirmWindow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FFC34
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFC24
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x929
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFC24:
	mr       r3, r31
	bl       isAppearConfirmWindow__Q28Morimura11TDItemSceneFv
	mr       r31, r3
	b        lbl_803FFC74

lbl_803FFC34:
	cmpwi    r3, 0x2734
	bne      lbl_803FFC74
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFC68
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x930
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFC68:
	mr       r3, r31
	bl       isAppearConfirmWindow__Q28Morimura12TDEnemySceneFv
	mr       r31, r3

lbl_803FFC74:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFC90
 * Size:	00009C
 */
void Game2DMgr::open_ChallengeSelect(Morimura::DispMemberChallengeSelect&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2737
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FFD14
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FFD18

lbl_803FFD14:
	li       r3, 0

lbl_803FFD18:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFD2C
 * Size:	00006C
 */
void Game2DMgr::check_ChallengeSelect(int&, int&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	stw      r0, 0(r4)
	li       r0, 0
	stw      r0, 0(r5)
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	bne      lbl_803FFD7C
	lwz      r0, 0x10(r3)
	stw      r0, 0(r30)
	lwz      r0, 0x18(r3)
	stw      r0, 0(r31)

lbl_803FFD7C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r3, 0x1c(r3)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFD98
 * Size:	00009C
 */
void Game2DMgr::open_ChallengeResult(Morimura::DispMemberChallengeResult&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2738
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FFE1C
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FFE20

lbl_803FFE1C:
	li       r3, 0

lbl_803FFE20:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFE34
 * Size:	000034
 */
bool Game2DMgr::isEndChallengeResult()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r0, 0x10(r3)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFE68
 * Size:	00009C
 */
void Game2DMgr::open_VsSelect(Morimura::DispMemberVsSelect&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2739
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FFEEC
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_803FFEF0

lbl_803FFEEC:
	li       r3, 0

lbl_803FFEF0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFF04
 * Size:	000078
 */
void Game2DMgr::check_VsSelect(int&, int&, int&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, -1
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r0, 0(r4)
	lwz      r3, 0x18(r3)
	bl       getDispMember__Q26Screen3MgrFv
	lwz      r0, 0x34(r3)
	cmpwi    r0, 3
	bne      lbl_803FFF5C
	lwz      r0, 0x14(r3)
	stw      r0, 0(r29)
	lwz      r0, 0x1c(r3)
	stw      r0, 0(r30)
	lwz      r0, 0x20(r3)
	stw      r0, 0(r31)

lbl_803FFF5C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r3, 0x34(r3)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFF7C
 * Size:	00009C
 */
void Game2DMgr::open_HighScore(Morimura::DispMemberHighScore&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q26Screen11SetSceneArg@ha
	lis      r6, __vt__Q26Screen12SceneArgBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, __vt__Q26Screen12SceneArgBase@l
	addi     r7, r5, __vt__Q26Screen11SetSceneArg@l
	li       r6, 0x2736
	stw      r31, 0x1c(r1)
	li       r5, 0
	mr       r31, r3
	stw      r0, 8(r1)
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80400000
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80400004

lbl_80400000:
	li       r3, 0

lbl_80400004:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80400018
 * Size:	000058
 */
bool Game2DMgr::isEndHighScore()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2736
	bne      lbl_80400058
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lbz      r4, 0xc(r3)
	li       r0, 0
	stb      r0, 0xc(r3)
	mr       r3, r4
	b        lbl_8040005C

lbl_80400058:
	li       r3, 0

lbl_8040005C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80400070
 * Size:	00006C
 */
void Game2DMgr::drawKanteiMsg(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2722
	bne      lbl_804000C0
	lwz      r3, 0x18(r30)
	lwz      r3, 0x1c(r3)
	lwz      r3, 0x220(r3)
	cmplwi   r3, 0
	beq      lbl_804000B8
	mr       r4, r31
	bl       doDrawMsg__Q32og9newScreen9ObjKanteiFR8Graphics

lbl_804000B8:
	li       r3, 1
	b        lbl_804000C4

lbl_804000C0:
	li       r3, 0

lbl_804000C4:
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
 * Address:	804000DC
 * Size:	00008C
 */
void Game2DMgr::checkDayEnd(float) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	fmr      f31, f1
	cmplwi   r3, 0
	bne      lbl_8040010C
	li       r3, 0
	b        lbl_8040014C

lbl_8040010C:
	lwz      r31, 0x40(r3)
	mr       r3, r31
	bl       getSunGaugeRatio__Q24Game7TimeMgrFv
	lfs      f4, 0x3c(r31)
	lfs      f2, 0x1f4(r31)
	lfs      f0, 0x64(r31)
	fsubs    f2, f2, f4
	lfs      f3, lbl_80520040@sda21(r2)
	fsubs    f0, f0, f4
	fsubs    f1, f3, f1
	fdivs    f0, f2, f0
	fsubs    f0, f3, f0
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	mfcr     r0
	srwi     r3, r0, 0x1f

lbl_8040014C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80400168
 * Size:	000008
 */
int EndSceneArg::getClassSize() { return 0x8; }
} // namespace Screen

/*
 * --INFO--
 * Address:	80400170
 * Size:	000008
 */
int newScreen::SArgChallenge1P::getSceneType() const { return 0x2727; }

namespace newScreen {

/*
 * --INFO--
 * Address:	80400178
 * Size:	000008
 */
u32 SArgChallenge1P::getClassSize() { return 0x8; }

/*
 * --INFO--
 * Address:	80400180
 * Size:	000008
 */
u32 SArgChallenge2P::getSceneType() const { return 0x2724; }

/*
 * --INFO--
 * Address:	80400188
 * Size:	000008
 */
u32 SArgChallenge2P::getClassSize() { return 0x8; }

namespace kh {

} // namespace kh

namespace Screen {

} // namespace Screen

/*
 * --INFO--
 * Address:	80400190
 * Size:	000008
 */
u32 DispReadyGo::getSize() { return 0x14; }

/*
 * --INFO--
 * Address:	80400198
 * Size:	000008
 */
u32 DispReadyGo::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	804001A0
 * Size:	000014
 */
void DispReadyGo::getMemberID()
{
	/*
lis      r4, 0x595F474F@ha
lis      r3, 0x52454144@ha
addi     r4, r4, 0x595F474F@l
addi     r3, r3, 0x52454144@l
blr
	*/
}

/*
 * --INFO--
 * Address:	804001B4
 * Size:	000008
 */
u32 DispFinalFloor::getSize() { return 0xC; }

/*
 * --INFO--
 * Address:	804001BC
 * Size:	000008
 */
u32 DispFinalFloor::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	804001C4
 * Size:	000014
 */
void DispFinalFloor::getMemberID()
{
	/*
lis      r4, 0x5F464C52@ha
lis      r3, 0x0046494E@ha
addi     r4, r4, 0x5F464C52@l
addi     r3, r3, 0x0046494E@l
blr
	*/
}
} // namespace newScreen
} // namespace Screen
