.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_camera_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__11BlendCamera, global
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
.endobj __vt__11BlendCamera
.obj __vt__12LookAtCamera, global
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
.endobj __vt__12LookAtCamera
.obj __vt__6Camera, global
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
.endobj __vt__6Camera
.obj __vt__11CullFrustum, global
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
.endobj __vt__11CullFrustum

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520358, local
	.float 0.0
.endobj lbl_80520358
.obj lbl_8052035C, local
	.float 1.0
.endobj lbl_8052035C
.obj lbl_80520360, local
	.float 60.0
.endobj lbl_80520360
.balign 8
.obj lbl_80520368, local
	.8byte 0x4330000080000000
.endobj lbl_80520368
.obj lbl_80520370, local
	.float 3.1415927 # pi
.endobj lbl_80520370
.obj lbl_80520374, local
	.float 360.0
.endobj lbl_80520374
.obj lbl_80520378, local
	.float 128000.0
.endobj lbl_80520378
.obj lbl_8052037C, local
	.float 0.7
.endobj lbl_8052037C
.obj lbl_80520380, local
	.float 100.0
.endobj lbl_80520380
.obj lbl_80520384, local
	.float 0.01
.endobj lbl_80520384
.obj lbl_80520388, local
	.float 0.5
.endobj lbl_80520388
.obj lbl_8052038C, local
	.float 180.0
.endobj lbl_8052038C
.obj lbl_80520390, local
	.float 325.9493
.endobj lbl_80520390
.obj lbl_80520394, local
	.float -325.9493
.endobj lbl_80520394
.obj lbl_80520398, local
	.float 2.0
.endobj lbl_80520398
.obj lbl_8052039C, local
	.float 1000.0
.endobj lbl_8052039C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn isVisible__9CullPlaneFRQ23Sys6Sphere, global
/* 8041A190 004170D0  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8041A194 004170D4  38 C0 00 00 */	li r6, 0
/* 8041A198 004170D8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8041A19C 004170DC  FC C0 00 50 */	fneg f6, f0
/* 8041A1A0 004170E0  7C 09 03 A6 */	mtctr r0
/* 8041A1A4 004170E4  2C 00 00 00 */	cmpwi r0, 0
/* 8041A1A8 004170E8  40 81 00 50 */	ble .L_8041A1F8
.L_8041A1AC:
/* 8041A1AC 004170EC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8041A1B0 004170F0  C0 24 00 04 */	lfs f1, 4(r4)
/* 8041A1B4 004170F4  7C A0 32 14 */	add r5, r0, r6
/* 8041A1B8 004170F8  C0 64 00 00 */	lfs f3, 0(r4)
/* 8041A1BC 004170FC  C0 05 00 04 */	lfs f0, 4(r5)
/* 8041A1C0 00417100  C0 45 00 00 */	lfs f2, 0(r5)
/* 8041A1C4 00417104  EC 21 00 32 */	fmuls f1, f1, f0
/* 8041A1C8 00417108  C0 A4 00 08 */	lfs f5, 8(r4)
/* 8041A1CC 0041710C  C0 85 00 08 */	lfs f4, 8(r5)
/* 8041A1D0 00417110  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 8041A1D4 00417114  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8041A1D8 00417118  EC 25 09 3A */	fmadds f1, f5, f4, f1
/* 8041A1DC 0041711C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8041A1E0 00417120  FC 00 30 40 */	fcmpo cr0, f0, f6
/* 8041A1E4 00417124  40 80 00 0C */	bge .L_8041A1F0
/* 8041A1E8 00417128  38 60 00 00 */	li r3, 0
/* 8041A1EC 0041712C  4E 80 00 20 */	blr 
.L_8041A1F0:
/* 8041A1F0 00417130  38 C6 00 10 */	addi r6, r6, 0x10
/* 8041A1F4 00417134  42 00 FF B8 */	bdnz .L_8041A1AC
.L_8041A1F8:
/* 8041A1F8 00417138  38 60 00 01 */	li r3, 1
/* 8041A1FC 0041713C  4E 80 00 20 */	blr 
.endfn isVisible__9CullPlaneFRQ23Sys6Sphere

.fn isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder, global
/* 8041A200 00417140  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041A204 00417144  7C 08 02 A6 */	mflr r0
/* 8041A208 00417148  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041A20C 0041714C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041A210 00417150  3B E0 00 00 */	li r31, 0
/* 8041A214 00417154  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041A218 00417158  3B C0 00 00 */	li r30, 0
/* 8041A21C 0041715C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041A220 00417160  7C 9D 23 78 */	mr r29, r4
/* 8041A224 00417164  93 81 00 10 */	stw r28, 0x10(r1)
/* 8041A228 00417168  7C 7C 1B 78 */	mr r28, r3
/* 8041A22C 0041716C  48 00 00 2C */	b .L_8041A258
.L_8041A230:
/* 8041A230 00417170  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 8041A234 00417174  7F A3 EB 78 */	mr r3, r29
/* 8041A238 00417178  7C 80 FA 14 */	add r4, r0, r31
/* 8041A23C 0041717C  48 00 75 29 */	bl culled__Q23Sys8CylinderFRC5Plane
/* 8041A240 00417180  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8041A244 00417184  41 82 00 0C */	beq .L_8041A250
/* 8041A248 00417188  38 60 00 00 */	li r3, 0
/* 8041A24C 0041718C  48 00 00 1C */	b .L_8041A268
.L_8041A250:
/* 8041A250 00417190  3B FF 00 10 */	addi r31, r31, 0x10
/* 8041A254 00417194  3B DE 00 01 */	addi r30, r30, 1
.L_8041A258:
/* 8041A258 00417198  80 1C 00 1C */	lwz r0, 0x1c(r28)
/* 8041A25C 0041719C  7C 1E 00 00 */	cmpw r30, r0
/* 8041A260 004171A0  41 80 FF D0 */	blt .L_8041A230
/* 8041A264 004171A4  38 60 00 01 */	li r3, 1
.L_8041A268:
/* 8041A268 004171A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041A26C 004171AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041A270 004171B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041A274 004171B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041A278 004171B8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8041A27C 004171BC  7C 08 03 A6 */	mtlr r0
/* 8041A280 004171C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8041A284 004171C4  4E 80 00 20 */	blr 
.endfn isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder

.fn getUpVector__11CullFrustumFv, global
/* 8041A288 004171C8  80 84 00 30 */	lwz r4, 0x30(r4)
/* 8041A28C 004171CC  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 8041A290 004171D0  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 8041A294 004171D4  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8041A298 004171D8  D0 03 00 00 */	stfs f0, 0(r3)
/* 8041A29C 004171DC  D0 23 00 04 */	stfs f1, 4(r3)
/* 8041A2A0 004171E0  D0 43 00 08 */	stfs f2, 8(r3)
/* 8041A2A4 004171E4  4E 80 00 20 */	blr 
.endfn getUpVector__11CullFrustumFv

.fn getSideVector__11CullFrustumFv, global
/* 8041A2A8 004171E8  80 84 00 30 */	lwz r4, 0x30(r4)
/* 8041A2AC 004171EC  C0 04 00 00 */	lfs f0, 0(r4)
/* 8041A2B0 004171F0  C0 44 00 04 */	lfs f2, 4(r4)
/* 8041A2B4 004171F4  FC 00 00 50 */	fneg f0, f0
/* 8041A2B8 004171F8  C0 24 00 08 */	lfs f1, 8(r4)
/* 8041A2BC 004171FC  FC 40 10 50 */	fneg f2, f2
/* 8041A2C0 00417200  FC 20 08 50 */	fneg f1, f1
/* 8041A2C4 00417204  D0 03 00 00 */	stfs f0, 0(r3)
/* 8041A2C8 00417208  D0 43 00 04 */	stfs f2, 4(r3)
/* 8041A2CC 0041720C  D0 23 00 08 */	stfs f1, 8(r3)
/* 8041A2D0 00417210  4E 80 00 20 */	blr 
.endfn getSideVector__11CullFrustumFv

.fn getViewVector__11CullFrustumFv, global
/* 8041A2D4 00417214  80 84 00 30 */	lwz r4, 0x30(r4)
/* 8041A2D8 00417218  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 8041A2DC 0041721C  C0 44 00 24 */	lfs f2, 0x24(r4)
/* 8041A2E0 00417220  FC 00 00 50 */	fneg f0, f0
/* 8041A2E4 00417224  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8041A2E8 00417228  FC 40 10 50 */	fneg f2, f2
/* 8041A2EC 0041722C  FC 20 08 50 */	fneg f1, f1
/* 8041A2F0 00417230  D0 03 00 00 */	stfs f0, 0(r3)
/* 8041A2F4 00417234  D0 43 00 04 */	stfs f2, 4(r3)
/* 8041A2F8 00417238  D0 23 00 08 */	stfs f1, 8(r3)
/* 8041A2FC 0041723C  4E 80 00 20 */	blr 
.endfn getViewVector__11CullFrustumFv

.fn getPosition__11CullFrustumFv, global
/* 8041A300 00417240  80 84 00 30 */	lwz r4, 0x30(r4)
/* 8041A304 00417244  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8041A308 00417248  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 8041A30C 0041724C  FC C0 00 50 */	fneg f6, f0
/* 8041A310 00417250  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8041A314 00417254  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 8041A318 00417258  FC E0 08 50 */	fneg f7, f1
/* 8041A31C 0041725C  C0 64 00 2C */	lfs f3, 0x2c(r4)
/* 8041A320 00417260  EC 06 00 32 */	fmuls f0, f6, f0
/* 8041A324 00417264  C0 24 00 00 */	lfs f1, 0(r4)
/* 8041A328 00417268  EC 86 00 B2 */	fmuls f4, f6, f2
/* 8041A32C 0041726C  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 8041A330 00417270  FD 00 18 50 */	fneg f8, f3
/* 8041A334 00417274  C0 A4 00 04 */	lfs f5, 4(r4)
/* 8041A338 00417278  EC 07 00 7A */	fmadds f0, f7, f1, f0
/* 8041A33C 0041727C  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 8041A340 00417280  EC 46 00 B2 */	fmuls f2, f6, f2
/* 8041A344 00417284  C0 64 00 08 */	lfs f3, 8(r4)
/* 8041A348 00417288  EC A7 21 7A */	fmadds f5, f7, f5, f4
/* 8041A34C 0041728C  C0 C4 00 24 */	lfs f6, 0x24(r4)
/* 8041A350 00417290  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 8041A354 00417294  C0 84 00 28 */	lfs f4, 0x28(r4)
/* 8041A358 00417298  EC 27 10 FA */	fmadds f1, f7, f3, f2
/* 8041A35C 0041729C  EC 48 29 BA */	fmadds f2, f8, f6, f5
/* 8041A360 004172A0  D0 03 00 00 */	stfs f0, 0(r3)
/* 8041A364 004172A4  EC 08 09 3A */	fmadds f0, f8, f4, f1
/* 8041A368 004172A8  D0 43 00 04 */	stfs f2, 4(r3)
/* 8041A36C 004172AC  D0 03 00 08 */	stfs f0, 8(r3)
/* 8041A370 004172B0  4E 80 00 20 */	blr 
.endfn getPosition__11CullFrustumFv

