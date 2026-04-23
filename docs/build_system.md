# Build System Documentation

This document explains the pikmin2 decompilation project's build system and toolchain. Use this when modifying source code or understanding how the build reproduces the original GameCube binary.

## Overview

The project reproduces Pikmin 2's `main.dol` byte-for-byte using Metrowerks CodeWarrior 2.6 (MWCC 2.6) with the original toolchain. The build pipeline is:

1. `configure.py` generates a Ninja build file (`build.ninja`) and project metadata
2. `ninja` compiles C/C++/assembly and links object files into an ELF
3. DTK converts ELF to DOL and validates the SHA1 hash against the original

## Configure.py: The Build Generator

**File:** `configure.py` (101 lines of setup + library/object definitions)

### Purpose
Generates `build.ninja` and `objdiff.json` for incremental compilation and diffing. Think of it as the CMake/Autoconf equivalent — it's Python, not a build file.

### Invocation
```bash
python3 configure.py [--version VERSION] [--non-matching] [--help]
```

### Key Variables Set (Lines 128–206)

- **Version selection** (line 129): Picks from `GPVE01` (USA Retail), `GPVE01_D17` (USA Demo), etc. Sets `version_num` used in assembly `--defsym version=N`
- **Config paths** (lines 156–157): Point to `config/GPVE01/config.yml` and `config/GPVE01/build.sha1`
- **VERNUM macro** (line 205): `-DVERNUM=version_num` passed to all compilations and assembly
- **Compiler flags** (lines 184–229): Metrowerks-specific `-O4,p`, `-fp hardware`, etc.
- **Linker version** (line 231): `GC/2.6` for GameCube Metrowerks linker

### Object/Matching Concept

Each source file is wrapped in an `Object(status, "path/to/file.cpp")`:

- **`Matching = True`**: File compiles to the exact same bytes as the original. Will be linked into the DOL on every build.
- **`NonMatching = False`**: File does not match the original (work in progress). Excluded from normal builds; replaced with extracted original binary during linking.
- **`Equivalent = config.non_matching`**: Conditional: included only with `--non-matching` flag (for mods/experimental rewrites).

**Example** (`configure.py:249–250`):
```python
Object(NonMatching, "JSystem/JStudio_JParticle/object-particle.cpp"),
Object(Matching, "JSystem/JStudio_JParticle/control.cpp"),
```

The generator (in `tools/project.py`) decides per object: if `obj.completed` is True AND the source exists, compile it; otherwise use the original extracted object.

### Library Structure

Objects are grouped into libraries with shared compiler flags (line 241+):

```python
{
    "lib": "JStudio_JParticle",
    "cflags": cflags_pikmin,           # Compiler flags for this lib
    "mw_version": "GC/2.6",            # Metrowerks version
    "progress_category": "jsystem",    # For progress tracking
    "host": True,
    "objects": [ Object(...), ... ],
}
```

Libraries become static archives (`.a`) linked into the DOL in order defined in `obj_files.mk`.

### Link Order & Link Order Callback

**File:** `obj_files.mk`

Defines the final link order for the DOL:
```makefile
JSYSTEM:=$(BUILD_DIR)/src/JSystem/JSystem.a
DOLPHIN:=$(BUILD_DIR)/src/Dolphin/Dolphin.a
...
O_FILES := $(JSYSTEM) $(DOLPHIN) $(PLUGPROJECT) $(SYS) $(UTILITY)
```

**Link order callback** (`configure.py:2105–2119`):
A Python function called once per link unit (the DOL + any RELs). When `--non-matching` is active, you can add new files:

```python
def link_order_callback(module_id: int, objects: List[str]) -> List[str]:
    if not config.non_matching:
        return objects
    if module_id == 0:  # DOL
        return objects + ["newlib/myfile.cpp"]
    return objects
```

The file **must** be defined as a `Matching` or `Equivalent` object above; this callback only reorders.

## How Ninja Build Works

**File:** `tools/project.py` (1600+ lines; `generate_build_ninja` at line 456)

### What Gets Generated

`configure.py` calls `generate_build(config)` which outputs:
1. **`build.ninja`**: Ninja build rules for compile/link/check
2. **`objdiff.json`**: Metadata for objdiff GUI diffing
3. **`compile_commands.json`**: For IDE integration (clang-tools)

