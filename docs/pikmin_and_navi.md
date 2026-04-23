# Pikmin and Navi Systems Documentation

**For modders:** This guide covers how Pikmin (the squad members) and Navi/Captain (the leader) are organized, state-managed, and AI-controlled in Pikmin 2. Modify behavior by tweaking parameters, overriding AI actions, or hooking into the state machine.

---

## Class Hierarchy

### Inheritance Chain
```
Creature (base game entity)
  ├─ FakePiki (shared base for Pikmin & Navi; handles animation, physics, water)
  │  ├─ Piki (actual Pikmin squad members)
  │  └─ Navi (Captain/Leader; Olimar or Louie, virtual inherits PelletView)
```

**Files:**
- `include/Game/Creature.h` — Abstract entity with collision, physics, animation
- `include/Game/FakePiki.h` — Animation blending, motion listeners, basic physics (lines 18-270)
- `include/Game/Piki.h` — Pikmin-specific logic, state FSM, AI brain (lines 130-292)
- `include/Game/Navi.h` — Captain logic, whistle, throw, pluck, formation control (lines 113-300)

---

## Pikmin State Machine (`PikiState`)

States are managed via `PikiFSM` (lines 113-122 of `Piki.h`). Each Piki has a current state object that handles behavior for a specific activity.

### Major Piki States
Enum `PikiStateID` in `include/Game/PikiState.h` (lines 25-61):

| State | ID | Purpose |
|-------|----|---------| 
| **Walk** | 0 | Default follow/idle state |
| **DemoWait** | 1 | Cutscene frozen state |
| **LookAt** | 2 | Whistled (turn towards Navi) |
| **GoHang** | 3 | Being picked up (approach hand) |
| **Hanged** | 4 | Held in squad/formation |
| **WaterHanged** | 5 | Held while in water |
| **Flying** | 6 | Thrown by captain |
| **KokeDamage** | 7 | Hit by gas/toxin |
| **Blow** | 8 | Knocked back by enemy |
| **Flick** | 9 | Flicked by enemy |
| **Drown** | 10 | In water, drowning |
| **Swallowed** | 11 | Being eaten |
| **Nukare** | 12 | Being plucked (hand) |
| **Absorb** | 13 | Absorbing nectar/resources |
| **Growup** | 14 | Nectared (growth stage) |
| **Tane** | 15 | Abducted by snitchbug |
| **Dope** | 16 | Spicy spray active |
| **AutoNuki** | 17 | Plucked by pluckaphone |
| **HipDrop** | 18 | Purple pikmin ground pound effect |
| **Emotion** | 19 | Celebrating/distressed |
| **Pressed** | 20 | Crushed/squeezed |
| **Panic** | 21 | Panicking (fire/water) |
| **DenkiDying** | 22 | Electrical zap |
| **FallMeck** | 23 | Falling animation |
| **Dying** | 24 | Death sequence |
| **Dead** | 25 | Corpse |
| **Suikomi** | 26 | Captured/consumed |
| **Holein** | 27 | Entering cave hole |
| **Fountainon** | 28 | Entering geyser |
| **Koke** | 30 | Moss-covered state |
| **Escape** | 31 | Running away (panic) |
| **Carrot** | 32 | Pikipedia carrot entity |

**State Interfaces** (from `PikiState` vtable, lines 63-95):
- `init(StateArg*)` — Enter state, initialize sub-state data
- `exec()` — Run per-frame logic
- `cleanup()` — Exit state, clean resources
- `callable()` — Can Navi whistle this Piki? (default: false)
- `aiActive()` — Does this Piki run AI? (default: false, true for Walk/Hanged)
- `throwable()` / `releasable()` — Can be thrown/released? (default: false)
- `dead()` — Is this a dead/dying state? (default: false)
- `bounceCallback()`, `collisionCallback()`, `platCallback()` — Physics events

---

## Navi State Machine (`NaviState`)

Enum `ENaviStateID` in `include/Game/NaviState.h` (lines 12-42):

