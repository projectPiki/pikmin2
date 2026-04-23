# Enemy Architecture Guide

This guide covers the enemy system architecture in Pikmin 2's decompilation, including class hierarchies, state machines, parameter systems, and procedural cave generation.

## Class Hierarchy

All enemies inherit from a strict class hierarchy:

```
Creature (base class)
└── EnemyBase (add EnemyBase-specific behavior)
    ├── ChappyBase::Obj (bulborbs, fire bulblax, chrysanthemum)
    │   ├── BlueChappy (Orange Bulborb)
    │   ├── Chappy (Red Bulborb)
    │   ├── YellowChappy (Hairy Bulborb)
    │   ├── FireChappy (Fiery Bulblax)
    │   └── Hana (Creeping Chrysanthemum)
    │
    ├── KochappyBase::Obj (dwarf bulborbs)
    │   ├── BlueKochappy (Dwarf Orange Bulborb)
    │   └── YellowKochappy (Snow Bulborb)
    │
    ├── KumaChappy::Obj (Spotty Bulbear - boss)
    │   └── LeafChappy (Bulbmin variant)
    │
    ├── SnakeCrow::Obj (Pileated Snagret - boss)
    ├── DangoMushi::Obj (Segmented Crawbster - boss)
    ├── Mar::Obj (Puffy Blowhog / Emperor Bulblax)
    ├── BigTreasure::Obj (Titan Dweevil - boss)
    ├── BlackMan::Obj (Waterwraith - boss)
    └── [40+ other unique enemy classes]
```

**Key file locations:**
- Base class: `/include/Game/EnemyBase.h:131-637`
- Creature class: `/include/Game/Creature.h` (parent of EnemyBase)
- Example subclass (Chappy): `/include/Game/Entities/ChappyBase.h:36-101`
- Example subclass (DangoMushi): `/include/Game/Entities/DangoMushi.h:72-104`

## EnemyBase Fundamentals

`EnemyBase` is the core structure for all enemies. Key responsibilities:

- **Lifecycle management**: birth, death, state transitions
- **Physics**: velocity, position, collision
- **Health & damage**: current/max health, damage callbacks
- **Animation**: animator management, motion playback
- **Effects**: particle effects, sounds, visual feedback
- **Event flags**: bitflags tracking enemy state (invulnerable, attacking, etc.)

**File:** `/include/Game/EnemyBase.h:59-91` (Event flags enumeration)

## Event Flags (EnemyBase State)

Enemies track state via two 32-bit flag arrays (`mEvents.mFlags[0]` and `mEvents.mFlags[1]`):

Key flags in `mEvents.mFlags[0]`:
- `EB_Invulnerable` (0x1): Cannot take damage
- `EB_Untargetable` (0x4): Pikmin cannot target (e.g., flying, dead)
- `EB_TakingDamage` (0x2): Currently animating damage
- `EB_FlickEnabled` (0x20): Can be flicked/thrown
- `EB_Alive` (0x10000000): Enemy is alive and active
- `EB_Bittered` (0x200): Stone state (bitter spray effect)
- `EB_EatingWhitePikmin` (0x4000): Has eaten white pikmin (poison triggered)
- `EB_NoInterrupt` (0x200000): Cannot be interrupted/stunned

Key flags in `mEvents.mFlags[1]`:
- `EB2_Earthquake` (0x1): Hit by purple earthquake
- `EB2_Stunned` (0x2): Currently stunned by purple pikmin
- `EB2_Dropping` (0x10): Falling/dropping

**Helper inline functions** (EnemyBase.h:134-136):
```cpp
void enableEvent(int i, u32 flag);  // Set flag
void disableEvent(int i, u32 flag); // Clear flag
bool isEvent(int i, u32 flag);      // Check if set
```

## Callback System

Enemies handle interactions via virtual callback functions. Each callback is invoked by the interaction system and can return a boolean to allow/prevent default behavior.

### Primary Damage Callbacks

