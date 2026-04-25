# Pikmin 2 Mod Menu

A mod menu built on top of the [Pikmin 2 decompilation](https://github.com/projectPiki/pikmin2) that lets you tune pikmin stats, captain stats, and trigger actions in real time while playing. Runs on the Dolphin emulator.

---

## How to Control Mod Menu In Game

Open the menu while inside a level (not on the title screen or world map).

| Control | Action |
|---|---|
| L + R + Z | Open / close the menu |
| D-pad Up / Down | Move cursor up / down |
| D-pad Left / Right | Adjust slider value (hold for auto-repeat) |
| A | Apply slider value to the game / execute an action |

### Mod Menu Color Meanings

| Label color | Value color | Meaning |
|-------------|-------------|---------|
| Blue | Blue | Cursor is on this row |
| Green | Green | Value was changed and applied (A pressed) |
| White | Red | Value was moved from default but not yet applied |
| White | White | Value is at its default |

### Available Mods

Default = actual runtime value loaded from the game's parm files (what "Restore defaults" resets to). Min/Max = range the mod menu slider allows.

| # | Name | Type | Min | Default | Max |
|---|------|------|-----|---------|-----|
| 1 | Pikmin follow spd | slider | 10 | 10 | 500 |
| 2 | Pikmin carry spd | slider | 10 | 120 | 500 |
| 3 | Flower carry spd | slider | 10 | 170 | 500 |
| 4 | Pikmin HP | slider | 1 | 100 | 1000 |
| 5 | Blue attack | slider | 1 | 10 | 1000 |
| 6 | Red attack | slider | 1 | 15 | 1000 |
| 7 | Yellow attack | slider | 1 | 10 | 1000 |
| 8 | Purple attack | slider | 1 | 20 | 30 |
| 9 | White attack | slider | 1 | 10 | 30 |
| 10 | Enemy search rng | slider | 1 | 70 | 1000 |
| 11 | Pellet search rng | slider | 1 | 55 | 1000 |
| 12 | Bomb throw max | slider | 1 | 160 | 1000 |
| 13 | Purple pound dmg | slider | 0 | 20 | 1000 |
| 14 | Purple carry spd mult | slider | 0.1 | 0.6 | 5 |
| 15 | Purple lift mult | slider | 1 | 10 | 20 |
| 16 | Spicy duration | slider | 5 | 40 | 200 |
| 17 | Spicy run speed | slider | 50 | 190 | 220 |
| 18 | Whistle radius | slider | 10 | 90 | 500 |
| 19 | Throw dist max | slider | 10 | 130 | 1000 |
| 20 | Red/Blue throw ht | slider | 10 | 75 | 200 |
| 21 | Yellow throw ht | slider | 10 | 115 | 200 |
| 22 | Purple throw ht | slider | 10 | 30 | 200 |
| 23 | White throw ht | slider | 10 | 75 | 200 |
| 24 | Captain HP | slider | 10 | 50 | 1000 |
| 25 | Captain run spd | slider | 10 | 160 | 500 |
| 26 | Max on field | slider | 1 | 100 | 100 |
| 27 | Time of day | slider | 0s | live | 780s |
| 28 | Kill all enemies | action | | | |
| 29 | All piki → flower | action | | | |
| 30 | Kill all pikmin | action | | | |
| 31 | All piki → onyon | action | | | |
| 32 | Onyon → Captain | action | | | |
| 33 | +5 each pik type | action | | | |
| 34 | +$1,000 Pokos | action | | | |
| 35 | Toggle noclip | action | | | |
| 36 | Freeze day | action | | | |
| 37 | Refill sprays | action | | | |
| 38 | Restore defaults | action | | | |

---

## Setup — Start to Finish

### Step 1 — Install Git and Python

You need Git (to download the code) and Python 3 (to run the build system).

**Linux (Ubuntu/Debian)** — open a terminal and run:
```bash
sudo apt install python3 ninja-build git
```

**Windows** — download and install:
- [Git for Windows](https://git-scm.com/download/win) — includes Git Bash, a terminal you can use for the rest of these steps
- [Python 3](https://www.python.org/downloads/windows/) — check "Add Python to PATH" during install
- [Ninja](https://ninja-build.org/) — download the Windows binary and put it somewhere on your PATH (e.g. `C:\Windows\System32\`)

**Mac** — open Terminal and install Homebrew if you haven't, then:
```bash
brew install python3 ninja git
```

---

### Step 2 — Install Dolphin

**Linux:**
```bash
flatpak install flathub org.DolphinEmu.dolphin-emu
```

Add a shortcut so you can type `dol` to launch it:
```bash
echo "alias dol='flatpak run org.DolphinEmu.dolphin-emu'" >> ~/.bashrc
source ~/.bashrc
```

**Windows / Mac:** Download the latest release from [dolphin-emu.org](https://dolphin-emu.org/download/) and run the installer.

---

### Step 3 — Clone the repo

Open a terminal (on Windows use Git Bash), then run:

```bash
git clone https://github.com/yerry262/pikmin2.git
```

This creates a `pikmin2/` folder. Move into it — **all future commands must be run from inside this folder:**

```bash
cd pikmin2
```

> If you close and reopen your terminal later, you'll need to `cd` back into this folder before running any commands. For example: `cd /home/yerry/CLAUDE_CORNER/pikmin2`

---

### Step 4 — Get a Pikmin 2 USA ISO

You need a dump of **Pikmin 2 (USA, GPVE01)**. It is not included in this repo. Search for `Pikmin 2 USA ISO` on a ROM site such as [CDRomance](https://cdromance.org) and download it. The file should end in `.iso`.

---

### Step 5 — Run configure to download build tools

Make sure you are inside the `pikmin2/` folder, then run:

```bash
python3 configure.py --non-matching
```

**Windows:** you may need to use `python` instead of `python3`:
```bash
python configure.py --non-matching
```

This automatically downloads the compiler and other tools the build system needs. It only needs to run once (or again if you ever wipe the `build/` folder).

---

### Step 6 — Extract the ISO into orig/

This puts the original game files into the `orig/GPVE01/` folder so Dolphin can load the game.

**Option A — Command line (all platforms):**

Make sure you are inside the `pikmin2/` folder, then run the following. Replace the path with wherever your ISO file is actually saved:

```bash
# Linux / Mac
./build/tools/dtk disc extract "/path/to/Pikmin 2 (USA).iso" orig/GPVE01
cp orig/GPVE01/sys/main.dol orig/GPVE01/sys/main.dol.retail
```

```bash
# Windows (Git Bash)
./build/tools/dtk.exe disc extract "C:/Users/YourName/Downloads/Pikmin 2 (USA).iso" orig/GPVE01
cp orig/GPVE01/sys/main.dol orig/GPVE01/sys/main.dol.retail
```

**Option B — Dolphin GUI:**

If you prefer not to use the command line for this step, Dolphin can extract the ISO for you:

1. Open Dolphin
2. Go to **Tools → Convert File…** (or right-click an ISO in the game list → **Convert**)
3. Set the output format to **GCM/ISO** and the output folder to `pikmin2/orig/GPVE01/`
4. After it finishes, open a terminal, `cd` into the `pikmin2/` folder, and run:
   ```bash
   cp orig/GPVE01/sys/main.dol orig/GPVE01/sys/main.dol.retail
   ```

> **`orig/` is never uploaded to GitHub.**
> The entire `orig/` folder is in `.gitignore` — the game files and deployed DOL stay on your machine only. Only source code (`src/`, `include/`, `configure.py`, etc.) syncs to GitHub. This is intentional since game files can't be redistributed. As a side effect, if you ever edit files inside `orig/` (like stage data), those edits survive branch switches and affect every branch silently. If something starts crashing on every branch at once, modified files in `orig/` are the first thing to check.

---

### Step 7 — Build and deploy the mod

Make sure you are inside the `pikmin2/` folder, then run:

```bash
./mod.sh
```

**Windows (Git Bash):**
```bash
bash mod.sh
```

This compiles all the mod source code and copies the result into `orig/GPVE01/sys/main.dol` — the file Dolphin will load. You should see a line like:

```
deployed: orig/GPVE01/sys/main.dol (modded, <sha1>)
```

Run `./mod.sh` any time you edit source files to rebuild and redeploy. No Dolphin restart needed if the game isn't running.

---

### Step 8 — Point Dolphin at the game folder

1. Open Dolphin
2. Go to **Config** → **Paths** tab
3. Click **Add**
4. Navigate to and select the `orig/` folder inside your `pikmin2/` directory:
   - **Linux example:** `/home/yerry/CLAUDE_CORNER/pikmin2/orig`
   - **Windows example:** `C:\Users\YourName\Documents\pikmin2\orig`
   - **Mac example:** `/Users/yourname/pikmin2/orig`
5. Check **Search Subfolders**

Pikmin 2 will appear in the Dolphin game list.

---

### Step 9 — Configure your controller

Go to Dolphin → **Controllers** → set Port 1 to your gamepad or GameCube adapter. The mod menu uses **L**, **R**, **Z**, **D-pad**, and **A**.

---

### Step 10 — Launch and play

Open Dolphin and double-click Pikmin 2 in the game list. Start a story mode save file, land in any area, then hold **L + R** and press **Z** to open the mod menu.

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

## Changes from Upstream

This fork is based on [projectPiki/pikmin2](https://github.com/projectPiki/pikmin2). The files below were added or patched specifically for the mod menu. Everything else in `src/` and `include/` is unchanged from upstream.

### New files (added by this fork)

| File | What it contains |
|---|---|
| `src/moddingU/modMenu.cpp` | All mod menu logic: slider definitions, input handling, draw, action callbacks |
| `include/moddingU/modMenu.h` | `ModMenu` / `ModSlider` structs, `ModSliderKind` enum, extern declarations (`gModMenu`, `gFieldCap`, `gPurpleLiftScale`) |

### Patched upstream files

| File | What was changed |
|---|---|
| `src/plugProjectKandoU/baseGameSection.cpp` | Added two calls: `moddingU::onBaseGameUpdate(mControllerP1)` in `doUpdate` and `moddingU::onBaseGameDraw(gfx)` in `doDraw` |
| `src/plugProjectKandoU/naviState.cpp` | Writes `moddingU::gFieldCap` into the HUD on-field cap each frame so the "Max on field" slider is respected by the whistle-out limit |
| `src/plugProjectKandoU/pikiMgr.cpp` | Returns `moddingU::gPurpleLiftScale` from `getColorTransportScale()` so the "Purple lift mult" slider affects carry weight |
| `configure.py` | Added the `moddingU` lib block (only linked when `--non-matching` is passed) and its entry in `link_order_callback` |

---

## Troubleshooting

**Menu doesn't open** — Make sure you're in an actual level (not a menu/loading screen). The sliders are built lazily on first open; if `pikiMgr` isn't ready yet it will retry next time.

**Build fails on first run** — Let `configure.py` finish downloading tools before running `mod.sh`. If a download fails, delete `build/tools/` and re-run `python3 configure.py --non-matching`.

**Dolphin doesn't show the game** — Make sure you added `orig/` (not `orig/GPVE01/`) as the game path in Dolphin → Config → Paths, and that **Search Subfolders** is checked.

**Changes not showing up** — Confirm `mod.sh` printed a `deployed:` line and that Dolphin is not caching an old file. Stop the game, run `./mod.sh`, restart.