### Key Build Rules

- **`compile_c`**: MWCC compiles `.c`/`.cpp` → `.o` (handles preprocessing, sjiswrap wrapping)
- **`assemble`**: Binutils `powerpc-eabi-as` assembles `.s` → `.o`
- **`lib`**: Archives `.o` files into static libs (`.a`)
- **`link`**: Metrowerks `mwldeppc` links all libs + original objects → `.elf`
- **`elf2dol`**: DTK converts ELF → DOL
- **`check`**: DTK verifies DOL SHA1 matches original

### Matching vs Non-Matching Build

**Matching build** (default, `ninja`):
- Compiles all `Matching=True` objects
- Uses original binary for `NonMatching=False` objects
- Runs SHA1 check at end — must match exactly or build fails
- Progress tracking includes "linked" vs "unlinked" code

**Non-matching build** (`python configure.py --non-matching && ninja`):
- Compiles `Matching=True` AND `Equivalent=True` objects
- Skips SHA1 check (line 1536 in `project.py`; default switches to link instead of check)
- Allows modding without matching requirement
- Useful for experimenting or adding new code

## Makefile vs Ninja

**Makefile** (`Makefile`, 247 lines): **Legacy**, kept for compatibility. Uses same tools but simpler rules. Key differences:

- Doesn't use `objdiff` or DTK's C context extraction
- Manual library management vs. auto-generated Ninja
- Slower incremental builds (no precise dependency tracking)
- Still works but `configure.py + ninja` is the canonical build path

**Ninja** (`build.ninja`): **Modern**, auto-generated, incremental-friendly.

If you modify configure.py, just run `python configure.py` again — it regenerates `build.ninja`.

## SHA1 Matching & Verification

**File:** `config/GPVE01/build.sha1`

```
90d328bf8f190c90472e8c19e7e53c6ad0fe0d1a  build/GPVE01/main.dol
```

On a matching build, the Ninja `check` rule (line 1320 in `project.py`) runs:
```
dtk shasum -c config/GPVE01/build.sha1 -o build/GPVE01/ok
```

This verifies the compiled DOL matches the original byte-for-byte. If any object is `NonMatching` or source is missing, the test will fail — unless:
- You used `--non-matching` flag (SHA check skipped, line 1536)
- Object is marked as `Matching` but source differs and is excluded

The SHA is computed from the original `orig/GPVE01/sys/main.dol` extracted via Dolphin.

## Toolchain Components

Each tool is downloaded automatically or can be provided manually:

### MWCC 2.6 (Metrowerks CodeWarrior C/C++)
- **File path:** `build/compilers/GC/2.6/mwcceppc.exe`
- **Role:** Compiles C/C++ with original Metrowerks optimizations
- **Tag:** `config.compilers_tag = "20250812"` (configure.py:149)
- **Wrapper:** On Linux/macOS, `wibo` or `wine` runs the Windows executable

### DTK (Decomp Toolkit)
- **File:** `build/tools/dtk` (or binary)
- **Role:** ELF→DOL conversion, SHA verification, fixup
- **Version:** `config.dtk_tag = "v1.7.5"` (configure.py:150)
- **Commands used:**
  - `dtk elf2dol build/GPVE01/main.elf build/GPVE01/main.dol`
  - `dtk shasum -c config/GPVE01/build.sha1 -o build/GPVE01/ok`
  - `dtk elf fixup build/...` (Gekko-specific relocation fixes)

### Binutils (powerpc-eabi-as, powerpc-eabi-ld)
- **File:** `build/binutils/powerpc-eabi-as`
- **Role:** Assembles hand-written PowerPC `.s` files
- **Version:** `config.binutils_tag = "2.42-1"` (configure.py:148)
- **Flags:** `-mgekko --strip-local-absolute --defsym version=N`

### Sjiswrap
- **File:** `build/tools/sjiswrap.exe`
- **Role:** Pre-processes C/C++ files to handle Shift-JIS encoding in comments/strings
- **Version:** `config.sjiswrap_tag = "v1.2.2"` (configure.py:152)
- **Usage:** `sjiswrap mwcceppc.exe` wraps the compiler

