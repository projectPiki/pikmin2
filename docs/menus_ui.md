# Menus & UI

How 2D user interface is built and drawn in Pikmin 2. Covers the J2D primitives, Ogawa's in-game menus, Morimura's Challenge/VS/Zukan 2D, Kono's end-of-run screens, the HUD draw path, and a minimal `J2DPrint` recipe you can drop into a mod.

For the overall 3D→2D frame order and engine-level graphics primitives, see `docs/architecture.md` and `docs/engine_subsystems.md`.

## The J2D primitives

All 2D UI in the game sits on top of Nintendo's J2D framework in `src/JSystem/J2D/` (don't edit). Three types you will actually touch:

### `J2DPrint` — simple text rendering

`include/JSystem/J2D/J2DPrint.h:8`

Purpose: draw styled text with a `JUTFont` and optional gradient. No layout engine, just "printf a string at (x, y)". This is what debug HUDs and the in-code mod menu use.

Key API:
```cpp
J2DPrint(JUTFont* font, f32 width);                              // constructor
J2DPrint(JUTFont*, JUtility::TColor charColor, JUtility::TColor gradColor);
void initiate();                                                  // call once before printing
void setCharColor(JUtility::TColor);                              // inline (J2DPrint.h:58)
void setGradColor(JUtility::TColor);                              // inline (J2DPrint.h:60)
f32  print(f32 x, f32 y, const char* fmt, ...);                   // printf-style
f32  print(f32 x, f32 y, u8 alpha, const char* fmt, ...);
f32  getWidth(const char* fmt, ...);                              // measure width
```

Must be called during the 2D pass (after `gfx.setToken("2d")`). The font must be loaded — use `JFWSystem::systemFont` which is always available after boot.

### `J2DScreen` — BLO-driven UI

`include/JSystem/J2D/J2DScreen.h:6`

Purpose: load a `.blo` (binary layout) file exported from Nintendo's authoring tools, walk its pane tree, and draw it. Every HUD element with fancy animation/compositing (counters, floor name, pause menu panels) is a `.blo` loaded via `J2DScreen::set`.

Key API:
```cpp
bool set(const char* name, u32 flags, JKRArchive*);   // load a .blo by filename
J2DPane* search(u64 tag);                             // find a pane by its JGadget tag
void     draw(f32 x, f32 y, const J2DGrafContext*);   // render
void     animation();                                 // advance pane anims
void     setAnimation(J2DAnm* anim);                  // attach a .bck/.btk/.btp/etc.
```

Panes inside a screen are `J2DPane`, `J2DPicture`, `J2DTextBox`, `J2DWindow` — walk them via `search(tag)`. The engine ships helpers like `P2DScreen::Mgr_tuning` (`include/P2DScreen.h`) that wrap a `J2DScreen` with callback hooks.

### `J2DGrafContext` / `J2DOrthoGraph`

The 2D rendering context. `BaseGameSection::draw2D` calls `gfx.mOrthoGraph.setPort()` (`src/plugProjectKandoU/baseGameSection.cpp:1420, 1432`) to install the ortho projection for the 2D pass. All subsequent J2D draws feed through it.

## The HUD draw path

Trace a gameplay frame's 2D pass:

1. `BaseGameSection::doDraw(gfx)` — `baseGameSection.cpp:369`.
2. `draw3D(gfx)` finishes — the 3D scene is on the framebuffer.
3. `pre2dDraw(gfx)` — subclass hook (`VsGameSection` uses it for player-split borders).
4. `gfx.setToken("2d")` — marker for debug tools.
5. `draw2D(gfx)` — `baseGameSection.cpp:1417`:
   - `j3dSys.reinitGX()` — reset GX state.
   - `gfx.mOrthoGraph.setPort()` — install 2D projection.
   - `draw_Ogawa2D(gfx)` — Ogawa's HUD pipeline (every `ogScene*`).
   - Optional `mXfbTexture2d->capture(...)` — pause-menu XFB snapshot.
   - `Screen::gGame2DMgr->drawIndirect(gfx)` — dispatches to the currently active 2D scene (Morimura/Kono screens).
   - Resets the ortho port + builds a `J2DPrint` on the stack with the system font (currently unused — the heap-free-size printout was stripped but the printer is alive).
