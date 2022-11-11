#ifndef _MORIMURA_HISCORE_H
#define _MORIMURA_HISCORE_H

#include "og/Screen/DispMember.h"
#include "Morimura/mrUtil.h"
#include "Morimura/ScrollList.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DColorBlock.h"

namespace Morimura {
struct DispMemberHighScore : public og::Screen::DispMemberBase {
	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	void* _08; // _08, unknown ptr
	u8 _0C;    // _0C
};

struct THiScoreIndPane : public TIndPane {
	virtual ~THiScoreIndPane(); // _08 (weak)
	virtual void draw();        // _10

	// _00     = VTBL
	// _00-_18 = CNode
	JUTTexture* _18; // _18
	JUTTexture* _1C; // _1C
	void* _20;       // _20, unknown ptr
	u8 _24[0x24];    // _24, unknown
};

struct THiScoreListScreen : public TListScreen {
	virtual void create(const char*, u32); // _08
	virtual void update();                 // _0C (weak)

	// _00     = VTBL
	// _00-_18 = TScreenBase
};

struct THiScoreScene : public THIOScene {
	THiScoreScene();

	virtual SceneType getSceneType();       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();     // _0C (weak)
	virtual ScreenMemberID getMemberID();   // _10 (weak)
	virtual const char* getResName() const; // _1C
	virtual void doCreateObj(JKRArchive*);  // _20 (weak)

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as THiScore*
};

struct THiScore : public TScrollList {
	THiScore();

	virtual ~THiScore();                                     // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual void doUpdateFadeinFinish();                     // _54
	virtual bool doUpdate();                                 // _58
	virtual void doUpdateFadeoutFinish();                    // _64
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)
	virtual void paneInit();                                 // _80
	virtual void changePaneInfo();                           // _84
	virtual void getIdMax();                                 // _88 (weak)
	virtual void getNameID(int);                             // _8C (weak)
	virtual void changeTextTevBlock(int);                    // _A0
	virtual void setPaneCharacter(int);                      // _A8

	void getRecord(int, int);
	void copyTevBlock(J2DTevBlock*, J2DTevBlock*);
	void changeTevBlock(J2DTevBlock*, J2DTevBlock*);
	void copyColorBlock(J2DColorBlock*, J2DColorBlock*);
	void changeColorBlock(J2DColorBlock*, J2DColorBlock*);
	void updateLayout();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	THiScoreListScreen* m_hiScoreListScreen; // _B4
	THiScoreIndPane* m_hiScoreIndPane;       // _B8
	u8 _BC[0x158];                           // _BC, TODO: fill in from ghidra
};

} // namespace Morimura

#endif
