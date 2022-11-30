#include "types.h"
#include "og/newScreen/SpecialItem.h"
#include "P2DScreen.h"
#include "og/Screen/ogScreen.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "System.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EAD8
    lbl_8048EAD8:
        .4byte 0x6F674F62
        .4byte 0x6A537065
        .4byte 0x6369616C
        .4byte 0x4974656D
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x45525221
        .4byte 0x20696E20
        .4byte 0x4F626A54
        .4byte 0x65737420
        .4byte 0x43726561
        .4byte 0x74658EB8
        .4byte 0x94738149
        .4byte 0x0A000000
        .4byte 0x6F6B5F62
        .4byte 0x675F746F
        .4byte 0x6B757368
        .4byte 0x752E626C
        .4byte 0x6F000000
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x67657420
        .4byte 0x736F756E
        .4byte 0x64207363
        .4byte 0x656E6520
        .4byte 0x61740A69
        .4byte 0x6E76616C
        .4byte 0x69642074
        .4byte 0x696D6D69
        .4byte 0x6E670A00
        .4byte 0x73637265
        .4byte 0x656E4F62
        .4byte 0x6A2E6800

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen14ObjSpecialItem
    __vt__Q32og9newScreen14ObjSpecialItem:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen14ObjSpecialItemFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen14ObjSpecialItemFv"
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
        .4byte
   doStart__Q32og9newScreen14ObjSpecialItemFPCQ26Screen13StartSceneArg .4byte
   doEnd__Q32og9newScreen14ObjSpecialItemFPCQ26Screen11EndSceneArg .4byte
   doCreate__Q32og9newScreen14ObjSpecialItemFP10JKRArchive .4byte
   doUpdateFadein__Q32og9newScreen14ObjSpecialItemFv .4byte
   doUpdateFadeinFinish__Q32og9newScreen14ObjSpecialItemFv .4byte
   doUpdate__Q32og9newScreen14ObjSpecialItemFv .4byte
   doUpdateFinish__Q32og9newScreen14ObjSpecialItemFv .4byte
   doUpdateFadeout__Q32og9newScreen14ObjSpecialItemFv .4byte
   doUpdateFadeoutFinish__Q32og9newScreen14ObjSpecialItemFv .4byte
   doDraw__Q32og9newScreen14ObjSpecialItemFR8Graphics .4byte
   doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D980
    lbl_8051D980:
        .4byte 0x00000000
    .global lbl_8051D984
    lbl_8051D984:
        .4byte 0x437F0000
    .global lbl_8051D988
    lbl_8051D988:
        .float 0.3
    .global lbl_8051D98C
    lbl_8051D98C:
        .4byte 0x3E4CCCCD
    .global lbl_8051D990
    lbl_8051D990:
        .float 1.0
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80319CC4
 * Size:	000088
 */
ObjSpecialItem::ObjSpecialItem(char const* name)
{
	m_fadeTimer1   = 0.0f;
	m_fadeTimer2   = 0.0f;
	m_name         = name;
	m_disp         = nullptr;
	m_screen       = nullptr;
	m_paneSetP     = nullptr;
	m_drawBox.p1.x = 0.0f;
	m_drawBox.p1.y = 0.0f;
	m_drawBox.p2.x = 0.0f;
	m_drawBox.p2.y = 0.0f;
	m_doDrawBox    = true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r3, __vt__Q32og9newScreen14ObjSpecialItem@ha
	lfs      f0, lbl_8051D980@sda21(r2)
	addi     r3, r3, __vt__Q32og9newScreen14ObjSpecialItem@l
	li       r4, 0
	stw      r3, 0(r30)
	addi     r5, r3, 0x10
	li       r0, 1
	mr       r3, r30
	stw      r5, 0x18(r30)
	stfs     f0, 0x58(r30)
	stfs     f0, 0x5c(r30)
	stw      r31, 0x14(r30)
	stw      r4, 0x38(r30)
	stw      r4, 0x3c(r30)
	stw      r4, 0x40(r30)
	stfs     f0, 0x44(r30)
	stfs     f0, 0x48(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x50(r30)
	stb      r0, 0x54(r30)
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
 * Address:	80319D4C
 * Size:	0000AC
 */
ObjSpecialItem::~ObjSpecialItem(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80319DDC
	lis      r4, __vt__Q32og9newScreen14ObjSpecialItem@ha
	addi     r4, r4, __vt__Q32og9newScreen14ObjSpecialItem@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_80319DCC
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_80319DCC
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

lbl_80319DCC:
	extsh.   r0, r31
	ble      lbl_80319DDC
	mr       r3, r30
	bl       __dl__FPv

lbl_80319DDC:
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
 * Address:	80319DF8
 * Size:	000194
 */
void ObjSpecialItem::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSpecialItem* disp = static_cast<og::Screen::DispMemberSpecialItem*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_SPECIAL_ITEM)) {
		m_disp = disp;
	} else {
		if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
			m_disp = new og::Screen::DispMemberSpecialItem();
		} else {
			JUT_PANICLINE(81, "ERR! in ObjTest CreateŽ¸”sI\n");
		}
	}
	m_screen = new P2DScreen::Mgr_tuning;
	m_screen->set("ok_bg_tokushu.blo", 0x1040000, arc);
	og::Screen::setAlphaScreen(m_screen);

	J2DPane* pane = m_screen->search('item');
	if (pane)
		pane->m_isVisible = false;

	m_paneSetP  = m_screen->search('Notsetp');
	m_doDrawBox = true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8048EAD8@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8048EAD8@l
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4954454D@ha
	lis      r5, 0x0053505F@ha
	mr       r28, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4954454D@l
	addi     r5, r5, 0x0053505F@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80319E58
	stw      r28, 0x38(r29)
	b        lbl_80319ED4