.fn updatePlanes__11CullFrustumFv, global
/* 8041A374 004172B4  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8041A378 004172B8  7C 08 02 A6 */	mflr r0
/* 8041A37C 004172BC  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8041A380 004172C0  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8041A384 004172C4  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8041A388 004172C8  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8041A38C 004172CC  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 8041A390 004172D0  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 8041A394 004172D4  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 8041A398 004172D8  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 8041A39C 004172DC  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 8041A3A0 004172E0  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 8041A3A4 004172E4  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 8041A3A8 004172E8  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8041A3AC 004172EC  7C 7F 1B 78 */	mr r31, r3
/* 8041A3B0 004172F0  38 61 00 38 */	addi r3, r1, 0x38
/* 8041A3B4 004172F4  80 BF 00 30 */	lwz r5, 0x30(r31)
/* 8041A3B8 004172F8  7F E4 FB 78 */	mr r4, r31
/* 8041A3BC 004172FC  C0 45 00 00 */	lfs f2, 0(r5)
/* 8041A3C0 00417300  C0 25 00 04 */	lfs f1, 4(r5)
/* 8041A3C4 00417304  C0 05 00 08 */	lfs f0, 8(r5)
/* 8041A3C8 00417308  FC 40 10 50 */	fneg f2, f2
/* 8041A3CC 0041730C  FC 20 08 50 */	fneg f1, f1
/* 8041A3D0 00417310  FC 00 00 50 */	fneg f0, f0
/* 8041A3D4 00417314  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 8041A3D8 00417318  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 8041A3DC 0041731C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8041A3E0 00417320  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8041A3E4 00417324  C0 25 00 14 */	lfs f1, 0x14(r5)
/* 8041A3E8 00417328  C0 45 00 18 */	lfs f2, 0x18(r5)
/* 8041A3EC 0041732C  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8041A3F0 00417330  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8041A3F4 00417334  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 8041A3F8 00417338  81 9F 00 00 */	lwz r12, 0(r31)
/* 8041A3FC 0041733C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8041A400 00417340  7D 89 03 A6 */	mtctr r12
/* 8041A404 00417344  4E 80 04 21 */	bctrl 
/* 8041A408 00417348  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8041A40C 0041734C  C0 02 20 14 */	lfs f0, lbl_80520374@sda21(r2)
/* 8041A410 00417350  C0 42 20 10 */	lfs f2, lbl_80520370@sda21(r2)
/* 8041A414 00417354  EC 01 00 24 */	fdivs f0, f1, f0
/* 8041A418 00417358  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 8041A41C 0041735C  C3 A1 00 3C */	lfs f29, 0x3c(r1)
/* 8041A420 00417360  C3 81 00 40 */	lfs f28, 0x40(r1)
/* 8041A424 00417364  EF 62 00 32 */	fmuls f27, f2, f0
/* 8041A428 00417368  FC 20 D8 90 */	fmr f1, f27
/* 8041A42C 0041736C  4B CB 54 C9 */	bl tan
/* 8041A430 00417370  FC 20 08 18 */	frsp f1, f1
/* 8041A434 00417374  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 8041A438 00417378  EC 20 00 72 */	fmuls f1, f0, f1
/* 8041A43C 0041737C  4B CB 4A F5 */	bl atan
/* 8041A440 00417380  C0 02 20 10 */	lfs f0, lbl_80520370@sda21(r2)
/* 8041A444 00417384  FF E0 08 18 */	frsp f31, f1
/* 8041A448 00417388  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A44C 0041738C  38 81 00 50 */	addi r4, r1, 0x50
/* 8041A450 00417390  EC 20 D8 28 */	fsubs f1, f0, f27
/* 8041A454 00417394  4B CD 02 91 */	bl PSMTXRotAxisRad
/* 8041A458 00417398  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A45C 0041739C  38 81 00 44 */	addi r4, r1, 0x44
/* 8041A460 004173A0  38 A1 00 5C */	addi r5, r1, 0x5c
/* 8041A464 004173A4  4B CD 07 75 */	bl PSMTXMultVec
/* 8041A468 004173A8  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8041A46C 004173AC  FC 20 D8 90 */	fmr f1, f27
/* 8041A470 004173B0  80 A1 00 60 */	lwz r5, 0x60(r1)
/* 8041A474 004173B4  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A478 004173B8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8041A47C 004173BC  38 81 00 50 */	addi r4, r1, 0x50
/* 8041A480 004173C0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8041A484 004173C4  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8041A488 004173C8  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8041A48C 004173CC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8041A490 004173D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8041A494 004173D4  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 8041A498 004173D8  D0 05 00 00 */	stfs f0, 0(r5)
/* 8041A49C 004173DC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8041A4A0 004173E0  D0 45 00 04 */	stfs f2, 4(r5)
/* 8041A4A4 004173E4  D0 05 00 08 */	stfs f0, 8(r5)
/* 8041A4A8 004173E8  C0 05 00 04 */	lfs f0, 4(r5)
/* 8041A4AC 004173EC  C0 45 00 00 */	lfs f2, 0(r5)
/* 8041A4B0 004173F0  EC 00 07 72 */	fmuls f0, f0, f29
/* 8041A4B4 004173F4  C0 65 00 08 */	lfs f3, 8(r5)
/* 8041A4B8 004173F8  EC 02 07 BA */	fmadds f0, f2, f30, f0
/* 8041A4BC 004173FC  EC 03 07 3A */	fmadds f0, f3, f28, f0
/* 8041A4C0 00417400  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 8041A4C4 00417404  4B CD 02 21 */	bl PSMTXRotAxisRad
/* 8041A4C8 00417408  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A4CC 0041740C  38 81 00 44 */	addi r4, r1, 0x44
/* 8041A4D0 00417410  38 A1 00 5C */	addi r5, r1, 0x5c
/* 8041A4D4 00417414  4B CD 07 05 */	bl PSMTXMultVec
/* 8041A4D8 00417418  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8041A4DC 0041741C  FC 20 F8 50 */	fneg f1, f31
/* 8041A4E0 00417420  80 A1 00 60 */	lwz r5, 0x60(r1)
/* 8041A4E4 00417424  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A4E8 00417428  90 01 00 20 */	stw r0, 0x20(r1)
/* 8041A4EC 0041742C  38 81 00 44 */	addi r4, r1, 0x44
/* 8041A4F0 00417430  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8041A4F4 00417434  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8041A4F8 00417438  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8041A4FC 0041743C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8041A500 00417440  90 01 00 28 */	stw r0, 0x28(r1)
/* 8041A504 00417444  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8041A508 00417448  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 8041A50C 0041744C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8041A510 00417450  D0 45 00 14 */	stfs f2, 0x14(r5)
/* 8041A514 00417454  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 8041A518 00417458  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 8041A51C 0041745C  C0 45 00 10 */	lfs f2, 0x10(r5)
/* 8041A520 00417460  EC 00 07 72 */	fmuls f0, f0, f29
/* 8041A524 00417464  C0 65 00 18 */	lfs f3, 0x18(r5)
/* 8041A528 00417468  EC 02 07 BA */	fmadds f0, f2, f30, f0
/* 8041A52C 0041746C  EC 03 07 3A */	fmadds f0, f3, f28, f0
/* 8041A530 00417470  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 8041A534 00417474  4B CD 01 B1 */	bl PSMTXRotAxisRad
/* 8041A538 00417478  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A53C 0041747C  38 81 00 50 */	addi r4, r1, 0x50
/* 8041A540 00417480  38 A1 00 5C */	addi r5, r1, 0x5c
/* 8041A544 00417484  4B CD 06 95 */	bl PSMTXMultVec
/* 8041A548 00417488  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8041A54C 0041748C  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A550 00417490  80 A1 00 60 */	lwz r5, 0x60(r1)
/* 8041A554 00417494  38 81 00 44 */	addi r4, r1, 0x44
/* 8041A558 00417498  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041A55C 0041749C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8041A560 004174A0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8041A564 004174A4  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8041A568 004174A8  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8041A56C 004174AC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8041A570 004174B0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8041A574 004174B4  D0 25 00 20 */	stfs f1, 0x20(r5)
/* 8041A578 004174B8  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8041A57C 004174BC  D0 05 00 24 */	stfs f0, 0x24(r5)
/* 8041A580 004174C0  C0 02 20 10 */	lfs f0, lbl_80520370@sda21(r2)
/* 8041A584 004174C4  D0 25 00 28 */	stfs f1, 0x28(r5)
/* 8041A588 004174C8  EC 20 F8 2A */	fadds f1, f0, f31
/* 8041A58C 004174CC  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 8041A590 004174D0  C0 45 00 20 */	lfs f2, 0x20(r5)
/* 8041A594 004174D4  EC 00 07 72 */	fmuls f0, f0, f29
/* 8041A598 004174D8  C0 65 00 28 */	lfs f3, 0x28(r5)
/* 8041A59C 004174DC  EC 02 07 BA */	fmadds f0, f2, f30, f0
/* 8041A5A0 004174E0  EC 03 07 3A */	fmadds f0, f3, f28, f0
/* 8041A5A4 004174E4  D0 05 00 2C */	stfs f0, 0x2c(r5)
/* 8041A5A8 004174E8  4B CD 01 3D */	bl PSMTXRotAxisRad
/* 8041A5AC 004174EC  38 61 00 68 */	addi r3, r1, 0x68
/* 8041A5B0 004174F0  38 81 00 50 */	addi r4, r1, 0x50
/* 8041A5B4 004174F4  38 A1 00 5C */	addi r5, r1, 0x5c
/* 8041A5B8 004174F8  4B CD 06 21 */	bl PSMTXMultVec
/* 8041A5BC 004174FC  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8041A5C0 00417500  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8041A5C4 00417504  90 01 00 08 */	stw r0, 8(r1)
/* 8041A5C8 00417508  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8041A5CC 0041750C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8041A5D0 00417510  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8041A5D4 00417514  C0 01 00 08 */	lfs f0, 8(r1)
/* 8041A5D8 00417518  90 01 00 10 */	stw r0, 0x10(r1)
/* 8041A5DC 0041751C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8041A5E0 00417520  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 8041A5E4 00417524  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8041A5E8 00417528  D0 23 00 34 */	stfs f1, 0x34(r3)
/* 8041A5EC 0041752C  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8041A5F0 00417530  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 8041A5F4 00417534  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 8041A5F8 00417538  EC 00 07 72 */	fmuls f0, f0, f29
/* 8041A5FC 0041753C  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8041A600 00417540  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 8041A604 00417544  EC 02 07 3A */	fmadds f0, f2, f28, f0
/* 8041A608 00417548  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 8041A60C 0041754C  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8041A610 00417550  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8041A614 00417554  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 8041A618 00417558  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 8041A61C 0041755C  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 8041A620 00417560  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 8041A624 00417564  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 8041A628 00417568  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 8041A62C 0041756C  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 8041A630 00417570  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 8041A634 00417574  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8041A638 00417578  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8041A63C 0041757C  7C 08 03 A6 */	mtlr r0
/* 8041A640 00417580  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8041A644 00417584  4E 80 00 20 */	blr 
.endfn updatePlanes__11CullFrustumFv

.fn __ct__6CameraFv, global
/* 8041A648 00417588  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041A64C 0041758C  7C 08 02 A6 */	mflr r0
/* 8041A650 00417590  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041A654 00417594  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041A658 00417598  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041A65C 0041759C  7C 7E 1B 78 */	mr r30, r3
/* 8041A660 004175A0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041A664 004175A4  7F DD F3 78 */	mr r29, r30
/* 8041A668 004175A8  7F BF EB 78 */	mr r31, r29
/* 8041A66C 004175AC  4B FF 6D 25 */	bl __ct__5CNodeFv
/* 8041A670 004175B0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8041A674 004175B4  3C 60 80 4B */	lis r3, "__vt__17Container<5Plane>"@ha
/* 8041A678 004175B8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8041A67C 004175BC  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8041A680 004175C0  90 1D 00 00 */	stw r0, 0(r29)
/* 8041A684 004175C4  38 03 0E 20 */	addi r0, r3, "__vt__17Container<5Plane>"@l
/* 8041A688 004175C8  3C 60 80 4B */	lis r3, __vt__9CullPlane@ha
/* 8041A68C 004175CC  38 E0 00 00 */	li r7, 0
/* 8041A690 004175D0  90 1D 00 00 */	stw r0, 0(r29)
/* 8041A694 004175D4  38 C4 0E 4C */	addi r6, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8041A698 004175D8  38 A0 00 01 */	li r5, 1
/* 8041A69C 004175DC  38 03 0E 94 */	addi r0, r3, __vt__9CullPlane@l
/* 8041A6A0 004175E0  98 FD 00 18 */	stb r7, 0x18(r29)
/* 8041A6A4 004175E4  7F A3 EB 78 */	mr r3, r29
/* 8041A6A8 004175E8  38 80 00 06 */	li r4, 6
/* 8041A6AC 004175EC  90 DD 00 00 */	stw r6, 0(r29)
/* 8041A6B0 004175F0  98 BD 00 18 */	stb r5, 0x18(r29)
/* 8041A6B4 004175F4  90 FD 00 20 */	stw r7, 0x20(r29)
/* 8041A6B8 004175F8  90 FD 00 1C */	stw r7, 0x1c(r29)
/* 8041A6BC 004175FC  90 FD 00 24 */	stw r7, 0x24(r29)
/* 8041A6C0 00417600  90 1D 00 00 */	stw r0, 0(r29)
/* 8041A6C4 00417604  81 9D 00 00 */	lwz r12, 0(r29)
/* 8041A6C8 00417608  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8041A6CC 0041760C  7D 89 03 A6 */	mtctr r12
/* 8041A6D0 00417610  4E 80 04 21 */	bctrl 
/* 8041A6D4 00417614  38 00 00 06 */	li r0, 6
/* 8041A6D8 00417618  3C 60 80 4F */	lis r3, __vt__11CullFrustum@ha
/* 8041A6DC 0041761C  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 8041A6E0 00417620  38 03 B8 9C */	addi r0, r3, __vt__11CullFrustum@l
/* 8041A6E4 00417624  C0 02 20 00 */	lfs f0, lbl_80520360@sda21(r2)
/* 8041A6E8 00417628  90 1F 00 00 */	stw r0, 0(r31)
/* 8041A6EC 0041762C  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8041A6F0 00417630  48 00 8B 35 */	bl getRenderModeObj__6SystemFv
/* 8041A6F4 00417634  A3 A3 00 06 */	lhz r29, 6(r3)
/* 8041A6F8 00417638  48 00 8B 2D */	bl getRenderModeObj__6SystemFv
/* 8041A6FC 0041763C  A0 83 00 04 */	lhz r4, 4(r3)
/* 8041A700 00417640  3C 00 43 30 */	lis r0, 0x4330
/* 8041A704 00417644  3C 60 80 4F */	lis r3, __vt__6Camera@ha
/* 8041A708 00417648  90 01 00 08 */	stw r0, 8(r1)
/* 8041A70C 0041764C  7C A4 EB D6 */	divw r5, r4, r29
/* 8041A710 00417650  C8 82 20 08 */	lfd f4, lbl_80520368@sda21(r2)
/* 8041A714 00417654  38 83 B8 20 */	addi r4, r3, __vt__6Camera@l
/* 8041A718 00417658  C0 42 1F FC */	lfs f2, lbl_8052035C@sda21(r2)
/* 8041A71C 0041765C  38 00 00 00 */	li r0, 0
/* 8041A720 00417660  C0 22 20 18 */	lfs f1, lbl_80520378@sda21(r2)
/* 8041A724 00417664  6C A3 80 00 */	xoris r3, r5, 0x8000
/* 8041A728 00417668  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041A72C 0041766C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8041A730 00417670  38 7E 00 34 */	addi r3, r30, 0x34
/* 8041A734 00417674  C8 61 00 08 */	lfd f3, 8(r1)
/* 8041A738 00417678  EC 63 20 28 */	fsubs f3, f3, f4
/* 8041A73C 0041767C  D0 7F 00 2C */	stfs f3, 0x2c(r31)
/* 8041A740 00417680  90 9E 00 00 */	stw r4, 0(r30)
/* 8041A744 00417684  90 1E 01 40 */	stw r0, 0x140(r30)
/* 8041A748 00417688  D0 5E 00 70 */	stfs f2, 0x70(r30)
/* 8041A74C 0041768C  D0 3E 00 74 */	stfs f1, 0x74(r30)
/* 8041A750 00417690  D0 5E 01 34 */	stfs f2, 0x134(r30)
/* 8041A754 00417694  D0 5E 01 38 */	stfs f2, 0x138(r30)
/* 8041A758 00417698  D0 5E 01 3C */	stfs f2, 0x13c(r30)
/* 8041A75C 0041769C  D0 1E 00 78 */	stfs f0, 0x78(r30)
/* 8041A760 004176A0  D0 1E 00 7C */	stfs f0, 0x7c(r30)
/* 8041A764 004176A4  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 8041A768 004176A8  4B CC FB 39 */	bl PSMTXIdentity
/* 8041A76C 004176AC  38 00 00 00 */	li r0, 0
/* 8041A770 004176B0  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041A774 004176B4  98 1E 00 6C */	stb r0, 0x6c(r30)
/* 8041A778 004176B8  7F C3 F3 78 */	mr r3, r30
/* 8041A77C 004176BC  D0 1E 00 68 */	stfs f0, 0x68(r30)
/* 8041A780 004176C0  D0 1E 00 64 */	stfs f0, 0x64(r30)
/* 8041A784 004176C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041A788 004176C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041A78C 004176CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041A790 004176D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041A794 004176D4  7C 08 03 A6 */	mtlr r0
/* 8041A798 004176D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8041A79C 004176DC  4E 80 00 20 */	blr 
.endfn __ct__6CameraFv

.fn __dt__11CullFrustumFv, weak
/* 8041A7A0 004176E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041A7A4 004176E4  7C 08 02 A6 */	mflr r0
/* 8041A7A8 004176E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041A7AC 004176EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041A7B0 004176F0  7C 9F 23 78 */	mr r31, r4
/* 8041A7B4 004176F4  93 C1 00 08 */	stw r30, 8(r1)
/* 8041A7B8 004176F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8041A7BC 004176FC  41 82 00 68 */	beq .L_8041A824
/* 8041A7C0 00417700  3C 80 80 4F */	lis r4, __vt__11CullFrustum@ha
/* 8041A7C4 00417704  38 04 B8 9C */	addi r0, r4, __vt__11CullFrustum@l
/* 8041A7C8 00417708  90 1E 00 00 */	stw r0, 0(r30)
/* 8041A7CC 0041770C  41 82 00 48 */	beq .L_8041A814
/* 8041A7D0 00417710  3C 80 80 4B */	lis r4, __vt__9CullPlane@ha
/* 8041A7D4 00417714  38 04 0E 94 */	addi r0, r4, __vt__9CullPlane@l
/* 8041A7D8 00417718  90 1E 00 00 */	stw r0, 0(r30)
/* 8041A7DC 0041771C  41 82 00 38 */	beq .L_8041A814
/* 8041A7E0 00417720  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8041A7E4 00417724  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8041A7E8 00417728  90 1E 00 00 */	stw r0, 0(r30)
/* 8041A7EC 0041772C  41 82 00 28 */	beq .L_8041A814
/* 8041A7F0 00417730  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 8041A7F4 00417734  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 8041A7F8 00417738  90 1E 00 00 */	stw r0, 0(r30)
/* 8041A7FC 0041773C  41 82 00 18 */	beq .L_8041A814
/* 8041A800 00417740  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8041A804 00417744  38 80 00 00 */	li r4, 0
/* 8041A808 00417748  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8041A80C 0041774C  90 1E 00 00 */	stw r0, 0(r30)
/* 8041A810 00417750  4B FF 6D 79 */	bl __dt__5CNodeFv
.L_8041A814:
/* 8041A814 00417754  7F E0 07 35 */	extsh. r0, r31
/* 8041A818 00417758  40 81 00 0C */	ble .L_8041A824
/* 8041A81C 0041775C  7F C3 F3 78 */	mr r3, r30
/* 8041A820 00417760  4B C0 98 95 */	bl __dl__FPv
.L_8041A824:
/* 8041A824 00417764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041A828 00417768  7F C3 F3 78 */	mr r3, r30
/* 8041A82C 0041776C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041A830 00417770  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041A834 00417774  7C 08 03 A6 */	mtlr r0
/* 8041A838 00417778  38 21 00 10 */	addi r1, r1, 0x10
/* 8041A83C 0041777C  4E 80 00 20 */	blr 
.endfn __dt__11CullFrustumFv

.fn setFixNearFar__6CameraFbff, global
/* 8041A840 00417780  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8041A844 00417784  98 83 00 6C */	stb r4, 0x6c(r3)
/* 8041A848 00417788  4D 82 00 20 */	beqlr 
/* 8041A84C 0041778C  D0 23 00 64 */	stfs f1, 0x64(r3)
/* 8041A850 00417790  D0 43 00 68 */	stfs f2, 0x68(r3)
/* 8041A854 00417794  4E 80 00 20 */	blr 
.endfn setFixNearFar__6CameraFbff