### Wibo (Windows Binary Overlay)
- **File:** `build/tools/wibo`
- **Role:** Minimal Windows PE loader for Linux/macOS, avoids Wine overhead
- **Version:** `config.wibo_tag = "1.0.0-beta.5"` (configure.py:153)
- **Platforms:** Auto-used on Linux x86/ARM, optional on macOS

### Ninja
- **Role:** Parallel build execution
- **Install:** `pip install ninja` or `brew install ninja`

## Per-Version System (GPVE01 / GPVE01_D17)

**Version identifiers** (`configure.py:30–37`):
- `GPVE01_D17` → version_num=0 (USA Demo 17)
- `GPVE01_D18` → version_num=1 (USA Demo 18)
- `GPVJ01` → version_num=2 (Japan Retail)
- `GPVP01` → version_num=3 (PAL Retail)
- `GPVE01` → version_num=4 (USA Retail, default)

### How Versions Are Used

1. **Assembly**: The `--defsym version=N` flag (asflags, line 163) defines a macro for conditional assembly:
   ```asm
   .if version == 0
       # USA Demo 17 specific code
   .endif
   ```

2. **Config files**: Each version has its own directory:
   ```
   config/GPVE01/config.yml          # Symbols, splits for USA Retail
   config/GPVE01/build.sha1          # Expected SHA for USA Retail
   config/GPVE01_D17/config.yml      # Symbols for USA Demo
   ```

3. **C/C++ side**: If needed, use `#if VERNUM == 0` (where `VERNUM` is the `-DVERNUM=` macro), though current codebase doesn't rely on this much.

4. **Build output**: Goes to version-specific subdirectory:
   ```
   build/GPVE01/main.dol              # USA Retail binary
   build/GPVE01_D17/main.dol          # USA Demo binary
   ```

### Adding New Version

1. Extract the new game version to `orig/NEWVERSION/sys/main.dol` via Dolphin
2. Create `config/NEWVERSION/config.yml`, `splits.txt`, `symbols.txt` (from DTK analysis)
3. Create `config/NEWVERSION/build.sha1` with expected SHA
4. Add to `VERSIONS` list in `configure.py:31`
5. Mark objects `Matching`/`NonMatching` per version as needed

## Assembly Files (`asm/` directory)

**Structure:**
```
asm/JSystem/J3D/*.s         # Per-function hand-written assembly
asm/plugProjectYamashitaU/  # Per-module assemblies
...
```

Each `.s` file corresponds to a single function/symbol. The `Object` system looks for assembly overrides:

**In `tools/project.py:1156–1163`**:
If a source file is marked `Matching` but exists in the `asm/` directory with matching path, the assembly version is used instead of the source-compiled version. This allows hand-tuning specific functions without rewriting the whole file.

### Assembly Override Logic

1. Source file compiled → `.o` (if `obj.completed=True`)
2. If assembly exists at `asm/path/to/file.s`:
   - Assemble it → separate `.o`
   - Use **assembly-built object** instead of source-built object
   - Link the assembly-built version

This lets you improve matching at the function level without touching C/C++.

### Macros in Assembly

`asm/*.s` files include `macros.inc` and use version macro:
```asm
.defsym version=4    # From MWCC -defsym flag
```

Example from `asm/JSystem/J3D/J3DCluster.s:1–2`:
```asm
.include "macros.inc"
.section .sdata2, "a"     # 0x80516360 - 0x80520E40
```

## Objdiff Integration

**File:** `objdiff.json` (auto-generated, ~2000 lines)

