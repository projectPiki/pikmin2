#ifndef _JSYSTEM_JKR_ARAM_H
#define _JSYSTEM_JKR_ARAM_H

#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRThread.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JSU/JSUPtrLink.h"
#include "types.h"

struct JKRDvdFile;
struct JKRAramHeap;
struct JKRDecompCommand;

struct JKRAramBlock {
	JKRAramBlock(ulong, ulong, ulong, uchar, bool);

	virtual ~JKRAramBlock(); // _00

	JKRAramBlock* allocHead(ulong, uchar, JKRAramHeap*);
	JKRAramBlock* allocTail(ulong, uchar, JKRAramHeap*);

	JSUPtrLink m_link; // _04
	ulong _14;         // _14
	ulong _18;         // _18
	ulong _1C;         // _1C
	uchar _20;         // _20
	bool _21;          // _21
};

struct JKRAramHeap : public JKRDisposer {
	enum EAllocMode { AM_Head = 0, AM_Tail };

	JKRAramHeap(ulong, ulong);

	virtual ~JKRAramHeap(); // _00

	JKRAramBlock* alloc(ulong, EAllocMode);
	JKRAramBlock* allocFromHead(ulong);
	JKRAramBlock* allocFromTail(ulong);
	uint getFreeSize();

	OSMutexObject m_mutex; // _18
	JKRHeap* _30;          // _30
	ulong _34;             // _34
	ulong _38;             // _38
	ulong _3C;             // _3C
	u8 _40;                // _40
};

// Size: 0xA4
struct JKRAram : public JKRThread {
	JKRAram(ulong, ulong, long);

	virtual ~JKRAram(); // _00
	virtual void run(); // _04

	static JKRAram* create(ulong, ulong, long, long, long);
	static JKRAramBlock* mainRamToAram(uchar*, ulong, ulong, JKRExpandSwitch,
	                                   ulong, JKRHeap*, int, ulong*);
	static uchar* aramToMainRam(ulong, uchar*, ulong, JKRExpandSwitch, ulong,
	                            JKRHeap*, int, ulong*);

	u8 _78[8];               // _78
	ulong _80;               // _80
	ulong _84;               // _84
	ulong _88;               // _88
	u8 _8C[4];               // _8C
	ulong _90;               // _90
	JKRAramHeap* m_aramHeap; // _94
	ulong m_blockLength;     // _98
	u8 _9C[4];               // _9C
};

struct JKRAramArchive : public JKRArchive {
	JKRAramArchive(long, EMountDirection);

	virtual ~JKRAramArchive();                                        // _00
	virtual void getExpandedResSize(const void*) const;               // _34
	virtual u32 fetchResource(SDIFileEntry*, ulong*);                 // _38
	virtual void* fetchResource(void*, ulong, SDIFileEntry*, ulong*); // _3C

	bool open(long);
	void fetchResource_subroutine(ulong, ulong, uchar*, ulong, int);
	void fetchResource_subroutine(ulong, ulong, JKRHeap*, int, uchar**);

	int _5C;               // _5C
	int _60;               // _60
	void* _64;             // _64
	JKRDvdFile* m_dvdFile; // _68
};

// Size: 0x98
struct JKRAMCommand {
	JKRAMCommand();
	~JKRAMCommand();

	u8 _00[0x20];          // _00
	JSUPtrLink _20;        // _20
	JSUPtrLink _30;        // _30
	int m_direction;       // _40
	ulong m_length;        // _44
	ulong m_source;        // _48
	ulong m_destination;   // _4C
	JKRAramBlock* _50;     // _50
	u8 _54[4];             // _54
	void* _58;             // _58
	OSMessageQueue* _5C;   // _5C
	int _60;               // _60
	JKRDecompCommand* _64; // _64
	OSMessageQueue _68;    // _68
	u8 _88[4];             // _88
	void* _8C;             // _8C
	void* _90;             // _90
	void* _94;             // _94
};

namespace JKRAramPiece {
void doneDMA(ulong);
void orderSync(int, ulong, ulong, ulong, JKRAramBlock*);
void sendCommand(JKRAMCommand*);
void startDMA(JKRAMCommand*);
} // namespace JKRAramPiece

#endif