.fn copyFrom__6CameraFP6Camera, global
/* 8041A858 00417798  C0 04 00 70 */	lfs f0, 0x70(r4)
/* 8041A85C 0041779C  39 00 00 00 */	li r8, 0
/* 8041A860 004177A0  38 E0 00 00 */	li r7, 0
/* 8041A864 004177A4  D0 03 00 70 */	stfs f0, 0x70(r3)
/* 8041A868 004177A8  C0 04 00 74 */	lfs f0, 0x74(r4)
/* 8041A86C 004177AC  D0 03 00 74 */	stfs f0, 0x74(r3)
/* 8041A870 004177B0  C0 04 01 34 */	lfs f0, 0x134(r4)
/* 8041A874 004177B4  D0 03 01 34 */	stfs f0, 0x134(r3)
/* 8041A878 004177B8  C0 04 01 38 */	lfs f0, 0x138(r4)
/* 8041A87C 004177BC  D0 03 01 38 */	stfs f0, 0x138(r3)
/* 8041A880 004177C0  C0 04 01 3C */	lfs f0, 0x13c(r4)
/* 8041A884 004177C4  D0 03 01 3C */	stfs f0, 0x13c(r3)
/* 8041A888 004177C8  80 04 01 40 */	lwz r0, 0x140(r4)
/* 8041A88C 004177CC  90 03 01 40 */	stw r0, 0x140(r3)
/* 8041A890 004177D0  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8041A894 004177D4  90 03 00 30 */	stw r0, 0x30(r3)
/* 8041A898 004177D8  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 8041A89C 004177DC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8041A8A0 004177E0  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8041A8A4 004177E4  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8041A8A8 004177E8  48 00 00 48 */	b .L_8041A8F0
.L_8041A8AC:
/* 8041A8AC 004177EC  80 C4 00 24 */	lwz r6, 0x24(r4)
/* 8041A8B0 004177F0  38 07 00 0C */	addi r0, r7, 0xc
/* 8041A8B4 004177F4  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 8041A8B8 004177F8  39 08 00 01 */	addi r8, r8, 1
/* 8041A8BC 004177FC  7C C6 3A 14 */	add r6, r6, r7
/* 8041A8C0 00417800  C0 06 00 00 */	lfs f0, 0(r6)
/* 8041A8C4 00417804  7C A5 3A 14 */	add r5, r5, r7
/* 8041A8C8 00417808  38 E7 00 10 */	addi r7, r7, 0x10
/* 8041A8CC 0041780C  D0 05 00 00 */	stfs f0, 0(r5)
/* 8041A8D0 00417810  C0 06 00 04 */	lfs f0, 4(r6)
/* 8041A8D4 00417814  D0 05 00 04 */	stfs f0, 4(r5)
/* 8041A8D8 00417818  C0 06 00 08 */	lfs f0, 8(r6)
/* 8041A8DC 0041781C  D0 05 00 08 */	stfs f0, 8(r5)
/* 8041A8E0 00417820  80 C4 00 24 */	lwz r6, 0x24(r4)
/* 8041A8E4 00417824  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 8041A8E8 00417828  7C 06 04 2E */	lfsx f0, r6, r0
/* 8041A8EC 0041782C  7C 05 05 2E */	stfsx f0, r5, r0
.L_8041A8F0:
/* 8041A8F0 00417830  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8041A8F4 00417834  7C 08 00 00 */	cmpw r8, r0
/* 8041A8F8 00417838  41 80 FF B4 */	blt .L_8041A8AC
/* 8041A8FC 0041783C  4E 80 00 20 */	blr 
.endfn copyFrom__6CameraFP6Camera

.fn updatePlanes__6CameraFv, global
/* 8041A900 00417840  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8041A904 00417844  7C 08 02 A6 */	mflr r0
/* 8041A908 00417848  90 01 00 74 */	stw r0, 0x74(r1)
/* 8041A90C 0041784C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8041A910 00417850  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8041A914 00417854  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8041A918 00417858  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8041A91C 0041785C  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8041A920 00417860  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8041A924 00417864  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8041A928 00417868  7C 7F 1B 78 */	mr r31, r3
/* 8041A92C 0041786C  4B FF FA 49 */	bl updatePlanes__11CullFrustumFv
/* 8041A930 00417870  80 BF 00 30 */	lwz r5, 0x30(r31)
/* 8041A934 00417874  7F E4 FB 78 */	mr r4, r31
/* 8041A938 00417878  81 9F 00 00 */	lwz r12, 0(r31)
/* 8041A93C 0041787C  38 61 00 20 */	addi r3, r1, 0x20
/* 8041A940 00417880  C0 45 00 20 */	lfs f2, 0x20(r5)
/* 8041A944 00417884  C0 25 00 24 */	lfs f1, 0x24(r5)
/* 8041A948 00417888  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 8041A94C 0041788C  FF E0 10 50 */	fneg f31, f2
/* 8041A950 00417890  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8041A954 00417894  FF C0 08 50 */	fneg f30, f1
/* 8041A958 00417898  FF A0 00 50 */	fneg f29, f0
/* 8041A95C 0041789C  7D 89 03 A6 */	mtctr r12
/* 8041A960 004178A0  4E 80 04 21 */	bctrl 
/* 8041A964 004178A4  FC 00 F8 50 */	fneg f0, f31
/* 8041A968 004178A8  C0 BF 00 74 */	lfs f5, 0x74(r31)
/* 8041A96C 004178AC  FC C0 F0 50 */	fneg f6, f30
/* 8041A970 004178B0  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8041A974 004178B4  FC 80 E8 50 */	fneg f4, f29
/* 8041A978 004178B8  C0 E1 00 24 */	lfs f7, 0x24(r1)
/* 8041A97C 004178BC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8041A980 004178C0  EC 5E 01 72 */	fmuls f2, f30, f5
/* 8041A984 004178C4  EC 7F 01 72 */	fmuls f3, f31, f5
/* 8041A988 004178C8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8041A98C 004178CC  80 A1 00 2C */	lwz r5, 0x2c(r1)
/* 8041A990 004178D0  EC BD 01 72 */	fmuls f5, f29, f5
/* 8041A994 004178D4  D0 C1 00 30 */	stfs f6, 0x30(r1)
/* 8041A998 004178D8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8041A99C 004178DC  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8041A9A0 004178E0  EC 42 38 2A */	fadds f2, f2, f7
/* 8041A9A4 004178E4  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8041A9A8 004178E8  EC 83 08 2A */	fadds f4, f3, f1
/* 8041A9AC 004178EC  EC A5 00 2A */	fadds f5, f5, f0
/* 8041A9B0 004178F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8041A9B4 004178F4  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8041A9B8 004178F8  90 61 00 18 */	stw r3, 0x18(r1)
/* 8041A9BC 004178FC  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8041A9C0 00417900  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8041A9C4 00417904  C0 C1 00 18 */	lfs f6, 0x18(r1)
/* 8041A9C8 00417908  D0 64 00 40 */	stfs f3, 0x40(r4)
/* 8041A9CC 0041790C  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8041A9D0 00417910  D0 C4 00 44 */	stfs f6, 0x44(r4)
/* 8041A9D4 00417914  D0 64 00 48 */	stfs f3, 0x48(r4)
/* 8041A9D8 00417918  C0 64 00 44 */	lfs f3, 0x44(r4)
/* 8041A9DC 0041791C  D3 E1 00 2C */	stfs f31, 0x2c(r1)
/* 8041A9E0 00417920  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8041A9E4 00417924  C0 64 00 40 */	lfs f3, 0x40(r4)
/* 8041A9E8 00417928  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 8041A9EC 0041792C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8041A9F0 00417930  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 8041A9F4 00417934  EC 43 11 3A */	fmadds f2, f3, f4, f2
/* 8041A9F8 00417938  C0 64 00 48 */	lfs f3, 0x48(r4)
/* 8041A9FC 0041793C  90 01 00 08 */	stw r0, 8(r1)
/* 8041AA00 00417940  EC 43 11 7A */	fmadds f2, f3, f5, f2
/* 8041AA04 00417944  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8041AA08 00417948  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8041AA0C 0041794C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8041AA10 00417950  C0 81 00 08 */	lfs f4, 8(r1)
/* 8041AA14 00417954  D0 44 00 4C */	stfs f2, 0x4c(r4)
/* 8041AA18 00417958  C0 C1 00 0C */	lfs f6, 0xc(r1)
/* 8041AA1C 0041795C  C0 BF 00 70 */	lfs f5, 0x70(r31)
/* 8041AA20 00417960  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8041AA24 00417964  90 01 00 10 */	stw r0, 0x10(r1)
/* 8041AA28 00417968  EC 5E 01 72 */	fmuls f2, f30, f5
/* 8041AA2C 0041796C  EC 7F 01 72 */	fmuls f3, f31, f5
/* 8041AA30 00417970  D0 83 00 50 */	stfs f4, 0x50(r3)
/* 8041AA34 00417974  EC 9D 01 72 */	fmuls f4, f29, f5
/* 8041AA38 00417978  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 8041AA3C 0041797C  EC 42 38 2A */	fadds f2, f2, f7
/* 8041AA40 00417980  D0 C3 00 54 */	stfs f6, 0x54(r3)
/* 8041AA44 00417984  EC 23 08 2A */	fadds f1, f3, f1
/* 8041AA48 00417988  D0 A3 00 58 */	stfs f5, 0x58(r3)
/* 8041AA4C 0041798C  EC 84 00 2A */	fadds f4, f4, f0
/* 8041AA50 00417990  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8041AA54 00417994  C0 63 00 50 */	lfs f3, 0x50(r3)
/* 8041AA58 00417998  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8041AA5C 0041799C  C0 43 00 58 */	lfs f2, 0x58(r3)
/* 8041AA60 004179A0  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 8041AA64 004179A4  EC 02 01 3A */	fmadds f0, f2, f4, f0
/* 8041AA68 004179A8  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8041AA6C 004179AC  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8041AA70 004179B0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8041AA74 004179B4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8041AA78 004179B8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8041AA7C 004179BC  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 8041AA80 004179C0  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8041AA84 004179C4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8041AA88 004179C8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8041AA8C 004179CC  7C 08 03 A6 */	mtlr r0
/* 8041AA90 004179D0  38 21 00 70 */	addi r1, r1, 0x70
/* 8041AA94 004179D4  4E 80 00 20 */	blr 
.endfn updatePlanes__6CameraFv

.fn getLookAtPosition__6CameraFv, global
/* 8041AA98 004179D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041AA9C 004179DC  7C 08 02 A6 */	mflr r0
/* 8041AAA0 004179E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041AAA4 004179E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041AAA8 004179E8  3B E0 00 00 */	li r31, 0
/* 8041AAAC 004179EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041AAB0 004179F0  7C 9E 23 78 */	mr r30, r4
/* 8041AAB4 004179F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041AAB8 004179F8  7C 7D 1B 78 */	mr r29, r3
/* 8041AABC 004179FC  80 64 01 40 */	lwz r3, 0x140(r4)
/* 8041AAC0 00417A00  28 03 00 00 */	cmplwi r3, 0
/* 8041AAC4 00417A04  41 82 00 20 */	beq .L_8041AAE4
/* 8041AAC8 00417A08  81 83 00 00 */	lwz r12, 0(r3)
/* 8041AACC 00417A0C  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8041AAD0 00417A10  7D 89 03 A6 */	mtctr r12
/* 8041AAD4 00417A14  4E 80 04 21 */	bctrl 
/* 8041AAD8 00417A18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8041AADC 00417A1C  41 82 00 08 */	beq .L_8041AAE4
/* 8041AAE0 00417A20  3B E0 00 01 */	li r31, 1
.L_8041AAE4:
/* 8041AAE4 00417A24  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8041AAE8 00417A28  41 82 00 2C */	beq .L_8041AB14
/* 8041AAEC 00417A2C  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8041AAF0 00417A30  28 03 00 00 */	cmplwi r3, 0
/* 8041AAF4 00417A34  41 82 00 20 */	beq .L_8041AB14
/* 8041AAF8 00417A38  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8041AAFC 00417A3C  D0 1D 00 00 */	stfs f0, 0(r29)
/* 8041AB00 00417A40  C0 03 00 A0 */	lfs f0, 0xa0(r3)
/* 8041AB04 00417A44  D0 1D 00 04 */	stfs f0, 4(r29)
/* 8041AB08 00417A48  C0 03 00 A4 */	lfs f0, 0xa4(r3)
/* 8041AB0C 00417A4C  D0 1D 00 08 */	stfs f0, 8(r29)
/* 8041AB10 00417A50  48 00 00 1C */	b .L_8041AB2C
.L_8041AB14:
/* 8041AB14 00417A54  7F C4 F3 78 */	mr r4, r30
/* 8041AB18 00417A58  7F A3 EB 78 */	mr r3, r29
/* 8041AB1C 00417A5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041AB20 00417A60  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8041AB24 00417A64  7D 89 03 A6 */	mtctr r12
/* 8041AB28 00417A68  4E 80 04 21 */	bctrl 
.L_8041AB2C:
/* 8041AB2C 00417A6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041AB30 00417A70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041AB34 00417A74  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041AB38 00417A78  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041AB3C 00417A7C  7C 08 03 A6 */	mtlr r0
/* 8041AB40 00417A80  38 21 00 20 */	addi r1, r1, 0x20
/* 8041AB44 00417A84  4E 80 00 20 */	blr 
.endfn getLookAtPosition__6CameraFv

.fn getLookAtPosition___6CameraFv, weak
/* 8041AB48 00417A88  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 8041AB4C 00417A8C  C4 04 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r4)
/* 8041AB50 00417A90  D0 03 00 00 */	stfs f0, 0(r3)
/* 8041AB54 00417A94  C0 04 00 04 */	lfs f0, 4(r4)
/* 8041AB58 00417A98  D0 03 00 04 */	stfs f0, 4(r3)
/* 8041AB5C 00417A9C  C0 04 00 08 */	lfs f0, 8(r4)
/* 8041AB60 00417AA0  D0 03 00 08 */	stfs f0, 8(r3)
/* 8041AB64 00417AA4  4E 80 00 20 */	blr 
.endfn getLookAtPosition___6CameraFv

.fn isRunning__Q34Game5P2JST12ObjectCameraFv, weak
/* 8041AB68 00417AA8  88 63 00 C4 */	lbz r3, 0xc4(r3)
/* 8041AB6C 00417AAC  4E 80 00 20 */	blr 
.endfn isRunning__Q34Game5P2JST12ObjectCameraFv

.fn getPosition__6CameraFv, global
/* 8041AB70 00417AB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041AB74 00417AB4  7C 08 02 A6 */	mflr r0
/* 8041AB78 00417AB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041AB7C 00417ABC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041AB80 00417AC0  3B E0 00 00 */	li r31, 0
/* 8041AB84 00417AC4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041AB88 00417AC8  7C 9E 23 78 */	mr r30, r4
/* 8041AB8C 00417ACC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041AB90 00417AD0  7C 7D 1B 78 */	mr r29, r3
/* 8041AB94 00417AD4  80 64 01 40 */	lwz r3, 0x140(r4)
/* 8041AB98 00417AD8  28 03 00 00 */	cmplwi r3, 0
/* 8041AB9C 00417ADC  41 82 00 20 */	beq .L_8041ABBC
/* 8041ABA0 00417AE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8041ABA4 00417AE4  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8041ABA8 00417AE8  7D 89 03 A6 */	mtctr r12
/* 8041ABAC 00417AEC  4E 80 04 21 */	bctrl 
/* 8041ABB0 00417AF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8041ABB4 00417AF4  41 82 00 08 */	beq .L_8041ABBC
/* 8041ABB8 00417AF8  3B E0 00 01 */	li r31, 1
.L_8041ABBC:
/* 8041ABBC 00417AFC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8041ABC0 00417B00  41 82 00 2C */	beq .L_8041ABEC
/* 8041ABC4 00417B04  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8041ABC8 00417B08  28 03 00 00 */	cmplwi r3, 0
/* 8041ABCC 00417B0C  41 82 00 20 */	beq .L_8041ABEC
/* 8041ABD0 00417B10  C0 03 00 90 */	lfs f0, 0x90(r3)
/* 8041ABD4 00417B14  D0 1D 00 00 */	stfs f0, 0(r29)
/* 8041ABD8 00417B18  C0 03 00 94 */	lfs f0, 0x94(r3)
/* 8041ABDC 00417B1C  D0 1D 00 04 */	stfs f0, 4(r29)
/* 8041ABE0 00417B20  C0 03 00 98 */	lfs f0, 0x98(r3)
/* 8041ABE4 00417B24  D0 1D 00 08 */	stfs f0, 8(r29)
/* 8041ABE8 00417B28  48 00 00 74 */	b .L_8041AC5C
.L_8041ABEC:
/* 8041ABEC 00417B2C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8041ABF0 00417B30  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8041ABF4 00417B34  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8041ABF8 00417B38  FC C0 00 50 */	fneg f6, f0
/* 8041ABFC 00417B3C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8041AC00 00417B40  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 8041AC04 00417B44  FC E0 08 50 */	fneg f7, f1
/* 8041AC08 00417B48  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 8041AC0C 00417B4C  EC 06 00 32 */	fmuls f0, f6, f0
/* 8041AC10 00417B50  C0 23 00 00 */	lfs f1, 0(r3)
/* 8041AC14 00417B54  EC 86 00 B2 */	fmuls f4, f6, f2
/* 8041AC18 00417B58  C0 43 00 18 */	lfs f2, 0x18(r3)
/* 8041AC1C 00417B5C  FD 00 18 50 */	fneg f8, f3
/* 8041AC20 00417B60  C0 A3 00 04 */	lfs f5, 4(r3)
/* 8041AC24 00417B64  EC 07 00 7A */	fmadds f0, f7, f1, f0
/* 8041AC28 00417B68  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8041AC2C 00417B6C  EC 46 00 B2 */	fmuls f2, f6, f2
/* 8041AC30 00417B70  C0 63 00 08 */	lfs f3, 8(r3)
/* 8041AC34 00417B74  EC A7 21 7A */	fmadds f5, f7, f5, f4
/* 8041AC38 00417B78  C0 C3 00 24 */	lfs f6, 0x24(r3)
/* 8041AC3C 00417B7C  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 8041AC40 00417B80  C0 83 00 28 */	lfs f4, 0x28(r3)
/* 8041AC44 00417B84  EC 27 10 FA */	fmadds f1, f7, f3, f2
/* 8041AC48 00417B88  EC 48 29 BA */	fmadds f2, f8, f6, f5
/* 8041AC4C 00417B8C  D0 1D 00 00 */	stfs f0, 0(r29)
/* 8041AC50 00417B90  EC 08 09 3A */	fmadds f0, f8, f4, f1
/* 8041AC54 00417B94  D0 5D 00 04 */	stfs f2, 4(r29)
/* 8041AC58 00417B98  D0 1D 00 08 */	stfs f0, 8(r29)
.L_8041AC5C:
/* 8041AC5C 00417B9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041AC60 00417BA0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041AC64 00417BA4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041AC68 00417BA8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041AC6C 00417BAC  7C 08 03 A6 */	mtlr r0
/* 8041AC70 00417BB0  38 21 00 20 */	addi r1, r1, 0x20
/* 8041AC74 00417BB4  4E 80 00 20 */	blr 
.endfn getPosition__6CameraFv

