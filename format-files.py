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
            if name.lower().endswith(".h") or name.lower().endswith(".cpp"):
                relative_path = os.path.join(dirpath, name)
                print(relative_path)
                launch_no_console("clang-format.exe", [relative_path, "-style=file", "-i"])                

if __name__ == "__main__":
    if os.path.exists("clang-format.exe"):
        format_folders("include/")
        format_folders("src/")
        print("Done formatting!")
    else:
        print("You need to download clang-format and place it in this directory!")
