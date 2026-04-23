# World Systems — Runtime Managers

The singletons that own physical-world state during gameplay. Every one of these is an `extern` pointer constructed during `BaseGameSection::init` and destroyed when the section tears down. Listed in the order they tick inside `BaseGameSection::doUpdate` (`src/plugProjectKandoU/baseGameSection.cpp:279-362`).

For the frame-order and pointer-table overview, see `docs/architecture.md`. This doc goes one layer deeper: class/file/line, what each manager owns, its lifecycle, and the hook points mods typically want.

## `mapMgr` — Stage geometry + queries

| | |
|---|---|
| Class | `Game::MapMgr : virtual public GenericObjectMgr` |
| Header | `include/Game/MapMgr.h:33` |
| Global | `extern MapMgr* mapMgr;` (`MapMgr.h:170`) |
| Lifecycle | Constructed when a stage loads (by `SingleGameSection::LoadState` or cave generator); destroyed on section exit. |
| Per-frame | `mapMgr->update()` called at `baseGameSection.cpp:287`. |

**Owns:** stage collision mesh, triangle queries, ray intersections, start positions for spawners, static/hidden collision, water boxes, demo-matrix for camera setup.

**Key virtuals (MapMgr.h:65-80):**
- `traceMove(MoveInfo&, f32)` — sweep a volume through geometry and return the triangle list.
- `getMinY(Vector3f&)` — vertical raycast down, returns floor height.
- `getCurrTri(CurrTriInfo&)` — what triangle is under this point right now.
- `findRayIntersection(Sys::RayIntersectInfo&)` — arbitrary raycast.
- `getStartPosition(Vector3f&, int)` — ship/onyon spawn positions by index.
- `getBoundBox(BoundBox&)` / `getBoundBox2d(BoundBox2d&)` — stage extents for camera clamp / minimap.
- `hasHiddenCollision()` — lets the cave generator hint at ceiling triangles.

**Sub-mgrs the map owns:**
- `CourseInfo` — per-stage metadata.
- `RouteMgr* routeMgr` (`include/Game/pathfinder.h:31`) — waypoint graph for Piki path-following.
- `SeaMgr` — animated water surfaces (`include/Game/seaMgr.h`).

**Mod hooks:**
- `mapMgr->traceMove(...)` — call during your update hook to probe geometry (e.g. noclip, teleport-safe).
- Replacing a specific map's `MapMgr` subclass is how `RandMapMgr` installs cave collision at runtime.

## `cellMgr` — Broadphase spatial partitioning

| | |
|---|---|
| Class | `Game::CellPyramid` |
| Header | `include/Game/cellPyramid.h` |
| Global | `extern CellPyramid* cellMgr;` (`cellPyramid.h:260`) |
| Lifecycle | Constructed with the stage; holds every `CellObject` (every Piki, enemy, item). |
| Per-frame | `cellMgr->resolveCollision()` at `baseGameSection.cpp:333` — only runs when `!gameSystem->paused()` and `GAMESYS_DisableCollision` is off. |

**Owns:** a pyramid of spatial cells (hence the name). Each `Creature` inserts itself into a cell sized to its AABB; the pyramid then emits pairwise collision tests against neighbors.

**Static flag:** `CellPyramid::sSpeedUpResolveColl` — controls a fast-path. Set to `true` every frame after the first resolve (line 334).

**Mod hooks:**
- `gameSystem->setFlag(GAMESYS_DisableCollision)` is the one-line noclip for everyone.
- Iterating all objects in a radius: use `CollisionBuffer` (`cellPyramid.h:33-49`) + `insertSort`.
- See `include/Condition.h` for the `Condition` functors (`isAlive`, `isEnemy`, etc.) you can pass to cell-walk helpers.

## `cameraMgr` — Player cameras + viewports

| | |
|---|---|
| Class | `Game::CameraMgr : public CNode` |
| Header | `include/Game/CameraMgr.h:387` |
| Global | `extern CameraMgr* cameraMgr;` (`CameraMgr.h:424`) |
| Lifecycle | Per-section; one instance serves both split-screen cams. |
| Per-frame | `cameraMgr->update()` at `baseGameSection.cpp:375/380` — gets locked during pause. |

**Owns:** 2 `PlayCamera*` (P1 + P2), 2 `Viewport*`, a `CameraParms` pair, a `VibrationParms*`, and the current player mode (`mCurrPlayerMode`: 0=Olimar, 1=Louie, 2=Multiplayer, `CameraMgr.h:414`).