.fn getPositionPtr__6CameraFv, global
/* 8041AC78 00417BB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041AC7C 00417BBC  7C 08 02 A6 */	mflr r0
/* 8041AC80 00417BC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041AC84 00417BC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041AC88 00417BC8  3B E0 00 00 */	li r31, 0
/* 8041AC8C 00417BCC  93 C1 00 08 */	stw r30, 8(r1)
/* 8041AC90 00417BD0  7C 7E 1B 78 */	mr r30, r3
/* 8041AC94 00417BD4  80 63 01 40 */	lwz r3, 0x140(r3)
/* 8041AC98 00417BD8  28 03 00 00 */	cmplwi r3, 0
/* 8041AC9C 00417BDC  41 82 00 20 */	beq .L_8041ACBC
/* 8041ACA0 00417BE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8041ACA4 00417BE4  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8041ACA8 00417BE8  7D 89 03 A6 */	mtctr r12
/* 8041ACAC 00417BEC  4E 80 04 21 */	bctrl 
/* 8041ACB0 00417BF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8041ACB4 00417BF4  41 82 00 08 */	beq .L_8041ACBC
/* 8041ACB8 00417BF8  3B E0 00 01 */	li r31, 1
.L_8041ACBC:
/* 8041ACBC 00417BFC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8041ACC0 00417C00  41 82 00 18 */	beq .L_8041ACD8
/* 8041ACC4 00417C04  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8041ACC8 00417C08  28 03 00 00 */	cmplwi r3, 0
/* 8041ACCC 00417C0C  41 82 00 0C */	beq .L_8041ACD8
/* 8041ACD0 00417C10  38 63 00 90 */	addi r3, r3, 0x90
/* 8041ACD4 00417C14  48 00 00 18 */	b .L_8041ACEC
.L_8041ACD8:
/* 8041ACD8 00417C18  7F C3 F3 78 */	mr r3, r30
/* 8041ACDC 00417C1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041ACE0 00417C20  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8041ACE4 00417C24  7D 89 03 A6 */	mtctr r12
/* 8041ACE8 00417C28  4E 80 04 21 */	bctrl 
.L_8041ACEC:
/* 8041ACEC 00417C2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041ACF0 00417C30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041ACF4 00417C34  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041ACF8 00417C38  7C 08 03 A6 */	mtlr r0
/* 8041ACFC 00417C3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8041AD00 00417C40  4E 80 00 20 */	blr 
.endfn getPositionPtr__6CameraFv

.fn on_getPositionPtr__6CameraFv, weak
/* 8041AD04 00417C44  38 60 00 00 */	li r3, 0
/* 8041AD08 00417C48  4E 80 00 20 */	blr 
.endfn on_getPositionPtr__6CameraFv

.fn getNear__6CameraFv, global
/* 8041AD0C 00417C4C  88 03 00 6C */	lbz r0, 0x6c(r3)
/* 8041AD10 00417C50  28 00 00 00 */	cmplwi r0, 0
/* 8041AD14 00417C54  41 82 00 0C */	beq .L_8041AD20
/* 8041AD18 00417C58  C0 23 00 64 */	lfs f1, 0x64(r3)
/* 8041AD1C 00417C5C  4E 80 00 20 */	blr 
.L_8041AD20:
/* 8041AD20 00417C60  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 8041AD24 00417C64  4E 80 00 20 */	blr 
.endfn getNear__6CameraFv

.fn getFar__6CameraFv, global
/* 8041AD28 00417C68  88 03 00 6C */	lbz r0, 0x6c(r3)
/* 8041AD2C 00417C6C  28 00 00 00 */	cmplwi r0, 0
/* 8041AD30 00417C70  41 82 00 0C */	beq .L_8041AD3C
/* 8041AD34 00417C74  C0 23 00 68 */	lfs f1, 0x68(r3)
/* 8041AD38 00417C78  4E 80 00 20 */	blr 
.L_8041AD3C:
/* 8041AD3C 00417C7C  C0 23 00 74 */	lfs f1, 0x74(r3)
/* 8041AD40 00417C80  4E 80 00 20 */	blr 
.endfn getFar__6CameraFv

.fn setProjection__6CameraFv, global
/* 8041AD44 00417C84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041AD48 00417C88  7C 08 02 A6 */	mflr r0
/* 8041AD4C 00417C8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041AD50 00417C90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041AD54 00417C94  7C 7F 1B 78 */	mr r31, r3
/* 8041AD58 00417C98  88 03 00 6C */	lbz r0, 0x6c(r3)
/* 8041AD5C 00417C9C  28 00 00 00 */	cmplwi r0, 0
/* 8041AD60 00417CA0  41 82 00 0C */	beq .L_8041AD6C
/* 8041AD64 00417CA4  C0 9F 00 68 */	lfs f4, 0x68(r31)
/* 8041AD68 00417CA8  48 00 00 08 */	b .L_8041AD70
.L_8041AD6C:
/* 8041AD6C 00417CAC  C0 9F 00 74 */	lfs f4, 0x74(r31)
.L_8041AD70:
/* 8041AD70 00417CB0  28 00 00 00 */	cmplwi r0, 0
/* 8041AD74 00417CB4  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8041AD78 00417CB8  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 8041AD7C 00417CBC  38 7F 00 B4 */	addi r3, r31, 0xb4
/* 8041AD80 00417CC0  41 82 00 0C */	beq .L_8041AD8C
/* 8041AD84 00417CC4  C0 7F 00 64 */	lfs f3, 0x64(r31)
/* 8041AD88 00417CC8  48 00 00 08 */	b .L_8041AD90
.L_8041AD8C:
/* 8041AD8C 00417CCC  C0 7F 00 70 */	lfs f3, 0x70(r31)
.L_8041AD90:
/* 8041AD90 00417CD0  4B CC FF 79 */	bl C_MTXPerspective
/* 8041AD94 00417CD4  38 7F 00 B4 */	addi r3, r31, 0xb4
/* 8041AD98 00417CD8  38 80 00 00 */	li r4, 0
/* 8041AD9C 00417CDC  4B CC E6 AD */	bl GXSetProjection
/* 8041ADA0 00417CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041ADA4 00417CE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041ADA8 00417CE8  7C 08 03 A6 */	mtlr r0
/* 8041ADAC 00417CEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8041ADB0 00417CF0  4E 80 00 20 */	blr 
.endfn setProjection__6CameraFv

.fn update__6CameraFv, global
/* 8041ADB4 00417CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041ADB8 00417CF8  7C 08 02 A6 */	mflr r0
/* 8041ADBC 00417CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041ADC0 00417D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041ADC4 00417D04  93 C1 00 08 */	stw r30, 8(r1)
/* 8041ADC8 00417D08  7C 7E 1B 78 */	mr r30, r3
/* 8041ADCC 00417D0C  38 7E 00 B4 */	addi r3, r30, 0xb4
/* 8041ADD0 00417D10  38 9E 00 F4 */	addi r4, r30, 0xf4
/* 8041ADD4 00417D14  4B CD 00 9D */	bl PSMTX44Copy
/* 8041ADD8 00417D18  7F C3 F3 78 */	mr r3, r30
/* 8041ADDC 00417D1C  38 80 00 00 */	li r4, 0
/* 8041ADE0 00417D20  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041ADE4 00417D24  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8041ADE8 00417D28  7D 89 03 A6 */	mtctr r12
/* 8041ADEC 00417D2C  4E 80 04 21 */	bctrl 
/* 8041ADF0 00417D30  38 9E 00 34 */	addi r4, r30, 0x34
/* 8041ADF4 00417D34  4B CC F4 D9 */	bl PSMTXCopy
/* 8041ADF8 00417D38  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8041ADFC 00417D3C  3B E0 00 00 */	li r31, 0
/* 8041AE00 00417D40  28 03 00 00 */	cmplwi r3, 0
/* 8041AE04 00417D44  41 82 00 20 */	beq .L_8041AE24
/* 8041AE08 00417D48  81 83 00 00 */	lwz r12, 0(r3)
/* 8041AE0C 00417D4C  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8041AE10 00417D50  7D 89 03 A6 */	mtctr r12
/* 8041AE14 00417D54  4E 80 04 21 */	bctrl 
/* 8041AE18 00417D58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8041AE1C 00417D5C  41 82 00 08 */	beq .L_8041AE24
/* 8041AE20 00417D60  3B E0 00 01 */	li r31, 1
.L_8041AE24:
/* 8041AE24 00417D64  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8041AE28 00417D68  41 82 00 38 */	beq .L_8041AE60
/* 8041AE2C 00417D6C  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8041AE30 00417D70  81 83 00 00 */	lwz r12, 0(r3)
/* 8041AE34 00417D74  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 8041AE38 00417D78  7D 89 03 A6 */	mtctr r12
/* 8041AE3C 00417D7C  4E 80 04 21 */	bctrl 
/* 8041AE40 00417D80  C0 22 20 10 */	lfs f1, lbl_80520370@sda21(r2)
/* 8041AE44 00417D84  7F C3 F3 78 */	mr r3, r30
/* 8041AE48 00417D88  C0 0D 86 F0 */	lfs f0, sCamFov__3PSM@sda21(r13)
/* 8041AE4C 00417D8C  C0 42 20 1C */	lfs f2, lbl_8052037C@sda21(r2)
/* 8041AE50 00417D90  EC 01 00 32 */	fmuls f0, f1, f0
/* 8041AE54 00417D94  EC 22 00 32 */	fmuls f1, f2, f0
/* 8041AE58 00417D98  48 00 03 59 */	bl updateSoundCamera__6CameraFf
/* 8041AE5C 00417D9C  48 00 00 40 */	b .L_8041AE9C
.L_8041AE60:
/* 8041AE60 00417DA0  7F C3 F3 78 */	mr r3, r30
/* 8041AE64 00417DA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041AE68 00417DA8  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8041AE6C 00417DAC  7D 89 03 A6 */	mtctr r12
/* 8041AE70 00417DB0  4E 80 04 21 */	bctrl 
/* 8041AE74 00417DB4  7F C3 F3 78 */	mr r3, r30
/* 8041AE78 00417DB8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041AE7C 00417DBC  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8041AE80 00417DC0  7D 89 03 A6 */	mtctr r12
/* 8041AE84 00417DC4  4E 80 04 21 */	bctrl 
/* 8041AE88 00417DC8  C0 22 20 10 */	lfs f1, lbl_80520370@sda21(r2)
/* 8041AE8C 00417DCC  7F C3 F3 78 */	mr r3, r30
/* 8041AE90 00417DD0  C0 0D 86 F0 */	lfs f0, sCamFov__3PSM@sda21(r13)
/* 8041AE94 00417DD4  EC 21 00 32 */	fmuls f1, f1, f0
/* 8041AE98 00417DD8  48 00 03 19 */	bl updateSoundCamera__6CameraFf
.L_8041AE9C:
/* 8041AE9C 00417DDC  7F C3 F3 78 */	mr r3, r30
/* 8041AEA0 00417DE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041AEA4 00417DE4  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8041AEA8 00417DE8  7D 89 03 A6 */	mtctr r12
/* 8041AEAC 00417DEC  4E 80 04 21 */	bctrl 
/* 8041AEB0 00417DF0  7F C3 F3 78 */	mr r3, r30
/* 8041AEB4 00417DF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041AEB8 00417DF8  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8041AEBC 00417DFC  7D 89 03 A6 */	mtctr r12
/* 8041AEC0 00417E00  4E 80 04 21 */	bctrl 
/* 8041AEC4 00417E04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041AEC8 00417E08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041AECC 00417E0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041AED0 00417E10  7C 08 03 A6 */	mtlr r0
/* 8041AED4 00417E14  38 21 00 10 */	addi r1, r1, 0x10
/* 8041AED8 00417E18  4E 80 00 20 */	blr 
.endfn update__6CameraFv

.fn updateMatrix__6CameraFv, weak
/* 8041AEDC 00417E1C  4E 80 00 20 */	blr 
.endfn updateMatrix__6CameraFv

.fn getViewMatrix__6CameraFb, global
/* 8041AEE0 00417E20  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8041AEE4 00417E24  41 82 00 0C */	beq .L_8041AEF0
/* 8041AEE8 00417E28  38 63 00 34 */	addi r3, r3, 0x34
/* 8041AEEC 00417E2C  4E 80 00 20 */	blr 
.L_8041AEF0:
/* 8041AEF0 00417E30  80 63 00 30 */	lwz r3, 0x30(r3)
/* 8041AEF4 00417E34  4E 80 00 20 */	blr 
.endfn getViewMatrix__6CameraFb

