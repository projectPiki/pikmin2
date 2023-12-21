import urllib.request
import sys
import os
import stat
import tempfile
import shutil
import zipfile

if sys.platform == "cygwin":
    sys.exit(
        f"Cygwin/MSYS2 is not supported."
        f"\nPlease use native Windows Python instead."
        f"\nPlease run pacman -R python in msys2."
        f"\n(Current path: {sys.executable})"
    )

HARDLINK = "https://files.decomp.dev/compilers_20230715.zip"


def main() -> None:
    output = f"{os.path.dirname(__file__)}/mwcc_compiler"

    with tempfile.TemporaryDirectory() as tmp_dir:
        tmp_zip = f"{tmp_dir}/mwcc_compiler.zip"
        tmp_gc = f"{tmp_dir}/GC"

        request = urllib.request.Request(
            url=HARDLINK,
            headers={"User-Agent": "Mozilla/5.0"},
        )

        with urllib.request.urlopen(request) as src, open(tmp_zip, "wb") as dst:
            shutil.copyfileobj(src, dst)

        with zipfile.ZipFile(tmp_zip) as zip_file:
            zip_file.extractall(tmp_dir)

        shutil.move(tmp_gc, output)

    st = os.stat(output)
    os.chmod(output, st.st_mode | stat.S_IEXEC)


if __name__ == "__main__":
    main()
