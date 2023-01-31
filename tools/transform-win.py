#!/usr/bin/env python3
import argparse

def import_d_file(in_file) -> str:
    out_text = ''

    with open(in_file) as file:
      for idx, line in enumerate(file):
          if idx != 0:
            path_found_pos = line.find("include")
            line = "\t" + line[path_found_pos:]
            if line.endswith(' \\\n'):
              out_text += line[:-3].replace('\\', '/') + " \\\n"
            else:
              out_text += line.replace('\\', '/')
          else:
            if line.endswith(' \\\n'):
              out_text += line[:-3].replace('\\', '/') + " \\\n"
            else:
              out_text += line.replace('\\', '/')

    return out_text

def main():
    parser = argparse.ArgumentParser(
        description="""Transform a .d file from Wine paths to normal paths"""
    )
    parser.add_argument(
        "d_file",
        help="""Dependency file in""",
    )
    parser.add_argument(
        "d_file_out",
        help="""Dependency file out""",
    )
    args = parser.parse_args()

    output = import_d_file(args.d_file)

    with open(args.d_file_out, "w", encoding="UTF-8") as f:
        f.write(output)


if __name__ == "__main__":
    main()
