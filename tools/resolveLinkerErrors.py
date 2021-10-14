#!/usr/bin/env python3

# very experimental python script that goes through a linker error file and resolves any undefined labels while splitting

with open("errors.txt", "r") as f:
	lines = f.readlines()
    
lbls = []

undefcount = 0
 
for line in lines:
    if "undefined" in line:
        undefcount = undefcount + 1
        splitLine = line.split(" ")
    
        for spl in splitLine:
            if spl.startswith("\'lbl_"):
                localstr = spl.strip("\n")
                localstr = localstr.strip("\'lbl_")
                lbls.append(localstr)
                
with open("asm/utilityU/menu.s", "r") as asm:
    asms = asm.readlines()

prevLine = ""
output = []

for l in asms:
    l = l.strip("\n")

    for lbl in lbls:
        if l.startswith("/* " + lbl):
            output.append("lbl_" + lbl + ":\n")

        #if prevLine.startswith("func_"):
        #    prevLine = l
        #    output.append(l + "\n")
        #    continue
        #else:
        #    for lbl in lbls:
        #        lstr = l.strip(":")
        #        if lstr == lbl:
        #            output.append(f".global {lbl}\n")
        #            prevLine = l
        #            break

    output.append(l + "\n")
    prevLine = l
    
with open("output.asm", "w") as w:
    for o in output:
        w.write(o)
