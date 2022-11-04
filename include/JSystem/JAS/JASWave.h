#ifndef _JSYSTEM_JAS_JASWAVE_H
#define _JSYSTEM_JAS_JASWAVE_H

#include "JSystem/JAS/JASDisposer.h"
#include "JSystem/JAS/JASHeap.h"

struct JASWaveArc : public JASDisposer {
	JASWaveArc();

	virtual void onDispose();   // _08
	virtual void onLoadDone();  // _0C (weak)
	virtual void onEraseDone(); // _10 (weak)

	void loadToAramCallback(void*);
	bool load(JASHeap*);
	bool loadTail(JASHeap*);
	bool erase();
	void setFileName(const char*);

	// unused/inlined:
	~JASWaveArc() { }
	void loadSetup(unsigned long);
	void eraseSetup();
	void sendLoadCmd();
	void execLoad();
	bool loadBlock(JASHeap*);
	bool loadBlockTail(JASHeap*);
	void setEntryNum(long);

	JASHeap m_heap;   // _04
	u32 _48;          // _48
	int _4C;          // _4C
	int m_fileNumber; // _50
	u32 m_fileSize;   // _54
	u32 _58;          // _58
};

struct JASWaveInfo {
	u8 _00;    // _00
	u8 _01;    // _01
	f32 _04;   // _04
	u32 _08;   // _08
	u32 _0C;   // _0C
	u32 _10;   // _10
	u32 _14;   // _14
	u32 _18;   // _18
	u32 _1C;   // _1C
	s16 _20;   // _20
	s16 _22;   // _22
	void* _24; // _24
};

struct JASWaveHandle {
	virtual ~JASWaveHandle() { }                        // _08 (weak)
	virtual const JASWaveInfo* getWaveInfo() const = 0; // _0C
	virtual void* getWavePtr() const               = 0; // _10

	// _00 VTBL
};

struct JASWaveBank {
	virtual ~JASWaveBank();                              // _08 (weak)
	virtual JASWaveHandle* getWaveHandle(u32) const = 0; // _0C
	virtual JASWaveArc* getWaveArc(int)             = 0; // _10

	JKRHeap* getCurrentHeap();

	// _00 VTBL

	// Unsure of type
	static JKRHeap* sCurrentHeap;
};

struct JASBasicWaveBank : public JASWaveBank {
	struct TWaveHandle : public JASWaveHandle {
		inline TWaveHandle()
		    : JASWaveHandle()
		    , m_info()
		{
		}

		virtual ~TWaveHandle() { }                                         // _08 (weak)
		virtual const JASWaveInfo* getWaveInfo() const { return &m_info; } // _0C (weak)
		virtual void* getWavePtr() const;                                  // _10 (weak)

		JASWaveInfo m_info; // _04
		JASHeap* m_heap;    // _2C
		u32 _30;            // _30
	};

	/**
	 * @size{0x3C}
	 */
	struct TWaveInfo {
		TWaveInfo();
		~TWaveInfo() { }

		TWaveHandle m_handle; // _00
		u32 _34;              // _34
		u32 _38;              // _38
	};

	/**
	 * @size{0x68}
	 */
	struct TWaveGroup : JASWaveArc {
		TWaveGroup(JASBasicWaveBank*);
		~TWaveGroup();

		virtual void onLoadDone();  // _0C
		virtual void onEraseDone(); // _10

		void setWaveCount(unsigned long);
		void setWaveInfo(int, unsigned long, const JASWaveInfo&);
		u32 getWaveID(int) const;

		JASBasicWaveBank* m_bank; // _5C
		TWaveInfo* m_info;        // _60
		u32 m_infoCount;          // _64;
	};

	JASBasicWaveBank();

	virtual ~JASBasicWaveBank();                     // _08
	virtual JASWaveHandle* getWaveHandle(u32) const; // _0C
	virtual JASWaveArc* getWaveArc(int);             // _10 (weak)

	TWaveGroup* getWaveGroup(int);
	void setGroupCount(u32);
	void setWaveTableSize(u32);

	// unused/inlined:
	void incWaveTable(const JASBasicWaveBank::TWaveGroup*);
	void decWaveTable(const JASBasicWaveBank::TWaveGroup*);

	OSMutexObject m_mutex;   // _04
	TWaveHandle** m_handles; // _1C
	u32 m_tableSize;         // _20
	TWaveGroup** m_groups;   // _24
	u32 m_groupCount;        // _28
};

struct JASSimpleWaveBank : public JASWaveBank, JASWaveArc {
	/** @size{0x30} */
	struct TWaveHandle : public JASWaveHandle {
		TWaveHandle();

		virtual ~TWaveHandle();                         // _08 (weak)
		virtual const JASWaveInfo* getWaveInfo() const; // _0C (weak)
		virtual void* getWavePtr() const;               // _10 (weak)

		JASWaveInfo m_info; // _04
		JASHeap* m_heap;    // _2C
	};

	JASSimpleWaveBank();

	virtual ~JASSimpleWaveBank();                    // _08
	virtual JASWaveHandle* getWaveHandle(u32) const; // _0C
	virtual JASWaveArc* getWaveArc(int);             // _10

	void setWaveTableSize(u32);
	void setWaveInfo(u32, const JASWaveInfo&);

	// _00 - _03 JASWaveBank
	// _04 - _5F JASWaveArc
	TWaveHandle* m_handles; // _60
	u32 m_handleCount;      // _64
};

namespace JASWaveArcLoader {
void init(JASHeap*);
void setCurrentDir(const char*);

// unused/inlined:
JASHeap* getRootHeap();
const char* getCurrentDir();

extern char sCurrentDir[0x40];
extern JASHeap* sAramHeap;
} // namespace JASWaveArcLoader

namespace JASWaveBankMgr {
void init(int tableSize);
JASWaveBank* getWaveBank(int bankIndex);
bool registWaveBankWS(int bankIndex, void* data);
bool loadWave(int bankIndex, int arcIndex, JASHeap* heap);
bool loadWaveTail(int bankIndex, int arcIndex, JASHeap* heap);
bool eraseWave(int bankIndex, int arcIndex);

// unused/inlined:
bool registWaveBank(int bankIndex, JASWaveBank* bank);
JASWaveArc* getWaveArc(int bankIndex, int arcIndex);
bool loadWaveBlock(int bankIndex, int arcIndex, JASHeap* heap);
bool loadWaveBlockTail(int bankIndex, int arcIndex, JASHeap* heap);
size_t getUsedHeapSize();

extern int sTableSize;
extern JASWaveBank** sWaveBank;
} // namespace JASWaveBankMgr

namespace JASWSParser {
struct TCtrlWave {
};
struct TWave {
};
struct TWaveArchive {
};
struct TWaveArchiveBank {
};
struct TCtrl {
};
struct TCtrlScene {
};
struct TCtrlGroup {
};

u32 getGroupCount(void*);
JASBasicWaveBank* createBasicWaveBank(void*);
JASSimpleWaveBank* createSimpleWaveBank(void*);

// unused/inlined:
size_t getUsedHeapSize();
} // namespace JASWSParser

#endif
