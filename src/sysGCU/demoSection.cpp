#include "Demo.h"
#include "System.h"
#include "Controller.h"
#include "Dolphin/rand.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSGame.h"
#include "SoundID.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/JUTProcBar.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049B3C0
    lbl_8049B3C0:
        .asciz "demoSection.cpp"
        .asciz "TitleSection::init"
        .skip 1
        .asciz "JMANewSinTable"
        .skip 1
        .4byte 0x54485083 # "THP?申Z?申N?申V?申?申?申?申"
        .4byte 0x5A834E83
        .4byte 0x56838783
        .4byte 0x93000000
        .asciz "frameBuffer"
    .global lbl_8049B410
    lbl_8049B410:
        .asciz "PSGame.h"
        .skip 3
    .global lbl_8049B41C
    lbl_8049B41C:
        .asciz "P2Assert"
        .skip 3
        .asciz "/user/yamashita/arc/demoMovieLogo_us.szs"
        .skip 3
        .asciz "/data/timg/pikmin2_logo.bti"

    .section .data, "wa"	# 0x8049E220 - 0x804EFC20
    .global "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@"
    "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@":
        .4byte 0x0172000F
        .4byte 0x0172000F
        .4byte 0x0172000F
        .4byte 0x01720028
        .4byte 0x0172000F
        .4byte 0x0172000F
        .4byte 0x0172000F
        .4byte 0x01720028
    .global lbl_804ED348
    lbl_804ED348:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadResource__Q24Demo7SectionFv
    .global "__vt__25Delegate<Q24Demo7Section>"
    "__vt__25Delegate<Q24Demo7Section>":
        .4byte 0
        .4byte 0
        .4byte "invoke__25Delegate<Q24Demo7Section>Fv"
    .global __vt__Q24Demo11HIORootNode
    __vt__Q24Demo11HIORootNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Demo11HIORootNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Demo7Section
    __vt__Q24Demo7Section:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Demo7SectionFv
        .4byte run__7SectionFv
        .4byte update__7SectionFv
        .4byte draw__7SectionFR8Graphics
        .4byte init__Q24Demo7SectionFv
        .4byte drawInit__7SectionFR8Graphics
        .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
        .4byte doExit__Q24Demo7SectionFv
        .4byte forceFinish__7SectionFv
        .4byte forceReset__Q24Demo7SectionFv
        .4byte getCurrentSection__7SectionFv
        .4byte doLoadingStart__Q24Demo7SectionFv
        .4byte doLoading__Q24Demo7SectionFv
        .4byte doUpdate__Q24Demo7SectionFv
        .4byte doDraw__Q24Demo7SectionFR8Graphics
        .4byte isFinishable__7SectionFv
        .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
        .4byte refreshHIO__Q24Game14BaseHIOSectionFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global "sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@"
    "sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@":
        .byte 0x05
        .byte 0x06
        .byte 0x07
        .byte 0x00
        .byte 0x08
        .byte 0x09
        .byte 0x0A
        .byte 0x00
    .global "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"
    "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@":
        .byte 0xFF
        .byte 0x00
        .byte 0x00
        .byte 0x00

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520AB0
    lbl_80520AB0:
        .float 0.0
    .global lbl_80520AB4
    lbl_80520AB4:
        .float 0.5
    .global lbl_80520AB8
    lbl_80520AB8:
        .float 32768.0
    .global lbl_80520ABC
    lbl_80520ABC:
        .float 8.0
    .global lbl_80520AC0
    lbl_80520AC0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520AC8
    lbl_80520AC8:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace Demo {
namespace {
static u8 sMovieIndex[] = { 0xFF, 0x00, 0x00, 0x00 };

struct LogoLocation {
	u16 x;
	u16 y;
};

static LogoLocation sLogoLocate[] = {
	{ 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x0028 },
	{ 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x0028 },
};
} // namespace

/*
 * --INFO--
 * Address:	8044CBB8
 * Size:	000054
 */
Section::Section(JKRHeap* heap)
    : Game::BaseHIOSection(heap)
    , m_threadCommand()
    , _BC(0.0f)
{
}

/*
 * --INFO--
 * Address:	8044CC0C
 * Size:	000088
 */
Section::~Section()
{
	// TODO: Finish
}

/*
 * --INFO--
 * Address:	8044CC94
 * Size:	0001A0
 */
void Section::init()
{
	// TODO: Finish
	sys->heapStatusStart("TitleSection::init", nullptr);

	sys->heapStatusStart("JMANewSinTable", nullptr);
	sys->heapStatusEnd("JMANewSinTable");

	HIORootNode* root = new HIORootNode();
	initHIO(root);

	sys->heapStatusStart("frameBuffer", nullptr);
	setDisplay(JFWDisplay::createManager(nullptr, _1C, JUTXfb::DoubleBuffer, false), 1);
	sys->heapStatusEnd("frameBuffer");

	m_controller = new Controller(JUTGamePad::PORT_0);

	sys->setFrameRate(2);
	m_moviePlayer.init(_1C);

	addGenNode(m_genNode);
	_30 = 0.5f;

	JUTProcBar::sManager->_10C = 0;
	JUTProcBar::sManager->_130 = 0;
	if (sMovieIndex[0] == -1) {
		sMovieIndex[3] = 8 * randFloat();
	}
}

/*
 * --INFO--
 * Address:	8044CE34
 * Size:	0000E8
 */
void Section::doDraw(Graphics& gfx)
{
	// TODO: Finish
	m_moviePlayer.draw(gfx);
	gfx.doJ3DAnimation();

	J2DPicture picture(_1AC);
	LogoLocation& location = sLogoLocate[sMovieIndex[0]];
	picture.draw(0, 0, 0, location.x, location.y, location.x - location.y, location.y - location.x);
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stw      r31, 0x18c(r1)
	mr       r31, r4
	stw      r30, 0x188(r1)
	mr       r30, r3
	addi     r3, r30, 0xc0
	lwz      r12, 0xc0(r30)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1ac(r30)
	addi     r3, r1, 8
	bl       __ct__10J2DPictureFP10JUTTexture
	lbz      r4, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
	lis      r0, 0x4330
	lis      r3, "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@"@ha
	stw      r0, 0x170(r1)
	extsb    r4, r4
	lfd      f2, lbl_80520AC8@sda21(r2)
	slwi     r4, r4, 2
	addi     r3, r3, "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@"@l
	add      r4, r3, r4
	stw      r0, 0x178(r1)
	lhz      r5, 0(r4)
	addi     r3, r1, 8
	lhz      r0, 2(r4)
	li       r4, 0
	stw      r5, 0x174(r1)
	li       r5, 0
	lfs      f5, 0x30(r1)
	li       r6, 0
	stw      r0, 0x17c(r1)
	lfd      f1, 0x170(r1)
	lfd      f0, 0x178(r1)
	lfs      f3, 0x28(r1)
	fsubs    f1, f1, f2
	lfs      f4, 0x34(r1)
	fsubs    f2, f0, f2
	lfs      f0, 0x2c(r1)
	fsubs    f3, f5, f3
	fsubs    f4, f4, f0
	bl       draw__10J2DPictureFffffbbb
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__10J2DPictureFv
	lwz      r0, 0x194(r1)
	lwz      r31, 0x18c(r1)
	lwz      r30, 0x188(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/*
 * --INFO--
 * Address:	8044CF1C
 * Size:	0000AC
 */
bool Section::doUpdate()
{
	_BC += sys->m_deltaTime;

	BaseHIOSection::doUpdate();
	if (m_moviePlayer.isFinishPlaying()) {
		_34 = 0;
	}

	// TODO: WTF is going on here? Match!
	if ((m_controller->m_padButton.m_buttonDown & ~PAD_BUTTON_B) != 0 && _34) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
		_34 = 0;
	}

	m_moviePlayer.play();
	m_moviePlayer.update();
	return _34;
}

/*
 * --INFO--
 * Address:	8044CFC8
 * Size:	0000B0
 */
void Section::doExit()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);

	mgr->deleteCurrentScene();
	if (++sMovieIndex[0] + 1 >= 8) {
		sMovieIndex[0] = 0;
	}

	m_moviePlayer.stop();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8044D008
	lis      r3, lbl_8049B410@ha
	lis      r5, lbl_8049B41C@ha
	addi     r3, r3, lbl_8049B410@l
	li       r4, 0x1d3
	addi     r5, r5, lbl_8049B41C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044D008:
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_8044D030
	lis      r3, lbl_8049B410@ha
	lis      r5, lbl_8049B41C@ha
	addi     r3, r3, lbl_8049B410@l
	li       r4, 0x1dc
	addi     r5, r5, lbl_8049B41C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044D030:
	mr       r3, r31
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	lbz      r3, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
	addi     r3, r3, 1
	extsb    r0, r3
	stb      r3, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
	cmplwi   r0, 8
	blt      lbl_8044D058
	li       r0, 0
	stb      r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)

