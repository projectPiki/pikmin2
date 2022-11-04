#ifndef _JSYSTEM_JKR_JKRARCHIVE_H
#define _JSYSTEM_JKR_JKRARCHIVE_H

#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

struct JKRArcFinder;

struct JKRArchive : public JKRFileLoader {
	enum EMountMode { EMM_Unk0 = 0, EMM_Mem, EMM_Aram, EMM_Dvd, EMM_Comp = 4 };
	enum EMountDirection { EMD_Unk0 = 0, EMD_Unk1, EMD_Unk2 };

	struct CArcName {
		/**
		 * @reifiedAddress{8001A92C}
		 * @reifiedFile{JSystem/JKR/JKRArchivePri.cpp}
		 */
		CArcName(const char** p1, char p2) { p1[0] = store(p1[0], p2); }

		/**
		 * @reifiedAddress{8001A970}
		 * @reifiedFile{JSystem/JKR/JKRArchivePri.cpp}
		 */
		const char* getString() const { return m_string; }
		/**
		 * @reifiedAddress{8001A978}
		 * @reifiedFile{JSystem/JKR/JKRArchivePri.cpp}
		 */
		u16 getHash() const { return m_hash; }
		void store(const char*);
		char* store(const char*, char);

		// Unused/inlined:
		CArcName() { }

		u16 m_hash;         // _00
		short _02;          // _02
		char m_string[256]; // _04
	};

	struct SDIFileEntry {
		u16 _00;    // _00
		u16 m_hash; // _02
		u32 _04;    // _04
		int _08;    // _08
		u32 m_size; // _0C
		void* _10;  // _10

		/**
		 * @fabricated
		 */
		inline bool getFlag04() { return _04 >> 0x18 & 0x04; }
		/**
		 * @fabricated
		 */
		inline bool getFlag80() { return _04 >> 0x18 & 0x80; }
		/**
		 * @fabricated
		 * Seems particularly important for fetchResource__13JKRDvdArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl.
		 */
		inline u32 getSize() { return m_size; }
	};

	struct SDirEntry {
		u8 _00;    // _00
		u8 _01;    // _01
		u16 _02;   // _02
		char* _04; // _04
		u8 _08[2]; // _08
		u16 _0A;   // _0A
		int _0C;   // _0C
	};

	struct JKRArchive_44 {
		u32 m_baseOffset;        // _00
		u32 m_offsetOfDirEntry;  // _04
		u32 _08;                 // _08
		u32 m_offsetOfFileEntry; // _0C
		u32 _10;                 // _10
		u32 _14;                 // _14
	};

	JKRArchive(long, EMountMode);

	virtual ~JKRArchive();                                                                                    // _08
	virtual bool becomeCurrent(const char*);                                                                  // _10
	virtual void* getResource(const char*);                                                                   // _14
	virtual void* getResource(u32, const char*);                                                              // _18
	virtual u32 readResource(void*, u32, const char*);                                                        // _1C
	virtual u32 readResource(void*, u32, u32, const char*);                                                   // _20
	virtual void removeResourceAll();                                                                         // _24
	virtual bool removeResource(void*);                                                                       // _28
	virtual bool detachResource(void*);                                                                       // _2C
	virtual long getResSize(const void*) const;                                                               // _30
	virtual u16 countFile(const char*) const;                                                                 // _34
	virtual JKRFileFinder* getFirstFile(const char*) const;                                                   // _38
	virtual u32 getExpandedResSize(const void*) const;                                                        // _3C (weak)
	virtual void* fetchResource(SDIFileEntry* entry, u32* outSize)                                       = 0; // _40
	virtual void* fetchResource(void* resourceBuffer, u32 bufferSize, SDIFileEntry* entry, u32* resSize) = 0; // _44
	virtual void setExpandSize(SDIFileEntry*, u32);                                                           // _48
	virtual u32 getExpandSize(SDIFileEntry*) const;                                                           // _4C

	SDirEntry* findDirectory(const char*, u32) const;
	SDIFileEntry* findFsResource(const char*, u32) const;
	SDIFileEntry* findIdResource(u16) const;
	SDIFileEntry* findIdxResource(u32) const;
	SDIFileEntry* findNameResource(const char*) const;
	SDIFileEntry* findPtrResource(const void*) const;
	SDIFileEntry* findTypeResource(u32, const char*) const;
	bool isSameName(CArcName&, u32, u16) const;

	bool getDirEntry(SDirEntry*, u32) const;
	void* getGlbResource(u32 type, const char* name, JKRArchive* archive);
	void* getIdxResource(u32);
	unknown readResource(void*, u32, unsigned short);