| Callback | Source | Fired When | File:Line |
|----------|--------|-----------|-----------|
| `damageCallBack()` | Pikmin, rocks, bomb-rocks, etc. | Enemy takes damage | EnemyBase.h:250 |
| `hipdropCallBack()` | Purple pikmin | Enemy hit by hip-drop | EnemyBase.h:253 |
| `bombCallBack()` | Bomb-rock explosion | Bomb-rock detonates nearby | EnemyBase.h:257 |
| `earthquakeCallBack()` | Purple earthquake | Ground pound effect | EnemyBase.h:255 |
| `eatWhitePikminCallBack()` | White pikmin | After white pikmin digested | EnemyBase.h:258 |
| `dopeCallBack()` | Spray (bitter/ultra-bitter) | Spray item used on enemy | EnemyBase.h:259 |
| `pressCallBack()` | Pikmin weight | Accumulating damage from pikmin | EnemyBase.h:251 |

### How Damage Flows

1. **Collision detected** → `collisionCallback()` called (EnemyBase.h:171)
2. **Damage type determined** → Appropriate callback invoked
3. **Callback returns bool** → If false, prevents default behavior
4. **`addDamage()` called** → Internal health reduced, damage animation triggered (EnemyBase.h:310)
5. **Health <= 0** → `deathProcedure()` executed (EnemyBase.h:334)

**Implementation files:**
- Chappy damage: `/src/plugProjectYamashitaU/ChappyBase.cpp` (specific implementations)
- DangoMushi: `/src/plugProjectNishimuraU/DangoMushiState.cpp` (boss damage logic)
- General callbacks: `/src/plugProjectYamashitaU/enemyAction.cpp` (shared implementations)

## State Machines

Every enemy has **two** state machines:

### 1. Lifecycle FSM (EnemyBaseFSM)

Generic state machine that every enemy inherits. Manages birth/death/stone states.

**States** (EnemyBase.h:644-656):
- `EBS_Drop` (0): Dropping from ceiling/ledge
- `EBS_Appear` (5): Birth animation (no drop)
- `EBS_Living` (6): Generic alive state
- `EBS_Stone` (7): Bittered (stone state)
- `EBS_Earthquake` (8): Hit by purple earthquake
- `EBS_Fit` (9): Stunned (purple pikmin)

**Structure:** `/include/Game/EnemyStateMachine.h:19-60`
**Implementation:** `/include/Game/EnemyBase.h:836-860` (EnemyBaseFSM::StateMachine)

### 2. Behavior FSM (Enemy-Specific)

Each enemy class defines its own behavior FSM with states like Walk, Attack, Flick, Sleep, etc.

**Example: ChappyBase FSM**
- States: Dead, Turn, Walk, Attack, Flick, TurnToHome, GoHome, Sleep
- Init: `ChappyBase::FSM::init()` registers all states (chappyState.cpp:12-24)
- Called: `mFsm->exec(this)` in `doUpdate()` (ChappyBase.cpp:77-80)

**Example: DangoMushi FSM**
- States: Dead, Stay, Appear, Wait, Move, Attack, Turn, Recover, Flick
- Defined: `/include/Game/Entities/DangoMushi.h:23-35`

**File patterns:**
- FSM header: `/include/Game/Entities/{EnemyName}.h` → `struct FSM : public EnemyStateMachine`
- State implementations: `/src/plugProject{Dev}U/{EnemyName}State.cpp`

### State Class Structure

All states inherit from `EnemyFSMState`:

```cpp
struct EnemyFSMState {
    virtual void init(EnemyBase*, StateArg*) { }       // Enter state, setup
    virtual void exec(EnemyBase*) { }                  // Per-frame logic (NOT called)
    virtual void cleanup(EnemyBase*) { }               // Exit state, cleanup
    virtual void resume(EnemyBase*) { }                // Resumed after pause
    virtual void restart(EnemyBase*) { }               // Restarted
    virtual void transit(...) { }                      // Transition to next state
    virtual void update(EnemyBase*) { }                // Per-frame update (called)
    virtual void simulation(EnemyBase*, f32) { }       // Physics simulation
    virtual void animation(EnemyBase*) { }             // Animation playback
};
```

**File:** `/include/Game/EnemyStateMachine.h:62-88`