| State | ID | Purpose |
|-------|----|---------| 
| **Walk** | 0 | Default movement |
| **Follow** | 1 | Following locked target |
| **Punch** | 2 | Melee attack |
| **Change** | 3 | Switching between Olimar/Louie |
| **Gather** | 4 | Calling Pikmin to gather |
| **Throw** | 5 | Throwing a Pikmin |
| **ThrowWait** | 6 | Waiting for thrown Pikmin |
| **Dope** | 7 | Using spray |
| **Nuku** | 8 | Plucking Pikmin from ground |
| **NukuAdjust** | 9 | Adjusting pluck position |
| **Container** | 10 | Container interaction |
| **Absorb** | 11 | Absorbing resource |
| **Flick** | 12 | Flicked by enemy |
| **Damaged** | 13 | Taking damage |
| **Pressed** | 14 | Crushed |
| **FallMeck** | 15 | Falling |
| **KokeDamage** | 16 | Gas damage |
| **Sarai** | 17 | Cave interior state |
| **SaraiExit** | 18 | Leaving cave |
| **Dead** | 19 | Dead/dying |
| **Stuck** | 20 | Stuck in hazard |
| **Demo_Ufo** | 21 | Cutscene UFO |
| **Demo_HoleIn** | 22 | Cutscene cave entry |
| **Pellet** | 23 | Carrying pellet |
| **CarryBomb** | 24 | Carrying bomb (unused P1 legacy) |
| **Climb** | 25 | Climbing structure |
| **PathMove** | 26 | Pathfinding movement |

---

## Pikmin AI System (`PikiAI`)

Pikmin behavior is driven by a **hierarchical Action tree** rather than a single state. Each Piki has a `PikiAI::Brain` that manages the current `PikiAI::Action` and sub-actions.

### Action Base Class
File: `include/PikiAI.h` (lines 144-174)

**Virtual Methods:**
```cpp
struct Action {
  virtual void init(ActionArg* settings);           // Initialize action with args
  virtual int exec();                               // Return ACTEXEC_Success/Continue/Fail
  virtual void cleanup();                           // Exit, release resources
  virtual void emotion_success() / emotion_fail();  // Reaction anims
  virtual bool applicable();                        // Can this action run now?
  virtual u32 getNextAIType();                      // What action follows (default: ACT_Formation)
  virtual void bounceCallback/collisionCallback();  // Physics event handling
};
```

**Exit Codes:**
- `ACTEXEC_Success` (0) — Action completed successfully
- `ACTEXEC_Continue` (1) — Action still running
- `ACTEXEC_Fail` (2) — Action failed, switch to next

### Action Enum
Lines 93-110 of `include/PikiAI.h`:

| Action | ID | File | Behavior |
|--------|----|---------| ---------|
| **Formation** | 0 | `aiFormation.cpp` | Follow captain in squad (highest priority) |
| **Free** | 1 | `aiFree.cpp` | Idle/forage (lowest priority) |
| **Enter** | 2 | `aiEnter.cpp` | Enter cave or onyon |
| **Exit** | 3 | (N/A) | Exit cave |
| **Transport** | 4 | `aiTransport.cpp` | Carry pellet/object to onyon |
| **Attack** | 5 | `aiAttack.cpp` | Attack enemy (bite, push) |
| **BreakGate** | 6 | `aiBreakGate.cpp` | Break wooden gate |
| **BreakRock** | 7 | `aiBreakRock.cpp` | Break stone (purple only) |
| **Crop** | 8 | `aiCrop.cpp` | Harvest pellet from crop |
| **Weed** | 9 | `aiWeed.cpp` | Pull spider wort from ground |
| **Bridge** | 10 | `aiBridge.cpp` | Build/cross bridge |
| **Teki** | 11 | `aiTeki.cpp` | Chase/attack specific enemy |
| **Rescue** | 12 | `aiRescue.cpp` | Rescue stranded pikmin |
| **Battle** | 13 | `aiBattle.cpp` | Fight other pikmin (vs mode) |

### Action Hierarchy & Composition
Most complex actions use **child actions** via `mChildAction`:

```
ActFormation:
  └─ ActGotoSlot (move to slot)
    └─ ActApproachPos (approach position)
      └─ ActGotoPos + ActPathMove

ActFree:
  ├─ ActGather (search for resources)
  │  └─ ActApproachPos
  └─ ActBore (rest / do random animation)

ActAttack:
  ├─ ActStickAttack (basic attack)
  ├─ ActApproachPos (get close)
  └─ ActApproachPos (jump attack variant)

ActTransport:
  └─ ActApproachPos (move to/from pellet/onyon)
```

