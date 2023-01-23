#include "Game/Entities/Queen.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Queen {

/*
 * --INFO--
 * Address:	8028EB68
 * Size:	0001AC
 */
void QueenShadowNode::makeShadowSRT()
{
	Matrixf* mat1C = _1C;
	Matrixf* mat   = _24->getWorldMatrix();
	PSMTXConcat(mat->m_matrix.mtxView, _28.m_matrix.mtxView, mat1C->m_matrix.mtxView);

	Vector3f matVecs[4];
	Matrixf* matCopy = _1C;
	matCopy->getBasis(0, matVecs[0]);
	matCopy->getBasis(1, matVecs[1]);
	matCopy->getBasis(2, matVecs[2]);
	matCopy->getBasis(3, matVecs[3]);

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

	_1C->setBasis(0, matVecs[0]);
	_1C->setBasis(1, matVecs[1]);
	_1C->setBasis(2, matVecs[2]);
	_1C->setBasis(3, matVecs[3]);
}

/*
 * --INFO--
 * Address:	8028ED14
 * Size:	0000B4
 */
QueenShadowMgr::QueenShadowMgr(Obj* obj)
{
	m_obj         = obj;
	m_rootNode    = new JointShadowRootNode(obj);
	m_shadowNodes = new QueenShadowNode*[6];
	for (int i = 0; i < 6; i++) {
		m_shadowNodes[i] = new QueenShadowNode;
		m_rootNode->add(m_shadowNodes[i]);
	}
}

/*
 * --INFO--
 * Address:	8028EDC8
 * Size:	0002A4
 */