## Parameter System (Parms)

Each enemy class defines tuning parameters via a nested `Parms` structure.

### Generic Parameters (EnemyParmsBase)

All enemies inherit basic parms:

```cpp
struct Parms {
    // Health & alert
    Parm<f32> mHealth;                    // Initial health (fp00)
    Parm<f32> mLifeBeforeAlert;           // Health threshold to alert (fp30)
    
    // Movement
    Parm<f32> mMoveSpeed;                 // Base walk speed (fp06)
    Parm<f32> mTurnSpeed;                 // Turn acceleration factor (fp08)
    Parm<f32> mMaxTurnAngle;              // Max turn per frame (fp28)
    
    // Detection ranges
    Parm<f32> mPrivateRadius;             // Personal space radius (fp11)
    Parm<f32> mSightRadius;               // Sight distance (fp12)
    Parm<f32> mViewAngle;                 // View cone angle (fp13)
    Parm<f32> mSearchDistance;            // Active search radius (fp14)
    Parm<f32> mSearchAngle;               // Search cone angle (fp15)
    
    // Attack properties
    Parm<f32> mMaxAttackRange;            // Attack distance (fp20)
    Parm<f32> mAttackDamage;              // Damage per hit (fp24)
    Parm<f32> mAttackRadius;              // Hit radius (fp22)
    
    // Shake-off (pikmin knockback)
    Parm<f32> mShakeKnockback;            // Knockback force (fp17)
    Parm<f32> mShakeDamage;               // Damage from shake (fp18)
    Parm<f32> mShakeChance;               // Chance to shake (fp16)
    
    // Status effects
    Parm<f32> mBitterDuration;            // Stone state duration (fp35)
    Parm<f32> mPurplePikiStunDuration;    // Stun duration from purple (fp38)
};
```

**File:** `/include/Game/EnemyParmsBase.h:52-150`

### Enemy-Specific Parms

Each enemy defines a `ProperParms` subclass for unique tuning:

**Example: ChappyBase**
```cpp
struct Parms : public EnemyParmsBase {
    struct ProperParms : public Parameters {
        Parm<f32> mFootRange;          // Foot area size (fp01)
        Parm<f32> mPoisonDamage;       // White pikmin poison damage (fp02)
        Parm<f32> mBulborbWakeRadius;  // Distance to wake from sleep (fp03)
    };
    
    virtual void read(Stream& stream) {
        CreatureParms::read(stream);   // Creature base parms
        mGeneral.read(stream);         // Generic enemy parms
        mProperParms.read(stream);     // Enemy-specific parms
    }
    
    ProperParms mProperParms;  // Offset _7FC
};
```

**File:** `/include/Game/Entities/ChappyBase.h:121-148`

**Example: DangoMushi**
```cpp
struct Parms : public EnemyParmsBase {
    struct ProperParms : public Parameters {
        Parm<f32> mRollingMoveSpeed;   // Speed when rolled up (fp01)
        Parm<f32> mRollingTurnAccel;   // Turn accel when rolled (fp02)
        Parm<f32> mFlipTime;           // Time to unroll (fp10)
    };
};
```

**File:** `/include/Game/Entities/DangoMushi.h:42-70`

### Accessing Parms

Parms are accessed via inline macros:

```cpp
// Generic enemy parms
#define EG_PARMS(enemy)      (static_cast<EnemyParmsBase*>(enemy->mParms))
#define EG_GENERALPARMS(x)   (EG_PARMS(x)->mGeneral)

// Enemy-specific parms (cast to Parms subclass)
#define CG_PARMS(x)          (static_cast<Parms*>(x->mParms))
#define CG_PROPERPARMS(x)    (CG_PARMS(x)->mProperParms)

// Within enemy class context
#define E_PARMS              (EG_PARMS(this))
#define E_GENERALPARMS       (E_PARMS->mGeneral)
#define C_PROPERPARMS        (CG_PROPERPARMS(this))
```

**Files:** `/include/Game/EnemyBase.h:24-29`, `/include/Game/Creature.h`

### Parm Loading

Enemy parms are loaded from `.txt` files at runtime:

```cpp
// EnemyParmsBase::loadSettingFile
bool EnemyParmsBase::loadSettingFile(JKRArchive* archive, char* name) {
    void* handle = archive->getResource(name);
    if (handle) {
        RamStream stream(handle, -1);
        stream.setMode(STREAM_MODE_TEXT, 1);
        read(stream);  // Calls Parms::read()
        return true;
    }
    return false;
}
```

**File:** `/src/plugProjectYamashitaU/enemyParmsBase.cpp:10-21`

Parm files are located in `param/` archives and loaded during enemy manager initialization.

## Boss Inventory

Quick reference for major bosses in Pikmin 2:

| In-Game Name | Japanese Name | Source File | Enemy Type ID | Developer |
|---|---|---|---|---|
| Red Bulborb | Chappy | `plugProjectYamashitaU/ChappyBase.cpp` | 2 | Yamashita |
| Hairy Bulborb | YellowChappy | `plugProjectYamashitaU/YellowChappy.cpp` | 43 | Yamashita |
| Orange Bulborb | BlueChappy | `plugProjectYamashitaU/BlueChappy.cpp` | 42 | Yamashita |
| Fiery Bulblax | FireChappy | `plugProjectYamashitaU/` (derived from ChappyBase) | 33 | Yamashita |
| Empress Bulblax | Queen | `plugProjectNishimuraU/Queen.cpp` | 30 | Nishimura |
| Spotty Bulbear | KumaChappy | `plugProjectNishimuraU/KumaChappy.cpp` | 35 | Nishimura |
| Bulbmin | LeafChappy | `plugProjectNishimuraU/LeafChappy.cpp` | 67 | Nishimura |
| **Burrowing Snagret** | **SnakeCrow** | `plugProjectNishimuraU/SnakeCrow.cpp` | 34 | Nishimura |
| **Segmented Crawbster** | **DangoMushi** | `plugProjectNishimuraU/DangoMushi.cpp` | 94 | Nishimura |
| Puffy Blowhog / Emperor Bulblax | Mar | `plugProjectNishimuraU/Mar.cpp` | 29 | Nishimura |
| **Titan Dweevil** | **BigTreasure** | `plugProjectNishimuraU/BigTreasure.cpp` | 73 | Nishimura |
| **Waterwraith** | **BlackMan** | `plugProjectMorimuraU/blackMan.cpp` | 99 | Morimura |
| Ranging Bloyster | UmiMushi | `plugProjectMorimuraU/umiMushi.cpp` | 71 | Morimura |
| Hermit Crawmad | Jigumo | `plugProjectMorimuraU/jigumo.cpp` | 63 | Morimura |
| Withering Blowhog | Hanachirashi | `plugProjectNishimuraU/Hanachirashi.cpp` | 55 | Nishimura |

**Notable bosses:**
- Emperor Bulblax (final boss): `/plugProjectNishimuraU/kingChappy.cpp` (EnemyID_KingChappy = 53)
- Raging Long Legs: `/plugProjectNishimuraU/BigFoot.cpp` (EnemyID_BigFoot = 69)
- Man-at-Legs: `/plugProjectNishimuraU/Houdai.cpp` (EnemyID_Houdai = 66)
- Beady Long Legs: `/plugProjectNishimuraU/Damagumo.cpp` (EnemyID_Damagumo = 56)

**Full ID list:** `/include/Game/enemyInfo.h:57-162`

## Procedural Cave Generation (RandMap)

Caves are assembled procedurally using a modular system in `RandMapMgr`:

**Generation pipeline** (RandMapMgr.cpp:58-83):
1. **Round 1**: Place map tiles, set ship spawn location, calculate distance score
2. **Round 2**: Place hole/geyser, place enemies, recalculate score
3. **Round 3**: Place plants, treasures, captain-type enemies
4. **Round 4**: Place gate doors

