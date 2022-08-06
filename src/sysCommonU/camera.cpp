#include "Camera.h"
#include "types.h"
#include "Vector3.h"
#include "Sys/Sphere.h"
#include "Sys/Cylinder.h"
#include "System.h"
#include "trig.h"
#include "Quat.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_camera_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EB718
    lbl_804EB718:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__11BlendCamera
    __vt__11BlendCamera:
        .4byte 0
        .4byte 0
        .4byte __dt__11BlendCameraFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte writeObject__9CullPlaneFR6StreamR5Plane
        .4byte readObject__9CullPlaneFR6StreamR5Plane
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
        .4byte getViewMatrix__6CameraFb
        .4byte getPosition__6CameraFv
        .4byte updatePlanes__6CameraFv
        .4byte updateScreenConstants__6CameraFv
        .4byte getLookAtPosition___6CameraFv
        .4byte getTargetDistance__6CameraFv
        .4byte getPositionPtr__6CameraFv
        .4byte on_getPositionPtr__6CameraFv
        .4byte getSoundPositionPtr__6CameraFv
        .4byte getSoundMatrixPtr__6CameraFv
        .4byte isSpecialCamera__6CameraFv
        .4byte updateMatrix__6CameraFv
        .4byte doUpdate__11BlendCameraFv
    .global __vt__12LookAtCamera
    __vt__12LookAtCamera:
        .4byte 0
        .4byte 0
        .4byte __dt__12LookAtCameraFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte writeObject__9CullPlaneFR6StreamR5Plane
        .4byte readObject__9CullPlaneFR6StreamR5Plane
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
        .4byte getViewMatrix__6CameraFb
        .4byte getPosition__6CameraFv
        .4byte updatePlanes__6CameraFv
        .4byte updateScreenConstants__6CameraFv
        .4byte getLookAtPosition___12LookAtCameraFv
        .4byte getTargetDistance__6CameraFv
        .4byte getPositionPtr__6CameraFv
        .4byte on_getPositionPtr__12LookAtCameraFv
        .4byte getSoundPositionPtr__6CameraFv
        .4byte getSoundMatrixPtr__6CameraFv
        .4byte isSpecialCamera__6CameraFv
        .4byte updateMatrix__12LookAtCameraFv
        .4byte doUpdate__6CameraFv
        .4byte startVibration__12LookAtCameraFi
    .global __vt__6Camera
    __vt__6Camera:
        .4byte 0
        .4byte 0
        .4byte __dt__6CameraFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte writeObject__9CullPlaneFR6StreamR5Plane
        .4byte readObject__9CullPlaneFR6StreamR5Plane
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
        .4byte getViewMatrix__6CameraFb
        .4byte getPosition__6CameraFv
        .4byte updatePlanes__6CameraFv
        .4byte updateScreenConstants__6CameraFv
        .4byte getLookAtPosition___6CameraFv
        .4byte getTargetDistance__6CameraFv
        .4byte getPositionPtr__6CameraFv
        .4byte on_getPositionPtr__6CameraFv
        .4byte getSoundPositionPtr__6CameraFv
        .4byte getSoundMatrixPtr__6CameraFv
        .4byte isSpecialCamera__6CameraFv
        .4byte updateMatrix__6CameraFv
        .4byte doUpdate__6CameraFv
    .global __vt__11CullFrustum
    __vt__11CullFrustum:
        .4byte 0
        .4byte 0
        .4byte __dt__11CullFrustumFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte writeObject__9CullPlaneFR6StreamR5Plane
        .4byte readObject__9CullPlaneFR6StreamR5Plane
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
        .4byte getViewMatrix__11CullFrustumFb
        .4byte getPosition__11CullFrustumFv
        .4byte updatePlanes__11CullFrustumFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516158
    lbl_80516158:
        .skip 0x4
    .global lbl_8051615C
    lbl_8051615C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520358
    lbl_80520358:
        .4byte 0x00000000
    .global lbl_8052035C
    lbl_8052035C:
        .float 1.0
    .global lbl_80520360
    lbl_80520360:
        .4byte 0x42700000
        .4byte 0x00000000
    .global lbl_80520368
    lbl_80520368:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520370
    lbl_80520370:
        .4byte 0x40490FDB
    .global lbl_80520374
    lbl_80520374:
        .4byte 0x43B40000
    .global lbl_80520378
    lbl_80520378:
        .4byte 0x47FA0000
    .global lbl_8052037C
    lbl_8052037C:
        .float 0.7
    .global lbl_80520380
    lbl_80520380:
        .4byte 0x42C80000
    .global lbl_80520384
    lbl_80520384:
        .4byte 0x3C23D70A
    .global lbl_80520388
    lbl_80520388:
        .float 0.5
    .global lbl_8052038C
    lbl_8052038C:
        .4byte 0x43340000
    .global lbl_80520390
    lbl_80520390:
        .4byte 0x43A2F983
    .global lbl_80520394
    lbl_80520394:
        .4byte 0xC3A2F983
    .global lbl_80520398
    lbl_80520398:
        .4byte 0x40000000
    .global lbl_8052039C
    lbl_8052039C:
        .4byte 0x447A0000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
