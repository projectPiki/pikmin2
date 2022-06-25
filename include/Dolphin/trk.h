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

typedef int TRKResult;

void InitMetroTRK(void);
void InitMetroTRK_BBA(void);
void EnableMetroTRKInterrupts(void);

TRKResult TRKTargetContinue(void);
void TRKTargetSetStopped(uint);

TRKResult TRKMessageSend(TRK_Msg*);
void TRKSwapAndGo(void);
TRKResult TRKWriteUARTN(const void* bytes, u32 length);
TRKResult TRKInitializeNub(void);
TRKResult TRKTerminateNub(void);
void TRKNubWelcome(void);
void TRKNubMainLoop(void);

/* EXI2 */
#define EXI2_Init(inputFlagPtr, mtrCallback) DBInitComm(inputFlagPtr, mtrCallback);
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

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
