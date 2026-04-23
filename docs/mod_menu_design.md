# In-Level Mod Menu — Design

Goal: an overlay you can summon during gameplay (`BaseGameSection`) that lets you live-edit Pikmin stats (max on field, movement speed, attack strength) and toggle experimental features, without leaving the level.

Status: **design only**, not yet implemented. Everything in this doc has been validated against the source but nothing is wired up. Treat it as a build plan.

---

## 1. Why this approach is viable

Almost every tunable in Pikmin 2 is stored as a runtime-editable `Parm<T>` object (`include/BaseParm.h:59`). `Parm<T>` has public `mValue`, `mMin`, `mMax` fields and an `operator()` that returns a ref, so you can **mutate any stat with a single assignment at any point during gameplay** — the game re-reads it every frame. Examples:

```cpp
pikiMgr->mParms->mPiki.mWalkSpeed()          = 200.0f;   // base walk
pikiMgr->mParms->mPiki.mRunSpeed()           = 300.0f;   // base run
pikiMgr->mParms->mPiki.mBlueAttackDamage()   = 50.0f;    // blue piki attack
pikiMgr->mParms->mPiki.mRedAttackDamage()    = 50.0f;    // red piki attack
pikiMgr->mParms->mPiki.mYellowAttackDamage() = 50.0f;    // yellow piki attack
```

All of the above are the Parm fields declared in `include/Game/PikiParms.h:7` (full list ~100 fields).

Max-on-field is the one that does **not** live in Parms — it's `#define MAX_PIKI_COUNT (100)` in `include/Game/Piki.h:10` and also stamped into UI data at `src/plugProjectKandoU/naviState.cpp:3999,4002,4012,4015`. A runtime change requires either:
- (A) Recompile with a higher define, OR
- (B) Only raise the *onyon-to-field* ceiling (`mMaxPikiOnField` in `include/og/Screen/Data.h:106`) — this affects the whistle-out cap but cannot exceed `MAX_PIKI_COUNT` because the underlying `MonoObjectMgr<Piki>` allocation is sized to it.

So: for the mod menu, "max on field" will be a slider `1..MAX_PIKI_COUNT` that edits `mMaxPikiOnField`. To exceed 100, recompile with a larger `MAX_PIKI_COUNT` define (call out the risk — the buffer at `interactNavi.cpp:262` is a stack array sized `MAX_PIKI_COUNT + 10`, so it scales automatically, but look for any literal `100`s in hot paths first).

## 2. Hook points

Two hooks in `BaseGameSection`:

**Update hook** — `src/plugProjectKandoU/baseGameSection.cpp:359`, just before `gameSystem->endFrame()`:

```cpp
    if (moddingU::gModMenu) moddingU::gModMenu->update(mControllerP1);
    gameSystem->endFrame();
```

**Draw hook** — `src/plugProjectKandoU/baseGameSection.cpp:389`, right after `draw2D(gfx)`:

```cpp
    draw2D(gfx);
    if (moddingU::gModMenu) moddingU::gModMenu->draw(gfx);   // <- insert here
    if (mDraw2DCreature) {
```

The controller is already a member (`mControllerP1`, `mControllerP2`, both `Controller*` = `JUTGamePad`). Button state lives in `JUTGamePad::readButton()` / `testTrigger()` / `testHold()` (see `include/JSystem/JUtility/JUTGamePad.h`).

Graphics is already on the 2D pass by line 388 — drawing text/quads via `J2DPrint` (see `#include "JSystem/J2D/J2DPrint.h"` already present at `baseGameSection.cpp:24`) is safe here.

## 3. Proposed file layout (non-matching lib)

Follow the README's modding pattern: add a new library block to `configure.py`:

```
src/moddingU/
├── Makefile                # copy plugProjectKandoU/Makefile
├── modMenu.cpp             # UI + input
├── modMenu.h
├── modState.cpp            # tracks the tweakable stats, saves/restores originals
├── modState.h
└── modHooks.cpp            # 2 small functions BaseGameSection calls
```

In `configure.py`, near the bottom:

```python
{
    "lib": "moddingU",
    "mw_version": "GC/2.6",
    "cflags": cflags_base,
    "progress_category": "mod",
    "objects": [
        Object(Matching, "moddingU/modMenu.cpp"),
        Object(Matching, "moddingU/modState.cpp"),
        Object(Matching, "moddingU/modHooks.cpp"),
    ],
},
```

And in `link_order_callback` append each of them after `plugProjectKonoU`.

The hooks themselves are 2-line edits to `baseGameSection.cpp` (shown above). Accept that this makes the build non-matching — that's what `--non-matching` is for.

## 4. `ModMenu` class sketch

```cpp
// modMenu.h
namespace moddingU {

struct ModSlider {
    const char* label;
    f32*        target;     // points at a Parm<f32>::mValue
    f32         min, max, step;
};

struct ModMenu {
    ModMenu();

    void update(Controller* pad);   // called from BaseGameSection::doUpdate
    void draw(Graphics& gfx);       // called from BaseGameSection::doDraw

    void toggle()        { mOpen = !mOpen; }
    void restoreAll();              // snap every slider back to vanilla

private:
    void drawSlider(int row, const ModSlider& s, bool selected);

    bool         mOpen;
    int          mCursor;
    ModSlider    mSliders[16];      // filled in ctor
    f32          mOriginalValues[16];
};

extern ModMenu* gModMenu;   // created by BaseGameSection::init

} // namespace moddingU
```

