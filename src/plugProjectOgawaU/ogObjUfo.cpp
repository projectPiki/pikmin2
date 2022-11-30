#include "types.h"
#include "og/newScreen/UfoMenu.h"
#include "P2DScreen.h"
#include "og/Screen/ogScreen.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogObjUfo_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F280
    lbl_8048F280:
        .4byte 0x6F674F62
        .4byte 0x6A55666F
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8048F290
    lbl_8048F290:
        .4byte 0x75666F5F
        .4byte 0x70696B6D
        .4byte 0x696E5F69
        .4byte 0x636F6E2E
        .4byte 0x626C6F00
    .global lbl_8048F2A4
    lbl_8048F2A4:
        .4byte 0x75666F5F
        .4byte 0x70696B6D
        .4byte 0x696E5F69
        .4byte 0x636F6E2E
        .4byte 0x62747000
    .global lbl_8048F2B8
    lbl_8048F2B8:
        .4byte 0x82BE82DF
        .4byte 0x82C582B7
        .4byte 0x0A000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen10ObjUfoMenu
    __vt__Q32og9newScreen10ObjUfoMenu:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen10ObjUfoMenuFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen10ObjUfoMenuFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q32og9newScreen10ObjUfoMenuFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen10ObjUfoMenuFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen10ObjUfoMenuFP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen10ObjUfoMenuFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen10ObjUfoMenuFv
        .4byte doUpdate__Q32og9newScreen10ObjUfoMenuFv
        .4byte doUpdateFinish__Q32og9newScreen10ObjUfoMenuFv
        .4byte doUpdateFadeout__Q32og9newScreen10ObjUfoMenuFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen10ObjUfoMenuFv
        .4byte doDraw__Q32og9newScreen10ObjUfoMenuFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32og9newScreen10ObjUfoMenu
    msVal__Q32og9newScreen10ObjUfoMenu:
        .skip 0x28

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DD28
    lbl_8051DD28:
        .4byte 0x44480000
    .global lbl_8051DD2C
    lbl_8051DD2C:
        .4byte 0x00000000
    .global lbl_8051DD30
    lbl_8051DD30:
        .4byte 0x75666F2E
        .4byte 0x626C6F00
    .global lbl_8051DD38
    lbl_8051DD38:
        .4byte 0x75666F2E
        .4byte 0x62636B00
    .global lbl_8051DD40
    lbl_8051DD40:
        .float 0.5
    .global lbl_8051DD44
    lbl_8051DD44:
        .4byte 0x75666F2E
        .4byte 0x62706B00
    .global lbl_8051DD4C
    lbl_8051DD4C:
        .float 0.1
    .global lbl_8051DD50
    lbl_8051DD50:
        .float 1.0
    .global lbl_8051DD54
    lbl_8051DD54:
        .4byte 0xC4480000
    .global lbl_8051DD58
    lbl_8051DD58:
        .4byte 0x3FC00000
    .global lbl_8051DD5C
    lbl_8051DD5C:
        .4byte 0x3EB33333
    .global lbl_8051DD60
    lbl_8051DD60:
        .float 0.7
    .global lbl_8051DD64
    lbl_8051DD64:
        .4byte 0x3FB33333
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80323798
 * Size:	0000B0
 */