.fn calcProperDistance__6CameraFff, global
/* 8041AEF8 00417E38  C0 02 20 24 */	lfs f0, lbl_80520384@sda21(r2)
/* 8041AEFC 00417E3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041AF00 00417E40  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8041AF04 00417E44  40 80 00 08 */	bge .L_8041AF0C
/* 8041AF08 00417E48  C0 42 20 20 */	lfs f2, lbl_80520380@sda21(r2)
.L_8041AF0C:
/* 8041AF0C 00417E4C  C0 82 20 28 */	lfs f4, lbl_80520388@sda21(r2)
/* 8041AF10 00417E50  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8041AF14 00417E54  C0 62 20 2C */	lfs f3, lbl_8052038C@sda21(r2)
/* 8041AF18 00417E58  EC 84 00 32 */	fmuls f4, f4, f0
/* 8041AF1C 00417E5C  C0 A2 20 10 */	lfs f5, lbl_80520370@sda21(r2)
/* 8041AF20 00417E60  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041AF24 00417E64  EC 64 18 24 */	fdivs f3, f4, f3
/* 8041AF28 00417E68  EC A5 00 F2 */	fmuls f5, f5, f3
/* 8041AF2C 00417E6C  FC 60 28 90 */	fmr f3, f5
/* 8041AF30 00417E70  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8041AF34 00417E74  40 80 00 08 */	bge .L_8041AF3C
/* 8041AF38 00417E78  FC 60 28 50 */	fneg f3, f5
.L_8041AF3C:
/* 8041AF3C 00417E7C  C0 82 20 30 */	lfs f4, lbl_80520390@sda21(r2)
/* 8041AF40 00417E80  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8041AF44 00417E84  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041AF48 00417E88  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 8041AF4C 00417E8C  EC 63 01 32 */	fmuls f3, f3, f4
/* 8041AF50 00417E90  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8041AF54 00417E94  FC 00 18 1E */	fctiwz f0, f3
/* 8041AF58 00417E98  D8 01 00 08 */	stfd f0, 8(r1)
/* 8041AF5C 00417E9C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8041AF60 00417EA0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041AF64 00417EA4  7C 85 02 14 */	add r4, r5, r0
/* 8041AF68 00417EA8  C0 64 00 04 */	lfs f3, 4(r4)
/* 8041AF6C 00417EAC  40 80 00 28 */	bge .L_8041AF94
/* 8041AF70 00417EB0  C0 02 20 34 */	lfs f0, lbl_80520394@sda21(r2)
/* 8041AF74 00417EB4  EC 05 00 32 */	fmuls f0, f5, f0
/* 8041AF78 00417EB8  FC 00 00 1E */	fctiwz f0, f0
/* 8041AF7C 00417EBC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8041AF80 00417EC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041AF84 00417EC4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041AF88 00417EC8  7C 05 04 2E */	lfsx f0, r5, r0
/* 8041AF8C 00417ECC  FC 00 00 50 */	fneg f0, f0
/* 8041AF90 00417ED0  48 00 00 1C */	b .L_8041AFAC
.L_8041AF94:
/* 8041AF94 00417ED4  EC 05 01 32 */	fmuls f0, f5, f4
/* 8041AF98 00417ED8  FC 00 00 1E */	fctiwz f0, f0
/* 8041AF9C 00417EDC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8041AFA0 00417EE0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8041AFA4 00417EE4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041AFA8 00417EE8  7C 05 04 2E */	lfsx f0, r5, r0
.L_8041AFAC:
/* 8041AFAC 00417EEC  C0 E3 00 70 */	lfs f7, 0x70(r3)
/* 8041AFB0 00417EF0  EC 63 00 24 */	fdivs f3, f3, f0
/* 8041AFB4 00417EF4  C1 03 00 74 */	lfs f8, 0x74(r3)
/* 8041AFB8 00417EF8  C0 A2 20 38 */	lfs f5, lbl_80520398@sda21(r2)
/* 8041AFBC 00417EFC  C0 82 20 20 */	lfs f4, lbl_80520380@sda21(r2)
/* 8041AFC0 00417F00  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8041AFC4 00417F04  EC C8 38 28 */	fsubs f6, f8, f7
/* 8041AFC8 00417F08  EC A5 02 32 */	fmuls f5, f5, f8
/* 8041AFCC 00417F0C  ED 01 20 24 */	fdivs f8, f1, f4
/* 8041AFD0 00417F10  FC C0 30 50 */	fneg f6, f6
/* 8041AFD4 00417F14  EC 85 01 F2 */	fmuls f4, f5, f7
/* 8041AFD8 00417F18  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8041AFDC 00417F1C  EC 00 02 32 */	fmuls f0, f0, f8
/* 8041AFE0 00417F20  EC 46 20 24 */	fdivs f2, f6, f4
/* 8041AFE4 00417F24  EC 42 00 72 */	fmuls f2, f2, f1
/* 8041AFE8 00417F28  EC 22 00 24 */	fdivs f1, f2, f0
/* 8041AFEC 00417F2C  EC 02 40 24 */	fdivs f0, f2, f8
/* 8041AFF0 00417F30  FC 20 0A 10 */	fabs f1, f1
/* 8041AFF4 00417F34  FC 00 02 10 */	fabs f0, f0
/* 8041AFF8 00417F38  FC 20 08 18 */	frsp f1, f1
/* 8041AFFC 00417F3C  FC 00 00 18 */	frsp f0, f0
/* 8041B000 00417F40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041B004 00417F44  40 81 00 08 */	ble .L_8041B00C
/* 8041B008 00417F48  48 00 00 08 */	b .L_8041B010
.L_8041B00C:
/* 8041B00C 00417F4C  FC 20 00 90 */	fmr f1, f0
.L_8041B010:
/* 8041B010 00417F50  38 21 00 20 */	addi r1, r1, 0x20
/* 8041B014 00417F54  4E 80 00 20 */	blr 
.endfn calcProperDistance__6CameraFff

.fn updateScreenConstants__6CameraFv, global
/* 8041B018 00417F58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041B01C 00417F5C  C0 42 20 28 */	lfs f2, lbl_80520388@sda21(r2)
/* 8041B020 00417F60  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8041B024 00417F64  C0 22 20 2C */	lfs f1, lbl_8052038C@sda21(r2)
/* 8041B028 00417F68  EC 42 00 32 */	fmuls f2, f2, f0
/* 8041B02C 00417F6C  C0 62 20 10 */	lfs f3, lbl_80520370@sda21(r2)
/* 8041B030 00417F70  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B034 00417F74  EC 22 08 24 */	fdivs f1, f2, f1
/* 8041B038 00417F78  EC 23 00 72 */	fmuls f1, f3, f1
/* 8041B03C 00417F7C  D0 23 01 34 */	stfs f1, 0x134(r3)
/* 8041B040 00417F80  C0 63 01 34 */	lfs f3, 0x134(r3)
/* 8041B044 00417F84  FC 20 18 90 */	fmr f1, f3
/* 8041B048 00417F88  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8041B04C 00417F8C  40 80 00 08 */	bge .L_8041B054
/* 8041B050 00417F90  FC 20 18 50 */	fneg f1, f3
.L_8041B054:
/* 8041B054 00417F94  C0 42 20 30 */	lfs f2, lbl_80520390@sda21(r2)
/* 8041B058 00417F98  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8041B05C 00417F9C  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B060 00417FA0  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 8041B064 00417FA4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8041B068 00417FA8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8041B06C 00417FAC  FC 00 08 1E */	fctiwz f0, f1
/* 8041B070 00417FB0  D8 01 00 08 */	stfd f0, 8(r1)
/* 8041B074 00417FB4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8041B078 00417FB8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041B07C 00417FBC  7C 85 02 14 */	add r4, r5, r0
/* 8041B080 00417FC0  C0 24 00 04 */	lfs f1, 4(r4)
/* 8041B084 00417FC4  40 80 00 28 */	bge .L_8041B0AC
/* 8041B088 00417FC8  C0 02 20 34 */	lfs f0, lbl_80520394@sda21(r2)
/* 8041B08C 00417FCC  EC 03 00 32 */	fmuls f0, f3, f0
/* 8041B090 00417FD0  FC 00 00 1E */	fctiwz f0, f0
/* 8041B094 00417FD4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8041B098 00417FD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041B09C 00417FDC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041B0A0 00417FE0  7C 05 04 2E */	lfsx f0, r5, r0
/* 8041B0A4 00417FE4  FC 00 00 50 */	fneg f0, f0
/* 8041B0A8 00417FE8  48 00 00 1C */	b .L_8041B0C4
.L_8041B0AC:
/* 8041B0AC 00417FEC  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8041B0B0 00417FF0  FC 00 00 1E */	fctiwz f0, f0
/* 8041B0B4 00417FF4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8041B0B8 00417FF8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8041B0BC 00417FFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041B0C0 00418000  7C 05 04 2E */	lfsx f0, r5, r0
.L_8041B0C4:
/* 8041B0C4 00418004  EC 21 00 24 */	fdivs f1, f1, f0
/* 8041B0C8 00418008  C0 02 20 38 */	lfs f0, lbl_80520398@sda21(r2)
/* 8041B0CC 0041800C  D0 23 01 38 */	stfs f1, 0x138(r3)
/* 8041B0D0 00418010  C0 23 00 74 */	lfs f1, 0x74(r3)
/* 8041B0D4 00418014  C0 43 00 70 */	lfs f2, 0x70(r3)
/* 8041B0D8 00418018  EC 00 00 72 */	fmuls f0, f0, f1
/* 8041B0DC 0041801C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8041B0E0 00418020  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8041B0E4 00418024  FC 20 08 50 */	fneg f1, f1
/* 8041B0E8 00418028  EC 01 00 24 */	fdivs f0, f1, f0
/* 8041B0EC 0041802C  D0 03 01 3C */	stfs f0, 0x13c(r3)
/* 8041B0F0 00418030  38 21 00 20 */	addi r1, r1, 0x20
/* 8041B0F4 00418034  4E 80 00 20 */	blr 
.endfn updateScreenConstants__6CameraFv

.fn calcScreenSize__6CameraFRQ23Sys6Sphere, global
/* 8041B0F8 00418038  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041B0FC 0041803C  7C 08 02 A6 */	mflr r0
/* 8041B100 00418040  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041B104 00418044  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041B108 00418048  7C 9F 23 78 */	mr r31, r4
/* 8041B10C 0041804C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041B110 00418050  7C 7E 1B 78 */	mr r30, r3
/* 8041B114 00418054  7F C4 F3 78 */	mr r4, r30
/* 8041B118 00418058  38 61 00 08 */	addi r3, r1, 8
/* 8041B11C 0041805C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041B120 00418060  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8041B124 00418064  7D 89 03 A6 */	mtctr r12
/* 8041B128 00418068  4E 80 04 21 */	bctrl 
/* 8041B12C 0041806C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8041B130 00418070  C0 5F 00 04 */	lfs f2, 4(r31)
/* 8041B134 00418074  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8041B138 00418078  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8041B13C 0041807C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8041B140 00418080  C0 83 00 20 */	lfs f4, 0x20(r3)
/* 8041B144 00418084  FC 00 00 50 */	fneg f0, f0
/* 8041B148 00418088  C0 7F 00 00 */	lfs f3, 0(r31)
/* 8041B14C 0041808C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8041B150 00418090  FC E0 20 50 */	fneg f7, f4
/* 8041B154 00418094  C0 83 00 28 */	lfs f4, 0x28(r3)
/* 8041B158 00418098  EC 43 10 28 */	fsubs f2, f3, f2
/* 8041B15C 0041809C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8041B160 004180A0  C0 DE 01 38 */	lfs f6, 0x138(r30)
/* 8041B164 004180A4  C0 BF 00 0C */	lfs f5, 0xc(r31)
/* 8041B168 004180A8  FC 20 20 50 */	fneg f1, f4
/* 8041B16C 004180AC  C0 9F 00 08 */	lfs f4, 8(r31)
/* 8041B170 004180B0  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8041B174 004180B4  EC A6 01 72 */	fmuls f5, f6, f5
/* 8041B178 004180B8  C0 DE 01 3C */	lfs f6, 0x13c(r30)
/* 8041B17C 004180BC  EC 64 18 28 */	fsubs f3, f4, f3
/* 8041B180 004180C0  EC 02 01 FA */	fmadds f0, f2, f7, f0
/* 8041B184 004180C4  EC 46 01 72 */	fmuls f2, f6, f5
/* 8041B188 004180C8  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 8041B18C 004180CC  EC 02 00 24 */	fdivs f0, f2, f0
/* 8041B190 004180D0  FC 00 02 10 */	fabs f0, f0
/* 8041B194 004180D4  FC 20 00 18 */	frsp f1, f0
/* 8041B198 004180D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041B19C 004180DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041B1A0 004180E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041B1A4 004180E4  7C 08 03 A6 */	mtlr r0
/* 8041B1A8 004180E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8041B1AC 004180EC  4E 80 00 20 */	blr 
.endfn calcScreenSize__6CameraFRQ23Sys6Sphere

.fn updateSoundCamera__6CameraFf, global
/* 8041B1B0 004180F0  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8041B1B4 004180F4  7C 08 02 A6 */	mflr r0
/* 8041B1B8 004180F8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8041B1BC 004180FC  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8041B1C0 00418100  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8041B1C4 00418104  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 8041B1C8 00418108  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 8041B1CC 0041810C  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8041B1D0 00418110  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 8041B1D4 00418114  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 8041B1D8 00418118  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 8041B1DC 0041811C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8041B1E0 00418120  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8041B1E4 00418124  FC 40 08 90 */	fmr f2, f1
/* 8041B1E8 00418128  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B1EC 0041812C  7C 7E 1B 78 */	mr r30, r3
/* 8041B1F0 00418130  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8041B1F4 00418134  40 80 00 08 */	bge .L_8041B1FC
/* 8041B1F8 00418138  FC 40 10 50 */	fneg f2, f2
.L_8041B1FC:
/* 8041B1FC 0041813C  C0 62 20 30 */	lfs f3, lbl_80520390@sda21(r2)
/* 8041B200 00418140  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8041B204 00418144  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B208 00418148  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8041B20C 0041814C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8041B210 00418150  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041B214 00418154  FC 00 10 1E */	fctiwz f0, f2
/* 8041B218 00418158  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8041B21C 0041815C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8041B220 00418160  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041B224 00418164  7C 64 02 14 */	add r3, r4, r0
/* 8041B228 00418168  C0 43 00 04 */	lfs f2, 4(r3)
/* 8041B22C 0041816C  40 80 00 28 */	bge .L_8041B254
/* 8041B230 00418170  C0 02 20 34 */	lfs f0, lbl_80520394@sda21(r2)
/* 8041B234 00418174  EC 01 00 32 */	fmuls f0, f1, f0
/* 8041B238 00418178  FC 00 00 1E */	fctiwz f0, f0
/* 8041B23C 0041817C  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 8041B240 00418180  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8041B244 00418184  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041B248 00418188  7C 04 04 2E */	lfsx f0, r4, r0
/* 8041B24C 0041818C  FC 00 00 50 */	fneg f0, f0
/* 8041B250 00418190  48 00 00 1C */	b .L_8041B26C
.L_8041B254:
/* 8041B254 00418194  EC 01 00 F2 */	fmuls f0, f1, f3
/* 8041B258 00418198  FC 00 00 1E */	fctiwz f0, f0
/* 8041B25C 0041819C  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8041B260 004181A0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8041B264 004181A4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8041B268 004181A8  7C 04 04 2E */	lfsx f0, r4, r0
.L_8041B26C:
/* 8041B26C 004181AC  EF 82 00 24 */	fdivs f28, f2, f0
/* 8041B270 004181B0  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8041B274 004181B4  3B E0 00 00 */	li r31, 0
/* 8041B278 004181B8  28 03 00 00 */	cmplwi r3, 0
/* 8041B27C 004181BC  41 82 00 20 */	beq .L_8041B29C
/* 8041B280 004181C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8041B284 004181C4  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8041B288 004181C8  7D 89 03 A6 */	mtctr r12
/* 8041B28C 004181CC  4E 80 04 21 */	bctrl 
/* 8041B290 004181D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8041B294 004181D4  41 82 00 08 */	beq .L_8041B29C
/* 8041B298 004181D8  3B E0 00 01 */	li r31, 1
.L_8041B29C:
/* 8041B29C 004181DC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8041B2A0 004181E0  41 82 00 2C */	beq .L_8041B2CC
/* 8041B2A4 004181E4  80 7E 01 40 */	lwz r3, 0x140(r30)
/* 8041B2A8 004181E8  28 03 00 00 */	cmplwi r3, 0
/* 8041B2AC 004181EC  41 82 00 20 */	beq .L_8041B2CC
/* 8041B2B0 004181F0  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8041B2B4 004181F4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8041B2B8 004181F8  C0 03 00 A0 */	lfs f0, 0xa0(r3)
/* 8041B2BC 004181FC  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8041B2C0 00418200  C0 03 00 A4 */	lfs f0, 0xa4(r3)
/* 8041B2C4 00418204  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8041B2C8 00418208  48 00 00 1C */	b .L_8041B2E4
.L_8041B2CC:
/* 8041B2CC 0041820C  7F C4 F3 78 */	mr r4, r30
/* 8041B2D0 00418210  38 61 00 14 */	addi r3, r1, 0x14
/* 8041B2D4 00418214  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041B2D8 00418218  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8041B2DC 0041821C  7D 89 03 A6 */	mtctr r12
/* 8041B2E0 00418220  4E 80 04 21 */	bctrl 
.L_8041B2E4:
/* 8041B2E4 00418224  7F C4 F3 78 */	mr r4, r30
/* 8041B2E8 00418228  38 61 00 08 */	addi r3, r1, 8
/* 8041B2EC 0041822C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8041B2F0 00418230  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 8041B2F4 00418234  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8041B2F8 00418238  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 8041B2FC 0041823C  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 8041B300 00418240  7D 89 03 A6 */	mtctr r12
/* 8041B304 00418244  4E 80 04 21 */	bctrl 
/* 8041B308 00418248  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8041B30C 0041824C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8041B310 00418250  EC 5E 00 28 */	fsubs f2, f30, f0
/* 8041B314 00418254  C0 21 00 08 */	lfs f1, 8(r1)
/* 8041B318 00418258  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8041B31C 0041825C  C0 83 00 20 */	lfs f4, 0x20(r3)
/* 8041B320 00418260  EC 3F 08 28 */	fsubs f1, f31, f1
/* 8041B324 00418264  EC 1D 00 28 */	fsubs f0, f29, f0
/* 8041B328 00418268  EC A2 00 B2 */	fmuls f5, f2, f2
/* 8041B32C 0041826C  C0 63 00 24 */	lfs f3, 0x24(r3)
/* 8041B330 00418270  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 8041B334 00418274  FC 80 20 50 */	fneg f4, f4
/* 8041B338 00418278  EC C0 00 32 */	fmuls f6, f0, f0
/* 8041B33C 0041827C  EC 21 28 7A */	fmadds f1, f1, f1, f5
/* 8041B340 00418280  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B344 00418284  FC 60 18 50 */	fneg f3, f3
/* 8041B348 00418288  FC A0 10 50 */	fneg f5, f2
/* 8041B34C 0041828C  EC 26 08 2A */	fadds f1, f6, f1
/* 8041B350 00418290  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041B354 00418294  40 81 00 14 */	ble .L_8041B368
/* 8041B358 00418298  40 81 00 14 */	ble .L_8041B36C
/* 8041B35C 0041829C  FC 00 08 34 */	frsqrte f0, f1
/* 8041B360 004182A0  EC 20 00 72 */	fmuls f1, f0, f1
/* 8041B364 004182A4  48 00 00 08 */	b .L_8041B36C
.L_8041B368:
/* 8041B368 004182A8  FC 20 00 90 */	fmr f1, f0
.L_8041B36C:
/* 8041B36C 004182AC  EC 3C 00 72 */	fmuls f1, f28, f1
/* 8041B370 004182B0  C0 1E 01 38 */	lfs f0, 0x138(r30)
/* 8041B374 004182B4  38 61 00 20 */	addi r3, r1, 0x20
/* 8041B378 004182B8  38 9E 00 84 */	addi r4, r30, 0x84
/* 8041B37C 004182BC  EC 01 00 24 */	fdivs f0, f1, f0
/* 8041B380 004182C0  EC 44 F8 3C */	fnmsubs f2, f4, f0, f31
/* 8041B384 004182C4  EC 23 F0 3C */	fnmsubs f1, f3, f0, f30
/* 8041B388 004182C8  EC 05 E8 3C */	fnmsubs f0, f5, f0, f29
/* 8041B38C 004182CC  D0 5E 00 78 */	stfs f2, 0x78(r30)
/* 8041B390 004182D0  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 8041B394 004182D4  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 8041B398 004182D8  80 DE 00 30 */	lwz r6, 0x30(r30)
/* 8041B39C 004182DC  C0 9E 00 78 */	lfs f4, 0x78(r30)
/* 8041B3A0 004182E0  C0 BE 00 7C */	lfs f5, 0x7c(r30)
/* 8041B3A4 004182E4  C0 DE 00 80 */	lfs f6, 0x80(r30)
/* 8041B3A8 004182E8  80 A6 00 00 */	lwz r5, 0(r6)
/* 8041B3AC 004182EC  80 06 00 04 */	lwz r0, 4(r6)
/* 8041B3B0 004182F0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8041B3B4 004182F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041B3B8 004182F8  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8041B3BC 004182FC  80 A6 00 08 */	lwz r5, 8(r6)
/* 8041B3C0 00418300  80 06 00 0C */	lwz r0, 0xc(r6)
/* 8041B3C4 00418304  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8041B3C8 00418308  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8041B3CC 0041830C  EC 05 00 32 */	fmuls f0, f5, f0
/* 8041B3D0 00418310  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8041B3D4 00418314  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 8041B3D8 00418318  80 A6 00 10 */	lwz r5, 0x10(r6)
/* 8041B3DC 0041831C  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 8041B3E0 00418320  80 06 00 14 */	lwz r0, 0x14(r6)
/* 8041B3E4 00418324  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8041B3E8 00418328  EC 66 00 BE */	fnmadds f3, f6, f2, f0
/* 8041B3EC 0041832C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8041B3F0 00418330  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8041B3F4 00418334  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8041B3F8 00418338  80 A6 00 18 */	lwz r5, 0x18(r6)
/* 8041B3FC 0041833C  80 06 00 1C */	lwz r0, 0x1c(r6)
/* 8041B400 00418340  EC 05 00 32 */	fmuls f0, f5, f0
/* 8041B404 00418344  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8041B408 00418348  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 8041B40C 0041834C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8041B410 00418350  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8041B414 00418354  80 A6 00 20 */	lwz r5, 0x20(r6)
/* 8041B418 00418358  80 06 00 24 */	lwz r0, 0x24(r6)
/* 8041B41C 0041835C  EC 46 00 7E */	fnmadds f2, f6, f1, f0
/* 8041B420 00418360  90 01 00 44 */	stw r0, 0x44(r1)
/* 8041B424 00418364  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8041B428 00418368  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8041B42C 0041836C  80 A6 00 28 */	lwz r5, 0x28(r6)
/* 8041B430 00418370  80 06 00 2C */	lwz r0, 0x2c(r6)
/* 8041B434 00418374  EC 05 00 32 */	fmuls f0, f5, f0
/* 8041B438 00418378  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 8041B43C 0041837C  90 A1 00 48 */	stw r5, 0x48(r1)
/* 8041B440 00418380  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 8041B444 00418384  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8041B448 00418388  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8041B44C 0041838C  EC 06 00 7E */	fnmadds f0, f6, f1, f0
/* 8041B450 00418390  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8041B454 00418394  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8041B458 00418398  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 8041B45C 0041839C  4B CC EE 71 */	bl PSMTXCopy
/* 8041B460 004183A0  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8041B464 004183A4  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8041B468 004183A8  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8041B46C 004183AC  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 8041B470 004183B0  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 8041B474 004183B4  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 8041B478 004183B8  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 8041B47C 004183BC  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 8041B480 004183C0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8041B484 004183C4  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8041B488 004183C8  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8041B48C 004183CC  7C 08 03 A6 */	mtlr r0
/* 8041B490 004183D0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8041B494 004183D4  4E 80 00 20 */	blr 
.endfn updateSoundCamera__6CameraFf

