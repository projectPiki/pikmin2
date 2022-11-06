#include "Morimura/DayEndCount.h"
#include "Morimura/HurryUp.h"
#include "Screen/Bases.h"
#include "Screen/Enums.h"
#include "og/newScreen/Ground.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E090
    lbl_8048E090:
        .asciz "ground screen"
        .skip 2
        .asciz "PSGame.h"
        .skip 3
        .asciz "P2Assert"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "get sound scene at\ninvalid timming\n"
        .asciz "DayEndCount"
        .asciz "HurryUp2D"
        .skip 2
    .global lbl_8048E100
    lbl_8048E100:
        .asciz "res_ground.szs"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen6Ground
    __vt__Q32og9newScreen6Ground:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen6GroundFv
        .4byte getOwnerID__Q32og9newScreen6GroundFv
        .4byte getMemberID__Q32og9newScreen6GroundFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q32og9newScreen6GroundCFv
        .4byte getResName__Q32og9newScreen6GroundCFv
        .4byte doCreateObj__Q32og9newScreen6GroundFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen6GroundFPQ28Resource10MgrCommand .4byte
   setPort__Q26Screen9SceneBaseFR8Graphics .4byte
   doUpdateActive__Q32og9newScreen6GroundFv .4byte
   doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q32og9newScreen6GroundFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sGameFlag_MainBgm_Evening__Q22og9newScreen
    sGameFlag_MainBgm_Evening__Q22og9newScreen:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D6D8
    lbl_8051D6D8:
        .float 1.0
    .global lbl_8051D6DC
    lbl_8051D6DC:
        .4byte 0x3F666666
    .global lbl_8051D6E0
    lbl_8051D6E0:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8051D6E8
    lbl_8051D6E8:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8030DA00
 * Size:	00000C
 */
void initGround(void)
{
	/*
	li       r0, 0
	stb      r0, sGameFlag_MainBgm_Evening__Q22og9newScreen@sda21(r13)
	blr
	*/
}

/*
 * __ct
 * --INFO--
 * Address:	8030DA0C
 * Size:	000054
 */
