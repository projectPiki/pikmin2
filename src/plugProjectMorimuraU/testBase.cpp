
/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28Morimura9TTestBase
    __vt__Q28Morimura9TTestBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura9TTestBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura9TTestBaseFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q26Screen7ObjBaseFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdate__Q26Screen7ObjBaseFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q26Screen7ObjBaseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global mIsSection__Q28Morimura9TTestBase
    mIsSection__Q28Morimura9TTestBase:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    lbl_8051E2F0:
        .float 0.0
    lbl_8051E2F4:
        .float 0.5
    lbl_8051E2F8:
        .float 255.0
    lbl_8051E2FC:
        .float 1.0
*/
#ifndef _MORIMURA_TESTBASE_H
#define _MORIMURA_TESTBASE_H

#include "types.h"
#include "Vector3.h"

#include "Dolphin/string.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Screen/Bases.h"
#include "System.h"

namespace Morimura {
struct TTestBase : public Screen::ObjBase {
	TTestBase(char*);

	virtual bool doStart(Screen::StartSceneArg const*);
	virtual bool doEnd(Screen::EndSceneArg const*);
	virtual bool doUpdateFadein();  // _38
	virtual bool doUpdateFadeout(); // _48
	virtual void doUpdateFinish();
	virtual og::Screen::DispMemberBase* getDispMemberBase() = 0;
	virtual void _UNK()                                     = 0;
	virtual ~TTestBase();

	static f64 mIsSection;

	float _38; // _38
	float _3C; // _3C
	float _40; // _40
	uchar _44; // _44
	uchar _45; // _45
	char _46;  // _46
};             // tentative size 0x4A
} // namespace Morimura

#endif

namespace Morimura {
f64 TTestBase::mIsSection;

/*
 * --INFO--
 * Address:	803491C8
 * Size:	000084
 */
TTestBase::TTestBase(char* name)
{
	_38 = 0.0f;
	_3C = 0.5f;
	_40 = 0.0f;
	_44 = 0;
	_45 = 0;
	strcpy(&_46, name);
	m_name = &_46;
}

/*
 * --INFO--
 * Address:	8034924C
 * Size:	000020
 */
bool TTestBase::doStart(Screen::StartSceneArg const*)
{
	_40 = 0.0f;
	_38 = 0.0f;
	_44 = 0;
	_45 = 0;
	return true;
}

/*
 * --INFO--
 * Address:	8034926C
 * Size:	000010
 */
bool TTestBase::doEnd(Screen::EndSceneArg const*)
{
	_38 = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8034927C
 * Size:	0000B0
 */
bool TTestBase::doUpdateFadein()
{
	_38 += sys->m_secondsPerFrame;
	if (_38 > _3C) {
		_38 = _3C;
	}
	_40 = _38 / _3C;
	_44 = 255.0f * _40;

	doUpdate();

	if (_38 >= _3C) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034932C
 * Size:	00000C
 */
void TTestBase::doUpdateFinish() { _38 = 0.0f; }

/*
 * --INFO--
 * Address:	80349338
 * Size:	0000B8
 */
bool TTestBase::doUpdateFadeout()
{
	_38 += sys->m_secondsPerFrame;
	if (_38 > _3C) {
		_38 = _3C;
	}
	_40 = 1.0f - (_38 / _3C);
	_44 = 255.0f * _40;

	doUpdate();

	if (_38 >= _3C) {
		return true;
	}

	return false;
}
} // namespace Morimura
