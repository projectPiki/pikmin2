# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this repo is

A **matching decompilation** of GameCube *Pikmin 2* (`projectPiki/pikmin2`). Building reproduces the original retail `main.dol` **byte-for-byte** — a final SHA1 check in the Makefile/ninja output fails the build if the output doesn't match. "Matching" is a hard constraint, not a goal: most source is `.cpp` compiled with the original Metrowerks `mwcceppc 2.6`, but functions that haven't been perfectly decompiled yet live as pre-assembled `.s` files in `asm/<lib>/...` so the final binary still matches.

Two supported DOLs: `GPVE01` (USA retail, default) and `GPVE01_D17` (USA Demo 17). `Makefile` variable `VERNUM` (0=D17, 4=retail) gates version-specific code via `version==N` in asm and `#if VERSION` in C++.

When the user asks for "mods", they almost always mean non-matching builds (`python configure.py --non-matching`) where the SHA1 check is disabled.

## Build & diff commands

```sh
python configure.py             # generates build.ninja from configure.py (canonical)
ninja                           # build — matches retail SHA1
ninja build/GPVE01/src/plugProjectKandoU/piki.o   # single TU
ninja clean                     # wipe build/
python configure.py --version GPVE01_D17          # switch version
python configure.py --non-matching                # disable SHA check, enable modding
python configure.py --help                        # full flag list
```

Output is at `build/GPVE01/main.dol`. **Do not use the top-level `Makefile` for normal work** — it is legacy. `configure.py` is the source of truth; `obj_files.mk` is consumed only by the Makefile path.

Diffing: after first build, an `objdiff.json` exists at the repo root. Install `encounter/objdiff`, point it at this dir, pick an object from the sidebar. Changes to `src/**`, `include/**`, `configure.py`, `splits.txt`, `symbols.txt` auto-rebuild.

Progress: `tools/calcprogress.py` reads the MAP file; `tools/upload_progress.py` pushes to decomp.dev. Build with `MAPGENFLAG=1` (several-minutes link) to regenerate.

## High-level architecture

Execution starts at `src/sysBootupU/sysBootup.cpp:10` — literally `new System()->run()`. `System` (in `sysGCU/system.cpp`) owns the frame loop and swaps **Sections** (`include/Section.h`, `sysGCU/section.cpp`), which are self-contained game states with their own heap, resources, and update/draw. The chain is **BootSection → TitleSection → SingleGameSection | VsGameSection**; each owns sub-states (`singleGS_*.cpp`, `vsGS_*.cpp`) for things like FileSelect, MainGame, CaveGame, DayEnd, WorldMap, Zukan, Ending.

In-game the world is run by **`BaseGameSection`** (`plugProjectKandoU/baseGameSection.cpp`). The two per-frame hooks a modder should know:
- `BaseGameSection::doUpdate` — `baseGameSection.cpp:278`. Drives `mapMgr`, `cellMgr`, entity animation, physics (`doSimulation`), particles. Call your mod tick just before `gameSystem->endFrame()` at line 359.
- `BaseGameSection::doDraw(Graphics& gfx)` — `baseGameSection.cpp:367`. 3D pass, then 2D pass starting at line 388 (`gfx.setToken("2d"); draw2D(gfx);`). Overlay HUDs belong right after `draw2D`.

The repo is organized by original **developer initial** (`plugProject<DevName>U/`), which doubles as a rough module boundary:

| Folder | Dev | Owns |
|---|---|---|
| `plugProjectKandoU` | Kando | Core gameplay: Piki, Navi, pellets, items, map, AI, BaseGameSection, singleGS_* |
| `plugProjectYamashitaU` | Yamashita | `EnemyBase`, Chappy/Kochappy (Bulborbs), game lighting |
| `plugProjectNishimuraU` | Nishimura | Most unique enemies + bosses, RandMap cave generator, play camera |
| `plugProjectMorimuraU` | Morimura | Waterwraith (`blackMan`), Challenge/VS 2D screens, Zukan 2D |
| `plugProjectOgawaU` | Ogawa | In-game menus (pause, squad, file) |
| `plugProjectHikinoU` | Hikino | Audio: BGM (PSAutoBgm), SFX, sequencer |
| `plugProjectEbisawaU` | Ebisawa | Particle effects for piki/enemies, 2D callbacks |
| `plugProjectKonoU` | Kono | Day-end, final result, world map screens |
| `sysBootupU` / `sysGCU` / `sysCommonU` | — | Engine glue: boot, System, graphics, camera, collision math |
| `src/JSystem/` | Nintendo | Middleware (J2D UI, J3D models, JAudio, JParticle, JMessage, JStudio cutscenes, JUT). **Don't edit.** |
| `src/Dolphin/` | Nintendo | GameCube SDK (OS, DVD, GX, PAD). **Don't edit.** |

