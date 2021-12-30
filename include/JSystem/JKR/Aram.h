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
	JKRAramBlock(u32, u32, u32, uchar, bool);

	virtual ~JKRAramBlock(); // _00

	JKRAramBlock* allocHead(u32, uchar, JKRAramHeap*);
	JKRAramBlock* allocTail(u32, uchar, JKRAramHeap*);

	JSUPtrLink m_link; // _04
	u32 _14;           // _14
	u32 _18;           // _18
	u32 _1C;           // _1C
	uchar _20;         // _20
	bool _21;          // _21
};

struct JKRAramHeap : public JKRDisposer {
	enum EAllocMode { AM_Head = 0, AM_Tail };

	JKRAramHeap(u32, u32);

	virtual ~JKRAramHeap(); // _00

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
};

// Size: 0xA4
struct JKRAram : public JKRThread {
	JKRAram(u32, u32, long);

	virtual ~JKRAram(); // _00
	virtual void run(); // _04

	static JKRAram* create(u32, u32, long, long, long);
	static JKRAramBlock* mainRamToAram(uchar*, u32, u32, JKRExpandSwitch, u32,
	                                   JKRHeap*, s32, u32*);
	static uchar* aramToMainRam(u32, uchar*, u32, JKRExpandSwitch, u32,
	                            JKRHeap*, s32, u32*);
	static uchar* aramToMainRam(JKRAramBlock*, u8*, u32, u32, JKRExpandSwitch,
	                            u32, JKRHeap*, s32, u32*);

	u8 _78[8];               // _78
	u32 _80;                 // _80
	u32 _84;                 // _84
	u32 _88;                 // _88
	u8 _8C[4];               // _8C
	u32 _90;                 // _90
	JKRAramHeap* m_aramHeap; // _94
	u32 m_blockLength;       // _98
	u8 _9C[4];               // _9C
};

struct JKRAramArchive : public JKRArchive {
	JKRAramArchive(long, EMountDirection);

	virtual ~JKRAramArchive();                                    // _00
	virtual void getExpandedResSize(const void*) const;           // _34
	virtual u32 fetchResource(SDIFileEntry*, u32*);               // _38
	virtual void* fetchResource(void*, u32, SDIFileEntry*, u32*); // _3C

	bool open(long);
	void fetchResource_subroutine(u32, u32, uchar*, u32, s32);
	void fetchResource_subroutine(u32, u32, JKRHeap*, s32, uchar**);

	s32 _5C;               // _5C
	s32 _60;               // _60
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
	s32 m_direction;       // _40
	u32 m_length;          // _44
	u32 m_source;          // _48
	u32 m_destination;     // _4C
	JKRAramBlock* _50;     // _50
	u8 _54[4];             // _54
	void* _58;             // _58
	OSMessageQueue* _5C;   // _5C
	s32 _60;               // _60
	JKRDecompCommand* _64; // _64
	OSMessageQueue _68;    // _68
	u8 _88[4];             // _88
	void* _8C;             // _8C
	void* _90;             // _90
	void* _94;             // _94
};

namespace JKRAramPiece {
void doneDMA(u32);
void orderSync(s32, u32, u32, u32, JKRAramBlock*);
void sendCommand(JKRAMCommand*);
void startDMA(JKRAMCommand*);
} // namespace JKRAramPiece

#endif