6. Back in `doDraw`: optional `drawOtakaraWindow` + `drawKanteiMsg`, then `moviePlayer->draw`, then `moddingU::onBaseGameDraw(gfx)` — **mod overlay slot**.

So a mod HUD drawn in `onBaseGameDraw` renders *on top of* every game HUD, which is what you want for debug overlays.

## `Screen::Game2DMgr` — the 2D dispatcher

`include/Screen/Game2DMgr.h:65`, extern `gGame2DMgr` at `Game2DMgr.h:280`.

One central object that owns every 2D screen the game might show. `BaseGameSection::doUpdate` calls `gGame2DMgr->update()` at `baseGameSection.cpp:283`; `draw2D` calls `gGame2DMgr->drawIndirect(gfx)` at line 1431.

The `CheckStatus` enum (`Game2DMgr.h:75-180+`) is the state machine for UI interaction — callers poll `getCheckStatus(SCREEN_ID)` to learn whether a modal menu returned Confirm / Cancel / Error / is still Active. Every menu hand-off (cave-in confirm, fountain-exit confirm, world-map pick) goes through this.

## `plugProjectOgawaU` — In-game HUD and pause menus

Ogawa owns the **`og::`** namespace. Roughly 60+ files, split by responsibility. Two file-name conventions:

- `ogObj*.cpp` — the per-screen **Object** (state, logic, per-frame update).
- `ogScene*.cpp` — the per-screen **Scene** (asset loading, pane tree, draw).

The pair together is one UI screen. E.g. `ogObjSMenuPause.cpp` + `ogSceneSMenuPause.cpp` = the in-level pause menu.

### HUD (always-on overlays)

| File pair | What it shows |
|---|---|
| `ogObjGround` / `ogSceneGround` | Above-ground HUD (sun meter, squad counter). |
| `ogObjCave` / `ogSceneCave` | Cave HUD (floor number, treasure sniffer). |
| `ogCounter`, `ogCounterDay`, `ogCounterRV`, `ogCounterSlot` | Animated numeric counters. |
| `ogPikminCounter`, `ogContenaCounter`, `ogMapCounter` | Specific counters (total Pikmin / onyon / radar). |
| `ogLifeGauge` | Floating creature HP bars (backed by engine `lifeGaugeMgr`). |
| `ogSunMeter` | Day-time progress sun ring. |
| `ogDopingScreen` | Spray-used flash. |
| `ogOtakaraSensor` | Treasure proximity radar pulse. |
| `ogCatchPiki` | Pluck-the-seed cursor. |
| `ogFuriko` | The swinging "wait for sunset" pendulum. |
| `ogObjCourseName`, `ogSceneCourseName` | Area-name card at load. |
| `ogObjFloor`, `ogSceneFloor` | Cave floor-number card. |
| `ogObjFinalMsg`, `ogSceneFinalMsg` | End-of-run text card. |

### Pause / squad / item menus

| File pair | Menu |
|---|---|
| `ogObjSMenuBase` / `ogSceneSMenuPause` | Pause menu (above-ground). |
| `ogObjSMenuPauseDoukutu` / `ogSceneSMenuPauseDoukutu` | Pause menu (cave). |
| `ogObjSMenuPauseVs` / `ogSceneSMenuPauseVs` | Pause menu (VS mode). |
| `ogObjSMenuCont` / `ogSceneSMenuCont` | Squad-management menu (dismiss, swap colors). |
| `ogObjSMenuItem` / `ogSceneSMenuItem` | Treasure/item browser sub-page. |
| `ogObjSMenuMap` / `ogSceneSMenuMap` | Area minimap sub-page. |

