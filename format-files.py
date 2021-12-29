#   A wrapper meant for automating the format process, using clang-format.
#   This program iterates through the include and src folder, formatting
#   each C(++) file.
#   Axiot / Intns - 2021

import os
import subprocess

def launch_no_console(command, args):
   si = subprocess.STARTUPINFO()
   si.dwFlags |= subprocess.STARTF_USESHOWWINDOW

   return subprocess.Popen([command] + args, startupinfo=si,
                    stderr=subprocess.PIPE, stdout=subprocess.PIPE)

def format_folders(folder_to_iter):
    for dirpath, dirname, files in os.walk(folder_to_iter):
        for name in files:
            if name.lower().endswith(".h") or name.lower().endswith(".cpp") or name.lower().endswith(".c"):
                relative_path = os.path.join(dirpath, name)
                print(relative_path, end="\t")
                launch_no_console("clang-format.exe", [relative_path, "-style=file", "-i"])

                if os.stat(relative_path).st_size < 1:
                   print("")
                   continue

                with open(relative_path, "r+") as f:
                   f.seek(0, 2)
                   f.seek(f.tell() - 1, 0)
                   if f.read() != '\n':
                      f.write("\n");
                      print("added newline", end="")

                print("")

if __name__ == "__main__":
    if os.path.exists("clang-format.exe"):
        format_folders("include/")
        format_folders("src/")
        print("Done formatting!")
    else:
        print("You need to download clang-format and place it in this directory!")
