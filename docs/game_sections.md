# Game Sections

Every top-level screen in Pikmin 2 is a `Section`. Boot, title, story, challenge, VS, demo — each is a subclass with its own heap, resources, update/draw pair, and (for in-world sections) a nested FSM of sub-states. This doc maps that tree and points to hook sites.

For the outer frame loop and the `Section` interface, see `docs/architecture.md`. This doc only covers the section classes themselves.

## The `Section` base class

`include/Section.h:30` — concrete base for every scene.

```cpp
struct Section : public ISection {
    virtual bool doUpdate()            = 0;   // _3C
    virtual void doDraw(Graphics& gfx) = 0;   // _40
    // + run/init/drawInit/doExit/forceFinish/forceReset/doLoading/doLoadingStart/isFinishable
};
```

`Section::run()` (`src/sysGCU/section.cpp:249`) drives the per-section lifecycle: `waitBlanking` → `loading()` → `fadeIn()` → `main()` → `fadeOut()`. `main()` is the per-frame loop — `doUpdate` + `doDraw` run inside it until `mIsMainActive` flips false.

All sections inherit from `Section`, then either directly or via one of two intermediates:

- `Game::BaseHIOSection` — adds a debug-overlay HIO panel. Used by Boot, Title, and BaseGameSection.
- `Game::BaseGameSection` — adds the world-update pipeline. Used by SingleGame and VS.

## Section hierarchy

```
Section                                  (include/Section.h:30)
├── BaseHIOSection                       (include/Game/BaseHIO.h)
│   ├── BootSection                      (include/BootSection.h:40)
│   ├── Title::Section                   (include/Title.h:43)
│   └── BaseGameSection                  (include/Game/BaseGameSection.h:82)
│       ├── SingleGameSection            (include/Game/SingleGameSection.h:28)
│       └── VsGameSection                (include/Game/VsGameSection.h:53)
├── RootMenuSection                      (include/RootMenuSection.h)
└── Demo::Section                        (src/sysGCU/demoSection.cpp)
```

`GameFlow::createSection(heap)` at `src/sysGCU/gameflow.cpp:148` is the factory — the runtime section is selected by `mActiveSectionFlag`.

## Section chain (what leads to what)

From `GameFlow::setSection()` (`gameflow.cpp:105`) and `createSection()` (`gameflow.cpp:148`):

| From | Flag | To |
|---|---|---|
| (startup) | `SN_Boot` | `BootSection` (Nintendo/Dolby/progressive-scan splashes) |
| Boot ends | `SN_RootMenu` | `RootMenuSection` (bridge frame; transitions to Title) |
| RootMenu ends | `SN_MainTitle` | `Title::Section` (main menu + file select + options + bonuses) |
| Title selects "New Game"/"Continue" | `SN_SingleGame` | `SingleGameSection` |
| Title selects Challenge Mode | `SN_ChallengeGame` | `VsGameSection(heap, false)` |
| Title selects 2P VS | `SN_VSGame` | `VsGameSection(heap, true)` |
| Title/game attract timer | `SN_Demo` | `Demo::Section` |
| Any gameplay section returns | (reset to) `SN_MainTitle` | back to Title |

Section changes destroy the previous section's heap — persist nothing on it that you need post-transition.

## BootSection

`include/BootSection.h:40` — declares 11 internal states (`SID_LoadResourceFirst` → `SID_EndState`, enum at lines 50-65):

| State | Purpose |
|---|---|
| `SID_LoadResourceFirst` | Initial resource load (logos, option data). |
| `SID_LoadMemoryCard` | Memory card check (for system font). |
| `SID_InitNintendoLogo` | Set up Nintendo logo assets. |
| `SID_FadeInNintendoLogo` | Fade the logo on. |
| `SID_NintendoLogo` | Hold the logo; wait for button. |
| `SID_WaitProgressive` / `SID_UpdateWaitProgressive` | Offer progressive-scan mode. |
| `SID_SetInterlace` / `SID_UpdateSetInterlace` | Lock in interlaced mode. |
| `SID_DolbyLogo` | Dolby Pro Logic II splash. |
| `SID_EndState` | Hand off to `RootMenuSection`. |

Not a place a modder typically edits.

## Title::Section