lbl_8044D058:
	addi     r3, r30, 0xc0
	bl       stop__Q24Game9THPPlayerFv
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
 * Address:	8044D078
 * Size:	0000A4
 */
void Section::doLoadingStart()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r13,
"sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@"@sda21 stw      r0,
0x24(r1) stw      r31, 0x1c(r1) mr       r31, r3 addi     r3, r31, 0xc0 lbz r0,
"sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13) extsb    r0, r0
	lbzx     r4, r4, r0
	bl       load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
	li       r3, 0x14
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_8044D0FC
	lis      r3, lbl_804ED348@ha
	lis      r4, __vt__9IDelegate@ha
	addi     r8, r3, lbl_804ED348@l
	lis      r3, "__vt__25Delegate<Q24Demo7Section>"@ha
	lwz      r7, 0(r8)
	addi     r4, r4, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r3, "__vt__25Delegate<Q24Demo7Section>"@l
	lwz      r3, 8(r8)
	stw      r7, 8(r1)
	stw      r4, 0(r5)
	stw      r0, 0(r5)
	stw      r31, 4(r5)
	stw      r7, 8(r5)
	stw      r6, 0xc(r5)
	stw      r6, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r3, 0x10(r5)

lbl_8044D0FC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x48
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8044D11C
 * Size:	000038
 */
