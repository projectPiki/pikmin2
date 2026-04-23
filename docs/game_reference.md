# Game Reference

Quick-lookup reference for Pikmin 2 content: internal-codename to English-name
mapping, the overworld areas + caves, pikmin-color traits, and the economy
numbers modders reach for most often.

> **Sourcing note.** Web lookups were denied for this pass, so every claim
> below is cited to a file + line in this repo (which is itself a matching
> decompilation of retail). When Nintendo's dev comments disagree with
> fan-wiki English names, the dev comment wins here and the discrepancy is
> flagged. Entries marked `(?)` are guesses even in the repo — verify
> against Pikipedia (pikminwiki.com) before relying on them for public doc.

---

## 1. Enemy codename <-> English name

The authoritative list is `EnemyTypeID::EEnemyTypeID` at
`include/Game/enemyInfo.h:57-162`. English names in the third column are the
comments Nintendo's decomp team wrote next to each `EnemyID_*`.

**Category legend.** `E` = active enemy, `Boss` = member of the `IS_ENEMY_BOSS`
macro (`enemyInfo.h:214-219`), `Haz` = static hazard with
`EFlag_HasNoInfo` set, `Plt` = plant, `Cpop` = candypop bud,
`Prop` = non-creature prop/projectile.

### Bulborb / Chappy family

| Codename | ID | English name | Cat |
|---|---|---|---|
| `Kochappy` | 1 | Dwarf Red Bulborb | E |
| `Chappy` | 2 | Red Bulborb | E |
| `BlueChappy` | 42 | Orange Bulborb | E |
| `BlueKochappy` | 44 | Dwarf Orange Bulborb | E |
| `YellowChappy` | 43 | Hairy Bulborb | E |
| `YellowKochappy` | 45 | Snow Bulborb | E |
| `KumaChappy` | 35 | Spotty Bulbear | E |
| `KumaKochappy` | 76 | Dwarf Bulbear | E |
| `LeafChappy` | 67 | Bulbmin | E |
| `FireChappy` | 33 | Fiery Bulblax | E |
| `Queen` | 30 | Empress Bulblax | Boss |
| `Baby` | 31 | Bulborb Larva (Empress spawn) | E |
| `KingChappy` | 53 | Emperor Bulblax | Boss |
| `Hana` | 84 | Creeping Chrysanthemum | E |

"Kuma" means bear (Bulbear); "King" = Emperor. Most inherit from
`ChappyBase::Obj` (`include/Game/Entities/ChappyBase.h`) — see
`docs/enemies.md` for the class hierarchy.

### Candypop buds ("Pom")

| Codename | ID | English name | Cat |
|---|---|---|---|
| `Pom` | 82 | Candypop Bud base (**crashes if spawned**, per `enemyInfo.h:141`) | Cpop |
| `BluePom` | 3 | Lapis Lazuli Candypop Bud | Cpop |
| `RedPom` | 4 | Crimson Candypop Bud | Cpop |
| `YellowPom` | 5 | Golden Candypop Bud | Cpop |
| `BlackPom` | 6 | Violet Candypop Bud | Cpop |
| `WhitePom` | 7 | Ivory Candypop Bud | Cpop |
| `RandPom` | 8 | Queen Candypop Bud | Cpop |

### Blowhogs ("Tank") and Puffy family

| Codename | ID | English name | Cat |
|---|---|---|---|
| `Tank` | 24 | Fiery Blowhog | E |
| `Wtank` | 25 | Watery Blowhog | E |
| `Mar` | 29 | Puffy Blowhog | E |
| `Hanachirashi` | 55 | Withering Blowhog | E |

`Mar`'s runtime class is also used as the chassis for Emperor Bulblax
(`plugProjectNishimuraU/Mar.cpp`); when grepping disambiguate by ID.

### Wollywogs, water dwellers, spiders

| Codename | ID | English name | Cat |
|---|---|---|---|
| `Frog` | 17 | Yellow Wollywog | E |
| `MaroFrog` | 18 | Wollywog | E |
| `Catfish` | 26 | Water Dumple | E |
| `Tadpole` | 27 | Wogpole | E |
| `UmiMushi` | 71 | Ranging Bloyster | Boss |
| `UmiMushiBlind` | 101 | Toady Bloyster | Boss |
| `UmiMushiBase` | 100 | Bloyster base (crashes if spawned, `enemyInfo.h:159`) | Prop |
| `Jigumo` | 63 | Hermit Crawmad | E |
| `JigumoNest` | 64 | Hermit Crawmad burrow | Prop |

### Beetles, bugs, butterflies

