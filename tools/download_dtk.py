import argparse
import urllib.request
import os
import stat
import platform
from pathlib import Path

REPO = "https://github.com/encounter/decomp-toolkit"


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("tag_file", help="file containing GitHub tag")
    parser.add_argument("output", type=Path, help="output file path")
    args = parser.parse_args()

    with open(args.tag_file, "r") as f:
        tag = f.readline().rstrip()

    uname = platform.uname()
    suffix = ""
    system = uname.system.lower()
    if system == "darwin":
        system = "macos"
    elif system == "windows":
        suffix = ".exe"
    arch = uname.machine.lower()
    if arch == "amd64":
        arch = "x86_64"

    url = f"{REPO}/releases/download/{tag}/dtk-{system}-{arch}{suffix}"
    output = args.output
    # print(f"Downloading {url} to {output}")
    urllib.request.urlretrieve(url, output)

    st = os.stat(output)
    os.chmod(output, st.st_mode | stat.S_IEXEC)


if __name__ == "__main__":
    main()
