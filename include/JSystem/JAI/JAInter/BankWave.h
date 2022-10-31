#ifndef _JSYSTEM_JAI_JAINTER_BANKWAVE_H
#define _JSYSTEM_JAI_JAINTER_BANKWAVE_H

#include "types.h"

namespace JAInter {
namespace BankWave {
typedef void (*LoadCallback)();
typedef void (*InitCallback)();
typedef void (*SceneSetFinishCallback)(long, long);
void finishSceneSet(u32);
void init();
void loadFirstStayWave();
void loadGroupWave(long, long);
void loadSecondStayWave();
void setFirstLoadCallback(LoadCallback);
void setInitCallback(InitCallback);
void setSecondLoadCallback(LoadCallback);

// unused/inlined:
void setWsGroupNumber(long, long);
void setWsLoadStatus(long, long);
long getWsGroupNumber(long);
long getWsLoadStatus(long);
void readInitSoundData();
void setSceneSetFinishCallback(SceneSetFinishCallback);
void loadSceneWave(long, long);
void checkSceneWaveOnMemory(long, long);
long getWaveGroupNumber(long);
long getWaveLoadStatus(long);
void checkAllWaveLoadStatus();

static const InitCallback initCallback       = init;
static const LoadCallback firstLoadCallback  = loadFirstStayWave;
static const LoadCallback secondLoadCallback = loadSecondStayWave;

extern void* initOnCodeBnk;
extern void* initOnCodeWs;
extern int* wsGroupNumber;
extern void* wsLoadStatus;
extern int wsMax;
} // namespace BankWave
} // namespace JAInter

#endif
