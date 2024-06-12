from pathlib import (Path, PurePosixPath)
import argparse

PROJECT_NAME = "pikmin2.usa"


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument("src_file", type=str, help="file to link/unlink")
    link_group = parser.add_mutually_exclusive_group(required=True)
    link_group.add_argument("-l", "--link", help="link", action="store_false", dest="unlink")
    link_group.add_argument("-ul", "--unlink", help="unlink", action="store_true", dest="unlink")

    args = parser.parse_args()

    provided_filename = Path(args.src_file)
    unlink = args.unlink

    if not provided_filename.exists():
        print("FAIL: Provided source file does not exist. Make sure this was run from the root of the project.")
        return 1
    if not provided_filename.parts[0] == "src":
        print("FAIL: We only accept relative paths that start with \"src\". Make sure this was run from the root of the project.")
        return 1
        
    modify_makefile(provided_filename, unlink)
    modify_ninja(provided_filename, unlink)
    modify_o_file(provided_filename, unlink)
    delete_source_file(provided_filename, unlink)

    return 0


def modify_makefile(whole_file_path:Path, unlink:bool):

    # grab the containing folder
    containing_folder = whole_file_path.parent
    
    # assume makefile is in the same folder as the file we're running
    makefile_to_modify = containing_folder / "Makefile"
    
    if not makefile_to_modify.exists():
        print(f"Unable to modify makefile: {makefile_to_modify}")
        return
    
    # turn the path into a unix-based path, and replace the extension with .o
    part_to_change = PurePosixPath(whole_file_path.with_suffix(".o"))

    # remove the "src" path at the beginning and change it to "asm"
    part_to_change_to = PurePosixPath("asm") / PurePosixPath(*part_to_change.parts[1:])
    
    # swap asm/src if we're linking
    if not unlink:
        part_to_change, part_to_change_to = part_to_change_to, part_to_change

    whole_makefile = makefile_to_modify.read_text()

    # find the file we're (un)linking
    if str(part_to_change) not in whole_makefile:
        print(f"Unable to find \"{part_to_change}\" in makefile: \"{makefile_to_modify}\"")
        return

    print(f"Changing \"{part_to_change}\" to \"{part_to_change_to}\" in makefile \"{makefile_to_modify}\"")
    # just replace the string
    whole_makefile = whole_makefile.replace(str(part_to_change), str(part_to_change_to))
    makefile_to_modify.write_text(whole_makefile)

    return


def modify_ninja(whole_file_path:Path, unlink:bool):
    containing_folder = whole_file_path.parent
    file_without_extension =  whole_file_path.stem

    # make sure we can find "libs.json", i.e. this was run in the root of the project
    ninja_configure_to_modify = Path("libs.json")
    
    if not ninja_configure_to_modify.exists():
        print(f"Unable to modify \"{ninja_configure_to_modify}\" in root directory. Make sure this command was run from the root of the project.")
        return
    
    # remove the "src" folder from path, and remove any extension
    part_to_change = PurePosixPath(*containing_folder.parts[1:]) / PurePosixPath(file_without_extension)

    whole_configure = ninja_configure_to_modify.read_text()

    # wrap the file in quotes, cuz that's how it'll appear in the config file
    entry = f"\"{part_to_change}\""

    # count how many times it appears in the configure.py file
    entry_count = whole_configure.count(entry)

    # make sure it only appears once
    if entry_count <= 0:
        print(f"Unable to find {entry} file in \"{ninja_configure_to_modify}\".")
        return
    elif entry_count > 1:
        print(f"Too many matches of {entry} in \"{ninja_configure_to_modify}\", unable to edit.")
        return

    # get the "True" or "False" of (un)linking
    to_change = str(unlink).lower()
    to_change_to = str(not unlink).lower()

    # offset to after the file is located in the configure.py file
    offset = whole_configure.find(entry) + len(entry)

    # substring the entry, we want to find the next instance of `to_change` bool
    sub_conf = whole_configure[offset:]
    # cap it at the next closing brace, this should limit our find to be the correct next bool
    linking_status_found = sub_conf.find(to_change, 0, sub_conf.find("]"))

    # if we didn't find the bool we're looking for
    if linking_status_found < 0:
        print(f"Unable to find \"{to_change}\" for {entry} in {ninja_configure_to_modify}")
        return

    print(f"Changing linking of {entry} from \"{to_change}\" to \"{to_change_to}\" in \"{ninja_configure_to_modify}\"")

    offset += linking_status_found

    # string manipulation to replace the bool with our new bool
    new_configure = whole_configure[:offset] + to_change_to + whole_configure[offset + len(to_change):]
    
    ninja_configure_to_modify.write_text(new_configure)

    return


def modify_o_file(whole_file_path:Path, unlink:bool):
    # if we're linking, no need to copy over o files, exit
    if not unlink:
        return
    
    # replace the end with a .o extension
    o_file_path = whole_file_path.with_suffix(".o")

    # turn those into asm and src folders in the build directory
    asm_file_path = Path(f"build/{PROJECT_NAME}/asm") / Path(*o_file_path.parts[1:])
    src_file_path = Path(f"build/{PROJECT_NAME}/src") / Path(*o_file_path.parts[1:])

    # make sure the source exists, and the asm does not
    if not src_file_path.exists():
        print(f"Unable to find source file to copy: {src_file_path}")
        return
    elif asm_file_path.exists():
        print(f"Destination file already exists: {asm_file_path}")
        return

    print(f"Copying \"{src_file_path}\" to \"{asm_file_path}\"")

    # if the directory is long gone, make the directory, otherwise it's fine
    asm_file_path.parent.mkdir(parents=True, exist_ok=True)
    asm_file_path.write_bytes(src_file_path.read_bytes())

    return


def delete_source_file(whole_file_path:Path, unlink:bool):
    # no need to delete source files if we're unlinking
    if unlink:
        return
    
    # replace the extension with ".s"
    whole_file_path = whole_file_path.with_suffix(".s")
    # remove the "src" root folder, and add "asm"
    asm_file_path = Path("asm") / Path(*whole_file_path.parts[1:])

    # make sure we can delete it
    if not asm_file_path.exists():
        print(f"Unable to locate asm source file to delete: \"{asm_file_path}\"")
        return

    print(f"Deleting source asm file: \"{asm_file_path}\"")

    asm_file_path.unlink()

    return


if __name__ == "__main__": exit(main())