**Child Action Pattern:**
```cpp
// In parent action's init():
mChildAction = new ChildActionClass(mParent);
mChildAction->init(&childArg);

// In parent action's exec():
if (mChildAction) {
  int result = mChildAction->exec();
  if (result == ACTEXEC_Success) {
    // Child done, move to next phase or return success
    return ACTEXEC_Success;
  }
  return ACTEXEC_Continue;  // Wait for child
}
```

### Primitive Actions
Lower-level building blocks in `aiPrimitives.cpp`:

- `ActApproachPos` — Move to a target position, timeout if stuck
- `ActGotoPos` — Simple pathless movement
- `ActPathMove` — Pathfinding-based movement
- `ActGotoSlot` — Move to a formation slot position
- `ActGather` — Search cone for objects (pellets, enemies, weeds)
- `ActOneshot` — Play single animation
- `ActRest` — Idle/wait
- `ActClimb` — Climb structure
- `ActFollowVectorField` — Follow flow field (e.g., water current)

---

## Pikmin Types & Stats

### Pikmin Colors (5 + Bulbmin)
Enum `EPikiKind` in `include/Game/Piki.h` (lines 41-57):

| Type | ID | Color | Special Trait | File |
|------|----|---------| ---------|
| **Blue** | 0 | Cyan | Water-safe, normal strength | Default |
| **Red** | 1 | Red | Stronger attack, no ice weakness | `PikiParms` line 130 |
| **Yellow** | 2 | Yellow | Lightweight (throw distance) | `PikiParms` line 131 |
| **Purple** | 3 | Dark Purple | Heavy (10x weight), stronger attack, ground pound | `PikiParms` lines 132, 219 |
| **White** | 4 | Pale Pink | Fast (2x speed), poison-resistant, small | `PikiParms` lines 133, 207 |
| **Bulbmin** | 5 | Orange | Wild, evolves in caves | `PikiParms` line 156 |
| **Carrot** | 6 | N/A | Pikipedia entity, not real pikmin | — |

### Growth Stages (Happa)
Enum `EPikiHappa` in `include/Game/Piki.h` (lines 59-69):

- **Leaf** (0) — Small, slower, weak
- **Bud** (1) — Medium, balanced
- **Flower** (2) — Full size, fastest, strongest

**Stage Bonuses (from `PikiParms`)**:
- Bud carry speed bonus: `mBudCarrySpeedBonus` (line 211)
- Flower carry speed bonus: `mFlowerCarrySpeedBonus` (line 212)
- Flower run speed: `mFlowerRunSpeed` (line 123)
- Bud run speed: `mBudRunSpeed` (line 124)

### Stat System
File: `include/Game/PikiParms.h` — All parameters inherit from `Parm<T>` template with min/max bounds.

**Key Parameters for Modding:**

**Speed & Movement:**
- `mWalkSpeed` (line 121) — Slowest movement (default 84.0)
- `mRunSpeed` (line 122) — Normal movement (default 120.0)
- `mFlowerRunSpeed` (line 123) — Flower pikmin speed (default 170.0)
- `mWhiteRunSpeedMultiplier` (line 207) — Multiply speed (default 2.0x)
- `mPurpleRunSpeedMultiplier` (line 208) — Multiply speed (default 0.6x)

**Health & Damage:**
- `mHealth` (line 126) — Default HP (100.0)
- `mWhiteHealth` (line 127) — White pikmin HP (150.0)
- `mPurpleHealth` (line 128) — Purple pikmin HP (200.0)
- `mBlueAttackDamage` (line 129) — Attack power (10.0)
- `mRedAttackDamage` (line 130) — Red bonus (15.0)
- `mYellowAttackDamage` (line 131) — Yellow (10.0)
- `mPurpleAttackDamage` (line 132) — Purple (10.0, but heavy weight adds knockback)
- `mWhiteAttackDamage` (line 133) — White (1.0, weak)