### World-map / cave-in popups

| File pair | Screen |
|---|---|
| `ogObjWorldMapInfoWindow0` / `ogSceneWorldMapInfoWindow0` | Area info popup on the overworld map. |
| `ogObjWorldMapInfoWindow1` / `ogSceneWorldMapInfoWindow1` | Secondary world-map window. |
| `ogObjAnaDemo` / `ogSceneAnaDemo` | "Enter cave?" confirmation. |
| `ogObjUfo` / `ogSceneUfo` | Ship (UFO) interaction menu. |
| `ogObjContena` / `ogSceneContena` | Onyon withdraw/deposit menu. |
| `ogObjSpecialItem` / `ogSceneSpecialItem` | Treasure pickup notification. |
| `ogObjSave` / `ogSceneSave` | Save / load prompts. |
| `ogObjKantei` / `ogSceneKantei` | Kantei (treasure appraisal) popup. |

### Shared plumbing

- `ogLib2D.cpp` + `include/og/ogLib2D.h` — shared helpers (pane tag lookup, animation helpers).
- `ogBloGroup.cpp` — batched `.blo` loads.
- `ogMenuMgr.cpp` — menu stack management.
- `ogAnime.cpp`, `ogAnimTextScreen.cpp` — screen-wide animations.
- `ogCallBackScreen.cpp`, `ogCallBackMessage.cpp`, `ogCallBackPicture.cpp` — `J2DScreen` subclasses that dispatch pane events to callbacks.
- `DispMemberBase.cpp` — the "Display Member" pattern: a struct passed between gameplay and UI so the UI doesn't reach into manager globals. Every screen has its own `DispMember*` (e.g. `DispMemberSMenuAll`).
- `ogDrawAfter.cpp`, `ogScreen.cpp` — base screen classes.
- `ogSE.cpp` — sound-effect hooks (menu beep, confirm, cancel).
- `ogUtil.cpp` — misc utilities.

### How a modder invokes an Ogawa screen

Open the pause menu programmatically? Don't. These screens are driven by the section FSM and modal state in `Game2DMgr`. Instead:
- Call `gGame2DMgr->setGame2DInfo(SCREEN_ID, dispMember)` to stage the inputs.
- Call `gGame2DMgr->openGame2D(SCREEN_ID)` to display it.
- Poll `gGame2DMgr->checkGame2DFinish(SCREEN_ID)` via the `CheckStatus` enum.

The `SingleGameSection::openCaveInMenu` / `openKanketuMenu` / `openCaveMoreMenu` methods are worked examples (`include/Game/SingleGameSection.h:55-57`).

## `plugProjectMorimuraU` — Challenge / VS 2D + Zukan 2D

Morimura owns the full-screen result/select screens for Challenge & VS, plus the Piklopedia browser.

| File | Screen |
|---|---|
| `challengeSelect2D.cpp` | Challenge Mode stage-select grid. |
| `challengeResult2D.cpp` | End-of-Challenge-stage score screen. |
| `vsSelect2D.cpp` | 2P VS stage/character select. |
| `zukan2D.cpp` | Piklopedia main (browses enemies / treasures). |
| `hiScore2D.cpp` | High-score board. |
| `hurryUp2D.cpp` | "Hurry up!" timer warning overlay. |
| `gameOver2D.cpp` | Game-over screen (dispatches on `GOTITLE_*` from `Game2DMgr.h:66`). |
| `mrWindow.cpp`, `mrUtil.cpp`, `scrollList.cpp` | Shared window + scroll-list widgets. |

These are not `og::`-namespace; they live in `Morimura::`. `Game2DMgr` dispatches to them via its `drawIndirect` path and the `DispMemberZukan*` / `DispMemberChallenge*` pass-structs (see the forward decls at `Game2DMgr.h:50-56`).

## `plugProjectKonoU` — Day-end, world-map, final result

Kono owns **`kh::`** namespace screens — the ones that wrap a playthrough.

