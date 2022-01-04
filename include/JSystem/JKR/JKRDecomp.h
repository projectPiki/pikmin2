#ifndef _JSYSTEM_JKR_JKRDECOMP_H
#define _JSYSTEM_JKR_JKRDECOMP_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRThread.h"
#include "types.h"

struct JKRAMCommand;

// Size: 0x4C
struct JKRDecompCommand {
	typedef void Callback(JKRDecompCommand*);

	JKRDecompCommand();
	~JKRDecompCommand();

	u8 _00[4];                // _00
	u8* _04;               // _04
	u8* _08;               // _08
	ulong _0C;                // _0C
	ulong _10;                // _10
	Callback* m_callback;     // _14
	void* _18;                // _18
	OSMessageQueue* _1C;      // _1C
	int _20;                  // _20
	JKRAMCommand* _24;        // _24
	OSMessageQueue _28;       // _28
	void* m_messageBuffer[1]; // _48
};

// Size: 0x7C
struct JKRDecomp : public JKRThread {
	enum CompressionMode {
		NOT_COMPRESSED = 0,
		YAY0,
		YAZ0,
		_FORCE_UINT = 0xFFFFFFFF
	};

	JKRDecomp(long);

	virtual ~JKRDecomp(); // _00
	virtual void run();   // _04

	static CompressionMode checkCompressed(u8*);
	static JKRDecomp* create(long);
	static void decode(u8*, u8*, ulong, ulong);
	static void decodeSZP(u8*, u8*, ulong, ulong);
	static void decodeSZS(u8*, u8*, ulong, ulong);
	static bool orderSync(u8*, u8*, ulong, ulong);
	static BOOL sendCommand(JKRDecompCommand*);

	u8 _78[4]; // _78

	static void* sMessageBuffer[4];
	static OSMessageQueue sMessageQueue;
	static JKRDecomp* sDecompObject;
};

#endif
