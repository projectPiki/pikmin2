#ifndef _HEAPINFO_H
#define _HEAPINFO_H

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
