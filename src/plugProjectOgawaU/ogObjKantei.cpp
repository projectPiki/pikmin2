#include "types.h"
#include "og\newScreen\KanteiDemo.h"
#include "P2DScreen.h"
#include "og/Screen/ogScreen.h"
#include "Morimura/mrUtil.h"
#include "og/Screen/StickAnimMgr.h"
#include "efx2d/Arg.h"
#include "og/Sound.h"
#include "System.h"
#include "PSGame/SeMgr.h"
#include "Game/GameConfig.h"
#include "P2JME/P2JME.h"
#include "TParticle2dMgr.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogObjKantei_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E990
    lbl_8048E990:
        .asciz "ogObjKantei.cpp"
        .4byte 0x00303130
        .4byte 0x315F3031
        .4byte 0x00303131
        .4byte 0x305F3031
        .4byte 0x00303230
        .4byte 0x305F3031
        .4byte 0x45525221
        .4byte 0x20696E20
        .4byte 0x4F626A4B
        .4byte 0x616E7465
        .4byte 0x69204372
        .4byte 0x65617465
        .4byte 0x8EB89473
        .4byte 0x81490A00
        .4byte 0x6974656D
        .4byte 0x5F6E616D
        .4byte 0x652E626C
        .4byte 0x6F000000
        .4byte 0x6F74616B
        .4byte 0x6172615F
        .4byte 0x6B616E74
        .4byte 0x65695F62
        .4byte 0x7574746F
        .4byte 0x6E2E626C
        .4byte 0x6F000000
        .4byte 0x6F6B5F6D
        .4byte 0x65737361
        .4byte 0x67655F77
        .4byte 0x696E646F
        .4byte 0x772E626C
        .4byte 0x6F000000
        .4byte 0x6F6B5F6D
        .4byte 0x65737361
        .4byte 0x67655F77
        .4byte 0x696E646F
        .4byte 0x77322E62
        .4byte 0x6C6F0000
        .4byte 0x45525221
        .4byte 0x20554E4B
        .4byte 0x4E4F574E
        .4byte 0x204B414E
        .4byte 0x5445495F
        .4byte 0x54595045
        .4byte 0x21210000
        .4byte 0x6F6B5F62
        .4byte 0x675F6E6F
        .4byte 0x726D616C
        .4byte 0x2E626C6F
        .4byte 0x00000000
    .global lbl_8048EA64
    lbl_8048EA64:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
    .global lbl_8048EA70
    lbl_8048EA70:
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
    .global lbl_804D8BE8
    lbl_804D8BE8:
        .4byte lbl_8031924C
        .4byte lbl_80318FC8
        .4byte lbl_80318FDC
        .4byte lbl_80319070
        .4byte lbl_80319090
        .4byte lbl_8031924C
        .4byte lbl_803190F4
        .4byte lbl_80319128
        .4byte lbl_80319218
    .global __vt__Q25efx2d12T2DOtakantei
    __vt__Q25efx2d12T2DOtakantei:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
        .4byte kill__Q25efx2d9TForeverNFv
        .4byte fade__Q25efx2d9TForeverNFv
        .4byte setGroup__Q25efx2d9TForeverNFUc
    .global __vt__Q25efx2d9TForever5
    __vt__Q25efx2d9TForever5:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TForeverNFPQ25efx2d3Arg
        .4byte kill__Q25efx2d9TForeverNFv
        .4byte fade__Q25efx2d9TForeverNFv
        .4byte setGroup__Q25efx2d9TForeverNFUc
    .global __vt__Q32og9newScreen9ObjKantei
    __vt__Q32og9newScreen9ObjKantei:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen9ObjKanteiFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen9ObjKanteiFv"
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
        .4byte doStart__Q32og9newScreen9ObjKanteiFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen9ObjKanteiFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen9ObjKanteiFP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen9ObjKanteiFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen9ObjKanteiFv
        .4byte doUpdate__Q32og9newScreen9ObjKanteiFv
        .4byte doUpdateFinish__Q32og9newScreen9ObjKanteiFv
        .4byte doUpdateFadeout__Q32og9newScreen9ObjKanteiFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen9ObjKanteiFv
        .4byte doDraw__Q32og9newScreen9ObjKanteiFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32og9newScreen9ObjKantei
    msVal__Q32og9newScreen9ObjKantei:
        .skip 0x40

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D938
    lbl_8051D938:
        .4byte 0x00000000
    .global lbl_8051D93C
    lbl_8051D93C:
        .float 0.1
    .global lbl_8051D940
    lbl_8051D940:
        .4byte 0x43980000
    .global lbl_8051D944
    lbl_8051D944:
        .4byte 0x43420000
    .global lbl_8051D948
    lbl_8051D948:
        .float 1.0
    .global lbl_8051D94C
    lbl_8051D94C:
        .4byte 0x437F0000
    .global lbl_8051D950
    lbl_8051D950:
        .float 0.3
    .global lbl_8051D954
    lbl_8051D954:
        .4byte 0x3E4CCCCD
    .global lbl_8051D958
    lbl_8051D958:
        .4byte 0x3F2AAAAB
    .global lbl_8051D95C
    lbl_8051D95C:
        .4byte 0x40333333
    .global lbl_8051D960
    lbl_8051D960:
        .4byte 0x41D80000
    .global lbl_8051D964
    lbl_8051D964:
        .float 0.5
    .global lbl_8051D968
    lbl_8051D968:
        .4byte 0x41200000
    .global lbl_8051D96C
    lbl_8051D96C:
        .4byte 0xC2200000
    .global lbl_8051D970
    lbl_8051D970:
        .4byte 0x3F4CCCCD
    .global lbl_8051D974
    lbl_8051D974:
        .4byte 0x41F00000
    .global lbl_8051D978
    lbl_8051D978:
        .float 0.7
    .global lbl_8051D97C
    lbl_8051D97C:
        .4byte 0x40400000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80318244
 * Size:	000120
 */