**Key global singletons** — all are `extern` pointers constructed per-section, safe to call from any mod code that runs after section load:
- `pikiMgr` (`include/Game/PikiMgr.h:95`) — all active Pikmin. `MAX_PIKI_COUNT = 100` in `include/Game/Piki.h:10`.
- `naviMgr` (`include/Game/Navi.h:363`) — captains (Olimar/Louie).
- `itemMgr` (`include/Game/itemMgr.h:359`) — non-enemy world items (pellets, gates, bridges, etc.).
- `generalEnemyMgr`, `mapMgr`, `cellMgr`, `cameraMgr`, `lightMgr`, `particleMgr`, `particle2dMgr`, `moviePlayer`, `lifeGaugeMgr`, `carryInfoMgr`, `rumbleMgr`, `shadowMgr`, `platMgr` — all visible in `BaseGameSection::doUpdate` and referenced from `include/Game/*.h`.
- `gameSystem` — frame-level state; check `gameSystem->paused()` / `gameSystem->isMultiplayerMode()` / `gameSystem->isFlag(GAMESYS_*)` before running mod logic.
- `gameSystem->mTimeMgr` (`include/Game/TimeMgr.h`) — day timer. Key fields: `mCurrentTimeOfDay` (hours since midnight, 7.0 = landing, 19.0 = sunset), `mCurrentRealTime` (real seconds). Call `mTimeMgr->setTime(f32 hours)` to scrub the clock. Day length in seconds is `mTimeMgr->mParms.mParms.mDayLengthSeconds.mValue` (default 1560 = 26 min).

Creature hierarchy: `Creature → FakePiki → Piki` (captains parallel at `FakePiki → Navi`); enemies `Creature → EnemyBase → Enemy<T> → <Specific>`. Every tunable stat lives in a nested `Parms` struct — see `include/Game/PikiParms.h:7` for the canonical example with ~100 FourCC-tagged floats (`mWalkSpeed`, `mThrowHeight`, `mHealth` per color, etc.). Enemies follow the same pattern via `CG_PARMS(x)` / `C_PROPERPARMS` macros (see `docs/writing_code.md`).

State machines: both Piki (`pikiState.cpp` ~130k lines) and Navi (`naviState.cpp` ~163k lines) use an FSM where each state is a class with `init/exec/cleanup`. Enemies use the same pattern — `chappyState.cpp`, `kumaChappyState.cpp`, etc.

## Japanese codenames

Nintendo kept Japanese internal names. **Always translate before grepping** for an enemy: Bulborb=`Chappy`, mini-Bulborb=`Kochappy`, Emperor Bulblax=`Mar` or `KingChappy`, Waterwraith=`BlackMan`, Titan Dweevil=`BigTreasure`, Pileated Snagret=`SnakeCrow`, Swooping Snitchbug=`Hanachirashi`, Iridescent Flint Beetle=`Kogane`, Bulbmin=`OniKurage`-adjacent. See `docs/enemies.md` for the full codename ↔ English table (ask the user to regenerate `docs/game_reference.md` from the wiki if the mapping is wrong — some are guesses).

## Modding workflow

1. `python configure.py --non-matching` — disables the SHA check and allows non-matching output.
2. Edit `src/**` as a normal C++ project. The compiler is old MWCC so be conservative (no C++11+ features).
3. To add a *new* source file (not present in the original DOL), follow the README's "Modding" section:
   - Uncomment the trailing `"lib": "moddingU"` block near the bottom of `configure.py`.
   - Add `Object(Matching, "moddingU/your_file.cpp")`.
   - Add the same path to `link_order_callback` in the order you want it linked.
4. `./mod.sh` — **the canonical mod build+deploy command**. Runs `ninja` then copies `build/GPVE01/main.dol` to `orig/GPVE01/sys/main.dol` so Dolphin picks it up immediately. Use this instead of bare `ninja` for mod work.

**Mod menu table rule:** whenever you add, remove, or change a slider's min, max, default, or step in `src/moddingU/modMenu.cpp`, also update the "Available Mods" table in `README.md` to match. The table is the user-facing source of truth for what the menu exposes.

**Mod menu files — changes from upstream (`projectPiki/pikmin2`):**

New files added by this fork:
- `src/moddingU/modMenu.cpp` — all mod menu logic (sliders, input, draw, action callbacks)
- `include/moddingU/modMenu.h` — `ModMenu`/`ModSlider` structs, `ModSliderKind` enum, externs (`gModMenu`, `gFieldCap`, `gPurpleLiftScale`)

Upstream files patched for mod menu integration:
- `src/plugProjectKandoU/baseGameSection.cpp` — calls `moddingU::onBaseGameUpdate` / `onBaseGameDraw` each frame
- `src/plugProjectKandoU/naviState.cpp` — writes `moddingU::gFieldCap` into the HUD on-field cap each frame
- `src/plugProjectKandoU/pikiMgr.cpp` — returns `moddingU::gPurpleLiftScale` from `getColorTransportScale()`
- `configure.py` — adds the `moddingU` lib block (only linked when `--non-matching`) and link order entry

These are the only files that need touching for mod menu work. All other files in `src/` and `include/` match upstream exactly.

