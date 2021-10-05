#ifndef _JSYSTEM_JUTEXCEPTION_H
#define _JSYSTEM_JUTEXCEPTION_H

struct JUTException {
    static void panic_f(char const*, int, char const*, ...);

    static u32* sConsole;
    static u32* sErrorManager;
    static OSMessageQueue sMessageQueue;
};

#endif