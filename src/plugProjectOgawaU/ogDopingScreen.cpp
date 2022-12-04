#include "types.h"
#include "og/Screen/DopingScreen.h"
#include "efx2d/TSimple.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "og/newScreen/ogUtil.h"
#include "efx2d/T2DSprayset.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25efx2d11T2DSprayset
    __vt__Q25efx2d11T2DSprayset:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d12T2DExtractUp
    __vt__Q25efx2d12T2DExtractUp:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple1FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q32og6Screen12DopingScreen
    __vt__Q32og6Screen12DopingScreen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen12DopingScreenFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q32og6Screen12DopingScreenFv
        .4byte drawSelf__7J2DPaneFff
        .4byte drawSelf__9J2DScreenFffPA3_A4_f
        .4byte search__9J2DScreenFUx
        .4byte searchUserInfo__9J2DScreenFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__9J2DScreenFPC7ResTIMG
        .4byte isUsed__9J2DScreenFPC7ResFONT
        .4byte clearAnmTransform__9J2DScreenFv
        .4byte rewriteAlpha__7J2DPaneFv
        .4byte setAnimation__9J2DScreenFP10J2DAnmBase
        .4byte setAnimation__9J2DScreenFP15J2DAnmTransform
        .4byte setAnimation__9J2DScreenFP11J2DAnmColor
        .4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
        .4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
        .4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
        .4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
        .4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D560
    lbl_8051D560:
        .4byte 0x00000000
    .global lbl_8051D564
    lbl_8051D564:
        .float 1.0
    .global lbl_8051D568
    lbl_8051D568:
        .float 0.1
    .global lbl_8051D56C
    lbl_8051D56C:
        .4byte 0x41A00000
    .global lbl_8051D570
    lbl_8051D570:
        .4byte 0x3E4CCCCD
    .global lbl_8051D574
    lbl_8051D574:
        .4byte 0x41F00000
    .global lbl_8051D578
    lbl_8051D578:
        .4byte 0x3F4CCCCD
        .4byte 0x00000000
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030360C
 * Size:	0000F4
 */
