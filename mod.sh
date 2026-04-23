#!/usr/bin/env bash
# Build the mod DOL and install it over orig/GPVE01/sys/main.dol so Dolphin
# (scanning the orig/ folder) picks up the latest mod build. The retail DOL
# is preserved as main.dol.retail for the build splitter (see config.yml).
set -euo pipefail

cd "$(dirname "$0")"
ninja "$@"
cp -f build/GPVE01/main.dol orig/GPVE01/sys/main.dol
echo "deployed: orig/GPVE01/sys/main.dol (modded, $(sha1sum build/GPVE01/main.dol | awk '{print $1}'))"
