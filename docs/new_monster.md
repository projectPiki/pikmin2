## New Monster — Design

Goal: scaffold a new enemy end-to-end using the Iridescent Flint Beetle (`Kogane`) as the template. Target result: a harmless bug that spawns, wanders, gets swarmed, and drops a pellet — the smallest possible "yes this is a real enemy" that still touches every required registration point.

Status: **design only**. Nothing below has been built or compiled; treat as a build plan.

Working name: **Pebblefoot** (`EnemyID_Pebble`) — reuses Kogane's mesh and anims, wanders like Kogane, but drops 2 pellets instead of 1 on first flip. Dumb on purpose so the interesting part is the plumbing.

---

### 1. Where the enemy type lives

Two anchor files per enemy, always in the same two folders:

| Role | Path pattern | Example |
|---|---|---|
| Header (struct defs) | `include/Game/Entities/<Name>.h` | `include/Game/Entities/Kogane.h` |
| Implementation (per-class .cpp) | `src/plugProject<Dev>U/<Name>*.cpp` | `src/plugProjectNishimuraU/Kogane*.cpp` |

Each enemy ships as a **family of classes** in one namespace:
- `Obj` — the runtime instance (one per live enemy). Inherits `EnemyBase`.
- `Mgr` — the factory/manager (one total). Inherits `EnemyMgrBase`.
- `Parms` — parameter bundle loaded from the `.txt` in the enemy's param folder.
- `FSM` + `State*` — state machine (`EnemyStateMachine` + `EnemyFSMState` per state).
- `ProperAnimator` — enemy-specific anim lookup helper.

The Kogane family packs three enemies (`Kogane`, `Koganemushi`, `Wealthy`, `Fart`) that share Kogane.h as a base. Pebblefoot is simpler — single class, straight subclass of `EnemyBase`, no sharing.

### 2. Required edits (new-enemy checklist)

**1. Extend the ID enum** — `include/Game/enemyInfo.h:56` in `enum EEnemyTypeID`.

```cpp
EnemyID_Pebble = 147,   // <-- append at the end, do NOT insert mid-list
```

The list currently runs up through `EnemyID_Count` somewhere around ~146. Append only (inserting shifts every later ID and breaks anything that reads the define as a magic number).

**2. Add an `EnemyInfo` row** — `src/plugProjectYamashitaU/enemyInfo.cpp:8`, inside the `gEnemyInfo[]` table:

```cpp
{"Pebble", EnemyTypeID::EnemyID_Pebble, -1, 1,
 (EFlag_CanBeSpawned | 2 | EFlag_UseOwnID),
 "Kogane",   // model folder — reuse Kogane's mesh
 "Kogane",   // anim folder
 "Kogane",   // animmgr folder
 "",         // texture (reuse model's)
 "",         // param — leave blank to skip Parms file, use defaults
 "Kogane",   // collision
 "Kogane",   // stone
 -1, 0, BDT_Empty},
```

The seven string columns are asset folder names under `/user/Yamashita/enemy/` (verified with existing rows; empty string means "same as model folder").

**3. Register the manager factory** — `src/plugProjectYamashitaU/generalEnemyMgr.cpp:215`, the `// NEW ENEMY MODS` switch:

```cpp
case EnemyTypeID::EnemyID_Pebble:
    mgr = new Pebble::Mgr(limit, viewNum);
    break;
```

**4. Register a generator** — `src/plugProjectYamashitaU/genEnemy.cpp:492` area:

```cpp
GENERATOR_CASE(EnemyTypeID::EnemyID_Pebble, "ペブル")
```

The Japanese display name can be anything — the generator macro only uses it for debug logs. Copy Kogane's generator pattern (`Kogane::Generator`) so placements from `.stage` files can reach this enemy.

**5. Create the class** — two new files:

`include/Game/Entities/Pebble.h`:
```cpp
#ifndef _GAME_ENTITIES_PEBBLE_H
#define _GAME_ENTITIES_PEBBLE_H

#include "Game/Entities/Kogane.h"

namespace Game {
namespace Pebble {

struct Obj : public Kogane::Obj {
    Obj();
    virtual void onInit(CreatureInitArg*);                    // _30
    virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()        // _258
    { return EnemyTypeID::EnemyID_Pebble; }
    virtual void changeMaterial();                             // _200
    virtual void createItem();                                 // _2FC
};

struct Mgr : public Kogane::Mgr {
    Mgr(int objLimit, u8 modelType)
        : Kogane::Mgr(objLimit, modelType) {}
    virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID()        // _AC
    { return EnemyTypeID::EnemyID_Pebble; }
    virtual ResTIMG* getChangeTexture() { return nullptr; }   // _E0
};

}} // namespace Game::Pebble
#endif
```

`src/plugProjectNishimuraU/Pebble.cpp` (keep it in Nishimura to match the rest of the Kogane family):
```cpp
#include "Game/Entities/Pebble.h"
#include "Game/Entities/PelletNumber.h"

namespace Game {
namespace Pebble {

Obj::Obj() {}

void Obj::onInit(CreatureInitArg* args) {
    Kogane::Obj::onInit(args);
    // Pebble-specific init can go here later
}

void Obj::changeMaterial() {
    // Pebble keeps Kogane's base texture — nothing to swap
}

void Obj::createItem() {
    // Drops 2 pellets on first flip instead of 1
    if (createTreasureItem()) return;
    int amount = (mHitCount == 0) ? 2 : 1;
    createPellet(PELLET_NUMBER_ONE, amount);
}

}} // namespace Game::Pebble
```

