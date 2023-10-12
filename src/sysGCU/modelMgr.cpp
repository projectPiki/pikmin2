#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "P2Macros.h"
#include "SysShape/Model.h"
#include "SysShape/ModelMgr.h"
#include "System.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499E68
    lbl_80499E68:
        .4byte 0x6D6F6465
        .4byte 0x6C4D6772
        .4byte 0x00000000
    .global lbl_80499E74
    lbl_80499E74:
        .4byte 0x6D6F6465
        .4byte 0x6C4D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80499E84
    lbl_80499E84:
        .4byte 0x736F6C69
        .4byte 0x64206865
        .4byte 0x61702063
        .4byte 0x72656174
        .4byte 0x696F6E20
        .4byte 0x6661696C
        .4byte 0x65642021
        .4byte 0x0A000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x736F6C69
        .4byte 0x64486561
        .4byte 0x70206E75
        .4byte 0x6C6C210A
        .4byte 0x00000000
        .4byte 0x6661696C
        .4byte 0x65642074
        .4byte 0x6F206E65
        .4byte 0x77206D6F
        .4byte 0x64656C20
        .4byte 0x21206964
        .4byte 0x20256420
        .4byte 0x69647820
        .4byte 0x25640A00
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("modelMgr"); }

namespace SysShape {

/*
 * --INFO--
 * Address:	8042AB00
 * Size:	0001D8
 */
ModelMgr::ModelMgr(int modelDataLimit, J3DModelData** modelData, int heapLimit, u32 p4, u32 p5, IDelegate1<Model*>* delegate)
{
	mModelDataLimit = modelDataLimit;
	mModelData      = new J3DModelData*[modelDataLimit];
	for (int i = 0; i < modelDataLimit; i++) {
		mModelData[i] = modelData[i];
	}
	mHeapLimit  = heapLimit;
	_10         = p4;
	_14         = p5;
	mDelegate   = delegate;
	mHeaps      = new JKRSolidHeap*[heapLimit];
	int maxSize = calcMaximumModelSize();
	for (int i = 0; i < heapLimit; i++) {
		mHeaps[i] = JKRSolidHeap::create((maxSize + 0x1FU) & ~0x1F, JKRHeap::sCurrentHeap, true);
		JUT_ASSERTLINE(82, mHeaps[i] != nullptr, "solid heap creation failed !\n");
	}
}

/*
 * --INFO--
 * Address:	8042ACD8
 * Size:	000084
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

/*
 * --INFO--
 * Address:	8042AD5C
 * Size:	0000A0
 */
int ModelMgr::calcModelSize(J3DModelData* data)
{
	if (data == nullptr) {
		return 0;
	}
	uint initialFreeSize   = JKRHeap::sCurrentHeap->getTotalFreeSize();
	SysShape::Model* model = new SysShape::Model(data, _10, _14);
	if (mDelegate) {
		mDelegate->invoke(model);
	}
	return initialFreeSize - JKRHeap::sCurrentHeap->getTotalFreeSize();
}

/*
 * --INFO--
 * Address:	8042ADFC
 * Size:	0001C8
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
	SysShape::Model* model = new SysShape::Model(mModelData[modelIndex], _10, _14);
	if (mDelegate) {
		mDelegate->invoke(model);
	}
	JUT_ASSERTLINE(184, model != nullptr, "failed to new model ! id %d idx %d\n", modelIndex, heapIndex);
	sys->endChangeCurrentHeap();
	return model;
}
} // namespace SysShape
