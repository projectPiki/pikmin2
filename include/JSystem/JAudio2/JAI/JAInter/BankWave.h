#ifndef _JSYSTEM_JAI_JAINTER_BANKWAVE_H
#define _JSYSTEM_JAI_JAINTER_BANKWAVE_H

#include "types.h"

namespace JAInter {
namespace BankWave {
/**
 * Type of elements in initOnCodeBnk.
 * @fabricated
 * @size{0xC}
 */
// struct TCodeBnk {
// 	int* _00; // _00
// 	u32 _04;  // _04
// 	int _08;  // _08
// };
typedef u32 TCodeBnk[3];
/**
 * Type of elements in initOnCodeWs.
 * @fabricated
 * @size{0xC}
 */
// struct TCodeWS {
// 	int* _00; // _00
// 	u32 _04;  // _04
// 	u32 _08;  // _08
// };
typedef u32 TCodeWS[3];
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

extern union Flags {
	u8 asByte;
	struct {
		bool _7 : 1;
		bool _6 : 1;
	} asStruct;
} flags;
extern int SceneSetFlag;

extern InitCallback initCallback;
extern LoadCallback firstLoadCallback;
extern LoadCallback secondLoadCallback;

extern TCodeBnk* initOnCodeBnk;
extern TCodeWS* initOnCodeWs;
extern long* wsGroupNumber;
extern long* wsLoadStatus;
extern int wsMax;
} // namespace BankWave
} // namespace JAInter

#endif