**6. Link the .cpp** — `src/plugProjectNishimuraU/Makefile` already wildcards `*.cpp` (verify), so the new file is picked up automatically on rebuild. If it doesn't, append it to the `ENEMY_CPP` list.

**7. configure.py object entry** — add `Object(NonMatching, "plugProjectNishimuraU/Pebble.cpp")` to the Nishimura lib's `objects` list. `NonMatching` because there's no original symbol to match against; the build runs only under `--non-matching`.

### 3. Spawning one in a level

After rebuild, the enemy exists in memory but nothing places it. Two options:

- **`.stage` text edit** — level layouts live in `/user/abe/stage/*.txt` inside the game. Each layout enumerates enemies by name (e.g., `"Kogane"`). Adding `"Pebble"` requires the enemy be registered above. Easiest for testing: drop one into the opening test level.
- **Cave unit file** — caves use `cave/*.txt` manifests. Same story; add a row with the enemy name and a spawn chance.

For zero-edit testing, the simplest trick is to temporarily hijack a Kogane spawn: in `generalEnemyMgr.cpp:244` change `case EnemyTypeID::EnemyID_Kogane` to instantiate `Pebble::Mgr` instead. Revert once you've proven the enemy works.

### 4. What `EnemyBase` gives you for free

Subclassing `EnemyBase` (or `Kogane::Obj`, which is itself an `EnemyBase`) means you inherit:
- 3D model loading, animation, collision, physics, AI hooks
- Piki-vs-enemy interaction (getting swarmed, flipped, eaten)
- Life gauge, death effects, pellet drops via `createItem()`
- Treasure-item hook via `createTreasureItem()` — return `true` to suppress the default pellet
- The whole `EFlag_*` set from `EnemyInfoFlags`

You override only what you want to change. For Pebblefoot v0 that's:
- `getEnemyTypeID()` — so `typeid` lookups work
- `createItem()` — so it drops 2 pellets on first flip
- `changeMaterial()` (stubbed) — only because the vtable parent declares it pure virtual

### 5. Parms (skip for v0)

Empty param folder in `enemyInfo.cpp` means the enemy runs with `EnemyBase`'s defaults: HP, damage taken per piki, life gauge visibility, etc. Good enough for Pebblefoot. If you want tunable behavior:

1. Add `Parms : public EnemyParmsBase` to the header with a `ProperParms : Parameters` nested block (see `Kogane.h:108-144` for the shape of it).
2. Create `user/Yamashita/enemy/pebble/pebble.txt` with the param file format (copy `kogane.txt`).
3. Set the param folder string in the `EnemyInfo` row from `""` → `"Pebble"`.

Parms are hot-reloadable via the mod menu by dereferencing `.mValue` on each field — identical pattern to `pikiMgr->mParms->mPiki.*`.

### 6. FSM (skip for v0)

Pebblefoot inherits Kogane's FSM untouched, so it does the exact same wander/flip/disappear loop. Custom behavior means:
1. New `FSM : public EnemyStateMachine` with an `init` that registers states.
2. One `State<N> : public EnemyFSMState` per state, each with `init`/`exec`/`cleanup`.
3. Override `setFSM(FSM*)` in `Obj` to install the subclass.

Kogane's FSM has 5 states (`KOGANE_Appear`/`Disappear`/`Move`/`Wait`/`Press`). Look at `Kogane.h:166` and the per-state files in `plugProjectNishimuraU/` for the template.

### 7. Gotchas

- **Matching build is impossible for a new enemy.** The enemy doesn't exist in the original `.dol`, so `NonMatching` objects plus `--non-matching` are mandatory. That's already the modding workflow — just confirm.
- **Heap sizing.** `EnemyMgrBase` allocates `objLimit` slots up front. Caves typically pass `objLimit=4` or `8`. If a stage asks for more than allocated, excess spawns silently drop — check the return of `birth()`.
- **`EnemyTypeID` is used as an array index in a few places** (bitter-drop tables, Piklopedia). Appending a new ID past the existing max will likely read garbage from those arrays until they're extended. For v0 it's probably fine (Piklopedia entry for an unknown ID just renders blank), but worth grepping `EnemyID_Count` to find every sized-by-id array.
- **Piklopedia / model archive.** A new enemy with no Piklopedia entry may crash if the player tries to open its page. Safest: gate the entry with `EFlag_HasNoInfo` (0x200) in the `EnemyInfo` row to skip Piklopedia tracking entirely.
- **Asset loading.** By reusing `"Kogane"` for all asset paths, no new files need to go into the game archive — the enemy is pure code. Real new art means rebuilding `enemy.szs`, which is a separate workflow.
- **Save data.** Killing a never-before-seen enemy writes to a creature-defeated counter sized by ID. Same caveat as Piklopedia — gate with `EFlag_HasNoInfo` for v0.

### 8. Ship checklist

1. Enum append in `enemyInfo.h`.
2. `EnemyInfo` row in `enemyInfo.cpp`.
3. `case` in `generalEnemyMgr.cpp` factory switch.
4. `GENERATOR_CASE` in `genEnemy.cpp`.
5. Header + .cpp in correct dev folders.
6. `configure.py` objects + link-order.
7. Build on `--non-matching`.
8. Temporary spawn hijack or stage edit to see it in-game.

Once a Pebblefoot is visible and drops its 2 pellets when flipped, that's step 1 done. From there you can fork the design for bigger enemies — changing FSM, collision, AI behavior, adding new hazards.
