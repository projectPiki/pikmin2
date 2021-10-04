#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "types.h"

void Pikmin2DefaultMemoryErrorRoutine(void*, u32, s32);
void kando_panic_f(bool, const char*, s32, const char*, ...);
extern void preUserCallback(unsigned short, OSContext*, unsigned long, unsigned long);

struct System {
    // static void assert_fragmentation(char*);
    // void enableCPULockDetector(int);
    // int disableCPULockDetector();
    System();
    ~System();
    void construct();
    // void constructWithDvdAccessFirst();
    // void constructWithDvdAccessSecond();
    // void createRomFont(JKRHeap*);
    // void destroyRomFont();
    // static void createSoundSystem();
    // static void loadSoundResource();
    static void initialize();
    // void loadResourceFirst();
    // void loadResourceSecond();
    int run();
    // static float getTime();
    // void clearOptionBlockSaveFlag();
    // void setOptionBlockSaveFlag();
    // Game::CommonSaveData::Mgr* getPlayCommonData();
    // void dvdLoadUseCallBack(DvdThreadCommand*, IDelegate*);
    // void deleteThreads();
    // JFWDisplay* setCurrentDisplay(JFWDisplay*);
    // u32 clearCurrentDisplay(JFWDisplay*);
    // void beginFrame();
    // void endFrame();
    // void beginRender();
    // void endRender();
    // ERenderMode setRenderMode(ERenderMode);
    // static _GXRenderModeObj* getRenderModeObj();
    // void changeRenderMode(ERenderMode);
    // u32 heapStatusStart(char*, JKRHeap*);
    // void heapStatusEnd(char*);
    // void heapStatusDump(bool);
    // void heapStatusIndividual();
    // void heapStatusNormal();
    // void resetOn(bool);
    // void resetPermissionOn();
    // bool isResetActive();
    // void activeGP();
    // void inactiveGP();
    // bool isDvdErrorOccured();
    // void initCurrentHeapMutex();
    // void startChangeCurrentHeap(JKRHeap*);
    // void endChangeCurrentHeap();
    // void addGenNode(CNode*);
    // void initGenNode();
    // void refreshGenNode();
    // void setFrameRate(int);
    // bool dvdLoadSyncNoBlock(DvdThreadCommand*);
    // int dvdLoadSyncAllNoBlock();

    u8 _00[0x3C];        // _00
    u32* _3C;            // _3C
    u8 _40[0xE0 - 0x40]; // _40
};

#endif