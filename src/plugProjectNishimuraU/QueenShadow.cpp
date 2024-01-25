#include "Game/Entities/Queen.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Queen {

/**
 * @note Address: 0x8028EB68
 * @note Size: 0x1AC
 */
void QueenShadowNode::makeShadowSRT()
{
	Matrixf* mat1C = mMainMtx;
	Matrixf* mat   = _24->getWorldMatrix();
	PSMTXConcat(mat->mMatrix.mtxView, _28.mMatrix.mtxView, mat1C->mMatrix.mtxView);

	Vector3f matVecs[4];
	Matrixf* matCopy = mMainMtx;
	matCopy->getColumn(0, matVecs[0]);
	matCopy->getColumn(1, matVecs[1]);
	matCopy->getColumn(2, matVecs[2]);
	matCopy->getColumn(3, matVecs[3]);

	f32 length   = matVecs[2].length();
	matVecs[0].x = length;
	matVecs[0].y = 0.0f;
	matVecs[0].z = 0.0f;

	matVecs[1].x = 0.0f;
	matVecs[1].y = 3.0f;
	matVecs[1].z = 0.0f;

	matVecs[2].x = 0.0f;
	matVecs[2].y = 0.0f;
	matVecs[2].z = length;

	matVecs[3].y = mapMgr->getMinY(matVecs[3]) + 1.5f;

	mMainMtx->setColumn(0, matVecs[0]);
	mMainMtx->setColumn(1, matVecs[1]);
	mMainMtx->setColumn(2, matVecs[2]);
	mMainMtx->setColumn(3, matVecs[3]);
}

/**
 * @note Address: 0x8028ED14
 * @note Size: 0xB4
 */
QueenShadowMgr::QueenShadowMgr(Obj* obj)
{
	mObj         = obj;
	mRootNode    = new JointShadowRootNode(obj);
	mShadowNodes = new QueenShadowNode*[6];
	for (int i = 0; i < 6; i++) {
		mShadowNodes[i] = new QueenShadowNode;
		mRootNode->add(mShadowNodes[i]);
	}
}

/**
 * @note Address: 0x8028EDC8
 * @note Size: 0x2A4
 */
