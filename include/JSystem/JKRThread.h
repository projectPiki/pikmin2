#ifndef _JSYSTEM_JKRTHREAD_H
#define _JSYSTEM_JKRTHREAD_H

#include "types.h"

struct JKRThread {
    JKRThread(unsigned long, int, int);

    virtual ~JKRThread();
    virtual void run();
};

#endif