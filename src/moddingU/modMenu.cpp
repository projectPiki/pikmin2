#include "moddingU/modMenu.h"

#include "Controller.h"
#include "Graphics.h"
#include "Dolphin/os.h"
#include "Dolphin/pad.h"

#include "Game/PikiMgr.h"
#include "Game/PikiParms.h"
#include "Game/Piki.h"
#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/EnemyBase.h"
#include "Game/generalEnemyMgr.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"

#include "JSystem/J2D/J2DPrint.h"
#include "JSystem/JFramework/JFWSystem.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "P2JME/P2JME.h"

namespace moddingU {

// Backing storage lives in .bss so we don't depend on whatever JKRHeap is
// current mid-frame (the game freely rewinds section-level heaps and the
// menu object would get its fields zeroed out from under it).
static ModMenu sModMenuStorage;
ModMenu* gModMenu = &sModMenuStorage;
u32      gFieldCap = MAX_PIKI_COUNT;

static void action_killAllEnemies();
static void action_giveAllPikiFlower();
static void action_killAllPikmin();
static void action_allPikiToOnyon();
static void action_addPokos();
static void action_toggleNoclip();
static void action_toggleFreezeDay();
static void action_refillSprays();
static void action_restoreDefaults();

void ensureCreated()
{
	// No-op; gModMenu points at the .bss-resident singleton. Kept for
	// symmetry with the old hook call-site.
}

void teardown()
{
	// Nothing to free; storage is static.
}

void onBaseGameUpdate(Controller* p1)
{
	ensureCreated();
	if (gModMenu) {
		gModMenu->update(p1);
	}
}

void onBaseGameDraw(Graphics& gfx)
{
	if (gModMenu) {
		gModMenu->draw(gfx);
	}
}

ModMenu::ModMenu()
    : mOpen(false)
    , mInitialized(false)
    , mCursor(0)
    , mSliderCount(0)
    , mHoldFrames(0)
{
	for (int i = 0; i < kMaxSliders; ++i) {
		mSliders[i].mLabel    = "";
		mSliders[i].mKind     = kModSlider_Float;
		mSliders[i].mTarget   = nullptr;
		mSliders[i].mMin      = 0.0f;
		mSliders[i].mMax      = 0.0f;
		mSliders[i].mStep     = 0.0f;
		mSliders[i].mAction   = nullptr;
		mSliders[i].mOriginal = 0.0f;
	}
}

void ModMenu::toggle()
{
	if (!mInitialized) {
		buildSliders();
		snapshotOriginals();
		mInitialized = true;
	}
	mOpen = !mOpen;
	OSReport("[MOD] menu %s\n", mOpen ? "OPEN" : "closed");
}

void ModMenu::buildSliders()
{
	mSliderCount = 0;
	if (!Game::pikiMgr || !Game::pikiMgr->mParms) {
		OSReport("[MOD] pikiMgr/parms not ready, cannot build sliders\n");
		return;
	}

	Game::PikiParms* parms = Game::pikiMgr->mParms;

	// Float sliders — point at the Parm<f32>::mValue of each tunable.
#define ADD_PARM(label_, parmRef_, min_, max_, step_)                                 \
	do {                                                                              \
		ModSlider& s = mSliders[mSliderCount++];                                      \
		s.mLabel  = label_;                                                           \
		s.mKind   = kModSlider_Float;                                                 \
		s.mTarget = &((parmRef_).mValue);                                             \
		s.mMin    = (min_);                                                           \
		s.mMax    = (max_);                                                           \
		s.mStep   = (step_);                                                          \
	} while (0)

	ADD_PARM("Walk speed",        parms->mPikiParms.mWalkSpeed,          10.0f,  500.0f, 10.0f);
	ADD_PARM("Run speed",         parms->mPikiParms.mRunSpeed,           10.0f,  500.0f, 10.0f);
	ADD_PARM("Flower run speed",  parms->mPikiParms.mFlowerRunSpeed,     10.0f,  500.0f, 10.0f);
	ADD_PARM("Pikmin HP",         parms->mPikiParms.mHealth,              1.0f, 1000.0f, 10.0f);
	ADD_PARM("Blue attack",       parms->mPikiParms.mBlueAttackDamage,    1.0f, 1000.0f,  5.0f);
	ADD_PARM("Red attack",        parms->mPikiParms.mRedAttackDamage,     1.0f, 1000.0f,  5.0f);
	ADD_PARM("Yellow attack",     parms->mPikiParms.mYellowAttackDamage,  1.0f, 1000.0f,  5.0f);
	ADD_PARM("Purple attack",     parms->mPikiParms.mPurpleAttackDamage,  1.0f,   30.0f,  1.0f);
	ADD_PARM("White attack",      parms->mPikiParms.mWhiteAttackDamage,   1.0f,   30.0f,  1.0f);
	ADD_PARM("Enemy search rng",  parms->mPikiParms.mEnemySearchRange,    1.0f, 1000.0f, 10.0f);
	ADD_PARM("Pellet search rng", parms->mPikiParms.mPelletSearchRange,   1.0f, 1000.0f, 10.0f);
	ADD_PARM("Bomb throw max",    parms->mPikiParms.mMaxBombThrowDistance, 1.0f, 1000.0f, 10.0f);

	// Visual + purple-power bundle (v1)
	ADD_PARM("Pikmin scale",      parms->mPikiParms.mScale,              0.1f,    3.0f,  0.1f);
	ADD_PARM("Purple pound dmg",  parms->mPikiParms.mPoundDamage,        0.0f, 1000.0f, 10.0f);
	ADD_PARM("Purple carry pow",  parms->mPikiParms.mPurpleCarryPower,   0.1f,   10.0f,  0.5f);

	// Spicy spray bundle (v1)
	ADD_PARM("Spicy duration",    parms->mPikiParms.mDopeMaxDuration,    5.0f,  200.0f,  5.0f);
	ADD_PARM("Spicy run speed",   parms->mPikiParms.mDopeRunSpeed,      50.0f,  400.0f, 10.0f);

#undef ADD_PARM

	// Navi parms (v1 Bundle 2). Shared captain parms live on naviMgr->mNaviParms.
	if (Game::naviMgr && Game::naviMgr->mNaviParms) {
		Game::NaviParms::Parms& np = Game::naviMgr->mNaviParms->mNaviParms;
#define ADD_NAVI_PARM(label_, parmRef_, min_, max_, step_)                            \
		do {                                                                          \
			ModSlider& s = mSliders[mSliderCount++];                                  \
			s.mLabel  = label_;                                                       \
			s.mKind   = kModSlider_Float;                                             \
			s.mTarget = &((parmRef_).mValue);                                         \
			s.mMin    = (min_);                                                       \
			s.mMax    = (max_);                                                       \
			s.mStep   = (step_);                                                      \
		} while (0)

		ADD_NAVI_PARM("Whistle radius",   np.mPikiCallMaxRadius, 10.0f,  500.0f, 10.0f);
		ADD_NAVI_PARM("Throw dist max",   np.mThrowDistanceMax,  10.0f, 1000.0f, 10.0f);
		ADD_NAVI_PARM("Captain HP",       np.mMaxHealth,         10.0f, 2000.0f, 50.0f);
		ADD_NAVI_PARM("Captain run spd",  np.mRunSpeed,          10.0f,  500.0f, 10.0f);

#undef ADD_NAVI_PARM
	}

	// Max on field (int) — caps onyon withdrawal UI and whistle-out count.
	// Hard allocation cap is still MAX_PIKI_COUNT (100); values above that do nothing.
	{
		ModSlider& s = mSliders[mSliderCount++];
		s.mLabel  = "Max on field";
		s.mKind   = kModSlider_Int;
		s.mTarget = &gFieldCap;
		s.mMin    = 1.0f;
		s.mMax    = (f32)MAX_PIKI_COUNT;
		s.mStep   = 5.0f;
	}

	// Actions — each registered the same way.
#define ADD_ACTION(label_, fn_)                                           \
	do {                                                                  \
		ModSlider& s = mSliders[mSliderCount++];                          \
		s.mLabel  = label_;                                               \
		s.mKind   = kModSlider_Action;                                    \
		s.mTarget = nullptr;                                              \
		s.mAction = (fn_);                                                \
	} while (0)

	ADD_ACTION("[ACTION] Kill all enemies",      &action_killAllEnemies);
	ADD_ACTION("[ACTION] All piki -> flower",    &action_giveAllPikiFlower);
	ADD_ACTION("[ACTION] Kill all pikmin",       &action_killAllPikmin);
	ADD_ACTION("[ACTION] All piki -> onyon",     &action_allPikiToOnyon);
	ADD_ACTION("[ACTION] +1000 Pokos",           &action_addPokos);
	ADD_ACTION("[ACTION] Toggle noclip",         &action_toggleNoclip);
	ADD_ACTION("[ACTION] Toggle freeze day",     &action_toggleFreezeDay);
	ADD_ACTION("[ACTION] Refill sprays",         &action_refillSprays);
	ADD_ACTION("[ACTION] Restore defaults",      &action_restoreDefaults);

#undef ADD_ACTION

	OSReport("[MOD] built %d sliders\n", mSliderCount);
}

void ModMenu::snapshotOriginals()
{
	for (int i = 0; i < mSliderCount; ++i) {
		ModSlider& s = mSliders[i];
		if (!s.mTarget) continue;
		if (s.mKind == kModSlider_Float) {
			s.mOriginal = *reinterpret_cast<f32*>(s.mTarget);
		} else if (s.mKind == kModSlider_Int) {
			s.mOriginal = (f32)(*reinterpret_cast<u32*>(s.mTarget));
		}
	}
}

void ModMenu::restoreAll()
{
	for (int i = 0; i < mSliderCount; ++i) {
		ModSlider& s = mSliders[i];
		if (!s.mTarget) continue;
		if (s.mKind == kModSlider_Float) {
			*reinterpret_cast<f32*>(s.mTarget) = s.mOriginal;
		} else if (s.mKind == kModSlider_Int) {
			*reinterpret_cast<u32*>(s.mTarget) = (u32)s.mOriginal;
		}
	}
	OSReport("[MOD] restored %d parms\n", mSliderCount);
}

f32 ModMenu::readValue(const ModSlider& s) const
{
	if (!s.mTarget) return 0.0f;
	if (s.mKind == kModSlider_Float) {
		return *reinterpret_cast<const f32*>(s.mTarget);
	}
	if (s.mKind == kModSlider_Int) {
		return (f32)(*reinterpret_cast<const u32*>(s.mTarget));
	}
	return 0.0f;
}

void ModMenu::writeValue(ModSlider& s, f32 v)
{
	if (!s.mTarget) return;
	if (v < s.mMin) v = s.mMin;
	if (v > s.mMax) v = s.mMax;
	if (s.mKind == kModSlider_Float) {
		*reinterpret_cast<f32*>(s.mTarget) = v;
	} else if (s.mKind == kModSlider_Int) {
		*reinterpret_cast<u32*>(s.mTarget) = (u32)v;
	}
}

void ModMenu::bumpCurrent(f32 direction)
{
	if (mSliderCount <= 0) return;
	ModSlider& s = mSliders[mCursor];
	if (s.mKind != kModSlider_Float && s.mKind != kModSlider_Int) return;
	writeValue(s, readValue(s) + direction * s.mStep);
}

void ModMenu::update(Controller* pad)
{
	if (!pad) return;

	// Defensive: if anything ever stomped our state, clamp before using it.
	if (mSliderCount < 0 || mSliderCount > kMaxSliders) mSliderCount = 0;
	if (mSliderCount > 0) {
		if (mCursor < 0)              mCursor = 0;
		if (mCursor >= mSliderCount)  mCursor = mSliderCount - 1;
	} else {
		mCursor = 0;
	}

	// Toggle: hold BOTH L and R, then press Z.
	// isButtonHeld tests bit-ANY (returns true if any bit in the mask is held),
	// so we test the full chord with an explicit == mask.
	const u32 chord = PAD_TRIGGER_L | PAD_TRIGGER_R;
	if ((pad->getButton() & chord) == chord && pad->isButtonDown(PAD_TRIGGER_Z)) {
		toggle();
	}

	if (!mOpen) return;

	if (mSliderCount == 0 && mInitialized) {
		// Parms weren't ready when first opened — try again.
		buildSliders();
		snapshotOriginals();
	}
	if (mSliderCount == 0) return;

	if (pad->isButtonDown(PAD_BUTTON_UP)) {
		mCursor = (mCursor - 1 + mSliderCount) % mSliderCount;
	}
	if (pad->isButtonDown(PAD_BUTTON_DOWN)) {
		mCursor = (mCursor + 1) % mSliderCount;
	}

	// Hold-to-repeat on left/right: fire immediately on press, then every 4 frames while held.
	bool leftHeld  = (pad->getButton() & PAD_BUTTON_LEFT)  != 0;
	bool rightHeld = (pad->getButton() & PAD_BUTTON_RIGHT) != 0;
	if (leftHeld || rightHeld) {
		if (mHoldFrames == 0 || (mHoldFrames > 10 && (mHoldFrames % 2) == 0)) {
			bumpCurrent(leftHeld ? -1.0f : 1.0f);
		}
		mHoldFrames++;
	} else {
		mHoldFrames = 0;
	}

	ModSlider& cur = mSliders[mCursor];
	if (cur.mKind == kModSlider_Action && pad->isButtonDown(PAD_BUTTON_A)) {
		if (cur.mAction) cur.mAction();
	}
}

// Matches cBtnIconColor[11] in messageRendering.cpp: [id][0]=.a field, [id][1]=.b field.
// TEVREG0 = .b color, TEVREG1 = .a color (the game swaps them when assigning mImageColorA/B).
static const u8 sBtnIconColors[8][2][4] = {
    { {255,255,255,255}, {  0,166,  0,  0} }, // 0: A (green)
    { {255,255,255,255}, {255,  0,  0,  0} }, // 1: B (red)
    { {  0,  0,  0,255}, {255,255,  0,  0} }, // 2: C (yellow)
    { {  0,  0,  0,255}, {200,200,200,  0} }, // 3: X (gray)
    { {  0,  0,  0,255}, {200,200,200,  0} }, // 4: Y (gray)
    { {  0,  0,255,255}, {255,255,255,  0} }, // 5: Z (blue)
    { {  0,  0,  0,255}, {200,200,200,  0} }, // 6: L (gray)
    { {  0,  0,  0,255}, {200,200,200,  0} }, // 7: R (gray)
};

// Draw one GC controller button icon using the game's own textures + TEV pipeline.
// Replicates TRenderingProcessor::setImageGX (colorized path) + drawImage exactly.
// btnId: 0=A 1=B 5=Z 6=L 7=R
static void drawBtnIcon(Graphics& gfx, f32 x, f32 y, f32 size, int btnId)
{
    if (!gP2JMEMgr) return;
    JUTTexture* img = gP2JMEMgr->getImage(P2JME::ImageGroup::ID0, btnId);
    if (!img || (u32)btnId >= 8) return;

    // TEVREG0 = .b color, TEVREG1 = .a color
    GXColor reg0, reg1;
    reg0.r = sBtnIconColors[btnId][1][0]; reg0.g = sBtnIconColors[btnId][1][1];
    reg0.b = sBtnIconColors[btnId][1][2]; reg0.a = sBtnIconColors[btnId][1][3];
    reg1.r = sBtnIconColors[btnId][0][0]; reg1.g = sBtnIconColors[btnId][0][1];
    reg1.b = sBtnIconColors[btnId][0][2]; reg1.a = sBtnIconColors[btnId][0][3];

    gfx.mOrthoGraph.setPort();

    // setImageGX — colorized path (stage 0 blends two TEV registers through the texture,
    // stage 1 multiplies by vertex raster color for the top/bottom gradient).
    GXSetNumChans(1);
    GXSetNumTevStages(2);
    GXSetNumTexGens(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
    GXSetTevColor(GX_TEVREG0, reg0);
    GXSetTevColor(GX_TEVREG1, reg1);
    GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_C0, GX_CC_C1, GX_CC_TEXC, GX_CC_ZERO);
    GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A0, GX_CA_A1, GX_CA_TEXA, GX_CA_ZERO);
    GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASC, GX_CC_ZERO);
    GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_APREV, GX_CA_RASA, GX_CA_ZERO);
    GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S8, 4);
    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

    // drawImage quad: (left,bottom)→colorB, (left,top)→colorA, ...
    // colorA = top gradient (brighter), colorB = bottom gradient (slightly dimmed).
    f32 left = x, right = x + size, top = y, bottom = y + size, zero = 0.0f;
    img->load(GX_TEXMAP0);
    GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    GXPosition3f32(left,  bottom, zero); GXColor4u8(205,205,205,255); GXTexCoord2u8( 0, 16);
    GXPosition3f32(left,  top,    zero); GXColor4u8(255,255,255,255); GXTexCoord2u8( 0,  0);
    GXPosition3f32(right, top,    zero); GXColor4u8(255,255,255,255); GXTexCoord2u8(16,  0);
    GXPosition3f32(right, bottom, zero); GXColor4u8(205,205,205,255); GXTexCoord2u8(16, 16);
}

