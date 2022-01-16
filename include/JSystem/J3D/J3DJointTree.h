#ifndef _JSYSTEM_J3D_J3DJOINTTREE_H
#define _JSYSTEM_J3D_J3DJOINTTREE_H

#include "JSystem/J3D/J3DDrawMtxData.h"
#include "types.h"

struct J3DJoint;
struct J3DJointBlock;
struct J3DMaterialTable;
struct J3DModelHierarchy;
struct J3DMtxBuffer;
struct J3DMtxCalc;
struct J3DShapeTable;
struct JUTNameTab;
struct Vec;

struct J3DJointTree {
	J3DJointTree();

	virtual void calc(J3DMtxBuffer*, const Vec&, const float (&)[3][4]); // _00
	virtual ~J3DJointTree();                                             // _04

	// virtual void _08() = 0;                                              // _08

	void findImportantMtxIndex();
	void makeHierarchy(J3DJoint*, const J3DModelHierarchy**, J3DMaterialTable*, J3DShapeTable*);

	// VTBL _00
	J3DModelHierarchy* m_hierarchy; // _04
	s8* _08;                        // _08
	u32 m_flags;                    // _0C
	J3DJoint* _10;                  // _10
	J3DMtxCalc* m_transformCalc;    // _14

	// PikDecomp calls this "J3DJointBlock* jointBlock"
	J3DJoint** m_joints;      // _18
	u16 m_jointCnt;           // _1C
	u16 m_envelopeCnt;        // _1E
	u32 _20;                  // _20
	u32 m_maxBillBoardCnt;    // _24
	s8* _28;                  // _28
	u16* _2C;                 // _2C
	u32 _30;                  // _30
	J3DDrawMtxData m_mtxData; // _34
	u32 _40;                  // _40
	JUTNameTab* m_nametab;    // _44
};

#endif
