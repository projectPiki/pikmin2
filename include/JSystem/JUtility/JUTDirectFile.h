#ifndef _JSYSTEM_JUT_JUTDIRECTFILE_H
#define _JSYSTEM_JUT_JUTDIRECTFILE_H

#include "Dolphin/dvd.h"
#include "types.h"

struct JUTDirectFile {
	JUTDirectFile();

	~JUTDirectFile();

	bool fopen(const char*);
	void fclose();
	int fgets(void*, int);

	// unused/inlined
	void fetch32byte();
	void fread(void*, u32);
	void setPos(u32);
	void fgetc();

	u8 _00[0x820];         // _00, unknown/buffer/data?
	void* _820;            // _820
	u32 _824;              // _824
	u32 _828;              // _828
	u32 _82C;              // _82C
	bool mIsOpen;          // _830, is file open
	DVDFileInfo mFileInfo; // _834
};

#endif