**Key methods (`CameraMgr.h:392-410`):**
- `init(int state)` — set up default state (overworld / cave / VS).
- `setCameraAngle(f32, int camID)` — rotate a specific cam.
- `startVibration(type, pos, camID)` — shake the camera (see `VibrationParms`).
- `controllerLock(camID)` / `controllerUnLock(camID)` — disable stick-rotate (used by pause menus).
- `changePlayerMode(naviID, delegate)` — swap the active captain for a camera.
- `setZukanCamera(LookAtCamera*)` — override the main cam with a custom one (Piklopedia uses this).

**Mod hooks:**
- Call `cameraMgr->startVibration(type, pos, CAMNAVI_Both)` for a rumble pulse during a custom event.
- For a new free-cam: install a `LookAtCamera` subclass via `setZukanCamera`.

## `lightMgr` (per-section `mLightMgr`) — Scene lighting

| | |
|---|---|
| Class | `Game::GameLightMgr : public LightMgr` |
| Header | `include/Game/GameLight.h:246` (subclass of `LightMgr` at `include/Light.h:107`) |
| Global | Exposed as `BaseGameSection::mLightMgr`; no direct `extern`. |
| Lifecycle | Per-section. |
| Per-frame | `mLightMgr->update()` at `baseGameSection.cpp:310`; `mLightMgr->set(gfx)` at start of 3D pass. |

**Owns:** ambient light, a chain of `LightObj*` (directional, point, spot), debug state. GameLightMgr adds overworld/cave-aware presets (day/night, fog gradients, cave pitch-dark mask).

**Key methods (`Light.h:112-115`):**
- `update()` — default empty; subclasses like `GameLightMgr` run the day-cycle.
- `set(Graphics&)` — bind to GX at draw time.
- `registLightObj(LightObj*)` — add an entry to the chain.

**Mod hooks:**
- Add a light: `new LightObj(...)` + `mLightMgr->registLightObj(obj)`.
- Freeze time-of-day: patch `GameLightMgr`'s day-cycle interpolator to a fixed t.

## `particleMgr` + `particle2dMgr` — Effects

| | |
|---|---|
| Classes | `ParticleMgr : public CNode`; `TParticle2dMgr` |
| Headers | `include/ParticleMgr.h:21`; `include/TParticle2dMgr.h` |
| Globals | `extern ParticleMgr* particleMgr;` (`ParticleMgr.h:88`); `extern TParticle2dMgr* particle2dMgr;` (`TParticle2dMgr.h:55`) |
| Lifecycle | Per-section. `ParticleMgr::globalInstance()` at init; `ParticleMgr::deleteInstance()` at teardown (see static methods, `ParticleMgr.h:32-33`). |
| Per-frame | `particleMgr->update()` at `baseGameSection.cpp:343` (skipped if frozen/paused); `particle2dMgr->update()` at line 346. |

**ParticleMgr owns:** a `JPAEmitterManager` (JParticle), a `JPAResourceManager`, a `ModelEffect` subsystem (model-attached effects), up to 4 viewports it renders into.

**Key methods (`ParticleMgr.h:45-62`):**
- `create(u16 id, Vector3f& pos, u8)` — spawn an emitter by ID. IDs in `include/ParticleID.h`.
- `createDemo(id, pos, u8, u8)` — cutscene variant.
- `forceKill(emitter)`, `fade(emitter)`, `killAll()` — teardown.
- `createModelEffect(ModelEffectCreateArg*)` — spawn an emitter bound to a model joint.

**TParticle2dMgr** handles HUD-space particles (treasure-get sparkles, whistle ring).

**Mod hooks:**
- Debug-spawn an effect at cursor: `particleMgr->create(ParticleID::EFX_Xxx, pos, 0)`.
- Suppress all effects: `particleMgr->killAll()` — useful for screenshot mode.

## `platMgr` — Moving platforms

| | |
|---|---|
| Class | `Game::PlatMgr : public NodeObjectMgr<PlatInstance>` |
| Header | `include/Game/PlatInstance.h:113` |
| Global | `extern PlatMgr* platMgr;` (`PlatInstance.h:139`) |
| Lifecycle | Per-section. Static `PlatMgr::mUseCellMgr` gates whether platforms register into the cell pyramid. |
| Per-frame | `platMgr->resetOnCount()` at `baseGameSection.cpp:321` (clears per-frame "who's on me" counters). |

