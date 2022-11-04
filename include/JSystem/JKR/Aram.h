#ifndef _JSYSTEM_JKR_ARAM_H
#define _JSYSTEM_JKR_ARAM_H

#include "Dolphin/ar.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRThread.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

struct JKRDvdFile;
struct JKRAramHeap;
struct JKRDecompCommand;

struct JKRAramBlock {
	JKRAramBlock(u32, u32, u32, u8, bool);

	virtual ~JKRAramBlock(); // _08

	JKRAramBlock* allocHead(u32, u8, JKRAramHeap*);
	JKRAramBlock* allocTail(u32, u8, JKRAramHeap*);

	JSULink<JKRAramBlock> m_link; // _04
	u32 _14;                      // _14
	u32 _18;                      // _18
	u32 _1C;                      // _1C
	u8 _20;                       // _20
	bool _21;                     // _21
};

struct JKRAramHeap : public JKRDisposer {
	enum EAllocMode { AM_Head = 0, AM_Tail };

	JKRAramHeap(u32, u32);

	virtual ~JKRAramHeap(); // _08

	JKRAramBlock* alloc(u32, EAllocMode);
	JKRAramBlock* allocFromHead(u32);
	JKRAramBlock* allocFromTail(u32);
	s32 getFreeSize();

	OSMutexObject m_mutex; // _18
	JKRHeap* _30;          // _30
	u32 _34;               // _34
	u32 _38;               // _38
	u32 _3C;               // _3C
	u8 _40;                // _40

	static JSUList<JKRAramBlock> sAramList;
};

// Size: 0xA4
struct JKRAram : public JKRThread {
	JKRAram(u32, u32, long);

	virtual ~JKRAram();  // _08
	virtual void* run(); // _0C

	static JKRAram* create(u32, u32, long, long, long);
	static JKRAramBlock* mainRamToAram(u8*, u32, u32, JKRExpandSwitch, u32, JKRHeap*, s32, u32*);
	static u8* aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, s32, u32*);
	static u8* aramToMainRam(JKRAramBlock*, u8*, u32, u32, JKRExpandSwitch, u32, JKRHeap*, s32, u32*);

	u8 _7C[4];               // _7C
	u32 _80;                 // _80
	u32 _84;                 // _84
	u32 _88;                 // _88
	u8 _8C[4];               // _8C
	u32 _90;                 // _90
	JKRAramHeap* m_aramHeap; // _94
	u32 m_blockLength;       // _98
	u8 _9C[4];               // _9C

	static JKRAram* sAramObject;
	static const OSMessageQueue sMessageQueue;
};

struct JKRAramArchive : public JKRArchive {
	JKRAramArchive(long, EMountDirection);

	virtual ~JKRAramArchive();                                    // _08
	virtual u32 getExpandedResSize(const void*) const;            // _3C
	virtual void* fetchResource(SDIFileEntry*, u32*);             // _40
	virtual void* fetchResource(void*, u32, SDIFileEntry*, u32*); // _44

	bool open(long);
	void fetchResource_subroutine(u32, u32, u8*, u32, s32);
	void fetchResource_subroutine(u32, u32, JKRHeap*, s32, u8**);

	s32 _5C;               // _5C
	s32 _60;               // _60
	void* _64;             // _64
	JKRDvdFile* m_dvdFile; // _68
};

// Size: 0x98
struct JKRAMCommand : ARQRequest {
	typedef void (*Callback)(JKRAMCommand*);
	JKRAMCommand();
	~JKRAMCommand();

	// ARQRequest _00;            // _00
	JSULink<JKRAMCommand> _20; // _20
	JSULink<JKRAMCommand> _30; // _30
	s32 m_direction;           // _40
	u32 m_length;              // _44
	u32 m_source;              // _48
	u32 m_destination;         // _4C
	JKRAramBlock* _50;         // _50
	u8 _54[4];                 // _54
	Callback _58;              // _58
	OSMessageQueue* _5C;       // _5C
	s32 _60;                   // _60
	JKRDecompCommand* _64;     // _64
	OSMessageQueue _68;        // _68
	void* _88;                 // _88
	void* _8C;                 // _8C
	void* _90;                 // _90
	void* _94;                 // _94
};

enum ECommandType {
	ECT_UNK,
	ECT_READ,
	ECT_WRITE,
};

typedef struct JSUFileInputStream;

typedef struct JKRAramStreamCommand {
	JKRAramStreamCommand();
	ECommandType type;             // _00
	u32 mAddress;                  // _04
	u32 mSize;                     // _08
	u32 field_0x0c;                // _0C
	JSUFileInputStream* mStream;   // _10
	u32 mOffset;                   // _14
	u32* mReturnSize;              // _18
	u8* mTransferBuffer;           // _1C
	u32 mTransferBufferSize;       // _20
	JKRHeap* mHeap;                // _24
	bool mAllocatedTransferBuffer; // _28
	u8 padding_0x29[3];            // _29
	u32 field_0x2c;                // _2C
	OSMessageQueue mMessageQueue;  // _30
	void* mMessage;                // _50
	u32 field_0x54;                // _54
	u32 field_0x58;                // _58
};

struct JKRAramStream : public JKRThread {
	virtual ~JKRAramStream(); // _08
	virtual void* run();      // _0C

	// _00 VTBL

	JKRAramStream(s32);
	static JKRAramStream* create(s32);
	static JKRAramStream* sAramStreamObject;
	static void* sMessageBuffer[4]; // OSMessage
	static OSMessageQueue sMessageQueue;
	static u32 readFromAram();
	static s32 writeToAram(JKRAramStreamCommand*);
	static JKRAramStreamCommand* write_StreamToAram_Async(JSUFileInputStream*, JKRAramBlock*, u32, u32, u32*);
	static JKRAramStreamCommand* write_StreamToAram_Async(JSUFileInputStream*, u32, u32, u32, u32*);
	static JKRAramStreamCommand* sync(JKRAramStreamCommand*, BOOL);
	static void setTransBuffer(u8*, u32, JKRHeap*);
	static u8* transBuffer;
	static JKRHeap* transHeap;
	static u32 transSize;
};
struct JKRAramPiece {
	JKRAramPiece();  // unused/inlined
	~JKRAramPiece(); // unused/inlined

	static void doneDMA(u32);
	static bool orderSync(int, u32, u32, u32, JKRAramBlock*);
	static void sendCommand(JKRAMCommand*);
	static void startDMA(JKRAMCommand*);
	static OSMutexObject mMutex;
	static JSUList<JKRAMCommand> sAramPieceCommandList;
};

extern OSMutexObject decompMutex;

#endif