**Carry Capacity:**
- `mPurpleCarryPower` (line 209) — Purple strength (0.5x, slow carrier)
- `mWhiteCarryPower` (line 210) — White strength (1.5x, fast carrier)
- `mCarryMaxFactor` / `mCarryMinFactor` (lines 213-214) — Transport speed scaling

**Search & AI:**
- `mEnemySearchRange` (line 165) — Idle search radius (60.0)
- `mPelletSearchRange` (line 166) — Pellet search (30.0)
- `mBridgeSearchRange` (line 169) — Bridge search (100.0)
- `mTimeToFree` (line 164) — Time to dismiss from formation (15.0s)
- `mLostChildTime` (line 159) — Timeout before giving up on lost pikmin (10.0s)

**Spray (Dope) Effects:**
- `mDopeMaxDuration` (line 215) — Spicy spray duration (30.0s)
- `mDopeAttackDamage` (line 216) — Spiced attack boost (25.0)
- `mDopeRunSpeed` (line 217) — Spiced speed (190.0)

**Special:**
- `mScale` / `mWhiteScale` / `mPurpleScale` (lines 136-138) — Visual size
- `mPressedScale` (line 125) — Size when squashed (1.0)
- `mCrushTime` / `mFlatTime` / `mWaveTime` (lines 139-141) — Crush state durations
- `mPoundDamage` (line 220) — Purple ground pound damage (100.0)
- `mPoundAOERange` (line 219) — Purple pound radius (60.0)
- `mKnockdownRecoverTimeMax/Min` (lines 173-174) — Time to recover from flick (0.7s)

### Finding Parameters in Assets
Parameters are loaded from binary/text asset files (likely in `data/Parms/` or embedded). Modify via:
1. **In-code defaults** in `PikiParms` constructor (line 224-230)
2. **Asset files** (if modding supports it)
3. **Runtime override** by accessing `Piki::getParms()->mPikiParms.mRunSpeed.mValue`

---

## Manager Systems

### PikiMgr — Squad Manager
File: `include/Game/PikiMgr.h`, implementation in `src/plugProjectKandoU/pikiMgr.cpp`

**Responsibilities:**
- Allocate/deallocate Pikmin instances (max 100, see `MAX_PIKI_COUNT` in `Piki.h` line 10)
- Track alive vs dead Pikmin per color
- Update all Pikmin per frame (LOD-based)
- Manage container/Onyon interactions

**Key Methods:**
- `setupPiki(Piki* p)` — Initialize newly created Pikmin
- `update()` — Run all Pikmin AI & physics
- `getContainer()` — Get active squad container
- `getPikiCount(EPikiKind color)` — Query alive count per type

**Update Flow:**
1. `PikiMgr::update()` iterates all Pikmin
2. Each Piki calls `update()` (line 284 of `piki.cpp`)
   - Runs current state's `exec()`
   - Executes AI action if `aiActive()`
   - Updates animation, color, effects
3. `PikiAI::Brain` manages action transitions
4. Collision/platform callbacks trigger `invokeAI()` for immediate reactions

### UpdateMgr — LOD/Batching
File: `include/Game/updateMgr.h` (if exists) or embedded in PikiMgr

**Purpose:** Optimize large Pikmin counts via levels-of-detail (LOD):
- **Near LOD** — Full AI, physics, animation
- **Mid LOD** — Simplified AI, reduced animation
- **Far LOD** — Minimal updates or cull

**Integration:** Each Piki holds `UpdateContext mPikiUpdateContext` (line 280 of `Piki.h`) to track LOD state.

---

## Formation & Squad Control

### Formation System (`ActFormation`)
File: `src/plugProjectKandoU/aiFormation.cpp`

**Key Concept:** Pikmin in squad form follow a **spatial slot grid** around the captain.

**Data Structure:**
- Captain holds `CPlate* mCPlateMgr` (Navi.h line 254) — Formation slot manager
- Each Pikmin in formation stores `mSlotID` (ActFormation.cpp)
- Slots arranged in concentric rings (1 front center, 6 in first ring, etc.)

**Formation Behavior:**
1. Pikmin with `ACT_Formation` action approach their assigned slot
2. Once in slot, they:
   - Match captain's velocity for smooth movement
   - Rotate to face captain's heading
   - Enter "Hanged" state if in motion, "Walk" state if idle
