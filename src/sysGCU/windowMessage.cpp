#include "P2JME/messageObj.h"
#include "P2JME/P2JME.h"
#include "System.h"
#include "Game/MoviePlayer.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"

static const char idk[] = "\0\0\0\0\0\0\0\0\0";

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_windowMessage_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049ACA8
    lbl_8049ACA8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8049ACB4
    lbl_8049ACB4:
        .4byte 0x77696E64
        .4byte 0x6F774D65
        .4byte 0x73736167
        .4byte 0x652E6370
        .4byte 0x70000000
    .global lbl_8049ACC8
    lbl_8049ACC8:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x44726177
        .4byte 0x496E666F
        .4byte 0x4D67723A
        .4byte 0x3A696E69
        .4byte 0x74000000
    .global lbl_8049ACE8
    lbl_8049ACE8:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .4byte 0x6D657373
        .4byte 0x6167654F
        .4byte 0x626A2E68
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ECC50
    lbl_804ECC50:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q35P2JME6Window8TControl
    __vt__Q35P2JME6Window8TControl:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME6Window8TControlFv
        .4byte reset__Q35P2JME6Window8TControlFv
        .4byte update__Q25P2JME8TControlFv
        .4byte update__Q35P2JME6Window8TControlFP10ControllerP10Controller
        .4byte draw__Q35P2JME6Window8TControlFR8Graphics
        .4byte draw__Q35P2JME6Window8TControlFPA4_fPA4_f
        .4byte setMessageID__Q25P2JME8TControlFUlUl
        .4byte setMessageID__Q25P2JME8TControlFPc
        .4byte setMessageID__Q25P2JME8TControlFUx
        .4byte setMessageCode__Q25P2JME8TControlFUsUs
        .4byte setMessageCode__Q25P2JME8TControlFUl
        .4byte onInit__Q35P2JME6Window8TControlFv
        .4byte createReference__Q25P2JME8TControlFv
        .4byte createResourceContainer__Q25P2JME8TControlFv
        .4byte createSequenceProcessor__Q35P2JME6Window8TControlFv
        .4byte createRenderingProcessor__Q35P2JME6Window8TControlFv
    .global __vt__Q35P2JME6Window19TRenderingProcessor
    __vt__Q35P2JME6Window19TRenderingProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME6Window19TRenderingProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME19TRenderingProcessorFi
        .4byte do_tag__Q25P2JME19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte do_select_begin__Q25P2JME19TRenderingProcessorFUl
        .4byte do_select_end__Q25P2JME19TRenderingProcessorFv
        .4byte do_select_separate__Q25P2JME19TRenderingProcessorFv
        .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
        .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end___Q28JMessage19TRenderingProcessorFv
        .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
        .4byte do_begin__Q25P2JME19TRenderingProcessorFPCvPCc
        .4byte do_end__Q28JMessage19TRenderingProcessorFv
        .4byte tagColor__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagSize__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagRuby__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagFont__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagImage__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagColorEX__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagControl__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagPosition__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte update__Q35P2JME6Window19TRenderingProcessorFv
        .4byte reset__Q35P2JME6Window19TRenderingProcessorFv
        .4byte newParagraph__Q25P2JME19TRenderingProcessorFv
        .4byte
   doDrawImage__Q35P2JME6Window19TRenderingProcessorFP10JUTTextureffff .4byte
   doDrawRuby__Q35P2JME6Window19TRenderingProcessorFffffib .4byte
   doDrawLetter__Q35P2JME6Window19TRenderingProcessorFffffib .4byte
   doTagControlAbtnWait__Q25P2JME19TRenderingProcessorFv .4byte
   doDrawCommon__Q35P2JME6Window19TRenderingProcessorFffP7MatrixfP7Matrixf
        .4byte
   "makeMatrix__Q35P2JME6Window19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>"
        .4byte
   doGetDrawInfo__Q35P2JME6Window19TRenderingProcessorFPQ35P2JME6Window8DrawInfo
    .global __vt__Q35P2JME6Window18TSequenceProcessor
    __vt__Q35P2JME6Window18TSequenceProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME6Window18TSequenceProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME18TSequenceProcessorFi
        .4byte do_tag__Q25P2JME18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode__Q25P2JME18TSequenceProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
        .4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
        .4byte do_end___Q28JMessage18TSequenceProcessorFv
        .4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
        .4byte do_begin__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_end__Q25P2JME18TSequenceProcessorFv
        .4byte do_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
        .4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
        .4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
        .4byte doCharacterSEStart__Q35P2JME6Window18TSequenceProcessorFv
        .4byte doCharacterSE__Q35P2JME6Window18TSequenceProcessorFi
        .4byte doCharacterSEEnd__Q35P2JME6Window18TSequenceProcessorFv
        .4byte doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv
        .4byte reset__Q25P2JME18TSequenceProcessorFv
    .global __vt__Q35P2JME6Window8DrawInfo
    __vt__Q35P2JME6Window8DrawInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME6Window8DrawInfoFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516288
    lbl_80516288:
        .skip 0x4
    .global lbl_8051628C
    lbl_8051628C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520920
    lbl_80520920:
        .4byte 0x00000000
    .global lbl_80520924
    lbl_80520924:
        .4byte 0x00000000
    .global lbl_80520928
    lbl_80520928:
        .float 0.5
    .global lbl_8052092C
    lbl_8052092C:
        .4byte 0x41F00000
    .global lbl_80520930
    lbl_80520930:
        .4byte 0x3FC90FDB
    .global lbl_80520934
    lbl_80520934:
        .4byte 0x437F0000
    .global lbl_80520938
    lbl_80520938:
        .4byte 0x41200000
    .global lbl_8052093C
    lbl_8052093C:
        .4byte 0x40A00000
    .global lbl_80520940
    lbl_80520940:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520948
    lbl_80520948:
        .4byte 0x41490FDB
    .global lbl_8052094C
    lbl_8052094C:
        .4byte 0x43A2F983
    .global lbl_80520950
    lbl_80520950:
        .float 1.0
    .global lbl_80520954
    lbl_80520954:
        .4byte 0x3F4CCCCD
    .global lbl_80520958
    lbl_80520958:
        .4byte 0x40000000
    .global lbl_8052095C
    lbl_8052095C:
        .4byte 0x40C90FDB
    .global lbl_80520960
    lbl_80520960:
        .4byte 0x40800000
    .global lbl_80520964
    lbl_80520964:
        .4byte 0x41700000
    .global lbl_80520968
    lbl_80520968:
        .4byte 0x40490FDB
    .global lbl_8052096C
    lbl_8052096C:
        .4byte 0x42480000
    .global lbl_80520970
    lbl_80520970:
        .4byte 0x43680000
        .4byte 0x00000000
