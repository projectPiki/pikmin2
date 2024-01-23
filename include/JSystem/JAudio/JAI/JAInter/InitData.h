#ifndef _JSYSTEM_JAI_JAINTER_INITDATA_H
#define _JSYSTEM_JAI_JAINTER_INITDATA_H

#include "types.h"
namespace JAInter {
namespace InitData {
typedef void (*InitCallback)(u32*);

BOOL checkInitDataFile();
void checkInitDataOnMemory();
void initBnkList(u32*);
void initWsList(u32*);
void setBnkInitCallback(void (*)(u32*));
void setWsInitCallback(void (*)(u32*));

extern InitCallback wsInitCallback;
extern InitCallback bnkInitCallback;
extern u32* aafPointer;
} // namespace InitData
} // namespace JAInter

#endif
