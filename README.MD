Pikmin 2  
[![Build Status]][actions] [![Code Progress]][progress] [![Data Progress]][progress] [![Linked Progress]][progress] [![Discord Badge]][discord]
=============

[Build Status]: https://github.com/projectPiki/pikmin2/actions/workflows/build.yml/badge.svg
[actions]: https://github.com/projectPiki/pikmin2/actions/workflows/build.yml
[Code Progress]: https://decomp.dev/projectPiki/pikmin2.svg?mode=shield&measure=code&label=Code&category=all
[Data Progress]: https://decomp.dev/projectPiki/pikmin2.svg?mode=shield&measure=data&label=Data&category=all
[Linked Progress]: https://decomp.dev/projectPiki/pikmin2.svg?mode=shield&measure=complete_code&label=Linked%20Code&category=all
[Discord Badge]: https://img.shields.io/discord/933849697485983765?color=%237289DA&logo=discord&logoColor=%23FFFFFF
[discord]: https://discord.gg/CWKqYMePX8
[progress]: https://decomp.dev/projectPiki/pikmin2

A work-in-progress decompilation of Pikmin 2.

Supported versions:

- `GPVE01`: USA Retail
- `GPVE01_D17`: USA Demo 17

Index
-----

- [Dependencies](#dependencies)
  - [Windows](#windows)
  - [macOS](#macos)
  - [Linux](#linux)
- [Building](#building)
- [Diffing](#diffing)
- [Modding](#modding)

Dependencies
------------

### Windows

On Windows, it's **highly recommended** to use native tooling. WSL or msys2 are **not** required.  
When running under WSL, [objdiff](#diffing) is unable to get filesystem notifications for automatic rebuilds.

- Install [Python](https://www.python.org/downloads/) and add it to `%PATH%`.
  - Also available from the [Windows Store](https://apps.microsoft.com/store/detail/python-311/9NRWMJP3717K).
- Download [ninja](https://github.com/ninja-build/ninja/releases) and add it to `%PATH%`.
  - Quick install via pip: `pip install ninja`

### macOS

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages):

  ```sh
  brew install ninja
  ```

- Install [wine-crossover](https://github.com/Gcenx/homebrew-wine):

  ```sh
  brew install --cask --no-quarantine gcenx/wine/wine-crossover
  ```

After OS upgrades, if macOS complains about `Wine Crossover.app` being unverified, you can unquarantine it using:

```sh
sudo xattr -rd com.apple.quarantine '/Applications/Wine Crossover.app'
```

### Linux

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages).
- For non-x86(_64) platforms: Install wine from your package manager.
  - For x86(_64), [wibo](https://github.com/decompals/wibo), a minimal 32-bit Windows binary wrapper, will be automatically downloaded and used.

Building
--------

- Clone the repository:

  ```sh
  git clone https://github.com/projectPiki/pikmin2.git
  ```

- Using [Dolphin Emulator](https://dolphin-emu.org/), extract your game's system data to `orig/GPVE01`. (Or `orig/GPVE01_D17` for demo)
  - Right-click the game in Dolphin's game list and select `Properties`.
  - Go to the `Filesystem` tab and right-click `Disc` -> `Extract System Data`.
![Dolphin filesystem extract](assets/dolphin-extract.png)
  - After extraction, the following file should exist: `orig/GPVE01/sys/main.dol`.
- Configure:

  ```sh
  python configure.py
  ```

  To use the demo version, add `--version GPVE01_D17`. Add `--help` to see all available options.
- Build:

  ```sh
  ninja
  ```

Diffing
-------

Once the initial build succeeds, an `objdiff.json` should exist in the project root.

Download the latest release from [encounter/objdiff](https://github.com/encounter/objdiff). Under project settings, set `Project directory`. The configuration should be loaded automatically.

Select an object from the left sidebar to begin diffing. Changes to the project will rebuild automatically: changes to source files, headers, `configure.py`, `splits.txt` or `symbols.txt`.

![objdiff project configuration](assets/objdiff.png)

Modding
-------

To enable modding, run `configure.py` with the `--non-matching` flag:

```sh
python configure.py --non-matching
```

This:

- Disables final hash verification.
- Builds all assembly files in `asm`.
- Builds all source files marked as `Matching` and `Equivalent` in `configure.py`.

To add new source files to the DOL:

- Uncomment the final `"lib": "moddingU"` bracket in `configure.py` - change the name to whatever you like, and feel free to add more than one new lib using this as a template.
- Add any new files along with their paths as `Object(Matching, folder/file.cpp)` where indicated.
- Within the `link_order_callback` function below the object configuration, uncomment and add each new file with its path within `src`, as indicated.

Once built with `ninja`, the new DOL will exist at `build/GPVE01/main.dol`.
