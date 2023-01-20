#include "Game/Entities/BigFoot.h"

namespace Game {
namespace BigFoot {

static const char bigFootShadowName[] = "246-BigFootShadow";

/*
 * --INFO--
 * Address:	802C7810
 * Size:	00020C
 */
BigFootShadowMgr::BigFootShadowMgr(Obj* obj)
{
	m_obj              = obj;
	m_rootNode         = new JointShadowRootNode(obj);
	m_bodySphereShadow = new SphereShadowNode;

	m_rootNode->add(m_bodySphereShadow);

	for (int i = 0; i < 4; i++) {
		m_legTubeShadow1[i]   = new TubeShadowTransNode;
		m_legTubeShadow2[i]   = new TubeShadowSetNode;
		m_legTubeShadow3[i]   = new TubeShadowSetNode;
		m_legSphereShadow1[i] = new SphereShadowNode;
		m_legSphereShadow2[i] = new SphereShadowNode;
		m_legSphereShadow3[i] = new SphereShadowNode;
		m_rootNode->add(m_legTubeShadow1[i]);
		m_rootNode->add(m_legTubeShadow2[i]);
		m_rootNode->add(m_legTubeShadow3[i]);
		m_rootNode->add(m_legSphereShadow1[i]);
		m_rootNode->add(m_legSphereShadow2[i]);
		m_rootNode->add(m_legSphereShadow3[i]);

		for (int j = 0; j < 4; j++) {
			m_jointPosPtrs[i][j] = nullptr;
		}
	}
}

/*
 * --INFO--
 * Address:	802C7A1C
 * Size:	00014C
 */
void BigFootShadowMgr::init()
{
	SysShape::Model* model = m_obj->m_model;

	m_matrix = model->getJoint("kosi")->getWorldMatrix();

	m_legTubeShadow1[0]->m_joint = model->getJoint("rhand1jnt");
	m_legTubeShadow2[0]->m_joint = model->getJoint("rhand2jnt");
	m_legTubeShadow3[0]->m_joint = model->getJoint("rhand3jnt");

	m_legTubeShadow1[1]->m_joint = model->getJoint("lhand1jnt");
	m_legTubeShadow2[1]->m_joint = model->getJoint("lhand2jnt");
	m_legTubeShadow3[1]->m_joint = model->getJoint("lhand3jnt");

	m_legTubeShadow1[2]->m_joint = model->getJoint("rfoot1jnt");
	m_legTubeShadow2[2]->m_joint = model->getJoint("rfoot2jnt");
	m_legTubeShadow3[2]->m_joint = model->getJoint("rfoot3jnt");

	m_legTubeShadow1[3]->m_joint = model->getJoint("lfoot1jnt");
	m_legTubeShadow2[3]->m_joint = model->getJoint("lfoot2jnt");
	m_legTubeShadow3[3]->m_joint = model->getJoint("lfoot3jnt");
}

/*
 * --INFO--
 * Address:	802C7B68
 * Size:	000018
 */
void BigFootShadowMgr::setJointPosPtr(int p1, int p2, Vector3f* posPtr) { m_jointPosPtrs[p1][p2] = posPtr; }

/*
 * --INFO--
 * Address:	802C7B80
 * Size:	000370
 */
void BigFootShadowMgr::update()
{
	Vector3f pos = m_obj->getTraceCentrePosition();
	JointShadowParm shadowParm;
	shadowParm._00 = pos;
	shadowParm._0C = Vector3f(0.5f, 3.0f, 0.5f);
	shadowParm._0C.normalise();

	Vector3f translation = m_matrix->getBasis(3);
	translation.y += -75.0f;

	f32 shadowScale = m_obj->m_shadowScale;

	f32 shadowA = 2.5f * shadowScale;
	f32 shadowB = 40.0f * shadowScale;

	shadowParm._18 = 0.0f;
	shadowParm._1C = 0.0f;
	shadowParm._20 = 60.0f * shadowScale;
	shadowParm._24 = -65.0f;

	m_bodySphereShadow->makeShadowSRT(shadowParm, translation);

	Vector3f jointVectors[4];
	for (int i = 0; i < 4; i++) {
		shadowParm._18 = 72.5f;
		shadowParm._1C = -65.0f;
		shadowParm._20 = shadowA;
		shadowParm._24 = -10.0f;
		m_legTubeShadow1[i]->makeShadowSRT(shadowParm, jointVectors[0], jointVectors[1]);

		shadowParm._18 = 0.0f;
		shadowParm._1C = 0.0f;
		shadowParm._20 = shadowA;
		shadowParm._24 = -10.0f;
		m_legTubeShadow2[i]->makeShadowSRT(shadowParm, jointVectors[1], jointVectors[2]);

		shadowParm._18 = -5.0f;
		shadowParm._1C = -5.0f;
		shadowParm._20 = shadowA;
		shadowParm._24 = -10.0f;
		m_legTubeShadow3[i]->makeShadowSRT(shadowParm, jointVectors[2], jointVectors[3]);

		shadowParm._18 = 0.0f;
		shadowParm._1C = 0.0f;
		shadowParm._20 = shadowA;
		shadowParm._24 = -5.0f;
		m_legSphereShadow1[i]->makeShadowSRT(shadowParm, jointVectors[1]);

		shadowParm._24 = -8.0f;
		m_legSphereShadow2[i]->makeShadowSRT(shadowParm, jointVectors[2]);

		shadowParm._20 = shadowB;
		shadowParm._24 = -5.0f;
		m_legSphereShadow3[i]->makeShadowSRT(shadowParm, jointVectors[3]);

		for (int j = 0; j < 4; j++) {
			if (m_jointPosPtrs[i][j]) {
				m_jointPosPtrs[i][j]->x = jointVectors[j].x;
				m_jointPosPtrs[i][j]->y = jointVectors[j].y;
				m_jointPosPtrs[i][j]->z = jointVectors[j].z;
			}
		}
	}
}
} // namespace BigFoot
} // namespace Game
