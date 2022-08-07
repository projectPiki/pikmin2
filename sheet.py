import subprocess
import sys


def size(func):
    for line in open('pik2.map').readlines():
        if func in line:
            return int(line.split(' ')[3], base=16)


def main():
    filename = sys.argv[1]
    file = open(filename)
    tsv = open('sheet.tsv', 'w')

    rows = []
    in_text_section = False

    for line in file:
        if line.startswith('.section .text'):
            in_text_section = True

        if in_text_section and line.startswith('.global'):
            mangled_name = line.split(' ')[1].replace('"', '').strip()

            for line in open('pikmin2_linker.map').readlines():
                if mangled_name in line:
                    demangled_name = subprocess.Popen(['./demangle.exe', mangled_name],
                                                      stdout=subprocess.PIPE).communicate()[0].strip().decode('utf-8').split('::', 1)[1].replace(' *', '*').replace(' &', '&')
                    linkage = 'Global' if '(func,global)' in line else 'Weak'
                    rows.append('\t'.join([mangled_name, demangled_name, linkage, f'{size(mangled_name):X}', str(size(mangled_name))]))
                    break

        if in_text_section and line.startswith('__sinit'):
            rows.append('\t'.join([line[:-2], line[:-2], 'Local', f'{size(mangled_name):X}', str(size(mangled_name))]))

    for row in rows:
        tsv.write(row + '\n')


if __name__ == '__main__':
    main()