*/

namespace P2JME {
namespace Window {
/*
 * --INFO--
 * Address:	8043F188
 * Size:	000050
 */
DrawInfo::DrawInfo()
    : CNode("")
{
	_18    = -1;
	mTimer = 0.0f;
	_20    = 0.5f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void DrawInfoMgr::init(u32 count)
{
	P2ASSERTLINE(158, !mInfoList2.getChildCount());
	P2ASSERTLINE(159, !mInfoList1.getChildCount());

	sys->heapStatusStart("DrawInfoMgr::init", nullptr);

	DrawInfo* info = new DrawInfo[count];
	for (int i = 0; i < count; i++) {
		mInfoList2.add(&info[i]);
	}

	sys->heapStatusEnd("DrawInfoMgr::init");
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void DrawInfoMgr::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void DrawInfoMgr::reset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F238
 * Size:	000030
 */
DrawInfo* DrawInfoMgr::searchDrawInfo(int id)
{
	DrawInfo* ret = nullptr;
	FOREACH_NODE(DrawInfo, mInfoList1.mChild, node)
	{
		if (id == (int)node->_18) {
			ret = node;
			break;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	8043F268
 * Size:	000060
 */
DrawInfo* DrawInfoMgr::getDrawInfo(int id)
{
	DrawInfo* node = static_cast<DrawInfo*>(mInfoList2.mChild);
	if (node) {
		node->_18    = id;
		node->mTimer = 0.0f;
		node->del();
		mInfoList1.add(node);
	}
	return node;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void DrawInfoMgr::releaseDrawInfo(DrawInfo* info)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F2C8
 * Size:	00003C
 */
TSequenceProcessor::TSequenceProcessor(JMessage::TReference* ref, JMessage::TControl* owner)
    : P2JME::TSequenceProcessor(ref, owner)
{
}

/*
 * --INFO--
 * Address:	8043F304
 * Size:	0000A4
 */
void TSequenceProcessor::doCharacterSE(int)
{
	if (((!Game::moviePlayer) || (Game::moviePlayer && !(Game::moviePlayer->isFlag(Game::MVP_IsFinished)))) && !mFlags.isSet(8)) {
		bool isfast        = isFastSE();
		PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
		mgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, isfast);
	}
}

/*
 * --INFO--
 * Address:	8043F3A8
 * Size:	00007C
 */
void TSequenceProcessor::doCharacterSEStart()
{
	if (((!Game::moviePlayer) || (Game::moviePlayer && !(Game::moviePlayer->isFlag(Game::MVP_IsFinished)))) && !mFlags.isSet(8)) {
		PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
		mgr->playMessageVoice(PSSE_MP_VOX_HEAD_A_FLAT, false);
	}
}

/*
 * --INFO--
 * Address:	8043F424
 * Size:	00007C
 */
void TSequenceProcessor::doCharacterSEEnd()
{
	if (((!Game::moviePlayer) || (Game::moviePlayer && !(Game::moviePlayer->isFlag(Game::MVP_IsFinished)))) && !mFlags.isSet(8)) {
		PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
		mgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
	}
}

/*
 * --INFO--
 * Address:	8043F4A0
 * Size:	00005C
 */
void TSequenceProcessor::doFastForwardSE()
{
	PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
	mgr->stopMessageVoice();
	PSSystem::spSysIF->playSystemSe(PSSE_MP_VOX_CANCEL, 0);
}

/*
 * --INFO--
 * Address:	8043F4FC
 * Size:	000060
 */
TRenderingProcessor::TRenderingProcessor(JMessage::TReference* ref)
    : P2JME::TRenderingProcessor(ref)
{
	mSpeed = 30.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void TRenderingProcessor::initDrawInfoMgr(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F55C
 * Size:	000344
 */
BOOL TRenderingProcessor::doDrawCommon(f32 a1, f32 a2, Matrixf* mtx1, Matrixf* mtx2)
{
	DrawInfo* info = nullptr;
	FOREACH_NODE(DrawInfo, mDrawInfo.mInfoList1.mChild, node)
	{
		if (_40 == node->_18) {
			info = node;
		}
	};

	f32 speed = mSpeed;
	if (-speed > a2) {
		f32 speed2 = _3C;
		f32 calc   = 0.0f;
		f32 calc2;
		if (speed + speed2 < a2) {

			if (a2 < 0.0f) {
				calc2 = calc;
				if (speed2 < a2) {
					calc2 = a2;
					if (a2 > 0.0f) {
						calc2 = a2 - speed2;
					}
					speed2   = 0.0f;
					speed2   = speed * speed - calc2 * calc2;
					speed2   = _sqrtf(speed2);
					speed2   = -speed2;
					speed    = JMath::atanTable_.atan2_(speed2, calc2);
					calc     = speed + HALF_PI;
					f32 what = calc2 / mSpeed * 255.0f;
					calc     = (what > 0.0f) ? what + 0.5f : what - 0.5f;
					calc2    = speed2 + mSpeed;
				}
			}
			if (!info) {
				info = (DrawInfo*)mDrawInfo.mInfoList1.mChild;
				if (info) {
					info->_18    = _40;
					info->mTimer = 0.0f;
					info->del();
					mDrawInfo.mInfoList1.add(info);
					doGetDrawInfo(info);
				}
			}

			Matrixf mtx;
			if (info) {
				Vector3f pos(a1, a2, calc2);
				makeMatrix(&mtx, info, calc, pos);
			} else {
				Vector3f pos(a1, a2, calc2);
				mtx.makeT(pos);
			}

			if (mtx2) {
				PSMTXCopy(mtx.mMatrix.mtxView, mtx2->mMatrix.mtxView);
				mtx2->mMatrix.structView.tx += 10.0f;
				mtx2->mMatrix.structView.ty += 5.0f;
				PSMTXConcat(mMtx1->mMatrix.mtxView, mtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView);
				PSMTXConcat(mMtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView);
			}
			PSMTXConcat(mMtx1->mMatrix.mtxView, mtx.mMatrix.mtxView, mtx.mMatrix.mtxView);
			PSMTXConcat(mMtx2->mMatrix.mtxView, mtx.mMatrix.mtxView, mtx.mMatrix.mtxView);
			if (mtx1) {
				PSMTXCopy(mtx.mMatrix.mtxView, mtx1->mMatrix.mtxView);
			} else {
				GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);
			}
		}
		return (int)(calc * _78);
	}

	return false;

	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stmw     r27, 0x7c(r1)
	mr       r29, r3
	fmr      f30, f1
	fmr      f31, f2
	lwz      r6, 0x40(r3)
	lwz      r3, 0x120(r3)
	mr       r30, r4
	mr       r31, r5
	li       r27, 0xff
	li       r28, 0
	b        lbl_8043F5D4

lbl_8043F5BC:
	lwz      r0, 0x18(r3)
	cmpw     r6, r0
	bne      lbl_8043F5D0
	mr       r28, r3
	b        lbl_8043F5DC

lbl_8043F5D0:
	lwz      r3, 4(r3)

lbl_8043F5D4:
	cmplwi   r3, 0
	bne      lbl_8043F5BC

lbl_8043F5DC:
	lfs      f1, 0x140(r29)
	fneg     f0, f1
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8043F830
	lfs      f2, 0x3c(r29)
	fadds    f0, f2, f1
	fcmpo    cr0, f31, f0
	bge      lbl_8043F830
	lfs      f0, lbl_80520924@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8043F624
	fcmpo    cr0, f31, f2
	bge      lbl_8043F624
	fmr      f28, f0
	fmr      f27, f0
	b        lbl_8043F6D8

lbl_8043F624:
	lfs      f0, lbl_80520924@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8043F638
	fmr      f28, f31
	b        lbl_8043F63C

lbl_8043F638:
	fsubs    f28, f31, f2

lbl_8043F63C:
	fmuls    f2, f28, f28
	lfs      f0, lbl_80520924@sda21(r2)
	fmsubs   f1, f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8043F660
	ble      lbl_8043F664
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8043F664

lbl_8043F660:
	fmr      f1, f0

lbl_8043F664:
	fneg     f29, f1
	lis      r3, atanTable___5JMath@ha
	fmr      f2, f28
	addi     r3, r3, atanTable___5JMath@l
	fmr      f1, f29
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f5, 0x140(r29)
	lfs      f4, lbl_80520930@sda21(r2)
	fdivs    f3, f28, f5
	lfs      f2, lbl_80520934@sda21(r2)
	lfs      f0, lbl_80520924@sda21(r2)
	fabs     f3, f3
	fadds    f27, f4, f1
	fadds    f28, f29, f5
	frsp     f1, f3
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8043F6BC
	lfs      f0, lbl_80520928@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8043F6C4

lbl_8043F6BC:
	lfs      f0, lbl_80520928@sda21(r2)
	fsubs    f0, f1, f0

lbl_8043F6C4:
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	subfic   r0, r0, 0xff
	clrlwi   r27, r0, 0x18

lbl_8043F6D8:
	cmplwi   r28, 0
	bne      lbl_8043F728
	lwz      r28, 0x138(r29)
	lwz      r0, 0x40(r29)
	cmplwi   r28, 0
	beq      lbl_8043F710
	stw      r0, 0x18(r28)
	mr       r3, r28
	lfs      f0, lbl_80520924@sda21(r2)
	stfs     f0, 0x1c(r28)
	bl       del__5CNodeFv
	mr       r4, r28
	addi     r3, r29, 0x110
	bl       add__5CNodeFP5CNode

lbl_8043F710:
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl

lbl_8043F728:
	cmplwi   r28, 0
	beq      lbl_8043F77C
	stfs     f30, 0x20(r1)
	mr       r3, r29
	fmr      f1, f27
	mr       r5, r28
	stfs     f31, 0x24(r1)
	addi     r4, r1, 0x2c
	lwz      r8, 0x20(r1)
	addi     r6, r1, 8
	stfs     f28, 0x28(r1)
	lwz      r7, 0x24(r1)
	lwz      r0, 0x28(r1)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	stw      r0, 0x10(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_8043F794

lbl_8043F77C:
	stfs     f30, 0x14(r1)
	addi     r3, r1, 0x2c
	addi     r4, r1, 0x14
	stfs     f31, 0x18(r1)
	stfs     f28, 0x1c(r1)
	bl       "makeT__7MatrixfFR10Vector3<f>"

lbl_8043F794:
	cmplwi   r31, 0
	beq      lbl_8043F7E8
	mr       r4, r31
	addi     r3, r1, 0x2c
	bl       PSMTXCopy
	lfs      f2, 0xc(r31)
	mr       r4, r31
	lfs      f1, lbl_80520938@sda21(r2)
	mr       r5, r31
	lfs      f3, 0x1c(r31)
	lfs      f0, lbl_8052093C@sda21(r2)
	fadds    f2, f2, f1
	fadds    f3, f3, f0
	stfs     f2, 0xc(r31)
	stfs     f3, 0x1c(r31)
	lwz      r3, 0x44(r29)
	bl       PSMTXConcat
	lwz      r3, 0x48(r29)
	mr       r4, r31
	mr       r5, r31
	bl       PSMTXConcat

lbl_8043F7E8:
	addi     r4, r1, 0x2c
	lwz      r3, 0x44(r29)
	mr       r5, r4
	bl       PSMTXConcat
	addi     r4, r1, 0x2c
	lwz      r3, 0x48(r29)
	mr       r5, r4
	bl       PSMTXConcat
	cmplwi   r30, 0
	beq      lbl_8043F820
	mr       r4, r30
	addi     r3, r1, 0x2c
	bl       PSMTXCopy
	b        lbl_8043F834

lbl_8043F820:
	addi     r3, r1, 0x2c
	li       r4, 0
	bl       GXLoadPosMtxImm
	b        lbl_8043F834

lbl_8043F830:
	li       r27, 0

lbl_8043F834:
	clrlwi   r3, r27, 0x18
	lis      r0, 0x4330
	stw      r3, 0x64(r1)
	lfd      f2, lbl_80520940@sda21(r2)
	stw      r0, 0x60(r1)
	lfs      f0, 0x78(r29)
	lfd      f1, 0x60(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r3, 0x6c(r1)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	lmw      r27, 0x7c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043F8A4
 * Size:	000284
 */
void TRenderingProcessor::makeMatrix(Matrixf* mtx, DrawInfo* info, f32 angle, Vector3f pos)
{
	switch (mMatrixType) {
	case 0: {
		f32 calc = info->getCalc();
		Vector3f scale(1.0f, -((1.0f - calc) * 0.8f * cosf(calc) - 1.0f), 1.0f);
		calc = info->getCalc();
		Vector3f rotate(angle, 0.0f, -((1.0f - calc) * HALF_PI * cosf(calc)));
		mtx->makeSRT(scale, rotate, pos);
		break;
	}
	case 1: {
		f32 calc = info->getCalc();
		Vector3f scale(fabs((1.0f - calc) * cosf(calc) * 2.0f * (1.0f - calc)) + 1.0f);
		Vector3f rotate(angle, 0.0f, 0.0f);
		mtx->makeSRT(scale, rotate, pos);
		break;
	}
	case 2: {
		f32 calc = info->getCalc();
		pos.y    = -(fabs(calc * cosf(calc) * 4.0f * calc) * 15.0f - pos.y);
		Vector3f scale(1.0f);
		Vector3f rotate(angle, 0.0f, 0.0f);
		mtx->makeSRT(scale, rotate, pos);
		break;
	}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  lbz       r0, 0xDC(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x11C
	  bge-      .loc_0x28
	  cmpwi     r0, 0
	  bge-      .loc_0x34
	  b         .loc_0x274

	.loc_0x28:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x274
	  b         .loc_0x1C4

	.loc_0x34:
	  lfs       f3, 0x1C(r5)
	  lfs       f0, 0x20(r5)
	  lfs       f2, 0x25E8(r2)
	  fdivs     f5, f3, f0
	  lfs       f0, 0x25C4(r2)
	  fmuls     f2, f2, f5
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x58
	  fneg      f2, f2

	.loc_0x58:
	  lfs       f0, 0x25EC(r2)
	  lis       r3, 0x8050
	  lfs       f4, 0x25F0(r2)
	  addi      r3, r3, 0x71A0
	  fmuls     f3, f2, f0
	  lfs       f2, 0x25F4(r2)
	  fsubs     f0, f4, f5
	  addi      r7, r3, 0x4
	  stfs      f4, 0x44(r1)
	  fctiwz    f5, f3
	  fmuls     f3, f2, f0
	  stfs      f4, 0x4C(r1)
	  lfs       f2, 0x25E8(r2)
	  stfd      f5, 0x50(r1)
	  lfs       f0, 0x25C4(r2)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f5, r7, r0
	  fnmsubs   f3, f3, f5, f4
	  stfs      f3, 0x48(r1)
	  lfs       f4, 0x1C(r5)
	  lfs       f3, 0x20(r5)
	  fdivs     f5, f4, f3
	  fmuls     f3, f2, f5
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xC4
	  fneg      f3, f3

	.loc_0xC4:
	  lfs       f2, 0x25EC(r2)
	  mr        r3, r4
	  lfs       f0, 0x25F0(r2)
	  addi      r4, r1, 0x44
	  fmuls     f4, f3, f2
	  stfs      f1, 0x38(r1)
	  lfs       f3, 0x25C4(r2)
	  fsubs     f0, f0, f5
	  lfs       f2, 0x25D0(r2)
	  addi      r5, r1, 0x38
	  fctiwz    f1, f4
	  stfs      f3, 0x3C(r1)
	  fmuls     f0, f2, f0
	  stfd      f1, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r7, r0
	  fmuls     f0, f0, f1
	  fneg      f0, f0
	  stfs      f0, 0x40(r1)
	  bl        -0x176E0
	  b         .loc_0x274

	.loc_0x11C:
	  lfs       f3, 0x1C(r5)
	  lfs       f0, 0x20(r5)
	  lfs       f2, 0x25FC(r2)
	  fdivs     f4, f3, f0
	  lfs       f3, 0x25F8(r2)
	  lfs       f0, 0x25C4(r2)
	  fmuls     f2, f2, f4
	  fmuls     f3, f3, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x148
	  fneg      f3, f3

	.loc_0x148:
	  lfs       f2, 0x25EC(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x25C4(r2)
	  addi      r7, r3, 0x71A0
	  fmuls     f2, f3, f2
	  stfs      f1, 0x20(r1)
	  lfs       f5, 0x25F0(r2)
	  mr        r3, r4
	  lfs       f3, 0x25F8(r2)
	  addi      r4, r1, 0x2C
	  fctiwz    f1, f2
	  stfs      f0, 0x24(r1)
	  fsubs     f4, f5, f4
	  addi      r5, r1, 0x20
	  stfs      f0, 0x28(r1)
	  stfd      f1, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r7, r7, r0
	  lfs       f0, 0x4(r7)
	  fmuls     f0, f3, f0
	  fmuls     f0, f0, f4
	  fmuls     f0, f4, f0
	  fabs      f0, f0
	  frsp      f0, f0
	  fadds     f0, f5, f0
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0x17788
	  b         .loc_0x274

	.loc_0x1C4:
	  lfs       f3, 0x1C(r5)
	  lfs       f0, 0x20(r5)
	  lfs       f2, 0x25FC(r2)
	  fdivs     f4, f3, f0
	  lfs       f3, 0x25F8(r2)
	  lfs       f0, 0x25C4(r2)
	  fmuls     f2, f2, f4
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x1F0
	  fneg      f2, f2

	.loc_0x1F0:
	  lfs       f0, 0x25EC(r2)
	  lis       r3, 0x8050
	  lfs       f7, 0x25F0(r2)
	  addi      r7, r3, 0x71A0
	  fmuls     f0, f2, f0
	  lfs       f3, 0x25C4(r2)
	  fsubs     f6, f7, f4
	  mr        r3, r4
	  lfs       f5, 0x2600(r2)
	  addi      r4, r1, 0x14
	  fctiwz    f4, f0
	  stfs      f1, 0x8(r1)
	  lfs       f2, 0x2604(r2)
	  addi      r5, r1, 0x8
	  lfs       f0, 0x4(r6)
	  stfd      f4, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  stfs      f7, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r7, r7, r0
	  stfs      f7, 0x18(r1)
	  lfs       f4, 0x4(r7)
	  stfs      f7, 0x1C(r1)
	  fmuls     f1, f5, f4
	  stfs      f3, 0xC(r1)
	  fmuls     f1, f1, f6
	  stfs      f3, 0x10(r1)
	  fmuls     f1, f6, f1
	  fabs      f1, f1
	  frsp      f1, f1
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x4(r6)
	  bl        -0x1783C

	.loc_0x274:
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043FB28
 * Size:	000188
 */
f32 TRenderingProcessor::doDrawLetter(f32, f32, f32 x, f32 y, int a1, bool flag)
{
	f32 wid;
	Matrixf mtx1;
	Matrixf mtx2;
	u8 ret = doDrawCommon(x, y, &mtx1, &mtx2);
	if (ret) {
		GXLoadPosMtxImm(mtx2.mMatrix.mtxView, 0);
		JUtility::TColor color(ret >> 1, ret, ret, ret);
		mMainFont->setGradColor(color, color);
		mMainFont->drawChar_scale(0.0f, 0.0f, x, y, a1, flag);
		GXLoadPosMtxImm(mtx1.mMatrix.mtxView, 0);
		mColorData[0].a = ret;
		mColorData[1].a = ret;
		JUtility::TColor color3;
		mMainFont->setGradColor(color, color3);
		wid = mMainFont->drawChar_scale(0.0f, 0.0f, x, y, a1, flag);
	} else {
		wid = calcWidth(mMainFont, a1, x, flag);
	}
	return wid;
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  lwz       r12, 0x0(r3)
	  mr        r29, r4
	  mr        r30, r5
	  fmr       f30, f3
	  lwz       r12, 0x84(r12)
	  fmr       f31, f4
	  mr        r28, r3
	  addi      r4, r1, 0x50
	  addi      r5, r1, 0x20
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  mr        r31, r3
	  beq-      .loc_0x140
	  addi      r3, r1, 0x20
	  li        r4, 0
	  bl        -0x35661C
	  li        r3, -0x1
	  rlwinm    r0,r31,31,25,31
	  stw       r3, 0x1C(r1)
	  li        r3, 0
	  addi      r4, r1, 0x18
	  addi      r5, r1, 0x14
	  stb       r3, 0x1E(r1)
	  stb       r3, 0x1D(r1)
	  stb       r3, 0x1C(r1)
	  stb       r0, 0x1F(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x4C(r28)
	  bl        -0x4129C4
	  lwz       r3, 0x4C(r28)
	  fmr       f3, f30
	  lfs       f1, 0x25C4(r2)
	  fmr       f4, f31
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  fmr       f2, f1
	  lwz       r12, 0x14(r12)
	  mr        r5, r30
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x50
	  li        r4, 0
	  bl        -0x356694
	  stb       r31, 0x67(r28)
	  addi      r4, r1, 0x10
	  addi      r5, r1, 0xC
	  stb       r31, 0x6B(r28)
	  lwz       r0, 0x68(r28)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x64(r28)
	  stw       r0, 0x10(r1)
	  lwz       r3, 0x4C(r28)
	  bl        -0x412A24
	  lwz       r3, 0x4C(r28)
	  fmr       f3, f30
	  lfs       f1, 0x25C4(r2)
	  fmr       f4, f31
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  fmr       f2, f1
	  lwz       r12, 0x14(r12)
	  mr        r5, r30
	  mtctr     r12
	  bctrl
	  b         .loc_0x158

	.loc_0x140:
	  fmr       f1, f30
	  lwz       r4, 0x4C(r28)
	  mr        r3, r28
	  mr        r5, r29
	  mr        r6, r30
	  bl        -0x3968

	.loc_0x158:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xB4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043FCB0
 * Size:	00017C
 */
f32 TRenderingProcessor::doDrawRuby(f32, f32, f32 x, f32 y, int a1, bool flag)
{
	f32 wid;
	Matrixf mtx1;
	Matrixf mtx2;
	u8 ret = doDrawCommon(x, y, &mtx1, &mtx2);
	if (ret) {
		JUtility::TColor color(ret >> 1, ret, ret, ret);
		mRubyFont->setCharColor(color);

		GXColor col(_CC);
		GXSetTevColor(GX_TEVREG1, col);
		wid = mRubyFont->drawChar_scale(0.0f, 0.0f, x, y, a1, flag);

		GXColor col2(_CC);
		GXSetTevColor(GX_TEVREG0, col2);
	} else {
		wid = calcWidth(mRubyFont, a1, x, flag);
	}
	return wid;
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  mr        r30, r4
	  mr        r31, r5
	  fmr       f30, f3
	  lwz       r12, 0x84(r12)
	  fmr       f31, f4
	  mr        r29, r3
	  li        r4, 0
	  li        r5, 0
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x130
	  lwz       r0, 0x6C(r29)
	  addi      r4, r1, 0x10
	  stw       r0, 0x18(r1)
	  stb       r3, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x10(r1)
	  lwz       r3, 0x50(r29)
	  bl        -0x412B6C
	  lwz       r0, 0xCC(r29)
	  addi      r4, r1, 0xC
	  li        r3, 0x1
	  stw       r0, 0x14(r1)
	  lbz       r5, 0x14(r1)
	  lbz       r6, 0x15(r1)
	  rlwinm    r0,r5,1,31,31
	  lbz       r7, 0x16(r1)
	  add       r5, r0, r5
	  srawi     r9, r5, 0x1
	  rlwinm    r0,r6,1,31,31
	  add       r0, r0, r6
	  rlwinm    r6,r7,1,31,31
	  srawi     r8, r0, 0x1
	  lbz       r5, 0x17(r1)
	  add       r6, r6, r7
	  stb       r9, 0x14(r1)
	  rlwinm    r0,r5,1,31,31
	  srawi     r6, r6, 0x1
	  stb       r8, 0x15(r1)
	  add       r0, r0, r5
	  srawi     r0, r0, 0x1
	  stb       r6, 0x16(r1)
	  stb       r0, 0x17(r1)
	  lwz       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x357734
	  lwz       r3, 0x50(r29)
	  fmr       f3, f30
	  lfs       f1, 0x25C4(r2)
	  fmr       f4, f31
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  fmr       f2, f1
	  lwz       r12, 0x14(r12)
	  mr        r5, r31
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xCC(r29)
	  fmr       f31, f1
	  addi      r4, r1, 0x8
	  li        r3, 0x1
	  stw       r0, 0x8(r1)
	  bl        -0x357778
	  b         .loc_0x14C

	.loc_0x130:
	  fmr       f1, f30
	  lwz       r4, 0x50(r29)
	  mr        r3, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        -0x3AE0
	  fmr       f31, f1

	.loc_0x14C:
	  fmr       f1, f31
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043FE2C
 * Size:	0001DC
 */
void TRenderingProcessor::doDrawImage(JUTTexture* tex, f32, f32, f32 x, f32 y)
{
	Matrixf mtx1;
	Matrixf mtx2;
	u8 ret = doDrawCommon(x, y, &mtx1, &mtx2);
	if (ret) {
		mColorData[3].a = (mColorData[3].a * ret) / 255;
		mColorData[4].a = (mColorData[4].a * ret) / 255;
		JUtility::TColor color(mColorData[3]);
		JUtility::TColor color2(mColorData[4]);

		setImageGX();
		GXLoadPosMtxImm(mtx2.mMatrix.mtxView, 0);

		mColorData[3].r = 0;
		mColorData[3].g = 0;
		mColorData[3].b = 0;
		mColorData[3].a >>= 1;

		mColorData[4].r = 0;
		mColorData[4].g = 0;
		mColorData[4].b = 0;
		mColorData[4].a = 0;

		P2JME::TRenderingProcessor::drawImage(tex, 0.0f, 0.0f, x, y);
		GXLoadPosMtxImm(mtx1.mMatrix.mtxView, 0);

		mColorData[3] = color;
		mColorData[4] = color2;
		P2JME::TRenderingProcessor::drawImage(tex, 0.0f, 0.0f, x, y);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r4
	  fmr       f30, f3
	  mr        r30, r3
	  lwz       r12, 0x84(r12)
	  fmr       f31, f4
	  addi      r4, r1, 0x40
	  addi      r5, r1, 0x10
	  mtctr     r12
	  bctrl
	  rlwinm.   r7,r3,0,24,31
	  beq-      .loc_0x1B4
	  lbz       r0, 0x73(r30)
	  li        r6, -0x1
	  lis       r4, 0x8081
	  stw       r6, 0xC(r1)
	  mullw     r0, r0, r7
	  mr        r3, r30
	  subi      r5, r4, 0x7F7F
	  stw       r6, 0x8(r1)
	  mulhw     r4, r5, r0
	  add       r0, r4, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  stb       r0, 0x73(r30)
	  lbz       r0, 0x77(r30)
	  mullw     r0, r0, r7
	  mulhw     r4, r5, r0
	  add       r0, r4, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  stb       r0, 0x77(r30)
	  lbz       r10, 0x70(r30)
	  lbz       r9, 0x71(r30)
	  lbz       r8, 0x72(r30)
	  lbz       r7, 0x73(r30)
	  lbz       r6, 0x74(r30)
	  lbz       r5, 0x75(r30)
	  lbz       r4, 0x76(r30)
	  lbz       r0, 0x77(r30)
	  stb       r10, 0xC(r1)
	  stb       r9, 0xD(r1)
	  stb       r8, 0xE(r1)
	  stb       r7, 0xF(r1)
	  stb       r6, 0x8(r1)
	  stb       r5, 0x9(r1)
	  stb       r4, 0xA(r1)
	  stb       r0, 0xB(r1)
	  bl        -0x443C
	  addi      r3, r1, 0x10
	  li        r4, 0
	  bl        -0x3569AC
	  lbz       r0, 0x73(r30)
	  li        r5, 0
	  lfs       f1, 0x25C4(r2)
	  fmr       f3, f30
	  stb       r5, 0x70(r30)
	  rlwinm    r0,r0,31,24,31
	  fmr       f2, f1
	  mr        r3, r30
	  stb       r5, 0x71(r30)
	  fmr       f4, f31
	  mr        r4, r31
	  stb       r5, 0x72(r30)
	  stb       r0, 0x73(r30)
	  lbz       r0, 0x77(r30)
	  stb       r5, 0x74(r30)
	  rlwinm    r0,r0,31,24,31
	  stb       r5, 0x75(r30)
	  stb       r5, 0x76(r30)
	  stb       r0, 0x77(r30)
	  bl        -0x4164
	  addi      r3, r1, 0x40
	  li        r4, 0
	  bl        -0x356A08
	  lbz       r0, 0xC(r1)
	  fmr       f3, f30
	  lfs       f1, 0x25C4(r2)
	  fmr       f4, f31
	  stb       r0, 0x70(r30)
	  mr        r3, r30
	  lbz       r0, 0xD(r1)
	  lbz       r5, 0xE(r1)
	  fmr       f2, f1
	  stb       r0, 0x71(r30)
	  mr        r4, r31
	  lbz       r0, 0xF(r1)
	  stb       r5, 0x72(r30)
	  lbz       r5, 0x8(r1)
	  stb       r0, 0x73(r30)
	  lbz       r0, 0x9(r1)
	  stb       r5, 0x74(r30)
	  lbz       r5, 0xA(r1)
	  stb       r0, 0x75(r30)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x76(r30)
	  stb       r0, 0x77(r30)
	  bl        -0x41CC

	.loc_0x1B4:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80440008
 * Size:	000040
 */
void TRenderingProcessor::update()
{
	FOREACH_NODE(DrawInfo, mDrawInfo.mInfoList1.mChild, node)
	{
		node->mTimer += sys->mDeltaTime;
		if (node->mTimer > node->_20) {
			node->mTimer = node->_20;
		}
	}
}

/*
 * --INFO--
 * Address:	80440048
 * Size:	0000A4
 */
void TRenderingProcessor::reset()
{
	P2JME::TRenderingProcessor::reset();
	FOREACH_NODE(DrawInfo, mDrawInfo.mInfoList1.mChild, node)
	{
		P2ASSERTLINE(253, node);
		node->_18    = -1;
		node->mTimer = 0.0f;
		node->del();
		mDrawInfo.mInfoList2.add(node);
	}
}

/*
 * --INFO--
 * Address:	804400EC
 * Size:	000050
 */
TControl::TControl()
{
	_50     = 4.0f;
	mTimer1 = 0.0f;
	mTimer2 = 0.0f;
}

/*
 * --INFO--
 * Address:	8044013C
 * Size:	000100
 */
void TControl::initRenderingProcessor(u32 count)
{
	Window::TRenderingProcessor* proc = static_cast<Window::TRenderingProcessor*>(mTextRenderProc);
	proc->mDrawInfo.init(count);
}

/*
 * --INFO--
 * Address:	8044023C
 * Size:	000188
 */
bool TControl::update(Controller* control1, Controller* control2)
{
	setController(control1, control2);
	bool ret = P2JME::TControl::update();

	P2JME::TSequenceProcessor* proc = mSequenceProc;
	if (proc) {
		u32 flag = proc->mFlags.typeView;
		if (flag & 4) {

			if (!(flag & 1)) {
				proc->mFlags.set(1);
				mTimer1 = mTextRenderProc->_58;
				mTimer2 = mTimer1 - mTextRenderProc->_3C;
				mTimer  = 0.0f;
			} else {
				f32 calc  = 1.0f;
				f32 calc2 = mTimer / 0.5f;
				if (calc2 > 1.0f) {
					proc->mFlags.unset(1);
					mSequenceProc->mFlags.unset(4);
				} else {
					calc = (1.0f - cosf(calc2 * PI)) * 0.5f;
				}
				mTextRenderProc->_58 = calc * (mTimer2 - mTimer1) + mTimer1;

				// I would imagine the second of these was supposed to be for controller 2, but very cool
				if ((control1 && control1->getButton() & Controller::PRESS_B)
				    || (control1 && control1->getButton() & Controller::PRESS_B)) {
					mTimer += sys->mDeltaTime * 2.0f;
				} else {
					mTimer += sys->mDeltaTime;
				}
			}
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	804403C4
 * Size:	000020
 */
void TControl::reset() { P2JME::TControl::reset(); }

/*
 * --INFO--
 * Address:	804403E4
 * Size:	00007C
 */
void TControl::draw(Graphics& gfx)
{
	Matrixf mtx;
	Vector3f t(50.0f, 232.0f, 0.0f);
	mtx.makeT(t);
	gfx.mPerspGraph.setPort();
	P2JME::TControl::draw(mtx.mMatrix.mtxView, gfx.mPerspGraph.mPosMtx);
}

/*
 * --INFO--
 * Address:	80440460
 * Size:	000050
 */
bool TControl::onInit()
{
	if (gP2JMEMgr) {
		setFont(gP2JMEMgr->mFont);
		setRubyFont(gP2JMEMgr->mFont);
	}
	return true;
}

} // namespace Window
} // namespace P2JME
