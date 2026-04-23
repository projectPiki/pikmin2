# Pikmin 2 Architecture

A modder's map of how the engine boots, loops, and hands control off to in-game code. File:line references throughout.

## Entry Point

- `src/sysBootupU/sysBootup.cpp:10` — `int main()` reports `"bootup"`, calls `System::initialize()`, then `(new System())->run()`.
- `include/System.h:74` — `struct System : public OSMutex` is the root engine object; it owns the display, heap status, timers, threads, graphics, DVD, card, sound, and the `GameFlow`.
- `include/System.h:126` — static `System::initialize()` constructs the one-shot subsystems before the instance is made.
- `src/sysGCU/system.cpp:774` — `int System::run()` just calls `mGameFlow->run()` and returns 0. The whole game runs inside `GameFlow`.

## Frame Loop / Section Swap

- `src/sysGCU/gameflow.cpp:78` — `GameFlow::run()` is the outer forever-loop. Each iteration: snapshot heap, `setSection()` to allocate the next `ISection`, `init()` / `run()` / `exit()`, destroy heap, repeat.
- `src/sysGCU/gameflow.cpp:105` — `GameFlow::setSection()` bootstraps: `SN_Boot` to `SN_RootMenu` to... (after `RootMenuSection` finishes it re-enters `createSection`).
- `src/sysGCU/gameflow.cpp:148` — `GameFlow::createSection(heap)` switches on `mActiveSectionFlag`: `SN_Demo` to `Demo::Section`, `SN_MainTitle` to `Title::Section`, `SN_SingleGame` to `Game::SingleGameSection`, `SN_ChallengeGame` to `Game::VsGameSection(heap, false)`, `SN_VSGame` to `Game::VsGameSection(heap, true)`. Default falls back to Title.

## Section Pattern

- `include/Section.h:15` — `struct ISection : public JKRDisposer` pure-virtual: `run / update / draw / init`.
- `include/Section.h:30` — `struct Section : ISection` is the concrete base. Owns `JFWDisplay*`, a per-section `JKRExpHeap`, a `JUTFader`, a `WipeBase`, a `Graphics*`, and a `mTimeStep` (default `0.5f`). Pure-virtuals subclasses implement: `doUpdate()` (_3C) and `doDraw(Graphics&)` (_40).
- `src/sysGCU/section.cpp:34` — `Section::Section` creates the section's heap with `JKRExpHeap::create(...)` and makes it current, then news a `Graphics` into `sys->mGfx`. This is why every scene transition has its own heap lifetime.
- `src/sysGCU/section.cpp:249` — `Section::run()`: `waitBlanking(1)` to `loading()` to `fadeIn()` to `main()` to `fadeOut()`.
- `src/sysGCU/section.cpp:163` — `Section::main()` is the per-frame loop: `beginFrame / beginRender / draw / endRender / update / endFrame`, iterates until `!mIsMainActive` or `mIsLoadingDVD`. `USADEMO1` kiosk build auto-resets after 180s.

## Section Chain

- `src/sysGCU/bootSection.cpp` — `BootSection` (tiny Pikmin logo scene, Nintendo/Rating screens, ARAM/THP warmup).
- `src/sysGCU/rootMenuSection.cpp` — `RootMenuSection` (between Boot and first Title).
- `src/sysGCU/titleSection.cpp` — `Title::Section` (main menu, file select UI hosted via ebi code).
- `src/plugProjectKandoU/singleGameSection.cpp` — `Game::SingleGameSection`, story mode. Subclass of `BaseGameSection`.
- `src/plugProjectKandoU/vsGameSection.cpp` — `Game::VsGameSection` doubles as Challenge Mode (2nd arg `false`) and 2P VS (`true`).
- `src/sysGCU/demoSection.cpp`, `menuSection.cpp` — demo builds and kiosk menus.

## BaseGameSection — the in-game pump

Subclasses of `BaseGameSection` (SingleGameSection, VsGameSection) implement the actual gameplay state machine. The base class drives the per-frame update/draw.