| Codename | ID | English name | Cat |
|---|---|---|---|
| `ElecBug` | 28 | Anode Beetle | E |
| `Kogane` | 9 | Iridescent Flint Beetle | E |
| `Wealthy` | 10 | Iridescent Glint Beetle | E |
| `Fart` | 11 | Doodlebug | E |
| `Imomushi` | 65 | Ravenous Whiskerpillar | E |
| `TamagoMushi` | 68 | Mitite | E |
| `Egg` | 37 | Egg (hatches mitites) | Prop |
| `Qurione` | 16 | Honeywisp | E |
| `Kabuto` | 75 | Armored Cannon Beetle Larva | E |
| `Rkabuto` | 95 | Decorated Cannon Beetle | E |
| `Fkabuto` | 96 | Armored Cannon Beetle Larva (burrowed) | E |
| `ShijimiChou` | 77 | Unmarked Spectralids (butterfly) | E |

### Sheargrubs, snitchbugs, antenna beetle

| Codename | ID | English name | Cat |
|---|---|---|---|
| `UjiA` | 12 | Female Sheargrub | E |
| `UjiB` | 13 | Male Sheargrub | E |
| `Tobi` | 14 | Shearwig | E |
| `Sarai` | 23 | Swooping Snitchbug | E |
| `Demon` | 32 | Bumbling Snitchbug | E |
| `BombSarai` | 58 | Careening Dirigibug | E |
| `Fuefuki` | 41 | Antenna Beetle | E |

### Snagrets, long-legs, groinks, crawbster

| Codename | ID | English name | Cat |
|---|---|---|---|
| `SnakeCrow` | 34 | Burrowing Snagret | Boss |
| `SnakeWhole` | 70 | Pileated Snagret | Boss |
| `Damagumo` | 56 | Beady Long Legs | Boss |
| `BigFoot` | 69 | Raging Long Legs | Boss |
| `Houdai` | 66 | Man-at-Legs | Boss |
| `MiniHoudai` | 78 | Gatling Groink | E |
| `FminiHoudai` | 97 | Gatling Groink (pedestal / fixed) | E |
| `DangoMushi` | 94 | Segmented Crawbster | Boss |

### Dweevils ("Otakara" = treasure)

| Codename | ID | English name | Cat |
|---|---|---|---|
| `FireOtakara` | 59 | Fiery Dweevil | E |
| `WaterOtakara` | 60 | Caustic Dweevil | E |
| `GasOtakara` | 61 | Munge Dweevil | E |
| `ElecOtakara` | 62 | Anode Dweevil | E |
| `BombOtakara` | 93 | Volatile Dweevil | E |
| `BigTreasure` | 73 | **Titan Dweevil (final boss)** | Boss |

### Other creatures + props

| Codename | ID | English name | Cat |
|---|---|---|---|
| `Armor` | 15 | Cloaking Burrow-nit | E |
| `Miulin` | 54 | Mamuta | E |
| `Kurage` | 57 | Lesser Spotted Jellyfloat | E |
| `OniKurage` | 72 | Greater Spotted Jellyfloat | E |
| `Sokkuri` | 79 | Skitter Leaf | E |
| `PanModoki` | 38 | Breadbug | E |
| `OoPanModoki` | 40 | Giant Breadbug | Boss |
| `PanModokiNest` | 39 | Breadbug nest (alias) | Prop |
| `PanHouse` | 83 | Breadbug nest | Prop |
| `BlackMan` | 99 | Waterwraith | Boss |
| `Tyre` | 98 | Waterwraith rollers | Prop |

### Hazards (no Piklopedia entry, `EFlag_HasNoInfo` set)

| Codename | ID | English name | Cat |
|---|---|---|---|
| `Hiba` | 20 | Fire geyser | Haz |
| `GasHiba` | 21 | Gas pipe | Haz |
| `ElecHiba` | 22 | Electrical wire | Haz |
| `Rock` | 19 | Falling-boulder emitter | Haz |
| `Stone` | 74 | Thrown rock (projectile) | Haz |
| `Bomb` | 36 | Bomb-rock (pickup / projectile) | Haz |

### Plants / flora