**Owns:** a list of `PlatInstance*` — platform hierarchies attached to specific bones of a `SysShape::Model`. Each instance has its own collision surface that moves with its bone; Piki/Navi inherit velocity when standing on them.

**Key methods (`PlatInstance.h:113-126`):**
- `addInstance(PlatAddInstanceArg&)` — register a new platform.
- `delInstance(PlatInstance*)` — remove.
- `traceMove(MoveInfo&, f32)` — like `MapMgr::traceMove` but only against platforms.
- `getMinY(Vector3f&) const` — vertical raycast against platforms.
- `findRayIntersection(Sys::RayIntersectInfo&)` — arbitrary ray.

**Mod hooks:** Rare. If you add a new carrier creature (e.g. a walking enemy that Piki can stand on), it implements `PlatInstance` and calls `platMgr->addInstance` in its init.

## `shadowMgr` — Drop / blob shadows

| | |
|---|---|
| Class | `Game::ShadowMgr : public CNode` |
| Header | `include/Game/shadowMgr.h:198` |
| Global | `extern ShadowMgr* shadowMgr;` (`shadowMgr.h:275`) |
| Lifecycle | Per-section. Constructed with a capacity (`ShadowMgr(int)`). |
| Per-frame | `shadowMgr->update()` at `baseGameSection.cpp:301`; `shadowMgr->init()` at line 358 (resets the per-frame draw list for next frame). |

**Owns:** a pool of `JointShadowParm` slots — each active creature registers its shadow with `addShadow(Creature*)` and removes via `delShadow`. Draws as ground-projected blobs or per-joint strips.

**Key methods (`shadowMgr.h:212-237`):**
- `createShadow(Creature*)`, `addShadow(Creature*)`, `delShadow(Creature*)`, `killShadow(Creature*)`.
- `addHeadShadow(Creature*)` — tiny overhead shadow for dangling / flying states.
- `addNormalShadow` / `delNormalShadow` — the default ground blob pair.
- `setShadowColor(Color4*)` / `resetShadowColor()` — used during cave/cutscene tints.
- `draw(Graphics&, int vpIndex)` — renders for a specific viewport (split-screen).

**Mod hooks:** Override a creature's `doUpdate` to call `shadowMgr->setShadowColor(...)` for a flashy tint. Not much else.

## `WaterBox` — Hazard volumes

| | |
|---|---|
| Class | `Game::WaterBox` (abstract), `AABBWaterBox` (concrete) |
| Header | `include/Game/WaterBox.h:29` |
| Global | No — water boxes are owned by the `MapMgr` (`mapMgr->getWaterBox(pos)` style queries). |
| Lifecycle | Created at stage-load by `MapMgr`; per-stage. |
| Per-frame | `update()` called indirectly via `mapMgr->update()`; `AABBWaterBox::update()` drives the lower/raise animation. |

**Owns:** an AABB of water, current level, lowered-amount, 4 render states (`WaterBox_Active`/`Lowering`/`Unk2`/`Dead`). A lot of the `WaterBox` virtuals are draw-pipeline glue (`doEntry`, `doSimulation`, `doDirectDraw`, `attachModel`) — the engine calls them on your behalf.

**Key virtuals (`WaterBox.h:32-50`):**
- `inWater(Sys::Sphere&)` — collision test for drowning logic.
- `getSeaLevel()` — surface Y.
- `startDown(f32)` / `startUp(f32)` — animate the volume down/up by an amount (used by the bomb-rock that drains water, geysers that raise it).
- `update()` — per-frame tick.

**Mod hooks:**
- `WaterBox::inWater(sphere)` is called every frame by Piki/Navi for drown detection. Override in a subclass to toggle poison/whatever hazard semantics.
- `startDown(f32)` gives you programmatic water drain for a custom puzzle.

Also see `docs/modding_cheat_sheet.md` for the pre-existing `AABBWaterBox` notes.

## `RandMapMgr` — Procedural cave generator

| | |
|---|---|
| Class | `Game::RandMapMgr : public CNode` |
| Header | `include/Game/Cave/RandMapMgr.h:166` |
| Global | `extern RandMapMgr* randMapMgr;` (`RandMapMgr.h:255`) |
| Lifecycle | Constructed on cave entry (inside `SingleGameSection::CaveState::init`); destroyed on cave exit or floor-descend. |
| Per-frame | Does not tick — generation runs once on floor enter. `captureRadarMap(gfx)` runs per-frame when the radar is visible. |

