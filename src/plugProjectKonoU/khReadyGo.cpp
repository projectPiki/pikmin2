#include "kh/ReadyGo.h"
#include "kh/FinalFloor.h"
#include "kh/khUtil.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"
#include "SoundID.h"
#include "utilityU.h"
#include "efx2d/T2DGo.h"
#include "Game/GameSystem.h"

static const char pad[] = { "\0\0\0\0\0\0\0\0" };
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80401268
 * Size:	0000A4
 */
bool ObjReadyGo::doUpdateFadein()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(61, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());

	if (disp->m_gameType == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_READYGO_BATTLE_COME, 0);
	} else {
		PSSystem::spSysIF->playSystemSe(PSSE_READYGO_CHALLENGE_COME, 0);
	}
	return true;
}

/*
 * --INFO--
 * Address:	8040130C
 * Size:	0001D4
 */
void ObjReadyGo::doCreate(JKRArchive* arc)
{
	char* nameList[2][3]
	    = { "ready_go.blo", "ready_go.bck", "ready_go.bpk", "ready_go_reverse.blo", "ready_go_reverse.bck", "ready_go_reverse.bpk" };

	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(89, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	if (disp->m_is2Player) {
		m_screenNum  = 2;
		m_yOffset[0] = msVal.m_yOffsetP1;
		m_yOffset[1] = msVal.m_yOffsetP2;
	}

	for (int i = 0; i < m_screenNum; i++) {
		m_screen[i] = new P2DScreen::Mgr_tuning;
		m_screen[i]->set(nameList[i][0], 0x40000, arc);
		void* file = JKRFileLoader::getGlbResource(nameList[i][1], arc);
		m_anim1[i] = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

		file       = JKRFileLoader::getGlbResource(nameList[i][2], arc);
		m_anim2[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));

		m_screen[i]->setAnimation(m_anim1[i]);
		m_screen[i]->setAnimation(m_anim2[i]);
	}

	getOwner()->setColorBG(0, 0, 0, 160);

	if (disp->m_gameType == 0) {
		PSStart2DStream(0xc0011022);
	} else {
		PSStart2DStream(0xc0011023);
	}

	/*
stwu     r1, -0x40(r1)
mflr     r0
lis      r5, lbl_80498670@ha
stw      r0, 0x44(r1)
stmw     r26, 0x28(r1)
addi     r29, r5, lbl_80498670@l
mr       r31, r4
mr       r30, r3
lwz      r8, 0xa4(r29)
lwz      r7, 0xa8(r29)
lwz      r6, 0xac(r29)
lwz      r5, 0xb0(r29)
lwz      r4, 0xb4(r29)
lwz      r0, 0xb8(r29)
stw      r8, 8(r1)
stw      r7, 0xc(r1)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r4, 0x18(r1)
stw      r0, 0x1c(r1)
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x595F474F@ha
lis      r5, 0x52454144@ha
addi     r6, r4, 0x595F474F@l
li       r4, 0x4b48
addi     r5, r5, 0x52454144@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_80401394
addi     r3, r29, 0xc
addi     r5, r29, 0x1c
li       r4, 0x59
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80401394:
mr       r3, r30
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r29, r3
lbz      r0, 0xc(r3)
cmplwi   r0, 0
beq      lbl_804013CC
li       r0, 2
lis      r3, msVal__Q32kh6Screen10ObjReadyGo@ha
stw      r0, 0x6c(r30)
addi     r3, r3, msVal__Q32kh6Screen10ObjReadyGo@l
lfs      f0, 4(r3)
stfs     f0, 0x60(r30)
lfs      f0, 8(r3)
stfs     f0, 0x64(r30)

lbl_804013CC:
mr       r28, r30
addi     r27, r1, 8
li       r26, 0
b        lbl_80401470

lbl_804013DC:
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_804013F4
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_804013F4:
stw      r0, 0x38(r28)
mr       r6, r31
lwz      r4, 0(r27)
lis      r5, 4
lwz      r3, 0x38(r28)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, 4(r27)
mr       r4, r31
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r28)
mr       r4, r31
lwz      r3, 8(r27)
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x48(r28)
lwz      r3, 0x38(r28)
lwz      r4, 0x40(r28)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r28)
lwz      r4, 0x48(r28)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
addi     r28, r28, 4
addi     r27, r27, 0xc
addi     r26, r26, 1

lbl_80401470:
lwz      r0, 0x6c(r30)
cmpw     r26, r0
blt      lbl_804013DC
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0xa0
bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lwz      r0, 0x10(r29)
cmpwi    r0, 0
bne      lbl_804014C0
lis      r3, 0xC0011022@ha
addi     r3, r3, 0xC0011022@l
bl       PSStart2DStream__FUl
b        lbl_804014CC

lbl_804014C0:
lis      r3, 0xC0011023@ha
addi     r3, r3, 0xC0011023@l
bl       PSStart2DStream__FUl

lbl_804014CC:
lmw      r26, 0x28(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	804014E0
 * Size:	000020
 */
bool ObjReadyGo::doUpdate() { return updateAnimation(); }

/*
 * --INFO--
 * Address:	80401500
 * Size:	0000DC
 */
void ObjReadyGo::doDraw(Graphics& gfx)
{
	gfx.m_orthoGraph.setPort();

	for (int i = 0; i < m_screenNum; i++) {
		m_screen[i]->search('ROOT')->setOffset(0.0f, m_yOffset[i]);
		m_screen[i]->draw(gfx, gfx.m_orthoGraph);
	}
}

/*
 * --INFO--
 * Address:	804015DC
 * Size:	00018C
 */
bool ObjReadyGo::doUpdateFadeout()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(159, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	if (disp->m_isFinalFloor) {
		DispFinalFloor disp2;
		disp2.m_is2Player = disp->m_is2Player;
		::Screen::SetSceneArg arg(SCENE_FINAL_FLOOR, &disp2, 0, true);
		arg._09 = false;

		if (getOwner()->setScene(arg)) {
			getOwner()->startScene(nullptr);
		}
	} else {
		if (getOwner()->setBackupScene()) {
			getOwner()->startScene(nullptr);
		}
	}

	getOwner()->setColorBG(0, 0, 0, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80401768
 * Size:	000384
 */
bool ObjReadyGo::updateAnimation()
{
	bool done = false;
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(195, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	f32 goalTime1     = 60.0f;
	f32 goalTime2     = 78.0f;

	for (int i = 0; i < m_screenNum; i++) {
		m_anim1[i]->m_currentFrame = m_animTime1[i];
		m_anim2[i]->m_currentFrame = m_animTime2[i];
		m_screen[i]->animation();
		m_animTime1[i] += msVal.m_animSpeed;
		m_animTime2[i] += msVal.m_animSpeed;

		if (m_animTime1[i] >= m_anim1[i]->m_maxFrame - 2 || m_animTime2[i] >= m_anim2[i]->m_maxFrame - 2) {
			done = true;
		}

		if (m_animTime1[i] > goalTime1 && !m_makeEfx[i]) {
			m_makeEfx[i] = true;

			efx2d::Arg arg(Vector2f(getPaneCenterX(m_screen[i]->search('NALL')) + msVal.m_efxOffsetX,
			                        getPaneCenterY(m_screen[i]->search('NALL')) + msVal.m_efxOffsetY));

			if (disp->m_gameType == 0) {
				efx2d::T2DGoBatl efx;
				efx.create(&arg);
			} else {
				efx2d::T2DGoChal efx;
				efx.create(&arg);
			}
		}

		if (m_animTime1[i] >= goalTime2) {
			m_isAnimComplete = true;
			disp->m_status   = 1;
		}
	}

	if (m_isAnimComplete && !m_isOver && !disp->m_isFinalFloor) {
		Game::gameSystem->m_section->startMainBgm();
		m_isOver = true;
	}
	return done;

	/*
stwu     r1, -0xc0(r1)
mflr     r0
stw      r0, 0xc4(r1)
stfd     f31, 0xb0(r1)
psq_st   f31, 184(r1), 0, qr0
stfd     f30, 0xa0(r1)
psq_st   f30, 168(r1), 0, qr0
stfd     f29, 0x90(r1)
psq_st   f29, 152(r1), 0, qr0
stfd     f28, 0x80(r1)
psq_st   f28, 136(r1), 0, qr0
stmw     r25, 0x64(r1)
mr       r25, r3
li       r27, 0
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x595F474F@ha
lis      r5, 0x52454144@ha
addi     r6, r4, 0x595F474F@l
li       r4, 0x4b48
addi     r5, r5, 0x52454144@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804017E0
lis      r3, lbl_8049867C@ha
lis      r5, lbl_8049868C@ha
addi     r3, r3, lbl_8049867C@l
li       r4, 0xc3
addi     r5, r5, lbl_8049868C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804017E0:
mr       r3, r25
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, msVal__Q32kh6Screen10ObjReadyGo@ha
lfd      f29, lbl_80520068@sda21(r2)
lfs      f30, lbl_8052005C@sda21(r2)
mr       r29, r3
lfs      f31, lbl_80520060@sda21(r2)
mr       r28, r25
addi     r30, r4, msVal__Q32kh6Screen10ObjReadyGo@l
li       r26, 0
lis      r31, 0x4330
b        lbl_80401A64

lbl_80401810:
lfs      f0, 0x50(r28)
lwz      r3, 0x40(r28)
stfs     f0, 8(r3)
lfs      f0, 0x58(r28)
lwz      r3, 0x48(r28)
stfs     f0, 8(r3)
lwz      r3, 0x38(r28)
bl       animation__9J2DScreenFv
lfs      f1, 0x50(r28)
lfs      f0, 0(r30)
stw      r31, 0x58(r1)
fadds    f0, f1, f0
stfs     f0, 0x50(r28)
lfs      f1, 0x58(r28)
lfs      f0, 0(r30)
fadds    f0, f1, f0
stfs     f0, 0x58(r28)
lwz      r3, 0x40(r28)
lfs      f2, 0x50(r28)
lha      r3, 6(r3)
addi     r0, r3, -2
xoris    r0, r0, 0x8000
stw      r0, 0x5c(r1)
lfd      f0, 0x58(r1)
fsubs    f0, f0, f29
fcmpo    cr0, f2, f0
cror     2, 1, 2
beq      lbl_804018B4
lwz      r3, 0x48(r28)
lis      r0, 0x4330
stw      r0, 0x58(r1)
lha      r3, 6(r3)
lfs      f1, 0x58(r28)
addi     r0, r3, -2
xoris    r0, r0, 0x8000
stw      r0, 0x5c(r1)
lfd      f0, 0x58(r1)
fsubs    f0, f0, f29
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_804018B8

lbl_804018B4:
li       r27, 1

lbl_804018B8:
fcmpo    cr0, f2, f30
ble      lbl_80401A40
addi     r4, r26, 0x68
lbzx     r0, r25, r4
cmplwi   r0, 0
bne      lbl_80401A40
li       r0, 1
lis      r3, 0x4E414C4C@ha
stbx     r0, r25, r4
addi     r6, r3, 0x4E414C4C@l
li       r5, 0
lwz      r3, 0x38(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lwz      r3, 0x38(r28)
lis      r4, 0x4E414C4C@ha
lfs      f0, 0x10(r30)
addi     r6, r4, 0x4E414C4C@l
lwz      r12, 0(r3)
li       r5, 0
fadds    f28, f0, f1
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lfs      f0, 0xc(r30)
lis      r3, __vt__Q25efx2d3Arg@ha
stfs     f28, 0x14(r1)
addi     r0, r3, __vt__Q25efx2d3Arg@l
fadds    f0, f0, f1
lwz      r3, 0x14(r1)
stw      r0, 0x20(r1)
stfs     f0, 0x10(r1)
lwz      r0, 0x10(r1)
stw      r3, 0xc(r1)
stw      r0, 8(r1)
lfs      f0, 0xc(r1)
lfs      f1, 8(r1)
stfs     f0, 0x1c(r1)
stfs     f1, 0x18(r1)
lwz      r0, 0x10(r29)
cmpwi    r0, 0
bne      lbl_804019E0
lis      r3, __vt__Q25efx2d7TBaseIF@ha
li       r8, 0
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lis      r3, __vt__Q25efx2d5TBase@ha
stw      r0, 0x38(r1)
addi     r0, r3, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d8TSimple3@ha
lis      r3, __vt__Q25efx2d9T2DGoBatl@ha
stw      r0, 0x38(r1)
addi     r0, r4, __vt__Q25efx2d8TSimple3@l
li       r7, 0xd
li       r6, 0xe
stw      r0, 0x38(r1)
addi     r0, r3, __vt__Q25efx2d9T2DGoBatl@l
li       r5, 0xf
addi     r3, r1, 0x38
stb      r8, 0x3c(r1)
addi     r4, r1, 0x18
stb      r8, 0x3d(r1)
sth      r7, 0x40(r1)
sth      r6, 0x42(r1)
sth      r5, 0x44(r1)
stw      r8, 0x48(r1)
stw      r8, 0x4c(r1)
stw      r8, 0x50(r1)
stw      r0, 0x38(r1)
bl       create__Q25efx2d8TSimple3FPQ25efx2d3Arg
b        lbl_80401A40

lbl_804019E0:
lis      r3, __vt__Q25efx2d7TBaseIF@ha
li       r7, 0
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lis      r3, __vt__Q25efx2d5TBase@ha
stw      r0, 0x24(r1)
addi     r0, r3, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d8TSimple2@ha
lis      r3, __vt__Q25efx2d9T2DGoChal@ha
stw      r0, 0x24(r1)
addi     r0, r4, __vt__Q25efx2d8TSimple2@l
li       r6, 0x10
li       r5, 0x11
stw      r0, 0x24(r1)
addi     r0, r3, __vt__Q25efx2d9T2DGoChal@l
addi     r3, r1, 0x24
addi     r4, r1, 0x18
stb      r7, 0x28(r1)
stb      r7, 0x29(r1)
sth      r6, 0x2c(r1)
sth      r5, 0x2e(r1)
stw      r7, 0x30(r1)
stw      r7, 0x34(r1)
stw      r0, 0x24(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg

lbl_80401A40:
lfs      f0, 0x50(r28)
fcmpo    cr0, f0, f31
cror     2, 1, 2
bne      lbl_80401A5C
li       r0, 1
stb      r0, 0x6a(r25)
stw      r0, 8(r29)

lbl_80401A5C:
addi     r28, r28, 4
addi     r26, r26, 1

lbl_80401A64:
lwz      r0, 0x6c(r25)
cmpw     r26, r0
blt      lbl_80401810
lbz      r0, 0x6a(r25)
cmplwi   r0, 0
beq      lbl_80401AB4
lbz      r0, 0x6b(r25)
cmplwi   r0, 0
bne      lbl_80401AB4
lbz      r0, 0xd(r29)
cmplwi   r0, 0
bne      lbl_80401AB4
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r3, 0x58(r3)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0x6b(r25)

lbl_80401AB4:
mr       r3, r27
psq_l    f31, 184(r1), 0, qr0
lfd      f31, 0xb0(r1)
psq_l    f30, 168(r1), 0, qr0
lfd      f30, 0xa0(r1)
psq_l    f29, 152(r1), 0, qr0
lfd      f29, 0x90(r1)
psq_l    f28, 136(r1), 0, qr0
lfd      f28, 0x80(r1)
lmw      r25, 0x64(r1)
lwz      r0, 0xc4(r1)
mtlr     r0
addi     r1, r1, 0xc0
blr
	*/
}

/*
 * --INFO--
 * Address:	80401AEC
 * Size:	000040
 */
bool SceneReadyGo::doConfirmSetScene(::Screen::SetSceneArg& arg) { return arg.getSceneType() != SCENE_PAUSE_MENU; }

ObjReadyGo::StaticValues ObjReadyGo::msVal;

} // namespace Screen
} // namespace kh