void ModMenu::draw(Graphics& gfx)
{
	if (!mOpen) return;
	if (!JFWSystem::systemFont) return;

	// Defensive: same clamp as update() in case update() hasn't run yet.
	if (mSliderCount < 0 || mSliderCount > kMaxSliders) mSliderCount = 0;
	if (mSliderCount > 0) {
		if (mCursor < 0)              mCursor = 0;
		if (mCursor >= mSliderCount)  mCursor = mSliderCount - 1;
	} else {
		mCursor = 0;
		return; // nothing to draw
	}

	J2DPrint print(JFWSystem::systemFont, 0.0f);
	print.initiate();
	print.setCharColor(JUtility::TColor(255, 255, 255, 255));
	print.setGradColor(JUtility::TColor(180, 220, 255, 255));

	const f32 x    = 100.0f;
	f32       y    = 20.0f;
	const f32 dy   = 18.0f;

	// Cursor-window scroll: show up to kVisibleRows rows, centered on cursor.
	int first = mCursor - (kVisibleRows / 2);
	if (first < 0) first = 0;
	int last = first + kVisibleRows;
	if (last > mSliderCount) {
		last  = mSliderCount;
		first = last - kVisibleRows;
		if (first < 0) first = 0;
	}

	// Measure widths so we can position button icons exactly between the text segments.
	const f32 iconSize   = 16.0f;
	const f32 prefixW    = print.getWidth("MOD MENU == ");
	const f32 sepW       = print.getWidth("+");
	const f32 closeW     = print.getWidth(" close, ");

	// Icon x positions: prefix | [L] sep [R] sep [Z] close, [A] select
	const f32 lx = x + prefixW;
	const f32 rx = lx + iconSize + sepW;
	const f32 zx = rx + iconSize + sepW;
	const f32 ax = zx + iconSize + closeW;

	// Icons drawn at y - 15 to align with J2DPrint's baseline-origin text.
	const f32 iconY = y - 15.0f;
	drawBtnIcon(gfx, lx, iconY, iconSize, 6); // L
	drawBtnIcon(gfx, rx, iconY, iconSize, 7); // R
	drawBtnIcon(gfx, zx, iconY, iconSize, 5); // Z
	drawBtnIcon(gfx, ax, iconY, iconSize, 0); // A

	// Restore J2DPrint GX state after the icon draws changed it.
	print.initiate();
	print.setCharColor(JUtility::TColor(255, 255, 255, 255));
	print.setGradColor(JUtility::TColor(180, 220, 255, 255));

	// Draw text segments around the icons.
	print.setCharColor(JUtility::TColor(255, 40, 40, 255));
	print.print(x,              y, "MOD MENU == ");
	print.print(lx + iconSize,  y, "+");
	print.print(rx + iconSize,  y, "+");
	print.print(zx + iconSize,  y, " close, ");
	print.print(ax + iconSize,  y, " select");
	print.setCharColor(JUtility::TColor(255, 255, 255, 255));

	y += dy * 1.5f;

	for (int i = first; i < last; ++i) {
		const ModSlider& s = mSliders[i];
		const char* marker = (i == mCursor) ? "> " : "  ";
		if (i == mCursor) {
			print.setCharColor(JUtility::TColor(80, 160, 255, 255));
		} else {
			print.setCharColor(JUtility::TColor(255, 255, 255, 255));
		}
		if (s.mKind == kModSlider_Float && s.mTarget) {
			print.print(x, y, "%s%-18s %7.2f", marker, s.mLabel, readValue(s));
		} else if (s.mKind == kModSlider_Int && s.mTarget) {
			print.print(x, y, "%s%-18s %7d", marker, s.mLabel, (int)readValue(s));
		} else {
			print.print(x, y, "%s%s", marker, s.mLabel);
		}
		y += dy;
	}

	// Fixed footer: always below the last visible row, never scrolls.
	print.setCharColor(JUtility::TColor(80, 160, 255, 255));
	print.print(x, y, "(%d/%d)", mCursor + 1, mSliderCount);
}