**Owns:** the whole cave-generation pipeline (`RandMapMgr.h:192-203`):
- `MapUnitGenerator* mGenerator` — chooses map pieces.
- `RandMapUnit* mRandMapUnit` — places rooms and corridors.
- `RandEnemyUnit* mRandEnemyUnit` — populates enemies.
- `RandCapEnemyUnit* mRandCapEnemyUnit` — captain-type / boss placements.
- `RandPlantUnit* mRandPlantUnit` — plants / foliage.
- `RandGateUnit* mRandGateUnit` — gates.
- `RandItemUnit* mRandItemUnit` — treasures / pellets.
- `RandMapScore* mRandMapScore` — scoring / best-slot pick.
- `RandMapDraw* mRandMapDraw` — radar-map rendering.

**Generation pipeline (`src/plugProjectNishimuraU/RandMapMgr.cpp:58-83`):** 4 rounds — map tiles + ship, hole/geyser + enemies, plants/treasures/captains, gates.

**Key methods (`RandMapMgr.h:171-189`):**
- `loadResource(interface, count, floorInfo, isFinal, editUnit)` — feed inputs.
- `create()` — kick off generation.
- `makeObjectLayoutInfo(placedNodeIndex)` — get the per-room spawn table.
- `getStartPosition(Vector3f&, int)` — where the ship lands.
- `getItemDropPosition(pos, min, max)` — picks a fair spot for a dropped item.
- `captureRadarMap(Graphics&)` — render the minimap.
- `isLastFloor()`, `isVersusHiba()`.

**Mod hooks:**
- Custom cave layout: subclass `RandMapMgr` and override `create()` for a deterministic layout.
- New enemy pools: edit `RandEnemyUnit` placement (see `docs/enemies.md` §"Procedural Cave Generation").
- Force a specific seed: intercept `create()` and call `srand(seed)` first.

## Other per-section managers

These are referenced in `BaseGameSection::doUpdate` but don't warrant a full section here:

| Global | Header | Role |
|---|---|---|
| `itemMgr` | `include/Game/itemMgr.h:359` | Owns sub-mgrs per item type (pellet, gate, bridge, hole, geyser, rock). Dispatches `update()` to each. |
| `generalEnemyMgr` | `include/Game/generalEnemyMgr.h:171` | Registry of per-enemy-type `EnemyMgrBase`; exposes `killAll()`, iterator over all alive enemies. See `docs/enemies.md`. |
| `naviMgr`, `pikiMgr` | `Navi.h:363`, `PikiMgr.h:95` | Creature mgrs — see `docs/pikmin_and_navi.md`. |
| `moviePlayer` | `include/Game/MoviePlayer.h:326` | JStudio cutscene wrapper. |
| `lifeGaugeMgr` | `include/LifeGaugeMgr.h:110` | Floating HP-bar pool. Per-frame `update()` at `baseGameSection.cpp:304`. |
| `carryInfoMgr` | `include/CarryInfo.h:160` | "x/y pikmin carrying" labels floating above pellets. |
| `rumbleMgr` | `include/Game/rumble.h:173` | Controller rumble queue; per-frame at `baseGameSection.cpp:298`. |
| `deathMgr` | `include/Game/DeathMgr.h:57` | End-of-day death tallies (per cause). |
| `routeMgr` | `include/Game/pathfinder.h:31` | Waypoint graph for Piki AI paths. |

## When to touch what

| Mod goal | Manager(s) |
|---|---|
| Track every alive creature | `cellMgr` (iterate cells) or `generalEnemyMgr` + `pikiMgr` + `naviMgr` directly |
| Teleport Navi safely | `mapMgr->getMinY(pos)` to find floor |
| Raycast for a reticle | `mapMgr->findRayIntersection` |
| Custom overlay that follows world position | Get screen-space via `cameraMgr->getViewport(n)->worldToScreen(pos)` |
| Drain a pond on demand | Find the `WaterBox` via `mapMgr` and call `startDown(amount)` |
| Replay a cave with a fixed layout | `randMapMgr->create` with a seeded rand |
| Force a camera vibration | `cameraMgr->startVibration(type, pos, CAMNAVI_Both)` |
| Kill all effects (photo mode) | `particleMgr->killAll()` + `particle2dMgr->killAll()` |
| Kill all enemies | `generalEnemyMgr->killAll()` (see `moddingU/modMenu.cpp:297`) |
