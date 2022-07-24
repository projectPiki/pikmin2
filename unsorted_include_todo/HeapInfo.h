#ifndef _HEAPINFO_H
#define _HEAPINFO_H

/*
        __vt__8HeapInfo:
        .4byte 0
        .4byte 0
        .4byte update__4NodeFv
        .4byte draw__4NodeFR8Graphics
        .4byte displayInfo__4NodeFi
        .4byte 0
        .4byte 0
        .4byte "@36@__dt__8HeapInfoFv"
        .4byte __dt__8HeapInfoFv
*/

struct Node {
    virtual void update();         // _08
    virtual void draw(Graphics&);  // _0C
    virtual void displayInfo(int); // _10

    // _00 VTBL
};

struct HeapInfo : public Node {
    virtual void _14() = 0;   // _14
    virtual void _18() = 0;   // _18
    virtual void @36 @__dt(); // _1C
    virtual ~HeapInfo();      // _20

    // _00 VTBL
};

#endif
