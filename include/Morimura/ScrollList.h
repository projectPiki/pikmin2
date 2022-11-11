#ifndef _MORIMURA_SCROLLLIST_H
#define _MORIMURA_SCROLLLIST_H

#include "Morimura/Bases.h"

namespace Morimura {
struct TScaleUpCounter;

struct TIndexGroup {
	f32 _00;     // _00
	f32 _04;     // _04
	f32 _08;     // _08
	f32 _0C;     // _0C
	f32 _10;     // _10
	f32 _14;     // _14
	f32 _18;     // _18
	f32 _1C;     // _1C
	u32 _20;     // _20, unknown
	u8 _24;      // _24
	f32 _28;     // _28
	u8 _2C[0x4]; // _2C, unknown
};

struct TIconInfo {
	u8 _00[0x8];                       // _00, unknown
	TScaleUpCounter* m_scaleUpCounter; // _08
	J2DPane* _0C;                      // _0C
	J2DPane* _10;                      // _10
	og::Screen::ScaleMgr* m_scaleMgr;  // _14
	u8 _18[0x4];                       // _18, unknown
};

struct TIndexPane {
	int _00;                 // _00
	J2DPane* _04;            // _04
	J2DPane* _08;            // _08
	int _0C;                 // _0C
	int _10;                 // _10
	int _14;                 // _14
	f32 _18;                 // _18
	f32 _1C;                 // _1C
	TIconInfo** m_iconInfos; // _20, array of ptrs?
	u32 _24;                 // _24, TZukanBase* according to ghidra, unsure on that?
};

struct TListScreen : public TScreenBase {
	virtual void create(const char*, u32); // _08

	// _00     = VTBL
	// _00-_18 = TScreenBase
};

struct TScrollList : public TTestBase {
	TScrollList(char*);

	virtual ~TScrollList();                       // _08 (weak)
	virtual bool isListShow(int);                 // _7C (weak)
	virtual void paneInit()       = 0;            // _80
	virtual void changePaneInfo() = 0;            // _84
	virtual void getIdMax()       = 0;            // _88
	virtual void getNameID(int)   = 0;            // _8C
	virtual void getUpdateIndex(int&, bool);      // _90
	virtual void setShortenIndex(int, int, bool); // _94 (weak)
	virtual void doUpdateIn();                    // _98 (weak)
	virtual void doUpdateOut();                   // _9C (weak)
	virtual void changeTextTevBlock(int);         // _A0 (weak)
	virtual void updateIndex(bool);               // _A4
	virtual void setPaneCharacter(int);           // _A8 (weak)

	void updateList();
	void changeIndex();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* m_archive; // _78
	TScreenBase* _7C;      // _7C
	Controller* _80;       // _80
	TIndexGroup* _84;      // _84
	TIndexPane** _88;      // _88, array of ptrs?
	u8 _8C;                // _8C
	s16 _8E;               // _8E
	int _90;               // _90
	int _94;               // _94
	int _98;               // _98
	int _9C;               // _9C
	f32 _A0;               // _A0
	f32 _A4;               // _A4
	f32 _A8;               // _A8
	f32 _AC;               // _AC
	u8 _B0;                // _B0
};
} // namespace Morimura

#endif