ObjKantei::ObjKantei(char const* name)
{
	m_fadeLevel  = 0.0f;
	m_fadeLevel2 = 0.0f;
	m_name       = name;
	m_disp       = nullptr;
	m_state      = Kantei_Begin;

	m_screenOkWindow          = nullptr;
	m_screenBG                = nullptr;
	m_screenName              = nullptr;
	m_screenButton            = nullptr;
	m_tControl                = nullptr;
	m_paneSetP                = nullptr;
	m_drawBox.p1.x            = 0.0f;
	m_drawBox.p1.y            = 0.0f;
	m_drawBox.p2.x            = 0.0f;
	m_drawBox.p2.y            = 0.0f;
	m_doDrawBox               = true;
	m_shipMessageBoxID        = 0;
	m_inTextBox               = false;
	m_paneOk1                 = nullptr;
	m_startTimer              = 0.0f;
	m_pokoCounterCurr         = nullptr;
	m_pokoCounterTotal        = nullptr;
	m_currItemValue           = 0;
	m_totalPokos              = 0;
	m_totalPokosCave          = 0;
	m_stickAnim               = nullptr;
	_B0                       = 0;
	m_efx                     = nullptr;
	m_paneName                = nullptr;
	m_scaleMgr                = nullptr;
	m_nameScale               = 0.0f;
	m_doScaleName             = false;
	m_nameTimer               = msVal.m_nameTimerDefault;
	m_treasureNameMesgID      = 0;
	m_isPelletNameNotAppeared = true;
	m_nameWaitTimer           = 0.0f;
	m_nameState               = KanteiName_StartDelay;
	m_idleStateTimer          = msVal.m_idleStateTimerDefault;
	m_doShipSpeech            = false;
	m_commonTimer             = 0.1f;
	m_shipSpeechTimer         = 0.0f;
	m_playExitSE              = false;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r4, __vt__Q32og9newScreen9ObjKantei@ha
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	addi     r4, r4, __vt__Q32og9newScreen9ObjKantei@l
	lfs      f2, lbl_8051D938@sda21(r2)
	stw      r4, 0(r30)
	addi     r4, r4, 0x10
	li       r5, 0
	li       r0, 1
	stw      r4, 0x18(r30)
	addi     r4, r3, msVal__Q32og9newScreen9ObjKantei@l
	lfs      f0, lbl_8051D93C@sda21(r2)
	mr       r3, r30
	stfs     f2, 0x7c(r30)
	stfs     f2, 0x80(r30)
	stw      r31, 0x14(r30)
	stw      r5, 0x38(r30)
	stw      r0, 0x4c(r30)
	stw      r5, 0x3c(r30)
	stw      r5, 0x40(r30)
	stw      r5, 0x44(r30)
	stw      r5, 0x48(r30)
	stw      r5, 0x50(r30)
	stw      r5, 0x54(r30)
	stfs     f2, 0x58(r30)
	stfs     f2, 0x5c(r30)
	stfs     f2, 0x60(r30)
	stfs     f2, 0x64(r30)
	stb      r0, 0x68(r30)
	stw      r5, 0x74(r30)
	stw      r5, 0x70(r30)
	stb      r5, 0x78(r30)
	stw      r5, 0x84(r30)
	stfs     f2, 0x8c(r30)
	stw      r5, 0x90(r30)
	stw      r5, 0x94(r30)
	stw      r5, 0x98(r30)
	stw      r5, 0x9c(r30)
	stw      r5, 0xa0(r30)
	stw      r5, 0xac(r30)
	stw      r5, 0xb0(r30)
	stw      r5, 0xb4(r30)
	stw      r5, 0xb8(r30)
	stw      r5, 0xbc(r30)
	stfs     f2, 0xc0(r30)
	stb      r5, 0xc8(r30)
	lfs      f1, 0x24(r4)
	stfs     f1, 0xc4(r30)
	stw      r5, 0xd4(r30)
	stw      r5, 0xd0(r30)
	stb      r0, 0xd8(r30)
	stfs     f2, 0xdc(r30)
	stw      r5, 0xcc(r30)
	lfs      f1, 0x3c(r4)
	stfs     f1, 0xe0(r30)
	stb      r5, 0xe4(r30)
	stfs     f0, 0xe8(r30)
	stw      r5, 0xec(r30)
	stb      r5, 0xf0(r30)
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
 * Address:	80318364
 * Size:	0000AC
 */
ObjKantei::~ObjKantei(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803183F4
	lis      r4, __vt__Q32og9newScreen9ObjKantei@ha
	addi     r4, r4, __vt__Q32og9newScreen9ObjKantei@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_803183E4
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_803183E4
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

lbl_803183E4:
	extsh.   r0, r31
	ble      lbl_803183F4
	mr       r3, r30
	bl       __dl__FPv

lbl_803183F4:
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
 * Address:	........
 * Size:	000050
 */
void ObjKantei::startItemName(unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80318410
 * Size:	0007CC
 */
void ObjKantei::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberKantei* disp = static_cast<og::Screen::DispMemberKantei*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_KANTEI)) {
		m_disp = disp;
	} else {
		if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
			m_disp = new og::Screen::DispMemberKantei();
		} else {
			JUT_PANICLINE(258, "ERR! in ObjKantei CreateŽ¸”sI\n");
		}
	}

	m_currItemValue          = m_disp->m_pelletValue;
	m_totalPokos             = m_disp->m_totalPokos;
	m_totalPokosCave         = m_disp->m_totalPokosCave;
	m_totalPokosOld          = m_totalPokos - m_disp->m_pelletValue;
	m_totalPokosCaveOld      = m_totalPokosCave - m_disp->m_pelletValue;
	m_disp->m_totalPokos     = m_totalPokos;
	m_disp->m_totalPokosCave = m_totalPokosCave;
	u8 type                  = m_disp->m_kanteiType;

	m_screenName = new P2DScreen::Mgr_tuning;
	m_screenName->set("item_name.blo", 0x1040000, arc);
	m_screenButton = new P2DScreen::Mgr_tuning;
	m_screenButton->set("otakara_kantei_button.blo", 0x1040000, arc);

	switch (type) {
	case KanteiType_PreDebt:
		m_screenOkWindow = new P2DScreen::Mgr_tuning;
		m_screenOkWindow->set("ok_message_window.blo", 0x1040000, arc);
		m_pokoCounterTotal = og::Screen::setCallBack_CounterRV(m_screenOkWindow, 'PSsha1', &m_disp->m_totalPokos, 9, 0, 1, arc);
		break;
	case KanteiType_PostDebt:
		m_screenOkWindow = new P2DScreen::Mgr_tuning;
		m_screenOkWindow->set("ok_message_window2.blo", 0x1040000, arc);
		m_pokoCounterTotal = og::Screen::setCallBack_CounterRV(m_screenOkWindow, 'PSsha1', &m_disp->m_totalPokos, 9, 0, 1, arc);
		break;
	default:
		m_screenOkWindow = nullptr;
		JUT_PANICLINE(305, "ERR! UNKNOWN KANTEI_TYPE!!");
	}

	if (m_disp->m_inCave) {
		J2DPane* pane     = m_screenOkWindow->search('Tzukan');
		pane->m_messageID = '8551_00';
	} else {
		J2DPane* pane     = m_screenOkWindow->search('Tzukan');
		pane->m_messageID = '8550_00';
	}

	int offs                     = m_disp->m_pelletOffset;
	u64 idtags[3]                = { '101_01', '110_01', '200_01' };
	Morimura::TOffsetMsgSet* msg = new Morimura::TOffsetMsgSet(idtags, '100_01', 3);
	m_treasureNameMesgID         = msg->getMsgID(offs);

	m_paneName = m_screenName->search('ItemName');
	m_paneName->add(msVal.m_namePaneAdd.x, msVal.m_namePaneAdd.y);
	m_paneName->setBasePosition(POS_CENTER);
	m_paneName->m_messageID = '8557_00';
	m_nameScale             = 0.0f;
	m_paneName->m_scale.x   = m_nameScale;
	m_paneName->m_scale.y   = m_nameScale;
	m_paneName->calcMtx();
	m_scaleMgr        = new og::Screen::ScaleMgr;
	m_pokoCounterCurr = og::Screen::setCallBack_CounterSlot(m_screenOkWindow, 'PSota1', &m_disp->m_pelletValue, 4, true, true, arc);
	m_pokoCounterCurr->hide();
	m_pokoCounterCurr->setPuyoParam(msVal.m_pokoPuyo1, msVal.m_pokoPuyo2, msVal.m_pokoPuyo3);
	m_pokoCounterCurr->m_scaleUpSoundID = PSSE_SY_COIN_COUNT;
	m_screenBG                          = new P2DScreen::Mgr_tuning;
	m_screenBG->set("ok_bg_normal.blo", 0x1040000, arc);
	og::Screen::setAlphaScreen(m_screenOkWindow);
	og::Screen::setAlphaScreen(m_screenBG);
	og::Screen::setAlphaScreen(m_screenName);
	og::Screen::setAlphaScreen(m_screenButton);
	m_paneOk1              = m_screenOkWindow->search('NMsha');
	m_paneOk2              = m_screenOkWindow->search('NMzukan');
	m_paneOk2->m_isVisible = false;
	J2DPane* pane          = m_screenBG->search('item');
	if (pane)
		pane->m_isVisible = false;
	m_paneSetP = m_screenBG->search('Notsetp');
	og::Screen::setCallBackMessage(m_screenOkWindow);
	og::Screen::setCallBackMessage(m_screenName);
	og::Screen::setCallBackMessage(m_screenButton);
	m_tControl = new P2JME::Movie::TControl;
	m_tControl->init();
	m_tControl->m_flags &= 0xfffffffe;
	m_inTextBox                       = false;
	og::Screen::CallBack_Picture* pic = og::Screen::setCallBack_3DStick(arc, m_screenButton, 'ota3dl');
	m_stickAnim                       = new og::Screen::StickAnimMgr(pic);
	m_stickAnim->stickUpDown();
	pane              = m_screenButton->search('Ncstick');
	pane->m_isVisible = false;
	m_efx             = nullptr;
	if (m_disp->m_pelletMessageID) {
		efx2d::T2DOtakantei* efx = new efx2d::T2DOtakantei();
		m_efx                    = efx;
		efx2d::Arg arg(304.0f, 194.0f);
		m_efx->setGroup(2);
		m_efx->create(&arg);
	}
	commonUpdate();
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, lbl_8048E990@ha
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	stw      r30, 0x58(r1)
	addi     r30, r5, lbl_8048E990@l
	stw      r29, 0x54(r1)
	mr       r29, r4
	stw      r28, 0x50(r1)
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4E544549@ha
	li       r5, 0x4b41
	mr       r28, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4E544549@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031846C
	stw      r28, 0x38(r31)
	b        lbl_80318524

