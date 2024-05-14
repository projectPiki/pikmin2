#ifndef _JSYSTEM_J3D_J3DVERTEXBUFFER_H
#define _JSYSTEM_J3D_J3DVERTEXBUFFER_H

#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DVertexData;
struct J3DVertexBuffer {
	~J3DVertexBuffer();
	void copyVtxColorArray(J3DDeformAttachFlag);
	void init();
	void setArray() const;
	void setVertexData(J3DVertexData*);

	void swapVtxColArrayPointer()
	{
		GXColor* prev = mVtxColor[0];
		mVtxColor[0]  = mVtxColor[1];
		mVtxColor[1]  = prev;
	}

	void swapVtxPosArrayPointer()
	{
		void* old  = mVtxPos[0];
		mVtxPos[0] = mVtxPos[1];
		mVtxPos[1] = old;
	}

	void swapVtxNrmArrayPointer()
	{
		void* old   = mVtxNorm[0];
		mVtxNorm[0] = mVtxNorm[1];
		mVtxNorm[1] = old;
	}

	J3DVertexData* getVertexData() const { return mVtxData; }

	GXColor* getVtxColArrayPointer(int idx) { return mVtxColor[idx]; }
	void* getVtxPosArrayPointer(int idx) { return mVtxPos[idx]; }
	void* getVtxNrmArrayPointer(int idx) { return mVtxNorm[idx]; }

	void setCurrentVtxCol(GXColor* pVtxCol) { mCurrentVtxColor = pVtxCol; }
	void setCurrentVtxPos(void* pVtxPos) { mCurrentVtxPos = pVtxPos; }
	void setCurrentVtxNrm(void* pVtxNrm) { mCurrentVtxNorm = pVtxNrm; }

	void frameInit()
	{
		setCurrentVtxPos(mVtxPos[0]);
		setCurrentVtxNrm(mVtxNorm[0]);
		setCurrentVtxCol(mVtxColor[0]);
	}

	J3DVertexData* mVtxData;      // _00
	void* mVtxPos[2];             // _04
	void* mVtxNorm[2];            // _0C
	GXColor* mVtxColor[2];        // _14
	void* mTransformedVtxPos[2];  // _1C
	void* mTransformedVtxNorm[2]; // _24
	void* mCurrentVtxPos;         // _2C
	void* mCurrentVtxNorm;        // _30
	GXColor* mCurrentVtxColor;    // _34
};

#endif