DopingScreen::DopingScreen(void)
{
	m_dopingCheck    = new DopingCheck;
	m_paneAll        = nullptr;
	m_paneSpray0     = nullptr;
	m_paneSpray1     = nullptr;
	m_paneJujiKey    = nullptr;
	m_offset.x       = 0.0f;
	m_offset.y       = 0.0f;
	m_rootPosition.x = 0.0f;
	m_rootPosition.y = 0.0f;
	m_dope0Enabled   = false;
	m_dope1Enabled   = false;
	m_gottenSpray0   = false;
	m_gottenSpray1   = false;
	m_gottenJujiKey  = false;
	m_scaleSpray0Get = 0.0f;
	m_scaleSpray1Get = 0.0f;
	m_scaleJujiKey   = 0.0f;
	m_scaleMgr1      = new ScaleMgr;
	m_scaleMgr2      = new ScaleMgr;
	m_scaleMgr3      = new ScaleMgr;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__Q29P2DScreen10Mgr_tuningFv
lis      r4, __vt__Q32og6Screen12DopingScreen@ha
li       r3, 0x44
addi     r0, r4, __vt__Q32og6Screen12DopingScreen@l
stw      r0, 0(r31)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80303648
bl       __ct__Q32og6Screen11DopingCheckFv
mr       r0, r3

lbl_80303648:
stw      r0, 0x148(r31)
li       r0, 0
lfs      f0, lbl_8051D560@sda21(r2)
li       r3, 0x1c
stw      r0, 0x14c(r31)
stw      r0, 0x150(r31)
stw      r0, 0x154(r31)
stw      r0, 0x158(r31)
stfs     f0, 0x16c(r31)
stfs     f0, 0x170(r31)
stfs     f0, 0x164(r31)
stfs     f0, 0x168(r31)
stb      r0, 0x174(r31)
stb      r0, 0x175(r31)
stb      r0, 0x176(r31)
stb      r0, 0x177(r31)
stb      r0, 0x178(r31)
stfs     f0, 0x17c(r31)
stfs     f0, 0x180(r31)
stfs     f0, 0x184(r31)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803036AC
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803036AC:
stw      r0, 0x188(r31)
li       r3, 0x1c
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803036C8
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803036C8:
stw      r0, 0x18c(r31)
li       r3, 0x1c
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803036E4
bl       __ct__Q32og6Screen8ScaleMgrFv
mr       r0, r3

lbl_803036E4:
stw      r0, 0x190(r31)
mr       r3, r31
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80303700
 * Size:	0002CC
 */
void DopingScreen::setCallBack(JKRArchive* arc)
{
	m_paneAll = og::Screen::TagSearch(this, 'Nall');

	J2DPane* temp1 = og::Screen::TagSearch(this, 'toyo_13');
	J2DPane* temp2 = og::Screen::TagSearch(this, 'toyo_12');
	m_dopingCheck->init(temp1, temp2, m_scaleMgr1, m_scaleMgr2);

	m_paneBottleR = og::Screen::TagSearch(this, 'jb_r');
	m_paneBottleY = og::Screen::TagSearch(this, 'jb_y');
	og::Screen::setAlphaScreen(this);

	CallBack_CounterRV* counter1 = setCallBack_CounterRV(this, 'dr_r', 'dr_l', 'dr_l', &m_dopingCheck->m_sprays1, 3, 2, 1, arc);
	CallBack_CounterRV* counter2 = setCallBack_CounterRV(this, 'dy_r', 'dy_l', 'dy_l', &m_dopingCheck->m_sprays2, 3, 2, 1, arc);
	counter1->setCenteringMode(CallBack_CounterRV::ECM_UNKNOWN_2);
	counter2->setCenteringMode(CallBack_CounterRV::ECM_UNKNOWN_2);

	temp1 = search('dr_c');
	if (temp1->getParentPane()) {
		temp1->getParentPane()->removeChild(temp1);
	}

	temp1 = search('dy_c');
	if (temp1->getParentPane()) {
		temp1->getParentPane()->removeChild(temp1);
	}

	m_paneSpray0  = search('Nspray0');
	m_paneSpray1  = search('Nspray1');
	m_paneJujiKey = search('Njujikey');
	m_paneSpray0->setBasePosition(POS_CENTER);
	m_paneSpray1->setBasePosition(POS_CENTER);
	m_paneJujiKey->setBasePosition(POS_CENTER);
	m_rootPosition.x = m_paneAll->_0D4.x;
	m_rootPosition.y = m_paneAll->_0D4.y;

	/*
stwu     r1, -0x30(r1)
mflr     r0
lis      r6, 0x4E616C6C@ha
li       r5, 0
stw      r0, 0x34(r1)
addi     r6, r6, 0x4E616C6C@l
stw      r31, 0x2c(r1)
mr       r31, r4
stw      r30, 0x28(r1)
mr       r30, r3
stw      r29, 0x24(r1)
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x14c(r30)
lis      r5, 0x6F5F3133@ha
lis      r4, 0x00746F79@ha
mr       r3, r30
addi     r6, r5, 0x6F5F3133@l
addi     r5, r4, 0x00746F79@l
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
mr       r0, r3
lis      r5, 0x6F5F3132@ha
lis      r4, 0x00746F79@ha
mr       r3, r30
mr       r29, r0
addi     r6, r5, 0x6F5F3132@l
addi     r5, r4, 0x00746F79@l
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
mr       r0, r3
lwz      r3, 0x148(r30)
lwz      r6, 0x188(r30)
mr       r5, r0
lwz      r7, 0x18c(r30)
mr       r4, r29
bl
init__Q32og6Screen11DopingCheckFP7J2DPaneP7J2DPanePQ32og6Screen8ScaleMgrPQ32og6Screen8ScaleMgr
lis      r4, 0x6A625F72@ha
mr       r3, r30
addi     r6, r4, 0x6A625F72@l
li       r5, 0
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x15c(r30)
lis      r4, 0x6A625F79@ha
mr       r3, r30
li       r5, 0
addi     r6, r4, 0x6A625F79@l
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x160(r30)
mr       r3, r30
bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
lwz      r3, 0x148(r30)
lis      r4, 0x64725F6C@ha
addi     r8, r4, 0x64725F6C@l
li       r5, 3
addi     r0, r3, 0x14
li       r9, 2
stw      r0, 8(r1)
li       r0, 1
mr       r3, r30
mr       r10, r8
stw      r5, 0xc(r1)
addi     r6, r4, 0x5f72
li       r5, 0
li       r7, 0
stw      r9, 0x10(r1)
li       r9, 0
stw      r0, 0x14(r1)
stw      r31, 0x18(r1)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
lwz      r5, 0x148(r30)
lis      r4, 0x64795F6C@ha
addi     r8, r4, 0x64795F6C@l
mr       r29, r3
addi     r0, r5, 0x18
li       r6, 3
stw      r0, 8(r1)
li       r5, 2
li       r0, 1
mr       r3, r30
stw      r6, 0xc(r1)
mr       r10, r8
addi     r6, r4, 0x5f72
li       r7, 0
stw      r5, 0x10(r1)
li       r5, 0
li       r9, 0
stw      r0, 0x14(r1)
stw      r31, 0x18(r1)
bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
mr       r0, r3
mr       r3, r29
mr       r29, r0
li       r4, 2
bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
mr       r3, r29
li       r4, 2
bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
mr       r3, r30
lis      r4, 0x64725F63@ha
lwz      r12, 0(r30)
addi     r6, r4, 0x64725F63@l
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r31, r3
bl       getParentPane__7J2DPaneFv
cmplwi   r3, 0
beq      lbl_803038BC
mr       r3, r31
bl       getParentPane__7J2DPaneFv
mr       r4, r31
bl       removeChild__7J2DPaneFP7J2DPane

lbl_803038BC:
mr       r3, r30
lis      r4, 0x64795F63@ha
lwz      r12, 0(r30)
addi     r6, r4, 0x64795F63@l
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r31, r3
bl       getParentPane__7J2DPaneFv
cmplwi   r3, 0
beq      lbl_803038FC
mr       r3, r31
bl       getParentPane__7J2DPaneFv
mr       r4, r31
bl       removeChild__7J2DPaneFP7J2DPane

lbl_803038FC:
mr       r3, r30
lis      r5, 0x72617930@ha
lwz      r12, 0(r30)
lis      r4, 0x004E7370@ha
addi     r6, r5, 0x72617930@l
lwz      r12, 0x3c(r12)
addi     r5, r4, 0x004E7370@l
mtctr    r12
bctrl
stw      r3, 0x150(r30)
mr       r3, r30
lis      r5, 0x72617931@ha
lis      r4, 0x004E7370@ha
lwz      r12, 0(r30)
addi     r6, r5, 0x72617931@l
addi     r5, r4, 0x004E7370@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x154(r30)
mr       r3, r30
lis      r5, 0x696B6579@ha
lis      r4, 0x4E6A756A@ha
lwz      r12, 0(r30)
addi     r6, r5, 0x696B6579@l
addi     r5, r4, 0x4E6A756A@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x158(r30)
li       r4, 4
lwz      r3, 0x150(r30)
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x154(r30)
li       r4, 4
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x158(r30)
li       r4, 4
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x14c(r30)
lfs      f0, 0xd4(r3)
stfs     f0, 0x164(r30)
lwz      r3, 0x14c(r30)
lfs      f0, 0xd8(r3)
stfs     f0, 0x168(r30)
lwz      r31, 0x2c(r1)
lwz      r30, 0x28(r1)
lwz      r29, 0x24(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	803039CC
 * Size:	000038
 */
void DopingScreen::setParam(og::Screen::DataNavi& data)
{
	DopingCheck* check     = m_dopingCheck;
	check->m_naviLife      = data.m_naviLifeRatio;
	check->_0C             = data._04;
	check->m_nextThrowPiki = data.m_nextThrowPiki;
	check->m_sprays1       = data.m_dope1Count;
	check->m_sprays2       = data.m_dope0Count;
	check->_1C             = data._14;

	/*
lwz      r3, 0x148(r3)
lfs      f0, 0(r4)
stfs     f0, 8(r3)
lwz      r0, 4(r4)
stw      r0, 0xc(r3)
lwz      r0, 8(r4)
stw      r0, 0x10(r3)
lwz      r0, 0xc(r4)
stw      r0, 0x14(r3)
lwz      r0, 0x10(r4)
stw      r0, 0x18(r3)
lbz      r0, 0x14(r4)
stb      r0, 0x1c(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303A04
 * Size:	000284
 */
void DopingScreen::update(void)
{
	P2DScreen::Mgr::update();
	m_paneJujiKey->m_isVisible = false;
	if (m_dope0Enabled) {
		m_paneSpray0->m_isVisible  = true;
		m_paneJujiKey->m_isVisible = true;
		m_paneBottleR->m_isVisible = true;
	} else {
		m_paneSpray0->m_isVisible  = false;
		m_paneBottleR->m_isVisible = false;
	}

	if (m_dope1Enabled) {
		m_paneSpray1->m_isVisible  = true;
		m_paneJujiKey->m_isVisible = true;
		m_paneBottleY->m_isVisible = true;
	} else {
		m_paneSpray1->m_isVisible  = false;
		m_paneBottleY->m_isVisible = false;
	}
	m_dopingCheck->update();

	f32 yoffs     = m_rootPosition.y + m_offset.y;
	J2DPane* pane = m_paneAll;
	pane->_0D4.x  = m_rootPosition.x + m_offset.x;
	pane->_0D4.y  = yoffs;
	pane->calcMtx();

	// when spray 0 is first goten
	if (m_gottenSpray0 && m_scaleSpray0Get < 1.0f) {
		m_scaleSpray0Get += 0.1f;
		if (m_scaleSpray0Get >= 1.0f) {
			m_scaleMgr1->up();
			m_dopingCheck->startGetEff_Up();
			ogSound->setGetSpray();
		}
	}

	// when spray 1 is first goten
	if (m_gottenSpray1 && m_scaleSpray1Get < 1.0f) {
		m_scaleSpray1Get += 0.1f;
		if (m_scaleSpray1Get >= 1.0f) {
			m_scaleMgr2->up();
			m_dopingCheck->startGetEff_Down();
			ogSound->setGetSpray();
		}
	}

	// when either spray is first gotten
	if (m_gottenJujiKey && m_scaleJujiKey < 1.0f) {
		m_scaleJujiKey += 0.1f;
		if (m_scaleJujiKey >= 1.0f) {
			m_scaleMgr3->up();
		}
	}

	f64 scale1 = m_scaleSpray0Get * m_scaleMgr1->calc();
	f64 scale2 = m_scaleSpray1Get * m_scaleMgr2->calc();
	f64 scale3 = m_scaleJujiKey * m_scaleMgr3->calc();

	m_paneSpray0->updateScale(scale1);
	m_paneSpray1->updateScale(scale2);
	m_paneJujiKey->updateScale(scale3);

	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stfd     f29, 0x10(r1)
psq_st   f29, 24(r1), 0, qr0
stw      r31, 0xc(r1)
mr       r31, r3
bl       update__Q29P2DScreen3MgrFv
lwz      r3, 0x158(r31)
li       r4, 0
stb      r4, 0xb0(r3)
lbz      r0, 0x174(r31)
cmplwi   r0, 0
beq      lbl_80303A6C
lwz      r3, 0x150(r31)
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x158(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x15c(r31)
stb      r0, 0xb0(r3)
b        lbl_80303A7C

lbl_80303A6C:
lwz      r3, 0x150(r31)
stb      r4, 0xb0(r3)
lwz      r3, 0x15c(r31)
stb      r4, 0xb0(r3)

lbl_80303A7C:
lbz      r0, 0x175(r31)
cmplwi   r0, 0
beq      lbl_80303AA8
lwz      r3, 0x154(r31)
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x158(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x160(r31)
stb      r0, 0xb0(r3)
b        lbl_80303ABC

lbl_80303AA8:
lwz      r3, 0x154(r31)
li       r0, 0
stb      r0, 0xb0(r3)
lwz      r3, 0x160(r31)
stb      r0, 0xb0(r3)

lbl_80303ABC:
lwz      r3, 0x148(r31)
bl       update__Q32og6Screen11DopingCheckFv
lfs      f1, 0x164(r31)
lfs      f0, 0x16c(r31)
lfs      f3, 0x168(r31)
lfs      f2, 0x170(r31)
fadds    f0, f1, f0
lwz      r3, 0x14c(r31)
fadds    f1, f3, f2
stfs     f0, 0xd4(r3)
stfs     f1, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lbz      r0, 0x176(r31)
cmplwi   r0, 0
beq      lbl_80303B48
lfs      f2, 0x17c(r31)
lfs      f1, lbl_8051D564@sda21(r2)
fcmpo    cr0, f2, f1
bge      lbl_80303B48
lfs      f0, lbl_8051D568@sda21(r2)
fadds    f0, f2, f0
stfs     f0, 0x17c(r31)
lfs      f0, 0x17c(r31)
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_80303B48
lwz      r3, 0x188(r31)
bl       up__Q32og6Screen8ScaleMgrFv
lwz      r3, 0x148(r31)
bl       startGetEff_Up__Q32og6Screen11DopingCheckFv
lwz      r3, ogSound__2og@sda21(r13)
bl       setGetSpray__Q22og5SoundFv

lbl_80303B48:
lbz      r0, 0x177(r31)
cmplwi   r0, 0
beq      lbl_80303B98
lfs      f2, 0x180(r31)
lfs      f1, lbl_8051D564@sda21(r2)
fcmpo    cr0, f2, f1
bge      lbl_80303B98
lfs      f0, lbl_8051D568@sda21(r2)
fadds    f0, f2, f0
stfs     f0, 0x180(r31)
lfs      f0, 0x180(r31)
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_80303B98
lwz      r3, 0x18c(r31)
bl       up__Q32og6Screen8ScaleMgrFv
lwz      r3, 0x148(r31)
bl       startGetEff_Down__Q32og6Screen11DopingCheckFv
lwz      r3, ogSound__2og@sda21(r13)
bl       setGetSpray__Q22og5SoundFv

lbl_80303B98:
lbz      r0, 0x178(r31)
cmplwi   r0, 0
beq      lbl_80303BD8
lfs      f2, 0x184(r31)
lfs      f1, lbl_8051D564@sda21(r2)
fcmpo    cr0, f2, f1
bge      lbl_80303BD8
lfs      f0, lbl_8051D568@sda21(r2)
fadds    f0, f2, f0
stfs     f0, 0x184(r31)
lfs      f0, 0x184(r31)
fcmpo    cr0, f0, f1
cror     2, 1, 2
bne      lbl_80303BD8
lwz      r3, 0x190(r31)
bl       up__Q32og6Screen8ScaleMgrFv

lbl_80303BD8:
lwz      r3, 0x188(r31)
bl       calc__Q32og6Screen8ScaleMgrFv
lfs      f0, 0x17c(r31)
lwz      r3, 0x18c(r31)
fmuls    f31, f0, f1
bl       calc__Q32og6Screen8ScaleMgrFv
lfs      f0, 0x180(r31)
lwz      r3, 0x190(r31)
fmuls    f30, f0, f1
bl       calc__Q32og6Screen8ScaleMgrFv
lfs      f0, 0x184(r31)
lwz      r3, 0x150(r31)
fmuls    f29, f0, f1
stfs     f31, 0xcc(r3)
stfs     f31, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x154(r31)
stfs     f30, 0xcc(r3)
stfs     f30, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x158(r31)
stfs     f29, 0xcc(r3)
stfs     f29, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
psq_l    f29, 24(r1), 0, qr0
lfd      f29, 0x10(r1)
lwz      r0, 0x44(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80303C88
 * Size:	00000C
 */
void DopingScreen::adjPos(f32 x, f32 y)
{
	m_offset.x = x;
	m_offset.y = y;
	/*
stfs     f1, 0x16c(r3)
stfs     f2, 0x170(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303C94
 * Size:	000044
 */
void DopingScreen::setDopingEnable(bool s0, bool s1)
{
	m_dope0Enabled = s0;
	m_dope1Enabled = s1;
	if (s0) {
		m_scaleSpray0Get = 1.0f;
	}
	if (s1) {
		m_scaleSpray1Get = 1.0f;
	}

	if (s0 || s1) {
		m_scaleJujiKey = 1.0f;
	}

	/*
stb      r4, 0x174(r3)
clrlwi.  r0, r4, 0x18
stb      r5, 0x175(r3)
beq      lbl_80303CAC
lfs      f0, lbl_8051D564@sda21(r2)
stfs     f0, 0x17c(r3)

lbl_80303CAC:
clrlwi.  r0, r5, 0x18
beq      lbl_80303CBC
lfs      f0, lbl_8051D564@sda21(r2)
stfs     f0, 0x180(r3)

lbl_80303CBC:
clrlwi.  r0, r4, 0x18
bne      lbl_80303CCC
clrlwi.  r0, r5, 0x18
beqlr

lbl_80303CCC:
lfs      f0, lbl_8051D564@sda21(r2)
stfs     f0, 0x184(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303CD8
 * Size:	000010
 */
void DopingScreen::openDopingUp(void)
{
	m_gottenSpray0 = true;
	m_dope0Enabled = true;
	/*
li       r0, 1
stb      r0, 0x176(r3)
stb      r0, 0x174(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303CE8
 * Size:	000010
 */
void DopingScreen::openDopingDown(void)
{
	m_gottenSpray1 = true;
	m_dope1Enabled = true;
	/*
li       r0, 1
stb      r0, 0x177(r3)
stb      r0, 0x175(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80303CF8
 * Size:	00000C
 */
void DopingScreen::openDopingKey(void)
{
	// Generated from stb r0, 0x178(r3)
	m_gottenJujiKey = 1;
}

/*
 * --INFO--
 * Address:	80303D04
 * Size:	000100
 */
DopingCheck::DopingCheck(void)
{
	m_naviLife      = 1.0f;
	_0C             = 1;
	m_nextThrowPiki = 2;
	m_sprays1       = 10;
	m_sprays2       = 10;
	_1C             = 1;
	m_pane1         = nullptr;
	m_pane2         = nullptr;
	_20             = &m_sprays1;
	_24             = &m_sprays2;
	_28             = *_20;
	_2C             = *_24;
	m_efx           = new efx2d::T2DExtractUp;
	_40             = true;
	m_scaleMgr1     = nullptr;
	m_scaleMgr2     = nullptr;
	_3C             = 20.0f;
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_8051D564@sda21(r2)
li       r8, 1
stw      r0, 0x14(r1)
li       r7, 2
li       r6, 0xa
li       r5, 0
stw      r31, 0xc(r1)
mr       r31, r3
addi     r4, r31, 0x14
stfs     f0, 8(r3)
addi     r0, r31, 0x18
stw      r8, 0xc(r3)
li       r3, 0x10
stw      r7, 0x10(r31)
stw      r6, 0x14(r31)
stw      r6, 0x18(r31)
stb      r8, 0x1c(r31)
stw      r5, 0(r31)
stw      r5, 4(r31)
stw      r4, 0x20(r31)
stw      r0, 0x24(r31)
lwz      r4, 0x20(r31)
lwz      r0, 0(r4)
stw      r0, 0x28(r31)
lwz      r4, 0x24(r31)
lwz      r0, 0(r4)
stw      r0, 0x2c(r31)
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_80303DCC
lis      r5, __vt__Q25efx2d7TBaseIF@ha
lis      r4, __vt__Q25efx2d5TBase@ha
addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
lis      r5, __vt__Q25efx2d8TSimple1@ha
stw      r0, 0(r3)
addi     r0, r4, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d12T2DExtractUp@ha
li       r7, 0
stw      r0, 0(r3)
addi     r6, r5, __vt__Q25efx2d8TSimple1@l
li       r5, 9
addi     r0, r4, __vt__Q25efx2d12T2DExtractUp@l
stb      r7, 4(r3)
stb      r7, 5(r3)
stw      r6, 0(r3)
sth      r5, 8(r3)
stw      r7, 0xc(r3)
stw      r0, 0(r3)

lbl_80303DCC:
stw      r3, 0x30(r31)
li       r3, 1
li       r0, 0
lfs      f0, lbl_8051D56C@sda21(r2)
stb      r3, 0x40(r31)
mr       r3, r31
stw      r0, 0x34(r31)
stw      r0, 0x38(r31)
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
 * Address:	80303E04
 * Size:	000044
 */
void DopingCheck::init(J2DPane* pane1, J2DPane* pane2, ScaleMgr* mgr1, ScaleMgr* mgr2)
{
	m_pane1     = pane1;
	m_pane2     = pane2;
	m_scaleMgr1 = mgr1;
	m_scaleMgr2 = mgr2;
	_20         = &m_sprays1;
	_24         = &m_sprays2;
	_28         = *_20;
	_2C         = *_24;
	_40         = true;
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  addi      r8, r3, 0x14
	  addi      r4, r3, 0x18
	  li        r0, 0x1
	  stw       r5, 0x4(r3)
	  stw       r6, 0x34(r3)
	  stw       r7, 0x38(r3)
	  stw       r8, 0x20(r3)
	  stw       r4, 0x24(r3)
	  lwz       r4, 0x20(r3)
	  lwz       r4, 0x0(r4)
	  stw       r4, 0x28(r3)
	  lwz       r4, 0x24(r3)
	  lwz       r4, 0x0(r4)
	  stw       r4, 0x2C(r3)
	  stb       r0, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80303E48
 * Size:	000100
 */
void DopingCheck::update(void)
{
	int count1 = *_20;
	int count2 = *_24;
	if (_40) {
		_40 = false;
		_28 = count1;
		_2C = count2;
	} else {
		if (og::newScreen::checkMovieActive()) {
			_28 = count1;
			_2C = count2;
		} else {
			if (count1 != _28) {
				if (count1 > _28) {
					effStart(m_pane1);
					if (m_scaleMgr1) {
						m_scaleMgr1->up(0.2, 30.0, 0.8, 0.0);
					}
				}
				_28 = count1;
			}
			if (count2 != _2C) {
				if (count2 > _2C) {
					effStart(m_pane2);
					if (m_scaleMgr2) {
						m_scaleMgr2->up(0.2, 30.0, 0.8, 0.0);
					}
				}
				_2C = count2;
			}
		}
	}
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
lbz      r0, 0x40(r3)
lwz      r4, 0x20(r3)
lwz      r3, 0x24(r3)
cmplwi   r0, 0
lwz      r31, 0(r4)
lwz      r30, 0(r3)
beq      lbl_80303E94
li       r0, 0
stb      r0, 0x40(r29)
stw      r31, 0x28(r29)
stw      r30, 0x2c(r29)
b        lbl_80303F2C

lbl_80303E94:
bl       checkMovieActive__Q22og9newScreenFv
clrlwi.  r0, r3, 0x18
beq      lbl_80303EAC
stw      r31, 0x28(r29)
stw      r30, 0x2c(r29)
b        lbl_80303F2C

lbl_80303EAC:
lwz      r0, 0x28(r29)
cmplw    r31, r0
beq      lbl_80303EEC
ble      lbl_80303EE8
lwz      r4, 0(r29)
mr       r3, r29
bl       effStart__Q32og6Screen11DopingCheckFP7J2DPane
lwz      r3, 0x34(r29)
cmplwi   r3, 0
beq      lbl_80303EE8
lfs      f1, lbl_8051D570@sda21(r2)
lfs      f2, lbl_8051D574@sda21(r2)
lfs      f3, lbl_8051D578@sda21(r2)
lfs      f4, lbl_8051D560@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_80303EE8:
stw      r31, 0x28(r29)

lbl_80303EEC:
lwz      r0, 0x2c(r29)
cmplw    r30, r0
beq      lbl_80303F2C
ble      lbl_80303F28
lwz      r4, 4(r29)
mr       r3, r29
bl       effStart__Q32og6Screen11DopingCheckFP7J2DPane
lwz      r3, 0x38(r29)
cmplwi   r3, 0
beq      lbl_80303F28
lfs      f1, lbl_8051D570@sda21(r2)
lfs      f2, lbl_8051D574@sda21(r2)
lfs      f3, lbl_8051D578@sda21(r2)
lfs      f4, lbl_8051D560@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_80303F28:
stw      r30, 0x2c(r29)

lbl_80303F2C:
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
 * Address:	80303F48
 * Size:	000080
 */
void DopingCheck::effStart(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);

	efx2d::Arg arg(pos.x, pos.y);

	m_efx->create(&arg);
	ogSound->setSprayAdd();
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
mr       r3, r4
addi     r4, r1, 0x10
bl       "calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<f>"
lwz      r4, 0x10(r1)
lis      r3, __vt__Q25efx2d3Arg@ha
lwz      r5, 0x14(r1)
addi     r0, r3, __vt__Q25efx2d3Arg@l
stw      r4, 8(r1)
addi     r4, r1, 0x18
stw      r5, 0xc(r1)
lfs      f1, 8(r1)
lfs      f0, 0xc(r1)
stw      r0, 0x20(r1)
stfs     f1, 0x18(r1)
stfs     f0, 0x1c(r1)
lwz      r3, 0x30(r31)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lwz      r3, ogSound__2og@sda21(r13)
bl       setSprayAdd__Q22og5SoundFv
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void DopingCheck::startGetEff(J2DPane* pane)
{
	Vector2f pos;
	og::Screen::calcGlbCenter(pane, &pos);

	efx2d::Arg arg(pos.x + _3C, pos.y);
	efx2d::T2DSprayset efx;
	efx.create(&arg);
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80303FC8
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Up(void)
{
	startGetEff(m_pane1);
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
addi     r4, r1, 8
stw      r31, 0x3c(r1)
mr       r31, r3
lwz      r3, 0(r3)
bl       "calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<f>"
lfs      f1, 8(r1)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
lfs      f0, 0x3c(r31)
li       r8, 0
addi     r6, r3, __vt__Q25efx2d7TBaseIF@l
lwz      r0, 0xc(r1)
fadds    f0, f1, f0
lis      r5, __vt__Q25efx2d5TBase@ha
stw      r0, 0x14(r1)
lis      r4, __vt__Q25efx2d8TSimple2@ha
lis      r7, __vt__Q25efx2d3Arg@ha
lis      r3, __vt__Q25efx2d11T2DSprayset@ha
stfs     f0, 8(r1)
addi     r9, r7, __vt__Q25efx2d3Arg@l
addi     r0, r5, __vt__Q25efx2d5TBase@l
lfs      f0, 0x14(r1)
stw      r6, 0x24(r1)
li       r6, 0x22
lwz      r10, 8(r1)
addi     r7, r4, __vt__Q25efx2d8TSimple2@l
stw      r0, 0x24(r1)
li       r5, 0x23
addi     r0, r3, __vt__Q25efx2d11T2DSprayset@l
addi     r3, r1, 0x24
stw      r10, 0x10(r1)
addi     r4, r1, 0x18
stw      r7, 0x24(r1)
lfs      f1, 0x10(r1)
stw      r9, 0x20(r1)
stfs     f1, 0x18(r1)
stfs     f0, 0x1c(r1)
stb      r8, 0x28(r1)
stb      r8, 0x29(r1)
sth      r6, 0x2c(r1)
sth      r5, 0x2e(r1)
stw      r8, 0x30(r1)
stw      r8, 0x34(r1)
stw      r0, 0x24(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	80304098
 * Size:	0000D0
 */
void DopingCheck::startGetEff_Down(void)
{
	startGetEff(m_pane2);

	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
addi     r4, r1, 8
stw      r31, 0x3c(r1)
mr       r31, r3
lwz      r3, 4(r3)
bl       "calcGlbCenter__Q22og6ScreenFP7J2DPaneP10Vector2<f>"
lfs      f1, 8(r1)
lis      r3, __vt__Q25efx2d7TBaseIF@ha
lfs      f0, 0x3c(r31)
li       r8, 0
addi     r6, r3, __vt__Q25efx2d7TBaseIF@l
lwz      r0, 0xc(r1)
fadds    f0, f1, f0
lis      r5, __vt__Q25efx2d5TBase@ha
stw      r0, 0x14(r1)
lis      r4, __vt__Q25efx2d8TSimple2@ha
lis      r7, __vt__Q25efx2d3Arg@ha
lis      r3, __vt__Q25efx2d11T2DSprayset@ha
stfs     f0, 8(r1)
addi     r9, r7, __vt__Q25efx2d3Arg@l
addi     r0, r5, __vt__Q25efx2d5TBase@l
lfs      f0, 0x14(r1)
stw      r6, 0x24(r1)
li       r6, 0x22
lwz      r10, 8(r1)
addi     r7, r4, __vt__Q25efx2d8TSimple2@l
stw      r0, 0x24(r1)
li       r5, 0x23
addi     r0, r3, __vt__Q25efx2d11T2DSprayset@l
addi     r3, r1, 0x24
stw      r10, 0x10(r1)
addi     r4, r1, 0x18
stw      r7, 0x24(r1)
lfs      f1, 0x10(r1)
stw      r9, 0x20(r1)
stfs     f1, 0x18(r1)
stfs     f0, 0x1c(r1)
stb      r8, 0x28(r1)
stb      r8, 0x29(r1)
sth      r6, 0x2c(r1)
sth      r5, 0x2e(r1)
stw      r8, 0x30(r1)
stw      r8, 0x34(r1)
stw      r0, 0x24(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	80304168
 * Size:	000004
 */
void efx2d::TSimple2::kill(void) { }

/*
 * --INFO--
 * Address:	8030416C
 * Size:	000004
 */
void efx2d::TSimple2::fade(void) { }

/*
 * --INFO--
 * Address:	80304170
 * Size:	000004
 */
void efx2d::TSimple1::kill(void) { }

/*
 * --INFO--
 * Address:	80304174
 * Size:	000004
 */
void efx2d::TSimple1::fade(void) { }

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80304178
 * Size:	0000A4
 */
DopingScreen::~DopingScreen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80304200
lis      r3, __vt__Q32og6Screen12DopingScreen@ha
addi     r0, r3, __vt__Q32og6Screen12DopingScreen@l
stw      r0, 0(r30)
beq      lbl_803041F0
lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
stw      r0, 0(r30)
beq      lbl_803041F0
lis      r3, __vt__Q29P2DScreen3Mgr@ha
addic.   r0, r30, 0x118
addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
stw      r0, 0(r30)
beq      lbl_803041E4
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x118
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x118(r30)
bl       __dt__5CNodeFv

lbl_803041E4:
mr       r3, r30
li       r4, 0
bl       __dt__9J2DScreenFv

lbl_803041F0:
extsh.   r0, r31
ble      lbl_80304200
mr       r3, r30
bl       __dl__FPv

lbl_80304200:
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