| File | Screen |
|---|---|
| `khDayEndResult.cpp` | End-of-day summary (above-ground). |
| `khCaveResult.cpp` | End-of-cave summary. |
| `khFinalFloor.cpp` | Final cave floor intro card. |
| `khFinalResult.cpp` | Game-complete total-treasure result. |
| `khPayDept.cpp` | "Pay off the debt" progress screen. |
| `khReadyGo.cpp` | Ready-go countdown. |
| `khWorldMap.cpp` | Overworld map (area-select). |
| `khWinLose.cpp`, `khWinLoseReason.cpp` | VS match win/lose card. |
| `khMailSaveData.cpp` | Memory-card save / load prompts. |
| `khSceneLoader.cpp`, `khUtil.cpp` | Shared loading + utilities. |
| `newGame2DMgr.cpp`, `newScreenMgr.cpp` | Higher-level screen stack; these touch `og::newScreen::*` (`include/og/newScreen/`). |

Transitions flow: `SingleGameSection::DayEndState` → `khDayEndResult` → `khPayDept` → `khWorldMap` → next day. See `docs/game_sections.md` for the full state graph.

## Minimal "draw text in-game" recipe

Working example: `src/moddingU/modMenu.cpp:262` — `ModMenu::draw`. The essential pattern:

```cpp
#include "JSystem/J2D/J2DPrint.h"
#include "JSystem/JFramework/JFWSystem.h"
#include "Graphics.h"

void MyOverlay::draw(Graphics& gfx)
{
    if (!JFWSystem::systemFont) return;   // boot not finished

    J2DPrint print(JFWSystem::systemFont, 0.0f);
    print.initiate();
    print.setCharColor(JUtility::TColor(255, 255, 255, 255));
    print.setGradColor(JUtility::TColor(180, 220, 255, 255));

    print.print(40.0f, 60.0f, "HELLO FROM MOD");                 // literal
    print.print(40.0f, 80.0f, "frame %d  piki %d",
                frameCount, pikiMgr ? pikiMgr->getCount() : 0);  // formatted
}
```

Requirements:
1. Called from inside the 2D pass — i.e. `BaseGameSection::doDraw` after `gfx.setToken("2d")`, or directly out of `moddingU::onBaseGameDraw` (already there).
2. `JFWSystem::systemFont` is non-null — true anywhere inside gameplay.
3. Coordinates are screen-space (ortho 0..640 x 0..480 for standard 4:3 NTSC).

Set char/grad color from `JUtility::TColor(r, g, b, a)`. If `char == grad`, you get a flat color. Otherwise `J2DPrint` renders a vertical gradient (grad = top, char = bottom) — see `mIsGradient` in `J2DPrint.h:91`.

For a translucent panel behind the text, draw a GX quad first (see `gfx.drawRect` / manual `GXBegin` patterns in `baseGameSectionDraw.cpp`). The mod menu currently skips this and is just text-on-scene.

## Common pitfalls

- **Drawing in `onBaseGameUpdate` instead of `onBaseGameDraw`**: won't show up. The 2D pass isn't active yet.
- **Using a font before boot**: `systemFont` is null until `JFWSystem::init` completes. Guard it.
- **Printing during a section transition**: the section's heap can be mid-destroy. If `gModMenu` holds a pointer through a section switch, invalidate it in the section's dtor (`teardown()` in `modMenu.cpp:34`).
- **VS mode has two viewports**: a single 2D print at world-space coords only hits one. Either iterate `sys->mGfx->mActiveViewports` yourself, or accept that the overlay is a single-viewport HUD.
- **Pause state**: `gameSystem->paused()` is true during actual pause and during movies. Some HUDs keep animating; decide per-overlay.

## Further reading

- `docs/mod_menu_design.md` — design + current implementation notes for the mod menu.
- `docs/engine_subsystems.md` — `J2DPrint`, `J2DScreen`, JUT font primitives in wider context.
- `docs/game_sections.md` — which section owns which UI screens.