3. Whistle or direct command can force particular formation (ring color, etc.)

**Code Reference:**
- `Navi::mCPlateMgr->getSlot()` — Request a slot
- `ActFormation::init()` — Line 62 of aiFormation.cpp
- `ActFormation::mSortState` — Tracks formation phase (sorting, formed, etc.)

### Squad Dismissal
When Navi releases squad:
- All Pikmin transition to `ACT_Free` action
- `mNavi` pointer set to `nullptr` (aiFree.cpp line 35)
- They become "wild" (searchable for resources, ignore some commands)
- Can be called back via whistle

---

## Throwing & Plucking

### Throwing Logic
File: `src/plugProjectKandoU/navi.cpp` (search `throwPiki`)

**Flow:**
1. Navi selects a Pikmin via `findNextThrowPiki()` (Navi.h line 186)
2. Enters `NSID_Throw` state (NaviState.h line 19)
3. Calls `Piki::getThrowHeight()` (Piki.h line 208) to set arc
   - Influenced by `mFlowerPikiGravity` for flower pikmin (less fall)
4. Calculates throw velocity based on:
   - Target direction (player input or auto-target)
   - Throw distance (influenced by pikmin weight and type)
   - Angle to arc
5. Pikmin transitions to `PIKISTATE_Flying` state
6. Physics simulate parabolic arc until collision/landing

**Modding Hook:**
- Override `Piki::getThrowHeight()` to adjust arc height per type
- Modify `Navi::throwPiki()` to change throw distance formula
- Adjust `mFlowerPikiGravity` (PikiParms line 179) to reduce flower fall rate

### Plucking Logic
States: `PIKISTATE_Nukare` (hand) or `PIKISTATE_AutoNuki` (pluckaphone)

**Flow:**
1. Navi moves to Pikmin seed and faces it
2. Enters `NSID_Nuku` state
3. Animation plays (NUKU anim, lines 64 in IPikiAnims)
4. Pikmin changes happa (growth stage) if plucked
5. Transitions to `PIKISTATE_Nukare` during pull animation
6. On success, enters squad (ACT_Formation)

**Modding Hook:**
- Adjust `mUnpluckableTime` (PikiParms line 181) to hide seeds longer
- Modify state transition logic in `PikiNukareState`

---

## Whistle System (`NaviWhistle`)

File: `src/plugProjectKandoU/naviWhistle.cpp`, header in `include/Game/Navi.h` (lines 78-109)

**Mechanics:**
1. Navi activates whistle (player input)
2. `NaviWhistle::start()` sets state to `WS_Blowing`
3. Expands radius over time from `mPikiCallMinRadius` to `mPikiCallMaxRadius`
4. All Pikmin within radius transition to `PIKISTATE_LookAt` state
5. They approach/look toward whistle center position
6. On release, they return to previous action or form squad

**Data:**
- `mPosition` — Center of whistle effect (line 101, updated by raycast)
- `mRadius` — Current whistle radius (line 24)
- `mActiveTime` — Elapsed time since start (line 25)
- `mState` — `WS_Idle` / `WS_Blowing` / `WS_Ended` (line 27)
- `mNormal` — Ground surface normal for visual positioning (line 18)

**Modding Hook:**
- Adjust `NaviParms::mPikiCallMinRadius` / `mPikiCallMaxRadius` to change whistle range
- Override `NaviWhistle::updateWhistle()` to change expand rate
- Modify `updatePosition()` to change whistle visual

---

## State Transitions

### Piki State Entry Points
Triggered by:

1. **Automatic (each frame):**
   - `PikiState::aiActive()` returns true → AI action runs
   - Current state's `exec()` can call `mFsm->transit(newStateID)`

2. **Physics Events:**
   - `WaterBox::inWaterCallback()` → `PIKISTATE_Drown`
   - `collisionCallback()` → `PIKISTATE_Blow` (if pushed by enemy)
   - `platCallback()` → Various platform interactions

3. **Manager Actions:**
   - Formation assignment → `PIKISTATE_Hanged`
   - Thrown → `PIKISTATE_Flying`
   - Whistle → `PIKISTATE_LookAt`
   - Enemy eats → `PIKISTATE_Swallowed`

