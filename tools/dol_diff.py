from sys import argv

def nextU32(f):
    dat = f.read(4)
    return int.from_bytes(dat, 'big')

with open(argv[1], 'rb') as dol:
    offsets = [nextU32(dol) for i in range(18)]
    addresses = [nextU32(dol) for i in range(18)]
    sizes = [nextU32(dol) for i in range(18)]

    target = int(argv[2], 16)

    for i in range(0, 0x18):
        offset = offsets[i]
        size = sizes[i]
        if offset <= target < offset + size:
            section = i
            delta = target - offset
            break
    
    print(hex(addresses[section] + delta))
