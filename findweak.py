import os
import re
import subprocess
import itertools
import sys

maps_folder = f"build/pikmin2.usa"
assert os.path.isdir(maps_folder)

weak_funcs = set()
weak_objects = set()

for file_name in os.listdir(maps_folder):
  if not file_name.endswith(".MAP"):
    continue
  file_path = os.path.join(maps_folder, file_name)
  with open(file_path) as f:
    for line in f.readlines():
      line = line.strip()
      if line == "Link map of __start":
        continue
      if line.startswith(">>> SYMBOL NOT FOUND: "):
        continue
      if line.count(">>> UNREFERENCED DUPLICATE "):
        continue
      if line.endswith(" found as linker generated symbol"):
        continue
      if not line:
        continue
      if line == ".init section layout":
        break
      
      #print(line)
      match = re.search(r"^\d+\] (\S+) \((func|object|notype|section),(weak|global|local)\) found in (\S+) (\S+)", line)
      assert match
      mangled_symbol = match.group(1)
      symbol_type = match.group(2)
      symbol_modifier = match.group(3)
      if symbol_type == "section" and mangled_symbol.startswith("."):
        continue
      if symbol_type == "notype" and mangled_symbol.startswith("..."):
        continue
      if re.search(r"^@\d+$", mangled_symbol):
        continue
      if mangled_symbol in ["_prolog", "_epilog", "_unresolved", "__register_global_object", "__global_destructor_chain", "__destroy_global_chain_reference", "__destroy_global_chain", "sqrt", "fabs"]:
        continue
      if mangled_symbol == "@stringBase0":
        continue
      if re.search(r"^\S+\$\d+$", mangled_symbol): # e.g. init$4571, touch_work$4569
        continue
      if mangled_symbol.startswith("g_profile_"):
        continue
      if mangled_symbol.startswith("__sinit_"):
        continue
      if inheritance_match := re.search(r"^@\d+@(\S+)$", mangled_symbol):
        mangled_symbol = inheritance_match.group(1)
      
      #print(repr(mangled_symbol), symbol_type, symbol_modifier)
      
      if symbol_modifier != "weak":
        continue
      if symbol_type == "func":
        weak_funcs.add(mangled_symbol)
      elif symbol_type == "object":
        weak_objects.add(mangled_symbol)
with open("weak_funcs_built.txt", "w") as f:
  for mangled_symbol in weak_funcs:
    f.write(mangled_symbol + "\n")
with open("weak_objects_built.txt", "w") as f:
  for mangled_symbol in weak_objects:
    f.write(mangled_symbol + "\n")
