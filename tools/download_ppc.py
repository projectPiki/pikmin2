import urllib.request
import os
import stat
import platform
import shutil
import tempfile
import tarfile
import zstandard

if sys.platform == "cygwin":
    sys.exit(
        f"Cygwin/MSYS2 is not supported."
        f"\nPlease use native Windows Python instead."
        f"\nPlease run pacman -R python in msys2."
        f"\n(Current path: {sys.executable})"
    )

# TODO: Less hardcoded elements
REPO = "https://wii.leseratte10.de/devkitPro/devkitPPC/r44%20%282023-08-07%29/"


def main() -> None:
    output = f"{os.path.dirname(__file__)}/devkitPPC"

    uname = platform.uname()
    system = uname.system.lower()
    arch = uname.machine.lower()
    if system == "darwin":
        system = "osx"
    if arch == "amd64":
        arch = "x86_64"
    if arch == "x86_32" and system == "windows":
        system = "win32"
        arch = "1686"
    if arch in ["armv8", "arm64v8", "aarch64"]:
        arch = "aarch64"

    with tempfile.TemporaryDirectory() as tmp:
        tmp_zst = f"{tmp}/tmp.tar.zst"
        tmp_tar = f"{tmp}/tmp.tar"
        tmp_dir = f"{tmp}/tmp"
        tmp_ppc = f"{tmp_dir}/opt/devkitpro/devkitPPC"

        request = urllib.request.Request(
            url=f"{REPO}/devkitPPC-r44.2-2-{system}_{arch}.pkg.tar.zst",
            headers={"User-Agent": "Mozilla/5.0"},
        )

        with urllib.request.urlopen(request) as src, open(tmp_zst, "wb") as dst:
            shutil.copyfileobj(src, dst)

        with open(tmp_zst, "rb") as src, open(tmp_tar, "wb") as dst:
            zstandard.ZstdDecompressor().copy_stream(src, dst)

        with tarfile.open(tmp_tar) as src:
            src.extractall(tmp_dir)

        shutil.move(tmp_ppc, output)

    st = os.stat(output)
    os.chmod(output, st.st_mode | stat.S_IEXEC)


if __name__ == "__main__":
    main()