4. **AI Logic:**
   - `invokeAI()` in pikiAI.cpp examines surroundings
   - Checks if Pikmin can interrupt current state
   - May force transition (e.g., enemy collision in Formation)

**Soft vs Hard Transition:**
- `transit()` — Allows state's `transittable(newID)` check (default: true)
- `transitForce()` — Bypass checks (used for cut-scenes)

---

## Navi State Entry Points

Similar to Piki, but captain-centric:

| Event | Typical State |
|-------|---|
| Player input (walk) | `NSID_Walk` |
| Player whistle hold | `NSID_Gather` |
| Throw button | `NSID_Throw` |
| Pluck button | `NSID_Nuku` |
| Spray use | `NSID_Dope` |
| Enemy collision | `NSID_Damaged` or `NSID_Flick` |
| Claw/press damage | `NSID_Pressed` |
| Enter cave | `NSID_Sarai` |
| Cave exit | `NSID_SaraiExit` |

**Control Flow (Navi.cpp):**
- `Navi::control()` — Per-frame input & state machine
- `Navi::update()` — Locomotion, physics
- `Navi::reviseController()` — Apply controller stick to movement

---

## Key Files Reference Table

| File | Purpose | Lines |
|------|---------|-------|
| `include/Game/Piki.h` | Pikmin class def, state FSM, brain, stats | 130-292 |
| `include/Game/PikiParms.h` | All tunable parameters (speeds, HP, search ranges) | 8-243 |
| `include/Game/PikiState.h` | State enum and base state class | 25-95 |
| `include/Game/Navi.h` | Captain class, whistle, throw, squad mgmt | 113-300 |
| `include/Game/NaviState.h` | Captain state enum | 12-42 |
| `include/PikiAI.h` | Action base class, action enum, primitives | 66-600+ |
| `src/plugProjectKandoU/piki.cpp` | Piki init, update, misc methods | 43-200+ |
| `src/plugProjectKandoU/pikiState.cpp` | State implementations (vast file) | — |
| `src/plugProjectKandoU/pikiAI.cpp` | Brain, invokeAI, action transitions | — |
| `src/plugProjectKandoU/aiFormation.cpp` | Formation logic, slot assignment | 29-100+ |
| `src/plugProjectKandoU/aiFree.cpp` | Free/idle behavior, gathering | 14-70+ |
| `src/plugProjectKandoU/aiAttack.cpp` | Enemy attack behavior | — |
| `src/plugProjectKandoU/aiTransport.cpp` | Carrying pellets/objects | — |
| `src/plugProjectKandoU/naviWhistle.cpp` | Whistle effect, radius expansion | 16-100+ |
| `src/plugProjectKandoU/navi.cpp` | Captain control, throw, pluck | — |

---

## Modding Hooks — High-Value Targets

### 1. **Adjust Throw Distance**
**File:** `src/plugProjectKandoU/navi.cpp` → `Navi::throwPiki()`

**What it does:** Calculate throw velocity magnitude

**Mod example:**
```cpp
// Change throw distance formula
f32 multiplier = (piki->getKind() == Yellow) ? 1.5f : 1.0f;  // Yellow farther
throwVelocity *= multiplier;
```

---

### 2. **Change Pikmin Speed**
**File:** `include/Game/PikiParms.h` → Constructor or `PikiParms::Parms` struct

**What it does:** Set default movement speed per type

**Mod example:**
```cpp
mRunSpeed.mValue = 150.0f;  // All faster
mWhiteRunSpeedMultiplier.mValue = 3.0f;  // Whites even faster
```

---

### 3. **Modify Formation Slot Layout**
**File:** `src/plugProjectKandoU/aiFormation.cpp` → `ActFormation::init()` or `CPlate` (if accessible)

**What it does:** Define slot positions around captain

**Mod example:**
```cpp
// Larger/smaller formation radius, different ring counts
mInitArg.mFormationRadius *= 1.5f;
```

---

### 4. **Add New Pikmin Type**
**File:** `include/Game/Piki.h` → `EPikiKind` enum (add new color), then:
- Add stats to `PikiParms::Parms` constructor
- Add model/animation references in `Piki::onInit()`
- Add special behavior in `aiFormation.cpp`, `aiAttack.cpp`, etc.

