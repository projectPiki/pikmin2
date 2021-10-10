#ifndef _NODE_H
#define _NODE_H

#include "Graphics.h"
#include "types.h"

struct Node {
    f32 m_radius;     // _00
    Node* m_previous; // _04
    Node* m_next;     // _08
    Node* m_current;  // _0C
    u32 m_flags;      // _10

    Node* init();
    void displayInfo(int);
    void update();
    void draw(Graphics&);
};

#endif