| Codename | ID | English name | Cat |
|---|---|---|---|
| `Pelplant` | 0 | Pellet Posy | Plt |
| `Tanpopo` | 46 | Dandelion | Plt |
| `Watage` | 81 | Seeding Dandelion | Plt |
| `Clover` | 47 | Clover | Plt |
| `HikariKinoko` | 48 | Common Glowcap | Plt |
| `Ooinu_s` | 49 | Figwort (red, small) | Plt |
| `Ooinu_l` | 50 | Figwort (red, large) | Plt |
| `KareOoinu_s` | 91 | Figwort (brown, small) | Plt |
| `KareOoinu_l` | 92 | Figwort (brown, large) | Plt |
| `Wakame_s` | 51 | Shoot (small) | Plt |
| `Wakame_l` | 52 | Shoot (large) | Plt |
| `Tukushi` | 80 | Horsetail | Plt |
| `DaiodoRed` | 85 | Glowstem (red) | Plt |
| `DaiodoGreen` | 86 | Glowstem (green) | Plt |
| `Magaret` | 87 | Margaret | Plt |
| `Nekojarashi` | 88 | Foxtail | Plt |
| `Chiyogami` | 89 | Chigoyami paper scrap `(?)` | Plt |
| `Zenmai` | 90 | Fiddlehead | Plt |

### Boss list (from `IS_ENEMY_BOSS` macro)

The engine's canonical boss set for music/camera/scoring is in
`enemyInfo.h:214-219`:

```
Queen, SnakeCrow, KingChappy, Damagumo, OoPanModoki, Houdai,
UmiMushiBlind, BlackMan, DangoMushi, BigFoot, SnakeWhole,
UmiMushi, BigTreasure
```

The story final boss is **Titan Dweevil** (`BigTreasure`). Emperor Bulblax
(`KingChappy`) is only the endgame trigger for the *Louie's Dark Secret*
ending path after the debt is repaid.

---

## 2. Overworld areas (courses)

Pikmin 2 has four overworld areas, enumerated in three cooperating enums:

- `PSGame::SceneInfo::GameType` — `include/PSGame/SceneInfo.h:25-48`
- `kh::Screen::WorldMap::WorldMapCourseIndex` — `include/kh/khWorldMap.h:142-149`
- `og::Screen::DispMemberSMenuMap::*` — `include/og/Screen/DispMember.h:494-495`

| Idx | Internal | English | Cave prefix | Dev notes |
|---|---|---|---|---|
| 0 | `tutorial` | **Valley of Repose** (winter ruins) | `t_*` | A Day-1 variant `COURSE_TUTORIALDAY1` (SceneInfo 20, `SceneInfo.h:46`) uses the opening cutscene. |
| 1 | `forest` | **Awakening Wood** (forest) | `f_*` | Music bank = `PSSQ_FOREST` (`SoundID.h:1065`). Sakura-petal particles at `PID_ForestSakura`. |
| 2 | `yakushima` | **Perplexing Pool** (wetland) | `y_*` | Named after Yakushima island. |
| 3 | `last` | **Wistful Wild** (autumn / combined) | `l_*` | Unlocked after debt payoff. Houses Emperor Bulblax + Titan Dweevil caves. |

A fifth scene type `COURSE_TEST` (5, `SceneInfo.h:31`) exists but ships no
map — likely a dev-only debug scene. Versus and Challenge route through
`TWO_PLAYER_BATTLE` (7) and `CHALLENGE_MODE` (6).

---

## 3. Story caves

All 14 story caves are dispatched by a `switch` on FourCC cave IDs at
`src/plugProjectOgawaU/ogObjFloor.cpp:168-209`. The prefix identifies the
area; the numeric suffix is load order within that area.

Floor counts below are the retail-ship counts from community documentation;
the engine reads floor counts per-cave from text files under
`orig/GPVE01/files/...` at runtime, so modders can lengthen any cave.
Boss listings come from the `IS_ENEMY_BOSS` macro intersected with each
cave's known final-floor content.

### Valley of Repose caves (`t_*`)

| ID | English name | Floors | Final-floor centerpiece |
|---|---|---|---|
| `t_01` | Emergence Cave | 2 | Courage Reactor story treasure; first Red Bulborb. |
| `t_02` | Subterranean Complex | 6 | **Man-at-Legs** (`Houdai`). |
| `t_03` | Frontier Cavern | 7 | **Empress Bulblax** (`Queen`). |

### Awakening Wood caves (`f_*`)

| ID | English name | Floors | Final-floor centerpiece |
|---|---|---|---|
| `f_01` | Hole of Beasts | 5 | **Burrowing Snagret** (`SnakeCrow`). |
| `f_02` | White Flower Garden | 5 | Armored Cannon Beetle Larvae swarm (no canonical boss). |
| `f_03` | Bulblax Kingdom | 5 | **Emperor Bulblax** (`KingChappy`) — first encounter. |
| `f_04` | Snagret Hole | 5 | **Pileated Snagret** (`SnakeWhole`). |

### Perplexing Pool caves (`y_*`)