- `src/plugProjectKandoU/baseGameSection.cpp:278` — `BaseGameSection::doUpdate()` is the frame heart. Order matters for modders:
  1. `SysShape::Model::cullCount = 0; gameSystem->startFrame();`
  2. `Screen::gGame2DMgr->update();` + optional `updateBlendCamera()`
  3. `mapMgr->update();`
  4. `doAnimation();` (inside `doAnim` timer)
  5. `doEntry();` (spawn queues)
  6. `rumbleMgr / shadowMgr / lifeGaugeMgr / carryInfoMgr / mLightMgr` all update
  7. `BaseHIOSection::doUpdate();` (HIO debug parms)
  8. `platMgr->resetOnCount();`
  9. If not paused: `cellMgr->resolveCollision();` then `doSimulation(frameRate);`
  10. If not frozen/paused: `particleMgr->update();` + `particle2dMgr->update();`
  11. `onUpdate();` (subclass hook — state machine tick)
  12. `moviePlayer->update(...)` — optionally passes P1/P2 pads in MP
  13. `shadowMgr->init();` (resets per-frame shadow list)
  14. `gameSystem->endFrame(); return mIsMainActive;`

- `src/plugProjectKandoU/baseGameSection.cpp:367` — `BaseGameSection::doDraw(Graphics&)`:
  1. `captureRadarmap(gfx);`
  2. `cameraMgr->update();` (locks both in pause)
  3. `draw3D(gfx);` (lives in `baseGameSectionDraw.cpp`)
  4. `moviePlayer->drawLoading(gfx);`
  5. `pre2dDraw(gfx); draw2D(gfx);` plus optional otakara/kantei windows
  6. `moviePlayer->draw(gfx);`

- `src/plugProjectKandoU/baseGameSectionDraw.cpp` — 3D drawing passes (terrain, models, effects, shadow map).
- `src/plugProjectKandoU/baseGameSectionKantei.cpp` — the treasure "kantei" (appraisal) popup scene.

Modders: your per-frame hook normally goes inside a subclass `onUpdate()` or inside a specific manager's `update()`. Resist the urge to hand-edit the step order.

## Key Singletons (touched every frame)

All are globals declared in their manager's header; here are the definitions cited in `BaseGameSection::doUpdate`:

| Global | Header | Owns |
|---|---|---|
| `pikiMgr` | `include/Game/PikiMgr.h:95` | all Piki instances, model data per color, `PikiParms` |
| `naviMgr` | `include/Game/Navi.h:363` | Olimar + Louie/President, `NaviParms`, cursor/marker models |
| `itemMgr` | `include/Game/itemMgr.h:359` | master `ItemMgr` holding each item-type sub-mgr (see world_systems.md) |
| `gameSystem` | `include/Game/GameSystem.h:118` | global flags (`GAMESYS_*`), pause/freeze, movie pause, frame hooks |
| `mapMgr` | `include/Game/MapMgr.h:170` | the active `MapMgr` (loaded terrain / collision / waterbox set) |
| `cellMgr` | `include/Game/cellPyramid.h:260` | `CellPyramid`, the broadphase; `resolveCollision()` feeds physics |
| `cameraMgr` | `include/Game/CameraMgr.h:424` | both player cameras, split-screen viewports |
| `lightMgr` | per-section `mLightMgr` | `GameLightMgr` in `plugProjectYamashitaU/gameLightMgr.cpp` |
| `particleMgr` | `include/Game/DynParticle.h` (and `plugProjectEbisawaU/particleMgr.cpp`) | 3D effects |
| `particle2dMgr` | `plugProjectEbisawaU/particle2dMgr.cpp` | HUD/2D effects |
| `moviePlayer` | `include/Game/MoviePlayer.h:326` | JStudio-driven cutscenes |
| `lifeGaugeMgr` | `plugProjectYamashitaU/lifeGaugeMgr.cpp` | floating HP bars |
| `rumbleMgr` | `include/Game/rumble.h:173` | controller rumble patterns (`plugProjectNishimuraU/RumbleMgr.cpp`) |
| `shadowMgr` | `include/Game/shadowMgr.h:275` | blob + joint shadows (`plugProjectNishimuraU/shadowMgr.cpp`) |
| `platMgr` | `include/Game/PlatInstance.h:139` | platform / one-way floor collision |
| `generalEnemyMgr` | `include/Game/generalEnemyMgr.h:171` | boot-time enemy archive / shared resources |
| `deathMgr` | `include/Game/DeathMgr.h:57` | death counters (end-of-day stats) |
| `routeMgr` | `include/Game/pathfinder.h:31` | waypoint graph for Piki path-following |
| `randMapMgr` | `include/Game/Cave/RandMapMgr.h:255` | cave floor layout generator |