.fn __ct__12LookAtCameraFv, global
/* 8041B498 004183D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041B49C 004183DC  7C 08 02 A6 */	mflr r0
/* 8041B4A0 004183E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041B4A4 004183E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041B4A8 004183E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041B4AC 004183EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041B4B0 004183F0  7C 7D 1B 78 */	mr r29, r3
/* 8041B4B4 004183F4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8041B4B8 004183F8  7F BC EB 78 */	mr r28, r29
/* 8041B4BC 004183FC  7F 9E E3 78 */	mr r30, r28
/* 8041B4C0 00418400  7F 9F E3 78 */	mr r31, r28
/* 8041B4C4 00418404  4B FF 5E CD */	bl __ct__5CNodeFv
/* 8041B4C8 00418408  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8041B4CC 0041840C  3C 60 80 4B */	lis r3, "__vt__17Container<5Plane>"@ha
/* 8041B4D0 00418410  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8041B4D4 00418414  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8041B4D8 00418418  90 1C 00 00 */	stw r0, 0(r28)
/* 8041B4DC 0041841C  38 03 0E 20 */	addi r0, r3, "__vt__17Container<5Plane>"@l
/* 8041B4E0 00418420  3C 60 80 4B */	lis r3, __vt__9CullPlane@ha
/* 8041B4E4 00418424  38 E0 00 00 */	li r7, 0
/* 8041B4E8 00418428  90 1C 00 00 */	stw r0, 0(r28)
/* 8041B4EC 0041842C  38 C4 0E 4C */	addi r6, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8041B4F0 00418430  38 A0 00 01 */	li r5, 1
/* 8041B4F4 00418434  38 03 0E 94 */	addi r0, r3, __vt__9CullPlane@l
/* 8041B4F8 00418438  98 FC 00 18 */	stb r7, 0x18(r28)
/* 8041B4FC 0041843C  7F 83 E3 78 */	mr r3, r28
/* 8041B500 00418440  38 80 00 06 */	li r4, 6
/* 8041B504 00418444  90 DC 00 00 */	stw r6, 0(r28)
/* 8041B508 00418448  98 BC 00 18 */	stb r5, 0x18(r28)
/* 8041B50C 0041844C  90 FC 00 20 */	stw r7, 0x20(r28)
/* 8041B510 00418450  90 FC 00 1C */	stw r7, 0x1c(r28)
/* 8041B514 00418454  90 FC 00 24 */	stw r7, 0x24(r28)
/* 8041B518 00418458  90 1C 00 00 */	stw r0, 0(r28)
/* 8041B51C 0041845C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8041B520 00418460  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8041B524 00418464  7D 89 03 A6 */	mtctr r12
/* 8041B528 00418468  4E 80 04 21 */	bctrl 
/* 8041B52C 0041846C  38 00 00 06 */	li r0, 6
/* 8041B530 00418470  3C 60 80 4F */	lis r3, __vt__11CullFrustum@ha
/* 8041B534 00418474  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 8041B538 00418478  38 03 B8 9C */	addi r0, r3, __vt__11CullFrustum@l
/* 8041B53C 0041847C  C0 02 20 00 */	lfs f0, lbl_80520360@sda21(r2)
/* 8041B540 00418480  90 1F 00 00 */	stw r0, 0(r31)
/* 8041B544 00418484  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8041B548 00418488  48 00 7C DD */	bl getRenderModeObj__6SystemFv
/* 8041B54C 0041848C  A3 83 00 06 */	lhz r28, 6(r3)
/* 8041B550 00418490  48 00 7C D5 */	bl getRenderModeObj__6SystemFv
/* 8041B554 00418494  A0 83 00 04 */	lhz r4, 4(r3)
/* 8041B558 00418498  3C 00 43 30 */	lis r0, 0x4330
/* 8041B55C 0041849C  3C 60 80 4F */	lis r3, __vt__6Camera@ha
/* 8041B560 004184A0  90 01 00 08 */	stw r0, 8(r1)
/* 8041B564 004184A4  7C A4 E3 D6 */	divw r5, r4, r28
/* 8041B568 004184A8  C8 82 20 08 */	lfd f4, lbl_80520368@sda21(r2)
/* 8041B56C 004184AC  38 83 B8 20 */	addi r4, r3, __vt__6Camera@l
/* 8041B570 004184B0  C0 42 1F FC */	lfs f2, lbl_8052035C@sda21(r2)
/* 8041B574 004184B4  38 00 00 00 */	li r0, 0
/* 8041B578 004184B8  C0 22 20 18 */	lfs f1, lbl_80520378@sda21(r2)
/* 8041B57C 004184BC  6C A3 80 00 */	xoris r3, r5, 0x8000
/* 8041B580 004184C0  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B584 004184C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8041B588 004184C8  38 7E 00 34 */	addi r3, r30, 0x34
/* 8041B58C 004184CC  C8 61 00 08 */	lfd f3, 8(r1)
/* 8041B590 004184D0  EC 63 20 28 */	fsubs f3, f3, f4
/* 8041B594 004184D4  D0 7F 00 2C */	stfs f3, 0x2c(r31)
/* 8041B598 004184D8  90 9E 00 00 */	stw r4, 0(r30)
/* 8041B59C 004184DC  90 1E 01 40 */	stw r0, 0x140(r30)
/* 8041B5A0 004184E0  D0 5E 00 70 */	stfs f2, 0x70(r30)
/* 8041B5A4 004184E4  D0 3E 00 74 */	stfs f1, 0x74(r30)
/* 8041B5A8 004184E8  D0 5E 01 34 */	stfs f2, 0x134(r30)
/* 8041B5AC 004184EC  D0 5E 01 38 */	stfs f2, 0x138(r30)
/* 8041B5B0 004184F0  D0 5E 01 3C */	stfs f2, 0x13c(r30)
/* 8041B5B4 004184F4  D0 1E 00 78 */	stfs f0, 0x78(r30)
/* 8041B5B8 004184F8  D0 1E 00 7C */	stfs f0, 0x7c(r30)
/* 8041B5BC 004184FC  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 8041B5C0 00418500  4B CC EC E1 */	bl PSMTXIdentity
/* 8041B5C4 00418504  38 00 00 00 */	li r0, 0
/* 8041B5C8 00418508  3C 60 80 4F */	lis r3, __vt__12LookAtCamera@ha
/* 8041B5CC 0041850C  98 1E 00 6C */	stb r0, 0x6c(r30)
/* 8041B5D0 00418510  38 03 B7 A0 */	addi r0, r3, __vt__12LookAtCamera@l
/* 8041B5D4 00418514  C0 42 1F F8 */	lfs f2, lbl_80520358@sda21(r2)
/* 8041B5D8 00418518  38 7D 01 44 */	addi r3, r29, 0x144
/* 8041B5DC 0041851C  C0 22 20 3C */	lfs f1, lbl_8052039C@sda21(r2)
/* 8041B5E0 00418520  D0 5E 00 68 */	stfs f2, 0x68(r30)
/* 8041B5E4 00418524  C0 02 1F FC */	lfs f0, lbl_8052035C@sda21(r2)
/* 8041B5E8 00418528  D0 5E 00 64 */	stfs f2, 0x64(r30)
/* 8041B5EC 0041852C  90 1D 00 00 */	stw r0, 0(r29)
/* 8041B5F0 00418530  D0 5D 01 74 */	stfs f2, 0x174(r29)
/* 8041B5F4 00418534  D0 5D 01 78 */	stfs f2, 0x178(r29)
/* 8041B5F8 00418538  D0 3D 01 7C */	stfs f1, 0x17c(r29)
/* 8041B5FC 0041853C  D0 5D 01 80 */	stfs f2, 0x180(r29)
/* 8041B600 00418540  D0 5D 01 84 */	stfs f2, 0x184(r29)
/* 8041B604 00418544  D0 5D 01 88 */	stfs f2, 0x188(r29)
/* 8041B608 00418548  D0 5D 01 8C */	stfs f2, 0x18c(r29)
/* 8041B60C 0041854C  D0 1D 01 90 */	stfs f0, 0x190(r29)
/* 8041B610 00418550  D0 5D 01 94 */	stfs f2, 0x194(r29)
/* 8041B614 00418554  4B CC EC 8D */	bl PSMTXIdentity
/* 8041B618 00418558  38 1D 01 44 */	addi r0, r29, 0x144
/* 8041B61C 0041855C  7F A3 EB 78 */	mr r3, r29
/* 8041B620 00418560  90 1D 00 30 */	stw r0, 0x30(r29)
/* 8041B624 00418564  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041B628 00418568  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041B62C 0041856C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041B630 00418570  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8041B634 00418574  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041B638 00418578  7C 08 03 A6 */	mtlr r0
/* 8041B63C 0041857C  38 21 00 20 */	addi r1, r1, 0x20
/* 8041B640 00418580  4E 80 00 20 */	blr 
.endfn __ct__12LookAtCameraFv

.fn __dt__6CameraFv, weak
/* 8041B644 00418584  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041B648 00418588  7C 08 02 A6 */	mflr r0
/* 8041B64C 0041858C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041B650 00418590  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041B654 00418594  7C 9F 23 78 */	mr r31, r4
/* 8041B658 00418598  93 C1 00 08 */	stw r30, 8(r1)
/* 8041B65C 0041859C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8041B660 004185A0  41 82 00 78 */	beq .L_8041B6D8
/* 8041B664 004185A4  3C 80 80 4F */	lis r4, __vt__6Camera@ha
/* 8041B668 004185A8  38 04 B8 20 */	addi r0, r4, __vt__6Camera@l
/* 8041B66C 004185AC  90 1E 00 00 */	stw r0, 0(r30)
/* 8041B670 004185B0  41 82 00 58 */	beq .L_8041B6C8
/* 8041B674 004185B4  3C 80 80 4F */	lis r4, __vt__11CullFrustum@ha
/* 8041B678 004185B8  38 04 B8 9C */	addi r0, r4, __vt__11CullFrustum@l
/* 8041B67C 004185BC  90 1E 00 00 */	stw r0, 0(r30)
/* 8041B680 004185C0  41 82 00 48 */	beq .L_8041B6C8
/* 8041B684 004185C4  3C 80 80 4B */	lis r4, __vt__9CullPlane@ha
/* 8041B688 004185C8  38 04 0E 94 */	addi r0, r4, __vt__9CullPlane@l
/* 8041B68C 004185CC  90 1E 00 00 */	stw r0, 0(r30)
/* 8041B690 004185D0  41 82 00 38 */	beq .L_8041B6C8
/* 8041B694 004185D4  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8041B698 004185D8  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8041B69C 004185DC  90 1E 00 00 */	stw r0, 0(r30)
/* 8041B6A0 004185E0  41 82 00 28 */	beq .L_8041B6C8
/* 8041B6A4 004185E4  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 8041B6A8 004185E8  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 8041B6AC 004185EC  90 1E 00 00 */	stw r0, 0(r30)
/* 8041B6B0 004185F0  41 82 00 18 */	beq .L_8041B6C8
/* 8041B6B4 004185F4  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8041B6B8 004185F8  38 80 00 00 */	li r4, 0
/* 8041B6BC 004185FC  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8041B6C0 00418600  90 1E 00 00 */	stw r0, 0(r30)
/* 8041B6C4 00418604  4B FF 5E C5 */	bl __dt__5CNodeFv
.L_8041B6C8:
/* 8041B6C8 00418608  7F E0 07 35 */	extsh. r0, r31
/* 8041B6CC 0041860C  40 81 00 0C */	ble .L_8041B6D8
/* 8041B6D0 00418610  7F C3 F3 78 */	mr r3, r30
/* 8041B6D4 00418614  4B C0 89 E1 */	bl __dl__FPv
.L_8041B6D8:
/* 8041B6D8 00418618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041B6DC 0041861C  7F C3 F3 78 */	mr r3, r30
/* 8041B6E0 00418620  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041B6E4 00418624  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041B6E8 00418628  7C 08 03 A6 */	mtlr r0
/* 8041B6EC 0041862C  38 21 00 10 */	addi r1, r1, 0x10
/* 8041B6F0 00418630  4E 80 00 20 */	blr 
.endfn __dt__6CameraFv

