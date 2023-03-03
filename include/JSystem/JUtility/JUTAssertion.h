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
void setConfirmMessage(u32, char*, int, bool, const char*);
void showAssert_f(u32, const char*, int, const char*, ...);
void checkAssert(u32, char*, int, bool, const char*);
void setWarningMessage_f(u32, char*, int, const char*, ...);
void setLogMessage_f(u32, char*, int, const char*, ...);
void changeDisplayTime(u32);
void changeDevice(u32);
void setVisible(bool);
void getVisible();
void setDeviceSynchro(bool);

} // namespace JUTAssertion

#endif
