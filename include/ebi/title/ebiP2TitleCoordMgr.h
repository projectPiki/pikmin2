#ifndef _EBI_P2TITLECOORDMGR_H
#define _EBI_P2TITLECOORDMGR_H

// this needs cleanup; it's a ghidra export
#include "types.h"

template <typename T> struct Parm {
};

template <> struct Parm<float> {
	// TODO: Fill
};

/*struct TCoordMgr {
    pointer* __vt;
    struct CNode* child;
    struct CNode* parent;
    struct CNode* owner;
    struct CNode* head;
    char* name;
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    undefined field_0x20;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    undefined field_0x28;
    undefined field_0x29;
    undefined field_0x2a;
    undefined field_0x2b;
    struct Vector2 a500Vector2_0x2c[500];
    undefined field_0xfcc;
    undefined field_0xfcd;
    undefined field_0xfce;
    undefined field_0xfcf;
    undefined field_0xfd0;
    undefined field_0xfd1;
    undefined field_0xfd2;
    undefined field_0xfd3;
    char* name_0xfd4;
    struct Parm<float> tga0;
    struct Parm<float> tga1;
    struct Parm<float> tga2;
    struct Parm<float> tga3;
    undefined field_0x1078;
    undefined field_0x1079;
    undefined field_0x107a;
    undefined field_0x107b;
};

struct BaseParm__vt {
    pointer __vt;
    pointer field_0x4;
    pointer field_0x8;
    void (*write)(void*, struct Stream*);
    void (*read)(void*, struct Stream*);
};*/
#endif