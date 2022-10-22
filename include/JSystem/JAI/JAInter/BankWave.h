#ifndef _JSYSTEM_JAI_JAINTER_BANKWAVE_H
#define _JSYSTEM_JAI_JAINTER_BANKWAVE_H

#include "types.h"

namespace JAInter {
namespace BankWave {
typedef void LoadCallback();
typedef void InitCallback();
void finishSceneSet(u32);
void init();
void loadFirstStayWave();
void loadGroupWave(long, long);
void loadSecondStayWave();
void setFirstLoadCallback(LoadCallback*);
void setInitCallback(InitCallback*);
void setSecondLoadCallback(LoadCallback*);

static const InitCallback* initCallback       = init;
static const LoadCallback* firstLoadCallback  = loadFirstStayWave;
static const LoadCallback* secondLoadCallback = loadSecondStayWave;
} // namespace BankWave
} // namespace JAInter

#endif