`include/Title.h:43` — the main menu. 5 internal states:

```cpp
enum State { State_Init, State_MainTitle, State_Options, State_Bonus, State_HiScore };
```

Owns a `Menu*` (top-level selector), a `DvdThreadCommand`, and dispatches to `ebi::Option` / `ebi::Omake` / the hi-score view. 4 BGM indices (`BGM_MainTheme/Options/HiScore/Bonus`) at `Title.h:44`.

Much of the Title's visuals actually live in `src/plugProjectEbisawaU/ebiP2Title*.cpp` (camera, pikmin on title screen, fog, light, etc.) — the Section class is a dispatcher over them.

## BaseGameSection

`include/Game/BaseGameSection.h:82` — every in-world section's parent. Owns the frame pipeline; see `docs/architecture.md` for the step-by-step `doUpdate`/`doDraw` order.

Key members for hooking:

| Member | What it is |
|---|---|
| `mControllerP1`, `mControllerP2` | `Controller*` (JUTGamePad) for each player. |
| `mLightMgr` | Per-section lighting (see `docs/world_systems.md`). |
| `mOpaqueDrawBuffer`, `mTransparentDrawBuffer` | J3D draw buffers the 3D pass feeds. |
| `mIsBlendCameraActive` | True during camera transitions between Olimar/Louie. |
| `mDraw2DCreature` | Gate for the `drawOtakaraWindow` appraisal overlay. |

Draw-buffer enum (`BaseGameSection.h:69`) tells you where geometry ends up in the 3D pass: `DB_NormalLayer`, `DB_MapLayer`, `DB_PikiLayer`, `DB_2DLayer`, `DB_ObjectLastLayer`, `DB_FarmLayer`, etc.

`DemoTimers` enum (line 58) drives scripted tutorial cues (pluck-the-first-red, meet-red-pikmin, etc.) — subclasses implement them via `enableTimer`/`disableTimer`.

The two mod-friendly hooks are at lines 360 and 399 of `src/plugProjectKandoU/baseGameSection.cpp` — see `docs/mod_menu_design.md`.

## SingleGameSection (Story Mode)

`include/Game/SingleGameSection.h:28` + `src/plugProjectKandoU/singleGS_*.cpp`. Subclass of `BaseGameSection`.

Runs a `SingleGame::FSM` over 12 states (`include/Game/SingleGame.h:35`):