	static JKRArchive* mount(char const*, EMountMode, JKRHeap*, EMountDirection);
	static JKRArchive* mount(void*, JKRHeap*, EMountDirection);
	static JKRArchive* mount(long, EMountMode, JKRHeap*, EMountDirection);

	// Unused/inlined:
	JKRArchive();
	JKRArchive(const char* p1, EMountMode mountMode);
	static JKRArchive* check_mount_already(long);
	static JKRArchive* check_mount_already(long, JKRHeap*);
	SDirEntry* findResType(u32) const;
	SDIFileEntry* findTypeResource(u32, u32) const;

	JKRHeap* _38;                // _38
	u8 m_mountMode;              // _3C
	long _40;                    // _40
	JKRArchive_44* _44;          // _44
	SDirEntry* _48;              // _48 not sure of this one
	SDIFileEntry* m_fileEntries; // _4C
	u32* _50;                    // _50
	int _54;                     // _54
	int _58;                     // _58

	static u32 sCurrentDirID;
};

enum JKRMemBreakFlag { MBF_0 = 0, MBF_1 = 1 };

struct JKRMemArchive : public JKRArchive {
	/**
	 * @fabricated
	 */
	struct JKRMemArchive_64 {
		u32 _00; // _00
		u32 _04; // _04
		u32 _08; // _08
		u32 _0C; // _0C
	};
	JKRMemArchive(); // unused/inlined
	JKRMemArchive(long, EMountDirection);
	JKRMemArchive(void*, u32, JKRMemBreakFlag);
	JKRMemArchive(const char*, EMountDirection); // unused/inlined

	virtual ~JKRMemArchive();                                                                             // _00
	virtual void removeResourceAll();                                                                     // _1C
	virtual bool removeResource(void*);                                                                   // _20
	virtual u32 getExpandedResSize(const void*) const;                                                    // _34
	virtual void* fetchResource(SDIFileEntry* entry, u32* outSize);                                       // _38
	virtual void* fetchResource(void* resourceBuffer, u32 bufferSize, SDIFileEntry* entry, u32* resSize); // _3C

	bool open(long, EMountDirection);
	bool open(void*, u32, JKRMemBreakFlag);
	u32 fetchResource_subroutine(unsigned char*, u32, unsigned char*, u32, int);

	// Unused/inlined:
	unknown fixedInit(long);
	unknown mountFixed(long, EMountDirection);
	unknown mountFixed(const char*, EMountDirection);
	unknown mountFixed(void*, JKRMemBreakFlag);
	unknown unmountFixed(void);
	unknown open(const char*, EMountDirection);

	int _5C;                          // _5C
	EMountDirection m_mountDirection; // _60
	JKRMemArchive_64* _64;            // _64
	u8* _68;                          // _68
	bool _6C;                         // _6C
};

struct JKRCompArchive : public JKRArchive {
	JKRCompArchive(long, EMountDirection);

	virtual ~JKRCompArchive();                                                                            // _08
	virtual void removeResourceAll();                                                                     // _24
	virtual bool removeResource(void*);                                                                   // _28
	virtual u32 getExpandedResSize(const void*) const;                                                    // _3C
	virtual void* fetchResource(SDIFileEntry* entry, u32* outSize);                                       // _40
	virtual void* fetchResource(void* resourceBuffer, u32 bufferSize, SDIFileEntry* entry, u32* resSize); // _44

	bool open(long);

	int _5C;              // _5C
	int m_mountDirection; // _60
	u8 _64[4];            // _64
	void* _68;            // _68
	unknown _6C;          // _6C
	JKRDvdFile* _70;      // _70
	unknown _74;          // _74
	unknown _78;          // _78
	unknown _7C;          // _7C
};

struct JKRDvdArchive : public JKRArchive {
	JKRDvdArchive(long, JKRArchive::EMountDirection);

	virtual ~JKRDvdArchive();                                                                             // _00
	virtual u32 getExpandedResSize(const void*) const;                                                    // _34
	virtual void* fetchResource(SDIFileEntry* entry, u32* outSize);                                       // _38
	virtual void* fetchResource(void* resourceBuffer, u32 bufferSize, SDIFileEntry* entry, u32* resSize); // _3C

	bool open(long);
	static u32 fetchResource_subroutine(long, u32, u32, unsigned char*, u32, int, int);
	static u32 fetchResource_subroutine(long, u32, u32, JKRHeap*, int, int, unsigned char**);

	// Unused/inlined:
	unknown fixedInit(long, EMountDirection);
	unknown mountFixed(long, EMountDirection);
	unknown mountFixed(const char*, EMountDirection);
	unknown unmountFixed(void);

	int _5C;  // _5C
	int _60;  // _60
	int _64;  // _64
	int* _68; // _68
};

#endif