bool Section::doLoading()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x48
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
	return true;
}

/*
 * --INFO--
 * Address:	8044D154
 * Size:	0000C8
 */
void Section::loadResource()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8049B3C0@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	li       r6, 1
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8049B3C0@l
	li       r4, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r31, 0x68
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	cmplwi   r3, 0
	bne      lbl_8044D1A8
	addi     r3, r31, 0
	addi     r5, r31, 0x5c
	li       r4, 0x1ac
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044D1A8:
	addi     r3, r31, 0x94
	bl       getGlbResource__13JKRFileLoaderFPCc
	or.      r30, r3, r3
	bne      lbl_8044D1CC
	addi     r3, r31, 0
	addi     r5, r31, 0x5c
	li       r4, 0x1b1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044D1CC:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8044D1FC
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x28(r31)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8044D1FC:
	stw      r31, 0x1ac(r29)
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
 * Address:	8044D21C
 * Size:	000070
 */
// HIORootNode::~HIORootNode()
// {
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8044D270
lis      r4, __vt__Q24Demo11HIORootNode@ha
addi     r0, r4, __vt__Q24Demo11HIORootNode@l
stw      r0, 0(r30)
beq      lbl_8044D260
lis      r5, __vt__Q24Game11HIORootNode@ha
li       r4, 0
addi     r0, r5, __vt__Q24Game11HIORootNode@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_8044D260:
extsh.   r0, r31
ble      lbl_8044D270
mr       r3, r30
bl       __dl__FPv

lbl_8044D270:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
// }

/*
 * --INFO--
 * Address:	8044D28C
 * Size:	000008
 */
bool Section::forceReset() { return false; }

/*
 * @generated
 * --INFO--
 * Address:	8044D294
 * Size:	000030
 */
// void Delegate<Section>::invoke()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	addi     r12, r4, 8
// 	lwz      r3, 4(r3)
// 	bl       __ptmf_scall
// 	nop
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
} // namespace Demo