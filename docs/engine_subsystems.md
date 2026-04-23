# Engine Subsystems — Dolphin SDK + JSystem

What lives under `src/Dolphin/` and `src/JSystem/`, and which APIs a gameplay coder actually touches. **All of it is Nintendo middleware. Do not edit.** Mods read these APIs, they don't modify them — matching is fragile and breakage cascades through the build.

## Dolphin — GameCube SDK

`src/Dolphin/` is Nintendo's low-level platform layer, mirrored into this repo so the DOL links. Every subdir corresponds to a chapter of the public Dolphin SDK docs.

| Subdir | What it is | Gameplay-facing entry points |
|---|---|---|
| `os/` | Threads, mutexes, interrupts, context switch, `OSReport`, panic, time | `OSReport(fmt, ...)`, `OSGetTime()`, `OSMutex`, `OSInterrupt` — `include/Dolphin/os.h` |
| `gx/` | GameCube graphics hardware (TEV, VAT, FIFO, viewports, blend modes) | Rarely called directly; the engine wraps GX in `Graphics`, `J3DSys`, `J2DPrint` |
| `pad/` | Controller input — raw button/stick sampling | `PADRead`, `PAD_BUTTON_*` / `PAD_TRIGGER_*` in `include/Dolphin/pad.h`. Wrapped by `Controller` (`include/Controller.h`) / `JUTGamePad` |
| `mtx/` | Matrix/vector math (`Mtx`, `Vec`) | `PSMTXIdentity`, `PSMTXMultVec`, etc. Hot path. `include/Dolphin/mtx.h` |
| `dvd/` | DVD disc I/O (file reads, error handling) | Wrapped by `DvdStatus` + `DvdThreadCommand`. Direct use is rare. |
| `card/` | Memory-card reads/writes | Wrapped by `MemoryCardMgr`. Use that, not raw `CARDRead`. |
| `dsp/` | Digital signal processor (audio mixing mcode) | Used only by JAudio. Don't touch. |
| `ai/` | Audio interface (DMA to speakers) | JAudio-only. |
| `vi/` | Video interface (render-mode programming) | Called only by `System` on boot. |
| `si/`, `exi/` | Serial / expansion interfaces | Controllers, memory cards, GBA cable. Wrapped. |
| `ar/`, `base/` | ARAM (auxiliary RAM, 16MB for streams) + low-level startup | `Pikmin2ARAM.h` allocates audio/graphics regions. |
| `thp/` | THP video decoding (Nintendo's movie format) | Engine uses `THPPlayer`; cutscenes in `moviePlayer`. |
| `gd/` | Display list recording helpers | JSystem-internal. |
| `gba/` | GBA connection (unused in Pikmin 2) | Don't touch. |
| `db/` | Debugger stubs | Unused in retail. |
| `MSL_C/`, `Runtime/`, `TRK_MINNOW_DOLPHIN/` | C standard library + Metrowerks runtime + debugger | Rebuild-only; don't touch. |
| `OdemuExi2/`, `amcstubs/`, `odenotstub/` | Dev-kit stubs | Unused in retail; don't touch. |

### What a gameplay coder actually imports from Dolphin

In practice only four headers show up in gameplay code:

```cpp
#include "Dolphin/os.h"     // OSReport, OSTime, OSMutex, OSPanic
#include "Dolphin/pad.h"    // PAD_BUTTON_A, PAD_TRIGGER_L, etc.
#include "Dolphin/rand.h"   // rand() helpers
#include "Dolphin/mtx.h"    // matrix ops when you bypass Vector3f helpers
```

Anything else is middleware territory.

## JSystem — Nintendo's framework middleware

`src/JSystem/` is the Nintendo-wide C++ framework that wraps Dolphin into object models for graphics, audio, UI, cutscenes, etc. Shared across many late-GC/early-Wii titles (Pikmin 2, Super Mario Sunshine, Wind Waker, F-Zero GX). Untouchable for matching.

### The J-libraries at a glance

| Namespace | Subdir | Role |
|---|---|---|
| **J2D** | `src/JSystem/J2D/` | 2D UI — panes, text, pictures, BLO screens. HUD lives here. |
| **J3D** | `src/JSystem/J3D/` | 3D model/material/animation system. Every `.bmd`/`.bdl` character is loaded via J3D. |
| **J3DU** | `src/JSystem/J3DU/` | J3D utility — camera/light glue on top of J3D. |
| **JAudio** | `src/JSystem/JAudio/` (JAS/JAI/JAL/JAD/JAU/dsp) | BGM, SFX, sequencer. Driven through PSSystem wrappers. |
| **JParticle** | `src/JSystem/JParticle/` | GPU particle emitter system (`.jpa` resources). |
| **JMessage** | `src/JSystem/JMessage/` | Localized message lookup (`.bmg` tables). |
| **JStudio** (+ `_JAudio`, `_JParticle`, `_JMessage`, `_JStage`) | `src/JSystem/JStudio/` + siblings | Cutscene / demo authoring (the "STB" format). `MoviePlayer` drives this. |
| **JStage** | `src/JSystem/JStage/` | Scene-graph layer JStudio renders into. |
| **JKernel** | `src/JSystem/JKernel/` | Heap, archive, disposer, file cache. `JKRHeap` + `JKRExpHeap` + `JKRArchive` live here. |
| **JFramework** | `src/JSystem/JFramework/` | Game-boot skeleton. `JFWSystem::systemFont`, `rootHeap`, `systemHeap`. |
| **JUtility** (**JUT**) | `src/JSystem/JUtility/` | Junk drawer: fader, console, font, controller, texture, palette, video, gamepad. |
| **JMath** | `src/JSystem/JMath/` | Fast-math helpers and geometry types. |
| **JSupport**, **JGadget** | `src/JSystem/JSupport/`, `JGadget/` | STL-lite containers + stream helpers. |

### What you actually touch from gameplay code

#### J2D (`include/JSystem/J2D/`)
- `J2DPrint` (`J2DPrint.h`) — draw text with a loaded `JUTFont`. See `src/moddingU/modMenu.cpp` for a live example (`draw` method).
- `J2DScreen` (`J2DScreen.h`) — load a `.blo` UI layout and walk its panes. Used heavily by `plugProjectOgawaU`.
- `J2DPane` / `J2DPicture` / `J2DTextBox` / `J2DWindow` — elements inside a screen.
- `J2DGrafContext`, `J2DOrthoGraph`, `J2DPerspGraph` — 2D rendering contexts (set up by the engine during the 2D pass).

#### J3D (`include/JSystem/J3D/`)
- `J3DModel`, `J3DModelData`, `J3DAnimation` — per-model runtime + static data. The engine wraps these as `SysShape::Model` (`include/SysShape/Model.h`) — prefer the wrapper for gameplay code.
- `J3DMaterial`, `J3DMatBlock`, `J3DTevs` — shader state. Edited via the BMD/BMT/BCK/BTK/BTP resources loaded at asset-load time; almost never touched at runtime.
- `J3DSys` — the global GX state the engine calls `reinitGX()` on (`baseGameSection.cpp:1419`).

#### JAudio / PSSystem
Don't touch JAudio directly. Pikmin 2 layers `PSSystem` on top — see `src/plugProjectHikinoU/` (Hikino) and `include/PSGame/`, `include/PSSystem/`, `include/PSM/`. Entry points a gameplay coder might touch:
- `PSGame::SceneInfo` / `PSSystem::SceneMgr` — sound scenes (per-section audio environments).
- `PSM::Creature` / `PSM::CreatureMgr` — attaches SFX to creatures (see `EnemyBase::startSound`).
- `PSAutoBgm` (Hikino) — dynamic BGM layering that follows gameplay danger.

Any direct JAS/JAI call in gameplay code is a bug.

#### JParticle
Accessed via `particleMgr` (`include/ParticleMgr.h`), never directly. To spawn:
```cpp
particleMgr->create(particleID, position, 0);
```
Particle IDs are enumerated in `include/ParticleID.h`. Definitions live in `.jpa` resources bundled with the stage.

#### JMessage
`include/JSystem/JMessage/` — localized text lookup. Keys are 32-bit hashes. Game-specific wrappers are in `include/P2JME/` (Pikmin 2 JMessage Extensions). Use those, not raw JMessage.

#### JStudio
The STB (Studio Binary) cutscene runtime. `MoviePlayer` (`include/Game/MoviePlayer.h`) is the gameplay-facing wrapper — starts an STB file, feeds per-frame update, emits callbacks for `onMovieStart`/`onMovieDone`/`onMovieCommand`. A modder typically:
- Listens for movie start/end via the section hooks (see `SingleGameSection.h:AF`).
- Never opens an STB directly — always through `moviePlayer->play(MovieConfig*)`.

#### JKernel
The allocator. You will call:
- `JKRHeap::sCurrentHeap->getFreeSize()` — query free bytes.
- `JKRGetCurrentHeap()` — get the heap a new'd object will land on.
- `JKRArchive::getResource(name)` — load an asset from a mounted archive (see `EnemyParmsBase::loadSettingFile` in `src/plugProjectYamashitaU/enemyParmsBase.cpp:10`).
- `new` on the current heap is the normal case; no special API needed.

#### JFramework
- `JFWSystem::systemFont` — the global font pointer (`include/JSystem/JFramework/JFWSystem.h:48`). Use it for any overlay text (`J2DPrint` constructor takes a `JUTFont*`).
- `JFWSystem::systemHeap` — the engine-lifetime heap (text, sound banks, etc.).
- `JFWDisplay` — the vsync / blanking pump (owned by `Section`, don't touch).

#### JUT
- `JUTGamePad` (`include/JSystem/JUtility/JUTGamePad.h`) — controller state. `Controller*` in the codebase is a `JUTGamePad*`. Methods: `readButton()`, `testTrigger(mask)`, `testHold(mask)`, plus wrappers in `include/Controller.h` (`isButtonDown`, `isButtonHeld`).
- `JUTFader` — screen fade. Set up by `Section`, rarely directly invoked from gameplay.
- `JUTConsole` — dev-only text console (useful for quick debug prints).
- `JUTTexture` (`JUTTexture.h`) — a GX-ready 2D image. Used by the boot section for logos, the radar map capture, etc.
- `JUTException` — crash handler; don't touch.
- `JUT_ASSERT`, `JUT_PANICLINE`, `P2ASSERT` (from `P2Macros.h`) — error macros used everywhere. See them in `system.cpp:109`.

## Rules of engagement

1. **Never edit `src/JSystem/` or `src/Dolphin/`.** Byte-for-byte matching is unusually brittle here and the SHA check will fail. If you think you need to, you're almost certainly wrong.
2. **Include the JSystem header, not the Dolphin one.** E.g. include `JSystem/JUtility/JUTGamePad.h`, not `Dolphin/pad.h`, unless you need the raw button bitmasks.
3. **Don't call JAS/JAI/JAL directly.** Use `PSSystem` (Hikino's wrapper) — otherwise your sound won't survive a scene change.
4. **All JSystem types allocate on `JKRHeap::sCurrentHeap`.** If you `new J2DPrint` inside a section, it dies with the section heap — which is usually what you want.
5. **Fonts require `JFWSystem::systemFont` to be non-null.** It's populated during boot and stays non-null through the rest of execution. Any overlay drawn before Boot finishes will need its own font.

## Tiny cheat sheet

```cpp
// Debug log:
OSReport("[mymod] frame=%d\n", frameCount);

// Read buttons (inside doUpdate, have Controller*):
if (pad->isButtonDown(PAD_BUTTON_A)) { ... }   // edge-triggered
if (pad->isButtonHeld(PAD_TRIGGER_L))   { ... } // level

// Draw text with the system font, 2D pass only:
if (JFWSystem::systemFont) {
    J2DPrint p(JFWSystem::systemFont, 0.0f);
    p.initiate();
    p.setCharColor(JUtility::TColor(255, 255, 255, 255));
    p.print(40.0f, 60.0f, "hello %s", name);
}

// Spawn a particle:
particleMgr->create(ParticleID::Effect_Xxx, position, 0);
```

## Further reading

- `docs/world_systems.md` — runtime managers (`mapMgr`, `cellMgr`, `particleMgr`, `cameraMgr`, etc.) layered on top of JSystem.
- `docs/menus_ui.md` — concrete J2D patterns for HUD overlays.
- Nintendo's public `dolphin-sdk` docs for SDK headers (OS, GX, PAD, etc.).
