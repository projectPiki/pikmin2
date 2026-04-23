## New Pikmin Type — Design

Goal: add an 8th pikmin color (working name **Green**) that behaves like a reskinned Blue with a new hazard immunity (poison/gas — the unused hazard slot). Captures everything you'd need to touch in source without writing code yet.

Status: **design only**, not implemented. Read against the current source before starting.

---

### 1. The enum to extend

`include/Game/Piki.h:41`:

```cpp
typedef enum EPikiKind {
    AllPikminCalcs = -1,
    FirstPikmin    = 0,
    Blue           = 0,
    Red            = 1,
    Yellow         = 2,
    LastOnyon      = 2,      // <-- counts the onyon-capable colors
    OnyonCount,              // 3
    Purple              = 3,
    White               = 4,
    LastStoredPikiColor = White,
    StoredPikiCount,         // 5
    AllPikmin = StoredPikiCount,
    Bulbmin   = 5,
    Carrot    = 6,
    PikiColorCount,          // 7
} EPikiKind;
```

Adding Green means picking a slot and being honest about which family it joins:

| Choice | Enum change | Implications |
|---|---|---|
| **Onyon-native (hard)** | Insert `Green = 3` after Yellow, bump `LastOnyon` to 3, bump every subsequent value | Needs onyon model, HUD C-stick slot, save-data container expansion (see §4) |
| **Cave-only (easy)** | Append after Carrot → `Green = 7, PikiColorCount = 8` | Skips onyon/save plumbing; spawns from a new candypop only |

**Recommendation:** start with cave-only (easy row). All the hard wiring is in onyon storage and menu UI; with cave-only you're reskinning Blue behaviour and can iterate. Promote to onyon-native later if it feels worth it.

### 2. Model + texture

Models are mounted from `/user/Kando/piki/pikis.szs`. Look at `src/plugProjectKandoU/pikiMgr.cpp:188-194`:

```cpp
loadBmd(Blue,    "piki_p2_blue");
loadBmd(Red,     "piki_p2_red");
loadBmd(Yellow,  "piki_p2_yellow");
loadBmd(White,   "piki_p2_white");
loadBmd(Purple,  "piki_p2_black");
loadBmd(Bulbmin, "piki_kochappy");
loadBmd(Carrot,  "piki_ninjin");
```

Minimum viable green: add `loadBmd(Green, "piki_p2_blue");` — reuses blue's mesh. For a visual swap, duplicate `piki_p2_blue.bmd` inside the archive and retint it (or add a `_c0` material color override). The archive is `pikis.szs` under `sys/pikis.szs` in the original ISO — rebuilding it needs a szs packer; out of scope for v0.

Also bump `PikiColorCount` (line 41) because `mModelMgr` (`pikiMgr.cpp:207`) is constructed with it as the model slot count. Missing a slot here is a silent crash later.

### 3. Per-color behavior branches to audit

Green being "Blue + poison-immune" means each `switch (getKind())` / `pikiKind == <Color>` needs a conscious decision. The high-signal files:

| File:line | What to add |
|---|---|
| `src/plugProjectKandoU/piki.cpp:871-884` (`getAttackDamage`) | `case Green: return ...mGreenAttackDamage.mValue;` (or fall through to blue's value if you don't add a new parm) |
| `src/plugProjectKandoU/interactPiki.cpp:441` (`InteractFire`) | Green is **not** fire-immune → no change, panics like non-red |
| `src/plugProjectKandoU/interactPiki.cpp:499` (`InteractBubble`) | Green drowns (unless you want amphibious too) |
| `src/plugProjectKandoU/interactPiki.cpp:340-353` (electric interaction) | Green is **not** shock-immune |
| (new hook) poison/gas interaction | Add `pikiKind != Green && pikiKind != Bulbmin` gate |
| `src/plugProjectKandoU/pikiMgr.cpp:134` (bulbmin handling) | Audit — bulbmin checks don't need to change |
| `src/plugProjectKandoU/pikiMgr.cpp:460-463` (flag gating) | Add green's bit if you want onyon slot |

The "gas" hazard currently exists as geometry (`EnemyID_GasHiba = 21`, gas pipe) but pikmin are unconditionally affected; granting immunity means finding whatever applies the `gas` effect to pikis and gating it on kind. Grep for where gas pipes call piki state transitions — likely in `Game/Entities/GasHiba*` or via an `InteractGas` class.

### 4. Save / HUD plumbing (skip for cave-only)

If you add Green as onyon-native:

- `PikiContainer` (ref: `src/plugProjectKandoU/pikiMgr.cpp:581`) sizes storage by `PikiColorCount * PikiGrowthStageCount`. Bumping the enum auto-scales the array, but serialized save files on disk will be one color short — need a save-version bump + migration path.
- `include/og/Screen/Data.h:106` (`mMaxPikiOnField`) is single-value; fine as-is.
- Onyon UI (HUD color swatches, result screen bars) lives in `plugProjectOgawaU` and `plugProjectKonoU`. Each hardcodes 5 onyon colors in atlas lookups — a green swatch means patching TPL texture lookups and result-screen table layouts.
- Candypop buds: each color has its own spawner (`BluePom`, `RedPom`, `YellowPom`, `BlackPom`, `WhitePom` at `EnemyID_*Pom = 3..7`). For Green cave-only, add a `GreenPom` as a new enemy entry (see `docs/new_monster.md` for the scaffolding pattern).

### 5. Parms

`include/Game/PikiParms.h` stores per-color attack damages as individual `Parm<f32>` fields — `mBlueAttackDamage`, `mRedAttackDamage`, etc. Option A: add `mGreenAttackDamage` alongside (clean, touches the Parameters macro block). Option B: reuse blue's value and don't add a parm (one less line to wire through the mod menu). Either works for v0.

### 6. Build plan (cave-only path)

1. Append `Green = 7, PikiColorCount = 8` in `Piki.h:41` enum.
2. Append `loadBmd(Green, "piki_p2_blue");` in `pikiMgr.cpp:194` (reuse mesh).
3. Add poison-immunity branch wherever the gas hazard applies to pikis (TBD — grep required).
4. Add a `GreenPom` candypop enemy entry (parallel to `BluePom`) so you can spawn some in a cave to test.
5. Buildable on `--non-matching` only. Save files will be untouched since Green isn't an onyon color.

### 7. Gotchas

- **Enum insertion breaks match.** Inserting `Green = 3` shifts Purple/White/Bulbmin/Carrot up by one. Every existing `.dol` reference to those integer constants is now wrong. Append-only is mandatory unless rebuilding everything on non-matching.
- **Heap sizing.** `pikiMgr.cpp:207` allocates `MAX_PIKI_COUNT` sprites per color slot; 8 colors × 100 = 800 models. Runtime memory budget should still fit but watch the main-heap print after `pikmin-ModelMgr`.
- **Piki AI (`pikiAI.cpp`).** A handful of AI decisions switch on kind (e.g., carrying-weight override for Purple). Audit each before shipping — an unlisted color often falls into the Blue default, which is usually what you want, but not always.
- **VS mode** (`src/plugProjectKandoU/vsGameSection.cpp`) hardcodes Red-vs-Blue and uses `getKind() == Blue/Red`. Green in VS will misbehave; gate it out or let it simply not appear in VS.
- **Piklopedia / voice cues** reference each color by id. New color has no entry → soft-lock or silence, not a crash.