---

### 5. **Change AI Decision Priority**
**File:** `src/plugProjectKandoU/aiFree.cpp` → `ActFree::exec()` or `src/plugProjectKandoU/pikiAI.cpp`

**What it does:** Determine which action (Formation > Free > Idle) is chosen

**Mod example:**
```cpp
// Make free pikmin prioritize attack over gathering
if (piki->isNearEnemy()) {
  return invokeAI(PikiAI::ACT_Attack);
}
```

---

### 6. **Custom Whistle Behavior**
**File:** `src/plugProjectKandoU/naviWhistle.cpp` → `NaviWhistle::updateWhistle()`

**What it does:** Update whistle radius, effect timing

**Mod example:**
```cpp
// Faster whistle expansion, bigger max radius
mRadius += 5.0f;  // was 2.0f per frame
mMaxRadius = 500.0f;  // was 250.0f
```

---

### 7. **Pikmin Damage Per Type**
**File:** `include/Game/PikiParms.h` → Damage members, or `src/plugProjectKandoU/piki.cpp` → `Piki::getAttackDamage()`

**What it does:** Determine attack power

**Mod example:**
```cpp
f32 Piki::getAttackDamage() {
  if (getKind() == Red) return mPikiParms->mRedAttackDamage.mValue * 2.0f;
  if (getKind() == Purple) return mPikiParms->mPurpleAttackDamage.mValue * 1.5f;
  // ...
}
```

---

### 8. **Squad Size Limit**
**File:** `include/Game/Piki.h` → `#define MAX_PIKI_COUNT` (line 10)

**What it does:** Hard cap on alive pikmin

**Mod example:**
```cpp
#define MAX_PIKI_COUNT (150)  // was 100
```

---

### 9. **State-Specific Behavior**
**File:** `src/plugProjectKandoU/pikiState.cpp` → Any `PikiXxxState::exec()` method

**What it does:** Control how pikmin act in a state

**Mod example:**
```cpp
// Make pressed state last longer
void PikiPressedState::exec(Piki* p) {
  mTimer += 0.05f;  // slower recover
  if (mTimer > 10.0f) {  // was 5.0f
    p->getFsm()->transit(p, PIKISTATE_Walk, nullptr);
  }
}
```

---

### 10. **Dismiss/Free Time**
**File:** `include/Game/PikiParms.h` → `mTimeToFree` (line 164) or `src/plugProjectKandoU/aiFormation.cpp`

**What it does:** How long pikmin stay in formation before auto-dismiss

**Mod example:**
```cpp
mTimeToFree.mValue = 30.0f;  // was 15.0f, stay in formation twice as long
```

---

## Debug Tips

### Inspect Current State/Action
```cpp
// In pikiMgr or debug code:
for (auto piki : allPikis) {
  int stateID = piki->getStateID();  // PIKISTATE_Walk, etc.
  int actionID = piki->getCurrActionID();  // ACT_Formation, etc.
  PikiAI::Action* action = piki->getCurrAction();
  action->getInfo(buffer);  // Get action name
}
```

### Force State Transition
```cpp
// Direct FSM call (dangerous, may break flow):
piki->mFsm->transit(piki, PIKISTATE_Pressed, nullptr);
```

### Check Piki Properties
```cpp
piki->getKind();      // EPikiKind (0-5)
piki->getHappa();     // EPikiHappa (0-2, Leaf/Bud/Flower)
piki->getParms();     // Access all stats
piki->isAlive();      // Check health
piki->isInFormation(); // (check mSlotID != -1 in ActFormation)
```

---

## Summary for Modders

**To tweak Pikmin behavior:**
1. **Speed/stats** → Edit `PikiParms` struct (include/Game/PikiParms.h)
2. **New behavior** → Create new `PikiAI::Action` subclass, register in enum
3. **State changes** → Override `PikiState::exec()` for existing state
4. **Squad mechanics** → Modify `ActFormation` or `CPlate` slot logic
5. **Captain abilities** → Edit `Navi` states and `NaviWhistle`

All changes flow through the **FSM (state) → AI (action) → Physics → Rendering** pipeline. Most rewarding mods target pikmin parameters (speed, range, damage) or action priorities (what they do when free).