void QueenShadowMgr::init()
{
	Matrixf mat;
	mat.m_matrix.structView.xx = 85.0f;
	mat.m_matrix.structView.xy = 0.0f;
	mat.m_matrix.structView.xz = 0.0f;

	mat.m_matrix.structView.yx = 0.0f;
	mat.m_matrix.structView.yy = 70.0f;
	mat.m_matrix.structView.yz = 0.0f;

	mat.m_matrix.structView.zx = 0.0f;
	mat.m_matrix.structView.zy = 0.0f;
	mat.m_matrix.structView.zz = 85.0f;

	mat.m_matrix.structView.tx = 0.0f;
	mat.m_matrix.structView.ty = -0.3f;
	mat.m_matrix.structView.tz = 0.0f;

	SysShape::Joint* neck1jnt = m_obj->m_model->getJoint("neck1");
	QueenShadowNode* neck1    = m_shadowNodes[0];
	neck1->_24                = neck1jnt;
	PSMTXCopy(mat.m_matrix.mtxView, neck1->_28.m_matrix.mtxView);

	mat.m_matrix.structView.xx = 74.0f;
	mat.m_matrix.structView.xy = 0.0f;
	mat.m_matrix.structView.xz = 0.0f;

	mat.m_matrix.structView.yx = 0.0f;
	mat.m_matrix.structView.yy = 59.0f;
	mat.m_matrix.structView.yz = 0.0f;

	mat.m_matrix.structView.zx = 0.0f;
	mat.m_matrix.structView.zy = 0.0f;
	mat.m_matrix.structView.zz = 74.0f;

	mat.m_matrix.structView.tx = -2.7f;
	mat.m_matrix.structView.ty = -0.3f;
	mat.m_matrix.structView.tz = 0.0f;

	SysShape::Joint* neck3jnt = m_obj->m_model->getJoint("neck3");
	QueenShadowNode* neck3    = m_shadowNodes[1];
	neck3->_24                = neck3jnt;
	PSMTXCopy(mat.m_matrix.mtxView, neck3->_28.m_matrix.mtxView);

	mat.m_matrix.structView.xx = 52.0f;
	mat.m_matrix.structView.xy = 0.0f;
	mat.m_matrix.structView.xz = 0.0f;

	mat.m_matrix.structView.yx = 0.0f;
	mat.m_matrix.structView.yy = 37.0f;
	mat.m_matrix.structView.yz = 0.0f;

	mat.m_matrix.structView.zx = 0.0f;
	mat.m_matrix.structView.zy = 0.0f;
	mat.m_matrix.structView.zz = 52.0f;

	mat.m_matrix.structView.tx = -19.9f;
	mat.m_matrix.structView.ty = -0.3f;
	mat.m_matrix.structView.tz = 0.0f;

	SysShape::Joint* neck5jnt = m_obj->m_model->getJoint("neck5");
	QueenShadowNode* neck5    = m_shadowNodes[2];
	neck5->_24                = neck5jnt;
	PSMTXCopy(mat.m_matrix.mtxView, neck5->_28.m_matrix.mtxView);

	mat.m_matrix.structView.xx = 22.0f;
	mat.m_matrix.structView.xy = 0.0f;
	mat.m_matrix.structView.xz = 0.0f;

	mat.m_matrix.structView.yx = 0.0f;
	mat.m_matrix.structView.yy = 22.0f;
	mat.m_matrix.structView.yz = 0.0f;

	mat.m_matrix.structView.zx = 0.0f;
	mat.m_matrix.structView.zy = 0.0f;
	mat.m_matrix.structView.zz = 22.0f;

	mat.m_matrix.structView.tx = 0.0f;
	mat.m_matrix.structView.ty = -0.3f;
	mat.m_matrix.structView.tz = 0.0f;

	SysShape::Joint* headjnt = m_obj->m_model->getJoint("head");
	QueenShadowNode* head    = m_shadowNodes[3];
	head->_24                = headjnt;
	PSMTXCopy(mat.m_matrix.mtxView, head->_28.m_matrix.mtxView);

	mat.m_matrix.structView.xx = 78.0f;
	mat.m_matrix.structView.xy = 0.0f;
	mat.m_matrix.structView.xz = 0.0f;

	mat.m_matrix.structView.yx = 0.0f;
	mat.m_matrix.structView.yy = 63.0f;
	mat.m_matrix.structView.yz = 0.0f;

	mat.m_matrix.structView.zx = 0.0f;
	mat.m_matrix.structView.zy = 0.0f;
	mat.m_matrix.structView.zz = 78.0f;

	mat.m_matrix.structView.tx = 1.9f;
	mat.m_matrix.structView.ty = -0.3f;
	mat.m_matrix.structView.tz = 0.0f;

	SysShape::Joint* body3jnt = m_obj->m_model->getJoint("body3");
	QueenShadowNode* body3    = m_shadowNodes[4];
	body3->_24                = body3jnt;
	PSMTXCopy(mat.m_matrix.mtxView, body3->_28.m_matrix.mtxView);

	mat.m_matrix.structView.xx = 64.0f;
	mat.m_matrix.structView.xy = 0.0f;
	mat.m_matrix.structView.xz = 0.0f;

	mat.m_matrix.structView.yx = 0.0f;
	mat.m_matrix.structView.yy = 49.0f;
	mat.m_matrix.structView.yz = 0.0f;

	mat.m_matrix.structView.zx = 0.0f;
	mat.m_matrix.structView.zy = 0.0f;
	mat.m_matrix.structView.zz = 64.0f;

	mat.m_matrix.structView.tx = 19.6f;
	mat.m_matrix.structView.ty = -0.3f;
	mat.m_matrix.structView.tz = 0.0f;

	SysShape::Joint* body4jnt = m_obj->m_model->getJoint("body4");
	QueenShadowNode* body4    = m_shadowNodes[5];
	body4->_24                = body4jnt;
	PSMTXCopy(mat.m_matrix.mtxView, body4->_28.m_matrix.mtxView);
}

/*
 * --INFO--
 * Address:	8028F06C
 * Size:	00005C
 */
void QueenShadowMgr::update()
{
	for (int i = 0; i < 6; i++) {
		m_shadowNodes[i]->makeShadowSRT();
	}
}
} // namespace Queen
} // namespace Game
