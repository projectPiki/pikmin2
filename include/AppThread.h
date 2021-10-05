#ifndef _APPTHREAD_H
#define _APPTHREAD_H

#include "JSystem/JKRThread.h"

struct AppThread : public JKRThread {
    AppThread(unsigned long, int, int);
    virtual ~AppThread();
};

#endif