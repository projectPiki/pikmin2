#ifndef _JSYSTEM_J3DJOINTTREE_H
#define _JSYSTEM_J3DJOINTTREE_H

#include "types.h"
#include "Quat.h"
#include "Vector3.h"

#include "JSystem/J3D/J3DDrawMtxData.h"

struct J3DModelHierarchy;
struct J3DJointBlock;
struct JUTNameTab;

struct J3DJointTree {
	u32 _00;                        // _00, VTBL !
	J3DModelHierarchy* m_hierarchy; // _04
	s8* _08;                        // _08
	u32 m_flags;                    // _0C
	u32 _10;                        // _10
	u32** m_transformCalc;          // _14
	J3DJointBlock* m_jointBlock;    // _18
	u16 m_jointCnt;                 // _1C
	u16 m_envelopeCnt;              // _1E
	u32 _20;                        // _20
	u16 m_maxBillBoardCnt;          // _24
	s8* _28;                        // _28
	u16* _2C;                       // _2C
	u32 _30;                        // _30
	J3DDrawMtxData m_mtxData;       // _34
	s32 _38;                        // _38
	s32 _3C;                        // _3C
	u32 _40;                        // _40
	JUTNameTab* nametab;            // _44
};

#endif