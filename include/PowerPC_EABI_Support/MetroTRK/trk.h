#ifndef _DOLPHIN_TRK_H
#define _DOLPHIN_TRK_H

#include "types.h"
#include "Dolphin/db.h"
#include "PowerPC_EABI_Support/MetroTRK/trktypes.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////// MSG HANDLING FUNCTIONS //////
u32 TRKDoConnect(MessageBuffer*);
u32 TRKDoDisconnect(MessageBuffer*);
u32 TRKDoReset(MessageBuffer*);
u32 TRKDoVersions(MessageBuffer*);
u32 TRKDoSupportMask(MessageBuffer*);
u32 TRKDoOverride(MessageBuffer*);
u32 TRKDoReadMemory(MessageBuffer*);
u32 TRKDoWriteMemory(MessageBuffer*);
u32 TRKDoReadRegisters(MessageBuffer*);
u32 TRKDoWriteRegisters(MessageBuffer*);
u32 TRKDoSetOption(MessageBuffer*);
u32 TRKDoContinue(MessageBuffer*);
u32 TRKDoStep(MessageBuffer*);
u32 TRKDoStop(MessageBuffer*);

void SetBufferPosition(MessageBuffer*, u32);
void SetTRKConnected(u32);
u32 GetTRKConnected(void);

DSError TRKGetFreeBuffer(int*, MessageBuffer**);
////////////////////////////////////

/////// DOLPHIN TRK FUNCTIONS //////
void InitMetroTRK(void);
void InitMetroTRK_BBA(void);
void EnableMetroTRKInterrupts(void);

void TRK_board_display(char*);
////////////////////////////////////

////////// EVENT FUNCTIONS /////////
void TRKDestructEvent(TRKEvent*);
DSError TRKDispatchMessage(MessageBuffer*);
void* TRKGetBuffer(int);
void TRKReleaseBuffer(int);
void TRKGetInput();
BOOL TRKGetNextEvent(TRKEvent*);
////////////////////////////////////

///////// TARGET FUNCTIONS /////////
DSError TRKTargetContinue(void);
DSError TRKTargetInterrupt(TRKEvent*);
BOOL TRKTargetStopped();
void TRKTargetSetStopped(uint);
DSError TRKTargetSupportRequest();
////////////////////////////////////

////// NUB AND MEM FUNCTIONS ///////
DSError TRKAppendBuffer_ui8(MessageBuffer*, u8*, int);
DSError TRKSetBufferPosition(MessageBuffer*, u32);

DSError TRKMessageSend(MessageBuffer*);
void TRKSwapAndGo(void);
DSError TRKWriteUARTN(const void* bytes, u32 length);
DSError TRKInitializeNub(void);
DSError TRKTerminateNub(void);
void TRKNubWelcome(void);
void TRKNubMainLoop(void);

DSError TRKInitializeMutex(void*);
DSError TRKAcquireMutex(void*);
DSError TRKReleaseMutex(void*);
void* TRK_memcpy(void* dst, const void* src, size_t n);
////////////////////////////////////

/////// INITIALIZE FUNCTIONS ///////
DSError TRKInitializeEventQueue();
DSError TRKInitializeMessageBuffers();
DSError TRKInitializeDispatcher();
DSError InitializeProgramEndTrap();
DSError TRKInitializeSerialHandler();
DSError TRKTerminateSerialHandler();
DSError TRKInitializeTarget();
////////////////////////////////////

////////// EXI2 FUNCTIONS //////////
/* EXI2 */
void UnreserveEXI2Port(void);
void ReserveEXI2Port(void);
////////////////////////////////////

/////////// MW FUNCTIONS ///////////
void MWTRACE(u8, char*, ...);
////////////////////////////////////

//////// SUPPORT FUNCTIONS /////////
DSError TRKRequestSend();
////////////////////////////////////

////////// OTHER FUNCTIONS /////////
UARTError InitializeUART(UARTBaudRate baudRate);
DSError TRKInitializeIntDrivenUART(unknown, unknown, unknown, void*);
void usr_put_initialize();
void TRKTargetSetInputPendingPtr(void*);
void SetUseSerialIO(u8);
u8 GetUseSerialIO(void);

DSError TRKTargetAddStopInfo(MessageBuffer*);
void TRKTargetAddExceptionInfo(MessageBuffer*);
////////////////////////////////////

//////// EXTERNAL DECLARES /////////
extern BOOL gTRKBigEndian;
extern void* gTRKInputPendingPtr;
////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