ObjUfoMenu::ObjUfoMenu(char const* name)
{
	m_name = name;
	m_disp = nullptr;
	m_ufoScreen = nullptr;
	m_pikiScreen = nullptr;
	m_selectIndex = 0;
	m_menu = nullptr;
	m_doEnd = false;
	m_screenMovePos = 0.0f;
	m_lightAnims = nullptr;
	m_pikiAnims = nullptr;
	m_fadeTimer = 0.0f;
	m_paneWhiteWalk = nullptr;
	m_panePurpleWalk = nullptr;
	m_paneWhiteStand = nullptr;
	m_panePurpleStand = nullptr;
	m_paneAllWhite = nullptr;
	m_paneAllPurple = nullptr;
	m_paneN00 = nullptr;
	m_paneN01 = nullptr;
	_8C = 0;
	m_doDraw = false;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r3, __vt__Q32og9newScreen10ObjUfoMenu@ha
	li       r0, 0
	addi     r3, r3, __vt__Q32og9newScreen10ObjUfoMenu@l
	lfs      f1, lbl_8051DD28@sda21(r2)
	stw      r3, 0(r30)
	addi     r4, r3, 0x10
	lfs      f0, lbl_8051DD2C@sda21(r2)
	mr       r3, r30
	stw      r4, 0x18(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0x38(r30)
	stw      r0, 0x3c(r30)
	stw      r0, 0x40(r30)
	stw      r0, 0x48(r30)
	stw      r0, 0x4c(r30)
	stb      r0, 0x50(r30)
	stfs     f1, 0x54(r30)
	stw      r0, 0x58(r30)
	stw      r0, 0x60(r30)
	stfs     f0, 0x84(r30)
	stw      r0, 0x64(r30)
	stw      r0, 0x68(r30)
	stw      r0, 0x6c(r30)
	stw      r0, 0x70(r30)
	stw      r0, 0x74(r30)
	stw      r0, 0x78(r30)
	stw      r0, 0x7c(r30)
	stw      r0, 0x80(r30)
	stw      r0, 0x8c(r30)
	stb      r0, 0x88(r30)
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
 * Address:	80323848
 * Size:	0000AC
 */
ObjUfoMenu::~ObjUfoMenu(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803238D8
	lis      r4, __vt__Q32og9newScreen10ObjUfoMenu@ha
	addi     r4, r4, __vt__Q32og9newScreen10ObjUfoMenu@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_803238C8
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_803238C8
	lis      r4, __vt__Q26Screen8IObjBase@ha
	addi     r4, r4, __vt__Q26Screen8IObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	bl       del__5CNodeFv
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_803238C8:
	extsh.   r0, r31
	ble      lbl_803238D8
	mr       r3, r30
	bl       __dl__FPv

lbl_803238D8:
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
 * Address:	803238F4
 * Size:	000490
 */
void ObjUfoMenu::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberUfoGroup* disp = static_cast<og::Screen::DispMemberUfoGroup*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_UFO_GROUP)) {
		m_disp = disp;
	} else {
		m_disp = new og::Screen::DispMemberUfoGroup();
	}
	m_ufoScreen = new P2DScreen::Mgr_tuning;
	m_ufoScreen->set("ufo.blo", 0x1040000, arc);
	m_pikiScreen = new P2DScreen::Mgr_tuning;
	m_pikiScreen->set("ufo_pikmin_icon.blo", 0x1040000, arc);

	m_paneWhiteWalk = og::Screen::TagSearch(m_pikiScreen, 'P_w_00');
	m_paneWhiteStand  = og::Screen::TagSearch(m_pikiScreen, 'P_w_s00');
	m_panePurpleWalk = og::Screen::TagSearch(m_pikiScreen, 'P_b_00');
	m_panePurpleStand = og::Screen::TagSearch(m_pikiScreen, 'P_b_s_00');
	m_paneAllWhite = og::Screen::TagSearch(m_pikiScreen, 'Nall_w');
	m_paneAllPurple = og::Screen::TagSearch(m_pikiScreen, 'Nall_p');
	m_paneN00 = og::Screen::TagSearch(m_pikiScreen, 'N00_c');
	m_paneN01 = og::Screen::TagSearch(m_pikiScreen, 'N01_c');
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stmw     r26, 0x28(r1)
	mr       r30, r3
	mr       r31, r4
	stw      r0, 0x38(r3)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x5F475250@ha
	lis      r5, 0x0055464F@ha
	mr       r26, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x5F475250@l
	addi     r5, r5, 0x0055464F@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80323948
	stw      r26, 0x38(r30)
	b        lbl_80323A54

lbl_80323948:
	li       r3, 0x8c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80323A50
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r6, __vt__Q32og6Screen18DispMemberUfoGroup@ha
	addi     r26, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r5, __vt__Q32og6Screen17DispMemberUfoMenu@ha
	stw      r26, 0(r3)
	li       r27, 0
	lis      r4, __vt__Q32og6Screen17DispMemberContena@ha
	addi     r0, r6, __vt__Q32og6Screen18DispMemberUfoGroup@l
	stw      r27, 4(r3)
	addi     r28, r5, __vt__Q32og6Screen17DispMemberUfoMenu@l
	li       r29, 1
	addi     r12, r4, __vt__Q32og6Screen17DispMemberContena@l
	stw      r0, 0(r3)
	li       r11, 0x64
	li       r10, 0x3e8
	li       r9, 0x14
	stw      r26, 8(r3)
	li       r8, 0x32
	li       r7, 0x3c
	li       r6, 0xc8
	stw      r27, 0xc(r3)
	li       r5, -1
	li       r4, 4
	li       r0, 3
	stw      r28, 8(r3)
	stw      r29, 0x10(r3)
	stb      r27, 0x14(r3)
	stw      r26, 0x18(r3)
	stw      r27, 0x1c(r3)
	stw      r12, 0x18(r3)
	stw      r11, 0x24(r3)
	stw      r10, 0x28(r3)
	stw      r27, 0x2c(r3)
	stw      r9, 0x30(r3)
	stw      r8, 0x34(r3)
	stw      r7, 0x38(r3)
	stw      r6, 0x3c(r3)
	stw      r5, 0x20(r3)
	stw      r27, 0x40(r3)
	stb      r27, 0x44(r3)
	stw      r27, 0x48(r3)
	sth      r27, 0x4c(r3)
	stw      r26, 0x50(r3)
	stw      r27, 0x54(r3)
	stw      r12, 0x50(r3)
	stw      r11, 0x5c(r3)
	stw      r10, 0x60(r3)
	stw      r27, 0x64(r3)
	stw      r9, 0x68(r3)
	stw      r8, 0x6c(r3)
	stw      r7, 0x70(r3)
	stw      r6, 0x74(r3)
	stw      r5, 0x58(r3)
	stw      r27, 0x78(r3)
	stb      r27, 0x7c(r3)
	stw      r27, 0x80(r3)
	sth      r27, 0x84(r3)
	stb      r27, 0x88(r3)
	stb      r27, 0x89(r3)
	stw      r4, 0x20(r3)
	stw      r0, 0x58(r3)
	stb      r27, 0x8a(r3)

lbl_80323A50:
	stw      r3, 0x38(r30)

lbl_80323A54:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80323A6C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_80323A6C:
	stw      r0, 0x3c(r30)
	mr       r6, r31
	addi     r4, r2, lbl_8051DD30@sda21
	lis      r5, 0x104
	lwz      r3, 0x3c(r30)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 0x138
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80323A9C
	bl       __ct__Q29P2DScreen3MgrFv
	mr       r0, r3

lbl_80323A9C:
	stw      r0, 0x40(r30)
	lis      r3, lbl_8048F290@ha
	addi     r4, r3, lbl_8048F290@l
	mr       r6, r31
	lwz      r3, 0x40(r30)
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r4, 0x775F3030@ha
	lwz      r3, 0x40(r30)
	addi     r6, r4, 0x775F3030@l
	li       r5, 0x505f
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x64(r30)
	lis      r5, 0x5F733030@ha
	lis      r4, 0x00505F77@ha
	lwz      r3, 0x40(r30)
	addi     r6, r5, 0x5F733030@l
	addi     r5, r4, 0x00505F77@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x68(r30)
	lis      r3, 0x625F3030@ha
	addi     r6, r3, 0x625F3030@l
	li       r5, 0x505f
	lwz      r3, 0x40(r30)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x6c(r30)
	lis      r5, 0x735F3030@ha
	lis      r4, 0x505F625F@ha
	lwz      r3, 0x40(r30)
	addi     r6, r5, 0x735F3030@l
	addi     r5, r4, 0x505F625F@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x70(r30)
	lis      r3, 0x6C6C5F77@ha
	addi     r6, r3, 0x6C6C5F77@l
	li       r5, 0x4e61
	lwz      r3, 0x40(r30)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x74(r30)
	lis      r3, 0x6C6C5F62@ha
	addi     r6, r3, 0x6C6C5F62@l
	li       r5, 0x4e61
	lwz      r3, 0x40(r30)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x78(r30)
	lis      r3, 0x30305F63@ha
	addi     r6, r3, 0x30305F63@l
	li       r5, 0x4e
	lwz      r3, 0x3c(r30)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x7c(r30)
	lis      r3, 0x30315F63@ha
	addi     r6, r3, 0x30315F63@l
	li       r5, 0x4e
	lwz      r3, 0x3c(r30)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x80(r30)
	lis      r5, 0x6B6F3030@ha
	lis      r4, 0x66757269@ha
	lwz      r3, 0x3c(r30)
	addi     r6, r5, 0x6B6F3030@l
	addi     r5, r4, 0x66757269@l
	bl       setCallBack_Furiko__Q22og6ScreenFPQ29P2DScreen3MgrUx
	stw      r31, 8(r1)
	lis      r3, 0x30305F31@ha
	lis      r5, 0x00507069@ha
	li       r8, 0xa
	lwz      r4, 0x38(r30)
	addi     r6, r3, 0x30305F31@l
	lwz      r3, 0x3c(r30)
	addi     r5, r5, 0x00507069@l
	addi     r7, r4, 0x24
	li       r9, 0
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw r31, 8(r1) lis      r3, 0x30315F31@ha lis      r5, 0x00507069@ha li r8,
0xa lwz      r4, 0x38(r30) addi     r6, r3, 0x30315F31@l lwz      r3,
0x3c(r30) addi     r5, r5, 0x00507069@l addi     r7, r4, 0x5c li       r9, 0
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
lwz r3, 0x3c(r30) bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr li
r0, 0 mr       r3, r30 stw      r0, 0x48(r30) lwz      r4, 0x48(r30) bl
setSelectPikmin__Q32og9newScreen10ObjUfoMenuFi li       r3, 0x78 bl
__nw__FUl or.      r0, r3, r3 beq      lbl_80323C2C bl
__ct__Q32og6Screen7MenuMgrFv mr       r0, r3

lbl_80323C2C:
	lis      r3, 0x735F3030@ha
	stw      r0, 0x4c(r30)
	addi     r0, r3, 0x735F3030@l
	lis      r3, 0x696C3030@ha
	stw      r0, 0xc(r1)
	li       r11, 0
	lis      r5, 0x69723030@ha
	lis      r4, 0x004E3030@ha
	stw      r11, 8(r1)
	addi     r6, r3, 0x696C3030@l
	lis      r3, 0x685F3030@ha
	addi     r0, r5, 0x69723030@l
	stw      r6, 0x14(r1)
	addi     r8, r4, 0x004E3030@l
	addi     r10, r3, 0x685F3030@l
	li       r5, 2
	stw      r11, 0x10(r1)
	li       r7, 0
	li       r9, 0
	stw      r0, 0x1c(r1)
	stw      r11, 0x18(r1)
	lwz      r3, 0x4c(r30)
	lwz      r4, 0x3c(r30)
	bl       init__Q32og6Screen7MenuMgrFP9J2DScreenUsUxUxUxUxUx
	lwz      r5, 0x4c(r30)
	li       r0, 1
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	li       r3, 0x1c
	stb      r0, 0x2e(r5)
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x24(r4)
	lwz      r4, 0x4c(r30)
	stfs     f0, 0x74(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80323CC8
	li       r4, 3
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_80323CC8:
	stw      r0, 0x58(r30)
	lis      r7, 0x68743030@ha
	lis      r6, 0x506C6967@ha
	lfs      f1, lbl_8051DD40@sda21(r2)
	lwz      r3, 0x58(r30)
	mr       r4, r31
	lwz      r5, 0x3c(r30)
	addi     r8, r7, 0x68743030@l
	addi     r7, r6, 0x506C6967@l
	addi     r9, r2, lbl_8051DD38@sda21
	bl
registAnimGroupPane__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenUxPcf
	lis      r7, 0x68743031@ha
	lis      r6, 0x506C6967@ha
	lwz      r3, 0x58(r30)
	mr       r4, r31
	lwz      r5, 0x3c(r30)
	addi     r8, r7, 0x68743031@l
	lfs      f1, lbl_8051DD40@sda21(r2)
	addi     r7, r6, 0x506C6967@l
	addi     r9, r2, lbl_8051DD38@sda21
	bl
registAnimGroupPane__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenUxPcf
	lwz      r3, 0x58(r30)
	mr       r4, r31
	lwz      r5, 0x3c(r30)
	addi     r6, r2, lbl_8051DD44@sda21
	lfs      f1, lbl_8051DD40@sda21(r2)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80323D50
	li       r4, 1
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_80323D50:
	stw      r0, 0x60(r30)
	lis      r3, lbl_8048F2A4@ha
	addi     r6, r3, lbl_8048F2A4@l
	lfs      f1, lbl_8051DD40@sda21(r2)
	lwz      r3, 0x60(r30)
	mr       r4, r31
	lwz      r5, 0x40(r30)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void ObjUfoMenu::commonUpdate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80323D84
 * Size:	0000F4
 */
void ObjUfoMenu::setSelectPikmin(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bne      lbl_80323E04
	lwz      r3, 0x68(r31)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r31)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_80323E64

lbl_80323E04:
	lwz      r3, 0x68(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r31)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r31)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80323E64:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80323E78
 * Size:	000524
 */
bool ObjUfoMenu::doUpdate(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	li       r30, 0
	stw      r29, 0x34(r1)
	mr       r29, r3
	bl       getGamePad__Q26Screen7ObjBaseCFv
	lwz      r4, 0x38(r29)
	mr       r31, r3
	lbz      r0, 0x88(r4)
	cmplwi   r0, 0
	beq      lbl_803240CC
	lbz      r0, 0x89(r4)
	cmplwi   r0, 0
	beq      lbl_803240CC
	lis      r3, 0x08000008@ha
	lwz      r4, 0x1c(r31)
	addi     r0, r3, 0x08000008@l
	and.     r0, r4, r0
	beq      lbl_80323FC8
	lwz      r3, 0x48(r29)
	cmpwi    r3, 0
	ble      lbl_803240CC
	addi     r0, r3, -1
	stw      r0, 0x48(r29)
	lwz      r0, 0x48(r29)
	lwz      r3, 0x4c(r29)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs
	lwz      r0, 0x48(r29)
	cmpwi    r0, 0
	bne      lbl_80323F64
	lwz      r3, 0x68(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_803240CC

lbl_80323F64:
	lwz      r3, 0x68(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_803240CC

lbl_80323FC8:
	lis      r3, 0x04000004@ha
	addi     r0, r3, 0x04000004@l
	and.     r0, r4, r0
	beq      lbl_803240CC
	lwz      r3, 0x48(r29)
	cmpwi    r3, 1
	bge      lbl_803240CC
	addi     r0, r3, 1
	stw      r0, 0x48(r29)
	lwz      r0, 0x48(r29)
	lwz      r3, 0x4c(r29)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs
	lwz      r0, 0x48(r29)
	cmpwi    r0, 0
	bne      lbl_8032406C
	lwz      r3, 0x68(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_803240CC

lbl_8032406C:
	lwz      r3, 0x68(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803240CC:
	lwz      r3, 0x1c(r31)
	rlwinm.  r0, r3, 0, 0x17, 0x17
	beq      lbl_80324250
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setDecide__Q22og5SoundFv
	lwz      r0, 0x48(r29)
	li       r30, 1
	cmpwi    r0, 0
	bne      lbl_8032419C
	lwz      r4, 0x38(r29)
	li       r0, 1
	mr       r3, r29
	stw      r0, 0x10(r4)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r5, __vt__Q26Screen12SceneArgBase@ha
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2717
	stw      r0, 0x18(r1)
	addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
	li       r4, 0
	li       r0, 1
	stw      r3, 0x24(r1)
	mr       r3, r29
	stw      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stb      r4, 0x20(r1)
	stb      r0, 0x21(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r31, r3
	stb      r0, 0x21(r1)
	addi     r4, r1, 0x18
	bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80324278
	mr       r3, r31
	li       r4, 0
	bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80324278
	lis      r3, lbl_8048F280@ha
	lis      r5, lbl_8048F2B8@ha
	addi     r3, r3, lbl_8048F280@l
	li       r4, 0x164
	addi     r5, r5, lbl_8048F2B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80324278

lbl_8032419C:
	cmpwi    r0, 1
	bne      lbl_80324278
	lwz      r4, 0x38(r29)
	li       r0, 2
	mr       r3, r29
	stw      r0, 0x10(r4)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r5, __vt__Q26Screen12SceneArgBase@ha
	lis      r4, __vt__Q26Screen11SetSceneArg@ha
	addi     r0, r5, __vt__Q26Screen12SceneArgBase@l
	li       r5, 0x2718
	stw      r0, 8(r1)
	addi     r6, r4, __vt__Q26Screen11SetSceneArg@l
	li       r4, 0
	li       r0, 1
	stw      r3, 0x14(r1)
	mr       r3, r29
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stb      r4, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r31, r3
	stb      r0, 0x11(r1)
	addi     r4, r1, 8
	bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80324278
	mr       r3, r31
	li       r4, 0
	bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80324278
	lis      r3, lbl_8048F280@ha
	lis      r5, lbl_8048F2B8@ha
	addi     r3, r3, lbl_8048F280@l
	li       r4, 0x174
	addi     r5, r5, lbl_8048F2B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80324278

lbl_80324250:
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_80324278
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setClose__Q22og5SoundFv
	lwz      r4, 0x38(r29)
	li       r0, 0
	mr       r3, r29
	stw      r0, 0x10(r4)
	bl       setBackupScene__Q32og9newScreen10ObjUfoMenuFv
	li       r30, 1

lbl_80324278:
	lwz      r3, 0x58(r29)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x60(r29)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x7c(r29)
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lwz      r12, 0(r3)
	lfs      f1, 0xc(r4)
	lwz      r12, 0x10(r12)
	lfs      f2, 0x10(r4)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lwz      r3, 0x7c(r29)
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x14(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r29)
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lwz      r12, 0(r3)
	lfs      f1, 0x18(r4)
	lwz      r12, 0x10(r12)
	lfs      f2, 0x1c(r4)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lwz      r3, 0x80(r29)
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x20(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stb      r0, 0x88(r29)
	lfs      f1, lbl_8051DD2C@sda21(r2)
	lfs      f3, 0x54(r29)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0x3c(r29)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x3c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r29)
	bl       update__Q32og6Screen7MenuMgrFv
	lwz      r3, 0x40(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x44(r1)
	mr       r3, r30
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032439C
 * Size:	000094
 */
void ObjUfoMenu::setBackupScene(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x50(r3)
	cmplwi   r0, 0
	bne      lbl_80324418
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	bl       setBackupScene__Q26Screen9SceneBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80324410
	mr       r3, r31
	li       r4, 0
	bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80324410
	lis      r3, lbl_8048F280@ha
	lis      r5, lbl_8048F2B8@ha
	addi     r3, r3, lbl_8048F280@l
	li       r4, 0x199
	addi     r5, r5, lbl_8048F2B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80324410:
	li       r0, 1
	stb      r0, 0x50(r30)

lbl_80324418:
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
 * Address:	80324430
 * Size:	0000B4
 */
void ObjUfoMenu::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r31, r30, 0x190
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0x88(r3)
	cmplwi   r0, 0
	beq      lbl_803244C8
	lwz      r3, 0x3c(r29)
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7c(r29)
	lwz      r4, 0x74(r29)
	addi     r3, r3, 0x80
	addi     r4, r4, 0x50
	bl       PSMTXCopy
	lwz      r3, 0x80(r29)
	lwz      r4, 0x78(r29)
	addi     r3, r3, 0x80
	addi     r4, r4, 0x50
	bl       PSMTXCopy
	lwz      r3, 0x40(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r29)
	mr       r4, r31
	bl       draw__Q32og6Screen7MenuMgrFP14J2DGrafContext

lbl_803244C8:
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
 * Address:	803244E4
 * Size:	000020
 */
bool ObjUfoMenu::doStart(::Screen::StartSceneArg const*)
{
	/*
	lfs      f1, lbl_8051DD2C@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_8051DD28@sda21(r2)
	stfs     f1, 0x84(r3)
	stfs     f0, 0x54(r3)
	stb      r0, 0x88(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324504
 * Size:	000008
 */
bool ObjUfoMenu::doEnd(::Screen::EndSceneArg const*) { return 0x1; }

/*
 * --INFO--
 * Address:	8032450C
 * Size:	000044
 */
void ObjUfoMenu::doUpdateFadeinFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x48(r3)
	lwz      r3, 0x4c(r3)
	clrlwi   r4, r0, 0x10
	bl       initSelNum__Q32og6Screen7MenuMgrFUs
	lwz      r3, 0x4c(r31)
	lfs      f1, lbl_8051DD4C@sda21(r2)
	bl       startCursor__Q32og6Screen7MenuMgrFf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80324550
 * Size:	00002C
 */
void ObjUfoMenu::doUpdateFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051DD2C@sda21(r2)
	stw      r0, 0x14(r1)
	stfs     f0, 0x84(r3)
	lwz      r3, 0x4c(r3)
	bl       killCursor__Q32og6Screen7MenuMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8032457C
 * Size:	000024
 */
void ObjUfoMenu::doUpdateFadeoutFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x4c(r3)
	bl       killCursor__Q32og6Screen7MenuMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803245A0
 * Size:	000188
 */
bool ObjUfoMenu::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x58(r3)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x60(r30)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x7c(r30)
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lwz      r12, 0(r3)
	lfs      f1, 0xc(r4)
	lwz      r12, 0x10(r12)
	lfs      f2, 0x10(r4)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lwz      r3, 0x7c(r30)
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x14(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r30)
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lwz      r12, 0(r3)
	lfs      f1, 0x18(r4)
	lwz      r12, 0x10(r12)
	lfs      f2, 0x1c(r4)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lwz      r3, 0x80(r30)
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x20(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stb      r0, 0x88(r30)
	lfs      f1, lbl_8051DD2C@sda21(r2)
	lfs      f3, 0x54(r30)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0x3c(r30)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x3c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r30)
	bl       update__Q32og6Screen7MenuMgrFv
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lfs      f1, 0x84(r30)
	addi     r3, r3, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x84(r30)
	lfs      f1, 0x84(r30)
	lfs      f2, 8(r3)
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_803246F4
	li       r31, 1

lbl_803246F4:
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f2, lbl_8051DD50@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051DD28@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x54(r30)
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
 * Address:	80324728
 * Size:	00017C
 */
bool ObjUfoMenu::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x58(r3)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x60(r30)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x7c(r30)
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lwz      r12, 0(r3)
	lfs      f1, 0xc(r4)
	lwz      r12, 0x10(r12)
	lfs      f2, 0x10(r4)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lwz      r3, 0x7c(r30)
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x14(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r30)
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lwz      r12, 0(r3)
	lfs      f1, 0x18(r4)
	lwz      r12, 0x10(r12)
	lfs      f2, 0x1c(r4)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lwz      r3, 0x80(r30)
	addi     r4, r4, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x20(r4)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stb      r0, 0x88(r30)
	lfs      f1, lbl_8051DD2C@sda21(r2)
	lfs      f3, 0x54(r30)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0x3c(r30)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x3c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r30)
	bl       update__Q32og6Screen7MenuMgrFv
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lfs      f1, 0x84(r30)
	addi     r3, r3, msVal__Q32og9newScreen10ObjUfoMenu@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x84(r30)
	lfs      f1, 0x84(r30)
	lfs      f2, 8(r3)
	fcmpo    cr0, f1, f2
	ble      lbl_80324878
	li       r31, 1

lbl_80324878:
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f0, lbl_8051DD54@sda21(r2)
	mr       r3, r31
	fmuls    f0, f0, f1
	stfs     f0, 0x54(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace newScreen
} // namespace og

/*
 * --INFO--
 * Address:	803248A4
 * Size:	000048
 */
void __sinit_ogObjUfo_cpp(void)
{
	/*
	lfs      f5, lbl_8051DD40@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjUfoMenu@ha
	lfs      f2, lbl_8051DD2C@sda21(r2)
	stfsu    f5, msVal__Q32og9newScreen10ObjUfoMenu@l(r3)
	lfs      f1, lbl_8051DD60@sda21(r2)
	lfs      f4, lbl_8051DD58@sda21(r2)
	lfs      f3, lbl_8051DD5C@sda21(r2)
	lfs      f0, lbl_8051DD64@sda21(r2)
	stfs     f4, 4(r3)
	stfs     f3, 8(r3)
	stfs     f2, 0xc(r3)
	stfs     f2, 0x10(r3)
	stfs     f1, 0x14(r3)
	stfs     f2, 0x18(r3)
	stfs     f2, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803248EC
 * Size:	000008
 */
//@24 @og::newScreen::ObjUfoMenu::~ObjUfoMenu(void)
//{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen10ObjUfoMenuFv
	*/
//}
