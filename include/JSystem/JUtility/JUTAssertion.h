#ifndef _JSYSTEM_JUT_JUTASSERTION_H
#define _JSYSTEM_JUT_JUTASSERTION_H

#include "types.h"

namespace JUTAssertion {
void create();
void flushMessage();
void flushMessage_dbPrint();
void setMessageCount(int messageCount);

// unused/inlined:
u32 flush_subroutine();
void getSDevice();
void setConfirmMessage(unsigned long, char*, int, bool, const char*);
void showAssert_f(unsigned long, const char*, int, const char*, ...);
void checkAssert(unsigned long, char*, int, bool, const char*);
void setWarningMessage_f(unsigned long, char*, int, const char*, ...);
void setLogMessage_f(unsigned long, char*, int, const char*, ...);
void changeDisplayTime(unsigned long);
void changeDevice(unsigned long);
void setVisible(bool);
void getVisible();
void setDeviceSynchro(bool);

} // namespace JUTAssertion

#endif
