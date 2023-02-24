#include "Game/GameLight.h"
#include "Game/shadowMgr.h"
#include "nans.h"

namespace Game {

static const int unusedGameLightArray[] = { 0, 0, 0 };

static const char unusedGameLightName[] = "gameLightMgr";

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void calcLightColor(Color4* lightColor, Color4& color1, Color4& color2, f32 p1)
{
	// inlined in calcColor and updateSpotType probably
}

namespace {
char* GameLightMgrSettingLabel[5] = {
	"夜",     // 'night'
	"朝",     // 'morning'
	"昼",     // 'noon'
	"夕",     // 'evening'
	"デモ中", // 'in demo'
};
} // namespace

/*
 * --INFO--
 * Address:	8011CCE0
 * Size:	000654
 */
GameLightTimeSetting::GameLightTimeSetting()
    : CNode("")
{
}

// /*
//  * --INFO--
//  * Address:	8011D334
//  * Size:	0001D4
//  */
// GameFogSetting::GameFogSetting()
// {
// }

/*
 * --INFO--
 * Address:	8011D5EC
 * Size:	000738
 */
GameLightSpotSetting::GameLightSpotSetting(char* name)
    : CNode(name)
{
}

/*
 * --INFO--
 * Address:	8011DD68
 * Size:	0001E0
 */
GameLightMgrSetting::GameLightMgrSetting()
    : CNode("設定") // 'setting'
    , mIsCave(false)
    , mSunLight(GameLightMgrSettingLabel)
    , mStellarSpotLight("懐中電灯アリ") // 'yes flashlight'
    , mRegularSpotLight("懐中電灯ナシ") // 'no flashlight'
{
	updateNode();
}

/*
 * --INFO--
 * Address:	8011E024
 * Size:	000074
 */
void GameLightMgrSetting::updateNode()
{
	mSunLight.del();
	mStellarSpotLight.del();
	mRegularSpotLight.del();

	if (!mIsCave) {
		add(&mSunLight);
	} else {
		add(&mStellarSpotLight);
		add(&mRegularSpotLight);
	}
}

/*
 * --INFO--
 * Address:	8011E098
 * Size:	0002F0
 */
void GameLightMgrSetting::read(Stream& stream)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r4
	stw      r28, 0x20(r1)
	mr       r28, r3
	addi     r3, r1, 0x14
	bl       __ct__4ID32Fv
	mr       r4, r29
	addi     r3, r1, 0x14
	bl       read__4ID32FR6Stream
	lis      r4, 0x30303031@ha
	addi     r3, r1, 0x14
	addi     r4, r4, 0x30303031@l
	bl       __ne__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8011E114
	lwz      r7, 0x14(r1)
	mr       r3, r28
	lwz      r6, 0x18(r1)
	mr       r5, r29
	lwz      r0, 0x1c(r1)
	addi     r4, r1, 8
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       readOldVersion__Q24Game19GameLightMgrSettingF4ID32R6Stream
	b        lbl_8011E31C

lbl_8011E114:
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x18(r28)
	lbz      r0, 0x18(r28)
	cmplwi   r0, 0
	bne      lbl_8011E1E4
	mr       r4, r29
	addi     r3, r28, 0x34
	bl       read__10ParametersFR6Stream
	li       r31, 0
	addi     r30, r28, 0x1c

lbl_8011E140:
	addi     r3, r30, 0xb8
	mr       r4, r29
	lwz      r12, 0x168(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x16c
	mr       r4, r29
	lwz      r12, 0x21c(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x220
	mr       r4, r29
	lwz      r12, 0x2d0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x2d4
	mr       r4, r29
	lwz      r12, 0x384(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x388
	mr       r4, r29
	lwz      r12, 0x498(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x49c
	mr       r4, r29
	lwz      r12, 0x54c(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1
	addi     r30, r30, 0x4b0
	cmpwi    r31, 5
	blt      lbl_8011E140
	b        lbl_8011E31C

lbl_8011E1E4:
	mr       r4, r29
	addi     r3, r28, 0x1844
	bl       read__10ParametersFR6Stream
	addi     r3, r28, 0x187c
	mr       r4, r29
	lwz      r12, 0x192c(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x1968
	mr       r4, r29
	lwz      r12, 0x1a18(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x1a54
	mr       r4, r29
	lwz      r12, 0x1b04(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x1b08
	mr       r4, r29
	lwz      r12, 0x1bb8(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x1bbc
	mr       r4, r29
	lwz      r12, 0x1ccc(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x1cd0
	mr       r4, r29
	lwz      r12, 0x1d80(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r28, 0x1d9c
	bl       read__10ParametersFR6Stream
	addi     r3, r28, 0x1dd4
	mr       r4, r29
	lwz      r12, 0x1e84(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x1ec0
	mr       r4, r29
	lwz      r12, 0x1f70(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x1fac
	mr       r4, r29
	lwz      r12, 0x205c(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x2060
	mr       r4, r29
	lwz      r12, 0x2110(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x2114
	mr       r4, r29
	lwz      r12, 0x2224(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r28, 0x2228
	mr       r4, r29
	lwz      r12, 0x22d8(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8011E31C:
	addi     r3, r28, 0x1c
	bl       del__5CNodeFv
	addi     r3, r28, 0x182c
	bl       del__5CNodeFv
	addi     r3, r28, 0x1d84
	bl       del__5CNodeFv
	lbz      r0, 0x18(r28)
	cmplwi   r0, 0
	bne      lbl_8011E350
	mr       r3, r28
	addi     r4, r28, 0x1c
	bl       add__5CNodeFP5CNode
	b        lbl_8011E368

lbl_8011E350:
	mr       r3, r28
	addi     r4, r28, 0x182c
	bl       add__5CNodeFP5CNode
	mr       r3, r28
	addi     r4, r28, 0x1d84
	bl       add__5CNodeFP5CNode

lbl_8011E368:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011E388
 * Size:	0001E0
 */
void GameLightMgrSetting::readOldVersion(ID32, Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r7, 0x30303030@ha
	lwz      r6, 8(r4)
	stw      r0, 0x24(r1)
	addi     r0, r7, 0x30303030@l
	cmpw     r6, r0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r5
	beq      lbl_8011E3C0
	b        lbl_8011E530

lbl_8011E3C0:
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x18(r30)
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_8011E490
	mr       r4, r29
	addi     r3, r30, 0x34
	bl       read__10ParametersFR6Stream
	li       r31, 0
	addi     r30, r30, 0x1c

lbl_8011E3EC:
	addi     r3, r30, 0xb8
	mr       r4, r29
	lwz      r12, 0x168(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x16c
	mr       r4, r29
	lwz      r12, 0x21c(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x220
	mr       r4, r29
	lwz      r12, 0x2d0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x2d4
	mr       r4, r29
	lwz      r12, 0x384(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x388
	mr       r4, r29
	lwz      r12, 0x498(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x49c
	mr       r4, r29
	lwz      r12, 0x54c(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1
	addi     r30, r30, 0x4b0
	cmpwi    r31, 5
	blt      lbl_8011E3EC
	b        lbl_8011E54C

lbl_8011E490:
	mr       r4, r29
	addi     r3, r30, 0x1844
	bl       read__10ParametersFR6Stream
	addi     r3, r30, 0x187c
	mr       r4, r29
	lwz      r12, 0x192c(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1968
	mr       r4, r29
	lwz      r12, 0x1a18(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1a54
	mr       r4, r29
	lwz      r12, 0x1b04(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1b08
	mr       r4, r29
	lwz      r12, 0x1bb8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1bbc
	mr       r4, r29
	lwz      r12, 0x1ccc(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1cd0
	mr       r4, r29
	lwz      r12, 0x1d80(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8011E54C

lbl_8011E530:
	lis      r3, lbl_8047B380@ha
	lis      r4, lbl_8047B394@ha
	addi     r5, r4, lbl_8047B394@l
	addi     r3, r3, lbl_8047B380@l
	li       r4, 0x1ab
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8011E54C:
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
 * Address:	8011E568
 * Size:	0001F4
 */
void GameLightEventNode::update(Game::GameLightMgr*)
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
	lwz      r0, 0x4c(r3)
	cmpwi    r0, 2
	beq      lbl_8011E624
	bge      lbl_8011E5A8
	cmpwi    r0, 1
	bge      lbl_8011E5B4
	b        lbl_8011E73C

lbl_8011E5A8:
	cmpwi    r0, 4
	bge      lbl_8011E73C
	b        lbl_8011E6C4

lbl_8011E5B4:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x40(r29)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x40(r29)
	lfs      f1, 0x40(r29)
	lfs      f0, 0x28(r29)
	fcmpo    cr0, f1, f0
	ble      lbl_8011E5E8
	stfs     f0, 0x40(r29)
	lfs      f0, lbl_80517C64@sda21(r2)
	stfs     f0, 0x44(r29)
	b        lbl_8011E5F0

lbl_8011E5E8:
	fdivs    f0, f1, f0
	stfs     f0, 0x44(r29)

lbl_8011E5F0:
	lfs      f1, lbl_80517C64@sda21(r2)
	lfs      f0, 0x44(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_8011E610
	lfs      f0, lbl_80517BF4@sda21(r2)
	li       r0, 2
	stfs     f0, 0x40(r29)
	stw      r0, 0x4c(r29)

lbl_8011E610:
	mr       r3, r29
	mr       r4, r30
	li       r5, 1
	bl       updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
	b        lbl_8011E73C

lbl_8011E624:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x40(r29)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80517C68@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x40(r29)
	lfs      f1, 0x40(r29)
	fcmpo    cr0, f1, f0
	ble      lbl_8011E650
	lfs      f0, lbl_80517BF4@sda21(r2)
	stfs     f0, 0x40(r29)

lbl_8011E650:
	lfs      f2, lbl_80517C74@sda21(r2)
	lfs      f1, 0x40(r29)
	lfs      f0, lbl_80517C78@sda21(r2)
	fmuls    f1, f2, f1
	fmuls    f1, f1, f0
	bl       pikmin2_cosf__Ff
	lfs      f2, lbl_80517C70@sda21(r2)
	lfs      f0, lbl_80517C6C@sda21(r2)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x44(r29)
	lbz      r0, 0x18(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8011E6B0
	mr       r3, r29
	mr       r4, r30
	li       r5, 1
	bl       updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
	lfs      f1, 0x44(r29)
	li       r0, 3
	lfs      f0, lbl_80517BF4@sda21(r2)
	stfs     f1, 0x48(r29)
	stfs     f0, 0x40(r29)
	stw      r0, 0x4c(r29)
	b        lbl_8011E73C

lbl_8011E6B0:
	mr       r3, r29
	mr       r4, r30
	li       r5, 1
	bl       updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
	b        lbl_8011E73C

lbl_8011E6C4:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x40(r29)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x40(r29)
	lfs      f1, 0x40(r29)
	lfs      f0, 0x2c(r29)
	fcmpo    cr0, f1, f0
	ble      lbl_8011E6F8
	stfs     f0, 0x40(r29)
	lfs      f0, lbl_80517BF4@sda21(r2)
	stfs     f0, 0x44(r29)
	b        lbl_8011E710

lbl_8011E6F8:
	fdivs    f0, f1, f0
	lfs      f1, lbl_80517C64@sda21(r2)
	lfs      f2, 0x48(r29)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x44(r29)

lbl_8011E710:
	mr       r3, r29
	mr       r4, r30
	li       r5, 0
	bl       updateCommon__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgrb
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfs      f0, 0x44(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_8011E73C
	li       r0, 0
	li       r31, 1
	stw      r0, 0x4c(r29)

lbl_8011E73C:
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
 * Address:	8011E75C
 * Size:	00037C
 */
void GameLightEventNode::updateCommon(Game::GameLightMgr*, bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	clrlwi.  r0, r5, 0x18
	lfs      f31, lbl_80517C7C@sda21(r2)
	mr       r30, r3
	mr       r31, r4
	beq      lbl_8011E880
	lbz      r0, 0x18(r30)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_8011E82C
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	beq      lbl_8011E82C
	lfs      f1, 0x3c(r30)
	lfs      f0, lbl_80517BF4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8011E82C
	lwz      r4, 0x233c(r31)
	cmplwi   r4, 0
	beq      lbl_8011E82C
	lwz      r12, 0(r4)
	addi     r3, r1, 0xc
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x38(r30)
	lfs      f0, 0x10(r1)
	lfs      f1, 4(r3)
	lfs      f3, 0(r3)
	fsubs    f4, f1, f0
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r3)
	lfs      f1, 0x14(r1)
	fsubs    f3, f3, f0
	fmuls    f0, f4, f4
	fsubs    f1, f2, f1
	fmadds   f0, f3, f3, f0
	fmadds   f1, f1, f1, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f0, 0x3c(r30)
	lfs      f2, lbl_80517C64@sda21(r2)
	fdivs    f1, f1, f0
	lfs      f0, lbl_80517BF4@sda21(r2)
	fsubs    f31, f2, f1
	fcmpo    cr0, f31, f0
	bge      lbl_8011E82C
	fmr      f31, f0

lbl_8011E82C:
	lfs      f1, lbl_80517C80@sda21(r2)
	lfs      f0, 0x44(r30)
	fmuls    f1, f1, f0
	bl       pikmin2_cosf__Ff
	lfs      f2, lbl_80517C64@sda21(r2)
	lfs      f0, lbl_80517BF4@sda21(r2)
	fsubs    f2, f2, f1
	lfs      f1, lbl_80517BF0@sda21(r2)
	fcmpo    cr0, f31, f0
	fmuls    f1, f1, f2
	stfs     f1, 0x44(r30)
	cror     2, 1, 2
	bne      lbl_8011E880
	fcmpo    cr0, f31, f0
	fmr      f1, f0
	cror     2, 1, 2
	bne      lbl_8011E874
	fmr      f1, f31

lbl_8011E874:
	lfs      f0, 0x44(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x44(r30)

lbl_8011E880:
	lbz      r0, 0x19(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8011E8E0
	lwz      r5, 0x50(r31)
	mr       r3, r30
	addi     r4, r1, 8
	lbz      r0, 0x34(r5)
	stb      r0, 8(r1)
	lbz      r0, 0x35(r5)
	stb      r0, 9(r1)
	lbz      r0, 0x36(r5)
	stb      r0, 0xa(r1)
	lbz      r0, 0x37(r5)
	stb      r0, 0xb(r1)
	bl       calcColor__Q24Game18GameLightEventNodeFP6Color4
	lwz      r3, 0x50(r31)
	lbz      r6, 0xb(r1)
	lbz      r5, 0xa(r1)
	lbz      r4, 9(r1)
	lbz      r0, 8(r1)
	stb      r0, 0x34(r3)
	stb      r4, 0x35(r3)
	stb      r5, 0x36(r3)
	stb      r6, 0x37(r3)

lbl_8011E8E0:
	lbz      r0, 0x19(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8011E940
	lwz      r5, 0x54(r31)
	mr       r3, r30
	addi     r4, r1, 8
	lbz      r0, 0x34(r5)
	stb      r0, 8(r1)
	lbz      r0, 0x35(r5)
	stb      r0, 9(r1)
	lbz      r0, 0x36(r5)
	stb      r0, 0xa(r1)
	lbz      r0, 0x37(r5)
	stb      r0, 0xb(r1)
	bl       calcColor__Q24Game18GameLightEventNodeFP6Color4
	lwz      r3, 0x54(r31)
	lbz      r6, 0xb(r1)
	lbz      r5, 0xa(r1)
	lbz      r4, 9(r1)
	lbz      r0, 8(r1)
	stb      r0, 0x34(r3)
	stb      r4, 0x35(r3)
	stb      r5, 0x36(r3)
	stb      r6, 0x37(r3)

lbl_8011E940:
	lbz      r0, 0x19(r30)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_8011E9A0
	lwz      r5, 0x58(r31)
	mr       r3, r30
	addi     r4, r1, 8
	lbz      r0, 0x34(r5)
	stb      r0, 8(r1)
	lbz      r0, 0x35(r5)
	stb      r0, 9(r1)
	lbz      r0, 0x36(r5)
	stb      r0, 0xa(r1)
	lbz      r0, 0x37(r5)
	stb      r0, 0xb(r1)
	bl       calcColor__Q24Game18GameLightEventNodeFP6Color4
	lwz      r3, 0x58(r31)
	lbz      r6, 0xb(r1)
	lbz      r5, 0xa(r1)
	lbz      r4, 9(r1)
	lbz      r0, 8(r1)
	stb      r0, 0x34(r3)
	stb      r4, 0x35(r3)
	stb      r5, 0x36(r3)
	stb      r6, 0x37(r3)

lbl_8011E9A0:
	lbz      r0, 0x19(r30)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_8011E9F8
	lbz      r0, 0x30(r31)
	mr       r3, r30
	addi     r4, r1, 8
	stb      r0, 8(r1)
	lbz      r0, 0x31(r31)
	stb      r0, 9(r1)
	lbz      r0, 0x32(r31)
	stb      r0, 0xa(r1)
	lbz      r0, 0x33(r31)
	stb      r0, 0xb(r1)
	bl       calcColor__Q24Game18GameLightEventNodeFP6Color4
	lbz      r0, 8(r1)
	stb      r0, 0x30(r31)
	lbz      r0, 9(r1)
	stb      r0, 0x31(r31)
	lbz      r0, 0xa(r1)
	stb      r0, 0x32(r31)
	lbz      r0, 0xb(r1)
	stb      r0, 0x33(r31)

lbl_8011E9F8:
	lbz      r0, 0x19(r30)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8011EA60
	lwz      r3, 0x2344(r31)
	addi     r4, r1, 8
	bl       getColor__6FogMgrFR6Color4
	mr       r3, r30
	addi     r4, r1, 8
	bl       calcColor__Q24Game18GameLightEventNodeFP6Color4
	lwz      r3, 0x2344(r31)
	addi     r4, r1, 8
	bl       setColor__6FogMgrFR6Color4
	lwz      r3, 0x2344(r31)
	lfs      f2, 0x30(r30)
	lfs      f1, 0x1c(r3)
	lfs      f3, 0x44(r30)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x2344(r31)
	stfs     f1, 0x1c(r3)
	lwz      r3, 0x2344(r31)
	lfs      f2, 0x34(r30)
	lfs      f1, 0x20(r3)
	lfs      f3, 0x44(r30)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x2344(r31)
	stfs     f1, 0x20(r3)

lbl_8011EA60:
	lbz      r0, 0x19(r30)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8011EAB8
	lbz      r0, 0x2348(r31)
	mr       r3, r30
	addi     r4, r1, 8
	stb      r0, 8(r1)
	lbz      r0, 0x2349(r31)
	stb      r0, 9(r1)
	lbz      r0, 0x234a(r31)
	stb      r0, 0xa(r1)
	lbz      r0, 0x234b(r31)
	stb      r0, 0xb(r1)
	bl       calcColor__Q24Game18GameLightEventNodeFP6Color4
	lbz      r0, 8(r1)
	stb      r0, 0x2348(r31)
	lbz      r0, 9(r1)
	stb      r0, 0x2349(r31)
	lbz      r0, 0xa(r1)
	stb      r0, 0x234a(r31)
	lbz      r0, 0xb(r1)
	stb      r0, 0x234b(r31)

lbl_8011EAB8:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011EAD8
 * Size:	000464
 */
void GameLightEventNode::calcColor(Color4*)
{
	/*
	stwu     r1, -0x90(r1)
	lbz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8011EC98
	lbz      r0, 0(r4)
	lis      r6, 0x4330
	lbz      r5, 1(r4)
	stw      r0, 0xc(r1)
	lbz      r0, 2(r4)
	stw      r6, 8(r1)
	lfd      f4, lbl_80517BF8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r5, 0x14(r1)
	fsubs    f1, f0, f4
	lfs      f2, 0x1c(r3)
	stw      r6, 0x10(r1)
	lfs      f3, 0x20(r3)
	lfd      f0, 0x10(r1)
	fmuls    f5, f2, f1
	lfs      f1, lbl_80517C84@sda21(r2)
	fsubs    f0, f0, f4
	stw      r0, 0x1c(r1)
	lfs      f2, 0x24(r3)
	fcmpo    cr0, f5, f1
	stw      r6, 0x18(r1)
	fmuls    f3, f3, f0
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f4
	fmuls    f2, f2, f0
	ble      lbl_8011EB54
	b        lbl_8011EB58

lbl_8011EB54:
	fmr      f1, f5

lbl_8011EB58:
	lfs      f0, lbl_80517BF4@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8011EB88
	lfs      f0, lbl_80517C84@sda21(r2)
	lfs      f1, lbl_80517BF0@sda21(r2)
	fcmpo    cr0, f5, f0
	ble      lbl_8011EB7C
	b        lbl_8011EB80

lbl_8011EB7C:
	fmr      f0, f5

lbl_8011EB80:
	fadds    f0, f1, f0
	b        lbl_8011EBA4

lbl_8011EB88:
	lfs      f1, lbl_80517C84@sda21(r2)
	fcmpo    cr0, f5, f1
	ble      lbl_8011EB98
	b        lbl_8011EB9C

lbl_8011EB98:
	fmr      f1, f5

lbl_8011EB9C:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f1, f0

lbl_8011EBA4:
	fctiwz   f0, f0
	lfs      f1, lbl_80517C84@sda21(r2)
	fcmpo    cr0, f3, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	clrlwi   r5, r0, 0x18
	ble      lbl_8011EBC4
	b        lbl_8011EBC8

lbl_8011EBC4:
	fmr      f1, f3

lbl_8011EBC8:
	lfs      f0, lbl_80517BF4@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8011EBF8
	lfs      f0, lbl_80517C84@sda21(r2)
	lfs      f1, lbl_80517BF0@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8011EBEC
	b        lbl_8011EBF0

lbl_8011EBEC:
	fmr      f0, f3

lbl_8011EBF0:
	fadds    f0, f1, f0
	b        lbl_8011EC14

lbl_8011EBF8:
	lfs      f1, lbl_80517C84@sda21(r2)
	fcmpo    cr0, f3, f1
	ble      lbl_8011EC08
	b        lbl_8011EC0C

lbl_8011EC08:
	fmr      f1, f3

lbl_8011EC0C:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f1, f0

lbl_8011EC14:
	fctiwz   f0, f0
	lfs      f1, lbl_80517C84@sda21(r2)
	fcmpo    cr0, f2, f1
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	clrlwi   r6, r0, 0x18
	ble      lbl_8011EC34
	b        lbl_8011EC38

lbl_8011EC34:
	fmr      f1, f2

lbl_8011EC38:
	lfs      f0, lbl_80517BF4@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8011EC68
	lfs      f0, lbl_80517C84@sda21(r2)
	lfs      f1, lbl_80517BF0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8011EC5C
	b        lbl_8011EC60

lbl_8011EC5C:
	fmr      f0, f2

lbl_8011EC60:
	fadds    f0, f1, f0
	b        lbl_8011EC84

lbl_8011EC68:
	lfs      f1, lbl_80517C84@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8011EC78
	b        lbl_8011EC7C

lbl_8011EC78:
	fmr      f1, f2

lbl_8011EC7C:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f1, f0

lbl_8011EC84:
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	clrlwi   r7, r0, 0x18
	b        lbl_8011ED40

lbl_8011EC98:
	lfs      f1, 0x1c(r3)
	lfs      f0, lbl_80517BF4@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8011ECB8
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8011ECC0

lbl_8011ECB8:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f1, f0

lbl_8011ECC0:
	fctiwz   f1, f0
	lfs      f2, 0x20(r3)
	lfs      f0, lbl_80517BF4@sda21(r2)
	stfd     f1, 0x30(r1)
	fcmpo    cr0, f2, f0
	lwz      r0, 0x34(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8011ECF0
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_8011ECF8

lbl_8011ECF0:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_8011ECF8:
	fctiwz   f1, f0
	lfs      f2, 0x24(r3)
	lfs      f0, lbl_80517BF4@sda21(r2)
	stfd     f1, 0x28(r1)
	fcmpo    cr0, f2, f0
	lwz      r0, 0x2c(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8011ED28
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_8011ED30

lbl_8011ED28:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_8011ED30:
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	clrlwi   r7, r0, 0x18

lbl_8011ED40:
	lbz      r8, 0(r4)
	lis      r0, 0x4330
	clrlwi   r5, r5, 0x18
	stw      r0, 0x30(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r5, 0x34(r1)
	lfs      f0, 0x44(r3)
	lfd      f1, 0x30(r1)
	stw      r8, 0x2c(r1)
	fsubs    f4, f1, f5
	lfs      f1, lbl_80517BF4@sda21(r2)
	stw      r0, 0x28(r1)
	lfd      f2, 0x28(r1)
	stw      r8, 0x24(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x20(r1)
	lfd      f2, 0x20(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f5
	fmadds   f2, f0, f3, f2
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8011EDA8
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8011EDB0

lbl_8011EDA8:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_8011EDB0:
	fctiwz   f1, f1
	lis      r0, 0x4330
	clrlwi   r3, r6, 0x18
	stw      r0, 0x10(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stfd     f1, 0x18(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r5, 0x1c(r1)
	stw      r3, 0x14(r1)
	stb      r5, 0(r4)
	lfd      f2, 0x10(r1)
	lbz      r3, 1(r4)
	stw      r0, 8(r1)
	fsubs    f4, f2, f5
	stw      r3, 0xc(r1)
	lfd      f2, 8(r1)
	stw      r3, 0x3c(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x38(r1)
	lfd      f2, 0x38(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f5
	fmadds   f2, f0, f3, f2
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8011EE24
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8011EE2C

lbl_8011EE24:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_8011EE2C:
	fctiwz   f1, f1
	lis      r0, 0x4330
	clrlwi   r3, r7, 0x18
	stw      r0, 0x48(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stfd     f1, 0x40(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r5, 0x44(r1)
	stw      r3, 0x4c(r1)
	stb      r5, 1(r4)
	lfd      f2, 0x48(r1)
	lbz      r3, 2(r4)
	stw      r0, 0x50(r1)
	fsubs    f4, f2, f5
	stw      r3, 0x54(r1)
	lfd      f2, 0x50(r1)
	stw      r3, 0x5c(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x58(r1)
	lfd      f2, 0x58(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f5
	fmadds   f2, f0, f3, f2
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8011EEA0
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8011EEA8

lbl_8011EEA0:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_8011EEA8:
	fctiwz   f1, f1
	lis      r0, 0x4330
	clrlwi   r3, r4, 0x18
	stw      r0, 0x68(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stfd     f1, 0x60(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r5, 0x64(r1)
	stw      r3, 0x6c(r1)
	stb      r5, 2(r4)
	lfd      f2, 0x68(r1)
	lbz      r3, 3(r4)
	stw      r0, 0x70(r1)
	fsubs    f4, f2, f5
	stw      r3, 0x74(r1)
	lfd      f2, 0x70(r1)
	stw      r3, 0x7c(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x78(r1)
	lfd      f2, 0x78(r1)
	fsubs    f3, f4, f3
	fsubs    f2, f2, f5
	fmadds   f2, f0, f3, f2
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8011EF1C
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_8011EF24

lbl_8011EF1C:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_8011EF24:
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	stb      r0, 3(r4)
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011EF3C
 * Size:	000310
 */
GameLightMgr::GameLightMgr(char* p1)
    : LightMgr(p1)
    , mTimeMgr(nullptr)
    , mCamera(nullptr)
    , _2340(0.0f)
    , mShadowColor(0, 0, 0, 160)
{
	_238C[0] = Vector3f::zero;
	_238C[1] = Vector3f::zero;

	start();

	mMainLight             = new LightObj("メインライト", GX_LIGHT0, TYPE_2, JUtility::TColor(255, 255, 255, 255)); // 'main light'
	mMainLight->mSpotFn    = GX_SP_OFF;
	mMainLight->mElevation = Vector3f(0.0f, -1.0f, 0.0f);
	registLightObj(mMainLight);

	mSubLight             = new LightObj("サブライト", GX_LIGHT1, TYPE_2, JUtility::TColor(128, 64, 64, 255)); // 'sub light'
	mSubLight->mSpotFn    = GX_SP_OFF;
	mSubLight->mElevation = Vector3f(0.0f, 1.0f, 0.0f);
	registLightObj(mSubLight);

	mSpecLight          = new LightObj("スペキュラ-ライト", GX_LIGHT7, TYPE_4, JUtility::TColor(255, 255, 255, 255)); // 'specular light'
	mSpecLight->mKScale = 40.0f;
	registLightObj(mSpecLight);

	mFogMgr        = new FogMgr;
	mFogMgr->mType = GX_FOG_LINEAR;
	add(mFogMgr);
	if (shadowMgr) {
		shadowMgr->setShadowColor(&mShadowColor);
	}

	add(&mSettings);

	mEventNodes = new GameLightEventNode[10];
	_235C.clearRelations();
	_2374.clearRelations();

	for (u32 i = 0; i < 10; i++) {
		_2374.add(&mEventNodes[i]);
	}
}

/*
 * --INFO--
 * Address:	8011F4B8
 * Size:	00002C
 */
void GameLightMgr::start()
{
	mFlags.clear();
	mFlags.typeView |= 0x1;
	_2340 = 0.0f;
	_2350 = 0.0f;
	_2354 = 0.0f;
}

/*
 * --INFO--
 * Address:	8011F4E4
 * Size:	0000BC
 */
GameLightEventNode* GameLightMgr::createEventLight(GameLightEventArg& eventArg)
{
	GameLightEventNode* eventNode = static_cast<GameLightEventNode*>(_2374.mChild);

	if (eventNode) {
		eventNode->_18 = eventArg._00;
		eventNode->_19 = eventArg._01;
		eventNode->_1C = eventArg._04;
		eventNode->_20 = eventArg._08;
		eventNode->_24 = eventArg._0C;
		eventNode->_28 = eventArg._10;
		eventNode->_2C = eventArg._14;
		eventNode->_30 = eventArg._18;
		eventNode->_34 = eventArg._1C;
		eventNode->_38 = eventArg._20;
		eventNode->_3C = eventArg._24;
		eventNode->_40 = 0.0f;
		eventNode->_4C = 1;
		eventNode->del();

		_235C.add(eventNode);
	}

	return eventNode;
}

/*
 * --INFO--
 * Address:	8011F5A0
 * Size:	000048
 */
void GameLightMgr::loadParm(Stream& stream)
{
	stream.mMode = STREAM_MODE_TEXT;
	if (stream.mMode == STREAM_MODE_TEXT) {
		stream.mTabCount = 0;
	}

	mSettings.read(stream);
}

/*
 * --INFO--
 * Address:	8011F5E8
 * Size:	001AE8
 */
void GameLightMgr::calcSetting(Game::GameLightTimeSetting*, Game::GameLightTimeSetting*, Game::GameLightTimeSetting*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x320(r1)
	  mflr      r0
	  lfs       f6, -0x6770(r2)
	  stw       r0, 0x324(r1)
	  stw       r31, 0x31C(r1)
	  mr        r31, r6
	  stw       r30, 0x318(r1)
	  mr        r30, r5
	  stw       r29, 0x314(r1)
	  mr        r29, r4
	  stw       r28, 0x310(r1)
	  mr        r28, r3
	  lwz       r3, 0x2338(r3)
	  lfs       f1, 0x214(r3)
	  fcmpo     cr0, f1, f6
	  bge-      .loc_0xD84
	  lfs       f0, -0x66C8(r2)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  fmuls     f0, f0, f1
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x676C(r2)
	  stfs      f0, 0x2340(r28)
	  lwz       r4, 0x3C(r29)
	  lwz       r3, 0x3C(r30)
	  rlwinm    r6,r4,0,24,31
	  lwz       r5, 0x64(r29)
	  rlwinm    r3,r3,0,24,31
	  stw       r6, 0x1C(r1)
	  lwz       r4, 0x8C(r29)
	  rlwinm    r5,r5,0,24,31
	  stw       r3, 0x14(r1)
	  lfd       f0, 0x18(r1)
	  rlwinm    r7,r4,0,24,31
	  lfd       f2, 0x10(r1)
	  stw       r6, 0x24(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lwz       r3, 0xB4(r29)
	  stw       r0, 0x20(r1)
	  lfs       f0, 0x2340(r28)
	  rlwinm    r6,r3,0,24,31
	  lfd       f2, 0x20(r1)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x64(r30)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x8C(r30)
	  lwz       r0, 0xB4(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE8
	  fadds     f1, f6, f2
	  b         .loc_0xEC

	.loc_0xE8:
	  fsubs     f1, f2, f6

	.loc_0xEC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x34(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x30(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x30(r1)
	  stw       r5, 0x3C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x38(r1)
	  lfd       f2, 0x38(r1)
	  stw       r5, 0x44(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x40(r1)
	  lfd       f2, 0x40(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x28(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x158
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x160

	.loc_0x158:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x160:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x54(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x50(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x50(r1)
	  stw       r7, 0x5C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x58(r1)
	  lfd       f2, 0x58(r1)
	  stw       r7, 0x64(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x60(r1)
	  lfd       f2, 0x60(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x48(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x4C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1CC
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1D4

	.loc_0x1CC:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1D4:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x74(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x70(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x70(r1)
	  stw       r6, 0x7C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x78(r1)
	  lfd       f2, 0x78(r1)
	  stw       r6, 0x84(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x80(r1)
	  lfd       f2, 0x80(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x68(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x6C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x240
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x248

	.loc_0x240:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x248:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x88(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x8C(r1)
	  stw       r0, 0x90(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x50(r28)
	  stw       r0, 0x98(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0xF0(r29)
	  lwz       r3, 0xF0(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0xA0(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x140(r29)
	  stw       r3, 0x94(r1)
	  lwz       r5, 0x118(r29)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x9C(r1)
	  lfd       f2, 0x90(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x98(r1)
	  stw       r6, 0xA4(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0xA0(r1)
	  lwz       r0, 0x168(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x118(r30)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x140(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x168(r30)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x318
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x320

	.loc_0x318:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x320:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0xB4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xB0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xB0(r1)
	  stw       r5, 0xBC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xB8(r1)
	  lfd       f2, 0xB8(r1)
	  stw       r5, 0xC4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xC0(r1)
	  lfd       f2, 0xC0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xA8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xAC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x38C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x394

	.loc_0x38C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x394:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0xD4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xD0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xD0(r1)
	  stw       r7, 0xDC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xD8(r1)
	  lfd       f2, 0xD8(r1)
	  stw       r7, 0xE4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xE0(r1)
	  lfd       f2, 0xE0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xC8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xCC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x400
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x408

	.loc_0x400:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x408:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0xF4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xF0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xF0(r1)
	  stw       r6, 0xFC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xF8(r1)
	  lfd       f2, 0xF8(r1)
	  stw       r6, 0x104(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x100(r1)
	  lfd       f2, 0x100(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xE8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xEC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x474
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x47C

	.loc_0x474:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x47C:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x108(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x10C(r1)
	  stw       r0, 0x110(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x54(r28)
	  stw       r0, 0x118(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x1A4(r29)
	  lwz       r3, 0x1A4(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x120(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x1F4(r29)
	  stw       r3, 0x114(r1)
	  lwz       r5, 0x1CC(r29)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x11C(r1)
	  lfd       f2, 0x110(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x118(r1)
	  stw       r6, 0x124(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x120(r1)
	  lwz       r0, 0x21C(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x1CC(r30)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x1F4(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x21C(r30)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x54C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x554

	.loc_0x54C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x554:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x134(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x130(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x130(r1)
	  stw       r5, 0x13C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x138(r1)
	  lfd       f2, 0x138(r1)
	  stw       r5, 0x144(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x140(r1)
	  lfd       f2, 0x140(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x128(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x12C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x5C0
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x5C8

	.loc_0x5C0:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x5C8:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x154(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x150(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x150(r1)
	  stw       r7, 0x15C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x158(r1)
	  lfd       f2, 0x158(r1)
	  stw       r7, 0x164(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x160(r1)
	  lfd       f2, 0x160(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x148(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x14C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x634
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x63C

	.loc_0x634:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x63C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x174(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x170(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x170(r1)
	  stw       r6, 0x17C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x178(r1)
	  lfd       f2, 0x178(r1)
	  stw       r6, 0x184(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x180(r1)
	  lfd       f2, 0x180(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x168(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x16C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x6A8
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x6B0

	.loc_0x6A8:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x6B0:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x188(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x18C(r1)
	  stw       r0, 0x190(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x58(r28)
	  stw       r0, 0x198(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x258(r29)
	  lwz       r3, 0x258(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x1A0(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x2A8(r29)
	  stw       r3, 0x194(r1)
	  lwz       r5, 0x280(r29)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x19C(r1)
	  lfd       f2, 0x190(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x198(r1)
	  stw       r6, 0x1A4(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x1A0(r1)
	  lwz       r0, 0x2D0(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x280(r30)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x2A8(r30)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x2D0(r30)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x780
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x788

	.loc_0x780:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x788:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x1B4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1B0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1B0(r1)
	  stw       r5, 0x1BC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1B8(r1)
	  lfd       f2, 0x1B8(r1)
	  stw       r5, 0x1C4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1C0(r1)
	  lfd       f2, 0x1C0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1A8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1AC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x7F4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x7FC

	.loc_0x7F4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x7FC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x1D4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1D0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1D0(r1)
	  stw       r7, 0x1DC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1D8(r1)
	  lfd       f2, 0x1D8(r1)
	  stw       r7, 0x1E4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1E0(r1)
	  lfd       f2, 0x1E0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1C8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1CC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x868
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x870

	.loc_0x868:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x870:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x1F4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1F0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1F0(r1)
	  stw       r6, 0x1FC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1F8(r1)
	  lfd       f2, 0x1F8(r1)
	  stw       r6, 0x204(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x200(r1)
	  lfd       f2, 0x200(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1E8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1EC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x8DC
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x8E4

	.loc_0x8DC:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x8E4:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r3, 0x8(r1)
	  stw       r0, 0x210(r1)
	  lfd       f5, -0x6768(r2)
	  stfd      f0, 0x208(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r4, 0x20C(r1)
	  stw       r0, 0x218(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0x30(r28)
	  lbz       r3, 0x9(r1)
	  stw       r0, 0x220(r1)
	  stb       r3, 0x31(r28)
	  lbz       r0, 0xA(r1)
	  stb       r0, 0x32(r28)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x33(r28)
	  lwz       r3, 0x30C(r29)
	  lwz       r0, 0x30C(r30)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x334(r29)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x21C(r1)
	  lwz       r3, 0x35C(r29)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x214(r1)
	  lfd       f0, 0x218(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x210(r1)
	  stw       r5, 0x224(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x220(r1)
	  lwz       r5, 0x384(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x334(r30)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x35C(r30)
	  lwz       r0, 0x384(r30)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x9B4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x9BC

	.loc_0x9B4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x9BC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x234(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x230(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x230(r1)
	  stw       r6, 0x23C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x238(r1)
	  lfd       f2, 0x238(r1)
	  stw       r6, 0x244(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x240(r1)
	  lfd       f2, 0x240(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x228(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x22C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA28
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xA30

	.loc_0xA28:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xA30:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x254(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x250(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x250(r1)
	  stw       r7, 0x25C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x258(r1)
	  lfd       f2, 0x258(r1)
	  stw       r7, 0x264(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x260(r1)
	  lfd       f2, 0x260(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x248(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x24C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA9C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xAA4

	.loc_0xA9C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xAA4:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x274(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x270(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x270(r1)
	  stw       r5, 0x27C(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x278(r1)
	  lfd       f2, 0x278(r1)
	  stw       r5, 0x284(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x280(r1)
	  lfd       f2, 0x280(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x268(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x26C(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xB10
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0xB18

	.loc_0xB10:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0xB18:
	  fctiwz    f0, f0
	  addi      r4, r1, 0x8
	  stfd      f0, 0x288(r1)
	  lwz       r0, 0x28C(r1)
	  stb       r0, 0xB(r1)
	  lwz       r3, 0x2344(r28)
	  bl        0x312990
	  lfs       f2, 0x3BC(r29)
	  lis       r0, 0x4330
	  lfs       f0, 0x3BC(r30)
	  lfs       f1, 0x2340(r28)
	  fsubs     f0, f0, f2
	  lwz       r3, 0x2344(r28)
	  stw       r0, 0x290(r1)
	  lfd       f5, -0x6768(r2)
	  fmadds    f0, f1, f0, f2
	  stw       r0, 0x298(r1)
	  lfs       f1, -0x676C(r2)
	  stw       r0, 0x2A0(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f3, 0x3E4(r29)
	  lfs       f0, 0x3E4(r30)
	  lfs       f2, 0x2340(r28)
	  fsubs     f0, f0, f3
	  lwz       r3, 0x2344(r28)
	  fmadds    f0, f2, f0, f3
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x420(r29)
	  lwz       r0, 0x420(r30)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x448(r29)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x29C(r1)
	  lwz       r3, 0x470(r29)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x294(r1)
	  lfd       f0, 0x298(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x290(r1)
	  stw       r5, 0x2A4(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x2A0(r1)
	  lwz       r5, 0x498(r29)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x448(r30)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x470(r30)
	  lwz       r0, 0x498(r30)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC0C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xC14

	.loc_0xC0C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xC14:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x2B4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2B0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2B0(r1)
	  stw       r6, 0x2BC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2B8(r1)
	  lfd       f2, 0x2B8(r1)
	  stw       r6, 0x2C4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2C0(r1)
	  lfd       f2, 0x2C0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2A8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2AC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2348(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC80
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xC88

	.loc_0xC80:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xC88:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x2D4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2D0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2D0(r1)
	  stw       r7, 0x2DC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2D8(r1)
	  lfd       f2, 0x2D8(r1)
	  stw       r7, 0x2E4(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2E0(r1)
	  lfd       f2, 0x2E0(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2C8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2CC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2349(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xCF4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xCFC

	.loc_0xCF4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xCFC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x2F4(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2F0(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2F0(r1)
	  stw       r5, 0x2FC(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2F8(r1)
	  lfd       f2, 0x2F8(r1)
	  stw       r5, 0x304(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x300(r1)
	  lfd       f2, 0x300(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2E8(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2EC(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x234A(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xD68
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0xD70

	.loc_0xD68:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0xD70:
	  fctiwz    f0, f0
	  stfd      f0, 0x308(r1)
	  lwz       r0, 0x30C(r1)
	  stb       r0, 0x234B(r28)
	  b         .loc_0x1AC8

	.loc_0xD84:
	  fsubs     f0, f1, f6
	  lis       r0, 0x4330
	  lfs       f1, -0x66C8(r2)
	  stw       r0, 0x308(r1)
	  fmuls     f0, f1, f0
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x300(r1)
	  lfs       f1, -0x676C(r2)
	  stfs      f0, 0x2340(r28)
	  lwz       r4, 0x3C(r30)
	  lwz       r3, 0x3C(r31)
	  rlwinm    r6,r4,0,24,31
	  lwz       r5, 0x64(r30)
	  rlwinm    r3,r3,0,24,31
	  stw       r6, 0x304(r1)
	  lwz       r4, 0x8C(r30)
	  rlwinm    r7,r5,0,24,31
	  stw       r3, 0x30C(r1)
	  lfd       f0, 0x300(r1)
	  rlwinm    r8,r4,0,24,31
	  lfd       f2, 0x308(r1)
	  stw       r6, 0x2FC(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lwz       r3, 0xB4(r30)
	  stw       r0, 0x2F8(r1)
	  lfs       f0, 0x2340(r28)
	  rlwinm    r6,r3,0,24,31
	  lfd       f2, 0x2F8(r1)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x64(r31)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x8C(r31)
	  lwz       r0, 0xB4(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r5,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE30
	  fadds     f1, f6, f2
	  b         .loc_0xE34

	.loc_0xE30:
	  fsubs     f1, f2, f6

	.loc_0xE34:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x2EC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2E8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2E8(r1)
	  stw       r7, 0x2E4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2E0(r1)
	  lfd       f2, 0x2E0(r1)
	  stw       r7, 0x2DC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2D8(r1)
	  lfd       f2, 0x2D8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2F0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2F4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xEA0
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xEA8

	.loc_0xEA0:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xEA8:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x2CC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2C8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2C8(r1)
	  stw       r8, 0x2C4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2C0(r1)
	  lfd       f2, 0x2C0(r1)
	  stw       r8, 0x2BC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x2B8(r1)
	  lfd       f2, 0x2B8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2D0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2D4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xF14
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xF1C

	.loc_0xF14:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0xF1C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r5, 0x2AC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x2A8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x2A8(r1)
	  stw       r6, 0x2A4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x2A0(r1)
	  lfd       f2, 0x2A0(r1)
	  stw       r6, 0x29C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x298(r1)
	  lfd       f2, 0x298(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x2B0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x2B4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xF88
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0xF90

	.loc_0xF88:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0xF90:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x290(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x294(r1)
	  stw       r0, 0x288(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x50(r28)
	  stw       r0, 0x280(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0xF0(r30)
	  lwz       r3, 0xF0(r31)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x278(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x140(r30)
	  stw       r3, 0x28C(r1)
	  lwz       r5, 0x118(r30)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x284(r1)
	  lfd       f2, 0x288(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x280(r1)
	  stw       r6, 0x27C(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x278(r1)
	  lwz       r0, 0x168(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x118(r31)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x140(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x168(r31)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1060
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1068

	.loc_0x1060:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1068:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x26C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x268(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x268(r1)
	  stw       r5, 0x264(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x260(r1)
	  lfd       f2, 0x260(r1)
	  stw       r5, 0x25C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x258(r1)
	  lfd       f2, 0x258(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x270(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x274(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10D4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x10DC

	.loc_0x10D4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x10DC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x24C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x248(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x248(r1)
	  stw       r7, 0x244(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x240(r1)
	  lfd       f2, 0x240(r1)
	  stw       r7, 0x23C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x238(r1)
	  lfd       f2, 0x238(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x250(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x254(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1148
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1150

	.loc_0x1148:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1150:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x22C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x228(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x228(r1)
	  stw       r6, 0x224(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x220(r1)
	  lfd       f2, 0x220(r1)
	  stw       r6, 0x21C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x218(r1)
	  lfd       f2, 0x218(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x230(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x234(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x11BC
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x11C4

	.loc_0x11BC:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x11C4:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x210(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x214(r1)
	  stw       r0, 0x208(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x54(r28)
	  stw       r0, 0x200(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x1A4(r30)
	  lwz       r3, 0x1A4(r31)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x1F8(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x1F4(r30)
	  stw       r3, 0x20C(r1)
	  lwz       r5, 0x1CC(r30)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x204(r1)
	  lfd       f2, 0x208(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x200(r1)
	  stw       r6, 0x1FC(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x1F8(r1)
	  lwz       r0, 0x21C(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x1CC(r31)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x1F4(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x21C(r31)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1294
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x129C

	.loc_0x1294:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x129C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x1EC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1E8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1E8(r1)
	  stw       r5, 0x1E4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1E0(r1)
	  lfd       f2, 0x1E0(r1)
	  stw       r5, 0x1DC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1D8(r1)
	  lfd       f2, 0x1D8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1F0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1F4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1308
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1310

	.loc_0x1308:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1310:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x1CC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1C8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1C8(r1)
	  stw       r7, 0x1C4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1C0(r1)
	  lfd       f2, 0x1C0(r1)
	  stw       r7, 0x1BC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x1B8(r1)
	  lfd       f2, 0x1B8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1D0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1D4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x137C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1384

	.loc_0x137C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1384:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x1AC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x1A8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x1A8(r1)
	  stw       r6, 0x1A4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x1A0(r1)
	  lfd       f2, 0x1A0(r1)
	  stw       r6, 0x19C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x198(r1)
	  lfd       f2, 0x198(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x1B0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x1B4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x13F0
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x13F8

	.loc_0x13F0:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x13F8:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r7, 0xA(r1)
	  lbz       r6, 0x9(r1)
	  stfd      f0, 0x190(r1)
	  lbz       r3, 0x8(r1)
	  lwz       r4, 0x194(r1)
	  stw       r0, 0x188(r1)
	  lfd       f5, -0x6768(r2)
	  stb       r4, 0xB(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r5, 0x58(r28)
	  stw       r0, 0x180(r1)
	  stb       r3, 0x34(r5)
	  stb       r6, 0x35(r5)
	  stb       r7, 0x36(r5)
	  stb       r4, 0x37(r5)
	  lwz       r4, 0x258(r30)
	  lwz       r3, 0x258(r31)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x178(r1)
	  rlwinm    r3,r3,0,24,31
	  lwz       r4, 0x2A8(r30)
	  stw       r3, 0x18C(r1)
	  lwz       r5, 0x280(r30)
	  rlwinm    r7,r4,0,24,31
	  stw       r6, 0x184(r1)
	  lfd       f2, 0x188(r1)
	  rlwinm    r5,r5,0,24,31
	  lfd       f0, 0x180(r1)
	  stw       r6, 0x17C(r1)
	  fsubs     f4, f2, f5
	  fsubs     f3, f0, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x178(r1)
	  lwz       r0, 0x2D0(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x280(r31)
	  fsubs     f2, f2, f5
	  rlwinm    r6,r0,0,24,31
	  lwz       r3, 0x2A8(r31)
	  rlwinm    r4,r4,0,24,31
	  fmadds    f2, f0, f3, f2
	  lwz       r0, 0x2D0(r31)
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x14C8
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x14D0

	.loc_0x14C8:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x14D0:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x16C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x168(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x168(r1)
	  stw       r5, 0x164(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x160(r1)
	  lfd       f2, 0x160(r1)
	  stw       r5, 0x15C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x158(r1)
	  lfd       f2, 0x158(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x170(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x174(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x153C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1544

	.loc_0x153C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1544:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x14C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x148(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x148(r1)
	  stw       r7, 0x144(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x140(r1)
	  lfd       f2, 0x140(r1)
	  stw       r7, 0x13C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x138(r1)
	  lfd       f2, 0x138(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x150(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x154(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x15B0
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x15B8

	.loc_0x15B0:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x15B8:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x12C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x128(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x128(r1)
	  stw       r6, 0x124(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x120(r1)
	  lfd       f2, 0x120(r1)
	  stw       r6, 0x11C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x118(r1)
	  lfd       f2, 0x118(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x130(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x134(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1624
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x162C

	.loc_0x1624:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x162C:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  lbz       r3, 0x8(r1)
	  stw       r0, 0x108(r1)
	  lfd       f5, -0x6768(r2)
	  stfd      f0, 0x110(r1)
	  lfs       f1, -0x676C(r2)
	  lwz       r4, 0x114(r1)
	  stw       r0, 0x100(r1)
	  stb       r4, 0xB(r1)
	  stb       r3, 0x30(r28)
	  lbz       r3, 0x9(r1)
	  stw       r0, 0xF8(r1)
	  stb       r3, 0x31(r28)
	  lbz       r0, 0xA(r1)
	  stb       r0, 0x32(r28)
	  lbz       r0, 0xB(r1)
	  stb       r0, 0x33(r28)
	  lwz       r3, 0x30C(r30)
	  lwz       r0, 0x30C(r31)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x334(r30)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x104(r1)
	  lwz       r3, 0x35C(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x10C(r1)
	  lfd       f0, 0x100(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x108(r1)
	  stw       r5, 0xFC(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0xF8(r1)
	  lwz       r5, 0x384(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x334(r31)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x35C(r31)
	  lwz       r0, 0x384(r31)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x16FC
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1704

	.loc_0x16FC:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1704:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0xEC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xE8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xE8(r1)
	  stw       r6, 0xE4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xE0(r1)
	  lfd       f2, 0xE0(r1)
	  stw       r6, 0xDC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xD8(r1)
	  lfd       f2, 0xD8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xF0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xF4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x8(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1770
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1778

	.loc_0x1770:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1778:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0xCC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xC8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xC8(r1)
	  stw       r7, 0xC4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xC0(r1)
	  lfd       f2, 0xC0(r1)
	  stw       r7, 0xBC(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0xB8(r1)
	  lfd       f2, 0xB8(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xD0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xD4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x9(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x17E4
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x17EC

	.loc_0x17E4:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x17EC:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0xAC(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0xA8(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0xA8(r1)
	  stw       r5, 0xA4(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0xA0(r1)
	  lfd       f2, 0xA0(r1)
	  stw       r5, 0x9C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x98(r1)
	  lfd       f2, 0x98(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0xB0(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0xB4(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0xA(r1)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1858
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x1860

	.loc_0x1858:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x1860:
	  fctiwz    f0, f0
	  addi      r4, r1, 0x8
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  stb       r0, 0xB(r1)
	  lwz       r3, 0x2344(r28)
	  bl        0x311C48
	  lfs       f2, 0x3BC(r30)
	  lis       r0, 0x4330
	  lfs       f0, 0x3BC(r31)
	  lfs       f1, 0x2340(r28)
	  fsubs     f0, f0, f2
	  lwz       r3, 0x2344(r28)
	  stw       r0, 0x88(r1)
	  lfd       f5, -0x6768(r2)
	  fmadds    f0, f1, f0, f2
	  stw       r0, 0x80(r1)
	  lfs       f1, -0x676C(r2)
	  stw       r0, 0x78(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f3, 0x3E4(r30)
	  lfs       f0, 0x3E4(r31)
	  lfs       f2, 0x2340(r28)
	  fsubs     f0, f0, f3
	  lwz       r3, 0x2344(r28)
	  fmadds    f0, f2, f0, f3
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x420(r30)
	  lwz       r0, 0x420(r31)
	  rlwinm    r5,r3,0,24,31
	  lwz       r4, 0x448(r30)
	  rlwinm    r0,r0,0,24,31
	  stw       r5, 0x84(r1)
	  lwz       r3, 0x470(r30)
	  rlwinm    r6,r4,0,24,31
	  stw       r0, 0x8C(r1)
	  lfd       f0, 0x80(r1)
	  rlwinm    r7,r3,0,24,31
	  lfd       f2, 0x88(r1)
	  stw       r5, 0x7C(r1)
	  fsubs     f3, f0, f5
	  fsubs     f4, f2, f5
	  lfs       f0, 0x2340(r28)
	  lfd       f2, 0x78(r1)
	  lwz       r5, 0x498(r30)
	  fsubs     f3, f4, f3
	  lwz       r4, 0x448(r31)
	  fsubs     f2, f2, f5
	  lwz       r3, 0x470(r31)
	  lwz       r0, 0x498(r31)
	  rlwinm    r5,r5,0,24,31
	  fmadds    f2, f0, f3, f2
	  rlwinm    r4,r4,0,24,31
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r8,r0,0,24,31
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1954
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x195C

	.loc_0x1954:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x195C:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r4, 0x6C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x68(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x68(r1)
	  stw       r6, 0x64(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x60(r1)
	  lfd       f2, 0x60(r1)
	  stw       r6, 0x5C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x58(r1)
	  lfd       f2, 0x58(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x70(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x74(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2348(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x19C8
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x19D0

	.loc_0x19C8:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x19D0:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r3, 0x4C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x48(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x48(r1)
	  stw       r7, 0x44(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x40(r1)
	  lfd       f2, 0x40(r1)
	  stw       r7, 0x3C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x38(r1)
	  lfd       f2, 0x38(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x50(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x54(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x2349(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1A3C
	  lfs       f1, -0x6770(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x1A44

	.loc_0x1A3C:
	  lfs       f1, -0x6770(r2)
	  fsubs     f1, f2, f1

	.loc_0x1A44:
	  lis       r0, 0x4330
	  fctiwz    f6, f1
	  stw       r8, 0x2C(r1)
	  lfd       f5, -0x6768(r2)
	  stw       r0, 0x28(r1)
	  lfs       f1, -0x676C(r2)
	  lfd       f2, 0x28(r1)
	  stw       r5, 0x24(r1)
	  fsubs     f4, f2, f5
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x20(r1)
	  stw       r5, 0x1C(r1)
	  fsubs     f3, f2, f5
	  stw       r0, 0x18(r1)
	  lfd       f2, 0x18(r1)
	  fsubs     f3, f4, f3
	  stfd      f6, 0x30(r1)
	  fsubs     f2, f2, f5
	  lwz       r0, 0x34(r1)
	  fmadds    f2, f0, f3, f2
	  stb       r0, 0x234A(r28)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1AB0
	  lfs       f0, -0x6770(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x1AB8

	.loc_0x1AB0:
	  lfs       f0, -0x6770(r2)
	  fsubs     f0, f2, f0

	.loc_0x1AB8:
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r0, 0x234B(r28)

	.loc_0x1AC8:
	  lwz       r0, 0x324(r1)
	  lwz       r31, 0x31C(r1)
	  lwz       r30, 0x318(r1)
	  lwz       r29, 0x314(r1)
	  lwz       r28, 0x310(r1)
	  mtlr      r0
	  addi      r1, r1, 0x320
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801210D0
 * Size:	0001F0
 */
void GameLightMgr::updateSunType()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	lwz      r4, 0x2338(r3)
	cmplwi   r4, 0
	beq      lbl_801212A8
	lwz      r0, 0x210(r4)
	cmpwi    r0, 2
	beq      lbl_8012114C
	bge      lbl_80121114
	cmpwi    r0, 0
	beq      lbl_80121124
	bge      lbl_80121138
	b        lbl_801212A8

lbl_80121114:
	cmpwi    r0, 4
	beq      lbl_80121298
	bge      lbl_801212A8
	b        lbl_80121284

lbl_80121124:
	addi     r4, r31, 0x118
	mr       r5, r4
	mr       r6, r4
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_80121138:
	addi     r4, r31, 0x118
	addi     r5, r31, 0x5c8
	addi     r6, r31, 0xa78
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_8012114C:
	lfs      f1, 0x20c(r4)
	lfs      f0, lbl_80517CA4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8012126C
	lhz      r0, 0x234c(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_8012126C
	li       r7, 0
	lfs      f6, lbl_80517C94@sda21(r2)
	stb      r7, 8(r1)
	ori      r6, r7, 3
	clrlwi   r0, r6, 0x18
	lfs      f0, lbl_80517BF0@sda21(r2)
	stb      r7, 9(r1)
	ori      r5, r7, 1
	lfs      f5, lbl_80517C98@sda21(r2)
	ori      r3, r0, 1
	stb      r7, 8(r1)
	clrlwi   r4, r5, 0x18
	lwz      r30, 0x2384(r31)
	clrlwi   r0, r3, 0x18
	stb      r6, 8(r1)
	ori      r4, r4, 1
	lfs      f4, lbl_80517BF4@sda21(r2)
	cmplwi   r30, 0
	stb      r7, 9(r1)
	ori      r0, r0, 2
	lfs      f3, lbl_80517C9C@sda21(r2)
	stb      r5, 9(r1)
	lfs      f2, lbl_80517CA0@sda21(r2)
	stb      r3, 8(r1)
	lfs      f1, lbl_80517CA8@sda21(r2)
	stfs     f0, 0x18(r1)
	lfs      f0, lbl_80517CAC@sda21(r2)
	stfs     f6, 0xc(r1)
	stfs     f6, 0x10(r1)
	stfs     f6, 0x14(r1)
	stfs     f5, 0x1c(r1)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stw      r7, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stb      r4, 9(r1)
	stfs     f1, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stb      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f0, 0x14(r1)
	beq      lbl_80121260
	stb      r0, 0x18(r30)
	li       r0, 1
	mr       r3, r30
	stb      r4, 0x19(r30)
	stfs     f0, 0x1c(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f1, 0x28(r30)
	stfs     f1, 0x2c(r30)
	stfs     f4, 0x30(r30)
	stfs     f3, 0x34(r30)
	stw      r7, 0x38(r30)
	stfs     f2, 0x3c(r30)
	stfs     f4, 0x40(r30)
	stw      r0, 0x4c(r30)
	bl       del__5CNodeFv
	mr       r4, r30
	addi     r3, r31, 0x235c
	bl       add__5CNodeFP5CNode

lbl_80121260:
	lhz      r0, 0x234c(r31)
	ori      r0, r0, 2
	sth      r0, 0x234c(r31)

lbl_8012126C:
	addi     r4, r31, 0xa78
	mr       r3, r31
	mr       r5, r4
	mr       r6, r4
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_80121284:
	addi     r4, r31, 0xa78
	addi     r5, r31, 0xf28
	addi     r6, r31, 0x118
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting
	b        lbl_801212A8

lbl_80121298:
	addi     r4, r31, 0x13d8
	mr       r5, r4
	mr       r6, r4
	bl
calcSetting__Q24Game12GameLightMgrFPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSettingPQ24Game20GameLightTimeSetting

lbl_801212A8:
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
 * Address:	801212C0
 * Size:	000C00
 */
void GameLightMgr::updateSpotType()
{
	/*
	stwu     r1, -0x2a0(r1)
	mflr     r0
	li       r4, 4
	stw      r0, 0x2a4(r1)
	stw      r31, 0x29c(r1)
	mr       r31, r3
	lwz      r5, playData__4Game@sda21(r13)
	addi     r3, r5, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80121314
	lfs      f2, 0x2350(r31)
	lfs      f1, lbl_80517CB0@sda21(r2)
	lfs      f0, lbl_80517C64@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2350(r31)
	lfs      f1, 0x2350(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_80121338
	stfs     f0, 0x2350(r31)
	b        lbl_80121338

lbl_80121314:
	lfs      f2, 0x2350(r31)
	lfs      f1, lbl_80517CB0@sda21(r2)
	lfs      f0, lbl_80517BF4@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x2350(r31)
	lfs      f1, 0x2350(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80121338
	stfs     f0, 0x2350(r31)

lbl_80121338:
	lfs      f1, lbl_80517C80@sda21(r2)
	lfs      f0, 0x2350(r31)
	fmuls    f1, f1, f0
	bl       pikmin2_cosf__Ff
	lfs      f0, lbl_80517C64@sda21(r2)
	lis      r0, 0x4330
	lfs      f6, lbl_80517BF0@sda21(r2)
	fsubs    f0, f0, f1
	stw      r0, 0x10(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x18(r1)
	fmuls    f0, f6, f0
	lfs      f1, lbl_80517BF4@sda21(r2)
	stw      r0, 0x20(r1)
	stfs     f0, 0x2354(r31)
	lwz      r3, 0x1e54(r31)
	lwz      r0, 0x18fc(r31)
	clrlwi   r5, r3, 0x18
	lwz      r4, 0x1e7c(r31)
	clrlwi   r0, r0, 0x18
	stw      r5, 0x1c(r1)
	lwz      r3, 0x1ea4(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x14(r1)
	lfd      f0, 0x18(r1)
	clrlwi   r7, r3, 0x18
	lfd      f2, 0x10(r1)
	stw      r5, 0x24(r1)
	fsubs    f3, f0, f5
	fsubs    f4, f2, f5
	lwz      r0, 0x1ecc(r31)
	lfd      f2, 0x20(r1)
	lfs      f0, 0x2354(r31)
	clrlwi   r5, r0, 0x18
	fsubs    f3, f4, f3
	fsubs    f2, f2, f5
	lwz      r4, 0x1924(r31)
	lwz      r3, 0x194c(r31)
	lwz      r0, 0x1974(r31)
	clrlwi   r4, r4, 0x18
	fmadds   f2, f0, f3, f2
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801213F8
	fadds    f1, f6, f2
	b        lbl_801213FC

lbl_801213F8:
	fsubs    f1, f2, f6

lbl_801213FC:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x34(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x30(r1)
	stw      r6, 0x3c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x38(r1)
	lfd      f2, 0x38(r1)
	stw      r6, 0x44(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x40(r1)
	lfd      f2, 0x40(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x28(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x2c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121468
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121470

lbl_80121468:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121470:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x54(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x50(r1)
	stw      r7, 0x5c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x58(r1)
	lfd      f2, 0x58(r1)
	stw      r7, 0x64(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x60(r1)
	lfd      f2, 0x60(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x48(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x4c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801214DC
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_801214E4

lbl_801214DC:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_801214E4:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x74(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x70(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x70(r1)
	stw      r5, 0x7c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x78(r1)
	lfd      f2, 0x78(r1)
	stw      r5, 0x84(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x80(r1)
	lfd      f2, 0x80(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x68(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x6c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121550
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_80121558

lbl_80121550:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_80121558:
	fctiwz   f0, f0
	lbz      r6, 0xa(r1)
	lbz      r5, 9(r1)
	lbz      r0, 8(r1)
	stfd     f0, 0x88(r1)
	lwz      r3, 0x8c(r1)
	stb      r3, 0xb(r1)
	lwz      r4, 0x50(r31)
	stb      r0, 0x34(r4)
	stb      r5, 0x35(r4)
	stb      r6, 0x36(r4)
	stb      r3, 0x37(r4)
	lfs      f1, 0x1f08(r31)
	lfs      f2, 0x19b0(r31)
	lfs      f3, 0x2354(r31)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x50(r31)
	lis      r0, 0x4330
	stw      r0, 0x90(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stfs     f1, 0x44(r3)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r4, 0x1f40(r31)
	lwz      r3, 0x19e8(r31)
	clrlwi   r5, r4, 0x18
	stw      r0, 0x98(r1)
	clrlwi   r3, r3, 0x18
	lwz      r4, 0x1f68(r31)
	stw      r3, 0x94(r1)
	lwz      r3, 0x1f90(r31)
	clrlwi   r6, r4, 0x18
	stw      r5, 0x9c(r1)
	lfd      f2, 0x90(r1)
	clrlwi   r7, r3, 0x18
	lfd      f0, 0x98(r1)
	stw      r5, 0xa4(r1)
	fsubs    f4, f2, f5
	fsubs    f3, f0, f5
	lfs      f0, 0x2354(r31)
	stw      r0, 0xa0(r1)
	lwz      r0, 0x1fb8(r31)
	lfd      f2, 0xa0(r1)
	fsubs    f3, f4, f3
	lwz      r4, 0x1a10(r31)
	clrlwi   r5, r0, 0x18
	fsubs    f2, f2, f5
	lwz      r3, 0x1a38(r31)
	lwz      r0, 0x1a60(r31)
	clrlwi   r4, r4, 0x18
	clrlwi   r3, r3, 0x18
	fmadds   f2, f0, f3, f2
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121640
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121648

lbl_80121640:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121648:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0xb4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0xb0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0xb0(r1)
	stw      r6, 0xbc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0xb8(r1)
	lfd      f2, 0xb8(r1)
	stw      r6, 0xc4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0xc0(r1)
	lfd      f2, 0xc0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0xa8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0xac(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801216B4
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_801216BC

lbl_801216B4:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_801216BC:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0xd4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0xd0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0xd0(r1)
	stw      r7, 0xdc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0xd8(r1)
	lfd      f2, 0xd8(r1)
	stw      r7, 0xe4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0xe0(r1)
	lfd      f2, 0xe0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0xc8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0xcc(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121728
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121730

lbl_80121728:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121730:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0xf4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0xf0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0xf0(r1)
	stw      r5, 0xfc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0xf8(r1)
	lfd      f2, 0xf8(r1)
	stw      r5, 0x104(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x100(r1)
	lfd      f2, 0x100(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0xe8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0xec(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8012179C
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_801217A4

lbl_8012179C:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_801217A4:
	fctiwz   f0, f0
	lis      r0, 0x4330
	lbz      r7, 0xa(r1)
	lbz      r6, 9(r1)
	stfd     f0, 0x108(r1)
	lbz      r3, 8(r1)
	lwz      r4, 0x10c(r1)
	stw      r0, 0x110(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stb      r4, 0xb(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r5, 0x54(r31)
	stw      r0, 0x118(r1)
	stb      r3, 0x34(r5)
	stb      r6, 0x35(r5)
	stb      r7, 0x36(r5)
	stb      r4, 0x37(r5)
	lwz      r4, 0x202c(r31)
	lwz      r3, 0x1ad4(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x120(r1)
	clrlwi   r3, r3, 0x18
	lwz      r4, 0x207c(r31)
	stw      r3, 0x114(r1)
	lwz      r5, 0x2054(r31)
	clrlwi   r7, r4, 0x18
	stw      r6, 0x11c(r1)
	lfd      f2, 0x110(r1)
	clrlwi   r5, r5, 0x18
	lfd      f0, 0x118(r1)
	stw      r6, 0x124(r1)
	fsubs    f4, f2, f5
	fsubs    f3, f0, f5
	lfs      f0, 0x2354(r31)
	lfd      f2, 0x120(r1)
	lwz      r0, 0x20a4(r31)
	fsubs    f3, f4, f3
	lwz      r4, 0x1afc(r31)
	fsubs    f2, f2, f5
	clrlwi   r6, r0, 0x18
	lwz      r3, 0x1b24(r31)
	clrlwi   r4, r4, 0x18
	fmadds   f2, f0, f3, f2
	lwz      r0, 0x1b4c(r31)
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121874
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8012187C

lbl_80121874:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_8012187C:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x134(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x130(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x130(r1)
	stw      r5, 0x13c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x138(r1)
	lfd      f2, 0x138(r1)
	stw      r5, 0x144(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x140(r1)
	lfd      f2, 0x140(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x128(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x12c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801218E8
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_801218F0

lbl_801218E8:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_801218F0:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x154(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x150(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x150(r1)
	stw      r7, 0x15c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x158(r1)
	lfd      f2, 0x158(r1)
	stw      r7, 0x164(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x160(r1)
	lfd      f2, 0x160(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x148(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x14c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8012195C
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121964

lbl_8012195C:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121964:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x174(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x170(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x170(r1)
	stw      r6, 0x17c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x178(r1)
	lfd      f2, 0x178(r1)
	stw      r6, 0x184(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x180(r1)
	lfd      f2, 0x180(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x168(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x16c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_801219D0
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_801219D8

lbl_801219D0:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_801219D8:
	fctiwz   f0, f0
	lis      r0, 0x4330
	lbz      r7, 0xa(r1)
	lbz      r6, 9(r1)
	stfd     f0, 0x188(r1)
	lbz      r3, 8(r1)
	lwz      r4, 0x18c(r1)
	stw      r0, 0x190(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stb      r4, 0xb(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r5, 0x58(r31)
	stw      r0, 0x198(r1)
	stb      r3, 0x34(r5)
	stb      r6, 0x35(r5)
	stb      r7, 0x36(r5)
	stb      r4, 0x37(r5)
	lwz      r4, 0x20e0(r31)
	lwz      r3, 0x1b88(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x1a0(r1)
	clrlwi   r3, r3, 0x18
	lwz      r4, 0x2130(r31)
	stw      r3, 0x194(r1)
	lwz      r5, 0x2108(r31)
	clrlwi   r7, r4, 0x18
	stw      r6, 0x19c(r1)
	lfd      f2, 0x190(r1)
	clrlwi   r5, r5, 0x18
	lfd      f0, 0x198(r1)
	stw      r6, 0x1a4(r1)
	fsubs    f4, f2, f5
	fsubs    f3, f0, f5
	lfs      f0, 0x2354(r31)
	lfd      f2, 0x1a0(r1)
	lwz      r0, 0x2158(r31)
	fsubs    f3, f4, f3
	lwz      r4, 0x1bb0(r31)
	fsubs    f2, f2, f5
	clrlwi   r6, r0, 0x18
	lwz      r3, 0x1bd8(r31)
	clrlwi   r4, r4, 0x18
	fmadds   f2, f0, f3, f2
	lwz      r0, 0x1c00(r31)
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121AA8
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121AB0

lbl_80121AA8:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121AB0:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x1b4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x1b0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x1b0(r1)
	stw      r5, 0x1bc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x1b8(r1)
	lfd      f2, 0x1b8(r1)
	stw      r5, 0x1c4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x1c0(r1)
	lfd      f2, 0x1c0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x1a8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x1ac(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121B1C
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121B24

lbl_80121B1C:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121B24:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x1d4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x1d0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x1d0(r1)
	stw      r7, 0x1dc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x1d8(r1)
	lfd      f2, 0x1d8(r1)
	stw      r7, 0x1e4(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x1e0(r1)
	lfd      f2, 0x1e0(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x1c8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x1cc(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121B90
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121B98

lbl_80121B90:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121B98:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x1f4(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x1f0(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x1f0(r1)
	stw      r6, 0x1fc(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x1f8(r1)
	lfd      f2, 0x1f8(r1)
	stw      r6, 0x204(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x200(r1)
	lfd      f2, 0x200(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x1e8(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x1ec(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121C04
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_80121C0C

lbl_80121C04:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_80121C0C:
	fctiwz   f0, f0
	lis      r0, 0x4330
	lbz      r3, 8(r1)
	stw      r0, 0x210(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stfd     f0, 0x208(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lwz      r4, 0x20c(r1)
	stw      r0, 0x218(r1)
	stb      r4, 0xb(r1)
	stb      r3, 0x30(r31)
	lbz      r3, 9(r1)
	stw      r0, 0x220(r1)
	stb      r3, 0x31(r31)
	lbz      r0, 0xa(r1)
	stb      r0, 0x32(r31)
	lbz      r0, 0xb(r1)
	stb      r0, 0x33(r31)
	lwz      r3, 0x2194(r31)
	lwz      r0, 0x1c3c(r31)
	clrlwi   r5, r3, 0x18
	lwz      r4, 0x21bc(r31)
	clrlwi   r0, r0, 0x18
	stw      r5, 0x21c(r1)
	lwz      r3, 0x21e4(r31)
	clrlwi   r6, r4, 0x18
	stw      r0, 0x214(r1)
	lfd      f0, 0x218(r1)
	clrlwi   r7, r3, 0x18
	lfd      f2, 0x210(r1)
	stw      r5, 0x224(r1)
	fsubs    f3, f0, f5
	fsubs    f4, f2, f5
	lfs      f0, 0x2354(r31)
	lfd      f2, 0x220(r1)
	lwz      r5, 0x220c(r31)
	fsubs    f3, f4, f3
	lwz      r4, 0x1c64(r31)
	fsubs    f2, f2, f5
	lwz      r3, 0x1c8c(r31)
	lwz      r0, 0x1cb4(r31)
	clrlwi   r5, r5, 0x18
	fmadds   f2, f0, f3, f2
	clrlwi   r4, r4, 0x18
	clrlwi   r3, r3, 0x18
	clrlwi   r8, r0, 0x18
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121CDC
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121CE4

lbl_80121CDC:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121CE4:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r4, 0x234(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x230(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x230(r1)
	stw      r6, 0x23c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x238(r1)
	lfd      f2, 0x238(r1)
	stw      r6, 0x244(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x240(r1)
	lfd      f2, 0x240(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x228(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x22c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 8(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121D50
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121D58

lbl_80121D50:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121D58:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r3, 0x254(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x250(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x250(r1)
	stw      r7, 0x25c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x258(r1)
	lfd      f2, 0x258(r1)
	stw      r7, 0x264(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x260(r1)
	lfd      f2, 0x260(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x248(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x24c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 9(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121DC4
	lfs      f1, lbl_80517BF0@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_80121DCC

lbl_80121DC4:
	lfs      f1, lbl_80517BF0@sda21(r2)
	fsubs    f1, f2, f1

lbl_80121DCC:
	lis      r0, 0x4330
	fctiwz   f6, f1
	stw      r8, 0x274(r1)
	lfd      f5, lbl_80517BF8@sda21(r2)
	stw      r0, 0x270(r1)
	lfs      f1, lbl_80517BF4@sda21(r2)
	lfd      f2, 0x270(r1)
	stw      r5, 0x27c(r1)
	fsubs    f4, f2, f5
	stw      r0, 0x278(r1)
	lfd      f2, 0x278(r1)
	stw      r5, 0x284(r1)
	fsubs    f3, f2, f5
	stw      r0, 0x280(r1)
	lfd      f2, 0x280(r1)
	fsubs    f3, f4, f3
	stfd     f6, 0x268(r1)
	fsubs    f2, f2, f5
	lwz      r0, 0x26c(r1)
	fmadds   f2, f0, f3, f2
	stb      r0, 0xa(r1)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_80121E38
	lfs      f0, lbl_80517BF0@sda21(r2)
	fadds    f0, f0, f2
	b        lbl_80121E40

lbl_80121E38:
	lfs      f0, lbl_80517BF0@sda21(r2)
	fsubs    f0, f2, f0

lbl_80121E40:
	fctiwz   f0, f0
	addi     r4, r1, 8
	stfd     f0, 0x288(r1)
	lwz      r0, 0x28c(r1)
	stb      r0, 0xb(r1)
	lwz      r3, 0x2344(r31)
	bl       setColor__6FogMgrFR6Color4
	lfs      f1, 0x2244(r31)
	lfs      f2, 0x1cec(r31)
	lfs      f3, 0x2354(r31)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x2344(r31)
	stfs     f1, 0x1c(r3)
	lfs      f1, 0x226c(r31)
	lfs      f2, 0x1d14(r31)
	lfs      f3, 0x2354(r31)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x2344(r31)
	stfs     f1, 0x20(r3)
	lwz      r0, 0x1d50(r31)
	stb      r0, 0x2348(r31)
	lwz      r0, 0x1d78(r31)
	stb      r0, 0x2349(r31)
	lwz      r0, 0x1da0(r31)
	stb      r0, 0x234a(r31)
	lwz      r0, 0x1dc8(r31)
	stb      r0, 0x234b(r31)
	lwz      r0, 0x2a4(r1)
	lwz      r31, 0x29c(r1)
	mtlr     r0
	addi     r1, r1, 0x2a0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80121EC0
 * Size:	000094
 */
void GameLightMgr::update()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0x74(r3)
	cmplwi   r0, 0
	bne      lbl_80121EF0
	bl       updateSunType__Q24Game12GameLightMgrFv
	b        lbl_80121EF4

lbl_80121EF0:
	bl       updateSpotType__Q24Game12GameLightMgrFv

lbl_80121EF4:
	lwz      r31, 0x236c(r29)
	b        lbl_80121F30

lbl_80121EFC:
	lwz      r30, 4(r31)
	mr       r3, r31
	mr       r4, r29
	bl       update__Q24Game18GameLightEventNodeFPQ24Game12GameLightMgr
	lwz      r0, 0x4c(r31)
	cmpwi    r0, 0
	bne      lbl_80121F2C
	mr       r3, r31
	bl       del__5CNodeFv
	mr       r4, r31
	addi     r3, r29, 0x2374
	bl       add__5CNodeFP5CNode

lbl_80121F2C:
	mr       r31, r30

lbl_80121F30:
	cmplwi   r31, 0
	bne      lbl_80121EFC
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
 * Address:	80121F54
 * Size:	000054
 */
void GameLightMgr::set(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x25c(r4)
	bl       updatePosition__Q24Game12GameLightMgrFP8Viewport
	mr       r3, r30
	mr       r4, r31
	bl       set__8LightMgrFR8Graphics
	lwz      r3, 0x2344(r30)
	mr       r4, r31
	bl       set__6FogMgrFR8Graphics
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
 * Address:	80121FA8
 * Size:	0002C0
 */
void GameLightMgr::updatePosition(Viewport*)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x74(r3)
	cmplwi   r0, 0
	bne      lbl_80122104
	lwz      r3, 0x50(r30)
	li       r0, 0
	stb      r0, 0x49(r3)
	lwz      r3, 0x54(r30)
	stb      r0, 0x49(r3)
	lfs      f0, 0x104(r30)
	lfs      f31, 0xdc(r30)
	lwz      r3, 0x2338(r30)
	fsubs    f30, f0, f31
	bl       getSunGaugeRatio__Q24Game7TimeMgrFv
	fmadds   f3, f30, f1, f31
	lfs      f2, lbl_80517CB4@sda21(r2)
	lfs      f0, lbl_80517CB8@sda21(r2)
	lfs      f1, lbl_80517C80@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f0, f0, f2
	fmuls    f31, f1, f0
	fmr      f1, f31
	bl       pikmin2_cosf__Ff
	lfs      f0, 0xb4(r30)
	fmuls    f0, f1, f0
	fmr      f1, f31
	stfs     f0, 0x14(r1)
	bl       pikmin2_sinf__Ff
	lfs      f2, 0xb4(r30)
	lfs      f0, lbl_80517BF4@sda21(r2)
	fmuls    f1, f1, f2
	lwz      r3, gameSystem__4Game@sda21(r13)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x18(r1)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80122088
	lfs      f1, lbl_80517CBC@sda21(r2)
	addi     r3, r1, 0x20
	li       r4, 0x78
	bl       PSMTXRotRad
	addi     r4, r1, 0x14
	addi     r3, r1, 0x20
	mr       r5, r4
	bl       PSMTXMultVec

lbl_80122088:
	lwz      r3, 0x50(r30)
	lfs      f0, 0x14(r1)
	lfs      f3, lbl_80517C7C@sda21(r2)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x20(r3)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r3)
	lwz      r3, 0x58(r30)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x20(r3)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r3)
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x54(r30)
	stfs     f2, 0x1c(r3)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x20(r3)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r3)
	b        lbl_8012223C

lbl_80122104:
	lwz      r3, 0x50(r30)
	li       r0, 3
	stb      r0, 0x49(r3)
	lfs      f1, 0x1f08(r30)
	lfs      f2, 0x19b0(r30)
	lfs      f3, 0x2354(r30)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x50(r30)
	li       r0, 3
	stfs     f1, 0x44(r3)
	lwz      r3, 0x54(r30)
	stb      r0, 0x49(r3)
	lfs      f1, 0x1ff4(r30)
	lfs      f2, 0x1a9c(r30)
	lfs      f3, 0x2354(r30)
	bl       "complement<f>__4GameFfff"
	lwz      r3, 0x54(r30)
	stfs     f1, 0x44(r3)
	lhz      r29, 0x18(r31)
	cmpwi    r29, 0
	blt      lbl_80122160
	cmpwi    r29, 1
	ble      lbl_80122180

lbl_80122160:
	lis      r3, lbl_8047B380@ha
	lis      r4, lbl_8047B40C@ha
	addi     r5, r4, lbl_8047B40C@l
	mr       r6, r29
	addi     r3, r3, lbl_8047B380@l
	li       r4, 0x507
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80122180:
	lfs      f1, 0x1e1c(r30)
	lfs      f2, 0x18c4(r30)
	lfs      f3, 0x2354(r30)
	bl       "complement<f>__4GameFfff"
	mulli    r0, r29, 0xc
	lfs      f3, lbl_80517C98@sda21(r2)
	addi     r3, r1, 8
	add      r29, r30, r0
	lfs      f4, 0x238c(r29)
	stfs     f4, 0x14(r1)
	lfs      f0, 0x2390(r29)
	stfs     f0, 0x18(r1)
	fadds    f0, f0, f1
	lfs      f2, 0x2394(r29)
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lwz      r4, 0x50(r30)
	stfs     f4, 0x1c(r4)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x20(r4)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r4)
	lwz      r4, 0x58(r30)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x1c(r4)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x20(r4)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r4)
	lfs      f2, 0x18(r1)
	lfs      f0, 0x14(r1)
	fnmsubs  f1, f3, f1, f2
	stfs     f1, 0x18(r1)
	lwz      r4, 0x54(r30)
	stfs     f0, 0x1c(r4)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x20(r4)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r4)
	lwz      r4, 0x44(r31)
	bl       getLookAtPosition__6CameraFv
	lfs      f0, 8(r1)
	stfs     f0, 0x238c(r29)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2390(r29)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2394(r29)

lbl_8012223C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0x84(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	8012241C
//  * Size:	00000C
//  */
// void complement<float>(float, float, float)
// {
// 	/*
// 	fsubs    f0, f2, f1
// 	fmadds   f1, f3, f0, f1
// 	blr
// 	*/
// }

} // namespace Game