void QueenShadowMgr::init()
{
	Matrixf mat;
	mat.mMatrix.structView.xx = 85.0f;
	mat.mMatrix.structView.xy = 0.0f;
	mat.mMatrix.structView.xz = 0.0f;

	mat.mMatrix.structView.yx = 0.0f;
	mat.mMatrix.structView.yy = 70.0f;
	mat.mMatrix.structView.yz = 0.0f;

	mat.mMatrix.structView.zx = 0.0f;
	mat.mMatrix.structView.zy = 0.0f;
	mat.mMatrix.structView.zz = 85.0f;

	mat.mMatrix.structView.tx = 0.0f;
	mat.mMatrix.structView.ty = -0.3f;
	mat.mMatrix.structView.tz = 0.0f;

	SysShape::Joint* neck1jnt = mObj->mModel->getJoint("neck1");
	QueenShadowNode* neck1    = mShadowNodes[0];
	neck1->_24                = neck1jnt;
	PSMTXCopy(mat.mMatrix.mtxView, neck1->_28.mMatrix.mtxView);

	mat.mMatrix.structView.xx = 74.0f;
	mat.mMatrix.structView.xy = 0.0f;
	mat.mMatrix.structView.xz = 0.0f;

	mat.mMatrix.structView.yx = 0.0f;
	mat.mMatrix.structView.yy = 59.0f;
	mat.mMatrix.structView.yz = 0.0f;

	mat.mMatrix.structView.zx = 0.0f;
	mat.mMatrix.structView.zy = 0.0f;
	mat.mMatrix.structView.zz = 74.0f;

	mat.mMatrix.structView.tx = -2.7f;
	mat.mMatrix.structView.ty = -0.3f;
	mat.mMatrix.structView.tz = 0.0f;

	SysShape::Joint* neck3jnt = mObj->mModel->getJoint("neck3");
	QueenShadowNode* neck3    = mShadowNodes[1];
	neck3->_24                = neck3jnt;
	PSMTXCopy(mat.mMatrix.mtxView, neck3->_28.mMatrix.mtxView);

	mat.mMatrix.structView.xx = 52.0f;
	mat.mMatrix.structView.xy = 0.0f;
	mat.mMatrix.structView.xz = 0.0f;

	mat.mMatrix.structView.yx = 0.0f;
	mat.mMatrix.structView.yy = 37.0f;
	mat.mMatrix.structView.yz = 0.0f;

	mat.mMatrix.structView.zx = 0.0f;
	mat.mMatrix.structView.zy = 0.0f;
	mat.mMatrix.structView.zz = 52.0f;

	mat.mMatrix.structView.tx = -19.9f;
	mat.mMatrix.structView.ty = -0.3f;
	mat.mMatrix.structView.tz = 0.0f;

	SysShape::Joint* neck5jnt = mObj->mModel->getJoint("neck5");
	QueenShadowNode* neck5    = mShadowNodes[2];
	neck5->_24                = neck5jnt;
	PSMTXCopy(mat.mMatrix.mtxView, neck5->_28.mMatrix.mtxView);

	mat.mMatrix.structView.xx = 22.0f;
	mat.mMatrix.structView.xy = 0.0f;
	mat.mMatrix.structView.xz = 0.0f;

	mat.mMatrix.structView.yx = 0.0f;
	mat.mMatrix.structView.yy = 22.0f;
	mat.mMatrix.structView.yz = 0.0f;

	mat.mMatrix.structView.zx = 0.0f;
	mat.mMatrix.structView.zy = 0.0f;
	mat.mMatrix.structView.zz = 22.0f;

	mat.mMatrix.structView.tx = 0.0f;
	mat.mMatrix.structView.ty = -0.3f;
	mat.mMatrix.structView.tz = 0.0f;

	SysShape::Joint* headjnt = mObj->mModel->getJoint("head");
	QueenShadowNode* head    = mShadowNodes[3];
	head->_24                = headjnt;
	PSMTXCopy(mat.mMatrix.mtxView, head->_28.mMatrix.mtxView);

	mat.mMatrix.structView.xx = 78.0f;
	mat.mMatrix.structView.xy = 0.0f;
	mat.mMatrix.structView.xz = 0.0f;

	mat.mMatrix.structView.yx = 0.0f;
	mat.mMatrix.structView.yy = 63.0f;
	mat.mMatrix.structView.yz = 0.0f;

	mat.mMatrix.structView.zx = 0.0f;
	mat.mMatrix.structView.zy = 0.0f;
	mat.mMatrix.structView.zz = 78.0f;

	mat.mMatrix.structView.tx = 1.9f;
	mat.mMatrix.structView.ty = -0.3f;
	mat.mMatrix.structView.tz = 0.0f;

	SysShape::Joint* body3jnt = mObj->mModel->getJoint("body3");
	QueenShadowNode* body3    = mShadowNodes[4];
	body3->_24                = body3jnt;
	PSMTXCopy(mat.mMatrix.mtxView, body3->_28.mMatrix.mtxView);

	mat.mMatrix.structView.xx = 64.0f;
	mat.mMatrix.structView.xy = 0.0f;
	mat.mMatrix.structView.xz = 0.0f;

	mat.mMatrix.structView.yx = 0.0f;
	mat.mMatrix.structView.yy = 49.0f;
	mat.mMatrix.structView.yz = 0.0f;

	mat.mMatrix.structView.zx = 0.0f;
	mat.mMatrix.structView.zy = 0.0f;
	mat.mMatrix.structView.zz = 64.0f;

	mat.mMatrix.structView.tx = 19.6f;
	mat.mMatrix.structView.ty = -0.3f;
	mat.mMatrix.structView.tz = 0.0f;

	SysShape::Joint* body4jnt = mObj->mModel->getJoint("body4");
	QueenShadowNode* body4    = mShadowNodes[5];
	body4->_24                = body4jnt;
	PSMTXCopy(mat.mMatrix.mtxView, body4->_28.mMatrix.mtxView);
}

/**
 * @note Address: 0x8028F06C
 * @note Size: 0x5C
 */
void QueenShadowMgr::update()
{
	for (int i = 0; i < 6; i++) {
		mShadowNodes[i]->makeShadowSRT();
	}
}
} // namespace Queen
} // namespace Game