lbl_80319E58:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r28
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80319EC0
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80319EB8
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q32og6Screen21DispMemberSpecialItem@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r4, r4, __vt__Q32og6Screen21DispMemberSpecialItem@l
	li       r0, 1
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r5, 8(r3)
	stb      r0, 0xc(r3)

lbl_80319EB8:
	stw      r3, 0x38(r29)
	b        lbl_80319ED4

lbl_80319EC0:
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0x51
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80319ED4:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80319EEC
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_80319EEC:
	stw      r0, 0x3c(r29)
	mr       r6, r30
	addi     r4, r31, 0x38
	lis      r5, 0x104
	lwz      r3, 0x3c(r29)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r3, 0x3c(r29)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x3c(r29)
	lis      r4, 0x6974656D@ha
	addi     r6, r4, 0x6974656D@l
	li       r5, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80319F3C
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_80319F3C:
	lwz      r3, 0x3c(r29)
	lis      r5, 0x73657470@ha
	lis      r4, 0x004E6F74@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x73657470@l
	addi     r5, r4, 0x004E6F74@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r29)
	li       r0, 1
	stb      r0, 0x54(r29)
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
 * Address:	80319F8C
 * Size:	000040
 */
bool ObjSpecialItem::doUpdate(void)
{
	if (m_disp) {
		m_screen->update();
	}
	return false;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_80319FB8
	lwz      r3, 0x3c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80319FB8:
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80319FCC
 * Size:	000104
 */
void ObjSpecialItem::doDraw(Graphics& gfx)
{
	m_screen->setAlpha((u8)(m_fadeTimer2 * 255.0f));
	m_screen->draw(gfx, gfx.m_perspGraph);

	J2DPane* pane  = m_paneSetP;
	f32 y2         = pane->_030.f.y;
	f32 x2         = pane->_030.f.x;
	f32 y1         = pane->_030.i.y;
	f32 x1         = pane->_030.i.x;
	m_drawBox.p1.x = x1;
	m_drawBox.p1.y = y1;
	m_drawBox.p2.x = x2;
	m_drawBox.p2.y = y2;

	if (m_doDrawBox && m_disp->m_delegate) {
		pane           = m_paneSetP;
		y2             = pane->_030.f.y;
		x2             = pane->_030.f.x;
		y1             = pane->_030.i.y;
		x1             = pane->_030.i.x;
		m_drawBox.p1.x = x1;
		m_drawBox.p1.y = y1;
		m_drawBox.p2.x = x1;
		m_drawBox.p2.y = y2;
		m_disp->m_delegate->invoke(m_drawBox);
		m_doDrawBox = 0;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_8051D984@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lfs      f0, 0x5c(r3)
	lwz      r3, 0x3c(r3)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r30)
	mr       r4, r31
	addi     r5, r31, 0x190
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40(r30)
	lfs      f3, 0x3c(r3)
	lfs      f2, 0x38(r3)
	lfs      f1, 0x34(r3)
	lfs      f0, 0x30(r3)
	stfs     f0, 0x44(r30)
	stfs     f1, 0x48(r30)
	stfs     f2, 0x4c(r30)
	stfs     f3, 0x50(r30)
	lbz      r0, 0x54(r30)
	cmplwi   r0, 0
	beq      lbl_8031A0B8
	lwz      r3, 0x38(r30)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8031A0B8
	lwz      r3, 0x40(r30)
	addi     r4, r30, 0x44
	lfs      f3, 0x3c(r3)
	lfs      f2, 0x38(r3)
	lfs      f1, 0x34(r3)
	lfs      f0, 0x30(r3)
	stfs     f0, 0x44(r30)
	stfs     f1, 0x48(r30)
	stfs     f2, 0x4c(r30)
	stfs     f3, 0x50(r30)
	lwz      r3, 0x38(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x54(r30)

lbl_8031A0B8:
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
 * Address:	8031A0D0
 * Size:	00010C
 */
bool ObjSpecialItem::doStart(::Screen::StartSceneArg const*)
{
	m_fadeTimer1 = 0.0f;
	m_fadeTimer2 = 0.0f;
	if (m_disp->m_doPlayBGM) {
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		P2ASSERTLINE(90, scene->m_child);
		scene->startMainSeq();
	}
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D980@sda21(r2)
	lis      r4, lbl_8048EAD8@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8048EAD8@l
	stw      r30, 8(r1)
	stfs     f0, 0x58(r3)
	stfs     f0, 0x5c(r3)
	lwz      r3, 0x38(r3)
	lbz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_8031A1C0
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8031A128
	addi     r3, r31, 0x4c
	addi     r5, r31, 0x58
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031A128:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8031A148
	addi     r3, r31, 0x4c
	addi     r5, r31, 0x58
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031A148:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8031A168
	addi     r3, r31, 0x64
	addi     r5, r31, 0x58
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031A168:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8031A18C
	addi     r3, r31, 0x64
	addi     r5, r31, 0x70
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031A18C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8031A1AC
	addi     r3, r31, 0x64
	addi     r5, r31, 0x58
	li       r4, 0x5a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031A1AC:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8031A1C0:
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031A1DC
 * Size:	000010
 */
bool ObjSpecialItem::doEnd(::Screen::EndSceneArg const*)
{
	m_fadeTimer1 = 0.0f;
	return true;
	/*
	lfs      f0, lbl_8051D980@sda21(r2)
	stfs     f0, 0x58(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031A1EC
 * Size:	000004
 */
void ObjSpecialItem::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	8031A1F0
 * Size:	00000C
 */
void ObjSpecialItem::doUpdateFinish(void)
{
	m_fadeTimer1 = 0.0f;
	/*
	lfs      f0, lbl_8051D980@sda21(r2)
	stfs     f0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031A1FC
 * Size:	000004
 */
void ObjSpecialItem::doUpdateFadeoutFinish(void) { }

/*
 * --INFO--
 * Address:	8031A200
 * Size:	000048
 */
bool ObjSpecialItem::doUpdateFadein(void)
{
	m_fadeTimer1 += sys->m_deltaTime;
	bool check = m_fadeTimer1 > 0.3f;
	if (check)
		m_fadeTimer1 = 0.3f;

	m_fadeTimer2 /= 0.3f;
	return check;
	/*
	lwz      r4, sys@sda21(r13)
	li       r0, 0
	lfs      f2, 0x58(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051D988@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x58(r3)
	lfs      f1, 0x58(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8031A230
	stfs     f0, 0x58(r3)
	li       r0, 1

lbl_8031A230:
	lfs      f1, 0x58(r3)
	lfs      f0, lbl_8051D988@sda21(r2)
	fdivs    f0, f1, f0
	stfs     f0, 0x5c(r3)
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031A248
 * Size:	000050
 */
bool ObjSpecialItem::doUpdateFadeout(void)
{
	m_fadeTimer1 += sys->m_deltaTime;
	bool check = m_fadeTimer1 > 0.2f;
	if (check)
		m_fadeTimer1 = 0.2f;

	m_fadeTimer2 = 1.0f - (m_fadeTimer1 / 0.2f);
	return check;
	/*
	lwz      r4, sys@sda21(r13)
	li       r0, 0
	lfs      f2, 0x58(r3)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_8051D98C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x58(r3)
	lfs      f1, 0x58(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8031A278
	stfs     f0, 0x58(r3)
	li       r0, 1

lbl_8031A278:
	lfs      f1, 0x58(r3)
	lfs      f0, lbl_8051D98C@sda21(r2)
	lfs      f2, lbl_8051D990@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x5c(r3)
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031A298
 * Size:	000008
 */
//@24 @og::newScreen::ObjSpecialItem::~ObjSpecialItem(void)
//{
/*
addi     r3, r3, -24
b        __dt__Q32og9newScreen14ObjSpecialItemFv
*/
//}
} // namespace newScreen
} // namespace og