| StateID | Class | File | What it does |
|---|---|---|---|
| `SGS_File` = 0 | `FileSelectState` | `singleGS_FileSelect.cpp` | File-select menu (Olimar's diary). |
| `SGS_Select` = 1 | `SelectState` | (inline in gameStages) | Pick a day / area. Rarely visible — quick pass-through. |
| `SGS_Load` = 2 | `LoadState` | `singleGS_Load.cpp` | Load stage resources. |
| `SGS_Game` = 3 | `GameState` | `singleGS_MainGame.cpp` | Above-ground gameplay — the overworld day. |
| `SGS_Cave` = 4 | `CaveState` | `singleGS_CaveGame.cpp` | Cave floor gameplay. |
| `SGS_DayEnd` = 5 | `DayEndState` | `singleGS_DayEnd.cpp` | Sunset, onyon seedling count, Piki loss tally. |
| `SGS_CaveDayEnd` = 6 | `CaveDayEndState` | (`SingleGame.h:107`) | Special sunset when forced out of a cave. |
| `SGS_MainResult` = 7 | `MainResultState` | `singleGS_MainResult.cpp` | End-of-day summary for overworld. |
| `SGS_CaveResult` = 8 | `CaveResultState` | `singleGS_CaveResult.cpp` | End-of-cave treasure/poko summary. |
| `SGS_Movie` = 9 | `MovieState` | `singleGS_Movie.cpp` | In-section cutscene playback. |
| `SGS_Zukan` = 10 | `ZukanState` | `singleGS_Zukan.cpp` | Piklopedia browser. |
| `SGS_Ending` = 11 | `EndingState` | `singleGS_Ending.cpp` | Ending sequence / credits. |

`SGS_WorldMap` state is exposed via `singleGS_WorldMap.cpp` (area-select on the landing site). It hands off to `SGS_Game` / `SGS_Cave` once the player picks a destination.

### State-transition map (normal play)

```
SGS_File → SGS_Load → SGS_WorldMap ↔ SGS_Game ↔ SGS_DayEnd → SGS_MainResult → SGS_WorldMap
                                         ↓ (hole/geyser)
                                      SGS_Cave ↔ SGS_Cave (next floor)
                                         ↓ (extinct / give-up / done)
                                      SGS_CaveDayEnd → SGS_CaveResult → SGS_WorldMap
                                         ↓ (story flags)
                                      SGS_Movie → returns
                                         ↓ (pause menu → Piklopedia)
                                      SGS_Zukan → returns
                                         ↓ (story complete)
                                      SGS_Ending
```

### Hooks that already exist on `SingleGameSection`

`SingleGameSection.h:40-65`:
- `goNextFloor(ItemHole::Item*)` — triggers cave descent.
- `goCave(ItemCave::Item*)` — enters a cave from overworld.
- `goMainMap(ItemBigFountain::Item*)` — geyser-exit out of a cave.
- `playMovie_firstexperience/bootup/helloPikmin` — tutorial movie triggers.
- `enableTimer/disableTimer(type)` — demo timers (see BaseGameSection `DemoTimers`).
- `gmOrimaDown(int)` — captain knocked out (sundown force).
- `gmPikminZero()` — extinction-forced sundown.
- `openCaveInMenu/openCaveMoreMenu/openKanketuMenu` — the "enter this cave?" confirmation popups.

Modders wanting to detect day-end / cave-end can override these in a subclass or patch them at the call site.

## VsGameSection (Challenge + 2P Versus)

`include/Game/VsGameSection.h:53` + `src/plugProjectKandoU/vsGS_*.cpp`. Subclass of `BaseGameSection`.

Constructor's `bool` arg selects mode: `new VsGameSection(heap, false)` = Challenge, `(heap, true)` = 2P VS.

States (from `src/plugProjectKandoU/vsGS_*.cpp`):

| File | State | What it does |
|---|---|---|
| `vsGS_Title.cpp` | `TitleState` | Mode-select / stage-select UI. |
| `vsGS_Load.cpp` | `LoadState` | Load stage + enemies. |
| `vsGS_Game.cpp` | `GameState` | Active Challenge Mode floor. |
| `vsGS_VSGame.cpp` | `VSGameState` | Active 2P VS match (marbles + cherries). |
| `vsGS_Result.cpp` | `ResultState` | End-of-stage summary. |

VS mode tunables live at the top of `VsGameSection.h:13-29` (`VS_YELLOW_MARLBE_NUM`, `VS_CHERRY_MAX_COUNT`, handicap multipliers, etc.).

## RootMenuSection

`include/RootMenuSection.h`, `src/sysGCU/rootMenuSection.cpp`. Zero-logic bridge between `BootSection` and `Title::Section`. Rarely edited.

## Demo::Section

`src/sysGCU/demoSection.cpp`. The attract sequence — what plays when the title screen sits idle. Owns its own `MoviePlayer` instance. Reached via `SN_Demo`.

## Where to hook per section

| Goal | Best hook |
|---|---|
| Mod the overworld day | Subclass `SingleGameSection::GameState`, override `exec` |
| Mod cave floors | Same, on `CaveState` |
| Force a specific state transition | Call `mFsm->transit(this, SGS_Xxx, nullptr)` on a `SingleGameSection*` |
| Skip day-end summary | Override `MainResultState::exec` — or jump from `DayEndState` direct to `SGS_WorldMap` |
| Detect "player entered a cave" | Override `SingleGameSection::goCave` |
| Detect "player exited a cave" | Override `SingleGameSection::goMainMap` |
| Add a HUD layer in Challenge | Override `VsGameSection::pre2dDraw` or subclass `VsGame::State::draw` |
| Per-frame gameplay tick (any in-world section) | The `moddingU::onBaseGameUpdate` slot at `baseGameSection.cpp:360` |
| Per-frame HUD draw (any in-world section) | The `moddingU::onBaseGameDraw` slot at `baseGameSection.cpp:399` |

For 2D UI specifics (fonts, panels, `J2DPrint`), see `docs/menus_ui.md`.
