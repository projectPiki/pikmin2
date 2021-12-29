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
        .4byte 0
*/

struct Node {
    virtual void update();         // _00
    virtual void draw(Graphics&);  // _04
    virtual void displayInfo(int); // _08

    // _00 VTBL
};

struct HeapInfo : public Node {
    virtual void update();         // _00
    virtual void draw(Graphics&);  // _04
    virtual void displayInfo(int); // _08
    virtual void _0C() = 0;        // _0C
    virtual void _10() = 0;        // _10
    virtual void @36 @__dt();      // _14
    virtual ~HeapInfo();           // _18
    virtual void _1C() = 0;        // _1C

    // _00 VTBL
};

#endif
