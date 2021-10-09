#ifndef _JSYSTEM_JKRHEAP_H
#define _JSYSTEM_JKRHEAP_H

struct JKRHeap {
    u32 getFreeSize();
    u32 getTotalFreeSize();

    void free(void*, JKRHeap*);
};

void* operator new(size_t, JKRHeap*, int);

#endif