### What It Does
Loads project metadata into [objdiff](https://github.com/encounter/objdiff) GUI for visual diffing.

### How to Use
1. Install objdiff (download from GitHub Releases)
2. `python3 configure.py && ninja`
3. Open objdiff, set **Project directory** to repo root
4. `objdiff.json` loads automatically
5. Click objects in left sidebar to see asm diffs
6. Modify source → save → objdiff auto-rebuilds (watches `*.cpp`, `*.h`, `configure.py`, etc.)

### Configuration
- **Min version:** 2.0.0-beta.5 (`objdiff.json` line specifies this)
- **Custom make:** Points to `ninja` binary
- **Watch patterns:** `*.c`, `*.cpp`, `*.h`, `configure.py`, `splits.txt`, `symbols.txt`, etc. (line 1576–1596 in `project.py`)
- **Units:** One per compiled object; includes symbol info, progress category

## Command Cheatsheet

### Initial Setup
```bash
# Extract game to orig/GPVE01
python3 configure.py                    # Generate build.ninja for USA Retail
python3 configure.py --version GPVE01_D17  # For USA Demo instead
python3 configure.py --non-matching      # Enable modding (no SHA check)
```

### Building
```bash
ninja                          # Full build, verify SHA
ninja -j4                      # Parallel (4 jobs)
ninja build/GPVE01/main.dol    # Build just the DOL
ninja build/GPVE01/src/Dolphin/Dolphin.a   # Build single library
```

### Single Object
```bash
ninja build/GPVE01/src/JSystem/JStudio/stb.o
```

### Cleaning
```bash
ninja -t clean                 # Clean all outputs
rm -rf build/                  # Full clean
```

### Switch Version
```bash
python3 configure.py --version GPVJ01  # Switch to Japan Retail
ninja                                   # Build Japan version
```

### Non-Matching Build (Modding)
```bash
python3 configure.py --non-matching
ninja                                   # No SHA check; links mod objects
```

### Progress Tracking
```bash
python3 configure.py progress          # Print progress, write progress.json
python3 tools/upload_progress.py -b https://progress.decomp.club/ \
    -p projectPiki -v pikmin2 build/GPVE01/progress.json
```

## Progress Tracking

### Local Progress
**Files:** `tools/calcprogress.py`, `tools/upload_progress.py`

`calcprogress.py` analyzes the linked DOL/ELF and compares against the original:
- **Code:** Counts matching vs. unlinked functions
- **Data:** Counts matching vs. unlinked data sections
- **Output:** `build/GPVE01/progress.json` (consumed by objdiff, web dashboards)

Runs automatically after SHA check (Ninja rule, line 1335 in `project.py`).

### Fancy Progress Display
**Config** (`configure.py:175–180`):
```python
config.progress_code_fancy_frac = 10_000  # "Pokos" (in-game currency)
config.progress_code_fancy_item = "Pokos"
config.progress_data_fancy_frac = 201     # "treasures"
config.progress_data_fancy_item = "treasures"
```

Progress is reported as "X out of Y Pokos complete" rather than percentages.

## Adding a Brand New .cpp File

### Steps

1. **Create source file:**
   ```bash
   mkdir -p src/NewNamespaceU
   # Write src/NewNamespaceU/myfile.cpp
   ```

2. **Add to configure.py** (after finding an appropriate library section or creating one around line 241+):
   ```python
   {
       "lib": "NewNamespaceU",
       "cflags": cflags_pikmin,
       "mw_version": "GC/2.6",
       "progress_category": "game",
       "host": True,
       "objects": [
           Object(Matching, "NewNamespaceU/myfile.cpp"),
       ],
   }
   ```

3. **Add to link order** if needed:
   - If you're modding, add to `link_order_callback` (line 2110 in `configure.py`)
   - The file is auto-linked if in a library that's in `obj_files.mk`
   - Or manually add a new library archive to `UTILITY` in `obj_files.mk`

4. **Regenerate build:**
   ```bash
   python3 configure.py --non-matching
   ninja
   ```

5. **Check linking:**
   ```bash
   ninja build/GPVE01/main.dol
   ```

### Details

- **Library name**: Must be unique; becomes the `.a` filename
- **Matching vs NonMatching**: Use `Matching` if you intend to match the original (shouldn't happen for brand-new files!), or `NonMatching` for modded code
- **Progress category**: Use "game", "jsystem", or "sdk" (defined in `config.progress_categories`)
- **Compiler flags**: Inherits from library; can override per-object with `Object(..., cflags=[...])`
- **objdiff.json**: Auto-updates; objdiff GUI reloads without restarting

## Further Reading

- **Original DTK template:** https://github.com/encounter/dtk-template (pikmin2's tools/project.py is a fork)
- **Decomp methodology:** https://github.com/projectPiki/pikmin2/wiki
- **Objdiff guide:** https://github.com/encounter/objdiff/wiki

