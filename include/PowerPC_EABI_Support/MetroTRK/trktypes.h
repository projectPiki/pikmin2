#ifndef _METROTRK_TRKTYPES_H
#define _METROTRK_TRKTYPES_H

#include "types.h"
#include "Dolphin/OS/OSInterrupt.h"
#include "PowerPC_EABI_Support/MetroTRK/trkenum.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/////// TRK STRUCTS AND TYPES //////
// Function types for DB communications.
typedef int (*DBCommFunc)();
typedef int (*DBCommInitFunc)(void*, __OSInterruptHandler);
typedef int (*DBCommReadFunc)(u8*, int);
typedef int (*DBCommWriteFunc)(const u8*, int);

// Message buffer ID type.
typedef int MessageBufferID;

// Nub event ID type.
typedef u32 NubEventID;

// UART Error type.
typedef int UARTError;

// Size of message buffer.
#define TRKMSGBUF_SIZE (0x800 + 0x80)

// Struct for sending and receiving messages (size 0x88C).
typedef struct MessageBuffer {
	BOOL isInUse;            // _00
	u32 _04;                 // _04, might be swapped with _00
	u32 length;              // _08
	u32 position;            // _0C
	u8 data[TRKMSGBUF_SIZE]; // _0C
} MessageBuffer;

// Struct for storing DB communication functions (size 0x28).
typedef struct DBCommTable {
	DBCommInitFunc initialize_func;  // _00
	DBCommFunc init_interrupts_func; // _04
	DBCommFunc shutdown_func;        // _08
	DBCommFunc peek_func;            // _0C
	DBCommReadFunc read_func;        // _10
	DBCommWriteFunc write_func;      // _14
	DBCommFunc open_func;            // _18
	DBCommFunc close_func;           // _1C
	DBCommFunc pre_continue_func;    // _20
	DBCommFunc post_stop_func;       // _24
} DBCommTable;

// Struct for information on DS versions (kernel and protocol) (size 0x4)
typedef struct DSVersions {
	u8 kernelMajor;   // _00
	u8 kernelMinor;   // _01
	u8 protocolMajor; // _02
	u8 protocolMinor; // _03
} DSVersions;

// Struct for packet information (size 0x8).
typedef struct TRKPacketSeq {
	u16 _00;   // _00, unknown
	u8 _02[6]; // _02, unknown
} TRKPacketSeq;

// Command reply information (size 0x40).
typedef struct CommandReply {
	u32 _00;       // _00
	u8 commandID;  // _04, use MessageCommandID enum - should be enum type?
	u8 replyError; // _05, use DSReplyError enum - should be enum type? check size.
	u32 _08;       // _08, unsure if this should be here or be one of the above
	u32 _0C;       // _0C
	u8 _10[0x30];  // _10, unknown
} CommandReply;

// Nub event information (size 0xC).
typedef struct TRKEvent {
	NubEventType eventType;   // _00
	NubEventID eventID;       // _04
	MessageBufferID msgBufID; // _08
} TRKEvent;

// Event queue (size 0x28).
typedef struct TRKEventQueue {
	u8 _00[4];          // _00, unknown
	int count;          // _04, number of events in queue
	int next;           // _08, next event in `events` to handle (0 or 1)
	TRKEvent events[2]; // _0C
	NubEventID eventID; // _24, ID to assign next event, min 0x100
} TRKEventQueue;

// Struct for state information (size 0xB0).
typedef struct TRKState {
	u32 _00;         // _00
	u32 _04;         // _04
	u32 _08;         // _08
	u32 _0C;         // _0C
	u32 _10;         // _10
	u32 _14;         // _14
	u32 _18;         // _18
	u32 _1C;         // _1C
	u32 _20;         // _20
	u32 _24;         // _24
	u32 _28;         // _28
	u32 _2C;         // _2C
	u32 _30;         // _30
	u32 _34;         // _34
	u32 _38;         // _38
	u32 _3C;         // _3C
	u32 _40;         // _40
	u32 _44;         // _44
	u32 _48;         // _48
	u32 _4C;         // _4C
	u32 _50;         // _50
	u32 _54;         // _54
	u32 _58;         // _58
	u32 _5C;         // _5C
	u32 _60;         // _60
	u32 _64;         // _64
	u32 _68;         // _68
	u32 _6C;         // _6C
	u32 _70;         // _70
	u32 _74;         // _74
	u32 _78;         // _78
	u32 _7C;         // _7C
	u32 _80;         // _80
	u32 _84;         // _84
	u32 _88;         // _88
	u32 _8C;         // _8C
	u32 _90;         // _90
	u32 _94;         // _94
	BOOL mIsStopped; // _98
	u32 _9C;         // _9C
	u32 _A0;         // _A0
	u32 _A4;         // _A4
	u32 _A8;         // _A8
	u32 _AC;         // _AC
} TRKState;

////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
