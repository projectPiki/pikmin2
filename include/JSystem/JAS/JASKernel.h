#ifndef _JSYSTEM_JAS_JASKERNEL_H
#define _JSYSTEM_JAS_JASKERNEL_H

#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASProbe.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

namespace JASKernel {
void setupRootHeap(JKRSolidHeap*, unsigned long);
JKRExpHeap* getSystemHeap();
JASHeap* getCommandHeap();
JASHeap* getAramHeap();
void setupAramHeap(unsigned long, unsigned long);

void probeFinish(long);
void probeStart(long, char*);

// unused/inlined:
void getRootHeap();
int getAramFreeSize();
int getAramSize();
void initProbe(long);
void resetProbe();
const char* getProbeName(long);
void getProbeLast(long);
void getProbeAvg(long);
void getProbeTotalAvg(long);
void getProbeMax(long);

static JKRExpHeap* sSystemHeap;
static JASHeap* sCommandHeap;
static JASHeap* audioAramHeap;

}; // namespace JASKernel

#endif