**Key components:**
- `RandMapMgr`: Orchestrates cave generation pipeline
- `RandMapUnit`: Places floor tiles and room connectivity
- `RandEnemyUnit`: Populates enemies from enemy pools (file: `RandEnemyUnit.cpp`)
- `RandCapEnemyUnit`: Places captain-type enemies (bosses, unique spawners)
- `RandItemUnit`: Places treasures and collectibles
- `RandPlantUnit`: Places plants and foliage
- `RandGateUnit`: Places gate doors

**File:** `/src/plugProjectNishimuraU/RandMapMgr.cpp:14-96`

Enemy pools for each cave floor are defined externally and loaded during cave initialization.

## Creating a New Enemy

To add a new enemy type:

1. **Create header** (`/include/Game/Entities/MyEnemy.h`):
   - Define `struct Obj : public EnemyBase`
   - Define `struct Parms : public EnemyParmsBase` with `ProperParms` subclass
   - Define `struct FSM : public EnemyStateMachine`
   - Define `struct Mgr : public EnemyMgrBase`
   - Define state enum and state classes

2. **Create implementation** (`/src/plugProject{Dev}U/MyEnemy.cpp`):
   - Implement constructor, `setInitialSetting()`, `onInit()`, `doUpdate()`
   - Implement FSM state transitions and behavior

3. **Register in enemyInfo**:
   - Add entry to `gEnemyInfo[]` array with parm file reference

4. **Create parm file** (`param/param_myenemy.txt`):
   - Define mGeneral parms and mProperParms values

5. **Create Mgr/FSM implementations**:
   - Model loading, animation setup
   - State machine initialization

## Fun Mod Ideas

### Movement & Combat

1. **Faster Bulborbs**: Increase `ChappyBase::Parms::mMoveSpeed` to 150+ (default 80)
   - File: `include/Game/Entities/ChappyBase.h:131` (fp06)
   - Effect: Red Bulborbs chase faster, more dangerous

2. **Aggressive Snagrets**: Reduce `SnakeCrow::Parms::mPrivateRadius` (default 70)
   - File: `include/Game/Entities/SnakeCrow.h`
   - Effect: Enemies attack from closer range, harder to avoid

3. **Damage Scaling**: Create a global damage multiplier by modifying `addDamage()` calculation
   - File: `src/plugProjectYamashitaU/enemyAction.cpp`
   - Example: `addDamage(damageAmt * 1.5f, flickSpeed)` for 50% harder hits

4. **White Pikmin Toxin Boost**: Increase `ChappyBase::Parms::mPoisonDamage` to 500+ (default 300)
   - File: `include/Game/Entities/ChappyBase.h:132` (fp02)
   - Effect: White pikmin poison damage increased significantly

### Behavior Modifications

5. **Always-Alert Enemies**: Set `mLifeBeforeAlert` to 999999 in any Parms
   - File: `include/Game/EnemyParmsBase.h:108` (fp30)
   - Effect: Enemies are instantly alert, no sleeping state

6. **Extended Stone State**: Increase `mBitterDuration` across all enemies
   - File: `include/Game/EnemyParmsBase.h:139` (fp35)
   - Effect: Bitter spray lasts longer (default 1.0s)

7. **Disable Shake-Off**: Set `ChappyBase::Parms::mShakeChance` to 0.0
   - File: `include/Game/Entities/ChappyBase.h`
   - Effect: Bulborbs cannot shake off pikmin

### Spawning & Generation

8. **Custom Cave Enemy Pools**: Modify `RandEnemyUnit` to change procedural cave enemy distribution
   - File: `src/plugProjectNishimuraU/RandEnemyUnit.cpp`
   - Effect: Different enemy mixes in each cave floor

9. **Boss Health Inflation**: Create `DangoMushi::Parms::mHealth` variant with 300+ value
   - File: `include/Game/Entities/DangoMushi.h`
   - Effect: Segmented Crawbster takes significantly longer to defeat

10. **Callback Hooks**: Add custom logic in `damageCallBack()` to create special effects
    - File: Any `{EnemyName}.cpp` with callback override
    - Example: Play sound, spawn particle, apply status effect on hit

---

**Last Updated:** April 2026  
**Decompilation Project:** Pikmin 2 GameCube  
**Decomp Team:** Yamashita, Nishimura, Morimura (enemy subsystems)