Summon gesture: hold `L + R + Z` (three shoulder triggers — unused by gameplay), or Start+Z as an alternative. In `update()`:

```cpp
void ModMenu::update(Controller* pad) {
    if (pad->testTrigger(PAD_BUTTON_Z) &&
        pad->testHold(PAD_TRIGGER_L) &&
        pad->testHold(PAD_TRIGGER_R)) toggle();
    if (!mOpen) return;

    if (pad->testTrigger(PAD_BUTTON_UP))   mCursor = (mCursor - 1 + mSliderCount) % mSliderCount;
    if (pad->testTrigger(PAD_BUTTON_DOWN)) mCursor = (mCursor + 1) % mSliderCount;
    if (pad->testHold(PAD_BUTTON_LEFT))    *mSliders[mCursor].target -= mSliders[mCursor].step;
    if (pad->testHold(PAD_BUTTON_RIGHT))   *mSliders[mCursor].target += mSliders[mCursor].step;
    // clamp to [min, max]
}
```

(Actual `PAD_*` constants live in `include/Dolphin/pad.h` — confirm names when you implement.)

## 5. Slider manifest (v0)

| Label | Target (dereference at menu-build time) | Range | Step |
|---|---|---|---|
| Max Pikmin on field | captured `mMaxPikiOnField` in `Data`; write via `naviState` hook | 1 – `MAX_PIKI_COUNT` | 5 |
| Walk speed | `&pikiMgr->mParms->mPiki.mWalkSpeed.mValue` | 10 – 500 | 10 |
| Run speed | `&pikiMgr->mParms->mPiki.mRunSpeed.mValue` | 10 – 500 | 10 |
| Flower run speed | `&pikiMgr->mParms->mPiki.mFlowerRunSpeed.mValue` | 10 – 500 | 10 |
| Blue attack | `&pikiMgr->mParms->mPiki.mBlueAttackDamage.mValue` | 1 – 1000 | 5 |
| Red attack | `&pikiMgr->mParms->mPiki.mRedAttackDamage.mValue` | 1 – 1000 | 5 |
| Yellow attack | `&pikiMgr->mParms->mPiki.mYellowAttackDamage.mValue` | 1 – 1000 | 5 |
| Purple attack | `&pikiMgr->mParms->mPiki.mPurpleAttackDamage.mValue` | 1 – 30 | 1 |
| White attack | `&pikiMgr->mParms->mPiki.mWhiteAttackDamage.mValue` | 1 – 30 | 1 |
| Pikmin HP | `&pikiMgr->mParms->mPiki.mHealth.mValue` | 1 – 1000 | 10 |
| Throw min dist | `&pikiMgr->mParms->…mMinBombThrowDistance.mValue` etc. | — | — |
| Enemy search range | `&pikiMgr->mParms->mPiki.mEnemySearchRange.mValue` | 1 – 1000 | 10 |
| Kill all enemies | action (trigger-once) | — | — |
| Give 100 of each piki | action | — | — |
| Restore defaults | action | — | — |

Capture originals once in the ctor so "Restore defaults" works.

## 6. Drawing

`J2DPrint` can render with a loaded font resource; the game already has fonts loaded by the time gameplay starts (see how `lifeGaugeMgr->draw` renders numbers). Minimal overlay uses direct GX quads for the panel background and `J2DPrint` for labels:

```cpp
void ModMenu::draw(Graphics& gfx) {
    if (!mOpen) return;
    // Dark translucent panel
    drawRect(gfx, 40, 60, 600, 400, Color4(0, 0, 0, 180));
    // Title
    J2DPrint p(/*font*/ gMenuFont);
    p.print(50, 70, "MOD MENU  (L+R+Z to close)");
    for (int i = 0; i < mSliderCount; ++i) drawSlider(gfx, i, i == mCursor);
}
```

For v0 it's fine to use `JUTConsole::print` for even simpler debug-style text.

## 7. Gotchas

- **Pause check.** `gameSystem->paused()` is true during actual pause and during movies. The mod menu should still take input when paused (so you can tweak stats while paused), but don't advance state counters.
- **Cave floor transitions** destroy and recreate `BaseGameSection`. `gModMenu` must be re-created on each `BaseGameSection::init`, and the original-values snapshot must be refreshed from the new `pikiMgr->mParms`.
- **VS mode.** `BaseGameSection` is the base class; `vsGameSection` inherits. Decide whether the mod menu works in VS (would probably need to gate on `gameSystem->isMultiplayerMode()`).
- **Save files.** Parm changes are in-memory only. If the user loves their config, serialize it to a file in `build/` at menu close.
- **`mMaxPikiOnField` write** — the value is copied into `NaviDispDataContena` in `naviState.cpp:3999-4015` every time the HUD refreshes. Override by patching that function or by running a per-frame write in the mod menu update right before naviState runs.

## 8. Next steps

1. Build on `--non-matching` and confirm it compiles. (Prerequisite: run through the full README Windows/macOS/Linux toolchain install.)
2. Scaffold `src/moddingU/` with empty stubs that just print `OSReport("ModMenu tick\n")` — prove the hook works.
3. Hook the three buttons, draw a single "MOD ON" string with `JUTConsole`. Ship v0.
4. Add sliders one at a time; walk speed first because it's immediately visible.
5. Once sliders are stable, add actions (kill-all-enemies, give-100, restore-defaults).
6. Then: new Pikmin type and new monster — see separate design docs (to be written — `docs/new_pikmin_type.md`, `docs/new_monster.md`).
