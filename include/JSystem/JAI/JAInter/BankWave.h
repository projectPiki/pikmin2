#ifndef _JSYSTEM_JAI_JAINTER_BANKWAVE_H
#define _JSYSTEM_JAI_JAINTER_BANKWAVE_H

namespace JAInter {
namespace BankWave {
void finishSceneSet(u32);
void init();
void loadFirstStayWave();
void loadGroupWave(long, long);
void loadSecondStayWave();
void setFirstLoadCallback(void (*)(u32*));
void setInitCallback(void (*)(u32*));
void setSecondLoadCallback(void (*)(u32*));
} // namespace BankWave
} // namespace JAInter

#endif