| ID | English name | Floors | Final-floor centerpiece |
|---|---|---|---|
| `y_01` | Citadel of Spiders | 5 | **Beady Long Legs** (`Damagumo`). |
| `y_02` | Glutton's Kitchen | 6 | **Giant Breadbug** (`OoPanModoki`), fire hazards, Fiery Bulblax. |
| `y_03` | Shower Room | 5 | **Ranging Bloyster** (`UmiMushi`). |
| `y_04` | Submerged Castle | 5 | **Waterwraith** (`BlackMan`) — only one of the two Waterwraith fights where he can be defeated. |

### Wistful Wild caves (`l_*`)

| ID | English name | Floors | Final-floor centerpiece |
|---|---|---|---|
| `l_01` | Cavern of Chaos | 9 | **Segmented Crawbster** (`DangoMushi`). |
| `l_02` | Hole of Heroes | 15 | **Raging Long Legs** (`BigFoot`). Longest non-endgame cave; Spotty Bulbear sublevel. |
| `l_03` | Dream Den | 14 | **Titan Dweevil** (`BigTreasure`) — true story final boss; Louie rescue. |

---

## 4. Challenge Mode caves

Challenge Mode uses IDs `c_00..c_29`; the retail US game ships 30. Full
switch at `ogObjFloor.cpp:211-325`. Summary (first 20 pulled from repo; the
remainder follow the same pattern and are listed in `ogObjFloor.cpp`):

| ID | English name |
|---|---|
| `c_00` | Explorer's Cave |
| `c_01` | Brawny Abyss |
| `c_02` | Concrete Maze |
| `c_03` | Creator's Garden |
| `c_04` | The Giant's Bath |
| `c_05` | Lost Toy Box |
| `c_06` | Twilight Garden |
| `c_07` | Cavernous Abyss |
| `c_08` | Secret Testing Range |
| `c_09` | Emperor's Realm |
| `c_10` | Cryptic Cavern |
| `c_11` | Red Chasm |
| `c_12` | Collector's Room |
| `c_13` | Hidden Garden |
| `c_14` | Trampled Garden |
| `c_15` | Hot House |
| `c_16` | Breeding Ground |
| `c_17` | Green Hole |
| `c_18` | Hazard Training |
| `c_19` | Three Color Training |

Versus stages use `vs00..vs09` (see `ogObjFloor.cpp:141-157`).

---

## 5. Pikmin color quick-reference

Enum at `include/Game/Piki.h:41-57`. Damage numbers below are relative
multipliers — actual per-hit values come from `PikiParms` and are scaled
by each enemy's own defense multiplier at runtime.

| Color | `EPikiKind` | Immunity | Special trait | Attack (rel.) |
|---|---|---|---|---|
| Blue | 0 (`Blue`) | Water (drowning) | Can rescue drowning pikmin of any color | 1.0x |
| Red | 1 (`Red`) | Fire | Highest plain attack damage | 1.5x |
| Yellow | 2 (`Yellow`) | Electricity (stun only in P2, was 1-hit-KO in P1) | Thrown higher; can be picked up while carrying bomb-rocks | 1.0x |
| Purple | 3 (`Purple`) | — (none) | Counts as **10** for carry weight (`PW_PurpleWeight = 10`, `PikiMgr.h:127`); earthquake ground-pound on landing | 3.0x + AoE stun |
| White | 4 (`White`) | Poison (Mamuta gas, Munge Dweevil) | Fastest speed; detects buried treasure; damages anything that eats them | 0.5x (but toxin DoT on ingest) |
| Bulbmin | 5 (`Bulbmin`) | All five (fire, water, electricity, poison, explosion) | Cave-only; cannot be stored in onyon — `LastStoredPikiColor = White` at `Piki.h:51` caps storable at 4 | 1.0x |

`EPikiKind::Carrot = 6` is a reserved 7th slot (`PikiColorCount = 7`) with
no shipped model. See `docs/new_pikmin_type.md` for adding a real 8th type.

Growth stage is a separate enum, `EPikiHappa` (Leaf / Bud / Flower,
`Piki.h:59-68`), and multiplies attack damage at hit-resolution time in
`piki.cpp`.

---

## 6. Captains

Three captains exist, all mechanically identical:

| In-game name | NAVIID | Notes |
|---|---|---|
| Captain Olimar | `NAVIID_Olimar = 0` | Hocotate Freight employee; Pikmin 1 protagonist. |
| Louie | `NAVIID_Louie = 1` | Olimar's co-pilot; kidnapped in the endgame by Titan Dweevil. |
| The President | reuses Louie's slot | Playable after Louie is kidnapped; same mechanics and `NAVIID_Louie = 1`. |