.fn updateMatrix__12LookAtCameraFv, global
/* 8041B6F4 00418634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041B6F8 00418638  7C 08 02 A6 */	mflr r0
/* 8041B6FC 0041863C  7C 66 1B 78 */	mr r6, r3
/* 8041B700 00418640  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041B704 00418644  38 66 01 44 */	addi r3, r6, 0x144
/* 8041B708 00418648  38 86 01 74 */	addi r4, r6, 0x174
/* 8041B70C 0041864C  38 A6 01 8C */	addi r5, r6, 0x18c
/* 8041B710 00418650  38 C6 01 80 */	addi r6, r6, 0x180
/* 8041B714 00418654  4B CC F1 E5 */	bl C_MTXLookAt
/* 8041B718 00418658  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041B71C 0041865C  7C 08 03 A6 */	mtlr r0
/* 8041B720 00418660  38 21 00 10 */	addi r1, r1, 0x10
/* 8041B724 00418664  4E 80 00 20 */	blr 
.endfn updateMatrix__12LookAtCameraFv

.fn __ct__11BlendCameraFiPP6Camera, global
/* 8041B728 00418668  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8041B72C 0041866C  7C 08 02 A6 */	mflr r0
/* 8041B730 00418670  90 01 00 34 */	stw r0, 0x34(r1)
/* 8041B734 00418674  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 8041B738 00418678  7C 7A 1B 78 */	mr r26, r3
/* 8041B73C 0041867C  7C 9E 23 78 */	mr r30, r4
/* 8041B740 00418680  7C BF 2B 78 */	mr r31, r5
/* 8041B744 00418684  7F 5B D3 78 */	mr r27, r26
/* 8041B748 00418688  7F 5C D3 78 */	mr r28, r26
/* 8041B74C 0041868C  7F 5D D3 78 */	mr r29, r26
/* 8041B750 00418690  4B FF 5C 41 */	bl __ct__5CNodeFv
/* 8041B754 00418694  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8041B758 00418698  3C 60 80 4B */	lis r3, "__vt__17Container<5Plane>"@ha
/* 8041B75C 0041869C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8041B760 004186A0  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8041B764 004186A4  90 1A 00 00 */	stw r0, 0(r26)
/* 8041B768 004186A8  38 03 0E 20 */	addi r0, r3, "__vt__17Container<5Plane>"@l
/* 8041B76C 004186AC  3C 60 80 4B */	lis r3, __vt__9CullPlane@ha
/* 8041B770 004186B0  38 E0 00 00 */	li r7, 0
/* 8041B774 004186B4  90 1A 00 00 */	stw r0, 0(r26)
/* 8041B778 004186B8  38 C4 0E 4C */	addi r6, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8041B77C 004186BC  38 A0 00 01 */	li r5, 1
/* 8041B780 004186C0  38 03 0E 94 */	addi r0, r3, __vt__9CullPlane@l
/* 8041B784 004186C4  98 FA 00 18 */	stb r7, 0x18(r26)
/* 8041B788 004186C8  7F A3 EB 78 */	mr r3, r29
/* 8041B78C 004186CC  38 80 00 06 */	li r4, 6
/* 8041B790 004186D0  90 DA 00 00 */	stw r6, 0(r26)
/* 8041B794 004186D4  98 BA 00 18 */	stb r5, 0x18(r26)
/* 8041B798 004186D8  90 FA 00 20 */	stw r7, 0x20(r26)
/* 8041B79C 004186DC  90 FA 00 1C */	stw r7, 0x1c(r26)
/* 8041B7A0 004186E0  90 FA 00 24 */	stw r7, 0x24(r26)
/* 8041B7A4 004186E4  90 1D 00 00 */	stw r0, 0(r29)
/* 8041B7A8 004186E8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8041B7AC 004186EC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8041B7B0 004186F0  7D 89 03 A6 */	mtctr r12
/* 8041B7B4 004186F4  4E 80 04 21 */	bctrl 
/* 8041B7B8 004186F8  38 00 00 06 */	li r0, 6
/* 8041B7BC 004186FC  3C 60 80 4F */	lis r3, __vt__11CullFrustum@ha
/* 8041B7C0 00418700  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 8041B7C4 00418704  38 03 B8 9C */	addi r0, r3, __vt__11CullFrustum@l
/* 8041B7C8 00418708  C0 02 20 00 */	lfs f0, lbl_80520360@sda21(r2)
/* 8041B7CC 0041870C  90 1C 00 00 */	stw r0, 0(r28)
/* 8041B7D0 00418710  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 8041B7D4 00418714  48 00 7A 51 */	bl getRenderModeObj__6SystemFv
/* 8041B7D8 00418718  A3 A3 00 06 */	lhz r29, 6(r3)
/* 8041B7DC 0041871C  48 00 7A 49 */	bl getRenderModeObj__6SystemFv
/* 8041B7E0 00418720  A0 83 00 04 */	lhz r4, 4(r3)
/* 8041B7E4 00418724  3C 00 43 30 */	lis r0, 0x4330
/* 8041B7E8 00418728  3C 60 80 4F */	lis r3, __vt__6Camera@ha
/* 8041B7EC 0041872C  90 01 00 08 */	stw r0, 8(r1)
/* 8041B7F0 00418730  7C A4 EB D6 */	divw r5, r4, r29
/* 8041B7F4 00418734  C8 82 20 08 */	lfd f4, lbl_80520368@sda21(r2)
/* 8041B7F8 00418738  38 83 B8 20 */	addi r4, r3, __vt__6Camera@l
/* 8041B7FC 0041873C  C0 42 1F FC */	lfs f2, lbl_8052035C@sda21(r2)
/* 8041B800 00418740  38 00 00 00 */	li r0, 0
/* 8041B804 00418744  C0 22 20 18 */	lfs f1, lbl_80520378@sda21(r2)
/* 8041B808 00418748  6C A3 80 00 */	xoris r3, r5, 0x8000
/* 8041B80C 0041874C  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B810 00418750  90 61 00 0C */	stw r3, 0xc(r1)
/* 8041B814 00418754  38 7B 00 34 */	addi r3, r27, 0x34
/* 8041B818 00418758  C8 61 00 08 */	lfd f3, 8(r1)
/* 8041B81C 0041875C  EC 63 20 28 */	fsubs f3, f3, f4
/* 8041B820 00418760  D0 7C 00 2C */	stfs f3, 0x2c(r28)
/* 8041B824 00418764  90 9B 00 00 */	stw r4, 0(r27)
/* 8041B828 00418768  90 1B 01 40 */	stw r0, 0x140(r27)
/* 8041B82C 0041876C  D0 5B 00 70 */	stfs f2, 0x70(r27)
/* 8041B830 00418770  D0 3B 00 74 */	stfs f1, 0x74(r27)
/* 8041B834 00418774  D0 5B 01 34 */	stfs f2, 0x134(r27)
/* 8041B838 00418778  D0 5B 01 38 */	stfs f2, 0x138(r27)
/* 8041B83C 0041877C  D0 5B 01 3C */	stfs f2, 0x13c(r27)
/* 8041B840 00418780  D0 1B 00 78 */	stfs f0, 0x78(r27)
/* 8041B844 00418784  D0 1B 00 7C */	stfs f0, 0x7c(r27)
/* 8041B848 00418788  D0 1B 00 80 */	stfs f0, 0x80(r27)
/* 8041B84C 0041878C  4B CC EA 55 */	bl PSMTXIdentity
/* 8041B850 00418790  38 00 00 00 */	li r0, 0
/* 8041B854 00418794  3C 60 80 4F */	lis r3, __vt__11BlendCamera@ha
/* 8041B858 00418798  98 1B 00 6C */	stb r0, 0x6c(r27)
/* 8041B85C 0041879C  38 03 B7 24 */	addi r0, r3, __vt__11BlendCamera@l
/* 8041B860 004187A0  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B864 004187A4  D0 1B 00 68 */	stfs f0, 0x68(r27)
/* 8041B868 004187A8  D0 1B 00 64 */	stfs f0, 0x64(r27)
/* 8041B86C 004187AC  90 1A 00 00 */	stw r0, 0(r26)
/* 8041B870 004187B0  93 DA 01 44 */	stw r30, 0x144(r26)
/* 8041B874 004187B4  80 1A 01 44 */	lwz r0, 0x144(r26)
/* 8041B878 004187B8  54 03 10 3A */	slwi r3, r0, 2
/* 8041B87C 004187BC  4B C0 87 31 */	bl __nwa__FUl
/* 8041B880 004187C0  90 7A 01 48 */	stw r3, 0x148(r26)
/* 8041B884 004187C4  7F 43 D3 78 */	mr r3, r26
/* 8041B888 004187C8  7F E4 FB 78 */	mr r4, r31
/* 8041B88C 004187CC  48 00 00 1D */	bl setCameras__11BlendCameraFPP6Camera
/* 8041B890 004187D0  7F 43 D3 78 */	mr r3, r26
/* 8041B894 004187D4  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 8041B898 004187D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8041B89C 004187DC  7C 08 03 A6 */	mtlr r0
/* 8041B8A0 004187E0  38 21 00 30 */	addi r1, r1, 0x30
/* 8041B8A4 004187E4  4E 80 00 20 */	blr 
.endfn __ct__11BlendCameraFiPP6Camera

.fn setCameras__11BlendCameraFPP6Camera, global
/* 8041B8A8 004187E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041B8AC 004187EC  7C 08 02 A6 */	mflr r0
/* 8041B8B0 004187F0  7C 87 23 78 */	mr r7, r4
/* 8041B8B4 004187F4  38 C0 00 00 */	li r6, 0
/* 8041B8B8 004187F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041B8BC 004187FC  38 A0 00 00 */	li r5, 0
/* 8041B8C0 00418800  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041B8C4 00418804  7C 7F 1B 78 */	mr r31, r3
/* 8041B8C8 00418808  48 00 00 1C */	b .L_8041B8E4
.L_8041B8CC:
/* 8041B8CC 0041880C  80 04 00 00 */	lwz r0, 0(r4)
/* 8041B8D0 00418810  38 84 00 04 */	addi r4, r4, 4
/* 8041B8D4 00418814  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 8041B8D8 00418818  38 C6 00 01 */	addi r6, r6, 1
/* 8041B8DC 0041881C  7C 03 29 2E */	stwx r0, r3, r5
/* 8041B8E0 00418820  38 A5 00 04 */	addi r5, r5, 4
.L_8041B8E4:
/* 8041B8E4 00418824  80 1F 01 44 */	lwz r0, 0x144(r31)
/* 8041B8E8 00418828  7C 06 00 00 */	cmpw r6, r0
/* 8041B8EC 0041882C  41 80 FF E0 */	blt .L_8041B8CC
/* 8041B8F0 00418830  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B8F4 00418834  38 80 00 00 */	li r4, 0
/* 8041B8F8 00418838  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 8041B8FC 0041883C  80 67 00 00 */	lwz r3, 0(r7)
/* 8041B900 00418840  81 83 00 00 */	lwz r12, 0(r3)
/* 8041B904 00418844  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8041B908 00418848  7D 89 03 A6 */	mtctr r12
/* 8041B90C 0041884C  4E 80 04 21 */	bctrl 
/* 8041B910 00418850  38 9F 01 50 */	addi r4, r31, 0x150
/* 8041B914 00418854  4B CC E9 B9 */	bl PSMTXCopy
/* 8041B918 00418858  38 1F 01 50 */	addi r0, r31, 0x150
/* 8041B91C 0041885C  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8041B920 00418860  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041B924 00418864  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041B928 00418868  7C 08 03 A6 */	mtlr r0
/* 8041B92C 0041886C  38 21 00 10 */	addi r1, r1, 0x10
/* 8041B930 00418870  4E 80 00 20 */	blr 
.endfn setCameras__11BlendCameraFPP6Camera

.fn setBlendFactor__11BlendCameraFf, global
/* 8041B934 00418874  C0 02 1F F8 */	lfs f0, lbl_80520358@sda21(r2)
/* 8041B938 00418878  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041B93C 0041887C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041B940 00418880  40 80 00 0C */	bge .L_8041B94C
/* 8041B944 00418884  FC 20 00 90 */	fmr f1, f0
/* 8041B948 00418888  48 00 00 40 */	b .L_8041B988
.L_8041B94C:
/* 8041B94C 0041888C  80 83 01 44 */	lwz r4, 0x144(r3)
/* 8041B950 00418890  3C 00 43 30 */	lis r0, 0x4330
/* 8041B954 00418894  90 01 00 08 */	stw r0, 8(r1)
/* 8041B958 00418898  38 84 FF FF */	addi r4, r4, -1
/* 8041B95C 0041889C  C8 42 20 08 */	lfd f2, lbl_80520368@sda21(r2)
/* 8041B960 004188A0  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8041B964 004188A4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8041B968 004188A8  C8 01 00 08 */	lfd f0, 8(r1)
/* 8041B96C 004188AC  EC 00 10 28 */	fsubs f0, f0, f2
/* 8041B970 004188B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041B974 004188B4  40 81 00 14 */	ble .L_8041B988
/* 8041B978 004188B8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8041B97C 004188BC  90 01 00 08 */	stw r0, 8(r1)
/* 8041B980 004188C0  C8 01 00 08 */	lfd f0, 8(r1)
/* 8041B984 004188C4  EC 20 10 28 */	fsubs f1, f0, f2
.L_8041B988:
/* 8041B988 004188C8  D0 23 01 4C */	stfs f1, 0x14c(r3)
/* 8041B98C 004188CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8041B990 004188D0  4E 80 00 20 */	blr 
.endfn setBlendFactor__11BlendCameraFf