// inlined in Camera.h header
// CullPlane::CullPlane(int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
// bool CullPlane::isPointVisible(Vector3f&, float)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8041A190
 * Size:	000070
 */
bool CullPlane::isVisible(Sys::Sphere& ball)
{
	float rad = ball.m_radius;

	for (int i = 0; i < m_count; i++) {
		Plane currPlane = m_objects[i];
		if (currPlane.calcDist(ball.m_position) < -rad) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8041A200
 * Size:	000088
 */
bool CullPlane::isCylinderVisible(Sys::Cylinder& cylinder)
{
	for (int i = 0; i < m_count; i++) {
		if (cylinder.culled(m_objects[i])) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
// inlined in Camera.h header
// CullFrustum::CullFrustum(int a)
//     : CullPlane(a)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8041A288
 * Size:	000020
 */
Vector3f CullFrustum::getUpVector()
{
	Vector3f upVec;
	upVec.x = m_viewMatrix->m_matrix.vecView.y[0];
	upVec.y = m_viewMatrix->m_matrix.vecView.y[1];
	upVec.z = m_viewMatrix->m_matrix.vecView.y[2];
	return upVec;
}

/*
 * --INFO--
 * Address:	8041A2A8
 * Size:	00002C
 */
Vector3f CullFrustum::getSideVector()
{
	Vector3f sideVec;
	sideVec.x = -m_viewMatrix->m_matrix.vecView.x[0];
	sideVec.y = -m_viewMatrix->m_matrix.vecView.x[1];
	sideVec.z = -m_viewMatrix->m_matrix.vecView.x[2];
	return sideVec;
}

/*
 * --INFO--
 * Address:	8041A2D4
 * Size:	00002C
 */
Vector3f CullFrustum::getViewVector()
{
	Vector3f viewVec;
	viewVec.x = -m_viewMatrix->m_matrix.vecView.z[0];
	viewVec.y = -m_viewMatrix->m_matrix.vecView.z[1];
	viewVec.z = -m_viewMatrix->m_matrix.vecView.z[2];
	return viewVec;
}

/*
 * --INFO--
 * Address:	8041A300
 * Size:	000074
 */
Vector3f CullFrustum::getPosition()
{
	Vector3f tVec;
	tVec.x = -m_viewMatrix->m_matrix.vecView.x[3];
	tVec.y = -m_viewMatrix->m_matrix.vecView.y[3];
	tVec.z = -m_viewMatrix->m_matrix.vecView.z[3];

	Vector3f xVec;
	xVec.x = m_viewMatrix->m_matrix.vecView.x[0];
	xVec.y = m_viewMatrix->m_matrix.vecView.y[0];
	xVec.z = m_viewMatrix->m_matrix.vecView.z[0];

	Vector3f yVec;
	yVec.x = m_viewMatrix->m_matrix.vecView.x[1];
	yVec.y = m_viewMatrix->m_matrix.vecView.y[1];
	yVec.z = m_viewMatrix->m_matrix.vecView.z[1];

	Vector3f zVec;
	zVec.x = m_viewMatrix->m_matrix.vecView.x[2];
	zVec.y = m_viewMatrix->m_matrix.vecView.y[2];
	zVec.z = m_viewMatrix->m_matrix.vecView.z[2];

	Vector3f position;
	position.x = dot(tVec, xVec);
	position.y = dot(tVec, yVec);
	position.z = dot(tVec, zVec);
	return position;
}

/*
 * --INFO--
 * Address:	8041A374
 * Size:	0002D4
 */
// WIP: https://decomp.me/scratch/Dm64d
void CullFrustum::updatePlanes()
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	mr       r31, r3
	addi     r3, r1, 0x38
	lwz      r5, 0x30(r31)
	mr       r4, r31
	lfs      f2, 0(r5)
	lfs      f1, 4(r5)
	lfs      f0, 8(r5)
	fneg     f2, f2
	fneg     f1, f1
	fneg     f0, f0
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	lfs      f0, 0x10(r5)
	lfs      f1, 0x14(r5)
	lfs      f2, 0x18(r5)
	stfs     f0, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f2, 0x4c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r31)
	lfs      f0, lbl_80520374@sda21(r2)
	lfs      f2, lbl_80520370@sda21(r2)
	fdivs    f0, f1, f0
	lfs      f30, 0x38(r1)
	lfs      f29, 0x3c(r1)
	lfs      f28, 0x40(r1)
	fmuls    f27, f2, f0
	fmr      f1, f27
	bl       tan
	frsp     f1, f1
	lfs      f0, 0x2c(r31)
	fmuls    f1, f0, f1
	bl       atan
	lfs      f0, lbl_80520370@sda21(r2)
	frsp     f31, f1
	addi     r3, r1, 0x68
	addi     r4, r1, 0x50
	fsubs    f1, f0, f27
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x44
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	fmr      f1, f27
	lwz      r5, 0x60(r1)
	addi     r3, r1, 0x68
	stw      r0, 0x2c(r1)
	addi     r4, r1, 0x50
	lwz      r0, 0x64(r1)
	stw      r5, 0x30(r1)
	lwz      r5, 0x24(r31)
	lfs      f0, 0x2c(r1)
	stw      r0, 0x34(r1)
	lfs      f2, 0x30(r1)
	stfs     f0, 0(r5)
	lfs      f0, 0x34(r1)
	stfs     f2, 4(r5)
	stfs     f0, 8(r5)
	lfs      f0, 4(r5)
	lfs      f2, 0(r5)
	fmuls    f0, f0, f29
	lfs      f3, 8(r5)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f3, f28, f0
	stfs     f0, 0xc(r5)
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x44
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	fneg     f1, f31
	lwz      r5, 0x60(r1)
	addi     r3, r1, 0x68
	stw      r0, 0x20(r1)
	addi     r4, r1, 0x44
	lwz      r0, 0x64(r1)
	stw      r5, 0x24(r1)
	lwz      r5, 0x24(r31)
	lfs      f0, 0x20(r1)
	stw      r0, 0x28(r1)
	lfs      f2, 0x24(r1)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x28(r1)
	stfs     f2, 0x14(r5)
	stfs     f0, 0x18(r5)
	lfs      f0, 0x14(r5)
	lfs      f2, 0x10(r5)
	fmuls    f0, f0, f29
	lfs      f3, 0x18(r5)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f3, f28, f0
	stfs     f0, 0x1c(r5)
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x50
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	addi     r3, r1, 0x68
	lwz      r5, 0x60(r1)
	addi     r4, r1, 0x44
	stw      r0, 0x14(r1)
	lwz      r0, 0x64(r1)
	stw      r5, 0x18(r1)
	lwz      r5, 0x24(r31)
	lfs      f1, 0x14(r1)
	stw      r0, 0x1c(r1)
	lfs      f0, 0x18(r1)
	stfs     f1, 0x20(r5)
	lfs      f1, 0x1c(r1)
	stfs     f0, 0x24(r5)
	lfs      f0, lbl_80520370@sda21(r2)
	stfs     f1, 0x28(r5)
	fadds    f1, f0, f31
	lfs      f0, 0x24(r5)
	lfs      f2, 0x20(r5)
	fmuls    f0, f0, f29
	lfs      f3, 0x28(r5)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f3, f28, f0
	stfs     f0, 0x2c(r5)
	bl       PSMTXRotAxisRad
	addi     r3, r1, 0x68
	addi     r4, r1, 0x50
	addi     r5, r1, 0x5c
	bl       PSMTXMultVec
	lwz      r0, 0x5c(r1)
	lwz      r3, 0x60(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x64(r1)
	stw      r3, 0xc(r1)
	lwz      r3, 0x24(r31)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x30(r3)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x34(r3)
	stfs     f0, 0x38(r3)
	lfs      f0, 0x34(r3)
	lfs      f1, 0x30(r3)
	fmuls    f0, f0, f29
	lfs      f2, 0x38(r3)
	fmadds   f0, f1, f30, f0
	fmadds   f0, f2, f28, f0
	stfs     f0, 0x3c(r3)
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	lwz      r0, 0xf4(r1)
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr

	*/
}

/*
 * --INFO--
 * Address:	8041A648
 * Size:	000158
 */
Camera::Camera()
    : CullFrustum(0)
{
	m_jstObject      = 0;
	m_projectionNear = 1.0f;
	m_projectionFar  = 128000.0f;
	_134             = 1.0f;
	_138             = 1.0f;
	_13C             = 1.0f;
	m_soundPosition  = 0;
	PSMTXIdentity(_34.m_matrix.mtxView);
	m_isFixed = false;
	m_far     = 0.0f;
	m_near    = 0.0f;
}

/*
 * --INFO--
 * Address:	8041A7A0
 * Size:	0000A0
 */
// WEAK - in header
// CullFrustum::~CullFrustum() { }

/*
 * --INFO--
 * Address:	8041A840
 * Size:	000018
 */
void Camera::setFixNearFar(bool fixed, float near, float far)
{
	m_isFixed = fixed;
	if (fixed) {
		m_near = near;
		m_far  = far;
	}
}

/*
 * --INFO--
 * Address:	8041A858
 * Size:	0000A8
 */
void Camera::copyFrom(Camera* camera)
{
	m_projectionNear = camera->m_projectionNear;
	m_projectionFar  = camera->m_projectionFar;

	_134 = camera->_134;
	_138 = camera->_138;
	_13C = camera->_13C;

	m_jstObject = camera->m_jstObject;

	m_viewMatrix  = camera->m_viewMatrix;
	m_viewAngle   = camera->m_viewAngle;
	m_aspectRatio = camera->m_aspectRatio;

	for (int i = 0; i < m_count; i++) {
		m_objects[i].setVec(camera->m_objects[i]);
		m_objects[i].setDist(camera->m_objects[i]);
	}
}

/*
 * --INFO--
 * Address:	8041A900
 * Size:	000198
 */
// WIP: https://decomp.me/scratch/wPmZm
void Camera::updatePlanes()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       updatePlanes__11CullFrustumFv
	lwz      r5, 0x30(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 0x20
	lfs      f2, 0x20(r5)
	lfs      f1, 0x24(r5)
	lfs      f0, 0x28(r5)
	fneg     f31, f2
	lwz      r12, 0x4c(r12)
	fneg     f30, f1
	fneg     f29, f0
	mtctr    r12
	bctrl
	fneg     f0, f31
	lfs      f5, 0x74(r31)
	fneg     f6, f30
	lfs      f1, 0x20(r1)
	fneg     f4, f29
	lfs      f7, 0x24(r1)
	stfs     f0, 0x2c(r1)
	fmuls    f2, f30, f5
	fmuls    f3, f31, f5
	lfs      f0, 0x28(r1)
	lwz      r5, 0x2c(r1)
	fmuls    f5, f29, f5
	stfs     f6, 0x30(r1)
	lwz      r4, 0x24(r31)
	lwz      r3, 0x30(r1)
	fadds    f2, f2, f7
	stfs     f4, 0x34(r1)
	fadds    f4, f3, f1
	fadds    f5, f5, f0
	lwz      r0, 0x34(r1)
	stw      r5, 0x14(r1)
	stw      r3, 0x18(r1)
	lfs      f3, 0x14(r1)
	stw      r0, 0x1c(r1)
	lfs      f6, 0x18(r1)
	stfs     f3, 0x40(r4)
	lfs      f3, 0x1c(r1)
	stfs     f6, 0x44(r4)
	stfs     f3, 0x48(r4)
	lfs      f3, 0x44(r4)
	stfs     f31, 0x2c(r1)
	fmuls    f2, f3, f2
	lfs      f3, 0x40(r4)
	stfs     f30, 0x30(r1)
	lwz      r0, 0x2c(r1)
	stfs     f29, 0x34(r1)
	fmadds   f2, f3, f4, f2
	lfs      f3, 0x48(r4)
	stw      r0, 8(r1)
	fmadds   f2, f3, f5, f2
	lwz      r3, 0x30(r1)
	lwz      r0, 0x34(r1)
	stw      r3, 0xc(r1)
	lfs      f4, 8(r1)
	stfs     f2, 0x4c(r4)
	lfs      f6, 0xc(r1)
	lfs      f5, 0x70(r31)
	lwz      r3, 0x24(r31)
	stw      r0, 0x10(r1)
	fmuls    f2, f30, f5
	fmuls    f3, f31, f5
	stfs     f4, 0x50(r3)
	fmuls    f4, f29, f5
	lfs      f5, 0x10(r1)
	fadds    f2, f2, f7
	stfs     f6, 0x54(r3)
	fadds    f1, f3, f1
	stfs     f5, 0x58(r3)
	fadds    f4, f4, f0
	lfs      f0, 0x54(r3)
	lfs      f3, 0x50(r3)
	fmuls    f0, f0, f2
	lfs      f2, 0x58(r3)
	fmadds   f0, f3, f1, f0
	fmadds   f0, f2, f4, f0
	stfs     f0, 0x5c(r3)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr

	*/
}

/*
 * --INFO--
 * Address:	8041AA98
 * Size:	0000B0
 */
Vector3f Camera::getLookAtPosition()
{
	if (isRunning() && m_jstObject) {
		return m_jstObject->_9C;
	} else {
		return getLookAtPosition_();
	}
}

/*
 * --INFO--
 * Address:	8041AB48
 * Size:	000020
 */
Vector3f Camera::getLookAtPosition_() { return Vector3f::zero; }

/*
 * --INFO--
 * Address:	8041AB68
 * Size:	000008
 */
// WEAK - in header
// void Game::P2JST::ObjectCamera::isRunning(void) { return m_isRunning; }

/*
 * --INFO--
 * Address:	8041AB70
 * Size:	000108
 */
Vector3f Camera::getPosition()
{
	if (isRunning() && m_jstObject) {
		return m_jstObject->m_viewPos;
	}

	Vector3f vec;
	vec.x = -m_viewMatrix->m_matrix.structView.tx;
	vec.y = -m_viewMatrix->m_matrix.structView.ty;
	vec.z = -m_viewMatrix->m_matrix.structView.tz;

	return m_viewMatrix->multTranspose(vec);
}

/*
 * --INFO--
 * Address:	8041AC78
 * Size:	00008C
 */
Vector3f* Camera::getPositionPtr()
{
	if (isRunning() && m_jstObject) {
		return &m_jstObject->m_viewPos;
	} else {
		return on_getPositionPtr();
	}
}

/*
 * --INFO--
 * Address:	8041AD04
 * Size:	000008
 */
// WEAK - in header
// Vector3f* Camera::on_getPositionPtr() { return nullptr; }

/*
 * --INFO--
 * Address:	8041AD0C
 * Size:	00001C
 */
float Camera::getNear()
{
	if (m_isFixed) {
		return m_near;
	}
	return m_projectionNear;
}

/*
 * --INFO--
 * Address:	8041AD28
 * Size:	00001C
 */
float Camera::getFar()
{
	if (m_isFixed) {
		return m_far;
	}
	return m_projectionFar;
}

/*
 * --INFO--
 * Address:	8041AD44
 * Size:	000070
 */
void Camera::setProjection()
{
	float far     = getFar();
	Mtx44* matrix = &_B4;
	float near    = getNear();

	C_MTXPerspective(m_viewAngle, m_aspectRatio, near, far, *matrix);
	GXSetProjection(_B4, GX_PERSPECTIVE);
}

/*
 * --INFO--
 * Address:	8041ADB4
 * Size:	000128
 */
void Camera::update()
{
	PSMTX44Copy(_B4, _F4);
	Matrixf* viewMatrix = getViewMatrix(0);
	PSMTXCopy(viewMatrix->m_matrix.mtxView, _34.m_matrix.mtxView);
	// temp_r3 = this->unk140;
	if (isRunning()) {
		m_jstObject->updateCamera();
		updateSoundCamera(0.7f * (PI * PSM::sCamFov));
	} else {
		doUpdate();
		updateMatrix();
		updateSoundCamera(PI * PSM::sCamFov);
	}
	updateScreenConstants();
	updatePlanes();
}

/*
 * --INFO--
 * Address:	8041AEDC
 * Size:	000004
 */
// WEAK - in header
// void Camera::updateMatrix() { }

/*
 * --INFO--
 * Address:	8041AEE0
 * Size:	000018
 */
Matrixf* Camera::getViewMatrix(bool b)
{
	if (b) {
		return &_34;
	}
	return m_viewMatrix;
}

/*
 * --INFO--
 * Address:	8041AEF8
 * Size:	000120
 */
// WIP: https://decomp.me/scratch/Lrkv8
void Camera::calcProperDistance(float, float)
{
	/*
	lfs      f0, lbl_80520384@sda21(r2)
	stwu     r1, -0x20(r1)
	fcmpo    cr0, f2, f0
	bge      lbl_8041AF0C
	lfs      f2, lbl_80520380@sda21(r2)

lbl_8041AF0C:
	lfs      f4, lbl_80520388@sda21(r2)
	lfs      f0, 0x28(r3)
	lfs      f3, lbl_8052038C@sda21(r2)
	fmuls    f4, f4, f0
	lfs      f5, lbl_80520370@sda21(r2)
	lfs      f0, lbl_80520358@sda21(r2)
	fdivs    f3, f4, f3
	fmuls    f5, f5, f3
	fmr      f3, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8041AF3C
	fneg     f3, f5

lbl_8041AF3C:
	lfs      f4, lbl_80520390@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_80520358@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f3, f3, f4
	fcmpo    cr0, f5, f0
	fctiwz   f0, f3
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f3, 4(r4)
	bge      lbl_8041AF94
	lfs      f0, lbl_80520394@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_8041AFAC

lbl_8041AF94:
	fmuls    f0, f5, f4
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_8041AFAC:
	lfs      f7, 0x70(r3)
	fdivs    f3, f3, f0
	lfs      f8, 0x74(r3)
	lfs      f5, lbl_80520398@sda21(r2)
	lfs      f4, lbl_80520380@sda21(r2)
	lfs      f0, 0x2c(r3)
	fsubs    f6, f8, f7
	fmuls    f5, f5, f8
	fdivs    f8, f1, f4
	fneg     f6, f6
	fmuls    f4, f5, f7
	fmuls    f1, f3, f2
	fmuls    f0, f0, f8
	fdivs    f2, f6, f4
	fmuls    f2, f2, f1
	fdivs    f1, f2, f0
	fdivs    f0, f2, f8
	fabs     f1, f1
	fabs     f0, f0
	frsp     f1, f1
	frsp     f0, f0
	fcmpo    cr0, f1, f0
	ble      lbl_8041B00C
	b        lbl_8041B010

lbl_8041B00C:
	fmr      f1, f0

lbl_8041B010:
	addi     r1, r1, 0x20
	blr

	*/
}

/*
 * --INFO--
 * Address:	8041B018
 * Size:	0000E0
 */
void Camera::updateScreenConstants()
{
	_134      = ((m_viewAngle * 0.5f) / 180.0f) * PI;
	float cos = pikmin2_cosf(_134);
	float sin = pikmin2_sinf(_134);

	_138 = cos / sin;

	_13C = -(m_projectionFar - m_projectionNear) / (m_projectionFar * 2.0f * m_projectionNear);
}

/*
 * --INFO--
 * Address:	8041B0F8
 * Size:	0000B8
 */
// WIP: https://decomp.me/scratch/iovxv
float Camera::calcScreenSize(Sys::Sphere&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	lfs      f2, 4(r31)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x24(r3)
	fsubs    f1, f2, f1
	lfs      f4, 0x20(r3)
	fneg     f0, f0
	lfs      f3, 0(r31)
	lfs      f2, 8(r1)
	fneg     f7, f4
	lfs      f4, 0x28(r3)
	fsubs    f2, f3, f2
	fmuls    f0, f1, f0
	lfs      f6, 0x138(r30)
	lfs      f5, 0xc(r31)
	fneg     f1, f4
	lfs      f4, 8(r31)
	lfs      f3, 0x10(r1)
	fmuls    f5, f6, f5
	lfs      f6, 0x13c(r30)
	fsubs    f3, f4, f3
	fmadds   f0, f2, f7, f0
	fmuls    f2, f6, f5
	fmadds   f0, f3, f1, f0
	fdivs    f0, f2, f0
	fabs     f0, f0
	frsp     f1, f0
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr

	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
// void Camera::calcScreenSize(Sys::Sphere&, float&, float&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8041B1B0
 * Size:	0002E8
 */
// WIP: https://decomp.me/scratch/4nLm6
void Camera::updateSoundCamera(float)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	fmr      f2, f1
	lfs      f0, lbl_80520358@sda21(r2)
	mr       r30, r3
	fcmpo    cr0, f2, f0
	bge      lbl_8041B1FC
	fneg     f2, f2

lbl_8041B1FC:
	lfs      f3, lbl_80520390@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80520358@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f2, 4(r3)
	bge      lbl_8041B254
	lfs      f0, lbl_80520394@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8041B26C

lbl_8041B254:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8041B26C:
	fdivs    f28, f2, f0
	lwz      r3, 0x140(r30)
	li       r31, 0
	cmplwi   r3, 0
	beq      lbl_8041B29C
	lwz      r12, 0(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041B29C
	li       r31, 1

lbl_8041B29C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8041B2CC
	lwz      r3, 0x140(r30)
	cmplwi   r3, 0
	beq      lbl_8041B2CC
	lfs      f0, 0x9c(r3)
	stfs     f0, 0x14(r1)
	lfs      f0, 0xa0(r3)
	stfs     f0, 0x18(r1)
	lfs      f0, 0xa4(r3)
	stfs     f0, 0x1c(r1)
	b        lbl_8041B2E4

lbl_8041B2CC:
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl

lbl_8041B2E4:
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lfs      f31, 0x14(r1)
	lwz      r12, 0x4c(r12)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lwz      r3, 0x30(r30)
	fsubs    f2, f30, f0
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x20(r3)
	fsubs    f1, f31, f1
	fsubs    f0, f29, f0
	fmuls    f5, f2, f2
	lfs      f3, 0x24(r3)
	lfs      f2, 0x28(r3)
	fneg     f4, f4
	fmuls    f6, f0, f0
	fmadds   f1, f1, f1, f5
	lfs      f0, lbl_80520358@sda21(r2)
	fneg     f3, f3
	fneg     f5, f2
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8041B368
	ble      lbl_8041B36C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8041B36C

lbl_8041B368:
	fmr      f1, f0

lbl_8041B36C:
	fmuls    f1, f28, f1
	lfs      f0, 0x138(r30)
	addi     r3, r1, 0x20
	addi     r4, r30, 0x84
	fdivs    f0, f1, f0
	fnmsubs  f2, f4, f0, f31
	fnmsubs  f1, f3, f0, f30
	fnmsubs  f0, f5, f0, f29
	stfs     f2, 0x78(r30)
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	lwz      r6, 0x30(r30)
	lfs      f4, 0x78(r30)
	lfs      f5, 0x7c(r30)
	lfs      f6, 0x80(r30)
	lwz      r5, 0(r6)
	lwz      r0, 4(r6)
	stw      r5, 0x20(r1)
	stw      r0, 0x24(r1)
	lfs      f1, 0x20(r1)
	lwz      r5, 8(r6)
	lwz      r0, 0xc(r6)
	lfs      f0, 0x24(r1)
	stw      r5, 0x28(r1)
	fmuls    f0, f5, f0
	stw      r0, 0x2c(r1)
	lfs      f2, 0x28(r1)
	lwz      r5, 0x10(r6)
	fmadds   f0, f4, f1, f0
	lwz      r0, 0x14(r6)
	stw      r5, 0x30(r1)
	fnmadds  f3, f6, f2, f0
	stw      r0, 0x34(r1)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	lwz      r5, 0x18(r6)
	lwz      r0, 0x1c(r6)
	fmuls    f0, f5, f0
	stw      r5, 0x38(r1)
	fmadds   f0, f4, f1, f0
	stw      r0, 0x3c(r1)
	lfs      f1, 0x38(r1)
	lwz      r5, 0x20(r6)
	lwz      r0, 0x24(r6)
	fnmadds  f2, f6, f1, f0
	stw      r0, 0x44(r1)
	stw      r5, 0x40(r1)
	lfs      f0, 0x44(r1)
	lwz      r5, 0x28(r6)
	lwz      r0, 0x2c(r6)
	fmuls    f0, f5, f0
	lfs      f1, 0x40(r1)
	stw      r5, 0x48(r1)
	fmadds   f0, f4, f1, f0
	lfs      f1, 0x48(r1)
	stw      r0, 0x4c(r1)
	fnmadds  f0, f6, f1, f0
	stfs     f3, 0x2c(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x4c(r1)
	bl       PSMTXCopy
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr

	*/
}

/*
 * --INFO--
 * Address:	8041B498
 * Size:	0001AC
 */
LookAtCamera::LookAtCamera()
{
	_174             = Vector3f(0.0f, 0.0f, 1000.0f);
	m_lookAtPosition = 0.0f;
	_18C             = Vector3f(0.0f, 1.0f, 0.0f);
	PSMTXIdentity(_144.m_matrix.mtxView);
	m_viewMatrix = &_144;
}

/*
 * --INFO--
 * Address:	8041B644
 * Size:	0000B0
 */
// WEAK - in header
// Camera::~Camera() { }

/*
 * --INFO--
 * Address:	8041B6F4
 * Size:	000034
 */
void LookAtCamera::updateMatrix() { C_MTXLookAt(_144.m_matrix.mtxView, (Vec*)&_174, (Vec*)&_18C, (Vec*)&m_lookAtPosition); }

/*
 * --INFO--
 * Address:	8041B728
 * Size:	000180
 */
BlendCamera::BlendCamera(int cameraCount, Camera** cameras)
{
	m_cameraCount = cameraCount;
	m_cameras     = new Camera*[m_cameraCount];
	setCameras(cameras);
}

/*
 * --INFO--
 * Address:	8041B8A8
 * Size:	00008C
 */
void BlendCamera::setCameras(Camera** camList)
{
	for (int i = 0; i < m_cameraCount; i++) {
		m_cameras[i] = camList[i];
	}

	m_blendFactor = 0.0f;

	PSMTXCopy(camList[0]->getViewMatrix(false)->m_matrix.mtxView, _150.m_matrix.mtxView);
	m_viewMatrix = &_150;
}

/*
 * --INFO--
 * Address:	8041B934
 * Size:	000060
 */
void BlendCamera::setBlendFactor(float factor)
{
	float blendfactor = factor;
	if (blendfactor < 0.0f) {
		blendfactor = 0.0f;
	} else if (blendfactor > m_cameraCount - 1) {
		blendfactor = m_cameraCount - 1;
	}

	m_blendFactor = blendfactor;
}

/*
 * --INFO--
 * Address:	8041B994
 * Size:	0002A8
 */
// WIP: https://decomp.me/scratch/JbYac
void BlendCamera::doUpdate()
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	mr       r31, r3
	addi     r3, r1, 0x4c
	bl       __ct__4QuatFv
	addi     r3, r1, 0x3c
	bl       __ct__4QuatFv
	addi     r3, r1, 0x2c
	bl       __ct__4QuatFv
	lfs      f2, 0x14c(r31)
	lwz      r3, 0x144(r31)
	fctiwz   f0, f2
	addi     r0, r3, -1
	stfd     f0, 0xc0(r1)
	lwz      r4, 0xc4(r1)
	cmpw     r4, r0
	addi     r29, r4, 1
	blt      lbl_8041BA14
	addi     r4, r4, -1
	addi     r29, r29, -1

lbl_8041BA14:
	xoris    r3, r4, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc4(r1)
	slwi     r30, r4, 2
	lwz      r3, 0x148(r31)
	li       r4, 0
	stw      r0, 0xc0(r1)
	lwzx     r3, r3, r30
	lfd      f1, lbl_80520368@sda21(r2)
	lfd      f0, 0xc0(r1)
	lwz      r12, 0(r3)
	fsubs    f0, f0, f1
	lwz      r12, 0x48(r12)
	fsubs    f31, f2, f0
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x4c
	bl       fromMatrixf__4QuatFR7Matrixf
	lwz      r3, 0x148(r31)
	slwi     r29, r29, 2
	li       r4, 0
	lwzx     r3, r3, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x3c
	bl       fromMatrixf__4QuatFR7Matrixf
	addi     r3, r1, 0x4c
	bl       normalise__4QuatFv
	addi     r3, r1, 0x3c
	bl       normalise__4QuatFv
	lwz      r4, 0x148(r31)
	addi     r3, r1, 0x14
	lwzx     r4, r4, r30
	lwz      r12, 0(r4)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x148(r31)
	addi     r3, r1, 8
	lfs      f30, 0x14(r1)
	lwzx     r4, r4, r29
	lfs      f29, 0x18(r1)
	lwz      r12, 0(r4)
	lfs      f28, 0x1c(r1)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x148(r31)
	fmr      f1, f31
	lfs      f0, lbl_8052035C@sda21(r2)
	addi     r3, r1, 0x4c
	lwzx     r5, r6, r29
	addi     r4, r1, 0x3c
	fsubs    f9, f0, f31
	lfs      f0, 0x28(r5)
	addi     r5, r1, 0x2c
	lfs      f2, 8(r1)
	lfs      f6, 0xc(r1)
	fmuls    f5, f31, f0
	lfs      f8, 0x10(r1)
	fmuls    f4, f30, f9
	lwzx     r6, r6, r30
	fmuls    f3, f2, f31
	fmuls    f2, f29, f9
	fmuls    f0, f6, f31
	lfs      f7, 0x28(r6)
	fadds    f6, f4, f3
	fmadds   f3, f9, f7, f5
	fadds    f5, f2, f0
	fmuls    f4, f28, f9
	stfs     f3, 0x28(r31)
	fmuls    f0, f8, f31
	fneg     f3, f6
	stfs     f6, 0x20(r1)
	fneg     f2, f5
	fadds    f4, f4, f0
	stfs     f5, 0x24(r1)
	fneg     f0, f4
	stfs     f4, 0x28(r1)
	stfs     f3, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       slerp__4QuatFR4QuatfR4Quat
	addi     r3, r1, 0x2c
	bl       normalise__4QuatFv
	addi     r3, r1, 0x8c
	addi     r4, r1, 0x2c
	bl       makeQ__7MatrixfFR4Quat
	addi     r3, r1, 0x8c
	addi     r4, r1, 0x5c
	bl       PSMTXTranspose
	lfs      f3, 0x24(r1)
	addi     r3, r31, 0x150
	lfs      f2, 0x6c(r1)
	addi     r4, r1, 0x20
	lfs      f1, 0x74(r1)
	addi     r5, r1, 0x2c
	lfs      f0, 0x70(r1)
	fmuls    f4, f3, f2
	fmuls    f2, f3, f1
	lfs      f6, 0x20(r1)
	lfs      f5, 0x5c(r1)
	fmuls    f0, f3, f0
	lfs      f3, 0x64(r1)
	lfs      f1, 0x60(r1)
	fmadds   f4, f6, f5, f4
	lfs      f7, 0x28(r1)
	lfs      f5, 0x7c(r1)
	fmadds   f2, f6, f3, f2
	lfs      f3, 0x84(r1)
	fmadds   f0, f6, f1, f0
	lfs      f1, 0x80(r1)
	fmadds   f4, f7, f5, f4
	fmadds   f2, f7, f3, f2
	fmadds   f0, f7, f1, f0
	stfs     f4, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f2, 0x28(r1)
	bl       "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r0, 0x124(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr

	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
// EditorCamera::EditorCamera()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
// void EditorCamera::init(Controller*, Vector3f&, float)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
// void EditorCamera::makeLookAt()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000474
 */
// void EditorCamera::doUpdate()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
// EditorCamera::~EditorCamera()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8041BC3C
 * Size:	0000C0
 */
// WEAK - in header
// BlendCamera::~BlendCamera() { }

/*
 * --INFO--
 * Address:	8041BCFC
 * Size:	000008
 */
// WEAK - in header
// Matrixf* CullFrustum::getViewMatrix(bool) { return m_viewMatrix; }

/*
 * --INFO--
 * Address:	8041BD04
 * Size:	000028
 */
void __sinit_camera_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EB718@ha
	stw      r0, lbl_80516158@sda21(r13)
	stfsu    f0, lbl_804EB718@l(r3)
	stfs     f0, lbl_8051615C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr

	*/
}
