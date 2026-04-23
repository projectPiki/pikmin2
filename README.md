# Pikmin 2 Mod Menu

A mod menu built on top of the [Pikmin 2 decompilation](https://github.com/projectPiki/pikmin2) that lets you tune pikmin stats, captain stats, and trigger actions in real time while playing. Runs on the Dolphin emulator.

---

## What the Mod Menu Does

While in a level, hold **L + R** then press **Z** to open/close the menu. Inside:

| Control | Action |
|---|---|
| D-pad Up / Down | Move cursor |
| D-pad Left / Right | Decrease / increase value (hold for auto-repeat) |
| A | Execute an action item |
| L + R + Z | Close the menu |

### Available Sliders

- **Pikmin** — walk speed, run speed, flower run speed, HP, attack per color (blue/red/yellow/purple/white), enemy search range, pellet search range, bomb throw range, scale, purple pound damage, purple carry power
- **Spicy spray** — duration, run speed boost
- **Captain** — whistle radius, throw distance, HP, run speed
- **Max on field** — how many pikmin can be out at once (up to 100)

### Available Actions

- Kill all enemies
- Give all pikmin flowers
- Kill all pikmin
- Send all pikmin to onyon
- +1000 Pokos
- Toggle noclip
- Toggle freeze day timer
- Refill sprays (10/10)
- Restore all values to defaults

---

## Dependencies

### System packages

```bash
sudo apt install python3 ninja-build git
```

### Dolphin (via Flatpak)

```bash
flatpak install flathub org.DolphinEmu.dolphin-emu
```

Add a convenience alias to your `~/.bashrc`:

```bash
alias dol='flatpak run org.DolphinEmu.dolphin-emu'
```

Then `source ~/.bashrc` (or open a new terminal).

### Build tools (auto-downloaded by configure.py)

The build system downloads these automatically on first run — you do not need to install them manually:

| Tool | Purpose |
|---|---|
| `wibo` | Runs Windows `.exe` files on Linux without Wine |
| `mwcceppc.exe` | Original Metrowerks C++ compiler (GC/2.6) |
| `dtk` | Decomp-toolkit: extracts ISOs, converts ELF→DOL |
| `sjiswrap` | Wraps the compiler to handle Shift-JIS source files |
| `objdiff` | Optional: visual diff tool for decompilation work |

---

## First-Time Setup

### 1. Clone the repo

```bash
git clone https://github.com/projectPiki/pikmin2.git
cd pikmin2
```

### 2. Get a Pikmin 2 USA ISO

You need a dump of **Pikmin 2 (USA, GPVE01)**. This is not included in the repo — you must dump it from your own disc.

### 3. Extract the ISO into orig/

```bash
# dtk is downloaded automatically when you first run configure.py.
# Run configure once just to get dtk:
python3 configure.py --non-matching

# Then extract your ISO (replace the path with your actual ISO location):
./build/tools/dtk disc extract /path/to/Pikmin2.iso orig/GPVE01
```

This populates `orig/GPVE01/sys/` and `orig/GPVE01/files/` with the original game data.

### 4. Configure for modding

```bash
python3 configure.py --non-matching
```

This generates `build.ninja` with the SHA1 check disabled so you can build modified code freely.

---

## Building and Deploying

```bash
./mod.sh
```

That's it. `mod.sh` runs `ninja` to compile and then copies the result to `orig/GPVE01/sys/main.dol` — the file Dolphin loads. You'll see a confirmation line like:

```
deployed: orig/GPVE01/sys/main.dol (modded, <sha1>)
```

Run `./mod.sh` any time you edit source files to rebuild and deploy in one step.

---

## Loading in Dolphin

### 1. Add the game folder

Open Dolphin → **Config → Paths** → **Add** → select the `orig/` folder inside this repo.

Dolphin will find `orig/GPVE01/` and show Pikmin 2 in the game list.

### 2. Launch the game

```bash
dol
```

Or double-click Pikmin 2 in the Dolphin game list.

### 3. Configure your controller

Dolphin → **Controllers** → set Port 1 to your gamepad or GameCube adapter. The mod menu uses standard GC button mappings (L, R, Z, D-pad, A).

---

## Opening the Mod Menu In-Game

1. Start a day in any area (the menu requires `pikiMgr` and `naviMgr` to be loaded — it won't work on title screens or the world map).
2. Hold **L + R** on the controller, then press **Z**.
3. The menu appears in the upper-left area of the screen.
4. Hold **L + R + Z** again to close it.

---

## Editing the Mod Menu

The mod menu source lives in two files:

| File | What it does |
|---|---|
| `src/moddingU/modMenu.cpp` | All logic: slider definitions, input handling, draw |
| `include/moddingU/modMenu.h` | Struct layout, constants (`kVisibleRows`, `kMaxSliders`) |

### Adding a new slider

Find `ModMenu::buildSliders()` in `modMenu.cpp` and add a line using the `ADD_PARM` macro:

```cpp
ADD_PARM("My label", parms->mPikiParms.mSomeStat, 0.0f, 100.0f, 1.0f);
//                   ^pointer to the Parm<f32>     ^min  ^max    ^step
```

For captain (Navi) stats use `ADD_NAVI_PARM` with fields from `Game::NaviParms::Parms`.

### Adding a new action

```cpp
ADD_ACTION("[ACTION] My action", &my_action_fn);
```

Then define `static void my_action_fn()` anywhere in the file.

### Rebuilding after edits

```bash
./mod.sh
```

Dolphin picks up the new DOL immediately — no restart needed if the game is not running. If the game is already running, stop it, run `./mod.sh`, and start again.

---

## Project Structure (relevant to modding)

```
src/moddingU/        # Mod menu source
include/moddingU/    # Mod menu headers
orig/GPVE01/sys/     # main.dol lives here — this is what Dolphin loads
build/GPVE01/        # Compiled output (do not edit)
docs/                # Architecture and modding guides
configure.py         # Build generator — re-run when adding new source files
mod.sh               # One-shot build + deploy script
```

---

## Troubleshooting

**Menu doesn't open** — Make sure you're in an actual level (not a menu/loading screen). The sliders are built lazily on first open; if `pikiMgr` isn't ready yet it will retry next time.

**Build fails on first run** — Let `configure.py` finish downloading tools before running `mod.sh`. If a download fails, delete `build/tools/` and re-run `python3 configure.py --non-matching`.

**Dolphin doesn't show the game** — Make sure you added the `orig/` folder (not `orig/GPVE01/`) as a game path in Dolphin settings.

**Changes not showing up** — Confirm `mod.sh` printed a `deployed:` line and that Dolphin is not caching an old file. Stop the game, run `./mod.sh`, restart.
