#include "kh/WinLose.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "kh/khUtil.h"
#include "JSystem/JKR/JKRArchive.h"
#include "utilityU.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_khWinLose_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499358
    lbl_80499358:
        .asciz "khWinLose.cpp"
        .skip 2
    .global lbl_80499368
    lbl_80499368:
        .asciz "lose.blo"
        .skip 3
    .global lbl_80499374
    lbl_80499374:
        .asciz "lose.bck"
        .skip 3
    .global lbl_80499380
    lbl_80499380:
        .asciz "lose.bpk"
        .skip 3
    .global lbl_8049938C
    lbl_8049938C:
        .asciz "time_up.blo"
    .global lbl_80499398
    lbl_80499398:
        .asciz "time_up.bck"
    .global lbl_804993A4
    lbl_804993A4:
        .asciz "time_up.bpk"
        .4byte lbl_8052020C
        .4byte lbl_80520214
        .4byte lbl_8052021C
        .4byte lbl_80499368
        .4byte lbl_80499374
        .4byte lbl_80499380
        .4byte lbl_8049938C
        .4byte lbl_80499398
        .4byte lbl_804993A4
    .global lbl_804993D4
    lbl_804993D4:
        .asciz "win_wait.blo"
        .skip 3
    .global lbl_804993E4
    lbl_804993E4:
        .asciz "win_wait.bck"
        .skip 3
    .global lbl_804993F4
    lbl_804993F4:
        .asciz "win_wait.bpk"
        .skip 3
    .global lbl_80499404
    lbl_80499404:
        .asciz "lose_wait.blo"
        .skip 2
    .global lbl_80499414
    lbl_80499414:
        .asciz "lose_wait.bck"
        .skip 2
    .global lbl_80499424
    lbl_80499424:
        .asciz "lose_wait.bpk"
        .skip 2
    .global lbl_80499434
    lbl_80499434:
        .asciz "time_up_wait.blo"
        .skip 3
    .global lbl_80499448
    lbl_80499448:
        .asciz "time_up_wait.bck"
        .skip 3
    .global lbl_8049945C
    lbl_8049945C:
        .asciz "time_up_wait.bpk"
        .skip 3
    .global lbl_80499470
    lbl_80499470:
        .asciz "draw.blo"
        .skip 3
    .global lbl_8049947C
    lbl_8049947C:
        .asciz "draw.bck"
        .skip 3
    .global lbl_80499488
    lbl_80499488:
        .asciz "draw.bpk"
        .skip 3
        .4byte lbl_804993D4
        .4byte lbl_804993E4
        .4byte lbl_804993F4
        .4byte lbl_80499404
        .4byte lbl_80499414
        .4byte lbl_80499424
        .4byte lbl_80499434
        .4byte lbl_80499448
        .4byte lbl_8049945C
        .4byte lbl_80499470
        .4byte lbl_8049947C
        .4byte lbl_80499488
    .global lbl_804994C4
    lbl_804994C4:
        .asciz "disp member err"
        .asciz "screenObj.h"
        .asciz "P2Assert"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32kh6Screen10ObjWinLose
    __vt__Q32kh6Screen10ObjWinLose:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen10ObjWinLoseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32kh6Screen10ObjWinLoseFv"
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
        .4byte doStart__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32kh6Screen10ObjWinLoseFP10JKRArchive
        .4byte doUpdateFadein__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
        .4byte doUpdate__Q32kh6Screen10ObjWinLoseFv
        .4byte doUpdateFinish__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeout__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q32kh6Screen10ObjWinLoseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32kh6Screen10ObjWinLose
    msVal__Q32kh6Screen10ObjWinLose:
        .skip 0x1C

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520208
    lbl_80520208:
        .float 0.0
    .global lbl_8052020C
    lbl_8052020C:
        .asciz "win.blo"
    .global lbl_80520214
    lbl_80520214:
        .asciz "win.bck"
    .global lbl_8052021C
    lbl_8052021C:
        .asciz "win.bpk"
    .global lbl_80520224
    lbl_80520224:
        .float 1.0
    .global lbl_80520228
    lbl_80520228:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520230
    lbl_80520230:
        .4byte 0xC2F00000
    .global lbl_80520234
    lbl_80520234:
        .4byte 0x42F00000
    .global lbl_80520238
    lbl_80520238:
        .4byte 0x42700000
        .4byte 0x00000000

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
    .global lbl_80520ED0
    lbl_80520ED0:
        .skip 0x4
    .global lbl_80520ED4
    lbl_80520ED4:
        .skip 0x4