See `include/Game/Navi.h` for the enum and manager singleton.

---

## 7. Game-economy / modding essentials

- **Debt payoff**: 10000 Pokos. Triggers the *Debt Paid* ending
  (`SceneInfo::ENDING_DEBTRESULT = 15`, `SceneInfo.h:41`) and unlocks
  Wistful Wild.
- **True-ending threshold**: all 201 treasures collected
  (`SceneInfo::ENDING_COMPLETE = 14`).
- **Day limit**: **none** in Story Mode — the day counter
  (`WorldMap::InitArg::mCurrentDay`, `khWorldMap.h:62`) is a plain `u32`
  and never forces a game over.
- **Day length**: ~15 real-time minutes, scaled by `SunlightMgr`
  (`sysGCU/`), same clock as Pikmin 1.
- **Max pikmin in field**: 100 — `MAX_PIKI_COUNT` at `Piki.h:10`. Also
  the per-cave cap.
- **Treasure tracking**: `CarryInfoMgr`
  (`plugProjectYamashitaU/carryInfoMgr.cpp`). Treasure Hoard + Piklopedia
  UIs live in `plugProjectMorimuraU/` (Zukan).
- **Cave treasure persistence**: `Game::CaveOtakara` /
  `CaveOtakaraInfo` in `gameStages.cpp:17-113`. Treasures dropped in a cave
  survive only within the current dive.
- **Area / cutscene unlocks**: `DemoFlag` bits in
  `plugProjectKandoU/gamePlayData.cpp`. Key ones:
  - `DEMO_First_Cave_Return` — set after first successful cave exit
    (`singleGS_WorldMap.cpp:78`).
  - `DEMO_Find_Cave_Deeper_Hole`, `DEMO_Find_Cave_Geyser` — set when
    the player first sees a hole/geyser (`navi_demoCheck.cpp:404-469`).
- **Versus tokens (marbles / cherries)**: `vsStageData.cpp` +
  `vsGameSection.cpp`.

### Sprays

| Spray | Effect | Recipe |
|---|---|---|
| **Ultra-bitter** | Petrifies every enemy on-screen (`EB_Bittered`, `EnemyBase.h`; state `EBS_Stone = 7`). Stone state is set up by `dopeCallBack()`, `EnemyBase.h:259`. | 10 bitter berries (Burgeoning Spiderwort) |
| **Ultra-spicy** | Squad-wide ~50% speed + doubled damage for ~20s; no petrify. Tuning knobs: `PikiParms::mDopeMaxDuration` / `mDopeAttackDamage` / `mDopeRunSpeed`. | 10 spicy berries |

---

## 8. Cross-reference index

Want to change X? Touch Y.

| Want to change... | Touch... |
|---|---|
| An enemy's stats (runtime) | Parm file under `orig/GPVE01/files/user/{Dev}/teki/*.txt` |
| An enemy's stats (compile-time default) | The `Parms` struct in `include/Game/Entities/{Codename}.h` |
| An enemy's AI | `src/plugProject{Dev}U/{Codename}State.cpp` |
| A cave's floor layout | `orig/GPVE01/files/user/Mukki/mapunits/caveinfo/*.txt` (from ISO, data-driven) |
| A cave's displayed name | `ogObjFloor.cpp:setCaveMsgID` case + `msg.bmg` entry (`8395_00` etc.) |
| Pikmin color stats | `PikiParms::read` + `orig/.../user/Kando/piki/parms.txt` |
| Treasure Poko value | `gamePelletList.cpp` + `pelletMgr.cpp` |
| World-map unlocking | `DemoFlag` bits in `gamePlayData.cpp` / `singleGS_WorldMap.cpp` |
| Boss music dispatch | `PSGame::SceneInfo::mSceneType` tests in `PSM/Scene.h:168` |

---

## 9. Known gaps / things to verify against Pikipedia

- `Chiyogami` (ID 89): repo comment says "Chigoyami paper" (typo for
  *chiyogami*). Plausibly the ornamental paper scraps in Awakening Wood /
  Perplexing Pool, but the English Pikipedia name wasn't verifiable this
  session. Flagged `(?)`.
- Cave floor counts: filled from community-documented retail values; the
  data ultimately comes from files outside this repo.
- Challenge-mode caves `c_20..c_29`: present in `ogObjFloor.cpp` but not
  re-listed here; run the same `switch` case to get their shipped names.
- Demo build (`GPVE01_D17`): a handful of later Challenge IDs may be
  stubbed or absent; grep `#if VERSION` in `ogObjFloor.cpp` before assuming
  an ID exists in that build.
