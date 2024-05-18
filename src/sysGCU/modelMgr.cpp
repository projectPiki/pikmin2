#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "P2Macros.h"
#include "SysShape/Model.h"
#include "SysShape/ModelMgr.h"
#include "System.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* name, ...) { OSReport("modelMgr"); }

namespace SysShape {

/**
 * @note Address: 0x8042AB00
 * @note Size: 0x1D8
 */
ModelMgr::ModelMgr(int modelDataLimit, J3DModelData** modelData, int heapLimit, u32 flags, u32 viewNum, IDelegate1<Model*>* delegate)
{
	mModelDataLimit = modelDataLimit;
	mModelData      = new J3DModelData*[modelDataLimit];
	for (int i = 0; i < modelDataLimit; i++) {
		mModelData[i] = modelData[i];
	}
	mHeapLimit  = heapLimit;
	mModelFlags = flags;
	mViewNum    = viewNum;
	mDelegate   = delegate;
	mHeaps      = new JKRSolidHeap*[heapLimit];
	int maxSize = calcMaximumModelSize();
	for (int i = 0; i < heapLimit; i++) {
		mHeaps[i] = JKRSolidHeap::create((maxSize + 0x1FU) & ~0x1F, JKRHeap::sCurrentHeap, true);
		JUT_ASSERTLINE(82, mHeaps[i] != nullptr, "solid heap creation failed !\n");
	}
}

/**
 * @note Address: 0x8042ACD8
 * @note Size: 0x84
 */
int ModelMgr::calcMaximumModelSize()
{
	uint maximum = 0;
	for (int i = 0; i < mModelDataLimit; i++) {
		uint size = calcModelSize(mModelData[i]);
		if (size > maximum) {
			maximum = size;
		}
	}
	// TODO: This 0x7C is probably a sizeof something.
	return maximum + 0x7C;
}

/**
 * @note Address: 0x8042AD5C
 * @note Size: 0xA0
 */
int ModelMgr::calcModelSize(J3DModelData* data)
{
	if (data == nullptr) {
		return 0;
	}
	uint initialFreeSize   = JKRHeap::sCurrentHeap->getTotalFreeSize();
	SysShape::Model* model = new SysShape::Model(data, mModelFlags, mViewNum);
	if (mDelegate) {
		mDelegate->invoke(model);
	}
	return initialFreeSize - JKRHeap::sCurrentHeap->getTotalFreeSize();
}

/**
 * @note Address: 0x8042ADFC
 * @note Size: 0x1C8
 */
Model* ModelMgr::createModel(int modelIndex, int heapIndex)
{
	if (mModelData[modelIndex] == nullptr) {
		return nullptr;
	}
	P2ASSERTBOUNDSLINE(152, 0, modelIndex, mModelDataLimit);
	P2ASSERTBOUNDSLINE(153, 0, heapIndex, mHeapLimit);
	JKRSolidHeap* solidHeap = mHeaps[heapIndex];
	sys->startChangeCurrentHeap(solidHeap);
	if (solidHeap) {
		solidHeap->freeAll();
	} else {
		for (int i = 0; i < mHeapLimit; i++) { }
		JUT_PANICLINE(173, "solidHeap null!\n");
	}
	SysShape::Model* model = new SysShape::Model(mModelData[modelIndex], mModelFlags, mViewNum);
	if (mDelegate) {
		mDelegate->invoke(model);
	}
	JUT_ASSERTLINE(184, model != nullptr, "failed to new model ! id %d idx %d\n", modelIndex, heapIndex);
	sys->endChangeCurrentHeap();
	return model;
}
} // namespace SysShape