*/

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040FCE8
 * Size:	0000B8
 */
ObjWinLose::ObjWinLose()
{
	m_screenA[0]   = nullptr;
	m_screenB[0]   = nullptr;
	m_anim1[0]     = nullptr;
	m_anim2[0]     = nullptr;
	m_anim3[0]     = nullptr;
	m_anim4[0]     = nullptr;
	m_animTime4[0] = 0.0f;
	m_animTime3[0] = 0.0f;
	m_animTime2[0] = 0.0f;
	m_animTime1[0] = 0.0f;
	m_yOffset[0]   = 0.0f;

	m_screenA[1]   = nullptr;
	m_screenB[1]   = nullptr;
	m_anim1[1]     = nullptr;
	m_anim2[1]     = nullptr;
	m_anim3[1]     = nullptr;
	m_anim4[1]     = nullptr;
	m_animTime4[1] = 0.0f;
	m_animTime3[1] = 0.0f;
	m_animTime2[1] = 0.0f;
	m_animTime1[1] = 0.0f;
	m_yOffset[1]   = 0.0f;

	m_doUpdateAnim = false;
	m_frameTimer   = 0;
	m_screenNum    = 2;
	m_alpha        = 0;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__Q26Screen7ObjBaseFv
lis      r3, __vt__Q32kh6Screen10ObjWinLose@ha
li       r4, 0
addi     r3, r3, __vt__Q32kh6Screen10ObjWinLose@l
lfs      f0, lbl_80520208@sda21(r2)
stw      r3, 0(r31)
addi     r5, r3, 0x10
li       r0, 2
mr       r3, r31
stw      r5, 0x18(r31)
stw      r4, 0x38(r31)
stw      r4, 0x40(r31)
stw      r4, 0x48(r31)
stw      r4, 0x50(r31)
stw      r4, 0x58(r31)
stw      r4, 0x60(r31)
stfs     f0, 0x80(r31)
stfs     f0, 0x78(r31)
stfs     f0, 0x70(r31)
stfs     f0, 0x68(r31)
stfs     f0, 0x88(r31)
stw      r4, 0x3c(r31)
stw      r4, 0x44(r31)
stw      r4, 0x4c(r31)
stw      r4, 0x54(r31)
stw      r4, 0x5c(r31)
stw      r4, 0x64(r31)
stfs     f0, 0x84(r31)
stfs     f0, 0x7c(r31)
stfs     f0, 0x74(r31)
stfs     f0, 0x6c(r31)
stfs     f0, 0x8c(r31)
stb      r4, 0x90(r31)
stw      r4, 0x94(r31)
stw      r0, 0x98(r31)
stb      r4, 0x9c(r31)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040FDA0
 * Size:	000418
 */
void ObjWinLose::doCreate(JKRArchive* arc)
{
	const char* nameList[7 * 3]
	    = { "win.blo",       "win.bck",          "win.bpk",          "lose.blo",         "lose.bck",     "lose.bpk",      "time_up.blo",
		    "time_up.bck",   "time_up.bpk",      "win_wait.blo",     "win_wait.bck",     "win_wait.bpk", "lose_wait.blo", "lose_wait.bck",
		    "lose_wait.bpk", "time_up_wait.blo", "time_up_wait.bck", "time_up_wait.bpk", "draw.blo",     "draw.bck",      "draw.bpk" };
	const int arg[2];

	if (!getDispMember()->isID(OWNER_KH, MEMBER_WIN_LOSE)) {
		JUT_PANICLINE(79, "disp member err");
	}

	DispWinLose* disp = static_cast<DispWinLose*>(getDispMember());
	switch (disp->m_outcome) {
	case WinPlayer1:
		arg[0] = 0;
		arg[1] = 1;
		break;
	case WinPlayer2:
		arg[0] = 1;
		arg[1] = 0;
		break;
	case Draw: // draw
		arg[0] = 3;
		arg[1] = 3;
		break;
	case Timeup1P: // time out 1p
		arg[0]      = 2;
		arg[1]      = -1;
		m_screenNum = 1;
		break;
	case Timeup2P: // time out 2p
		arg[0] = 2;
		arg[1] = 2;
		break;
	}

	for (int i = 0; i < m_screenNum; i++) {
		if (disp->m_outcome != Draw) {
			m_screenA[i] = new P2DScreen::Mgr_tuning;
			m_screenA[i]->set(nameList[3 * arg[i]], 0x40000, arc);

			void* file = JKRFileLoader::getGlbResource(nameList[3 * arg[i] + 1], arc);
			m_anim1[i] = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

			file       = JKRFileLoader::getGlbResource(nameList[3 * arg[i] + 2], arc);
			m_anim3[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
			m_screenA[i]->setAnimation(m_anim1[i]);
			m_screenA[i]->setAnimation(m_anim3[i]);

		} else {
			m_doUpdateAnim = true;
		}

		m_screenB[i] = new P2DScreen::Mgr_tuning;
		m_screenB[i]->set(nameList[3 * arg[i]], 0x40000, arc);

		void* file = JKRFileLoader::getGlbResource(nameList[3 * arg[i] + 1], arc);
		m_anim2[i] = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

		file       = JKRFileLoader::getGlbResource(nameList[3 * arg[i] + 2], arc);
		m_anim4[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
		m_screenB[i]->setAnimation(m_anim2[i]);
		m_screenB[i]->setAnimation(m_anim4[i]);

		setInfAlpha(m_screenB[i]->search('ROOT'));
		m_screenB[i]->search('ROOT')->setAlpha(m_alpha);
	}

	if (m_screenNum == 2) {
		m_yOffset[0] = msVal._04;
		m_yOffset[1] = msVal._08;
	}

	getOwner()->setColorBG(0, 0, 0, 160);
	switch (disp->m_outcome) {
	case Timeup1P:
	case Timeup2P:
		PSStartChallengeTimeUpStream();
		break;
	}

	/*
stwu     r1, -0xb0(r1)
mflr     r0
lis      r6, lbl_80499358@ha
stw      r0, 0xb4(r1)
stmw     r16, 0x70(r1)
addi     r30, r6, lbl_80499358@l
mr       r26, r4
mr       r25, r3
lwz      r5, lbl_80520ED0@sda21(r2)
lwz      r0, lbl_80520ED4@sda21(r2)
lwz      r16, 0x58(r30)
lwz      r17, 0x5c(r30)
lwz      r18, 0x60(r30)
lwz      r19, 0x64(r30)
lwz      r20, 0x68(r30)
lwz      r21, 0x6c(r30)
lwz      r22, 0x70(r30)
lwz      r23, 0x74(r30)
lwz      r31, 0x78(r30)
lwz      r29, 0x13c(r30)
lwz      r28, 0x140(r30)
lwz      r27, 0x144(r30)
lwz      r24, 0x148(r30)
lwz      r12, 0x14c(r30)
lwz      r11, 0x150(r30)
lwz      r10, 0x154(r30)
lwz      r9, 0x158(r30)
lwz      r8, 0x15c(r30)
lwz      r7, 0x160(r30)
lwz      r6, 0x164(r30)
lwz      r4, 0x168(r30)
stw      r16, 0x40(r1)
stw      r17, 0x44(r1)
stw      r18, 0x48(r1)
stw      r19, 0x4c(r1)
stw      r20, 0x50(r1)
stw      r21, 0x54(r1)
stw      r22, 0x58(r1)
stw      r23, 0x5c(r1)
stw      r31, 0x60(r1)
stw      r29, 0x10(r1)
stw      r28, 0x14(r1)
stw      r27, 0x18(r1)
stw      r24, 0x1c(r1)
stw      r12, 0x20(r1)
stw      r11, 0x24(r1)
stw      r10, 0x28(r1)
stw      r9, 0x2c(r1)
stw      r8, 0x30(r1)
stw      r7, 0x34(r1)
stw      r6, 0x38(r1)
stw      r4, 0x3c(r1)
stw      r5, 8(r1)
stw      r0, 0xc(r1)
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x4C4F5345@ha
lis      r5, 0x57494E5F@ha
addi     r6, r4, 0x4C4F5345@l
li       r4, 0x4b48
addi     r5, r5, 0x57494E5F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040FEB0
addi     r3, r30, 0
addi     r5, r30, 0x16c
li       r4, 0x4f
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040FEB0:
mr       r3, r25
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r30, r3
lwz      r0, 8(r3)
cmpwi    r0, 3
beq      lbl_8040FF14
bge      lbl_8040FEDC
cmpwi    r0, 1
beq      lbl_8040FEEC
bge      lbl_8040FF00
b        lbl_8040FF4C

lbl_8040FEDC:
cmpwi    r0, 5
beq      lbl_8040FF40
bge      lbl_8040FF4C
b        lbl_8040FF24

lbl_8040FEEC:
li       r3, 0
li       r0, 1
stw      r3, 8(r1)
stw      r0, 0xc(r1)
b        lbl_8040FF4C

lbl_8040FF00:
li       r3, 1
li       r0, 0
stw      r3, 8(r1)
stw      r0, 0xc(r1)
b        lbl_8040FF4C

lbl_8040FF14:
li       r0, 3
stw      r0, 8(r1)
stw      r0, 0xc(r1)
b        lbl_8040FF4C

lbl_8040FF24:
li       r4, 2
li       r3, -1
li       r0, 1
stw      r4, 8(r1)
stw      r3, 0xc(r1)
stw      r0, 0x98(r25)
b        lbl_8040FF4C

lbl_8040FF40:
li       r0, 2
stw      r0, 8(r1)
stw      r0, 0xc(r1)

lbl_8040FF4C:
mr       r29, r25
addi     r28, r1, 8
addi     r31, r1, 0x10
li       r27, 0
lis      r24, 0x524f
b        lbl_80410134

lbl_8040FF64:
lwz      r0, 8(r30)
cmpwi    r0, 3
beq      lbl_80410028
li       r3, 0x148
bl       __nw__FUl
or.      r5, r3, r3
beq      lbl_8040FF88
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r5, r3

lbl_8040FF88:
lwz      r0, 0(r28)
addi     r4, r1, 0x40
stw      r5, 0x38(r29)
mr       r6, r26
mulli    r0, r0, 0xc
lis      r5, 4
lwz      r3, 0x38(r29)
lwzx     r4, r4, r0
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r0, 0(r28)
addi     r3, r1, 0x40
mr       r4, r26
mulli    r5, r0, 0xc
addi     r0, r5, 4
lwzx     r3, r3, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
lwz      r0, 0(r28)
addi     r5, r1, 0x40
stw      r3, 0x48(r29)
mr       r4, r26
mulli    r3, r0, 0xc
addi     r0, r3, 8
lwzx     r3, r5, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x58(r29)
lwz      r3, 0x38(r29)
lwz      r4, 0x48(r29)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r29)
lwz      r4, 0x58(r29)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
b        lbl_80410030

lbl_80410028:
li       r0, 1
stb      r0, 0x90(r25)

lbl_80410030:
li       r3, 0x148
bl       __nw__FUl
or.      r4, r3, r3
beq      lbl_80410048
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r4, r3

lbl_80410048:
lwz      r0, 0(r28)
mr       r6, r26
stw      r4, 0x40(r29)
lis      r5, 4
mulli    r0, r0, 0xc
lwz      r3, 0x40(r29)
lwzx     r4, r31, r0
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r0, 0(r28)
mr       r4, r26
mulli    r3, r0, 0xc
addi     r0, r3, 4
lwzx     r3, r31, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
lwz      r0, 0(r28)
mr       r4, r26
stw      r3, 0x50(r29)
mulli    r3, r0, 0xc
addi     r0, r3, 8
lwzx     r3, r31, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x60(r29)
lwz      r3, 0x40(r29)
lwz      r4, 0x50(r29)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x40(r29)
lwz      r4, 0x60(r29)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
lwz      r3, 0x40(r29)
addi     r6, r24, 0x4f54
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
lwz      r3, 0x40(r29)
addi     r6, r24, 0x4f54
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lbz      r4, 0x9c(r25)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r29, r29, 4
addi     r28, r28, 4
addi     r27, r27, 1

lbl_80410134:
lwz      r0, 0x98(r25)
cmpw     r27, r0
blt      lbl_8040FF64
cmpwi    r0, 2
bne      lbl_80410160
lis      r3, msVal__Q32kh6Screen10ObjWinLose@ha
addi     r3, r3, msVal__Q32kh6Screen10ObjWinLose@l
lfs      f0, 4(r3)
stfs     f0, 0x88(r25)
lfs      f0, 8(r3)
stfs     f0, 0x8c(r25)

lbl_80410160:
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0xa0
bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lwz      r0, 8(r30)
cmpwi    r0, 6
bge      lbl_804101A4
cmpwi    r0, 4
bge      lbl_804101A0
b        lbl_804101A4

lbl_804101A0:
bl       PSStartChallengeTimeUpStream__Fv

lbl_804101A4:
lmw      r16, 0x70(r1)
lwz      r0, 0xb4(r1)
mtlr     r0
addi     r1, r1, 0xb0
blr
	*/
}

/*
 * --INFO--
 * Address:	804101B8
 * Size:	000020
 */
bool ObjWinLose::doUpdate() { return updateAnimation(); }

/*
 * --INFO--
 * Address:	804101D8
 * Size:	0000B8
 */
void ObjWinLose::doDraw(Graphics& gfx)
{
	gfx.m_orthoGraph.setPort();

	for (int i = 0; i < m_screenNum; i++) {
		if (m_screenA[i])
			m_screenA[i]->draw(gfx, gfx.m_orthoGraph);

		m_screenB[i]->draw(gfx, gfx.m_orthoGraph);
	}
}

/*
 * --INFO--
 * Address:	80410290
 * Size:	00038C
 */
bool ObjWinLose::updateAnimation()
{
	for (int i = 0; i < m_screenNum; i++) {
		if (m_screenA[i]) {
			m_anim1[i]->m_currentFrame = m_animTime1[i];
			m_anim3[i]->m_currentFrame = m_animTime3[i];
			m_screenA[i]->animation();
			m_animTime1[i] += msVal._00;
			m_animTime3[i] += msVal._00;

			if (m_animTime1[i] >= msVal._0C) {
				m_doUpdateAnim = true;
			}

			if (m_animTime1[i] >= m_anim1[i]->m_maxFrame || m_animTime3[i] >= m_anim3[i]->m_maxFrame) {
				m_animTime3[i] = 0.0f;
				m_animTime1[i] = 0.0f;
				m_screenA[i]->hide();
			}
			m_screenA[i]->search('ROOT')->add(0.0f, m_yOffset[i]);
		}

		if (m_doUpdateAnim) {
			m_anim2[i]->m_currentFrame = m_animTime2[i];
			m_anim4[i]->m_currentFrame = m_animTime4[i];
			m_screenB[i]->animation();
			m_animTime2[i] += 1.0f;
			m_animTime4[i] += 1.0f;

			if (m_animTime2[i] >= m_anim2[i]->m_maxFrame) {
				m_animTime2[i] = 0.0f;
			}
			if (m_animTime4[i] >= m_anim4[i]->m_maxFrame) {
				m_animTime4[i] = 0.0f;
			}
			m_screenB[i]->search('ROOT')->setOffset(0.0f, m_yOffset[i]);
			m_screenB[i]->search('ROOT')->setAlpha(m_alpha);
			if (m_alpha < 255 - msVal._18) {
				m_alpha += msVal._18;
			} else {
				m_alpha = 255;
			}
		}
	}

	if (!getDispMember()->isID(OWNER_KH, MEMBER_WIN_LOSE)) {
		JUT_PANICLINE(276, "disp member err");
	}

	DispWinLose* disp = static_cast<DispWinLose*>(getDispMember());
	int old           = m_frameTimer + 1;
	m_frameTimer      = old;
	if (old > msVal._14) {
		disp->_0C = 3;
		PSStop2DStream();
		PSMuteOffSE_on2D();
	} else if (m_frameTimer > msVal._10) {
		disp->_0C = 2;
	}
	return false;
}

ObjWinLose::StaticValues ObjWinLose::msVal;

} // namespace Screen
} // namespace kh