Generator globals at `include/Game/gameGenerator.h:448-452`: `generatorMgr`, `onceGeneratorMgr`, `limitGeneratorMgr`, `plantsGeneratorMgr`, `dayGeneratorMgr` — these spawn objects from stage data.

## The 8 `plugProject*U/` Dev Folders

These map 1:1 to the Nintendo devs who wrote them. Knowing who owns what makes finding code much faster:

- **Kando** (`plugProjectKandoU/`) — the lead. Gameplay core: sections, Piki/Navi, AI, items, map, dynamics, cells, pellets, save, registry. Biggest folder.
- **Yamashita** (`plugProjectYamashitaU/`) — enemy base class & chappy family, farm, lights, lifegauge, enemy-stone (petrification), enemyInfo.
- **Nishimura** (`plugProjectNishimuraU/`) — most named enemies, random cave generation (`RandMap*`), shadows, camera, rumble, IK.
- **Morimura** (`plugProjectMorimuraU/`) — a newer batch of enemies (blackMan/Waterwraith, bomb, egg, jigumo, kingChappy, miulin, etc.) plus the Challenge 2D UI.
- **Ogawa** (`plugProjectOgawaU/`) — 2D UI "og::" namespace: pause menu, counters, HUD, doping screen, world-map info window, scene graphs.
- **Hikino** (`plugProjectHikinoU/`) — audio: PSSystem wrappers (PSGame, PSAutoBgm, PSBnkMgr, PSSe, PSSeq, PSScene, PSDirector).
- **Ebisawa** (`plugProjectEbisawaU/`) — effects (efxBase/efxEnemy/efxPikmin), particle2d, title screen (ebi2D/ebi3D), file-select, option, card-e reader.
- **Kono** (`plugProjectKonoU/`) — Challenge Mode screens (khCaveResult, khDayEndResult, khFinalFloor, khPayDept, khReadyGo, khWinLose, khWorldMap) and `newGame2DMgr`.

## The 4 `src/sys*U/` Folders

- `sysBootupU/` — `main()` only. Don't touch.
- `sysCommonU/` — reusable math and geometry (camera, collision primitives, parameter stream, id32, sysMath).
- `sysGCU/` — GameCube-layer engine: `System`, `GameFlow`, sections (Boot/Title/Demo/Menu/RootMenu), display/graphics, `moviePlayer`, memoryCard, DVD thread, ARAM, THP (video), message renderer, `SysShape` model+animation.
- `utilityU/` — `PSMainSide_*` (sound driver main-thread bridges) plus a small debug `menu`.

## Headers to Know

- `include/System.h` — the god struct.
- `include/Section.h` — virtual interface for every top-level scene.
- `include/Game/GameSystem.h` — the game-mode flag bag (pause, freeze, movie pause, multi-player mode, disable collision, etc.).
- `include/Game/BaseGameSection.h` — hooks for subclasses (`onUpdate`, `onMovieDone`, etc.).
- `include/Game/Cave/RandMapMgr.h` — cave generation inputs.

## Modding Angles

- Wrap `BaseGameSection::doUpdate` to add custom global systems (e.g. a debug draw pass). Read the existing mgr order before inserting calls.
- `gameSystem->isFlag(GAMESYS_DisableCollision)` is a one-bit kill switch on the collision pass — useful for noclip-style debug.
- `System::setFrameRate(int)` at `src/sysGCU/system.cpp` controls the logic tick divisor (1 = 60Hz on NTSC). Use with care; a lot of AI code assumes `SINGLE_FRAME_LENGTH = 1/60`.
- The `GameFlow` outer loop means you can set `mActiveSectionFlag` manually to jump to a new section after current one exits — this is how cheats like "warp to credits" work without recompiling all paths.