Ground::Ground(void)
    : SceneBase()
{
	_220 = 0;
	_221 = 0;
	_222 = 0;
	_223 = 0;
	_224 = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
Ground::~Ground(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030DA60
 * Size:	000004
 */
void Ground::doUserCallBackFunc(Resource::MgrCommand*) { }

/*
 * --INFO--
 * Address:	8030DA64
 * Size:	0000C0
 */
void Ground::doCreateObj(JKRArchive* archive)
{
	::Screen::ObjBase* obj = new ObjGround("ground screen");
	registObj(obj, archive);
	obj = new Morimura::THurryUp2D();
	registObj(obj, archive);
	obj = new Morimura::TDayEndCount();
	registObj(obj, archive);
	setColorBG(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	8030DB24
 * Size:	00004C
 */
bool Ground::doStart(::Screen::StartSceneArg* arg)
{
	searchObj("ground screen")->start(arg);
	return true;
}

/*
 * --INFO--
 * Address:	8030DB70
 * Size:	000310
 */
void Ground::doUpdateActive(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stmw     r27, 0x1c(r1)
	lwz      r0, gameSystem__4Game@sda21(r13)
	lis      r4, lbl_8048E090@ha
	mr       r30, r3
	cmplwi   r0, 0
	addi     r29, r4, lbl_8048E090@l
	beq      lbl_8030DE4C
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8030DBD8
	addi     r3, r29, 0x10
	addi     r5, r29, 0x1c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030DBD8:
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_8030DBF8
	addi     r3, r29, 0x10
	addi     r5, r29, 0x1c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030DBF8:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_8030DC18
	addi     r3, r29, 0x28
	addi     r5, r29, 0x1c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030DC18:
	lwz      r3, 4(r31)
	lwz      r31, 4(r3)
	cmplwi   r31, 0
	bne      lbl_8030DC3C
	addi     r3, r29, 0x28
	addi     r5, r29, 0x34
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8030DC3C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r28, 0x40(r3)
	mr       r3, r28
	bl       getSunGaugeRatio__Q24Game7TimeMgrFv
	lfs      f29, 0x3c(r28)
	fmr      f31, f1
	lfs      f1, 0x1f4(r28)
	lfs      f0, 0x64(r28)
	fsubs    f1, f1, f29
	lwz      r27, 0x21c(r30)
	fsubs    f30, f0, f29
	stfs     f31, 0x70(r27)
	fdivs    f28, f1, f30
	fcmpo    cr0, f31, f28
	stfs     f28, 0x74(r27)
	cror     2, 1, 2
	bne      lbl_8030DCB8
	lbz      r0, 0x220(r30)
	cmplwi   r0, 0
	bne      lbl_8030DCC0
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x220(r30)
	addi     r4, r29, 0x58
	bl       searchObj__Q26Screen9SceneBaseFPc
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8030DCC0

lbl_8030DCB8:
	li       r0, 0
	stb      r0, 0x220(r30)

lbl_8030DCC0:
	fcmpo    cr0, f31, f28
	cror     2, 1, 2
	bne      lbl_8030DD14
	lfs      f1, lbl_8051D6D8@sda21(r2)
	fsubs    f2, f31, f28
	lfs      f0, lbl_8051D6DC@sda21(r2)
	fsubs    f1, f1, f28
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8030DD14
	lbz      r0, 0x224(r30)
	cmplwi   r0, 0
	bne      lbl_8030DD14
	li       r0, 1
	lfs      f1, lbl_8051D6E0@sda21(r2)
	stb      r0, 0x224(r30)
	mr       r3, r31
	li       r4, 0
	li       r5, 1
	bl       fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time

lbl_8030DD14:
	lfs      f0, 0x1cc(r28)
	fsubs    f0, f0, f29
	fdivs    f28, f0, f30
	stfs     f28, 0x84(r27)
	fcmpo    cr0, f31, f28
	stfs     f31, 0x80(r27)
	cror     2, 1, 2
	bne      lbl_8030DD8C
	lbz      r0, 0x221(r30)
	cmplwi   r0, 0
	bne      lbl_8030DD94
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x221(r30)
	addi     r4, r29, 0x64
	bl       searchObj__Q26Screen9SceneBaseFPc
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lbz      r0, sGameFlag_MainBgm_Evening__Q22og9newScreen@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8030DD94
	li       r0, 1
	mr       r3, r31
	stb      r0, sGameFlag_MainBgm_Evening__Q22og9newScreen@sda21(r13)
	li       r4, 1
	bl       jumpMainBgm__Q23PSM12Scene_GroundFUc
	b        lbl_8030DD94

lbl_8030DD8C:
	li       r0, 0
	stb      r0, 0x221(r30)

lbl_8030DD94:
	mr       r3, r28
	bl       getRealDayTime__Q24Game7TimeMgrFv
	lwz      r3, sys@sda21(r13)
	lis      r0, 0x4330
	lwz      r4, cEvenning_fadeOuTime__Q23PSM12Scene_Ground@sda21(r2)
	fcmpo    cr0, f31, f28
	lfs      f0, 0x54(r3)
	lwz      r27, cEvenning_fadeInTime__Q23PSM12Scene_Ground@sda21(r2)
	fdivs    f3, f0, f1
	stw      r4, 0xc(r1)
	lfd      f2, lbl_8051D6E8@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	stw      r27, 0x14(r1)
	stw      r0, 0x10(r1)
	fsubs    f1, f0, f2
	lfd      f0, 0x10(r1)
	fnmsubs  f1, f3, f1, f28
	fsubs    f0, f0, f2
	fmadds   f29, f3, f0, f28
	bge      lbl_8030DE14
	fcmpo    cr0, f31, f1
	ble      lbl_8030DE14
	lbz      r0, 0x222(r30)
	cmplwi   r0, 0
	bne      lbl_8030DE14
	li       r0, 1
	lfs      f1, lbl_8051D6E0@sda21(r2)
	stb      r0, 0x222(r30)
	mr       r3, r31
	li       r5, 0
	bl       fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time

lbl_8030DE14:
	fcmpo    cr0, f31, f28
	ble      lbl_8030DE4C
	fcmpo    cr0, f31, f29
	ble      lbl_8030DE4C
	lbz      r0, 0x223(r30)
	cmplwi   r0, 0
	bne      lbl_8030DE4C
	li       r0, 1
	lfs      f1, lbl_8051D6D8@sda21(r2)
	stb      r0, 0x223(r30)
	mr       r3, r31
	mr       r4, r27
	li       r5, 0
	bl       fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time

lbl_8030DE4C:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8030DE80
 * Size:	00000C
 */
const char* Ground::getResName() const { return "res_ground.szs"; }

/*
 * --INFO--
 * Address:	8030DE8C
 * Size:	000008
 */
SceneType Ground::getSceneType() { return SCENE_GROUND; }

/*
 * --INFO--
 * Address:	8030DE94
 * Size:	00000C
 */
ScreenOwnerID Ground::getOwnerID() { return OWNER_OGA; }

/*
 * --INFO--
 * Address:	8030DEA0
 * Size:	000010
 */
ScreenMemberID Ground::getMemberID() { return MEMBER_GROUND; }

/*
 * --INFO--
 * Address:	8030DEB0
 * Size:	000008
 */
bool Ground::isDrawInDemo() const { return false; }
} // namespace newScreen
} // namespace og