.fn doUpdate__11BlendCameraFv, global
/* 8041B994 004188D4  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 8041B998 004188D8  7C 08 02 A6 */	mflr r0
/* 8041B99C 004188DC  90 01 01 24 */	stw r0, 0x124(r1)
/* 8041B9A0 004188E0  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 8041B9A4 004188E4  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 8041B9A8 004188E8  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 8041B9AC 004188EC  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 8041B9B0 004188F0  DB A1 00 F0 */	stfd f29, 0xf0(r1)
/* 8041B9B4 004188F4  F3 A1 00 F8 */	psq_st f29, 248(r1), 0, qr0
/* 8041B9B8 004188F8  DB 81 00 E0 */	stfd f28, 0xe0(r1)
/* 8041B9BC 004188FC  F3 81 00 E8 */	psq_st f28, 232(r1), 0, qr0
/* 8041B9C0 00418900  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8041B9C4 00418904  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8041B9C8 00418908  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8041B9CC 0041890C  7C 7F 1B 78 */	mr r31, r3
/* 8041B9D0 00418910  38 61 00 4C */	addi r3, r1, 0x4c
/* 8041B9D4 00418914  4B FF 69 F5 */	bl __ct__4QuatFv
/* 8041B9D8 00418918  38 61 00 3C */	addi r3, r1, 0x3c
/* 8041B9DC 0041891C  4B FF 69 ED */	bl __ct__4QuatFv
/* 8041B9E0 00418920  38 61 00 2C */	addi r3, r1, 0x2c
/* 8041B9E4 00418924  4B FF 69 E5 */	bl __ct__4QuatFv
/* 8041B9E8 00418928  C0 5F 01 4C */	lfs f2, 0x14c(r31)
/* 8041B9EC 0041892C  80 7F 01 44 */	lwz r3, 0x144(r31)
/* 8041B9F0 00418930  FC 00 10 1E */	fctiwz f0, f2
/* 8041B9F4 00418934  38 03 FF FF */	addi r0, r3, -1
/* 8041B9F8 00418938  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 8041B9FC 0041893C  80 81 00 C4 */	lwz r4, 0xc4(r1)
/* 8041BA00 00418940  7C 04 00 00 */	cmpw r4, r0
/* 8041BA04 00418944  3B A4 00 01 */	addi r29, r4, 1
/* 8041BA08 00418948  41 80 00 0C */	blt .L_8041BA14
/* 8041BA0C 0041894C  38 84 FF FF */	addi r4, r4, -1
/* 8041BA10 00418950  3B BD FF FF */	addi r29, r29, -1
.L_8041BA14:
/* 8041BA14 00418954  6C 83 80 00 */	xoris r3, r4, 0x8000
/* 8041BA18 00418958  3C 00 43 30 */	lis r0, 0x4330
/* 8041BA1C 0041895C  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 8041BA20 00418960  54 9E 10 3A */	slwi r30, r4, 2
/* 8041BA24 00418964  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 8041BA28 00418968  38 80 00 00 */	li r4, 0
/* 8041BA2C 0041896C  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 8041BA30 00418970  7C 63 F0 2E */	lwzx r3, r3, r30
/* 8041BA34 00418974  C8 22 20 08 */	lfd f1, lbl_80520368@sda21(r2)
/* 8041BA38 00418978  C8 01 00 C0 */	lfd f0, 0xc0(r1)
/* 8041BA3C 0041897C  81 83 00 00 */	lwz r12, 0(r3)
/* 8041BA40 00418980  EC 00 08 28 */	fsubs f0, f0, f1
/* 8041BA44 00418984  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8041BA48 00418988  EF E2 00 28 */	fsubs f31, f2, f0
/* 8041BA4C 0041898C  7D 89 03 A6 */	mtctr r12
/* 8041BA50 00418990  4E 80 04 21 */	bctrl 
/* 8041BA54 00418994  7C 64 1B 78 */	mr r4, r3
/* 8041BA58 00418998  38 61 00 4C */	addi r3, r1, 0x4c
/* 8041BA5C 0041899C  4B FF 71 DD */	bl fromMatrixf__4QuatFR7Matrixf
/* 8041BA60 004189A0  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 8041BA64 004189A4  57 BD 10 3A */	slwi r29, r29, 2
/* 8041BA68 004189A8  38 80 00 00 */	li r4, 0
/* 8041BA6C 004189AC  7C 63 E8 2E */	lwzx r3, r3, r29
/* 8041BA70 004189B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8041BA74 004189B4  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8041BA78 004189B8  7D 89 03 A6 */	mtctr r12
/* 8041BA7C 004189BC  4E 80 04 21 */	bctrl 
/* 8041BA80 004189C0  7C 64 1B 78 */	mr r4, r3
/* 8041BA84 004189C4  38 61 00 3C */	addi r3, r1, 0x3c
/* 8041BA88 004189C8  4B FF 71 B1 */	bl fromMatrixf__4QuatFR7Matrixf
/* 8041BA8C 004189CC  38 61 00 4C */	addi r3, r1, 0x4c
/* 8041BA90 004189D0  4B FF 6D BD */	bl normalise__4QuatFv
/* 8041BA94 004189D4  38 61 00 3C */	addi r3, r1, 0x3c
/* 8041BA98 004189D8  4B FF 6D B5 */	bl normalise__4QuatFv
/* 8041BA9C 004189DC  80 9F 01 48 */	lwz r4, 0x148(r31)
/* 8041BAA0 004189E0  38 61 00 14 */	addi r3, r1, 0x14
/* 8041BAA4 004189E4  7C 84 F0 2E */	lwzx r4, r4, r30
/* 8041BAA8 004189E8  81 84 00 00 */	lwz r12, 0(r4)
/* 8041BAAC 004189EC  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8041BAB0 004189F0  7D 89 03 A6 */	mtctr r12
/* 8041BAB4 004189F4  4E 80 04 21 */	bctrl 
/* 8041BAB8 004189F8  80 9F 01 48 */	lwz r4, 0x148(r31)
/* 8041BABC 004189FC  38 61 00 08 */	addi r3, r1, 8
/* 8041BAC0 00418A00  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 8041BAC4 00418A04  7C 84 E8 2E */	lwzx r4, r4, r29
/* 8041BAC8 00418A08  C3 A1 00 18 */	lfs f29, 0x18(r1)
/* 8041BACC 00418A0C  81 84 00 00 */	lwz r12, 0(r4)
/* 8041BAD0 00418A10  C3 81 00 1C */	lfs f28, 0x1c(r1)
/* 8041BAD4 00418A14  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8041BAD8 00418A18  7D 89 03 A6 */	mtctr r12
/* 8041BADC 00418A1C  4E 80 04 21 */	bctrl 
/* 8041BAE0 00418A20  80 DF 01 48 */	lwz r6, 0x148(r31)
/* 8041BAE4 00418A24  FC 20 F8 90 */	fmr f1, f31
/* 8041BAE8 00418A28  C0 02 1F FC */	lfs f0, lbl_8052035C@sda21(r2)
/* 8041BAEC 00418A2C  38 61 00 4C */	addi r3, r1, 0x4c
/* 8041BAF0 00418A30  7C A6 E8 2E */	lwzx r5, r6, r29
/* 8041BAF4 00418A34  38 81 00 3C */	addi r4, r1, 0x3c
/* 8041BAF8 00418A38  ED 20 F8 28 */	fsubs f9, f0, f31
/* 8041BAFC 00418A3C  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 8041BB00 00418A40  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8041BB04 00418A44  C0 41 00 08 */	lfs f2, 8(r1)
/* 8041BB08 00418A48  C0 C1 00 0C */	lfs f6, 0xc(r1)
/* 8041BB0C 00418A4C  EC BF 00 32 */	fmuls f5, f31, f0
/* 8041BB10 00418A50  C1 01 00 10 */	lfs f8, 0x10(r1)
/* 8041BB14 00418A54  EC 9E 02 72 */	fmuls f4, f30, f9
/* 8041BB18 00418A58  7C C6 F0 2E */	lwzx r6, r6, r30
/* 8041BB1C 00418A5C  EC 62 07 F2 */	fmuls f3, f2, f31
/* 8041BB20 00418A60  EC 5D 02 72 */	fmuls f2, f29, f9
/* 8041BB24 00418A64  EC 06 07 F2 */	fmuls f0, f6, f31
/* 8041BB28 00418A68  C0 E6 00 28 */	lfs f7, 0x28(r6)
/* 8041BB2C 00418A6C  EC C4 18 2A */	fadds f6, f4, f3
/* 8041BB30 00418A70  EC 69 29 FA */	fmadds f3, f9, f7, f5
/* 8041BB34 00418A74  EC A2 00 2A */	fadds f5, f2, f0
/* 8041BB38 00418A78  EC 9C 02 72 */	fmuls f4, f28, f9
/* 8041BB3C 00418A7C  D0 7F 00 28 */	stfs f3, 0x28(r31)
/* 8041BB40 00418A80  EC 08 07 F2 */	fmuls f0, f8, f31
/* 8041BB44 00418A84  FC 60 30 50 */	fneg f3, f6
/* 8041BB48 00418A88  D0 C1 00 20 */	stfs f6, 0x20(r1)
/* 8041BB4C 00418A8C  FC 40 28 50 */	fneg f2, f5
/* 8041BB50 00418A90  EC 84 00 2A */	fadds f4, f4, f0
/* 8041BB54 00418A94  D0 A1 00 24 */	stfs f5, 0x24(r1)
/* 8041BB58 00418A98  FC 00 20 50 */	fneg f0, f4
/* 8041BB5C 00418A9C  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8041BB60 00418AA0  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8041BB64 00418AA4  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8041BB68 00418AA8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8041BB6C 00418AAC  4B FF 6D 85 */	bl slerp__4QuatFR4QuatfR4Quat
/* 8041BB70 00418AB0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8041BB74 00418AB4  4B FF 6C D9 */	bl normalise__4QuatFv
/* 8041BB78 00418AB8  38 61 00 8C */	addi r3, r1, 0x8c
/* 8041BB7C 00418ABC  38 81 00 2C */	addi r4, r1, 0x2c
/* 8041BB80 00418AC0  48 00 D0 09 */	bl makeQ__7MatrixfFR4Quat
/* 8041BB84 00418AC4  38 61 00 8C */	addi r3, r1, 0x8c
/* 8041BB88 00418AC8  38 81 00 5C */	addi r4, r1, 0x5c
/* 8041BB8C 00418ACC  4B CC E8 41 */	bl PSMTXTranspose
/* 8041BB90 00418AD0  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 8041BB94 00418AD4  38 7F 01 50 */	addi r3, r31, 0x150
/* 8041BB98 00418AD8  C0 41 00 6C */	lfs f2, 0x6c(r1)
/* 8041BB9C 00418ADC  38 81 00 20 */	addi r4, r1, 0x20
/* 8041BBA0 00418AE0  C0 21 00 74 */	lfs f1, 0x74(r1)
/* 8041BBA4 00418AE4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8041BBA8 00418AE8  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 8041BBAC 00418AEC  EC 83 00 B2 */	fmuls f4, f3, f2
/* 8041BBB0 00418AF0  EC 43 00 72 */	fmuls f2, f3, f1
/* 8041BBB4 00418AF4  C0 C1 00 20 */	lfs f6, 0x20(r1)
/* 8041BBB8 00418AF8  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 8041BBBC 00418AFC  EC 03 00 32 */	fmuls f0, f3, f0
/* 8041BBC0 00418B00  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 8041BBC4 00418B04  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 8041BBC8 00418B08  EC 86 21 7A */	fmadds f4, f6, f5, f4
/* 8041BBCC 00418B0C  C0 E1 00 28 */	lfs f7, 0x28(r1)
/* 8041BBD0 00418B10  C0 A1 00 7C */	lfs f5, 0x7c(r1)
/* 8041BBD4 00418B14  EC 46 10 FA */	fmadds f2, f6, f3, f2
/* 8041BBD8 00418B18  C0 61 00 84 */	lfs f3, 0x84(r1)
/* 8041BBDC 00418B1C  EC 06 00 7A */	fmadds f0, f6, f1, f0
/* 8041BBE0 00418B20  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 8041BBE4 00418B24  EC 87 21 7A */	fmadds f4, f7, f5, f4
/* 8041BBE8 00418B28  EC 47 10 FA */	fmadds f2, f7, f3, f2
/* 8041BBEC 00418B2C  EC 07 00 7A */	fmadds f0, f7, f1, f0
/* 8041BBF0 00418B30  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 8041BBF4 00418B34  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8041BBF8 00418B38  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8041BBFC 00418B3C  48 00 CE BD */	bl "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
/* 8041BC00 00418B40  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 8041BC04 00418B44  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 8041BC08 00418B48  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 8041BC0C 00418B4C  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 8041BC10 00418B50  E3 A1 00 F8 */	psq_l f29, 248(r1), 0, qr0
/* 8041BC14 00418B54  CB A1 00 F0 */	lfd f29, 0xf0(r1)
/* 8041BC18 00418B58  E3 81 00 E8 */	psq_l f28, 232(r1), 0, qr0
/* 8041BC1C 00418B5C  CB 81 00 E0 */	lfd f28, 0xe0(r1)
/* 8041BC20 00418B60  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8041BC24 00418B64  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8041BC28 00418B68  80 01 01 24 */	lwz r0, 0x124(r1)
/* 8041BC2C 00418B6C  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8041BC30 00418B70  7C 08 03 A6 */	mtlr r0
/* 8041BC34 00418B74  38 21 01 20 */	addi r1, r1, 0x120
/* 8041BC38 00418B78  4E 80 00 20 */	blr 
.endfn doUpdate__11BlendCameraFv

.fn __dt__11BlendCameraFv, weak
/* 8041BC3C 00418B7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041BC40 00418B80  7C 08 02 A6 */	mflr r0
/* 8041BC44 00418B84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041BC48 00418B88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041BC4C 00418B8C  7C 9F 23 78 */	mr r31, r4
/* 8041BC50 00418B90  93 C1 00 08 */	stw r30, 8(r1)
/* 8041BC54 00418B94  7C 7E 1B 79 */	or. r30, r3, r3
/* 8041BC58 00418B98  41 82 00 88 */	beq .L_8041BCE0
/* 8041BC5C 00418B9C  3C 80 80 4F */	lis r4, __vt__11BlendCamera@ha
/* 8041BC60 00418BA0  38 04 B7 24 */	addi r0, r4, __vt__11BlendCamera@l
/* 8041BC64 00418BA4  90 1E 00 00 */	stw r0, 0(r30)
/* 8041BC68 00418BA8  41 82 00 68 */	beq .L_8041BCD0
/* 8041BC6C 00418BAC  3C 80 80 4F */	lis r4, __vt__6Camera@ha
/* 8041BC70 00418BB0  38 04 B8 20 */	addi r0, r4, __vt__6Camera@l
/* 8041BC74 00418BB4  90 1E 00 00 */	stw r0, 0(r30)
/* 8041BC78 00418BB8  41 82 00 58 */	beq .L_8041BCD0
/* 8041BC7C 00418BBC  3C 80 80 4F */	lis r4, __vt__11CullFrustum@ha
/* 8041BC80 00418BC0  38 04 B8 9C */	addi r0, r4, __vt__11CullFrustum@l
/* 8041BC84 00418BC4  90 1E 00 00 */	stw r0, 0(r30)
/* 8041BC88 00418BC8  41 82 00 48 */	beq .L_8041BCD0
/* 8041BC8C 00418BCC  3C 80 80 4B */	lis r4, __vt__9CullPlane@ha
/* 8041BC90 00418BD0  38 04 0E 94 */	addi r0, r4, __vt__9CullPlane@l
/* 8041BC94 00418BD4  90 1E 00 00 */	stw r0, 0(r30)
/* 8041BC98 00418BD8  41 82 00 38 */	beq .L_8041BCD0
/* 8041BC9C 00418BDC  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8041BCA0 00418BE0  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8041BCA4 00418BE4  90 1E 00 00 */	stw r0, 0(r30)
/* 8041BCA8 00418BE8  41 82 00 28 */	beq .L_8041BCD0
/* 8041BCAC 00418BEC  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 8041BCB0 00418BF0  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 8041BCB4 00418BF4  90 1E 00 00 */	stw r0, 0(r30)
/* 8041BCB8 00418BF8  41 82 00 18 */	beq .L_8041BCD0
/* 8041BCBC 00418BFC  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8041BCC0 00418C00  38 80 00 00 */	li r4, 0
/* 8041BCC4 00418C04  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8041BCC8 00418C08  90 1E 00 00 */	stw r0, 0(r30)
/* 8041BCCC 00418C0C  4B FF 58 BD */	bl __dt__5CNodeFv
.L_8041BCD0:
/* 8041BCD0 00418C10  7F E0 07 35 */	extsh. r0, r31
/* 8041BCD4 00418C14  40 81 00 0C */	ble .L_8041BCE0
/* 8041BCD8 00418C18  7F C3 F3 78 */	mr r3, r30
/* 8041BCDC 00418C1C  4B C0 83 D9 */	bl __dl__FPv
.L_8041BCE0:
/* 8041BCE0 00418C20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041BCE4 00418C24  7F C3 F3 78 */	mr r3, r30
/* 8041BCE8 00418C28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8041BCEC 00418C2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8041BCF0 00418C30  7C 08 03 A6 */	mtlr r0
/* 8041BCF4 00418C34  38 21 00 10 */	addi r1, r1, 0x10
/* 8041BCF8 00418C38  4E 80 00 20 */	blr 
.endfn __dt__11BlendCameraFv

.fn getViewMatrix__11CullFrustumFb, weak
/* 8041BCFC 00418C3C  80 63 00 30 */	lwz r3, 0x30(r3)
/* 8041BD00 00418C40  4E 80 00 20 */	blr 
.endfn getViewMatrix__11CullFrustumFb

.fn __sinit_camera_cpp, local
/* 8041BD04 00418C44  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8041BD08 00418C48  38 00 FF FF */	li r0, -1
/* 8041BD0C 00418C4C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8041BD10 00418C50  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8041BD14 00418C54  90 0D 9A D8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8041BD18 00418C58  D4 03 B7 18 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8041BD1C 00418C5C  D0 0D 9A DC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8041BD20 00418C60  D0 03 00 04 */	stfs f0, 4(r3)
/* 8041BD24 00418C64  D0 03 00 08 */	stfs f0, 8(r3)
/* 8041BD28 00418C68  4E 80 00 20 */	blr 
.endfn __sinit_camera_cpp
