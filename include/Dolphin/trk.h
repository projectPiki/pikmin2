#ifndef _DOLPHIN_TRK_H
#define _DOLPHIN_TRK_H

#include "types.h"
#include "Dolphin/db.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/* TRK */

#define TRK_DISPATCH_CMD_CONNECT        1 /* Connect to the console */
#define TRK_DISPATCH_CMD_DISCONNECT     2 /* Disconnect from the console */
#define TRK_DISPATCH_CMD_RESET          3 /* Reset the debugger */
#define TRK_DISPATCH_CMD_GETVERSION     4 /* Get debugger version */
#define TRK_DISPATCH_CMD_GETSUPPORTMASK 5 /* Get Support Mask */
#define TRK_DISPATCH_CMD_OVERRIDE       7 /* Override? */
#define TRK_DISPATCH_CMD_READMEM        16 /* Reading from memory */
#define TRK_DISPATCH_CMD_WRITEMEM       17 /* Writing to memory */
#define TRK_DISPATCH_CMD_READREGS       18 /* Read a register value */
#define TRK_DISPATCH_CMD_WRITEREGS      19 /* Set a register */
#define TRK_DISPATCH_CMD_SETOPTION      23 /* Set an option? */
#define TRK_DISPATCH_CMD_CONTINUE       24 /* Continue debugging */
#define TRK_DISPATCH_CMD_STEP           25 /* Step through an instruction */
#define TRK_DISPATCH_CMD_STOP           26 /* Stop the debugger */

typedef struct _TRK_Msg {
	u8 _00[8];       // _00
	u32 m_msgLength; // _08
	u32 _0C;         // _0C
	u32 m_msg;       // _10
} TRK_Msg;

/**
 * @size{0xC}
 */
typedef struct TRKEvent {
	int m_eventType;
	int _04;
	int m_bufferIndex;
} TRKEvent;

/**
 * @size{0x28}
 */
typedef struct TRKEventQueue {
	u8 _00[4];
	int m_currEvtID;
	int m_nextSlotToOverwrite;
	TRKEvent m_events[2];
	u32 _24; /* max of 0x100? */
} TRKEventQueue;

/**
 * @size{0xA4}
 */
typedef struct TRKState {
	u32 _00;
	u32 _04;
	u32 _08;
	u32 _0C;
	u32 _10;
	u32 _14;
	u32 _18;
	u32 _1C;
	u32 _20;
	u32 _24;
	u32 _28;
	u32 _2C;
	u32 _30;
	u32 _34;
	u32 _38;
	u32 _3C;
	u32 _40;
	u32 _44;
	u32 _48;
	u32 _4C;
	u32 _50;
	u32 _54;
	u32 _58;
	u32 _5C;
	u32 _60;
	u32 _64;
	u32 _68;
	u32 _6C;
	u32 _70;
	u32 _74;
	u32 _78;
	u32 _7C;
	u32 _80;
	u32 _84;
	u32 _88;
	u32 _8C;
	u32 _90;
	u32 _94;
	BOOL m_isStopped;
	u32 _9C;
	u32 _A0;
	u32 _A4;
	u32 _A8;
	u32 _AC;
} TRKState;

typedef struct TRKBuffer {
	u8 _00[4];
	u32 _04;
	s32 _08;
	u32 _0C;
	u32 _10;
	u8 m_buffer[0x87C]; /* _10 */
} TRKBuffer;
typedef enum { TRKSuccess = 0, TRKError100 = 0x100, TRKError301 = 0x301, TRKError302 = 0x302 } TRKResult;

extern BOOL gTRKBigEndian;

u32 TRKDoConnect(TRKBuffer*);
u32 TRKDoDisconnect(TRKBuffer*);
u32 TRKDoReset(TRKBuffer*);
u32 TRKDoVersions(TRKBuffer*);
u32 TRKDoSupportMask(TRKBuffer*);
u32 TRKDoOverride(TRKBuffer*);
u32 TRKDoReadMemory(TRKBuffer*);
u32 TRKDoWriteMemory(TRKBuffer*);
u32 TRKDoReadRegisters(TRKBuffer*);
u32 TRKDoWriteRegisters(TRKBuffer*);
u32 TRKDoSetOption(TRKBuffer*);
u32 TRKDoContinue(TRKBuffer*);
u32 TRKDoStep(TRKBuffer*);
u32 TRKDoStop(TRKBuffer*);

void InitMetroTRK(void);
void InitMetroTRK_BBA(void);
void EnableMetroTRKInterrupts(void);

void TRKDestructEvent(TRKEvent*);
TRKResult TRKDispatchMessage(TRKBuffer*);
void* TRKGetBuffer(int);
void TRKReleaseBuffer(int);
void TRKGetInput();
BOOL TRKGetNextEvent(TRKEvent*);

TRKResult TRKTargetContinue(void);
TRKResult TRKTargetInterrupt(TRKEvent*);
BOOL TRKTargetStopped();
void TRKTargetSetStopped(uint);
TRKResult TRKTargetSupportRequest();

TRKResult TRKAppendBuffer_ui8(TRKBuffer*, u8*, int);
TRKResult TRKSetBufferPosition(TRKBuffer*, u32);

TRKResult TRKMessageSend(TRK_Msg*);
void TRKSwapAndGo(void);
TRKResult TRKWriteUARTN(const void* bytes, u32 length);
TRKResult TRKInitializeNub(void);
TRKResult TRKTerminateNub(void);
void TRKNubWelcome(void);
void TRKNubMainLoop(void);

TRKResult TRKInitializeMutex(void*);
TRKResult TRKAcquireMutex(void*);
TRKResult TRKReleaseMutex(void*);
void* TRK_memcpy(void* dst, const void* src, size_t n);

TRKResult TRKInitializeEventQueue();
TRKResult TRKInitializeMessageBuffers();
TRKResult TRKInitializeDispatcher();
TRKResult InitializeProgramEndTrap();
TRKResult TRKInitializeSerialHandler();
TRKResult TRKInitializeTarget();

/* EXI2 */
void UnreserveEXI2Port(void);
void ReserveEXI2Port(void);

/* MW */
void MWTRACE(u8, char*, ...);

/* UART */
typedef int UARTError;

enum {
	kUARTNoError = 0,
	kUARTUnknownBaudRate,
	kUARTConfigurationError,
	kUARTBufferOverflow, /* specified buffer was too small */
	kUARTNoData          /* no data available from polling */
};

typedef enum {
	kBaudHWSet  = -1,  /* use HW settings such as DIP switches */
	kBaud300    = 300, /* valid baud rates */
	kBaud600    = 600,
	kBaud1200   = 1200,
	kBaud1800   = 1800,
	kBaud2000   = 2000,
	kBaud2400   = 2400,
	kBaud3600   = 3600,
	kBaud4800   = 4800,
	kBaud7200   = 7200,
	kBaud9600   = 9600,
	kBaud19200  = 19200,
	kBaud38400  = 38400,
	kBaud57600  = 57600,
	kBaud115200 = 115200,
	kBaud230400 = 230400
} UARTBaudRate;

UARTError InitializeUART(UARTBaudRate baudRate);
TRKResult TRKInitializeIntDrivenUART(unknown, unknown, unknown, void*);
void usr_put_initialize();
void TRKTargetSetInputPendingPtr(void*);
extern void* gTRKInputPendingPtr;

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