// ---------- Actions ----------

static void action_killAllEnemies()
{
	// generalEnemyMgr dispatches the kill to every per-enemy manager.
	if (Game::generalEnemyMgr) {
		Game::generalEnemyMgr->killAll();
		OSReport("[MOD] killAll() dispatched\n");
	}
}

static void action_giveAllPikiFlower()
{
	// Promote every active pikmin to flower stage (EPikiHappa::Flower = 2).
	// mOpenIds[i] == true means slot is empty; == false means active.
	if (!Game::pikiMgr) return;
	int promoted = 0;
	const int cap = Game::pikiMgr->getMax();
	for (int i = 0; i < cap; ++i) {
		if (Game::pikiMgr->getFlag(i)) continue; // slot empty
		Game::Piki* p = Game::pikiMgr->getAt(i);
		if (!p || !p->isAlive()) continue;
		p->changeHappa(Game::Flower);
		promoted++;
	}
	OSReport("[MOD] promoted %d piki to flower\n", promoted);
}

static void action_killAllPikmin()
{
	if (Game::pikiMgr) {
		Game::pikiMgr->killAllPikmins();
		OSReport("[MOD] killAllPikmins() dispatched\n");
	}
}

static void action_allPikiToOnyon()
{
	if (Game::pikiMgr) {
		Game::pikiMgr->forceEnterPikmins(0);
		OSReport("[MOD] forceEnterPikmins() dispatched\n");
	}
}