lbl_8031846C:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r28
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80318510
	li       r3, 0x40
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80318508
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q32og6Screen16DispMemberKantei@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r8, 0
	stw      r0, 0(r3)
	addi     r7, r4, __vt__Q32og6Screen16DispMemberKantei@l
	li       r6, 0x7b
	li       r5, 0x1388
	stw      r8, 4(r3)
	li       r4, 0x15b3
	li       r0, 1
	stw      r7, 0(r3)
	stw      r6, 8(r3)
	stw      r5, 0xc(r3)
	stw      r8, 0x34(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x1c(r3)
	stw      r8, 0x18(r3)
	stw      r8, 0x20(r3)
	stw      r4, 0x24(r3)
	stb      r8, 0x28(r3)
	stw      r8, 0x2c(r3)
	stb      r8, 0x29(r3)
	stb      r8, 0x30(r3)
	stb      r8, 0x38(r3)
	stb      r0, 0x39(r3)

lbl_80318508:
	stw      r3, 0x38(r31)
	b        lbl_80318524

lbl_80318510:
	addi     r3, r30, 0
	addi     r5, r30, 0x28
	li       r4, 0x102
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80318524:
	lwz      r4, 0x38(r31)
	li       r3, 0x148
	lwz      r0, 8(r4)
	stw      r0, 0x98(r31)
	lwz      r4, 0x38(r31)
	lwz      r0, 0xc(r4)
	stw      r0, 0x9c(r31)
	lwz      r4, 0x38(r31)
	lwz      r0, 0x24(r4)
	stw      r0, 0xa0(r31)
	lwz      r4, 0x98(r31)
	lwz      r0, 0x9c(r31)
	subf     r0, r4, r0
	stw      r0, 0xa4(r31)
	lwz      r4, 0x98(r31)
	lwz      r0, 0xa0(r31)
	subf     r0, r4, r0
	stw      r0, 0xa8(r31)
	lwz      r0, 0xa4(r31)
	lwz      r4, 0x38(r31)
	stw      r0, 0xc(r4)
	lwz      r0, 0xa8(r31)
	lwz      r4, 0x38(r31)
	stw      r0, 0x24(r4)
	lwz      r4, 0x38(r31)
	lwz      r28, 0x34(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803185A0
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803185A0:
	stw      r0, 0x44(r31)
	mr       r6, r29
	addi     r4, r30, 0x48
	lis      r5, 0x104
	lwz      r3, 0x44(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803185D0
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803185D0:
	stw      r0, 0x48(r31)
	mr       r6, r29
	addi     r4, r30, 0x58
	lis      r5, 0x104
	lwz      r3, 0x48(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	cmpwi    r28, 1
	beq      lbl_80318664
	bge      lbl_803186C8
	cmpwi    r28, 0
	bge      lbl_80318600
	b        lbl_803186C8

lbl_80318600:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80318618
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_80318618:
	stw      r0, 0x3c(r31)
	mr       r6, r29
	addi     r4, r30, 0x74
	lis      r5, 0x104
	lwz      r3, 0x3c(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	stw      r29, 8(r1)
	lis      r3, 0x73686131@ha
	addi     r6, r3, 0x73686131@l
	li       r5, 0x5053
	lwz      r4, 0x38(r31)
	li       r8, 9
	lwz      r3, 0x3c(r31)
	li       r9, 0
	addi     r7, r4, 0xc
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw r3, 0x94(r31) b        lbl_803186E4

lbl_80318664:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031867C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031867C:
	stw      r0, 0x3c(r31)
	mr       r6, r29
	addi     r4, r30, 0x8c
	lis      r5, 0x104
	lwz      r3, 0x3c(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	stw      r29, 8(r1)
	lis      r3, 0x73686131@ha
	addi     r6, r3, 0x73686131@l
	li       r5, 0x5053
	lwz      r4, 0x38(r31)
	li       r8, 9
	lwz      r3, 0x3c(r31)
	li       r9, 0
	addi     r7, r4, 0xc
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw r3, 0x94(r31) b        lbl_803186E4

lbl_803186C8:
	li       r0, 0
	addi     r3, r30, 0
	stw      r0, 0x3c(r31)
	addi     r5, r30, 0xa4
	li       r4, 0x131
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803186E4:
	lwz      r3, 0x38(r31)
	lbz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_80318730
	lwz      r3, 0x3c(r31)
	lis      r4, 0x756B616E@ha
	addi     r6, r4, 0x756B616E@l
	li       r5, 0x547a
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x315F3030@ha
	lis      r4, 0x00383535@ha
	addi     r0, r5, 0x315F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383535@l
	stw      r0, 0x18(r3)
	b        lbl_80318768

lbl_80318730:
	lwz      r3, 0x3c(r31)
	lis      r4, 0x756B616E@ha
	addi     r6, r4, 0x756B616E@l
	li       r5, 0x547a
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x305F3030@ha
	lis      r4, 0x00383535@ha
	addi     r0, r5, 0x305F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383535@l
	stw      r0, 0x18(r3)

lbl_80318768:
	lwz      r4, 0x38(r31)
	li       r3, 0x18
	lfd      f2, 0x10(r30)
	lwz      r28, 0x20(r4)
	lfd      f1, 0x18(r30)
	lfd      f0, 0x20(r30)
	stfd     f2, 0x30(r1)
	stfd     f1, 0x38(r1)
	stfd     f0, 0x40(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803187B8
	lis      r6, 0x305F3031@ha
	lis      r5, 0x00303130@ha
	addi     r4, r1, 0x30
	li       r7, 3
	addi     r6, r6, 0x305F3031@l
	addi     r5, r5, 0x00303130@l
	bl       __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
	mr       r0, r3

lbl_803187B8:
	mr       r3, r0
	mr       r4, r28
	bl       getMsgID__Q28Morimura13TOffsetMsgSetFi
	stw      r4, 0xd4(r31)
	lis      r5, 0x4E616D65@ha
	lis      r4, 0x4974656D@ha
	stw      r3, 0xd0(r31)
	addi     r6, r5, 0x4E616D65@l
	addi     r5, r4, 0x4974656D@l
	lwz      r3, 0x44(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xb8(r31)
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	addi     r4, r3, msVal__Q32og9newScreen9ObjKantei@l
	lwz      r3, 0xb8(r31)
	lfs      f1, 0x18(r4)
	lwz      r12, 0(r3)
	lfs      f2, 0x1c(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb8(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lis      r4, 0x375F3030@ha
	lwz      r3, 0xb8(r31)
	addi     r0, r4, 0x375F3030@l
	lfs      f0, lbl_8051D938@sda21(r2)
	lis      r4, 0x00383535@ha
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383535@l
	stw      r0, 0x18(r3)
	stfs     f0, 0xc0(r31)
	lwz      r3, 0xb8(r31)
	lfs      f0, 0xc0(r31)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80318880
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_80318880:
	stw      r0, 0xbc(r31)
	lis      r3, 0x6F746131@ha
	addi     r6, r3, 0x6F746131@l
	li       r5, 0x5053
	stw      r29, 8(r1)
	li       r8, 4
	li       r9, 1
	li       r10, 1
	lwz      r4, 0x38(r31)
	lwz      r3, 0x3c(r31)
	addi     r7, r4, 8
	bl
setCallBack_CounterSlot__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	stw      r3, 0x90(r31)
	lwz      r3, 0x90(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen9ObjKantei@ha
	lwz      r3, 0x90(r31)
	addi     r4, r4, msVal__Q32og9newScreen9ObjKantei@l
	lfs      f1, 0xc(r4)
	lfs      f2, 0x10(r4)
	lfs      f3, 0x14(r4)
	bl       setPuyoParam__Q32og6Screen20CallBack_CounterSlotFfff
	lwz      r4, 0x90(r31)
	li       r0, 0x181e
	li       r3, 0x148
	stw      r0, 0xc8(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80318908
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_80318908:
	stw      r0, 0x40(r31)
	mr       r6, r29
	addi     r4, r30, 0xc0
	lis      r5, 0x104
	lwz      r3, 0x40(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r3, 0x3c(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x40(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x44(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x48(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x3c(r31)
	lis      r4, 0x4D736861@ha
	addi     r6, r4, 0x4D736861@l
	li       r5, 0x4e
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x84(r31)
	lis      r5, 0x756B616E@ha
	lis      r4, 0x004E4D7A@ha
	lwz      r3, 0x3c(r31)
	addi     r6, r5, 0x756B616E@l
	addi     r5, r4, 0x004E4D7A@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r31)
	lis      r3, 0x6974656D@ha
	li       r0, 0
	li       r5, 0
	lwz      r4, 0x88(r31)
	addi     r6, r3, 0x6974656D@l
	stb      r0, 0xb0(r4)
	lwz      r3, 0x40(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_803189C8
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_803189C8:
	lwz      r3, 0x40(r31)
	lis      r5, 0x73657470@ha
	lis      r4, 0x004E6F74@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x73657470@l
	addi     r5, r4, 0x004E6F74@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r31)
	lwz      r3, 0x3c(r31)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lwz      r3, 0x44(r31)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lwz      r3, 0x48(r31)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	li       r3, 0x78
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80318A20
	bl       __ct__Q35P2JME5Movie8TControlFv
	mr       r0, r3

lbl_80318A20:
	stw      r0, 0x50(r31)
	lwz      r3, 0x50(r31)
	bl       init__Q25P2JME8TControlFv
	lwz      r8, 0x50(r31)
	lis      r4, 0x6133646C@ha
	li       r0, 0
	mr       r3, r29
	lwz      r7, 0x70(r8)
	addi     r6, r4, 0x6133646C@l
	li       r5, 0x6f74
	rlwinm   r4, r7, 0, 0, 0x1e
	stw      r4, 0x70(r8)
	stb      r0, 0x78(r31)
	lwz      r4, 0x48(r31)
	bl setCallBack_3DStick__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx mr
r0, r3 li       r3, 8 mr       r28, r0 bl       __nw__FUl or.      r0, r3,
r3 beq      lbl_80318A80 mr       r4, r28 bl
__ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture mr r0, r3

lbl_80318A80:
	stw      r0, 0xac(r31)
	lwz      r3, 0xac(r31)
	bl       stickUpDown__Q32og6Screen12StickAnimMgrFv
	lwz      r3, 0x48(r31)
	lis      r5, 0x7469636B@ha
	lis      r4, 0x004E6373@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x7469636B@l
	addi     r5, r4, 0x004E6373@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	stb      r4, 0xb0(r3)
	stw      r4, 0xb4(r31)
	lwz      r3, 0x38(r31)
	lwz      r0, 0x18(r3)
	lwz      r3, 0x1c(r3)
	xor      r0, r0, r4
	xor      r3, r3, r4
	or.      r0, r3, r0
	beq      lbl_80318BB4
	li       r3, 0xc
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80318B44
	li       r4, 5
	bl       __ct__Q25efx2d9TForeverNFUc
	lis      r4, __vt__Q25efx2d9TForever5@ha
	lis      r3, __vt__Q25efx2d12T2DOtakantei@ha
	addi     r0, r4, __vt__Q25efx2d9TForever5@l
	li       r9, 0x1d
	stw      r0, 0(r29)
	li       r7, 0x1e
	li       r6, 0x1f
	li       r5, 0x20
	lwz      r8, 8(r29)
	li       r4, 0x21
	addi     r0, r3, __vt__Q25efx2d12T2DOtakantei@l
	sth      r9, 0xc(r8)
	lwz      r3, 8(r29)
	sth      r7, 0x20(r3)
	lwz      r3, 8(r29)
	sth      r6, 0x34(r3)
	lwz      r3, 8(r29)
	sth      r5, 0x48(r3)
	lwz      r3, 8(r29)
	sth      r4, 0x5c(r3)
	stw      r0, 0(r29)

lbl_80318B44:
	lfs      f1, lbl_8051D940@sda21(r2)
	lis      r3, __vt__Q25efx2d3Arg@ha
	lfs      f0, lbl_8051D944@sda21(r2)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	stfs     f1, 0x18(r1)
	li       r4, 2
	stfs     f0, 0x1c(r1)
	lwz      r5, 0x18(r1)
	lwz      r3, 0x1c(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	lfs      f1, 0x10(r1)
	stw      r29, 0xb4(r31)
	lfs      f0, 0x14(r1)
	stw      r0, 0x28(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	lwz      r3, 0xb4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb4(r31)
	addi     r4, r1, 0x20
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80318BB4:
	mr       r3, r31
	bl       commonUpdate__Q32og9newScreen9ObjKanteiFv
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void ObjKantei::startKanteiVoice(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void ObjKantei::updateKanteiVoice(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80318BDC
 * Size:	000258
 */
void ObjKantei::scaleAnimItemName(void)
{
	f32 calcscale         = m_scaleMgr->calc();
	m_paneName->m_scale.x = calcscale * m_nameScale;
	m_paneName->m_scale.y = calcscale * m_nameScale;
	m_paneName->calcMtx();

	if (m_doScaleName) {
		switch (m_nameState) {
		case KanteiName_StartDelay:
			if (m_nameTimer > 0.0f) {
				m_nameTimer -= sys->m_deltaTime;
				if (m_nameTimer < 0.0f) {
					m_nameState = KanteiName_Growing;
				}
			}
			m_nameScale = 0.0f;
			break;
		case KanteiName_Growing:
			m_nameScale += msVal.m_nameScaleGrowFactor;
			if (m_nameScale > 1.0f) {
				m_nameScale = 1.0f;
				m_scaleMgr->up(msVal.m_counterGrow1, msVal.m_counterGrow2, msVal.m_counterGrow3, 0.0f);
				if (!m_isPelletNameNotAppeared) {
					m_doShipSpeech    = true;
					m_commonTimer     = 0.1f;
					m_shipSpeechTimer = 10;
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_HEAD_A_FLAT, false);
				}
				m_nameState     = KanteiName_VisibleDelay;
				m_nameWaitTimer = msVal.m_waitTimerReset;
			}
			break;
		case KanteiName_VisibleDelay:
			if (m_nameWaitTimer > 0.0f) {
				m_nameWaitTimer -= sys->m_deltaTime;
				if (m_isPelletNameNotAppeared && m_nameWaitTimer < 0.0f) {
					m_nameState = KanteiName_Shrinking;
				}
			}
			break;
		case KanteiName_Shrinking:
			if (m_nameScale > 0.0f) {
				m_nameScale -= msVal.m_nameScaleGrowFactor;
				if (m_nameScale < 0.0f) {
					m_nameScale = 0.0f;
					if (m_isPelletNameNotAppeared) {
						m_isPelletNameNotAppeared = false;
						m_nameState               = KanteiName_VisibleDelay;
						m_nameWaitTimer           = msVal.m_waitTimerReset;
						m_paneName->m_messageID   = m_treasureNameMesgID;
						m_nameScale               = 0.0f;
						m_paneName->m_scale.x     = calcscale * m_nameScale;
						m_paneName->m_scale.y     = calcscale * m_nameScale;
						m_paneName->calcMtx();
						m_nameState = KanteiName_Growing; // reset to growing state but now with the treasures name
					}
				}
			}
			break;
		}
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xbc(r3)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lfs      f0, 0xc0(r31)
	lwz      r3, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xc8(r31)
	cmplwi   r0, 0
	beq      lbl_80318E20
	lwz      r0, 0xcc(r31)
	cmpwi    r0, 2
	beq      lbl_80318D54
	bge      lbl_80318C48
	cmpwi    r0, 0
	beq      lbl_80318C54
	bge      lbl_80318C94
	b        lbl_80318E20

lbl_80318C48:
	cmpwi    r0, 4
	bge      lbl_80318E20
	b        lbl_80318D98

lbl_80318C54:
	lfs      f2, 0xc4(r31)
	lfs      f1, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80318C88
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xc4(r31)
	lfs      f0, 0xc4(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_80318C88
	li       r0, 1
	stw      r0, 0xcc(r31)

lbl_80318C88:
	lfs      f0, lbl_8051D938@sda21(r2)
	stfs     f0, 0xc0(r31)
	b        lbl_80318E20

lbl_80318C94:
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	lfs      f2, 0xc0(r31)
	addi     r4, r3, msVal__Q32og9newScreen9ObjKantei@l
	lfs      f0, lbl_8051D948@sda21(r2)
	lfs      f1, 0x34(r4)
	fadds    f1, f2, f1
	stfs     f1, 0xc0(r31)
	lfs      f1, 0xc0(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80318E20
	stfs     f0, 0xc0(r31)
	lfs      f4, lbl_8051D938@sda21(r2)
	lwz      r3, 0xbc(r31)
	lfs      f1, 0x28(r4)
	lfs      f2, 0x2c(r4)
	lfs      f3, 0x30(r4)
	bl       up__Q32og6Screen8ScaleMgrFffff
	lbz      r0, 0xd8(r31)
	cmplwi   r0, 0
	bne      lbl_80318D38
	li       r0, 1
	lfs      f0, lbl_8051D93C@sda21(r2)
	stb      r0, 0xe4(r31)
	li       r0, 0xa
	stfs     f0, 0xe8(r31)
	stw      r0, 0xec(r31)
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_80318D28 lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80318D28:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x1846 li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb

lbl_80318D38:
	li       r0, 2
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	stw      r0, 0xcc(r31)
	addi     r3, r3, msVal__Q32og9newScreen9ObjKantei@l
	lfs      f0, 0x38(r3)
	stfs     f0, 0xdc(r31)
	b        lbl_80318E20

lbl_80318D54:
	lfs      f2, 0xdc(r31)
	lfs      f1, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80318E20
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xdc(r31)
	lbz      r0, 0xd8(r31)
	cmplwi   r0, 0
	beq      lbl_80318E20
	lfs      f0, 0xdc(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_80318E20
	li       r0, 3
	stw      r0, 0xcc(r31)
	b        lbl_80318E20

lbl_80318D98:
	lfs      f2, 0xc0(r31)
	lfs      f1, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80318E20
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	addi     r3, r3, msVal__Q32og9newScreen9ObjKantei@l
	lfs      f0, 0x34(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xc0(r31)
	lfs      f0, 0xc0(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_80318E20
	stfs     f1, 0xc0(r31)
	lbz      r0, 0xd8(r31)
	cmplwi   r0, 0
	beq      lbl_80318E20
	li       r0, 0
	stb      r0, 0xd8(r31)
	lwz      r0, 0xd0(r31)
	lwz      r4, 0xd4(r31)
	lwz      r3, 0xb8(r31)
	stw      r4, 0x1c(r3)
	stw      r0, 0x18(r3)
	stfs     f1, 0xc0(r31)
	lwz      r3, 0xb8(r31)
	lfs      f0, 0xc0(r31)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stw      r0, 0xcc(r31)

lbl_80318E20:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80318E34
 * Size:	000154
 */
void ObjKantei::commonUpdate(void)
{
	scaleAnimItemName();
	if (m_doShipSpeech) {
		if (m_commonTimer > 0.0f) {
			m_commonTimer -= sys->m_deltaTime;
			if (m_commonTimer <= 0.0f) {
				m_commonTimer = 0.1f;
				m_shipSpeechTimer--;
				if (m_shipSpeechTimer < 1) {
					m_doShipSpeech = false;
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
				} else {
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, false);
				}
			}
		}
	}
	m_screenBG->update();
	m_screenOkWindow->update();
	m_screenName->update();
	m_screenButton->update();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       scaleAnimItemName__Q32og9newScreen9ObjKanteiFv
	lbz      r0, 0xe4(r31)
	cmplwi   r0, 0
	beq      lbl_80318F24
	lfs      f2, 0xe8(r31)
	lfs      f1, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80318F24
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xe8(r31)
	lfs      f0, 0xe8(r31)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80318F24
	lfs      f0, lbl_8051D93C@sda21(r2)
	stfs     f0, 0xe8(r31)
	lwz      r3, 0xec(r31)
	addi     r0, r3, -1
	stw      r0, 0xec(r31)
	lwz      r0, 0xec(r31)
	cmpwi    r0, 0
	bgt      lbl_80318EEC
	li       r0, 0
	stb      r0, 0xe4(r31)
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_80318ED8 lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80318ED8:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x185f li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb b
lbl_80318F24

lbl_80318EEC:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_80318F14 lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80318F14:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x1850 li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb

lbl_80318F24:
	lwz      r3, 0x40(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
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
 * Address:	80318F88
 * Size:	00040C
 */
bool ObjKantei::doUpdate(void)
{
	Controller* pad = getGamePad();
	switch (m_state) {
	case Kantei_Begin:
		m_state      = Kantei_PokoAppearDelay;
		m_startTimer = 0.0f;
		break;
	case Kantei_PokoAppearDelay:
		m_startTimer += sys->m_deltaTime;
		if (m_startTimer >= msVal.m_nameAppearDelay || pad->m_padButton.m_mask & Controller::PRESS_A
		    || m_disp->m_secondaryController->m_padButton.m_mask & Controller::PRESS_A) {
			m_state               = Kantei_SetPokoValue;
			m_disp->m_pelletValue = 0;
			m_pokoCounterCurr->startSlot(msVal.m_pokoSlotFactor);
			m_pokoCounterCurr->show();
		}
		break;
	case Kantei_SetPokoValue:
		m_state               = Kantei_WaitAppearPokos;
		m_startTimer          = 0.0f;
		m_disp->m_pelletValue = m_currItemValue;
		break;
	case Kantei_WaitAppearPokos:
		m_startTimer += sys->m_deltaTime;
		if (m_startTimer >= msVal.m_priceAppearDelay) {
			m_state                  = Kantei_AppearTotalPokos;
			m_startTimer             = 0.0f;
			m_disp->m_totalPokos     = 0;
			m_disp->m_totalPokosCave = 0;
			m_pokoCounterTotal->setPuyoAnim(true);
		}
		break;
	case Kantei_AppearTotalPokos:
		m_state                  = Kantei_Idle;
		m_startTimer             = 0.0f;
		m_disp->m_totalPokos     = m_totalPokos;
		m_disp->m_totalPokosCave = m_totalPokosCave;
		ogSound->setPlusTotalPoko();
		m_doScaleName = true;
		break;
	case Kantei_Idle:
		if (m_idleStateTimer > 0.0f) {
			m_idleStateTimer -= sys->m_deltaTime;
		} else {
			if (pad->m_padButton.m_mask & Controller::PRESS_A || m_disp->m_secondaryController->m_padButton.m_mask & Controller::PRESS_A) {
				m_shipMessageBoxID = m_disp->m_pelletMessageID;
				// if the tagID exists, open ship message box, unless in E3 mode
				if (m_shipMessageBoxID || Game::gGameConfig.m_parms.m_E3version.m_data) {
					finishKantei();
				} else {
					u32 tagid, tagid2;
					P2JME::convertU64ToMessageID(m_shipMessageBoxID, &tagid, &tagid2);
					m_tControl->setMessageID(tagid, tagid2);
					m_inTextBox = true;
					m_state     = Kantei_MessageBox;
				}
			}
		}
	case Kantei_MessageBox:
		m_tControl->update(pad, m_disp->m_secondaryController);
		if (m_tControl->m_finished) {
			finishKantei();
		}
	default:
		break;
	}
	// is commonUpdate inlined???
	scaleAnimItemName();
	if (m_doShipSpeech) {
		if (m_commonTimer > 0.0f) {
			m_commonTimer -= sys->m_deltaTime;
			if (m_commonTimer <= 0.0f) {
				m_commonTimer = 0.1f;
				m_shipSpeechTimer--;
				if (m_shipSpeechTimer < 1) {
					m_doShipSpeech = false;
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
				} else {
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, false);
				}
			}
		}
	}
	m_screenBG->update();
	m_screenOkWindow->update();
	m_screenName->update();
	m_screenButton->update();
	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       getGamePad__Q26Screen7ObjBaseCFv
	lwz      r0, 0x4c(r31)
	mr       r4, r3
	cmplwi   r0, 8
	bgt      lbl_8031924C
	lis      r3, lbl_804D8BE8@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804D8BE8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80318FC8

lbl_80318FC8:
	li       r0, 2
	lfs      f0, lbl_8051D938@sda21(r2)
	stw      r0, 0x4c(r31)
	stfs     f0, 0x8c(r31)
	b        lbl_8031924C
	.global  lbl_80318FDC

lbl_80318FDC:
	lwz      r5, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	lfs      f1, 0x8c(r31)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x8c(r31)
	lfs      f1, 0x8c(r31)
	lfs      f0, msVal__Q32og9newScreen9ObjKantei@l(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	beq      lbl_80319030
	lwz      r0, 0x1c(r4)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80319030
	lwz      r3, 0x38(r31)
	lwz      r3, 0x2c(r3)
	cmplwi   r3, 0
	beq      lbl_8031924C
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_8031924C

lbl_80319030:
	li       r0, 3
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	stw      r0, 0x4c(r31)
	li       r0, 0
	addi     r4, r3, msVal__Q32og9newScreen9ObjKantei@l
	lwz      r3, 0x38(r31)
	stw      r0, 8(r3)
	lwz      r3, 0x90(r31)
	lfs      f1, 8(r4)
	bl       startSlot__Q32og6Screen20CallBack_CounterSlotFf
	lwz      r3, 0x90(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	b        lbl_8031924C
	.global  lbl_80319070

lbl_80319070:
	li       r0, 4
	lfs      f0, lbl_8051D938@sda21(r2)
	stw      r0, 0x4c(r31)
	stfs     f0, 0x8c(r31)
	lwz      r0, 0x98(r31)
	lwz      r3, 0x38(r31)
	stw      r0, 8(r3)
	b        lbl_8031924C
	.global  lbl_80319090

lbl_80319090:
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	lfs      f1, 0x8c(r31)
	addi     r3, r3, msVal__Q32og9newScreen9ObjKantei@l
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x8c(r31)
	lfs      f1, 0x8c(r31)
	lfs      f0, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8031924C
	li       r0, 6
	lfs      f0, lbl_8051D938@sda21(r2)
	stw      r0, 0x4c(r31)
	li       r0, 0
	li       r4, 1
	stfs     f0, 0x8c(r31)
	lwz      r3, 0x38(r31)
	stw      r0, 0xc(r3)
	lwz      r3, 0x38(r31)
	stw      r0, 0x24(r3)
	lwz      r3, 0x94(r31)
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	b        lbl_8031924C
	.global  lbl_803190F4

lbl_803190F4:
	li       r0, 7
	stw      r0, 0x4c(r31)
	lwz      r0, 0x9c(r31)
	lwz      r3, 0x38(r31)
	stw      r0, 0xc(r3)
	lwz      r0, 0xa0(r31)
	lwz      r3, 0x38(r31)
	stw      r0, 0x24(r3)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setPlusTotalPoko__Q22og5SoundFv
	li       r0, 1
	stb      r0, 0xc8(r31)
	b        lbl_8031924C
	.global  lbl_80319128

lbl_80319128:
	lfs      f1, 0xe0(r31)
	lfs      f0, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8031914C
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0xe0(r31)
	b        lbl_8031924C

lbl_8031914C:
	cmplwi   r4, 0
	beq      lbl_80319160
	lwz      r0, 0x1c(r4)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_8031917C

lbl_80319160:
	lwz      r3, 0x38(r31)
	lwz      r3, 0x2c(r3)
	cmplwi   r3, 0
	beq      lbl_8031924C
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_8031924C

lbl_8031917C:
	lwz      r3, 0x38(r31)
	li       r4, 0
	lwz      r0, 0x18(r3)
	lwz      r3, 0x1c(r3)
	stw      r3, 0x74(r31)
	stw      r0, 0x70(r31)
	lwz      r0, 0x70(r31)
	lwz      r3, 0x74(r31)
	xor      r0, r0, r4
	xor      r3, r3, r4
	or.      r0, r3, r0
	beq      lbl_8031920C
	lis      r3, gGameConfig__4Game@ha
	addi     r3, r3, gGameConfig__4Game@l
	lwz      r0, 0x1c8(r3)
	cmpwi    r0, 0
	bne      lbl_8031920C
	stw      r4, 0xc(r1)
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	stw      r4, 8(r1)
	lwz      r3, 0x70(r31)
	lwz      r4, 0x74(r31)
	bl       convertU64ToMessageID__5P2JMEFUxPUlPUl
	lwz      r3, 0x50(r31)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r5, 8(r1)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	li       r0, 8
	stb      r3, 0x78(r31)
	stw      r0, 0x4c(r31)
	b        lbl_8031924C

lbl_8031920C:
	mr       r3, r31
	bl       finishKantei__Q32og9newScreen9ObjKanteiFv
	b        lbl_8031924C
	.global  lbl_80319218

lbl_80319218:
	lwz      r3, 0x50(r31)
	lwz      r5, 0x38(r31)
	lwz      r12, 0(r3)
	lwz      r5, 0x2c(r5)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x50(r31)
	lbz      r0, 0x68(r3)
	cmplwi   r0, 0
	bne      lbl_8031924C
	mr       r3, r31
	bl       finishKantei__Q32og9newScreen9ObjKanteiFv
	.global  lbl_8031924C

lbl_8031924C:
	mr       r3, r31
	bl       scaleAnimItemName__Q32og9newScreen9ObjKanteiFv
	lbz      r0, 0xe4(r31)
	cmplwi   r0, 0
	beq      lbl_8031932C
	lfs      f2, 0xe8(r31)
	lfs      f1, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8031932C
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xe8(r31)
	lfs      f0, 0xe8(r31)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8031932C
	lfs      f0, lbl_8051D93C@sda21(r2)
	stfs     f0, 0xe8(r31)
	lwz      r3, 0xec(r31)
	addi     r0, r3, -1
	stw      r0, 0xec(r31)
	lwz      r0, 0xec(r31)
	cmpwi    r0, 0
	bgt      lbl_803192F4
	li       r0, 0
	stb      r0, 0xe4(r31)
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_803192E0 lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_803192E0:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x185f li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb b
lbl_8031932C

lbl_803192F4:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_8031931C lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031931C:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x1850 li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb

lbl_8031932C:
	lwz      r3, 0x40(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
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
 * Address:	80319394
 * Size:	000040
 */
void ObjKantei::finishKantei(void)
{
	m_disp->m_isDone = true;
	if (!m_playExitSE) {
		m_playExitSE = true;
		ogSound->setKanteiExit();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x14(r1)
	lwz      r4, 0x38(r3)
	stb      r5, 0x30(r4)
	lbz      r0, 0xf0(r3)
	cmplwi   r0, 0
	bne      lbl_803193C4
	stb      r5, 0xf0(r3)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setKanteiExit__Q22og5SoundFv

lbl_803193C4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803193D4
 * Size:	000290
 */
void ObjKantei::doDraw(Graphics& gfx)
{
	J2DPerspGraph graf = gfx.m_perspGraph;

	Graphics(gfx2);
	int alpha = m_fadeLevel * 255.0f;
	m_screenBG->setAlpha(alpha);
	m_screenBG->draw(gfx2, graf);

	if (m_efx) {
		graf.setPort();
		particle2dMgr->draw(2, 0);
	}

	if (m_state != Kantei_MessageBox) {
		alpha = m_fadeLevel * 255.0f;
		m_screenOkWindow->setAlpha(alpha);
		m_screenOkWindow->draw(gfx2, graf);
		m_screenButton->m_someX = -15.2f;
		m_screenButton->m_someY = msVal.m_screenMoveStart + -15.2f;
		alpha                   = m_fadeLevel * 255.0f;
		m_screenButton->setAlpha(alpha);
		m_screenButton->draw(gfx2, graf);
	}
	if (m_doDrawBox && m_disp->m_delegate) {
		J2DPane* pane  = m_paneSetP;
		m_drawBox.p1.x = pane->_030.f.x;
		m_drawBox.p1.y = pane->_030.f.y;
		m_drawBox.p2.x = pane->_030.i.x;
		m_drawBox.p2.y = pane->_030.i.y;
		m_disp->m_delegate->invoke(m_drawBox);
		m_doDrawBox = 0;
	}
	alpha = m_fadeLevel * 255.0f;
	m_screenName->setAlpha(alpha);
	m_screenName->draw(gfx2, graf);
	/*
	stwu     r1, -0x2d0(r1)
	mflr     r0
	stw      r0, 0x2d4(r1)
	stw      r31, 0x2cc(r1)
	stw      r30, 0x2c8(r1)
	mr       r30, r4
	addi     r31, r30, 0x190
	stw      r29, 0x2c4(r1)
	mr       r29, r3
	addi     r3, r1, 8
	bl       __ct__8GraphicsFv
	lfs      f1, lbl_8051D94C@sda21(r2)
	lfs      f0, 0x80(r29)
	lwz      r3, 0x40(r29)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x2a8(r1)
	lwz      r4, 0x2ac(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x40(r29)
	mr       r5, r31
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xb4(r29)
	cmplwi   r0, 0
	beq      lbl_80319478
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 2
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs

lbl_80319478:
	lwz      r0, 0x4c(r29)
	cmpwi    r0, 8
	beq      lbl_80319540
	lfs      f1, lbl_8051D94C@sda21(r2)
	lfs      f0, 0x80(r29)
	lwz      r3, 0x3c(r29)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x2a8(r1)
	lwz      r4, 0x2ac(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r29)
	mr       r5, r31
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	lfs      f2, lbl_8051D938@sda21(r2)
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	addi     r3, r3, msVal__Q32og9newScreen9ObjKantei@l
	lfs      f3, 0x20(r3)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f2, f1
	lwz      r3, 0x48(r29)
	fadds    f0, f3, f0
	lfs      f1, lbl_8051D94C@sda21(r2)
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lfs      f0, 0x80(r29)
	lwz      r3, 0x48(r29)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x2b0(r1)
	lwz      r4, 0x2b4(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r29)
	mr       r5, r31
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_80319540:
	lbz      r0, 0x68(r29)
	cmplwi   r0, 0
	beq      lbl_803195A4
	lwz      r3, 0x38(r29)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_803195A4
	lwz      r3, 0x54(r29)
	addi     r4, r29, 0x58
	lfs      f3, 0x3c(r3)
	lfs      f2, 0x38(r3)
	lfs      f1, 0x34(r3)
	lfs      f0, 0x30(r3)
	stfs     f0, 0x58(r29)
	stfs     f1, 0x5c(r29)
	stfs     f2, 0x60(r29)
	stfs     f3, 0x64(r29)
	lwz      r3, 0x38(r29)
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x68(r29)

lbl_803195A4:
	lfs      f1, lbl_8051D94C@sda21(r2)
	lfs      f0, 0x80(r29)
	lwz      r3, 0x44(r29)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x2b0(r1)
	lwz      r4, 0x2b4(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r29)
	mr       r5, r31
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__8Graphics@ha
	addic.   r4, r1, 0x198
	addi     r0, r3, __vt__8Graphics@l
	stw      r0, 0x274(r1)
	beq      lbl_80319620
	lis      r3, __vt__13J2DPerspGraph@ha
	cmplwi   r4, 0
	addi     r0, r3, __vt__13J2DPerspGraph@l
	stw      r0, 0(r4)
	beq      lbl_80319620
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0(r4)

lbl_80319620:
	addic.   r4, r1, 0xc4
	beq      lbl_80319648
	lis      r3, __vt__13J2DOrthoGraph@ha
	cmplwi   r4, 0
	addi     r0, r3, __vt__13J2DOrthoGraph@l
	stw      r0, 0(r4)
	beq      lbl_80319648
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0(r4)

lbl_80319648:
	lwz      r0, 0x2d4(r1)
	lwz      r31, 0x2cc(r1)
	lwz      r30, 0x2c8(r1)
	lwz      r29, 0x2c4(r1)
	mtlr     r0
	addi     r1, r1, 0x2d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80319664
 * Size:	00003C
 */
void ObjKantei::doDrawMsg(Graphics& gfx)
{
	if (m_state == Kantei_MessageBox) {
		m_tControl->draw(gfx);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x4c(r3)
	cmpwi    r0, 8
	bne      lbl_80319690
	lwz      r3, 0x50(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80319690:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803196A0
 * Size:	00010C
 */
bool ObjKantei::doStart(::Screen::StartSceneArg const*)
{
	m_fadeLevel  = 0.0f;
	m_fadeLevel2 = 0.0f;
	if (m_disp->m_doPlayBGM) {
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		scene                  = (scene->isGameScene()) ? scene : nullptr;
		scene->startMainSeq();
	}
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D938@sda21(r2)
	lis      r4, lbl_8048E990@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8048E990@l
	stw      r30, 8(r1)
	stfs     f0, 0x7c(r3)
	stfs     f0, 0x80(r3)
	lwz      r3, 0x38(r3)
	lbz      r0, 0x39(r3)
	cmplwi   r0, 0
	beq      lbl_80319790
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803196F8
	addi     r3, r31, 0xd4
	addi     r5, r31, 0xe0
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803196F8:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80319718
	addi     r3, r31, 0xd4
	addi     r5, r31, 0xe0
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80319718:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80319738
	addi     r3, r31, 0xec
	addi     r5, r31, 0xe0
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80319738:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8031975C
	addi     r3, r31, 0xec
	addi     r5, r31, 0xf8
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031975C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8031977C
	addi     r3, r31, 0xec
	addi     r5, r31, 0xe0
	li       r4, 0x5a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031977C:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80319790:
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
 * Address:	803197AC
 * Size:	000010
 */
bool ObjKantei::doEnd(::Screen::EndSceneArg const*)
{
	m_fadeLevel = 0.0f;
	return true;
	/*
	lfs      f0, lbl_8051D938@sda21(r2)
	stfs     f0, 0x7c(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	803197BC
 * Size:	000004
 */
void ObjKantei::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	803197C0
 * Size:	000040
 */
void ObjKantei::doUpdateFinish(void)
{
	m_fadeLevel = 0.0f;
	if (m_efx) {
		m_efx->fade();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D938@sda21(r2)
	stw      r0, 0x14(r1)
	stfs     f0, 0x7c(r3)
	lwz      r3, 0xb4(r3)
	cmplwi   r3, 0
	beq      lbl_803197F0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_803197F0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80319800
 * Size:	000004
 */
void ObjKantei::doUpdateFadeoutFinish(void) { }

/*
 * --INFO--
 * Address:	80319804
 * Size:	0001A4
 */
bool ObjKantei::doUpdateFadein(void)
{
	m_fadeLevel += sys->m_deltaTime;
	bool calc = m_fadeLevel > 0.3f;
	if (calc)
		m_fadeLevel = 0.3f;

	m_fadeLevel /= 0.3f;
	scaleAnimItemName();
	if (m_doShipSpeech) {
		if (m_commonTimer > 0.0f) {
			m_commonTimer -= sys->m_deltaTime;
			if (m_commonTimer <= 0.0f) {
				m_commonTimer = 0.1f;
				m_shipSpeechTimer--;
				if (m_shipSpeechTimer < 1) {
					m_doShipSpeech = false;
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
				} else {
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, false);
				}
			}
		}
	}
	m_screenBG->update();
	m_screenOkWindow->update();
	m_screenName->update();
	m_screenButton->update();
	return calc;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D950@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x7c(r3)
	lfs      f1, 0x54(r4)
	fadds    f1, f2, f1
	stfs     f1, 0x7c(r3)
	lfs      f1, 0x7c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8031984C
	stfs     f0, 0x7c(r30)
	li       r31, 1

lbl_8031984C:
	lfs      f1, 0x7c(r30)
	mr       r3, r30
	lfs      f0, lbl_8051D950@sda21(r2)
	fdivs    f0, f1, f0
	stfs     f0, 0x80(r30)
	bl       scaleAnimItemName__Q32og9newScreen9ObjKanteiFv
	lbz      r0, 0xe4(r30)
	cmplwi   r0, 0
	beq      lbl_8031993C
	lfs      f2, 0xe8(r30)
	lfs      f1, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8031993C
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xe8(r30)
	lfs      f0, 0xe8(r30)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8031993C
	lfs      f0, lbl_8051D93C@sda21(r2)
	stfs     f0, 0xe8(r30)
	lwz      r3, 0xec(r30)
	addi     r0, r3, -1
	stw      r0, 0xec(r30)
	lwz      r0, 0xec(r30)
	cmpwi    r0, 0
	bgt      lbl_80319904
	li       r0, 0
	stb      r0, 0xe4(r30)
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_803198F0 lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_803198F0:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x185f li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb b
lbl_8031993C

lbl_80319904:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_8031992C lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031992C:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x1850 li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb

lbl_8031993C:
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
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
 * Address:	803199A8
 * Size:	0001AC
 */
bool ObjKantei::doUpdateFadeout(void)
{
	m_fadeLevel += sys->m_deltaTime;
	bool calc = m_fadeLevel > 0.2f;
	if (calc)
		m_fadeLevel = 0.2f;

	m_fadeLevel = 1.0f - (m_fadeLevel / 0.2f);
	scaleAnimItemName();
	if (m_doShipSpeech) {
		if (m_commonTimer > 0.0f) {
			m_commonTimer -= sys->m_deltaTime;
			if (m_commonTimer <= 0.0f) {
				m_commonTimer = 0.1f;
				m_shipSpeechTimer--;
				if (m_shipSpeechTimer < 1) {
					m_doShipSpeech = false;
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
				} else {
					// P2ASSERTLINE(567, PSGame::seMgr); there should be a global mgr pointer
					// PSGame::seMgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, false);
				}
			}
		}
	}
	m_screenBG->update();
	m_screenOkWindow->update();
	m_screenName->update();
	m_screenButton->update();
	return calc;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D954@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x7c(r3)
	lfs      f1, 0x54(r4)
	fadds    f1, f2, f1
	stfs     f1, 0x7c(r3)
	lfs      f1, 0x7c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_803199F0
	stfs     f0, 0x7c(r30)
	li       r31, 1

lbl_803199F0:
	lfs      f1, 0x7c(r30)
	mr       r3, r30
	lfs      f0, lbl_8051D954@sda21(r2)
	lfs      f2, lbl_8051D948@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x80(r30)
	bl       scaleAnimItemName__Q32og9newScreen9ObjKanteiFv
	lbz      r0, 0xe4(r30)
	cmplwi   r0, 0
	beq      lbl_80319AE8
	lfs      f2, 0xe8(r30)
	lfs      f1, lbl_8051D938@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_80319AE8
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0xe8(r30)
	lfs      f0, 0xe8(r30)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80319AE8
	lfs      f0, lbl_8051D93C@sda21(r2)
	stfs     f0, 0xe8(r30)
	lwz      r3, 0xec(r30)
	addi     r0, r3, -1
	stw      r0, 0xec(r30)
	lwz      r0, 0xec(r30)
	cmpwi    r0, 0
	bgt      lbl_80319AB0
	li       r0, 0
	stb      r0, 0xe4(r30)
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_80319A9C lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80319A9C:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x185f li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb b
lbl_80319AE8

lbl_80319AB0:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi
r0, 0 bne      lbl_80319AD8 lis      r3, lbl_8048EA64@ha lis      r5,
lbl_8048EA70@ha addi     r3, r3, lbl_8048EA64@l li       r4, 0x237 addi r5,
r5, lbl_8048EA70@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80319AD8:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) li r4,
0x1850 li       r5, 0 bl       playMessageVoice__Q26PSGame5SeMgrFUlb

lbl_80319AE8:
	lwz      r3, 0x40(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace newScreen
} // namespace og

/*
 * --INFO--
 * Address:	80319B54
 * Size:	000080
 */
void __sinit_ogObjKantei_cpp(void)
{
	/*
	lfs      f13, lbl_8051D958@sda21(r2)
	lis      r3, msVal__Q32og9newScreen9ObjKantei@ha
	lfs      f11, lbl_8051D950@sda21(r2)
	stfsu    f13, msVal__Q32og9newScreen9ObjKantei@l(r3)
	lfs      f8, lbl_8051D964@sda21(r2)
	lfs      f12, lbl_8051D948@sda21(r2)
	lfs      f10, lbl_8051D95C@sda21(r2)
	lfs      f9, lbl_8051D960@sda21(r2)
	lfs      f7, lbl_8051D968@sda21(r2)
	lfs      f6, lbl_8051D96C@sda21(r2)
	lfs      f5, lbl_8051D938@sda21(r2)
	lfs      f4, lbl_8051D970@sda21(r2)
	lfs      f3, lbl_8051D93C@sda21(r2)
	lfs      f2, lbl_8051D974@sda21(r2)
	lfs      f1, lbl_8051D978@sda21(r2)
	lfs      f0, lbl_8051D97C@sda21(r2)
	stfs     f12, 4(r3)
	stfs     f11, 8(r3)
	stfs     f10, 0xc(r3)
	stfs     f9, 0x10(r3)
	stfs     f8, 0x14(r3)
	stfs     f7, 0x18(r3)
	stfs     f6, 0x1c(r3)
	stfs     f5, 0x20(r3)
	stfs     f4, 0x24(r3)
	stfs     f3, 0x28(r3)
	stfs     f2, 0x2c(r3)
	stfs     f8, 0x30(r3)
	stfs     f11, 0x34(r3)
	stfs     f1, 0x38(r3)
	stfs     f0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80319BD4
 * Size:	000008
 */
//@24 @og::newScreen::ObjKantei::~ObjKantei(void)
//{
/*
addi     r3, r3, -24
b        __dt__Q32og9newScreen9ObjKanteiFv
*/
//}