**Things to avoid touching** unless you know why:
- Anything under `src/JSystem/` or `src/Dolphin/` — Nintendo middleware; matching is fragile and there's almost no reason to edit it for a mod.
- `asm/**/*.s` files — these are unmatched functions compiled from hand-written asm; editing them is only needed to reach 100% match progress, not for modding.
- The `Parms` constructor default values in header files are the *initial* values; gameplay parm files in the game's FS (`orig/GPVE01/files/...`) override them at runtime. For simple stat tweaks prefer changing the parm file; for behavior changes edit the `.cpp`.
- **`MAX_PIKI_COUNT` — do not raise above 100.** It controls both the heap allocation in `PikiMgr::alloc()` and the size of dozens of stack-local `Piki*` arrays across the codebase. Raising it to 150+ causes a heap/stack blowout at `BaseGameSection` init and crashes on the area title screen. The soft on-field cap is `moddingU::gFieldCap` (mod menu "Max on field" slider), which is safe to adjust up to 100.

**`orig/` is gitignored — game data changes persist across branch switches.**
`orig/GPVE01/files/` and `orig/GPVE01/sys/` are excluded by `.gitignore` (`orig/*/*`). Any edits to game data files (e.g. `stages.txt`, parm `.txt` files, map assets) survive `git checkout` and affect every branch silently. When diagnosing a crash that hits all branches equally, check for post-extraction modifications:
```sh
find orig/GPVE01/files -type f -newer orig/GPVE01/sys/main.dol.retail
```
To get a clean slate, re-extract from the ISO:
```sh
find orig/GPVE01/files -mindepth 1 -delete && find orig/GPVE01/sys -mindepth 1 -delete
./build/tools/dtk disc extract "/path/to/Pikmin 2 (USA).iso" orig/GPVE01
cp orig/GPVE01/sys/main.dol orig/GPVE01/sys/main.dol.retail
./mod.sh
```
The user's ISO is at `/home/yerry/Downloads/Pikmin 2 (USA)/Pikmin 2 (USA).iso`.

**Dolphin save file location** (for diagnosing save corruption):
`~/.var/app/org.DolphinEmu.dolphin-emu/data/dolphin-emu/GC/USA/Card A/01-GPVE-Pikmin2_SaveData.gci`
If a mod writes an out-of-range course index (e.g. `openCourse(4)` on a 4-course build) the save gets corrupted and the game crashes at world map load on every subsequent boot. Delete the GCI to recover.

## Coding conventions specific to this repo

- Iteration: `CI_LOOP(iter) { … }` instead of the manual `first()/isDone()/next()` loop (see `docs/writing_code.md`).
- Range checks: `IS_WITHIN_CIRCLE` / `isCreatureWithinRange` instead of `x*x + z*z < r`.
- Parm access from inside an enemy method: `C_PARMS`, `C_PROPERPARMS`; from outside: `CG_PARMS(x)`, `CG_PROPERPARMS(x)`.
- Bitflags: `SET_FLAG(x, v)` / `RESET_FLAG(x, v)`.
- Random: `randFloat()` = `[0,1)`, `randWeightFloat(r)` = `[0,r)`.
- Asserts: `P2ASSERT`, `JUT_ASSERT` from JSystem/JUT.
- `.clang-format` is enforced in CI; `format-files.sh` runs it on staged files.

## Existing docs

`docs/` contains supplementary guides. Consult these before duplicating work:
- `docs/architecture.md` — engine boot, frame loop, section swap, global singletons; start here.
- `docs/game_sections.md` — `Section` subclass tree (Boot/Title/SingleGame/VsGame/BaseGame) with sub-state FSMs and per-section hook sites.
- `docs/engine_subsystems.md` — map of `src/Dolphin/` (GX/PAD/OS/DVD) and `src/JSystem/` (J2D/J3D/JAudio/JParticle/etc); which APIs mods actually touch.
- `docs/world_systems.md` — runtime managers (mapMgr, cellMgr, cameraMgr, lightMgr, particleMgr, shadowMgr, platMgr, RandMapMgr, etc.) with lifecycle and mod hook points.
- `docs/menus_ui.md` — 2D UI: J2DPrint/J2DScreen, Ogawa/Morimura/Kono menu systems, HUD draw path, minimal text-overlay recipe.
- `docs/build_system.md` — deep dive on `configure.py`, matching rules, toolchain.
- `docs/pikmin_and_navi.md` — Piki/Navi class hierarchy, FSM tables, modding hooks.
- `docs/enemies.md` — EnemyBase, callback system, FSM layering, codename↔English mapping.
- `docs/modding_cheat_sheet.md` — quick callback reference (EnemyBase callbacks, WaterBox).
- `docs/mod_menu_design.md` — design + slider manifest for the in-level mod menu (v0 implemented in `src/moddingU/`).
- `docs/new_pikmin_type.md` — design plan for adding an 8th pikmin color (cave-only vs. onyon-native tradeoffs).
- `docs/new_monster.md` — new-enemy checklist using Pebblefoot (Kogane subclass) as the minimum template.
- `docs/game_reference.md` — codename <-> English enemy table, area/cave lists with FourCC IDs, pikmin-color stats, and economy constants (debt, day length, max piki).
- `docs/writing_code.md` — style shorthands.
- `docs/recommended_todo.md` — auto-generated list of unlinked files still to be decompiled.