static void action_addPokos()
{
	if (Game::playData) {
		Game::playData->addPokos(1000);
		OSReport("[MOD] +1000 pokos\n");
	}
}

static void action_toggleNoclip()
{
	if (!Game::gameSystem) return;
	if (Game::gameSystem->isFlag(Game::GAMESYS_DisableCollision)) {
		Game::gameSystem->resetFlag(Game::GAMESYS_DisableCollision);
		OSReport("[MOD] noclip OFF\n");
	} else {
		Game::gameSystem->setFlag(Game::GAMESYS_DisableCollision);
		OSReport("[MOD] noclip ON\n");
	}
}

static void action_toggleFreezeDay()
{
	// GAMESYS_DisablePause stops time-of-day advancement per GameSystem.h comment.
	if (!Game::gameSystem) return;
	if (Game::gameSystem->isFlag(Game::GAMESYS_DisablePause)) {
		Game::gameSystem->resetFlag(Game::GAMESYS_DisablePause);
		OSReport("[MOD] day clock UNFROZEN\n");
	} else {
		Game::gameSystem->setFlag(Game::GAMESYS_DisablePause);
		OSReport("[MOD] day clock FROZEN\n");
	}
}

static void action_refillSprays()
{
	if (!Game::naviMgr) return;
	const int naviCount = Game::naviMgr->getMax();
	for (int i = 0; i < naviCount; ++i) {
		if (Game::naviMgr->getFlag(i)) continue;
		Game::Navi* n = Game::naviMgr->getAt(i);
		if (!n) continue;
		n->mSprayCounts[0] = 10;
		n->mSprayCounts[1] = 10;
	}
	OSReport("[MOD] sprays refilled to 10/10\n");
}

static void action_restoreDefaults()
{
	if (gModMenu) gModMenu->restoreAll();
}

} // namespace moddingU
