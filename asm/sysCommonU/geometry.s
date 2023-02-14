.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804997A8, local
	.asciz "# %d/%d\r\n"
.endobj lbl_804997A8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23Sys11VertexTable, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23Sys11VertexTableFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__23Container<10Vector3<f>>FPv"
	.4byte "getNext__28ArrayContainer<10Vector3<f>>FPv"
	.4byte "getStart__28ArrayContainer<10Vector3<f>>Fv"
	.4byte "getEnd__28ArrayContainer<10Vector3<f>>Fv"
	.4byte "get__28ArrayContainer<10Vector3<f>>FPv"
	.4byte "getAt__28ArrayContainer<10Vector3<f>>Fi"
	.4byte "getTo__28ArrayContainer<10Vector3<f>>Fv"
	.4byte "writeObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>"
	.4byte "readObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>"
	.4byte write__Q23Sys11VertexTableFR6Stream
	.4byte "read__28ArrayContainer<10Vector3<f>>FR6Stream"
	.4byte "alloc__28ArrayContainer<10Vector3<f>>Fi"
	.4byte "addOne__Q23Sys11VertexTableFR10Vector3<f>"
	.4byte "setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i"
.endobj __vt__Q23Sys11VertexTable
.obj __vt__Q23Sys13TriangleTable, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23Sys13TriangleTableFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__26Container<Q23Sys8Triangle>FPv"
	.4byte "getNext__31ArrayContainer<Q23Sys8Triangle>FPv"
	.4byte "getStart__31ArrayContainer<Q23Sys8Triangle>Fv"
	.4byte "getEnd__31ArrayContainer<Q23Sys8Triangle>Fv"
	.4byte "get__31ArrayContainer<Q23Sys8Triangle>FPv"
	.4byte "getAt__31ArrayContainer<Q23Sys8Triangle>Fi"
	.4byte "getTo__31ArrayContainer<Q23Sys8Triangle>Fv"
	.4byte writeObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle
	.4byte readObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle
	.4byte "write__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
	.4byte "read__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
	.4byte "alloc__31ArrayContainer<Q23Sys8Triangle>Fi"
	.4byte "addOne__31ArrayContainer<Q23Sys8Triangle>FRQ23Sys8Triangle"
	.4byte "setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei"
.endobj __vt__Q23Sys13TriangleTable
.obj __vt__31ArrayContainer<Q23Sys8Triangle>, weak
	.4byte 0
	.4byte 0
	.4byte "__dt__31ArrayContainer<Q23Sys8Triangle>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__26Container<Q23Sys8Triangle>FPv"
	.4byte "getNext__31ArrayContainer<Q23Sys8Triangle>FPv"
	.4byte "getStart__31ArrayContainer<Q23Sys8Triangle>Fv"
	.4byte "getEnd__31ArrayContainer<Q23Sys8Triangle>Fv"
	.4byte "get__31ArrayContainer<Q23Sys8Triangle>FPv"
	.4byte "getAt__31ArrayContainer<Q23Sys8Triangle>Fi"
	.4byte "getTo__31ArrayContainer<Q23Sys8Triangle>Fv"
	.4byte "writeObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle"
	.4byte "readObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle"
	.4byte "write__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
	.4byte "read__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
	.4byte "alloc__31ArrayContainer<Q23Sys8Triangle>Fi"
	.4byte "addOne__31ArrayContainer<Q23Sys8Triangle>FRQ23Sys8Triangle"
	.4byte "setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei"
.endobj __vt__31ArrayContainer<Q23Sys8Triangle>
.obj __vt__26Container<Q23Sys8Triangle>, weak
	.4byte 0
	.4byte 0
	.4byte "__dt__26Container<Q23Sys8Triangle>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__26Container<Q23Sys8Triangle>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__26Container<Q23Sys8Triangle>Fi"
	.4byte "getTo__26Container<Q23Sys8Triangle>Fv"
.endobj __vt__26Container<Q23Sys8Triangle>
.obj __vt__Q23Sys11GridDivider, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23Sys11GridDividerFv
	.4byte getChildCount__5CNodeFv
	.4byte "getMinY__Q23Sys11GridDividerFR10Vector3<f>"
	.4byte findTriLists__Q23Sys11GridDividerFRQ23Sys6Sphere
	.4byte read__Q23Sys11GridDividerFR6Stream
	.4byte getCurrTri__Q23Sys11GridDividerFRQ24Game11CurrTriInfo
	.4byte createTriangles__Q23Sys11GridDividerFRQ23Sys17CreateTriangleArg
	.4byte getBoundBox__Q23Sys11GridDividerFR8BoundBox
	.4byte clone__Q23Sys10TriDividerFR7Matrixf
	.4byte do_clone__Q23Sys11GridDividerFR7MatrixfPQ23Sys11VertexTablePQ23Sys13TriangleTable
.endobj __vt__Q23Sys11GridDivider

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj debug__Q23Sys8Triangle, global
	.skip 0x1
.endobj debug__Q23Sys8Triangle

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520308, local
	.float 0.0
.endobj lbl_80520308
.obj lbl_8052030C, local
	.float 1.0
.endobj lbl_8052030C
.obj lbl_80520310, local
	.float 0.5
.endobj lbl_80520310
.obj lbl_80520314, local
	.float 0.33333334
.endobj lbl_80520314
.obj lbl_80520318, local
	.float 1.28E7
.endobj lbl_80520318
.obj lbl_8052031C, local
	.float -1.28E7
.endobj lbl_8052031C
.obj lbl_80520320, local
	.float 0.01
.endobj lbl_80520320
.obj lbl_80520324, local
	.float -0.1
.endobj lbl_80520324
.obj lbl_80520328, local
	.float 328000.0
.endobj lbl_80520328
.obj lbl_8052032C, local
	.float -328000.0
.endobj lbl_8052032C
.balign 8
.obj lbl_80520330, local
	.8byte 0x4330000080000000
.endobj lbl_80520330
.balign 4
.obj lbl_80520338, local
	.asciz "\r\n"
.endobj lbl_80520338
.balign 4
.obj lbl_8052033C, local
	.float 32768.0
.endobj lbl_8052033C
.obj lbl_80520340, local
	.float -32768.0
.endobj lbl_80520340
.obj lbl_80520344, local
	.float 1.0E10
.endobj lbl_80520344
.obj lbl_80520348, local
	.float -1.0E10
.endobj lbl_80520348
.obj lbl_8052034C, local
	.float 3.0
.endobj lbl_8052034C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn getAxisVector__Q23Sys4TubeFR10Vector3<f>, global
/* 80415AA4 004129E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80415AA8 004129E8  7C 08 02 A6 */	mflr r0
/* 80415AAC 004129EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80415AB0 004129F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80415AB4 004129F4  7C 9F 23 78 */	mr r31, r4
/* 80415AB8 004129F8  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80415ABC 004129FC  C0 03 00 00 */	lfs f0, 0(r3)
/* 80415AC0 00412A00  C0 63 00 10 */	lfs f3, 0x10(r3)
/* 80415AC4 00412A04  C0 43 00 04 */	lfs f2, 4(r3)
/* 80415AC8 00412A08  EC 01 00 28 */	fsubs f0, f1, f0
/* 80415ACC 00412A0C  C0 83 00 14 */	lfs f4, 0x14(r3)
/* 80415AD0 00412A10  C0 23 00 08 */	lfs f1, 8(r3)
/* 80415AD4 00412A14  EC 43 10 28 */	fsubs f2, f3, f2
/* 80415AD8 00412A18  D0 04 00 00 */	stfs f0, 0(r4)
/* 80415ADC 00412A1C  EC 04 08 28 */	fsubs f0, f4, f1
/* 80415AE0 00412A20  D0 44 00 04 */	stfs f2, 4(r4)
/* 80415AE4 00412A24  D0 04 00 08 */	stfs f0, 8(r4)
/* 80415AE8 00412A28  C0 24 00 00 */	lfs f1, 0(r4)
/* 80415AEC 00412A2C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80415AF0 00412A30  C0 44 00 08 */	lfs f2, 8(r4)
/* 80415AF4 00412A34  EC 21 00 72 */	fmuls f1, f1, f1
/* 80415AF8 00412A38  EC 00 00 32 */	fmuls f0, f0, f0
/* 80415AFC 00412A3C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80415B00 00412A40  EC 01 00 2A */	fadds f0, f1, f0
/* 80415B04 00412A44  EC 22 00 2A */	fadds f1, f2, f0
/* 80415B08 00412A48  4B FF BC FD */	bl pikmin2_sqrtf__Ff
/* 80415B0C 00412A4C  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415B10 00412A50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80415B14 00412A54  40 81 00 30 */	ble .L_80415B44
/* 80415B18 00412A58  C0 42 1F AC */	lfs f2, lbl_8052030C@sda21(r2)
/* 80415B1C 00412A5C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80415B20 00412A60  EC 22 08 24 */	fdivs f1, f2, f1
/* 80415B24 00412A64  EC 00 00 72 */	fmuls f0, f0, f1
/* 80415B28 00412A68  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80415B2C 00412A6C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80415B30 00412A70  EC 00 00 72 */	fmuls f0, f0, f1
/* 80415B34 00412A74  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80415B38 00412A78  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80415B3C 00412A7C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80415B40 00412A80  D0 1F 00 08 */	stfs f0, 8(r31)
.L_80415B44:
/* 80415B44 00412A84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80415B48 00412A88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80415B4C 00412A8C  7C 08 03 A6 */	mtlr r0
/* 80415B50 00412A90  38 21 00 10 */	addi r1, r1, 0x10
/* 80415B54 00412A94  4E 80 00 20 */	blr 
.endfn getAxisVector__Q23Sys4TubeFR10Vector3<f>

.fn collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf, global
/* 80415B58 00412A98  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80415B5C 00412A9C  7C 08 02 A6 */	mflr r0
/* 80415B60 00412AA0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80415B64 00412AA4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80415B68 00412AA8  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80415B6C 00412AAC  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80415B70 00412AB0  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80415B74 00412AB4  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80415B78 00412AB8  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80415B7C 00412ABC  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 80415B80 00412AC0  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 80415B84 00412AC4  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 80415B88 00412AC8  F3 61 00 38 */	psq_st f27, 56(r1), 0, qr0
/* 80415B8C 00412ACC  DB 41 00 20 */	stfd f26, 0x20(r1)
/* 80415B90 00412AD0  F3 41 00 28 */	psq_st f26, 40(r1), 0, qr0
/* 80415B94 00412AD4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80415B98 00412AD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80415B9C 00412ADC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80415BA0 00412AE0  93 81 00 10 */	stw r28, 0x10(r1)
/* 80415BA4 00412AE4  7C 7C 1B 78 */	mr r28, r3
/* 80415BA8 00412AE8  7C 9D 23 78 */	mr r29, r4
/* 80415BAC 00412AEC  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 80415BB0 00412AF0  7C BE 2B 78 */	mr r30, r5
/* 80415BB4 00412AF4  C0 03 00 04 */	lfs f0, 4(r3)
/* 80415BB8 00412AF8  7C DF 33 78 */	mr r31, r6
/* 80415BBC 00412AFC  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80415BC0 00412B00  EF C2 00 28 */	fsubs f30, f2, f0
/* 80415BC4 00412B04  C0 03 00 00 */	lfs f0, 0(r3)
/* 80415BC8 00412B08  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 80415BCC 00412B0C  EF E1 00 28 */	fsubs f31, f1, f0
/* 80415BD0 00412B10  C0 23 00 08 */	lfs f1, 8(r3)
/* 80415BD4 00412B14  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80415BD8 00412B18  EF A2 08 28 */	fsubs f29, f2, f1
/* 80415BDC 00412B1C  FF 80 F8 90 */	fmr f28, f31
/* 80415BE0 00412B20  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 80415BE4 00412B24  FF 60 F0 90 */	fmr f27, f30
/* 80415BE8 00412B28  FF 40 E8 90 */	fmr f26, f29
/* 80415BEC 00412B2C  EC 3D 07 7A */	fmadds f1, f29, f29, f0
/* 80415BF0 00412B30  4B FF BC 15 */	bl pikmin2_sqrtf__Ff
/* 80415BF4 00412B34  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415BF8 00412B38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80415BFC 00412B3C  40 81 00 1C */	ble .L_80415C18
/* 80415C00 00412B40  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80415C04 00412B44  EC 00 08 24 */	fdivs f0, f0, f1
/* 80415C08 00412B48  EF 9C 00 32 */	fmuls f28, f28, f0
/* 80415C0C 00412B4C  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80415C10 00412B50  EF 5A 00 32 */	fmuls f26, f26, f0
/* 80415C14 00412B54  48 00 00 08 */	b .L_80415C1C
.L_80415C18:
/* 80415C18 00412B58  FC 20 00 90 */	fmr f1, f0
.L_80415C1C:
/* 80415C1C 00412B5C  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415C20 00412B60  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80415C24 00412B64  40 82 00 0C */	bne .L_80415C30
/* 80415C28 00412B68  38 60 00 00 */	li r3, 0
/* 80415C2C 00412B6C  48 00 01 58 */	b .L_80415D84
.L_80415C30:
/* 80415C30 00412B70  C0 9D 00 04 */	lfs f4, 4(r29)
/* 80415C34 00412B74  C0 5C 00 04 */	lfs f2, 4(r28)
/* 80415C38 00412B78  C0 DD 00 00 */	lfs f6, 0(r29)
/* 80415C3C 00412B7C  EC 04 10 28 */	fsubs f0, f4, f2
/* 80415C40 00412B80  C0 BC 00 00 */	lfs f5, 0(r28)
/* 80415C44 00412B84  C1 3D 00 08 */	lfs f9, 8(r29)
/* 80415C48 00412B88  EC 66 28 28 */	fsubs f3, f6, f5
/* 80415C4C 00412B8C  C1 1C 00 08 */	lfs f8, 8(r28)
/* 80415C50 00412B90  EC 1B 00 32 */	fmuls f0, f27, f0
/* 80415C54 00412B94  EC E9 40 28 */	fsubs f7, f9, f8
/* 80415C58 00412B98  EC 1C 00 FA */	fmadds f0, f28, f3, f0
/* 80415C5C 00412B9C  EC 1A 01 FA */	fmadds f0, f26, f7, f0
/* 80415C60 00412BA0  EF 60 08 24 */	fdivs f27, f0, f1
/* 80415C64 00412BA4  EC 3E 06 F2 */	fmuls f1, f30, f27
/* 80415C68 00412BA8  EC 7F 06 F2 */	fmuls f3, f31, f27
/* 80415C6C 00412BAC  EC 1D 06 F2 */	fmuls f0, f29, f27
/* 80415C70 00412BB0  EC 41 10 2A */	fadds f2, f1, f2
/* 80415C74 00412BB4  EC 63 28 2A */	fadds f3, f3, f5
/* 80415C78 00412BB8  EC 20 40 2A */	fadds f1, f0, f8
/* 80415C7C 00412BBC  EF 42 20 28 */	fsubs f26, f2, f4
/* 80415C80 00412BC0  EF A3 30 28 */	fsubs f29, f3, f6
/* 80415C84 00412BC4  EF C1 48 28 */	fsubs f30, f1, f9
/* 80415C88 00412BC8  EC 1A 06 B2 */	fmuls f0, f26, f26
/* 80415C8C 00412BCC  EC 1D 07 7A */	fmadds f0, f29, f29, f0
/* 80415C90 00412BD0  EC 3E 07 BA */	fmadds f1, f30, f30, f0
/* 80415C94 00412BD4  4B FF BB 71 */	bl pikmin2_sqrtf__Ff
/* 80415C98 00412BD8  C0 A2 1F AC */	lfs f5, lbl_8052030C@sda21(r2)
/* 80415C9C 00412BDC  C0 5C 00 1C */	lfs f2, 0x1c(r28)
/* 80415CA0 00412BE0  EC 85 D8 28 */	fsubs f4, f5, f27
/* 80415CA4 00412BE4  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415CA8 00412BE8  EC 42 06 F2 */	fmuls f2, f2, f27
/* 80415CAC 00412BEC  C0 7C 00 18 */	lfs f3, 0x18(r28)
/* 80415CB0 00412BF0  C0 DD 00 0C */	lfs f6, 0xc(r29)
/* 80415CB4 00412BF4  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80415CB8 00412BF8  EC 44 10 FA */	fmadds f2, f4, f3, f2
/* 80415CBC 00412BFC  EC 46 10 2A */	fadds f2, f6, f2
/* 80415CC0 00412C00  EF 82 08 28 */	fsubs f28, f2, f1
/* 80415CC4 00412C04  4C 41 13 82 */	cror 2, 1, 2
/* 80415CC8 00412C08  40 82 00 B8 */	bne .L_80415D80
/* 80415CCC 00412C0C  FC 1B 28 40 */	fcmpo cr0, f27, f5
/* 80415CD0 00412C10  4C 40 13 82 */	cror 2, 0, 2
/* 80415CD4 00412C14  40 82 00 AC */	bne .L_80415D80
/* 80415CD8 00412C18  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80415CDC 00412C1C  4C 41 13 82 */	cror 2, 1, 2
/* 80415CE0 00412C20  40 82 00 A0 */	bne .L_80415D80
/* 80415CE4 00412C24  D3 BE 00 00 */	stfs f29, 0(r30)
/* 80415CE8 00412C28  D3 5E 00 04 */	stfs f26, 4(r30)
/* 80415CEC 00412C2C  D3 DE 00 08 */	stfs f30, 8(r30)
/* 80415CF0 00412C30  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80415CF4 00412C34  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80415CF8 00412C38  EC 21 00 72 */	fmuls f1, f1, f1
/* 80415CFC 00412C3C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80415D00 00412C40  EC 00 00 32 */	fmuls f0, f0, f0
/* 80415D04 00412C44  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80415D08 00412C48  EC 01 00 2A */	fadds f0, f1, f0
/* 80415D0C 00412C4C  EC 22 00 2A */	fadds f1, f2, f0
/* 80415D10 00412C50  4B FF BA F5 */	bl pikmin2_sqrtf__Ff
/* 80415D14 00412C54  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415D18 00412C58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80415D1C 00412C5C  40 81 00 30 */	ble .L_80415D4C
/* 80415D20 00412C60  C0 42 1F AC */	lfs f2, lbl_8052030C@sda21(r2)
/* 80415D24 00412C64  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80415D28 00412C68  EC 22 08 24 */	fdivs f1, f2, f1
/* 80415D2C 00412C6C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80415D30 00412C70  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80415D34 00412C74  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80415D38 00412C78  EC 00 00 72 */	fmuls f0, f0, f1
/* 80415D3C 00412C7C  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80415D40 00412C80  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80415D44 00412C84  EC 00 00 72 */	fmuls f0, f0, f1
/* 80415D48 00412C88  D0 1E 00 08 */	stfs f0, 8(r30)
.L_80415D4C:
/* 80415D4C 00412C8C  FC 60 E0 50 */	fneg f3, f28
/* 80415D50 00412C90  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80415D54 00412C94  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80415D58 00412C98  38 60 00 01 */	li r3, 1
/* 80415D5C 00412C9C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80415D60 00412CA0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80415D64 00412CA4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80415D68 00412CA8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80415D6C 00412CAC  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80415D70 00412CB0  D0 3E 00 04 */	stfs f1, 4(r30)
/* 80415D74 00412CB4  D0 5E 00 08 */	stfs f2, 8(r30)
/* 80415D78 00412CB8  D3 7F 00 00 */	stfs f27, 0(r31)
/* 80415D7C 00412CBC  48 00 00 08 */	b .L_80415D84
.L_80415D80:
/* 80415D80 00412CC0  38 60 00 00 */	li r3, 0
.L_80415D84:
/* 80415D84 00412CC4  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80415D88 00412CC8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80415D8C 00412CCC  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80415D90 00412CD0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80415D94 00412CD4  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 80415D98 00412CD8  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80415D9C 00412CDC  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 80415DA0 00412CE0  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 80415DA4 00412CE4  E3 61 00 38 */	psq_l f27, 56(r1), 0, qr0
/* 80415DA8 00412CE8  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 80415DAC 00412CEC  E3 41 00 28 */	psq_l f26, 40(r1), 0, qr0
/* 80415DB0 00412CF0  CB 41 00 20 */	lfd f26, 0x20(r1)
/* 80415DB4 00412CF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80415DB8 00412CF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80415DBC 00412CFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80415DC0 00412D00  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80415DC4 00412D04  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80415DC8 00412D08  7C 08 03 A6 */	mtlr r0
/* 80415DCC 00412D0C  38 21 00 80 */	addi r1, r1, 0x80
/* 80415DD0 00412D10  4E 80 00 20 */	blr 
.endfn collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf

.fn getPosRatio__Q23Sys4TubeFRC10Vector3<f>, global
/* 80415DD4 00412D14  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80415DD8 00412D18  7C 08 02 A6 */	mflr r0
/* 80415DDC 00412D1C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80415DE0 00412D20  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80415DE4 00412D24  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80415DE8 00412D28  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80415DEC 00412D2C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80415DF0 00412D30  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80415DF4 00412D34  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 80415DF8 00412D38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80415DFC 00412D3C  93 C1 00 08 */	stw r30, 8(r1)
/* 80415E00 00412D40  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 80415E04 00412D44  7C 7E 1B 78 */	mr r30, r3
/* 80415E08 00412D48  C0 03 00 04 */	lfs f0, 4(r3)
/* 80415E0C 00412D4C  7C 9F 23 78 */	mr r31, r4
/* 80415E10 00412D50  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80415E14 00412D54  EF C2 00 28 */	fsubs f30, f2, f0
/* 80415E18 00412D58  C0 03 00 00 */	lfs f0, 0(r3)
/* 80415E1C 00412D5C  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 80415E20 00412D60  EF E1 00 28 */	fsubs f31, f1, f0
/* 80415E24 00412D64  C0 23 00 08 */	lfs f1, 8(r3)
/* 80415E28 00412D68  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80415E2C 00412D6C  EF A2 08 28 */	fsubs f29, f2, f1
/* 80415E30 00412D70  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 80415E34 00412D74  EC 3D 07 7A */	fmadds f1, f29, f29, f0
/* 80415E38 00412D78  4B FF B9 CD */	bl pikmin2_sqrtf__Ff
/* 80415E3C 00412D7C  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415E40 00412D80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80415E44 00412D84  40 81 00 1C */	ble .L_80415E60
/* 80415E48 00412D88  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80415E4C 00412D8C  EC 00 08 24 */	fdivs f0, f0, f1
/* 80415E50 00412D90  EF FF 00 32 */	fmuls f31, f31, f0
/* 80415E54 00412D94  EF DE 00 32 */	fmuls f30, f30, f0
/* 80415E58 00412D98  EF BD 00 32 */	fmuls f29, f29, f0
/* 80415E5C 00412D9C  48 00 00 08 */	b .L_80415E64
.L_80415E60:
/* 80415E60 00412DA0  FC 20 00 90 */	fmr f1, f0
.L_80415E64:
/* 80415E64 00412DA4  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80415E68 00412DA8  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80415E6C 00412DAC  C0 7F 00 00 */	lfs f3, 0(r31)
/* 80415E70 00412DB0  EC 02 00 28 */	fsubs f0, f2, f0
/* 80415E74 00412DB4  C0 5E 00 00 */	lfs f2, 0(r30)
/* 80415E78 00412DB8  C0 9F 00 08 */	lfs f4, 8(r31)
/* 80415E7C 00412DBC  EC 43 10 28 */	fsubs f2, f3, f2
/* 80415E80 00412DC0  C0 7E 00 08 */	lfs f3, 8(r30)
/* 80415E84 00412DC4  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80415E88 00412DC8  EC 64 18 28 */	fsubs f3, f4, f3
/* 80415E8C 00412DCC  EC 1F 00 BA */	fmadds f0, f31, f2, f0
/* 80415E90 00412DD0  EC 1D 00 FA */	fmadds f0, f29, f3, f0
/* 80415E94 00412DD4  EC 20 08 24 */	fdivs f1, f0, f1
/* 80415E98 00412DD8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80415E9C 00412DDC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80415EA0 00412DE0  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80415EA4 00412DE4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80415EA8 00412DE8  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 80415EAC 00412DEC  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80415EB0 00412DF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80415EB4 00412DF4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80415EB8 00412DF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80415EBC 00412DFC  7C 08 03 A6 */	mtlr r0
/* 80415EC0 00412E00  38 21 00 40 */	addi r1, r1, 0x40
/* 80415EC4 00412E04  4E 80 00 20 */	blr 
.endfn getPosRatio__Q23Sys4TubeFRC10Vector3<f>

.fn setPos__Q23Sys4TubeFf, global
/* 80415EC8 00412E08  C0 C4 00 00 */	lfs f6, 0(r4)
/* 80415ECC 00412E0C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80415ED0 00412E10  C0 A4 00 04 */	lfs f5, 4(r4)
/* 80415ED4 00412E14  EC 00 30 28 */	fsubs f0, f0, f6
/* 80415ED8 00412E18  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 80415EDC 00412E1C  C0 84 00 08 */	lfs f4, 8(r4)
/* 80415EE0 00412E20  EC 42 28 28 */	fsubs f2, f2, f5
/* 80415EE4 00412E24  C0 64 00 14 */	lfs f3, 0x14(r4)
/* 80415EE8 00412E28  EC 00 00 72 */	fmuls f0, f0, f1
/* 80415EEC 00412E2C  EC 63 20 28 */	fsubs f3, f3, f4
/* 80415EF0 00412E30  EC 42 00 72 */	fmuls f2, f2, f1
/* 80415EF4 00412E34  EC 06 00 2A */	fadds f0, f6, f0
/* 80415EF8 00412E38  EC 23 00 72 */	fmuls f1, f3, f1
/* 80415EFC 00412E3C  EC 45 10 2A */	fadds f2, f5, f2
/* 80415F00 00412E40  D0 03 00 00 */	stfs f0, 0(r3)
/* 80415F04 00412E44  EC 04 08 2A */	fadds f0, f4, f1
/* 80415F08 00412E48  D0 43 00 04 */	stfs f2, 4(r3)
/* 80415F0C 00412E4C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80415F10 00412E50  4E 80 00 20 */	blr 
.endfn setPos__Q23Sys4TubeFf

.fn intersect__Q23Sys6SphereFRQ23Sys6Sphere, global
/* 80415F14 00412E54  C0 44 00 04 */	lfs f2, 4(r4)
/* 80415F18 00412E58  C0 03 00 04 */	lfs f0, 4(r3)
/* 80415F1C 00412E5C  C0 24 00 00 */	lfs f1, 0(r4)
/* 80415F20 00412E60  EC 62 00 28 */	fsubs f3, f2, f0
/* 80415F24 00412E64  C0 03 00 00 */	lfs f0, 0(r3)
/* 80415F28 00412E68  C0 44 00 08 */	lfs f2, 8(r4)
/* 80415F2C 00412E6C  EC 81 00 28 */	fsubs f4, f1, f0
/* 80415F30 00412E70  C0 23 00 08 */	lfs f1, 8(r3)
/* 80415F34 00412E74  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80415F38 00412E78  EC A2 08 28 */	fsubs f5, f2, f1
/* 80415F3C 00412E7C  C0 64 00 0C */	lfs f3, 0xc(r4)
/* 80415F40 00412E80  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 80415F44 00412E84  EC 24 01 3A */	fmadds f1, f4, f4, f0
/* 80415F48 00412E88  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415F4C 00412E8C  EC 43 10 2A */	fadds f2, f3, f2
/* 80415F50 00412E90  EC 25 09 7A */	fmadds f1, f5, f5, f1
/* 80415F54 00412E94  EC 22 08 BC */	fnmsubs f1, f2, f2, f1
/* 80415F58 00412E98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80415F5C 00412E9C  4C 40 13 82 */	cror 2, 0, 2
/* 80415F60 00412EA0  7C 00 00 26 */	mfcr r0
/* 80415F64 00412EA4  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
/* 80415F68 00412EA8  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys6SphereFRQ23Sys6Sphere

.fn intersect__Q23Sys6SphereFRQ23Sys6SphereR10Vector3<f>, global
/* 80415F6C 00412EAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80415F70 00412EB0  7C 08 02 A6 */	mflr r0
/* 80415F74 00412EB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80415F78 00412EB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80415F7C 00412EBC  7C BF 2B 78 */	mr r31, r5
/* 80415F80 00412EC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80415F84 00412EC4  7C 9E 23 78 */	mr r30, r4
/* 80415F88 00412EC8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80415F8C 00412ECC  7C 7D 1B 78 */	mr r29, r3
/* 80415F90 00412ED0  C0 24 00 00 */	lfs f1, 0(r4)
/* 80415F94 00412ED4  C0 03 00 00 */	lfs f0, 0(r3)
/* 80415F98 00412ED8  C0 64 00 04 */	lfs f3, 4(r4)
/* 80415F9C 00412EDC  C0 43 00 04 */	lfs f2, 4(r3)
/* 80415FA0 00412EE0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80415FA4 00412EE4  C0 84 00 08 */	lfs f4, 8(r4)
/* 80415FA8 00412EE8  C0 23 00 08 */	lfs f1, 8(r3)
/* 80415FAC 00412EEC  EC 43 10 28 */	fsubs f2, f3, f2
/* 80415FB0 00412EF0  D0 05 00 00 */	stfs f0, 0(r5)
/* 80415FB4 00412EF4  EC 04 08 28 */	fsubs f0, f4, f1
/* 80415FB8 00412EF8  D0 45 00 04 */	stfs f2, 4(r5)
/* 80415FBC 00412EFC  D0 05 00 08 */	stfs f0, 8(r5)
/* 80415FC0 00412F00  C0 25 00 00 */	lfs f1, 0(r5)
/* 80415FC4 00412F04  C0 05 00 04 */	lfs f0, 4(r5)
/* 80415FC8 00412F08  C0 45 00 08 */	lfs f2, 8(r5)
/* 80415FCC 00412F0C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80415FD0 00412F10  EC 00 00 32 */	fmuls f0, f0, f0
/* 80415FD4 00412F14  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80415FD8 00412F18  EC 01 00 2A */	fadds f0, f1, f0
/* 80415FDC 00412F1C  EC 22 00 2A */	fadds f1, f2, f0
/* 80415FE0 00412F20  4B FF B8 25 */	bl pikmin2_sqrtf__Ff
/* 80415FE4 00412F24  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80415FE8 00412F28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80415FEC 00412F2C  40 81 00 34 */	ble .L_80416020
/* 80415FF0 00412F30  C0 42 1F AC */	lfs f2, lbl_8052030C@sda21(r2)
/* 80415FF4 00412F34  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80415FF8 00412F38  EC 42 08 24 */	fdivs f2, f2, f1
/* 80415FFC 00412F3C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80416000 00412F40  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80416004 00412F44  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80416008 00412F48  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8041600C 00412F4C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80416010 00412F50  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80416014 00412F54  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80416018 00412F58  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8041601C 00412F5C  48 00 00 08 */	b .L_80416024
.L_80416020:
/* 80416020 00412F60  FC 20 00 90 */	fmr f1, f0
.L_80416024:
/* 80416024 00412F64  C0 7E 00 0C */	lfs f3, 0xc(r30)
/* 80416028 00412F68  C0 5D 00 0C */	lfs f2, 0xc(r29)
/* 8041602C 00412F6C  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416030 00412F70  EC 43 10 2A */	fadds f2, f3, f2
/* 80416034 00412F74  EC 61 10 28 */	fsubs f3, f1, f2
/* 80416038 00412F78  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8041603C 00412F7C  40 81 00 0C */	ble .L_80416048
/* 80416040 00412F80  38 60 00 00 */	li r3, 0
/* 80416044 00412F84  48 00 00 2C */	b .L_80416070
.L_80416048:
/* 80416048 00412F88  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8041604C 00412F8C  38 60 00 01 */	li r3, 1
/* 80416050 00412F90  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80416054 00412F94  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80416058 00412F98  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8041605C 00412F9C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80416060 00412FA0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80416064 00412FA4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80416068 00412FA8  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8041606C 00412FAC  D0 5F 00 08 */	stfs f2, 8(r31)
.L_80416070:
/* 80416070 00412FB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80416074 00412FB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80416078 00412FB8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041607C 00412FBC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80416080 00412FC0  7C 08 03 A6 */	mtlr r0
/* 80416084 00412FC4  38 21 00 20 */	addi r1, r1, 0x20
/* 80416088 00412FC8  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys6SphereFRQ23Sys6SphereR10Vector3<f>

.fn intersect__Q23Sys6SphereFRQ23Sys4EdgeRf, global
/* 8041608C 00412FCC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80416090 00412FD0  7C 08 02 A6 */	mflr r0
/* 80416094 00412FD4  90 01 00 54 */	stw r0, 0x54(r1)
/* 80416098 00412FD8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8041609C 00412FDC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 804160A0 00412FE0  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 804160A4 00412FE4  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 804160A8 00412FE8  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 804160AC 00412FEC  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 804160B0 00412FF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804160B4 00412FF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804160B8 00412FF8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804160BC 00412FFC  7C 7D 1B 78 */	mr r29, r3
/* 804160C0 00413000  7C 9E 23 78 */	mr r30, r4
/* 804160C4 00413004  C0 44 00 04 */	lfs f2, 4(r4)
/* 804160C8 00413008  7C BF 2B 78 */	mr r31, r5
/* 804160CC 0041300C  C0 03 00 04 */	lfs f0, 4(r3)
/* 804160D0 00413010  C0 24 00 00 */	lfs f1, 0(r4)
/* 804160D4 00413014  EC 82 00 28 */	fsubs f4, f2, f0
/* 804160D8 00413018  C0 03 00 00 */	lfs f0, 0(r3)
/* 804160DC 0041301C  C0 44 00 08 */	lfs f2, 8(r4)
/* 804160E0 00413020  EC 61 00 28 */	fsubs f3, f1, f0
/* 804160E4 00413024  C0 23 00 08 */	lfs f1, 8(r3)
/* 804160E8 00413028  EC 04 01 32 */	fmuls f0, f4, f4
/* 804160EC 0041302C  EC 22 08 28 */	fsubs f1, f2, f1
/* 804160F0 00413030  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 804160F4 00413034  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 804160F8 00413038  4B FF B7 0D */	bl pikmin2_sqrtf__Ff
/* 804160FC 0041303C  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80416100 00413040  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416104 00413044  4C 40 13 82 */	cror 2, 0, 2
/* 80416108 00413048  40 82 00 14 */	bne .L_8041611C
/* 8041610C 0041304C  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416110 00413050  38 60 00 01 */	li r3, 1
/* 80416114 00413054  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80416118 00413058  48 00 01 44 */	b .L_8041625C
.L_8041611C:
/* 8041611C 0041305C  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 80416120 00413060  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80416124 00413064  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80416128 00413068  EC 82 00 28 */	fsubs f4, f2, f0
/* 8041612C 0041306C  C0 1D 00 00 */	lfs f0, 0(r29)
/* 80416130 00413070  C0 5E 00 14 */	lfs f2, 0x14(r30)
/* 80416134 00413074  EC 61 00 28 */	fsubs f3, f1, f0
/* 80416138 00413078  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8041613C 0041307C  EC 04 01 32 */	fmuls f0, f4, f4
/* 80416140 00413080  EC 22 08 28 */	fsubs f1, f2, f1
/* 80416144 00413084  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80416148 00413088  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8041614C 0041308C  4B FF B6 B9 */	bl pikmin2_sqrtf__Ff
/* 80416150 00413090  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80416154 00413094  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416158 00413098  4C 40 13 82 */	cror 2, 0, 2
/* 8041615C 0041309C  40 82 00 14 */	bne .L_80416170
/* 80416160 004130A0  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80416164 004130A4  38 60 00 01 */	li r3, 1
/* 80416168 004130A8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8041616C 004130AC  48 00 00 F0 */	b .L_8041625C
.L_80416170:
/* 80416170 004130B0  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 80416174 004130B4  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80416178 004130B8  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8041617C 004130BC  EF C2 00 28 */	fsubs f30, f2, f0
/* 80416180 004130C0  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80416184 004130C4  C0 5E 00 14 */	lfs f2, 0x14(r30)
/* 80416188 004130C8  EF E1 00 28 */	fsubs f31, f1, f0
/* 8041618C 004130CC  C0 3E 00 08 */	lfs f1, 8(r30)
/* 80416190 004130D0  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80416194 004130D4  EF A2 08 28 */	fsubs f29, f2, f1
/* 80416198 004130D8  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 8041619C 004130DC  EC 3D 07 7A */	fmadds f1, f29, f29, f0
/* 804161A0 004130E0  4B FF B6 65 */	bl pikmin2_sqrtf__Ff
/* 804161A4 004130E4  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804161A8 004130E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804161AC 004130EC  40 81 00 1C */	ble .L_804161C8
/* 804161B0 004130F0  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 804161B4 004130F4  EC 00 08 24 */	fdivs f0, f0, f1
/* 804161B8 004130F8  EF FF 00 32 */	fmuls f31, f31, f0
/* 804161BC 004130FC  EF DE 00 32 */	fmuls f30, f30, f0
/* 804161C0 00413100  EF BD 00 32 */	fmuls f29, f29, f0
/* 804161C4 00413104  48 00 00 08 */	b .L_804161CC
.L_804161C8:
/* 804161C8 00413108  FC 20 00 90 */	fmr f1, f0
.L_804161CC:
/* 804161CC 0041310C  C0 7D 00 04 */	lfs f3, 4(r29)
/* 804161D0 00413110  C0 1E 00 04 */	lfs f0, 4(r30)
/* 804161D4 00413114  C0 5D 00 00 */	lfs f2, 0(r29)
/* 804161D8 00413118  EC A3 00 28 */	fsubs f5, f3, f0
/* 804161DC 0041311C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 804161E0 00413120  C0 7D 00 08 */	lfs f3, 8(r29)
/* 804161E4 00413124  EC 82 00 28 */	fsubs f4, f2, f0
/* 804161E8 00413128  C0 1E 00 08 */	lfs f0, 8(r30)
/* 804161EC 0041312C  EC 45 07 B2 */	fmuls f2, f5, f30
/* 804161F0 00413130  EC 63 00 28 */	fsubs f3, f3, f0
/* 804161F4 00413134  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804161F8 00413138  EC 44 17 FA */	fmadds f2, f4, f31, f2
/* 804161FC 0041313C  EC 43 17 7A */	fmadds f2, f3, f29, f2
/* 80416200 00413140  D0 5F 00 00 */	stfs f2, 0(r31)
/* 80416204 00413144  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80416208 00413148  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8041620C 0041314C  41 80 00 0C */	blt .L_80416218
/* 80416210 00413150  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80416214 00413154  40 81 00 0C */	ble .L_80416220
.L_80416218:
/* 80416218 00413158  38 60 00 00 */	li r3, 0
/* 8041621C 0041315C  48 00 00 40 */	b .L_8041625C
.L_80416220:
/* 80416220 00413160  EC 3E 00 B2 */	fmuls f1, f30, f2
/* 80416224 00413164  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 80416228 00413168  EC 5D 00 B2 */	fmuls f2, f29, f2
/* 8041622C 0041316C  EC A5 08 28 */	fsubs f5, f5, f1
/* 80416230 00413170  EC 24 00 28 */	fsubs f1, f4, f0
/* 80416234 00413174  EC 43 10 28 */	fsubs f2, f3, f2
/* 80416238 00413178  EC 05 01 72 */	fmuls f0, f5, f5
/* 8041623C 0041317C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80416240 00413180  EC 22 00 BA */	fmadds f1, f2, f2, f0
/* 80416244 00413184  4B FF B5 C1 */	bl pikmin2_sqrtf__Ff
/* 80416248 00413188  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 8041624C 0041318C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416250 00413190  4C 40 13 82 */	cror 2, 0, 2
/* 80416254 00413194  7C 00 00 26 */	mfcr r0
/* 80416258 00413198  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
.L_8041625C:
/* 8041625C 0041319C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80416260 004131A0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80416264 004131A4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80416268 004131A8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8041626C 004131AC  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80416270 004131B0  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80416274 004131B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80416278 004131B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041627C 004131BC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80416280 004131C0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80416284 004131C4  7C 08 03 A6 */	mtlr r0
/* 80416288 004131C8  38 21 00 50 */	addi r1, r1, 0x50
/* 8041628C 004131CC  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys6SphereFRQ23Sys4EdgeRf

.fn intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>, global
/* 80416290 004131D0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80416294 004131D4  7C 08 02 A6 */	mflr r0
/* 80416298 004131D8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8041629C 004131DC  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 804162A0 004131E0  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 804162A4 004131E4  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 804162A8 004131E8  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 804162AC 004131EC  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 804162B0 004131F0  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 804162B4 004131F4  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 804162B8 004131F8  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 804162BC 004131FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804162C0 00413200  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804162C4 00413204  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804162C8 00413208  93 81 00 10 */	stw r28, 0x10(r1)
/* 804162CC 0041320C  7C 7C 1B 78 */	mr r28, r3
/* 804162D0 00413210  7C 9D 23 78 */	mr r29, r4
/* 804162D4 00413214  C0 44 00 04 */	lfs f2, 4(r4)
/* 804162D8 00413218  7C BE 2B 78 */	mr r30, r5
/* 804162DC 0041321C  C0 03 00 04 */	lfs f0, 4(r3)
/* 804162E0 00413220  7C DF 33 78 */	mr r31, r6
/* 804162E4 00413224  C0 24 00 00 */	lfs f1, 0(r4)
/* 804162E8 00413228  EC 82 00 28 */	fsubs f4, f2, f0
/* 804162EC 0041322C  C0 03 00 00 */	lfs f0, 0(r3)
/* 804162F0 00413230  C0 44 00 08 */	lfs f2, 8(r4)
/* 804162F4 00413234  EC 61 00 28 */	fsubs f3, f1, f0
/* 804162F8 00413238  C0 23 00 08 */	lfs f1, 8(r3)
/* 804162FC 0041323C  EC 04 01 32 */	fmuls f0, f4, f4
/* 80416300 00413240  EC 22 08 28 */	fsubs f1, f2, f1
/* 80416304 00413244  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80416308 00413248  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8041630C 0041324C  4B FF B4 F9 */	bl pikmin2_sqrtf__Ff
/* 80416310 00413250  C0 1C 00 0C */	lfs f0, 0xc(r28)
/* 80416314 00413254  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416318 00413258  4C 40 13 82 */	cror 2, 0, 2
/* 8041631C 0041325C  40 82 00 2C */	bne .L_80416348
/* 80416320 00413260  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416324 00413264  38 60 00 01 */	li r3, 1
/* 80416328 00413268  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8041632C 0041326C  C0 1D 00 00 */	lfs f0, 0(r29)
/* 80416330 00413270  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80416334 00413274  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80416338 00413278  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8041633C 0041327C  C0 1D 00 08 */	lfs f0, 8(r29)
/* 80416340 00413280  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80416344 00413284  48 00 01 98 */	b .L_804164DC
.L_80416348:
/* 80416348 00413288  C0 5D 00 10 */	lfs f2, 0x10(r29)
/* 8041634C 0041328C  C0 1C 00 04 */	lfs f0, 4(r28)
/* 80416350 00413290  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 80416354 00413294  EC 82 00 28 */	fsubs f4, f2, f0
/* 80416358 00413298  C0 1C 00 00 */	lfs f0, 0(r28)
/* 8041635C 0041329C  C0 5D 00 14 */	lfs f2, 0x14(r29)
/* 80416360 004132A0  EC 61 00 28 */	fsubs f3, f1, f0
/* 80416364 004132A4  C0 3C 00 08 */	lfs f1, 8(r28)
/* 80416368 004132A8  EC 04 01 32 */	fmuls f0, f4, f4
/* 8041636C 004132AC  EC 22 08 28 */	fsubs f1, f2, f1
/* 80416370 004132B0  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80416374 004132B4  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 80416378 004132B8  4B FF B4 8D */	bl pikmin2_sqrtf__Ff
/* 8041637C 004132BC  C0 1C 00 0C */	lfs f0, 0xc(r28)
/* 80416380 004132C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416384 004132C4  4C 40 13 82 */	cror 2, 0, 2
/* 80416388 004132C8  40 82 00 2C */	bne .L_804163B4
/* 8041638C 004132CC  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80416390 004132D0  38 60 00 01 */	li r3, 1
/* 80416394 004132D4  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80416398 004132D8  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 8041639C 004132DC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 804163A0 004132E0  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 804163A4 004132E4  D0 1F 00 04 */	stfs f0, 4(r31)
/* 804163A8 004132E8  C0 1D 00 14 */	lfs f0, 0x14(r29)
/* 804163AC 004132EC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 804163B0 004132F0  48 00 01 2C */	b .L_804164DC
.L_804163B4:
/* 804163B4 004132F4  C0 5D 00 10 */	lfs f2, 0x10(r29)
/* 804163B8 004132F8  C0 1D 00 04 */	lfs f0, 4(r29)
/* 804163BC 004132FC  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 804163C0 00413300  EF A2 00 28 */	fsubs f29, f2, f0
/* 804163C4 00413304  C0 1D 00 00 */	lfs f0, 0(r29)
/* 804163C8 00413308  C0 5D 00 14 */	lfs f2, 0x14(r29)
/* 804163CC 0041330C  EF C1 00 28 */	fsubs f30, f1, f0
/* 804163D0 00413310  C0 3D 00 08 */	lfs f1, 8(r29)
/* 804163D4 00413314  EC 1D 07 72 */	fmuls f0, f29, f29
/* 804163D8 00413318  EF 82 08 28 */	fsubs f28, f2, f1
/* 804163DC 0041331C  EC 1E 07 BA */	fmadds f0, f30, f30, f0
/* 804163E0 00413320  EC 3C 07 3A */	fmadds f1, f28, f28, f0
/* 804163E4 00413324  4B FF B4 21 */	bl pikmin2_sqrtf__Ff
/* 804163E8 00413328  C3 E2 1F A8 */	lfs f31, lbl_80520308@sda21(r2)
/* 804163EC 0041332C  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 804163F0 00413330  40 81 00 1C */	ble .L_8041640C
/* 804163F4 00413334  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 804163F8 00413338  FF E0 08 90 */	fmr f31, f1
/* 804163FC 0041333C  EC 00 08 24 */	fdivs f0, f0, f1
/* 80416400 00413340  EF DE 00 32 */	fmuls f30, f30, f0
/* 80416404 00413344  EF BD 00 32 */	fmuls f29, f29, f0
/* 80416408 00413348  EF 9C 00 32 */	fmuls f28, f28, f0
.L_8041640C:
/* 8041640C 0041334C  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80416410 00413350  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80416414 00413354  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80416418 00413358  EC 82 00 28 */	fsubs f4, f2, f0
/* 8041641C 0041335C  C0 1D 00 00 */	lfs f0, 0(r29)
/* 80416420 00413360  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80416424 00413364  EC 61 00 28 */	fsubs f3, f1, f0
/* 80416428 00413368  C0 1D 00 08 */	lfs f0, 8(r29)
/* 8041642C 0041336C  EC 24 07 72 */	fmuls f1, f4, f29
/* 80416430 00413370  EC A2 00 28 */	fsubs f5, f2, f0
/* 80416434 00413374  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416438 00413378  EC 23 0F BA */	fmadds f1, f3, f30, f1
/* 8041643C 0041337C  EC 25 0F 3A */	fmadds f1, f5, f28, f1
/* 80416440 00413380  D0 3E 00 00 */	stfs f1, 0(r30)
/* 80416444 00413384  C0 5E 00 00 */	lfs f2, 0(r30)
/* 80416448 00413388  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8041644C 0041338C  41 80 00 0C */	blt .L_80416458
/* 80416450 00413390  FC 02 F8 40 */	fcmpo cr0, f2, f31
/* 80416454 00413394  40 81 00 0C */	ble .L_80416460
.L_80416458:
/* 80416458 00413398  38 60 00 00 */	li r3, 0
/* 8041645C 0041339C  48 00 00 80 */	b .L_804164DC
.L_80416460:
/* 80416460 004133A0  EC 3D 00 B2 */	fmuls f1, f29, f2
/* 80416464 004133A4  EC 1E 00 B2 */	fmuls f0, f30, f2
/* 80416468 004133A8  EC 5C 00 B2 */	fmuls f2, f28, f2
/* 8041646C 004133AC  EC 84 08 28 */	fsubs f4, f4, f1
/* 80416470 004133B0  EC 23 00 28 */	fsubs f1, f3, f0
/* 80416474 004133B4  EC 45 10 28 */	fsubs f2, f5, f2
/* 80416478 004133B8  EC 04 01 32 */	fmuls f0, f4, f4
/* 8041647C 004133BC  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80416480 004133C0  EC 22 00 BA */	fmadds f1, f2, f2, f0
/* 80416484 004133C4  4B FF B3 81 */	bl pikmin2_sqrtf__Ff
/* 80416488 004133C8  C0 1C 00 0C */	lfs f0, 0xc(r28)
/* 8041648C 004133CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416490 004133D0  4C 40 13 82 */	cror 2, 0, 2
/* 80416494 004133D4  40 82 00 44 */	bne .L_804164D8
/* 80416498 004133D8  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8041649C 004133DC  38 60 00 01 */	li r3, 1
/* 804164A0 004133E0  C0 3D 00 00 */	lfs f1, 0(r29)
/* 804164A4 004133E4  EC 80 07 F2 */	fmuls f4, f0, f31
/* 804164A8 004133E8  C0 7D 00 04 */	lfs f3, 4(r29)
/* 804164AC 004133EC  C0 BD 00 08 */	lfs f5, 8(r29)
/* 804164B0 004133F0  EC 1E 01 32 */	fmuls f0, f30, f4
/* 804164B4 004133F4  EC 5D 01 32 */	fmuls f2, f29, f4
/* 804164B8 004133F8  EC 9C 01 32 */	fmuls f4, f28, f4
/* 804164BC 004133FC  EC 01 00 2A */	fadds f0, f1, f0
/* 804164C0 00413400  EC 23 10 2A */	fadds f1, f3, f2
/* 804164C4 00413404  EC 45 20 2A */	fadds f2, f5, f4
/* 804164C8 00413408  D0 1F 00 00 */	stfs f0, 0(r31)
/* 804164CC 0041340C  D0 3F 00 04 */	stfs f1, 4(r31)
/* 804164D0 00413410  D0 5F 00 08 */	stfs f2, 8(r31)
/* 804164D4 00413414  48 00 00 08 */	b .L_804164DC
.L_804164D8:
/* 804164D8 00413418  38 60 00 00 */	li r3, 0
.L_804164DC:
/* 804164DC 0041341C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 804164E0 00413420  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 804164E4 00413424  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 804164E8 00413428  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 804164EC 0041342C  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 804164F0 00413430  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 804164F4 00413434  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 804164F8 00413438  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 804164FC 0041343C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80416500 00413440  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80416504 00413444  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80416508 00413448  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8041650C 0041344C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80416510 00413450  7C 08 03 A6 */	mtlr r0
/* 80416514 00413454  38 21 00 60 */	addi r1, r1, 0x60
/* 80416518 00413458  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>

.fn intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>Rf, global
/* 8041651C 0041345C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80416520 00413460  7C 08 02 A6 */	mflr r0
/* 80416524 00413464  90 01 00 54 */	stw r0, 0x54(r1)
/* 80416528 00413468  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8041652C 0041346C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80416530 00413470  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80416534 00413474  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80416538 00413478  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8041653C 0041347C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 80416540 00413480  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80416544 00413484  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 80416548 00413488  7C 9C 23 78 */	mr r28, r4
/* 8041654C 0041348C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80416550 00413490  7C 7B 1B 78 */	mr r27, r3
/* 80416554 00413494  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 80416558 00413498  7C BD 2B 78 */	mr r29, r5
/* 8041655C 0041349C  EF C2 00 28 */	fsubs f30, f2, f0
/* 80416560 004134A0  C0 04 00 00 */	lfs f0, 0(r4)
/* 80416564 004134A4  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 80416568 004134A8  7C DE 33 78 */	mr r30, r6
/* 8041656C 004134AC  EF E1 00 28 */	fsubs f31, f1, f0
/* 80416570 004134B0  C0 24 00 08 */	lfs f1, 8(r4)
/* 80416574 004134B4  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80416578 004134B8  7C FF 3B 78 */	mr r31, r7
/* 8041657C 004134BC  EF A2 08 28 */	fsubs f29, f2, f1
/* 80416580 004134C0  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 80416584 004134C4  EC 3D 07 7A */	fmadds f1, f29, f29, f0
/* 80416588 004134C8  4B FF B2 7D */	bl pikmin2_sqrtf__Ff
/* 8041658C 004134CC  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416590 004134D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416594 004134D4  40 81 00 1C */	ble .L_804165B0
/* 80416598 004134D8  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 8041659C 004134DC  EC 00 08 24 */	fdivs f0, f0, f1
/* 804165A0 004134E0  EF FF 00 32 */	fmuls f31, f31, f0
/* 804165A4 004134E4  EF DE 00 32 */	fmuls f30, f30, f0
/* 804165A8 004134E8  EF BD 00 32 */	fmuls f29, f29, f0
/* 804165AC 004134EC  48 00 00 08 */	b .L_804165B4
.L_804165B0:
/* 804165B0 004134F0  FC 20 00 90 */	fmr f1, f0
.L_804165B4:
/* 804165B4 004134F4  C0 7B 00 04 */	lfs f3, 4(r27)
/* 804165B8 004134F8  C0 1C 00 04 */	lfs f0, 4(r28)
/* 804165BC 004134FC  C0 5B 00 00 */	lfs f2, 0(r27)
/* 804165C0 00413500  EC A3 00 28 */	fsubs f5, f3, f0
/* 804165C4 00413504  C0 1C 00 00 */	lfs f0, 0(r28)
/* 804165C8 00413508  C0 7B 00 08 */	lfs f3, 8(r27)
/* 804165CC 0041350C  EC 82 00 28 */	fsubs f4, f2, f0
/* 804165D0 00413510  C0 1C 00 08 */	lfs f0, 8(r28)
/* 804165D4 00413514  EC 45 07 B2 */	fmuls f2, f5, f30
/* 804165D8 00413518  EC 63 00 28 */	fsubs f3, f3, f0
/* 804165DC 0041351C  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804165E0 00413520  EC 44 17 FA */	fmadds f2, f4, f31, f2
/* 804165E4 00413524  EC 43 17 7A */	fmadds f2, f3, f29, f2
/* 804165E8 00413528  D0 5D 00 00 */	stfs f2, 0(r29)
/* 804165EC 0041352C  C0 5D 00 00 */	lfs f2, 0(r29)
/* 804165F0 00413530  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 804165F4 00413534  41 80 00 0C */	blt .L_80416600
/* 804165F8 00413538  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 804165FC 0041353C  40 81 02 24 */	ble .L_80416820
.L_80416600:
/* 80416600 00413540  C0 5C 00 04 */	lfs f2, 4(r28)
/* 80416604 00413544  C0 1B 00 04 */	lfs f0, 4(r27)
/* 80416608 00413548  C0 3C 00 00 */	lfs f1, 0(r28)
/* 8041660C 0041354C  EC 82 00 28 */	fsubs f4, f2, f0
/* 80416610 00413550  C0 1B 00 00 */	lfs f0, 0(r27)
/* 80416614 00413554  C0 5C 00 08 */	lfs f2, 8(r28)
/* 80416618 00413558  EC 61 00 28 */	fsubs f3, f1, f0
/* 8041661C 0041355C  C0 3B 00 08 */	lfs f1, 8(r27)
/* 80416620 00413560  EC 04 01 32 */	fmuls f0, f4, f4
/* 80416624 00413564  EC 22 08 28 */	fsubs f1, f2, f1
/* 80416628 00413568  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 8041662C 0041356C  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 80416630 00413570  4B FF B1 D5 */	bl pikmin2_sqrtf__Ff
/* 80416634 00413574  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 80416638 00413578  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041663C 0041357C  4C 40 13 82 */	cror 2, 0, 2
/* 80416640 00413580  40 82 00 CC */	bne .L_8041670C
/* 80416644 00413584  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416648 00413588  D0 1D 00 00 */	stfs f0, 0(r29)
/* 8041664C 0041358C  C0 3B 00 00 */	lfs f1, 0(r27)
/* 80416650 00413590  C0 1C 00 00 */	lfs f0, 0(r28)
/* 80416654 00413594  C0 7B 00 04 */	lfs f3, 4(r27)
/* 80416658 00413598  C0 5C 00 04 */	lfs f2, 4(r28)
/* 8041665C 0041359C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80416660 004135A0  C0 9B 00 08 */	lfs f4, 8(r27)
/* 80416664 004135A4  C0 3C 00 08 */	lfs f1, 8(r28)
/* 80416668 004135A8  EC 43 10 28 */	fsubs f2, f3, f2
/* 8041666C 004135AC  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80416670 004135B0  EC 04 08 28 */	fsubs f0, f4, f1
/* 80416674 004135B4  D0 5E 00 04 */	stfs f2, 4(r30)
/* 80416678 004135B8  D0 1E 00 08 */	stfs f0, 8(r30)
/* 8041667C 004135BC  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80416680 004135C0  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80416684 004135C4  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80416688 004135C8  EC 21 00 72 */	fmuls f1, f1, f1
/* 8041668C 004135CC  EC 00 00 32 */	fmuls f0, f0, f0
/* 80416690 004135D0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80416694 004135D4  EC 01 00 2A */	fadds f0, f1, f0
/* 80416698 004135D8  EC 22 00 2A */	fadds f1, f2, f0
/* 8041669C 004135DC  4B FF B1 69 */	bl pikmin2_sqrtf__Ff
/* 804166A0 004135E0  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804166A4 004135E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804166A8 004135E8  40 81 00 34 */	ble .L_804166DC
/* 804166AC 004135EC  C0 42 1F AC */	lfs f2, lbl_8052030C@sda21(r2)
/* 804166B0 004135F0  C0 1E 00 00 */	lfs f0, 0(r30)
/* 804166B4 004135F4  EC 42 08 24 */	fdivs f2, f2, f1
/* 804166B8 004135F8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804166BC 004135FC  D0 1E 00 00 */	stfs f0, 0(r30)
/* 804166C0 00413600  C0 1E 00 04 */	lfs f0, 4(r30)
/* 804166C4 00413604  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804166C8 00413608  D0 1E 00 04 */	stfs f0, 4(r30)
/* 804166CC 0041360C  C0 1E 00 08 */	lfs f0, 8(r30)
/* 804166D0 00413610  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804166D4 00413614  D0 1E 00 08 */	stfs f0, 8(r30)
/* 804166D8 00413618  48 00 00 08 */	b .L_804166E0
.L_804166DC:
/* 804166DC 0041361C  FC 20 00 90 */	fmr f1, f0
.L_804166E0:
/* 804166E0 00413620  C0 5B 00 0C */	lfs f2, 0xc(r27)
/* 804166E4 00413624  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804166E8 00413628  EC 42 08 28 */	fsubs f2, f2, f1
/* 804166EC 0041362C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 804166F0 00413630  D0 5F 00 00 */	stfs f2, 0(r31)
/* 804166F4 00413634  40 82 00 10 */	bne .L_80416704
/* 804166F8 00413638  D0 1E 00 00 */	stfs f0, 0(r30)
/* 804166FC 0041363C  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80416700 00413640  D0 1E 00 08 */	stfs f0, 8(r30)
.L_80416704:
/* 80416704 00413644  38 60 00 01 */	li r3, 1
/* 80416708 00413648  48 00 01 BC */	b .L_804168C4
.L_8041670C:
/* 8041670C 0041364C  C0 5C 00 10 */	lfs f2, 0x10(r28)
/* 80416710 00413650  C0 1B 00 04 */	lfs f0, 4(r27)
/* 80416714 00413654  C0 3C 00 0C */	lfs f1, 0xc(r28)
/* 80416718 00413658  EC 82 00 28 */	fsubs f4, f2, f0
/* 8041671C 0041365C  C0 1B 00 00 */	lfs f0, 0(r27)
/* 80416720 00413660  C0 5C 00 14 */	lfs f2, 0x14(r28)
/* 80416724 00413664  EC 61 00 28 */	fsubs f3, f1, f0
/* 80416728 00413668  C0 3B 00 08 */	lfs f1, 8(r27)
/* 8041672C 0041366C  EC 04 01 32 */	fmuls f0, f4, f4
/* 80416730 00413670  EC 22 08 28 */	fsubs f1, f2, f1
/* 80416734 00413674  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80416738 00413678  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8041673C 0041367C  4B FF B0 C9 */	bl pikmin2_sqrtf__Ff
/* 80416740 00413680  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 80416744 00413684  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416748 00413688  4C 40 13 82 */	cror 2, 0, 2
/* 8041674C 0041368C  40 82 00 CC */	bne .L_80416818
/* 80416750 00413690  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80416754 00413694  D0 1D 00 00 */	stfs f0, 0(r29)
/* 80416758 00413698  C0 3B 00 00 */	lfs f1, 0(r27)
/* 8041675C 0041369C  C0 1C 00 0C */	lfs f0, 0xc(r28)
/* 80416760 004136A0  C0 7B 00 04 */	lfs f3, 4(r27)
/* 80416764 004136A4  C0 5C 00 10 */	lfs f2, 0x10(r28)
/* 80416768 004136A8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8041676C 004136AC  C0 9B 00 08 */	lfs f4, 8(r27)
/* 80416770 004136B0  C0 3C 00 14 */	lfs f1, 0x14(r28)
/* 80416774 004136B4  EC 43 10 28 */	fsubs f2, f3, f2
/* 80416778 004136B8  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8041677C 004136BC  EC 04 08 28 */	fsubs f0, f4, f1
/* 80416780 004136C0  D0 5E 00 04 */	stfs f2, 4(r30)
/* 80416784 004136C4  D0 1E 00 08 */	stfs f0, 8(r30)
/* 80416788 004136C8  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8041678C 004136CC  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80416790 004136D0  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80416794 004136D4  EC 21 00 72 */	fmuls f1, f1, f1
/* 80416798 004136D8  EC 00 00 32 */	fmuls f0, f0, f0
/* 8041679C 004136DC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 804167A0 004136E0  EC 01 00 2A */	fadds f0, f1, f0
/* 804167A4 004136E4  EC 22 00 2A */	fadds f1, f2, f0
/* 804167A8 004136E8  4B FF B0 5D */	bl pikmin2_sqrtf__Ff
/* 804167AC 004136EC  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804167B0 004136F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804167B4 004136F4  40 81 00 34 */	ble .L_804167E8
/* 804167B8 004136F8  C0 42 1F AC */	lfs f2, lbl_8052030C@sda21(r2)
/* 804167BC 004136FC  C0 1E 00 00 */	lfs f0, 0(r30)
/* 804167C0 00413700  EC 42 08 24 */	fdivs f2, f2, f1
/* 804167C4 00413704  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804167C8 00413708  D0 1E 00 00 */	stfs f0, 0(r30)
/* 804167CC 0041370C  C0 1E 00 04 */	lfs f0, 4(r30)
/* 804167D0 00413710  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804167D4 00413714  D0 1E 00 04 */	stfs f0, 4(r30)
/* 804167D8 00413718  C0 1E 00 08 */	lfs f0, 8(r30)
/* 804167DC 0041371C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 804167E0 00413720  D0 1E 00 08 */	stfs f0, 8(r30)
/* 804167E4 00413724  48 00 00 08 */	b .L_804167EC
.L_804167E8:
/* 804167E8 00413728  FC 20 00 90 */	fmr f1, f0
.L_804167EC:
/* 804167EC 0041372C  C0 5B 00 0C */	lfs f2, 0xc(r27)
/* 804167F0 00413730  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804167F4 00413734  EC 42 08 28 */	fsubs f2, f2, f1
/* 804167F8 00413738  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 804167FC 0041373C  D0 5F 00 00 */	stfs f2, 0(r31)
/* 80416800 00413740  40 82 00 10 */	bne .L_80416810
/* 80416804 00413744  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80416808 00413748  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8041680C 0041374C  D0 1E 00 08 */	stfs f0, 8(r30)
.L_80416810:
/* 80416810 00413750  38 60 00 01 */	li r3, 1
/* 80416814 00413754  48 00 00 B0 */	b .L_804168C4
.L_80416818:
/* 80416818 00413758  38 60 00 00 */	li r3, 0
/* 8041681C 0041375C  48 00 00 A8 */	b .L_804168C4
.L_80416820:
/* 80416820 00413760  EC 3E 00 B2 */	fmuls f1, f30, f2
/* 80416824 00413764  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 80416828 00413768  EC 5D 00 B2 */	fmuls f2, f29, f2
/* 8041682C 0041376C  EF C5 08 28 */	fsubs f30, f5, f1
/* 80416830 00413770  EF A4 00 28 */	fsubs f29, f4, f0
/* 80416834 00413774  EF E3 10 28 */	fsubs f31, f3, f2
/* 80416838 00413778  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8041683C 0041377C  EC 1D 07 7A */	fmadds f0, f29, f29, f0
/* 80416840 00413780  EC 3F 07 FA */	fmadds f1, f31, f31, f0
/* 80416844 00413784  4B FF AF C1 */	bl pikmin2_sqrtf__Ff
/* 80416848 00413788  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 8041684C 0041378C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416850 00413790  40 81 00 1C */	ble .L_8041686C
/* 80416854 00413794  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80416858 00413798  EC 00 08 24 */	fdivs f0, f0, f1
/* 8041685C 0041379C  EF BD 00 32 */	fmuls f29, f29, f0
/* 80416860 004137A0  EF DE 00 32 */	fmuls f30, f30, f0
/* 80416864 004137A4  EF FF 00 32 */	fmuls f31, f31, f0
/* 80416868 004137A8  48 00 00 08 */	b .L_80416870
.L_8041686C:
/* 8041686C 004137AC  FC 20 00 90 */	fmr f1, f0
.L_80416870:
/* 80416870 004137B0  C0 5B 00 0C */	lfs f2, 0xc(r27)
/* 80416874 004137B4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80416878 004137B8  40 80 00 48 */	bge .L_804168C0
/* 8041687C 004137BC  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416880 004137C0  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80416884 004137C4  40 82 00 20 */	bne .L_804168A4
/* 80416888 004137C8  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8041688C 004137CC  38 60 00 01 */	li r3, 1
/* 80416890 004137D0  D0 1E 00 04 */	stfs f0, 4(r30)
/* 80416894 004137D4  D0 1E 00 08 */	stfs f0, 8(r30)
/* 80416898 004137D8  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8041689C 004137DC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 804168A0 004137E0  48 00 00 24 */	b .L_804168C4
.L_804168A4:
/* 804168A4 004137E4  EC 02 08 28 */	fsubs f0, f2, f1
/* 804168A8 004137E8  38 60 00 01 */	li r3, 1
/* 804168AC 004137EC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 804168B0 004137F0  D3 BE 00 00 */	stfs f29, 0(r30)
/* 804168B4 004137F4  D3 DE 00 04 */	stfs f30, 4(r30)
/* 804168B8 004137F8  D3 FE 00 08 */	stfs f31, 8(r30)
/* 804168BC 004137FC  48 00 00 08 */	b .L_804168C4
.L_804168C0:
/* 804168C0 00413800  38 60 00 00 */	li r3, 0
.L_804168C4:
/* 804168C4 00413804  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 804168C8 00413808  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 804168CC 0041380C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 804168D0 00413810  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 804168D4 00413814  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 804168D8 00413818  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 804168DC 0041381C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 804168E0 00413820  80 01 00 54 */	lwz r0, 0x54(r1)
/* 804168E4 00413824  7C 08 03 A6 */	mtlr r0
/* 804168E8 00413828  38 21 00 50 */	addi r1, r1, 0x50
/* 804168EC 0041382C  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>Rf

.fn __ct__Q23Sys8TriangleFv, global
/* 804168F0 00413830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804168F4 00413834  7C 08 02 A6 */	mflr r0
/* 804168F8 00413838  C0 22 1F A8 */	lfs f1, lbl_80520308@sda21(r2)
/* 804168FC 0041383C  38 A0 00 00 */	li r5, 0
/* 80416900 00413840  90 01 00 14 */	stw r0, 0x14(r1)
/* 80416904 00413844  38 C0 00 10 */	li r6, 0x10
/* 80416908 00413848  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 8041690C 0041384C  38 E0 00 03 */	li r7, 3
/* 80416910 00413850  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80416914 00413854  7C 7F 1B 78 */	mr r31, r3
/* 80416918 00413858  3C 60 80 15 */	lis r3, __ct__5PlaneFv@ha
/* 8041691C 0041385C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80416920 00413860  38 83 1C 68 */	addi r4, r3, __ct__5PlaneFv@l
/* 80416924 00413864  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80416928 00413868  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8041692C 0041386C  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80416930 00413870  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80416934 00413874  4B CA AF 09 */	bl __construct_array
/* 80416938 00413878  38 00 00 00 */	li r0, 0
/* 8041693C 0041387C  7F E3 FB 78 */	mr r3, r31
/* 80416940 00413880  98 1F 00 5C */	stb r0, 0x5c(r31)
/* 80416944 00413884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80416948 00413888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041694C 0041388C  7C 08 03 A6 */	mtlr r0
/* 80416950 00413890  38 21 00 10 */	addi r1, r1, 0x10
/* 80416954 00413894  4E 80 00 20 */	blr 
.endfn __ct__Q23Sys8TriangleFv

.fn createSphere__Q23Sys8TriangleFRQ23Sys11VertexTable, global
/* 80416958 00413898  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8041695C 0041389C  7C 08 02 A6 */	mflr r0
/* 80416960 004138A0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80416964 004138A4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80416968 004138A8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8041696C 004138AC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80416970 004138B0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80416974 004138B4  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80416978 004138B8  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8041697C 004138BC  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 80416980 004138C0  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 80416984 004138C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80416988 004138C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041698C 004138CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80416990 004138D0  93 81 00 10 */	stw r28, 0x10(r1)
/* 80416994 004138D4  7C 7C 1B 78 */	mr r28, r3
/* 80416998 004138D8  7C 9D 23 78 */	mr r29, r4
/* 8041699C 004138DC  80 63 00 04 */	lwz r3, 4(r3)
/* 804169A0 004138E0  7F 9F E3 78 */	mr r31, r28
/* 804169A4 004138E4  80 1C 00 00 */	lwz r0, 0(r28)
/* 804169A8 004138E8  3B C0 00 00 */	li r30, 0
/* 804169AC 004138EC  1C 63 00 0C */	mulli r3, r3, 0xc
/* 804169B0 004138F0  80 A4 00 24 */	lwz r5, 0x24(r4)
/* 804169B4 004138F4  80 9C 00 08 */	lwz r4, 8(r28)
/* 804169B8 004138F8  C0 82 1F B4 */	lfs f4, lbl_80520314@sda21(r2)
/* 804169BC 004138FC  7C 65 1A 14 */	add r3, r5, r3
/* 804169C0 00413900  C3 E2 1F A8 */	lfs f31, lbl_80520308@sda21(r2)
/* 804169C4 00413904  1C 00 00 0C */	mulli r0, r0, 0xc
/* 804169C8 00413908  C0 A3 00 00 */	lfs f5, 0(r3)
/* 804169CC 0041390C  C0 43 00 04 */	lfs f2, 4(r3)
/* 804169D0 00413910  C0 03 00 08 */	lfs f0, 8(r3)
/* 804169D4 00413914  7C 65 02 14 */	add r3, r5, r0
/* 804169D8 00413918  1C 04 00 0C */	mulli r0, r4, 0xc
/* 804169DC 0041391C  C0 C3 00 00 */	lfs f6, 0(r3)
/* 804169E0 00413920  C0 63 00 04 */	lfs f3, 4(r3)
/* 804169E4 00413924  C0 23 00 08 */	lfs f1, 8(r3)
/* 804169E8 00413928  EC C6 28 2A */	fadds f6, f6, f5
/* 804169EC 0041392C  7C 65 02 14 */	add r3, r5, r0
/* 804169F0 00413930  C0 A3 00 00 */	lfs f5, 0(r3)
/* 804169F4 00413934  EC 63 10 2A */	fadds f3, f3, f2
/* 804169F8 00413938  C0 43 00 04 */	lfs f2, 4(r3)
/* 804169FC 0041393C  EC 21 00 2A */	fadds f1, f1, f0
/* 80416A00 00413940  C0 03 00 08 */	lfs f0, 8(r3)
/* 80416A04 00413944  EC A6 28 2A */	fadds f5, f6, f5
/* 80416A08 00413948  EC 43 10 2A */	fadds f2, f3, f2
/* 80416A0C 0041394C  EC 01 00 2A */	fadds f0, f1, f0
/* 80416A10 00413950  EF C5 01 32 */	fmuls f30, f5, f4
/* 80416A14 00413954  EF A2 01 32 */	fmuls f29, f2, f4
/* 80416A18 00413958  EF 80 01 32 */	fmuls f28, f0, f4
.L_80416A1C:
/* 80416A1C 0041395C  80 1F 00 00 */	lwz r0, 0(r31)
/* 80416A20 00413960  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 80416A24 00413964  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80416A28 00413968  7C 63 02 14 */	add r3, r3, r0
/* 80416A2C 0041396C  C0 23 00 04 */	lfs f1, 4(r3)
/* 80416A30 00413970  C0 03 00 00 */	lfs f0, 0(r3)
/* 80416A34 00413974  EC 61 E8 28 */	fsubs f3, f1, f29
/* 80416A38 00413978  C0 23 00 08 */	lfs f1, 8(r3)
/* 80416A3C 0041397C  EC 40 F0 28 */	fsubs f2, f0, f30
/* 80416A40 00413980  EC 21 E0 28 */	fsubs f1, f1, f28
/* 80416A44 00413984  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80416A48 00413988  EC 02 00 BA */	fmadds f0, f2, f2, f0
/* 80416A4C 0041398C  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 80416A50 00413990  4B FF AD B5 */	bl pikmin2_sqrtf__Ff
/* 80416A54 00413994  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80416A58 00413998  40 81 00 08 */	ble .L_80416A60
/* 80416A5C 0041399C  FF E0 08 90 */	fmr f31, f1
.L_80416A60:
/* 80416A60 004139A0  3B DE 00 01 */	addi r30, r30, 1
/* 80416A64 004139A4  3B FF 00 04 */	addi r31, r31, 4
/* 80416A68 004139A8  2C 1E 00 03 */	cmpwi r30, 3
/* 80416A6C 004139AC  41 80 FF B0 */	blt .L_80416A1C
/* 80416A70 004139B0  D3 FC 00 58 */	stfs f31, 0x58(r28)
/* 80416A74 004139B4  D3 DC 00 4C */	stfs f30, 0x4c(r28)
/* 80416A78 004139B8  D3 BC 00 50 */	stfs f29, 0x50(r28)
/* 80416A7C 004139BC  D3 9C 00 54 */	stfs f28, 0x54(r28)
/* 80416A80 004139C0  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80416A84 004139C4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80416A88 004139C8  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80416A8C 004139CC  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80416A90 004139D0  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80416A94 004139D4  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80416A98 004139D8  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 80416A9C 004139DC  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 80416AA0 004139E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80416AA4 004139E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80416AA8 004139E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80416AAC 004139EC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80416AB0 004139F0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80416AB4 004139F4  7C 08 03 A6 */	mtlr r0
/* 80416AB8 004139F8  38 21 00 60 */	addi r1, r1, 0x60
/* 80416ABC 004139FC  4E 80 00 20 */	blr 
.endfn createSphere__Q23Sys8TriangleFRQ23Sys11VertexTable

.fn fastIntersect__Q23Sys8TriangleFRQ23Sys6Sphere, global
/* 80416AC0 00413A00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80416AC4 00413A04  7C 08 02 A6 */	mflr r0
/* 80416AC8 00413A08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80416ACC 00413A0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80416AD0 00413A10  7C 9F 23 78 */	mr r31, r4
/* 80416AD4 00413A14  93 C1 00 08 */	stw r30, 8(r1)
/* 80416AD8 00413A18  7C 7E 1B 78 */	mr r30, r3
/* 80416ADC 00413A1C  C0 24 00 04 */	lfs f1, 4(r4)
/* 80416AE0 00413A20  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80416AE4 00413A24  C0 64 00 00 */	lfs f3, 0(r4)
/* 80416AE8 00413A28  EC 81 00 28 */	fsubs f4, f1, f0
/* 80416AEC 00413A2C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80416AF0 00413A30  C0 44 00 08 */	lfs f2, 8(r4)
/* 80416AF4 00413A34  EC 63 00 28 */	fsubs f3, f3, f0
/* 80416AF8 00413A38  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80416AFC 00413A3C  EC 04 01 32 */	fmuls f0, f4, f4
/* 80416B00 00413A40  EC 22 08 28 */	fsubs f1, f2, f1
/* 80416B04 00413A44  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80416B08 00413A48  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 80416B0C 00413A4C  4B FF AC F9 */	bl pikmin2_sqrtf__Ff
/* 80416B10 00413A50  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 80416B14 00413A54  C0 1E 00 58 */	lfs f0, 0x58(r30)
/* 80416B18 00413A58  EC 02 00 2A */	fadds f0, f2, f0
/* 80416B1C 00413A5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416B20 00413A60  4C 40 13 82 */	cror 2, 0, 2
/* 80416B24 00413A64  7C 00 00 26 */	mfcr r0
/* 80416B28 00413A68  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
/* 80416B2C 00413A6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80416B30 00413A70  83 C1 00 08 */	lwz r30, 8(r1)
/* 80416B34 00413A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80416B38 00413A78  7C 08 03 A6 */	mtlr r0
/* 80416B3C 00413A7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80416B40 00413A80  4E 80 00 20 */	blr 
.endfn fastIntersect__Q23Sys8TriangleFRQ23Sys6Sphere

.fn calcDist__Q23Sys8TriangleFR5PlaneRQ23Sys11VertexTable, global
/* 80416B44 00413A84  80 03 00 00 */	lwz r0, 0(r3)
/* 80416B48 00413A88  80 C3 00 04 */	lwz r6, 4(r3)
/* 80416B4C 00413A8C  1C E0 00 0C */	mulli r7, r0, 0xc
/* 80416B50 00413A90  81 05 00 24 */	lwz r8, 0x24(r5)
/* 80416B54 00413A94  80 03 00 08 */	lwz r0, 8(r3)
/* 80416B58 00413A98  C0 C4 00 04 */	lfs f6, 4(r4)
/* 80416B5C 00413A9C  7C A8 3A 14 */	add r5, r8, r7
/* 80416B60 00413AA0  C0 E4 00 00 */	lfs f7, 0(r4)
/* 80416B64 00413AA4  1C 66 00 0C */	mulli r3, r6, 0xc
/* 80416B68 00413AA8  C0 05 00 04 */	lfs f0, 4(r5)
/* 80416B6C 00413AAC  C0 85 00 00 */	lfs f4, 0(r5)
/* 80416B70 00413AB0  EC 60 01 B2 */	fmuls f3, f0, f6
/* 80416B74 00413AB4  C0 A5 00 08 */	lfs f5, 8(r5)
/* 80416B78 00413AB8  7C 68 1A 14 */	add r3, r8, r3
/* 80416B7C 00413ABC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80416B80 00413AC0  C0 03 00 04 */	lfs f0, 4(r3)
/* 80416B84 00413AC4  C0 43 00 00 */	lfs f2, 0(r3)
/* 80416B88 00413AC8  EC 20 01 B2 */	fmuls f1, f0, f6
/* 80416B8C 00413ACC  C1 04 00 08 */	lfs f8, 8(r4)
/* 80416B90 00413AD0  7C A8 02 14 */	add r5, r8, r0
/* 80416B94 00413AD4  C0 05 00 04 */	lfs f0, 4(r5)
/* 80416B98 00413AD8  EC 84 19 FA */	fmadds f4, f4, f7, f3
/* 80416B9C 00413ADC  EC 42 09 FA */	fmadds f2, f2, f7, f1
/* 80416BA0 00413AE0  C0 63 00 08 */	lfs f3, 8(r3)
/* 80416BA4 00413AE4  EC 00 01 B2 */	fmuls f0, f0, f6
/* 80416BA8 00413AE8  C0 25 00 00 */	lfs f1, 0(r5)
/* 80416BAC 00413AEC  EC 85 22 3A */	fmadds f4, f5, f8, f4
/* 80416BB0 00413AF0  C0 A4 00 0C */	lfs f5, 0xc(r4)
/* 80416BB4 00413AF4  EC 63 12 3A */	fmadds f3, f3, f8, f2
/* 80416BB8 00413AF8  C0 45 00 08 */	lfs f2, 8(r5)
/* 80416BBC 00413AFC  EC 01 01 FA */	fmadds f0, f1, f7, f0
/* 80416BC0 00413B00  EC 84 28 28 */	fsubs f4, f4, f5
/* 80416BC4 00413B04  EC 63 28 28 */	fsubs f3, f3, f5
/* 80416BC8 00413B08  EC 02 02 3A */	fmadds f0, f2, f8, f0
/* 80416BCC 00413B0C  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80416BD0 00413B10  EC 00 28 28 */	fsubs f0, f0, f5
/* 80416BD4 00413B14  40 80 00 1C */	bge .L_80416BF0
/* 80416BD8 00413B18  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80416BDC 00413B1C  40 80 00 0C */	bge .L_80416BE8
/* 80416BE0 00413B20  FC 20 20 90 */	fmr f1, f4
/* 80416BE4 00413B24  48 00 00 20 */	b .L_80416C04
.L_80416BE8:
/* 80416BE8 00413B28  FC 20 00 90 */	fmr f1, f0
/* 80416BEC 00413B2C  48 00 00 18 */	b .L_80416C04
.L_80416BF0:
/* 80416BF0 00413B30  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80416BF4 00413B34  40 80 00 0C */	bge .L_80416C00
/* 80416BF8 00413B38  FC 20 18 90 */	fmr f1, f3
/* 80416BFC 00413B3C  48 00 00 08 */	b .L_80416C04
.L_80416C00:
/* 80416C00 00413B40  FC 20 00 90 */	fmr f1, f0
.L_80416C04:
/* 80416C04 00413B44  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80416C08 00413B48  40 80 00 18 */	bge .L_80416C20
/* 80416C0C 00413B4C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80416C10 00413B50  40 80 00 08 */	bge .L_80416C18
/* 80416C14 00413B54  48 00 00 1C */	b .L_80416C30
.L_80416C18:
/* 80416C18 00413B58  FC 00 18 90 */	fmr f0, f3
/* 80416C1C 00413B5C  48 00 00 14 */	b .L_80416C30
.L_80416C20:
/* 80416C20 00413B60  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80416C24 00413B64  40 80 00 08 */	bge .L_80416C2C
/* 80416C28 00413B68  48 00 00 08 */	b .L_80416C30
.L_80416C2C:
/* 80416C2C 00413B6C  FC 00 20 90 */	fmr f0, f4
.L_80416C30:
/* 80416C30 00413B70  EC 41 00 32 */	fmuls f2, f1, f0
/* 80416C34 00413B74  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416C38 00413B78  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80416C3C 00413B7C  4D 81 00 20 */	bgtlr 
/* 80416C40 00413B80  FC 20 00 90 */	fmr f1, f0
/* 80416C44 00413B84  4E 80 00 20 */	blr 
.endfn calcDist__Q23Sys8TriangleFR5PlaneRQ23Sys11VertexTable

.fn intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>, global
/* 80416C48 00413B88  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80416C4C 00413B8C  7C 08 02 A6 */	mflr r0
/* 80416C50 00413B90  90 01 00 64 */	stw r0, 0x64(r1)
/* 80416C54 00413B94  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80416C58 00413B98  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80416C5C 00413B9C  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80416C60 00413BA0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80416C64 00413BA4  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80416C68 00413BA8  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80416C6C 00413BAC  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 80416C70 00413BB0  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 80416C74 00413BB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80416C78 00413BB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80416C7C 00413BBC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80416C80 00413BC0  7C 9E 23 78 */	mr r30, r4
/* 80416C84 00413BC4  FF 80 08 90 */	fmr f28, f1
/* 80416C88 00413BC8  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 80416C8C 00413BCC  7C 7D 1B 78 */	mr r29, r3
/* 80416C90 00413BD0  C0 04 00 04 */	lfs f0, 4(r4)
/* 80416C94 00413BD4  7C BF 2B 78 */	mr r31, r5
/* 80416C98 00413BD8  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 80416C9C 00413BDC  EF C2 00 28 */	fsubs f30, f2, f0
/* 80416CA0 00413BE0  C0 04 00 00 */	lfs f0, 0(r4)
/* 80416CA4 00413BE4  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 80416CA8 00413BE8  EF E1 00 28 */	fsubs f31, f1, f0
/* 80416CAC 00413BEC  C0 24 00 08 */	lfs f1, 8(r4)
/* 80416CB0 00413BF0  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80416CB4 00413BF4  EF A2 08 28 */	fsubs f29, f2, f1
/* 80416CB8 00413BF8  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 80416CBC 00413BFC  EC 3D 07 7A */	fmadds f1, f29, f29, f0
/* 80416CC0 00413C00  4B FF AB 45 */	bl pikmin2_sqrtf__Ff
/* 80416CC4 00413C04  C0 7D 00 10 */	lfs f3, 0x10(r29)
/* 80416CC8 00413C08  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80416CCC 00413C0C  EC 43 07 B2 */	fmuls f2, f3, f30
/* 80416CD0 00413C10  C0 DD 00 0C */	lfs f6, 0xc(r29)
/* 80416CD4 00413C14  C0 FD 00 14 */	lfs f7, 0x14(r29)
/* 80416CD8 00413C18  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80416CDC 00413C1C  EC 06 17 FA */	fmadds f0, f6, f31, f2
/* 80416CE0 00413C20  EC 87 07 7A */	fmadds f4, f7, f29, f0
/* 80416CE4 00413C24  40 82 00 0C */	bne .L_80416CF0
/* 80416CE8 00413C28  38 60 00 00 */	li r3, 0
/* 80416CEC 00413C2C  48 00 02 54 */	b .L_80416F40
.L_80416CF0:
/* 80416CF0 00413C30  EC 5C 08 24 */	fdivs f2, f28, f1
/* 80416CF4 00413C34  C0 02 1F C0 */	lfs f0, lbl_80520320@sda21(r2)
/* 80416CF8 00413C38  FC 20 22 10 */	fabs f1, f4
/* 80416CFC 00413C3C  FC 20 08 18 */	frsp f1, f1
/* 80416D00 00413C40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80416D04 00413C44  40 80 01 30 */	bge .L_80416E34
/* 80416D08 00413C48  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80416D0C 00413C4C  C0 9E 00 00 */	lfs f4, 0(r30)
/* 80416D10 00413C50  EC 61 00 F2 */	fmuls f3, f1, f3
/* 80416D14 00413C54  C0 BE 00 08 */	lfs f5, 8(r30)
/* 80416D18 00413C58  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 80416D1C 00413C5C  EC 64 19 BA */	fmadds f3, f4, f6, f3
/* 80416D20 00413C60  EC 65 19 FA */	fmadds f3, f5, f7, f3
/* 80416D24 00413C64  EC 23 08 28 */	fsubs f1, f3, f1
/* 80416D28 00413C68  FC 20 0A 10 */	fabs f1, f1
/* 80416D2C 00413C6C  FC 20 08 18 */	frsp f1, f1
/* 80416D30 00413C70  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 80416D34 00413C74  4C 40 13 82 */	cror 2, 0, 2
/* 80416D38 00413C78  40 82 00 EC */	bne .L_80416E24
/* 80416D3C 00413C7C  C0 62 1F AC */	lfs f3, lbl_8052030C@sda21(r2)
/* 80416D40 00413C80  FC 20 10 50 */	fneg f1, f2
/* 80416D44 00413C84  38 00 00 03 */	li r0, 3
/* 80416D48 00413C88  7F A3 EB 78 */	mr r3, r29
/* 80416D4C 00413C8C  EC 43 10 2A */	fadds f2, f3, f2
/* 80416D50 00413C90  7C 09 03 A6 */	mtctr r0
.L_80416D54:
/* 80416D54 00413C94  C0 83 00 20 */	lfs f4, 0x20(r3)
/* 80416D58 00413C98  C0 A3 00 1C */	lfs f5, 0x1c(r3)
/* 80416D5C 00413C9C  EC 64 07 B2 */	fmuls f3, f4, f30
/* 80416D60 00413CA0  C0 C3 00 24 */	lfs f6, 0x24(r3)
/* 80416D64 00413CA4  EC 65 1F FA */	fmadds f3, f5, f31, f3
/* 80416D68 00413CA8  EC E6 1F 7A */	fmadds f7, f6, f29, f3
/* 80416D6C 00413CAC  FC 60 3A 10 */	fabs f3, f7
/* 80416D70 00413CB0  FC 60 18 18 */	frsp f3, f3
/* 80416D74 00413CB4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80416D78 00413CB8  40 81 00 A0 */	ble .L_80416E18
/* 80416D7C 00413CBC  C1 3E 00 04 */	lfs f9, 4(r30)
/* 80416D80 00413CC0  C1 5E 00 00 */	lfs f10, 0(r30)
/* 80416D84 00413CC4  EC 64 02 72 */	fmuls f3, f4, f9
/* 80416D88 00413CC8  C1 1E 00 08 */	lfs f8, 8(r30)
/* 80416D8C 00413CCC  C0 83 00 28 */	lfs f4, 0x28(r3)
/* 80416D90 00413CD0  EC 65 1A BA */	fmadds f3, f5, f10, f3
/* 80416D94 00413CD4  EC 66 1A 3A */	fmadds f3, f6, f8, f3
/* 80416D98 00413CD8  EC 64 18 28 */	fsubs f3, f4, f3
/* 80416D9C 00413CDC  EC 63 38 24 */	fdivs f3, f3, f7
/* 80416DA0 00413CE0  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80416DA4 00413CE4  40 81 00 74 */	ble .L_80416E18
/* 80416DA8 00413CE8  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80416DAC 00413CEC  40 80 00 6C */	bge .L_80416E18
/* 80416DB0 00413CF0  EC BF 00 F2 */	fmuls f5, f31, f3
/* 80416DB4 00413CF4  EC 9E 00 F2 */	fmuls f4, f30, f3
/* 80416DB8 00413CF8  EC 7D 00 F2 */	fmuls f3, f29, f3
/* 80416DBC 00413CFC  EC AA 28 2A */	fadds f5, f10, f5
/* 80416DC0 00413D00  EC 89 20 2A */	fadds f4, f9, f4
/* 80416DC4 00413D04  EC 68 18 2A */	fadds f3, f8, f3
/* 80416DC8 00413D08  D0 BF 00 00 */	stfs f5, 0(r31)
/* 80416DCC 00413D0C  D0 9F 00 04 */	stfs f4, 4(r31)
/* 80416DD0 00413D10  D0 7F 00 08 */	stfs f3, 8(r31)
/* 80416DD4 00413D14  C0 9F 00 04 */	lfs f4, 4(r31)
/* 80416DD8 00413D18  C0 7D 00 10 */	lfs f3, 0x10(r29)
/* 80416DDC 00413D1C  C0 BF 00 00 */	lfs f5, 0(r31)
/* 80416DE0 00413D20  EC 64 00 F2 */	fmuls f3, f4, f3
/* 80416DE4 00413D24  C0 9D 00 0C */	lfs f4, 0xc(r29)
/* 80416DE8 00413D28  C0 FF 00 08 */	lfs f7, 8(r31)
/* 80416DEC 00413D2C  C0 DD 00 14 */	lfs f6, 0x14(r29)
/* 80416DF0 00413D30  EC 85 19 3A */	fmadds f4, f5, f4, f3
/* 80416DF4 00413D34  C0 7D 00 18 */	lfs f3, 0x18(r29)
/* 80416DF8 00413D38  EC 87 21 BA */	fmadds f4, f7, f6, f4
/* 80416DFC 00413D3C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80416E00 00413D40  FC 60 1A 10 */	fabs f3, f3
/* 80416E04 00413D44  FC 60 18 18 */	frsp f3, f3
/* 80416E08 00413D48  FC 03 E0 40 */	fcmpo cr0, f3, f28
/* 80416E0C 00413D4C  40 80 00 0C */	bge .L_80416E18
/* 80416E10 00413D50  38 60 00 01 */	li r3, 1
/* 80416E14 00413D54  48 00 01 2C */	b .L_80416F40
.L_80416E18:
/* 80416E18 00413D58  38 63 00 10 */	addi r3, r3, 0x10
/* 80416E1C 00413D5C  42 00 FF 38 */	bdnz .L_80416D54
/* 80416E20 00413D60  48 00 00 0C */	b .L_80416E2C
.L_80416E24:
/* 80416E24 00413D64  38 60 00 00 */	li r3, 0
/* 80416E28 00413D68  48 00 01 18 */	b .L_80416F40
.L_80416E2C:
/* 80416E2C 00413D6C  38 60 00 00 */	li r3, 0
/* 80416E30 00413D70  48 00 01 10 */	b .L_80416F40
.L_80416E34:
/* 80416E34 00413D74  C1 1E 00 04 */	lfs f8, 4(r30)
/* 80416E38 00413D78  FC 00 10 50 */	fneg f0, f2
/* 80416E3C 00413D7C  C1 3E 00 00 */	lfs f9, 0(r30)
/* 80416E40 00413D80  EC 23 02 32 */	fmuls f1, f3, f8
/* 80416E44 00413D84  C0 BE 00 08 */	lfs f5, 8(r30)
/* 80416E48 00413D88  C0 7D 00 18 */	lfs f3, 0x18(r29)
/* 80416E4C 00413D8C  EC 26 0A 7A */	fmadds f1, f6, f9, f1
/* 80416E50 00413D90  EC 27 09 7A */	fmadds f1, f7, f5, f1
/* 80416E54 00413D94  EC 23 08 28 */	fsubs f1, f3, f1
/* 80416E58 00413D98  EC 61 20 24 */	fdivs f3, f1, f4
/* 80416E5C 00413D9C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80416E60 00413DA0  41 80 00 14 */	blt .L_80416E74
/* 80416E64 00413DA4  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80416E68 00413DA8  EC 00 10 2A */	fadds f0, f0, f2
/* 80416E6C 00413DAC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80416E70 00413DB0  40 81 00 0C */	ble .L_80416E7C
.L_80416E74:
/* 80416E74 00413DB4  38 60 00 00 */	li r3, 0
/* 80416E78 00413DB8  48 00 00 C8 */	b .L_80416F40
.L_80416E7C:
/* 80416E7C 00413DBC  EC 5F 00 F2 */	fmuls f2, f31, f3
/* 80416E80 00413DC0  EC 3E 00 F2 */	fmuls f1, f30, f3
/* 80416E84 00413DC4  EC 1D 00 F2 */	fmuls f0, f29, f3
/* 80416E88 00413DC8  EC 49 10 2A */	fadds f2, f9, f2
/* 80416E8C 00413DCC  EC 28 08 2A */	fadds f1, f8, f1
/* 80416E90 00413DD0  EC 05 00 2A */	fadds f0, f5, f0
/* 80416E94 00413DD4  D0 5F 00 00 */	stfs f2, 0(r31)
/* 80416E98 00413DD8  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80416E9C 00413DDC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80416EA0 00413DE0  C0 5F 00 04 */	lfs f2, 4(r31)
/* 80416EA4 00413DE4  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 80416EA8 00413DE8  C0 9F 00 00 */	lfs f4, 0(r31)
/* 80416EAC 00413DEC  EC 22 00 32 */	fmuls f1, f2, f0
/* 80416EB0 00413DF0  C0 7D 00 1C */	lfs f3, 0x1c(r29)
/* 80416EB4 00413DF4  C0 DF 00 08 */	lfs f6, 8(r31)
/* 80416EB8 00413DF8  C0 BD 00 24 */	lfs f5, 0x24(r29)
/* 80416EBC 00413DFC  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80416EC0 00413E00  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 80416EC4 00413E04  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 80416EC8 00413E08  EC 01 00 28 */	fsubs f0, f1, f0
/* 80416ECC 00413E0C  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80416ED0 00413E10  40 81 00 0C */	ble .L_80416EDC
/* 80416ED4 00413E14  38 60 00 00 */	li r3, 0
/* 80416ED8 00413E18  48 00 00 68 */	b .L_80416F40
.L_80416EDC:
/* 80416EDC 00413E1C  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 80416EE0 00413E20  C0 7D 00 2C */	lfs f3, 0x2c(r29)
/* 80416EE4 00413E24  EC 22 00 32 */	fmuls f1, f2, f0
/* 80416EE8 00413E28  C0 BD 00 34 */	lfs f5, 0x34(r29)
/* 80416EEC 00413E2C  C0 1D 00 38 */	lfs f0, 0x38(r29)
/* 80416EF0 00413E30  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80416EF4 00413E34  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 80416EF8 00413E38  EC 01 00 28 */	fsubs f0, f1, f0
/* 80416EFC 00413E3C  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80416F00 00413E40  40 81 00 0C */	ble .L_80416F0C
/* 80416F04 00413E44  38 60 00 00 */	li r3, 0
/* 80416F08 00413E48  48 00 00 38 */	b .L_80416F40
.L_80416F0C:
/* 80416F0C 00413E4C  C0 1D 00 40 */	lfs f0, 0x40(r29)
/* 80416F10 00413E50  C0 7D 00 3C */	lfs f3, 0x3c(r29)
/* 80416F14 00413E54  EC 22 00 32 */	fmuls f1, f2, f0
/* 80416F18 00413E58  C0 BD 00 44 */	lfs f5, 0x44(r29)
/* 80416F1C 00413E5C  C0 1D 00 48 */	lfs f0, 0x48(r29)
/* 80416F20 00413E60  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80416F24 00413E64  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 80416F28 00413E68  EC 01 00 28 */	fsubs f0, f1, f0
/* 80416F2C 00413E6C  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80416F30 00413E70  40 81 00 0C */	ble .L_80416F3C
/* 80416F34 00413E74  38 60 00 00 */	li r3, 0
/* 80416F38 00413E78  48 00 00 08 */	b .L_80416F40
.L_80416F3C:
/* 80416F3C 00413E7C  38 60 00 01 */	li r3, 1
.L_80416F40:
/* 80416F40 00413E80  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80416F44 00413E84  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80416F48 00413E88  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80416F4C 00413E8C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80416F50 00413E90  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80416F54 00413E94  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80416F58 00413E98  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 80416F5C 00413E9C  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 80416F60 00413EA0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80416F64 00413EA4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80416F68 00413EA8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80416F6C 00413EAC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80416F70 00413EB0  7C 08 03 A6 */	mtlr r0
/* 80416F74 00413EB4  38 21 00 60 */	addi r1, r1, 0x60
/* 80416F78 00413EB8  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>

.fn intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>Rf, global
/* 80416F7C 00413EBC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80416F80 00413EC0  7C 08 02 A6 */	mflr r0
/* 80416F84 00413EC4  90 01 00 64 */	stw r0, 0x64(r1)
/* 80416F88 00413EC8  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80416F8C 00413ECC  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80416F90 00413ED0  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80416F94 00413ED4  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80416F98 00413ED8  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80416F9C 00413EDC  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80416FA0 00413EE0  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 80416FA4 00413EE4  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 80416FA8 00413EE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80416FAC 00413EEC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80416FB0 00413EF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80416FB4 00413EF4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80416FB8 00413EF8  7C 9D 23 78 */	mr r29, r4
/* 80416FBC 00413EFC  FF 80 08 90 */	fmr f28, f1
/* 80416FC0 00413F00  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 80416FC4 00413F04  7C 7C 1B 78 */	mr r28, r3
/* 80416FC8 00413F08  C0 04 00 04 */	lfs f0, 4(r4)
/* 80416FCC 00413F0C  7C BE 2B 78 */	mr r30, r5
/* 80416FD0 00413F10  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 80416FD4 00413F14  EF C2 00 28 */	fsubs f30, f2, f0
/* 80416FD8 00413F18  C0 04 00 00 */	lfs f0, 0(r4)
/* 80416FDC 00413F1C  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 80416FE0 00413F20  7C DF 33 78 */	mr r31, r6
/* 80416FE4 00413F24  EF E1 00 28 */	fsubs f31, f1, f0
/* 80416FE8 00413F28  C0 24 00 08 */	lfs f1, 8(r4)
/* 80416FEC 00413F2C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80416FF0 00413F30  EF A2 08 28 */	fsubs f29, f2, f1
/* 80416FF4 00413F34  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 80416FF8 00413F38  EC 3D 07 7A */	fmadds f1, f29, f29, f0
/* 80416FFC 00413F3C  4B FF A8 09 */	bl pikmin2_sqrtf__Ff
/* 80417000 00413F40  C0 7C 00 10 */	lfs f3, 0x10(r28)
/* 80417004 00413F44  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80417008 00413F48  EC 43 07 B2 */	fmuls f2, f3, f30
/* 8041700C 00413F4C  C0 DC 00 0C */	lfs f6, 0xc(r28)
/* 80417010 00413F50  C0 FC 00 14 */	lfs f7, 0x14(r28)
/* 80417014 00413F54  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80417018 00413F58  EC 06 17 FA */	fmadds f0, f6, f31, f2
/* 8041701C 00413F5C  EC 87 07 7A */	fmadds f4, f7, f29, f0
/* 80417020 00413F60  40 82 00 0C */	bne .L_8041702C
/* 80417024 00413F64  38 60 00 00 */	li r3, 0
/* 80417028 00413F68  48 00 02 84 */	b .L_804172AC
.L_8041702C:
/* 8041702C 00413F6C  EC 5C 08 24 */	fdivs f2, f28, f1
/* 80417030 00413F70  C0 02 1F C0 */	lfs f0, lbl_80520320@sda21(r2)
/* 80417034 00413F74  FC 20 22 10 */	fabs f1, f4
/* 80417038 00413F78  FC 20 08 18 */	frsp f1, f1
/* 8041703C 00413F7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417040 00413F80  40 80 01 38 */	bge .L_80417178
/* 80417044 00413F84  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80417048 00413F88  C0 9D 00 00 */	lfs f4, 0(r29)
/* 8041704C 00413F8C  EC 61 00 F2 */	fmuls f3, f1, f3
/* 80417050 00413F90  C0 BD 00 08 */	lfs f5, 8(r29)
/* 80417054 00413F94  C0 3C 00 18 */	lfs f1, 0x18(r28)
/* 80417058 00413F98  EC 64 19 BA */	fmadds f3, f4, f6, f3
/* 8041705C 00413F9C  EC 65 19 FA */	fmadds f3, f5, f7, f3
/* 80417060 00413FA0  EC 23 08 28 */	fsubs f1, f3, f1
/* 80417064 00413FA4  FC 20 0A 10 */	fabs f1, f1
/* 80417068 00413FA8  FC 20 08 18 */	frsp f1, f1
/* 8041706C 00413FAC  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 80417070 00413FB0  4C 40 13 82 */	cror 2, 0, 2
/* 80417074 00413FB4  40 82 00 F4 */	bne .L_80417168
/* 80417078 00413FB8  C0 62 1F AC */	lfs f3, lbl_8052030C@sda21(r2)
/* 8041707C 00413FBC  FC 20 10 50 */	fneg f1, f2
/* 80417080 00413FC0  38 00 00 03 */	li r0, 3
/* 80417084 00413FC4  7F 83 E3 78 */	mr r3, r28
/* 80417088 00413FC8  EC 43 10 2A */	fadds f2, f3, f2
/* 8041708C 00413FCC  7C 09 03 A6 */	mtctr r0
.L_80417090:
/* 80417090 00413FD0  C0 83 00 20 */	lfs f4, 0x20(r3)
/* 80417094 00413FD4  C0 A3 00 1C */	lfs f5, 0x1c(r3)
/* 80417098 00413FD8  EC 64 07 B2 */	fmuls f3, f4, f30
/* 8041709C 00413FDC  C0 C3 00 24 */	lfs f6, 0x24(r3)
/* 804170A0 00413FE0  EC 65 1F FA */	fmadds f3, f5, f31, f3
/* 804170A4 00413FE4  EC E6 1F 7A */	fmadds f7, f6, f29, f3
/* 804170A8 00413FE8  FC 60 3A 10 */	fabs f3, f7
/* 804170AC 00413FEC  FC 60 18 18 */	frsp f3, f3
/* 804170B0 00413FF0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 804170B4 00413FF4  40 81 00 A8 */	ble .L_8041715C
/* 804170B8 00413FF8  C1 3D 00 04 */	lfs f9, 4(r29)
/* 804170BC 00413FFC  C1 5D 00 00 */	lfs f10, 0(r29)
/* 804170C0 00414000  EC 64 02 72 */	fmuls f3, f4, f9
/* 804170C4 00414004  C1 1D 00 08 */	lfs f8, 8(r29)
/* 804170C8 00414008  C0 83 00 28 */	lfs f4, 0x28(r3)
/* 804170CC 0041400C  EC 65 1A BA */	fmadds f3, f5, f10, f3
/* 804170D0 00414010  EC 66 1A 3A */	fmadds f3, f6, f8, f3
/* 804170D4 00414014  EC 64 18 28 */	fsubs f3, f4, f3
/* 804170D8 00414018  EC 63 38 24 */	fdivs f3, f3, f7
/* 804170DC 0041401C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 804170E0 00414020  40 81 00 7C */	ble .L_8041715C
/* 804170E4 00414024  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 804170E8 00414028  40 80 00 74 */	bge .L_8041715C
/* 804170EC 0041402C  EC BF 00 F2 */	fmuls f5, f31, f3
/* 804170F0 00414030  EC 9E 00 F2 */	fmuls f4, f30, f3
/* 804170F4 00414034  EC 7D 00 F2 */	fmuls f3, f29, f3
/* 804170F8 00414038  EC AA 28 2A */	fadds f5, f10, f5
/* 804170FC 0041403C  EC 89 20 2A */	fadds f4, f9, f4
/* 80417100 00414040  EC 68 18 2A */	fadds f3, f8, f3
/* 80417104 00414044  D0 BE 00 00 */	stfs f5, 0(r30)
/* 80417108 00414048  D0 9E 00 04 */	stfs f4, 4(r30)
/* 8041710C 0041404C  D0 7E 00 08 */	stfs f3, 8(r30)
/* 80417110 00414050  C0 9E 00 04 */	lfs f4, 4(r30)
/* 80417114 00414054  C0 7C 00 10 */	lfs f3, 0x10(r28)
/* 80417118 00414058  C0 BE 00 00 */	lfs f5, 0(r30)
/* 8041711C 0041405C  EC 64 00 F2 */	fmuls f3, f4, f3
/* 80417120 00414060  C0 9C 00 0C */	lfs f4, 0xc(r28)
/* 80417124 00414064  C0 FE 00 08 */	lfs f7, 8(r30)
/* 80417128 00414068  C0 DC 00 14 */	lfs f6, 0x14(r28)
/* 8041712C 0041406C  EC 85 19 3A */	fmadds f4, f5, f4, f3
/* 80417130 00414070  C0 7C 00 18 */	lfs f3, 0x18(r28)
/* 80417134 00414074  EC 87 21 BA */	fmadds f4, f7, f6, f4
/* 80417138 00414078  EC 84 18 28 */	fsubs f4, f4, f3
/* 8041713C 0041407C  FC 60 22 10 */	fabs f3, f4
/* 80417140 00414080  FC 60 18 18 */	frsp f3, f3
/* 80417144 00414084  FC 03 E0 40 */	fcmpo cr0, f3, f28
/* 80417148 00414088  40 80 00 14 */	bge .L_8041715C
/* 8041714C 0041408C  EC 1C 20 28 */	fsubs f0, f28, f4
/* 80417150 00414090  38 60 00 01 */	li r3, 1
/* 80417154 00414094  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80417158 00414098  48 00 01 54 */	b .L_804172AC
.L_8041715C:
/* 8041715C 0041409C  38 63 00 10 */	addi r3, r3, 0x10
/* 80417160 004140A0  42 00 FF 30 */	bdnz .L_80417090
/* 80417164 004140A4  48 00 00 0C */	b .L_80417170
.L_80417168:
/* 80417168 004140A8  38 60 00 00 */	li r3, 0
/* 8041716C 004140AC  48 00 01 40 */	b .L_804172AC
.L_80417170:
/* 80417170 004140B0  38 60 00 00 */	li r3, 0
/* 80417174 004140B4  48 00 01 38 */	b .L_804172AC
.L_80417178:
/* 80417178 004140B8  C1 1D 00 04 */	lfs f8, 4(r29)
/* 8041717C 004140BC  FC 00 10 50 */	fneg f0, f2
/* 80417180 004140C0  C1 3D 00 00 */	lfs f9, 0(r29)
/* 80417184 004140C4  EC 23 02 32 */	fmuls f1, f3, f8
/* 80417188 004140C8  C0 BD 00 08 */	lfs f5, 8(r29)
/* 8041718C 004140CC  C0 7C 00 18 */	lfs f3, 0x18(r28)
/* 80417190 004140D0  EC 26 0A 7A */	fmadds f1, f6, f9, f1
/* 80417194 004140D4  EC 27 09 7A */	fmadds f1, f7, f5, f1
/* 80417198 004140D8  EC 23 08 28 */	fsubs f1, f3, f1
/* 8041719C 004140DC  EC 61 20 24 */	fdivs f3, f1, f4
/* 804171A0 004140E0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 804171A4 004140E4  41 80 00 14 */	blt .L_804171B8
/* 804171A8 004140E8  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 804171AC 004140EC  EC 00 10 2A */	fadds f0, f0, f2
/* 804171B0 004140F0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 804171B4 004140F4  40 81 00 0C */	ble .L_804171C0
.L_804171B8:
/* 804171B8 004140F8  38 60 00 00 */	li r3, 0
/* 804171BC 004140FC  48 00 00 F0 */	b .L_804172AC
.L_804171C0:
/* 804171C0 00414100  EC 5F 00 F2 */	fmuls f2, f31, f3
/* 804171C4 00414104  EC 3E 00 F2 */	fmuls f1, f30, f3
/* 804171C8 00414108  EC 1D 00 F2 */	fmuls f0, f29, f3
/* 804171CC 0041410C  EC 49 10 2A */	fadds f2, f9, f2
/* 804171D0 00414110  EC 28 08 2A */	fadds f1, f8, f1
/* 804171D4 00414114  EC 05 00 2A */	fadds f0, f5, f0
/* 804171D8 00414118  D0 5E 00 00 */	stfs f2, 0(r30)
/* 804171DC 0041411C  D0 3E 00 04 */	stfs f1, 4(r30)
/* 804171E0 00414120  D0 1E 00 08 */	stfs f0, 8(r30)
/* 804171E4 00414124  C0 7E 00 04 */	lfs f3, 4(r30)
/* 804171E8 00414128  C0 1C 00 20 */	lfs f0, 0x20(r28)
/* 804171EC 0041412C  C0 9E 00 00 */	lfs f4, 0(r30)
/* 804171F0 00414130  EC 23 00 32 */	fmuls f1, f3, f0
/* 804171F4 00414134  C0 5C 00 1C */	lfs f2, 0x1c(r28)
/* 804171F8 00414138  C0 DE 00 08 */	lfs f6, 8(r30)
/* 804171FC 0041413C  C0 BC 00 24 */	lfs f5, 0x24(r28)
/* 80417200 00414140  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 80417204 00414144  C0 1C 00 28 */	lfs f0, 0x28(r28)
/* 80417208 00414148  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 8041720C 0041414C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417210 00414150  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80417214 00414154  40 81 00 0C */	ble .L_80417220
/* 80417218 00414158  38 60 00 00 */	li r3, 0
/* 8041721C 0041415C  48 00 00 90 */	b .L_804172AC
.L_80417220:
/* 80417220 00414160  C0 1C 00 30 */	lfs f0, 0x30(r28)
/* 80417224 00414164  C0 5C 00 2C */	lfs f2, 0x2c(r28)
/* 80417228 00414168  EC 23 00 32 */	fmuls f1, f3, f0
/* 8041722C 0041416C  C0 BC 00 34 */	lfs f5, 0x34(r28)
/* 80417230 00414170  C0 1C 00 38 */	lfs f0, 0x38(r28)
/* 80417234 00414174  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 80417238 00414178  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 8041723C 0041417C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417240 00414180  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80417244 00414184  40 81 00 0C */	ble .L_80417250
/* 80417248 00414188  38 60 00 00 */	li r3, 0
/* 8041724C 0041418C  48 00 00 60 */	b .L_804172AC
.L_80417250:
/* 80417250 00414190  C0 1C 00 40 */	lfs f0, 0x40(r28)
/* 80417254 00414194  C0 5C 00 3C */	lfs f2, 0x3c(r28)
/* 80417258 00414198  EC 23 00 32 */	fmuls f1, f3, f0
/* 8041725C 0041419C  C0 BC 00 44 */	lfs f5, 0x44(r28)
/* 80417260 004141A0  C0 1C 00 48 */	lfs f0, 0x48(r28)
/* 80417264 004141A4  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 80417268 004141A8  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 8041726C 004141AC  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417270 004141B0  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80417274 004141B4  40 81 00 0C */	ble .L_80417280
/* 80417278 004141B8  38 60 00 00 */	li r3, 0
/* 8041727C 004141BC  48 00 00 30 */	b .L_804172AC
.L_80417280:
/* 80417280 004141C0  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 80417284 004141C4  38 60 00 01 */	li r3, 1
/* 80417288 004141C8  C0 5C 00 0C */	lfs f2, 0xc(r28)
/* 8041728C 004141CC  EC 23 00 32 */	fmuls f1, f3, f0
/* 80417290 004141D0  C0 7C 00 14 */	lfs f3, 0x14(r28)
/* 80417294 004141D4  C0 1C 00 18 */	lfs f0, 0x18(r28)
/* 80417298 004141D8  EC 24 08 BA */	fmadds f1, f4, f2, f1
/* 8041729C 004141DC  EC 26 08 FA */	fmadds f1, f6, f3, f1
/* 804172A0 004141E0  EC 01 00 28 */	fsubs f0, f1, f0
/* 804172A4 004141E4  EC 1C 00 28 */	fsubs f0, f28, f0
/* 804172A8 004141E8  D0 1F 00 00 */	stfs f0, 0(r31)
.L_804172AC:
/* 804172AC 004141EC  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 804172B0 004141F0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 804172B4 004141F4  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 804172B8 004141F8  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 804172BC 004141FC  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 804172C0 00414200  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 804172C4 00414204  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 804172C8 00414208  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 804172CC 0041420C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804172D0 00414210  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804172D4 00414214  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804172D8 00414218  80 01 00 64 */	lwz r0, 0x64(r1)
/* 804172DC 0041421C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 804172E0 00414220  7C 08 03 A6 */	mtlr r0
/* 804172E4 00414224  38 21 00 60 */	addi r1, r1, 0x60
/* 804172E8 00414228  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>Rf

.fn intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6Sphere, global
/* 804172EC 0041422C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 804172F0 00414230  7C 08 02 A6 */	mflr r0
/* 804172F4 00414234  90 01 00 44 */	stw r0, 0x44(r1)
/* 804172F8 00414238  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 804172FC 0041423C  7C BF 2B 78 */	mr r31, r5
/* 80417300 00414240  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80417304 00414244  7C 9E 23 78 */	mr r30, r4
/* 80417308 00414248  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8041730C 0041424C  7C 7D 1B 78 */	mr r29, r3
/* 80417310 00414250  C0 A5 00 04 */	lfs f5, 4(r5)
/* 80417314 00414254  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80417318 00414258  C0 C5 00 00 */	lfs f6, 0(r5)
/* 8041731C 0041425C  EC 05 00 32 */	fmuls f0, f5, f0
/* 80417320 00414260  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80417324 00414264  C0 E5 00 08 */	lfs f7, 8(r5)
/* 80417328 00414268  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 8041732C 0041426C  EC 26 00 7A */	fmadds f1, f6, f1, f0
/* 80417330 00414270  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80417334 00414274  C0 85 00 0C */	lfs f4, 0xc(r5)
/* 80417338 00414278  EC 27 08 BA */	fmadds f1, f7, f2, f1
/* 8041733C 0041427C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417340 00414280  FC 00 02 10 */	fabs f0, f0
/* 80417344 00414284  FC 00 00 18 */	frsp f0, f0
/* 80417348 00414288  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 8041734C 0041428C  40 81 00 0C */	ble .L_80417358
/* 80417350 00414290  38 60 00 00 */	li r3, 0
/* 80417354 00414294  48 00 02 28 */	b .L_8041757C
.L_80417358:
/* 80417358 00414298  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 8041735C 0041429C  C0 5D 00 1C */	lfs f2, 0x1c(r29)
/* 80417360 004142A0  EC 25 00 32 */	fmuls f1, f5, f0
/* 80417364 004142A4  C0 7D 00 24 */	lfs f3, 0x24(r29)
/* 80417368 004142A8  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 8041736C 004142AC  EC 26 08 BA */	fmadds f1, f6, f2, f1
/* 80417370 004142B0  EC 27 08 FA */	fmadds f1, f7, f3, f1
/* 80417374 004142B4  ED 01 00 28 */	fsubs f8, f1, f0
/* 80417378 004142B8  FC 08 20 40 */	fcmpo cr0, f8, f4
/* 8041737C 004142BC  40 81 00 0C */	ble .L_80417388
/* 80417380 004142C0  38 60 00 00 */	li r3, 0
/* 80417384 004142C4  48 00 01 F8 */	b .L_8041757C
.L_80417388:
/* 80417388 004142C8  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 8041738C 004142CC  C0 5D 00 2C */	lfs f2, 0x2c(r29)
/* 80417390 004142D0  EC 25 00 32 */	fmuls f1, f5, f0
/* 80417394 004142D4  C0 7D 00 34 */	lfs f3, 0x34(r29)
/* 80417398 004142D8  C0 1D 00 38 */	lfs f0, 0x38(r29)
/* 8041739C 004142DC  D1 01 00 0C */	stfs f8, 0xc(r1)
/* 804173A0 004142E0  EC 26 08 BA */	fmadds f1, f6, f2, f1
/* 804173A4 004142E4  EC 27 08 FA */	fmadds f1, f7, f3, f1
/* 804173A8 004142E8  ED 01 00 28 */	fsubs f8, f1, f0
/* 804173AC 004142EC  FC 08 20 40 */	fcmpo cr0, f8, f4
/* 804173B0 004142F0  40 81 00 0C */	ble .L_804173BC
/* 804173B4 004142F4  38 60 00 00 */	li r3, 0
/* 804173B8 004142F8  48 00 01 C4 */	b .L_8041757C
.L_804173BC:
/* 804173BC 004142FC  C0 1D 00 40 */	lfs f0, 0x40(r29)
/* 804173C0 00414300  C0 5D 00 3C */	lfs f2, 0x3c(r29)
/* 804173C4 00414304  EC 25 00 32 */	fmuls f1, f5, f0
/* 804173C8 00414308  C0 7D 00 44 */	lfs f3, 0x44(r29)
/* 804173CC 0041430C  C0 1D 00 48 */	lfs f0, 0x48(r29)
/* 804173D0 00414310  D1 01 00 10 */	stfs f8, 0x10(r1)
/* 804173D4 00414314  EC 26 08 BA */	fmadds f1, f6, f2, f1
/* 804173D8 00414318  EC 27 08 FA */	fmadds f1, f7, f3, f1
/* 804173DC 0041431C  ED 01 00 28 */	fsubs f8, f1, f0
/* 804173E0 00414320  FC 08 20 40 */	fcmpo cr0, f8, f4
/* 804173E4 00414324  40 81 00 0C */	ble .L_804173F0
/* 804173E8 00414328  38 60 00 00 */	li r3, 0
/* 804173EC 0041432C  48 00 01 90 */	b .L_8041757C
.L_804173F0:
/* 804173F0 00414330  80 1D 00 00 */	lwz r0, 0(r29)
/* 804173F4 00414334  7F E3 FB 78 */	mr r3, r31
/* 804173F8 00414338  80 DD 00 04 */	lwz r6, 4(r29)
/* 804173FC 0041433C  38 81 00 18 */	addi r4, r1, 0x18
/* 80417400 00414340  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417404 00414344  81 1E 00 24 */	lwz r8, 0x24(r30)
/* 80417408 00414348  D1 01 00 14 */	stfs f8, 0x14(r1)
/* 8041740C 0041434C  38 A1 00 08 */	addi r5, r1, 8
/* 80417410 00414350  7C E8 02 14 */	add r7, r8, r0
/* 80417414 00414354  C0 07 00 00 */	lfs f0, 0(r7)
/* 80417418 00414358  1C 06 00 0C */	mulli r0, r6, 0xc
/* 8041741C 0041435C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80417420 00414360  7C C8 02 14 */	add r6, r8, r0
/* 80417424 00414364  C0 07 00 04 */	lfs f0, 4(r7)
/* 80417428 00414368  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8041742C 0041436C  C0 07 00 08 */	lfs f0, 8(r7)
/* 80417430 00414370  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80417434 00414374  C0 06 00 00 */	lfs f0, 0(r6)
/* 80417438 00414378  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8041743C 0041437C  C0 06 00 04 */	lfs f0, 4(r6)
/* 80417440 00414380  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80417444 00414384  C0 06 00 08 */	lfs f0, 8(r6)
/* 80417448 00414388  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8041744C 0041438C  4B FF EC 41 */	bl intersect__Q23Sys6SphereFRQ23Sys4EdgeRf
/* 80417450 00414390  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80417454 00414394  41 82 00 0C */	beq .L_80417460
/* 80417458 00414398  38 60 00 01 */	li r3, 1
/* 8041745C 0041439C  48 00 01 20 */	b .L_8041757C
.L_80417460:
/* 80417460 004143A0  80 1D 00 04 */	lwz r0, 4(r29)
/* 80417464 004143A4  7F E3 FB 78 */	mr r3, r31
/* 80417468 004143A8  80 DD 00 08 */	lwz r6, 8(r29)
/* 8041746C 004143AC  38 81 00 18 */	addi r4, r1, 0x18
/* 80417470 004143B0  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417474 004143B4  81 1E 00 24 */	lwz r8, 0x24(r30)
/* 80417478 004143B8  38 A1 00 08 */	addi r5, r1, 8
/* 8041747C 004143BC  7C E8 02 14 */	add r7, r8, r0
/* 80417480 004143C0  C0 07 00 00 */	lfs f0, 0(r7)
/* 80417484 004143C4  1C 06 00 0C */	mulli r0, r6, 0xc
/* 80417488 004143C8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8041748C 004143CC  7C C8 02 14 */	add r6, r8, r0
/* 80417490 004143D0  C0 07 00 04 */	lfs f0, 4(r7)
/* 80417494 004143D4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80417498 004143D8  C0 07 00 08 */	lfs f0, 8(r7)
/* 8041749C 004143DC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 804174A0 004143E0  C0 06 00 00 */	lfs f0, 0(r6)
/* 804174A4 004143E4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 804174A8 004143E8  C0 06 00 04 */	lfs f0, 4(r6)
/* 804174AC 004143EC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 804174B0 004143F0  C0 06 00 08 */	lfs f0, 8(r6)
/* 804174B4 004143F4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 804174B8 004143F8  4B FF EB D5 */	bl intersect__Q23Sys6SphereFRQ23Sys4EdgeRf
/* 804174BC 004143FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804174C0 00414400  41 82 00 0C */	beq .L_804174CC
/* 804174C4 00414404  38 60 00 01 */	li r3, 1
/* 804174C8 00414408  48 00 00 B4 */	b .L_8041757C
.L_804174CC:
/* 804174CC 0041440C  80 1D 00 08 */	lwz r0, 8(r29)
/* 804174D0 00414410  7F E3 FB 78 */	mr r3, r31
/* 804174D4 00414414  80 DD 00 00 */	lwz r6, 0(r29)
/* 804174D8 00414418  38 81 00 18 */	addi r4, r1, 0x18
/* 804174DC 0041441C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 804174E0 00414420  81 1E 00 24 */	lwz r8, 0x24(r30)
/* 804174E4 00414424  38 A1 00 08 */	addi r5, r1, 8
/* 804174E8 00414428  7C E8 02 14 */	add r7, r8, r0
/* 804174EC 0041442C  C0 07 00 00 */	lfs f0, 0(r7)
/* 804174F0 00414430  1C 06 00 0C */	mulli r0, r6, 0xc
/* 804174F4 00414434  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 804174F8 00414438  7C C8 02 14 */	add r6, r8, r0
/* 804174FC 0041443C  C0 07 00 04 */	lfs f0, 4(r7)
/* 80417500 00414440  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80417504 00414444  C0 07 00 08 */	lfs f0, 8(r7)
/* 80417508 00414448  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8041750C 0041444C  C0 06 00 00 */	lfs f0, 0(r6)
/* 80417510 00414450  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80417514 00414454  C0 06 00 04 */	lfs f0, 4(r6)
/* 80417518 00414458  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8041751C 0041445C  C0 06 00 08 */	lfs f0, 8(r6)
/* 80417520 00414460  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80417524 00414464  4B FF EB 69 */	bl intersect__Q23Sys6SphereFRQ23Sys4EdgeRf
/* 80417528 00414468  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8041752C 0041446C  41 82 00 0C */	beq .L_80417538
/* 80417530 00414470  38 60 00 01 */	li r3, 1
/* 80417534 00414474  48 00 00 48 */	b .L_8041757C
.L_80417538:
/* 80417538 00414478  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 8041753C 0041447C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80417540 00414480  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417544 00414484  40 81 00 0C */	ble .L_80417550
/* 80417548 00414488  38 60 00 00 */	li r3, 0
/* 8041754C 0041448C  48 00 00 30 */	b .L_8041757C
.L_80417550:
/* 80417550 00414490  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80417554 00414494  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417558 00414498  40 81 00 0C */	ble .L_80417564
/* 8041755C 0041449C  38 60 00 00 */	li r3, 0
/* 80417560 004144A0  48 00 00 1C */	b .L_8041757C
.L_80417564:
/* 80417564 004144A4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80417568 004144A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041756C 004144AC  40 81 00 0C */	ble .L_80417578
/* 80417570 004144B0  38 60 00 00 */	li r3, 0
/* 80417574 004144B4  48 00 00 08 */	b .L_8041757C
.L_80417578:
/* 80417578 004144B8  38 60 00 01 */	li r3, 1
.L_8041757C:
/* 8041757C 004144BC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80417580 004144C0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80417584 004144C4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80417588 004144C8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8041758C 004144CC  7C 08 03 A6 */	mtlr r0
/* 80417590 004144D0  38 21 00 40 */	addi r1, r1, 0x40
/* 80417594 004144D4  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6Sphere

.fn intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>, global
/* 80417598 004144D8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8041759C 004144DC  7C 08 02 A6 */	mflr r0
/* 804175A0 004144E0  90 01 00 44 */	stw r0, 0x44(r1)
/* 804175A4 004144E4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 804175A8 004144E8  7C DF 33 78 */	mr r31, r6
/* 804175AC 004144EC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 804175B0 004144F0  7C BE 2B 78 */	mr r30, r5
/* 804175B4 004144F4  93 A1 00 34 */	stw r29, 0x34(r1)
/* 804175B8 004144F8  7C 9D 23 78 */	mr r29, r4
/* 804175BC 004144FC  93 81 00 30 */	stw r28, 0x30(r1)
/* 804175C0 00414500  7C 7C 1B 78 */	mr r28, r3
/* 804175C4 00414504  C1 05 00 04 */	lfs f8, 4(r5)
/* 804175C8 00414508  C0 83 00 10 */	lfs f4, 0x10(r3)
/* 804175CC 0041450C  C1 45 00 00 */	lfs f10, 0(r5)
/* 804175D0 00414510  EC 68 01 32 */	fmuls f3, f8, f4
/* 804175D4 00414514  C1 23 00 0C */	lfs f9, 0xc(r3)
/* 804175D8 00414518  C1 85 00 08 */	lfs f12, 8(r5)
/* 804175DC 0041451C  C1 63 00 14 */	lfs f11, 0x14(r3)
/* 804175E0 00414520  EC 4A 1A 7A */	fmadds f2, f10, f9, f3
/* 804175E4 00414524  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 804175E8 00414528  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 804175EC 0041452C  EC 4C 12 FA */	fmadds f2, f12, f11, f2
/* 804175F0 00414530  EC 22 08 28 */	fsubs f1, f2, f1
/* 804175F4 00414534  FC 20 0A 10 */	fabs f1, f1
/* 804175F8 00414538  FC 20 08 18 */	frsp f1, f1
/* 804175FC 0041453C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417600 00414540  40 81 00 0C */	ble .L_8041760C
/* 80417604 00414544  38 60 00 00 */	li r3, 0
/* 80417608 00414548  48 00 02 68 */	b .L_80417870
.L_8041760C:
/* 8041760C 0041454C  EC 29 1A BA */	fmadds f1, f9, f10, f3
/* 80417610 00414550  80 1C 00 00 */	lwz r0, 0(r28)
/* 80417614 00414554  80 9C 00 04 */	lwz r4, 4(r28)
/* 80417618 00414558  7F C3 F3 78 */	mr r3, r30
/* 8041761C 0041455C  C0 1C 00 18 */	lfs f0, 0x18(r28)
/* 80417620 00414560  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417624 00414564  EC 2B 0B 3A */	fmadds f1, f11, f12, f1
/* 80417628 00414568  80 BD 00 24 */	lwz r5, 0x24(r29)
/* 8041762C 0041456C  1C 84 00 0C */	mulli r4, r4, 0xc
/* 80417630 00414570  C0 BC 00 20 */	lfs f5, 0x20(r28)
/* 80417634 00414574  7D 05 02 14 */	add r8, r5, r0
/* 80417638 00414578  C0 DC 00 1C */	lfs f6, 0x1c(r28)
/* 8041763C 0041457C  EC 41 00 28 */	fsubs f2, f1, f0
/* 80417640 00414580  C0 FC 00 24 */	lfs f7, 0x24(r28)
/* 80417644 00414584  C0 3C 00 28 */	lfs f1, 0x28(r28)
/* 80417648 00414588  7C E5 22 14 */	add r7, r5, r4
/* 8041764C 0041458C  C0 08 00 00 */	lfs f0, 0(r8)
/* 80417650 00414590  38 81 00 18 */	addi r4, r1, 0x18
/* 80417654 00414594  EC 64 00 B2 */	fmuls f3, f4, f2
/* 80417658 00414598  38 A1 00 08 */	addi r5, r1, 8
/* 8041765C 0041459C  EC 89 00 B2 */	fmuls f4, f9, f2
/* 80417660 004145A0  EC 4B 00 B2 */	fmuls f2, f11, f2
/* 80417664 004145A4  ED 28 18 28 */	fsubs f9, f8, f3
/* 80417668 004145A8  ED 0A 20 28 */	fsubs f8, f10, f4
/* 8041766C 004145AC  ED 4C 10 28 */	fsubs f10, f12, f2
/* 80417670 004145B0  EC 89 01 72 */	fmuls f4, f9, f5
/* 80417674 004145B4  C0 BC 00 30 */	lfs f5, 0x30(r28)
/* 80417678 004145B8  EC 68 21 BA */	fmadds f3, f8, f6, f4
/* 8041767C 004145BC  C0 DC 00 2C */	lfs f6, 0x2c(r28)
/* 80417680 004145C0  EC 89 01 72 */	fmuls f4, f9, f5
/* 80417684 004145C4  C0 BC 00 40 */	lfs f5, 0x40(r28)
/* 80417688 004145C8  EC 4A 19 FA */	fmadds f2, f10, f7, f3
/* 8041768C 004145CC  C0 FC 00 34 */	lfs f7, 0x34(r28)
/* 80417690 004145D0  EC 68 21 BA */	fmadds f3, f8, f6, f4
/* 80417694 004145D4  C0 DC 00 3C */	lfs f6, 0x3c(r28)
/* 80417698 004145D8  EC 89 01 72 */	fmuls f4, f9, f5
/* 8041769C 004145DC  EC A2 08 28 */	fsubs f5, f2, f1
/* 804176A0 004145E0  EC 4A 19 FA */	fmadds f2, f10, f7, f3
/* 804176A4 004145E4  C0 3C 00 38 */	lfs f1, 0x38(r28)
/* 804176A8 004145E8  C0 FC 00 44 */	lfs f7, 0x44(r28)
/* 804176AC 004145EC  EC 68 21 BA */	fmadds f3, f8, f6, f4
/* 804176B0 004145F0  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 804176B4 004145F4  EC A2 08 28 */	fsubs f5, f2, f1
/* 804176B8 004145F8  C0 3C 00 48 */	lfs f1, 0x48(r28)
/* 804176BC 004145FC  EC 4A 19 FA */	fmadds f2, f10, f7, f3
/* 804176C0 00414600  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 804176C4 00414604  C0 08 00 04 */	lfs f0, 4(r8)
/* 804176C8 00414608  D0 A1 00 10 */	stfs f5, 0x10(r1)
/* 804176CC 0041460C  EC A2 08 28 */	fsubs f5, f2, f1
/* 804176D0 00414610  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 804176D4 00414614  C0 08 00 08 */	lfs f0, 8(r8)
/* 804176D8 00414618  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 804176DC 0041461C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 804176E0 00414620  C0 07 00 00 */	lfs f0, 0(r7)
/* 804176E4 00414624  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 804176E8 00414628  C0 07 00 04 */	lfs f0, 4(r7)
/* 804176EC 0041462C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 804176F0 00414630  C0 07 00 08 */	lfs f0, 8(r7)
/* 804176F4 00414634  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 804176F8 00414638  4B FF EB 99 */	bl "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
/* 804176FC 0041463C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80417700 00414640  41 82 00 0C */	beq .L_8041770C
/* 80417704 00414644  38 60 00 01 */	li r3, 1
/* 80417708 00414648  48 00 01 68 */	b .L_80417870
.L_8041770C:
/* 8041770C 0041464C  80 1C 00 04 */	lwz r0, 4(r28)
/* 80417710 00414650  7F C3 F3 78 */	mr r3, r30
/* 80417714 00414654  80 FC 00 08 */	lwz r7, 8(r28)
/* 80417718 00414658  7F E6 FB 78 */	mr r6, r31
/* 8041771C 0041465C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417720 00414660  81 3D 00 24 */	lwz r9, 0x24(r29)
/* 80417724 00414664  38 81 00 18 */	addi r4, r1, 0x18
/* 80417728 00414668  38 A1 00 08 */	addi r5, r1, 8
/* 8041772C 0041466C  7D 09 02 14 */	add r8, r9, r0
/* 80417730 00414670  C0 08 00 00 */	lfs f0, 0(r8)
/* 80417734 00414674  1C 07 00 0C */	mulli r0, r7, 0xc
/* 80417738 00414678  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8041773C 0041467C  7C E9 02 14 */	add r7, r9, r0
/* 80417740 00414680  C0 08 00 04 */	lfs f0, 4(r8)
/* 80417744 00414684  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80417748 00414688  C0 08 00 08 */	lfs f0, 8(r8)
/* 8041774C 0041468C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80417750 00414690  C0 07 00 00 */	lfs f0, 0(r7)
/* 80417754 00414694  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80417758 00414698  C0 07 00 04 */	lfs f0, 4(r7)
/* 8041775C 0041469C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80417760 004146A0  C0 07 00 08 */	lfs f0, 8(r7)
/* 80417764 004146A4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80417768 004146A8  4B FF EB 29 */	bl "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
/* 8041776C 004146AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80417770 004146B0  41 82 00 0C */	beq .L_8041777C
/* 80417774 004146B4  38 60 00 01 */	li r3, 1
/* 80417778 004146B8  48 00 00 F8 */	b .L_80417870
.L_8041777C:
/* 8041777C 004146BC  80 1C 00 08 */	lwz r0, 8(r28)
/* 80417780 004146C0  7F C3 F3 78 */	mr r3, r30
/* 80417784 004146C4  80 FC 00 00 */	lwz r7, 0(r28)
/* 80417788 004146C8  7F E6 FB 78 */	mr r6, r31
/* 8041778C 004146CC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417790 004146D0  81 3D 00 24 */	lwz r9, 0x24(r29)
/* 80417794 004146D4  38 81 00 18 */	addi r4, r1, 0x18
/* 80417798 004146D8  38 A1 00 08 */	addi r5, r1, 8
/* 8041779C 004146DC  7D 09 02 14 */	add r8, r9, r0
/* 804177A0 004146E0  C0 08 00 00 */	lfs f0, 0(r8)
/* 804177A4 004146E4  1C 07 00 0C */	mulli r0, r7, 0xc
/* 804177A8 004146E8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 804177AC 004146EC  7C E9 02 14 */	add r7, r9, r0
/* 804177B0 004146F0  C0 08 00 04 */	lfs f0, 4(r8)
/* 804177B4 004146F4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 804177B8 004146F8  C0 08 00 08 */	lfs f0, 8(r8)
/* 804177BC 004146FC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 804177C0 00414700  C0 07 00 00 */	lfs f0, 0(r7)
/* 804177C4 00414704  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 804177C8 00414708  C0 07 00 04 */	lfs f0, 4(r7)
/* 804177CC 0041470C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 804177D0 00414710  C0 07 00 08 */	lfs f0, 8(r7)
/* 804177D4 00414714  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 804177D8 00414718  4B FF EA B9 */	bl "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
/* 804177DC 0041471C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804177E0 00414720  41 82 00 0C */	beq .L_804177EC
/* 804177E4 00414724  38 60 00 01 */	li r3, 1
/* 804177E8 00414728  48 00 00 88 */	b .L_80417870
.L_804177EC:
/* 804177EC 0041472C  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804177F0 00414730  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 804177F4 00414734  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804177F8 00414738  40 81 00 0C */	ble .L_80417804
/* 804177FC 0041473C  38 60 00 00 */	li r3, 0
/* 80417800 00414740  48 00 00 70 */	b .L_80417870
.L_80417804:
/* 80417804 00414744  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80417808 00414748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041780C 0041474C  40 81 00 0C */	ble .L_80417818
/* 80417810 00414750  38 60 00 00 */	li r3, 0
/* 80417814 00414754  48 00 00 5C */	b .L_80417870
.L_80417818:
/* 80417818 00414758  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8041781C 0041475C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417820 00414760  40 81 00 0C */	ble .L_8041782C
/* 80417824 00414764  38 60 00 00 */	li r3, 0
/* 80417828 00414768  48 00 00 48 */	b .L_80417870
.L_8041782C:
/* 8041782C 0041476C  C0 DE 00 0C */	lfs f6, 0xc(r30)
/* 80417830 00414770  38 60 00 01 */	li r3, 1
/* 80417834 00414774  C0 1C 00 0C */	lfs f0, 0xc(r28)
/* 80417838 00414778  C0 5C 00 10 */	lfs f2, 0x10(r28)
/* 8041783C 0041477C  EC 00 01 B2 */	fmuls f0, f0, f6
/* 80417840 00414780  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80417844 00414784  C0 9C 00 14 */	lfs f4, 0x14(r28)
/* 80417848 00414788  EC 42 01 B2 */	fmuls f2, f2, f6
/* 8041784C 0041478C  C0 7E 00 04 */	lfs f3, 4(r30)
/* 80417850 00414790  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417854 00414794  C0 BE 00 08 */	lfs f5, 8(r30)
/* 80417858 00414798  EC 24 01 B2 */	fmuls f1, f4, f6
/* 8041785C 0041479C  EC 43 10 28 */	fsubs f2, f3, f2
/* 80417860 004147A0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80417864 004147A4  EC 05 08 28 */	fsubs f0, f5, f1
/* 80417868 004147A8  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8041786C 004147AC  D0 1F 00 08 */	stfs f0, 8(r31)
.L_80417870:
/* 80417870 004147B0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80417874 004147B4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80417878 004147B8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8041787C 004147BC  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80417880 004147C0  83 81 00 30 */	lwz r28, 0x30(r1)
/* 80417884 004147C4  7C 08 03 A6 */	mtlr r0
/* 80417888 004147C8  38 21 00 40 */	addi r1, r1, 0x40
/* 8041788C 004147CC  4E 80 00 20 */	blr 
.endfn intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>

.fn intersectHard__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>, global
/* 80417890 004147D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80417894 004147D4  7C 08 02 A6 */	mflr r0
/* 80417898 004147D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8041789C 004147DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 804178A0 004147E0  7C DF 33 78 */	mr r31, r6
/* 804178A4 004147E4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 804178A8 004147E8  7C BE 2B 78 */	mr r30, r5
/* 804178AC 004147EC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 804178B0 004147F0  7C 9D 23 78 */	mr r29, r4
/* 804178B4 004147F4  93 81 00 30 */	stw r28, 0x30(r1)
/* 804178B8 004147F8  7C 7C 1B 78 */	mr r28, r3
/* 804178BC 004147FC  C0 A5 00 04 */	lfs f5, 4(r5)
/* 804178C0 00414800  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 804178C4 00414804  C0 C5 00 00 */	lfs f6, 0(r5)
/* 804178C8 00414808  EC 05 00 32 */	fmuls f0, f5, f0
/* 804178CC 0041480C  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 804178D0 00414810  C0 E5 00 08 */	lfs f7, 8(r5)
/* 804178D4 00414814  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 804178D8 00414818  EC 26 00 7A */	fmadds f1, f6, f1, f0
/* 804178DC 0041481C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 804178E0 00414820  C0 85 00 0C */	lfs f4, 0xc(r5)
/* 804178E4 00414824  EC 27 08 BA */	fmadds f1, f7, f2, f1
/* 804178E8 00414828  EC 01 00 28 */	fsubs f0, f1, f0
/* 804178EC 0041482C  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 804178F0 00414830  40 81 00 0C */	ble .L_804178FC
/* 804178F4 00414834  38 60 00 00 */	li r3, 0
/* 804178F8 00414838  48 00 02 70 */	b .L_80417B68
.L_804178FC:
/* 804178FC 0041483C  C0 1C 00 20 */	lfs f0, 0x20(r28)
/* 80417900 00414840  C0 5C 00 1C */	lfs f2, 0x1c(r28)
/* 80417904 00414844  EC 25 00 32 */	fmuls f1, f5, f0
/* 80417908 00414848  C0 7C 00 24 */	lfs f3, 0x24(r28)
/* 8041790C 0041484C  C0 1C 00 28 */	lfs f0, 0x28(r28)
/* 80417910 00414850  EC 26 08 BA */	fmadds f1, f6, f2, f1
/* 80417914 00414854  EC 27 08 FA */	fmadds f1, f7, f3, f1
/* 80417918 00414858  ED 01 00 28 */	fsubs f8, f1, f0
/* 8041791C 0041485C  FC 08 20 40 */	fcmpo cr0, f8, f4
/* 80417920 00414860  40 81 00 0C */	ble .L_8041792C
/* 80417924 00414864  38 60 00 00 */	li r3, 0
/* 80417928 00414868  48 00 02 40 */	b .L_80417B68
.L_8041792C:
/* 8041792C 0041486C  C0 1C 00 30 */	lfs f0, 0x30(r28)
/* 80417930 00414870  C0 5C 00 2C */	lfs f2, 0x2c(r28)
/* 80417934 00414874  EC 25 00 32 */	fmuls f1, f5, f0
/* 80417938 00414878  C0 7C 00 34 */	lfs f3, 0x34(r28)
/* 8041793C 0041487C  C0 1C 00 38 */	lfs f0, 0x38(r28)
/* 80417940 00414880  D1 01 00 0C */	stfs f8, 0xc(r1)
/* 80417944 00414884  EC 26 08 BA */	fmadds f1, f6, f2, f1
/* 80417948 00414888  EC 27 08 FA */	fmadds f1, f7, f3, f1
/* 8041794C 0041488C  ED 01 00 28 */	fsubs f8, f1, f0
/* 80417950 00414890  FC 08 20 40 */	fcmpo cr0, f8, f4
/* 80417954 00414894  40 81 00 0C */	ble .L_80417960
/* 80417958 00414898  38 60 00 00 */	li r3, 0
/* 8041795C 0041489C  48 00 02 0C */	b .L_80417B68
.L_80417960:
/* 80417960 004148A0  C0 1C 00 40 */	lfs f0, 0x40(r28)
/* 80417964 004148A4  C0 5C 00 3C */	lfs f2, 0x3c(r28)
/* 80417968 004148A8  EC 25 00 32 */	fmuls f1, f5, f0
/* 8041796C 004148AC  C0 7C 00 44 */	lfs f3, 0x44(r28)
/* 80417970 004148B0  C0 1C 00 48 */	lfs f0, 0x48(r28)
/* 80417974 004148B4  D1 01 00 10 */	stfs f8, 0x10(r1)
/* 80417978 004148B8  EC 26 08 BA */	fmadds f1, f6, f2, f1
/* 8041797C 004148BC  EC 27 08 FA */	fmadds f1, f7, f3, f1
/* 80417980 004148C0  ED 01 00 28 */	fsubs f8, f1, f0
/* 80417984 004148C4  FC 08 20 40 */	fcmpo cr0, f8, f4
/* 80417988 004148C8  40 81 00 0C */	ble .L_80417994
/* 8041798C 004148CC  38 60 00 00 */	li r3, 0
/* 80417990 004148D0  48 00 01 D8 */	b .L_80417B68
.L_80417994:
/* 80417994 004148D4  80 1C 00 00 */	lwz r0, 0(r28)
/* 80417998 004148D8  7F C3 F3 78 */	mr r3, r30
/* 8041799C 004148DC  80 FC 00 04 */	lwz r7, 4(r28)
/* 804179A0 004148E0  38 81 00 18 */	addi r4, r1, 0x18
/* 804179A4 004148E4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 804179A8 004148E8  81 3D 00 24 */	lwz r9, 0x24(r29)
/* 804179AC 004148EC  D1 01 00 14 */	stfs f8, 0x14(r1)
/* 804179B0 004148F0  38 A1 00 08 */	addi r5, r1, 8
/* 804179B4 004148F4  7D 09 02 14 */	add r8, r9, r0
/* 804179B8 004148F8  C0 08 00 00 */	lfs f0, 0(r8)
/* 804179BC 004148FC  1C 07 00 0C */	mulli r0, r7, 0xc
/* 804179C0 00414900  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 804179C4 00414904  7C E9 02 14 */	add r7, r9, r0
/* 804179C8 00414908  C0 08 00 04 */	lfs f0, 4(r8)
/* 804179CC 0041490C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 804179D0 00414910  C0 08 00 08 */	lfs f0, 8(r8)
/* 804179D4 00414914  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 804179D8 00414918  C0 07 00 00 */	lfs f0, 0(r7)
/* 804179DC 0041491C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 804179E0 00414920  C0 07 00 04 */	lfs f0, 4(r7)
/* 804179E4 00414924  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 804179E8 00414928  C0 07 00 08 */	lfs f0, 8(r7)
/* 804179EC 0041492C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 804179F0 00414930  4B FF E8 A1 */	bl "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
/* 804179F4 00414934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804179F8 00414938  41 82 00 0C */	beq .L_80417A04
/* 804179FC 0041493C  38 60 00 01 */	li r3, 1
/* 80417A00 00414940  48 00 01 68 */	b .L_80417B68
.L_80417A04:
/* 80417A04 00414944  80 1C 00 04 */	lwz r0, 4(r28)
/* 80417A08 00414948  7F C3 F3 78 */	mr r3, r30
/* 80417A0C 0041494C  80 FC 00 08 */	lwz r7, 8(r28)
/* 80417A10 00414950  7F E6 FB 78 */	mr r6, r31
/* 80417A14 00414954  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417A18 00414958  81 3D 00 24 */	lwz r9, 0x24(r29)
/* 80417A1C 0041495C  38 81 00 18 */	addi r4, r1, 0x18
/* 80417A20 00414960  38 A1 00 08 */	addi r5, r1, 8
/* 80417A24 00414964  7D 09 02 14 */	add r8, r9, r0
/* 80417A28 00414968  C0 08 00 00 */	lfs f0, 0(r8)
/* 80417A2C 0041496C  1C 07 00 0C */	mulli r0, r7, 0xc
/* 80417A30 00414970  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80417A34 00414974  7C E9 02 14 */	add r7, r9, r0
/* 80417A38 00414978  C0 08 00 04 */	lfs f0, 4(r8)
/* 80417A3C 0041497C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80417A40 00414980  C0 08 00 08 */	lfs f0, 8(r8)
/* 80417A44 00414984  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80417A48 00414988  C0 07 00 00 */	lfs f0, 0(r7)
/* 80417A4C 0041498C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80417A50 00414990  C0 07 00 04 */	lfs f0, 4(r7)
/* 80417A54 00414994  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80417A58 00414998  C0 07 00 08 */	lfs f0, 8(r7)
/* 80417A5C 0041499C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80417A60 004149A0  4B FF E8 31 */	bl "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
/* 80417A64 004149A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80417A68 004149A8  41 82 00 0C */	beq .L_80417A74
/* 80417A6C 004149AC  38 60 00 01 */	li r3, 1
/* 80417A70 004149B0  48 00 00 F8 */	b .L_80417B68
.L_80417A74:
/* 80417A74 004149B4  80 1C 00 08 */	lwz r0, 8(r28)
/* 80417A78 004149B8  7F C3 F3 78 */	mr r3, r30
/* 80417A7C 004149BC  80 FC 00 00 */	lwz r7, 0(r28)
/* 80417A80 004149C0  7F E6 FB 78 */	mr r6, r31
/* 80417A84 004149C4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417A88 004149C8  81 3D 00 24 */	lwz r9, 0x24(r29)
/* 80417A8C 004149CC  38 81 00 18 */	addi r4, r1, 0x18
/* 80417A90 004149D0  38 A1 00 08 */	addi r5, r1, 8
/* 80417A94 004149D4  7D 09 02 14 */	add r8, r9, r0
/* 80417A98 004149D8  C0 08 00 00 */	lfs f0, 0(r8)
/* 80417A9C 004149DC  1C 07 00 0C */	mulli r0, r7, 0xc
/* 80417AA0 004149E0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80417AA4 004149E4  7C E9 02 14 */	add r7, r9, r0
/* 80417AA8 004149E8  C0 08 00 04 */	lfs f0, 4(r8)
/* 80417AAC 004149EC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80417AB0 004149F0  C0 08 00 08 */	lfs f0, 8(r8)
/* 80417AB4 004149F4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80417AB8 004149F8  C0 07 00 00 */	lfs f0, 0(r7)
/* 80417ABC 004149FC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80417AC0 00414A00  C0 07 00 04 */	lfs f0, 4(r7)
/* 80417AC4 00414A04  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80417AC8 00414A08  C0 07 00 08 */	lfs f0, 8(r7)
/* 80417ACC 00414A0C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80417AD0 00414A10  4B FF E7 C1 */	bl "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
/* 80417AD4 00414A14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80417AD8 00414A18  41 82 00 0C */	beq .L_80417AE4
/* 80417ADC 00414A1C  38 60 00 01 */	li r3, 1
/* 80417AE0 00414A20  48 00 00 88 */	b .L_80417B68
.L_80417AE4:
/* 80417AE4 00414A24  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80417AE8 00414A28  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80417AEC 00414A2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417AF0 00414A30  40 81 00 0C */	ble .L_80417AFC
/* 80417AF4 00414A34  38 60 00 00 */	li r3, 0
/* 80417AF8 00414A38  48 00 00 70 */	b .L_80417B68
.L_80417AFC:
/* 80417AFC 00414A3C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80417B00 00414A40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417B04 00414A44  40 81 00 0C */	ble .L_80417B10
/* 80417B08 00414A48  38 60 00 00 */	li r3, 0
/* 80417B0C 00414A4C  48 00 00 5C */	b .L_80417B68
.L_80417B10:
/* 80417B10 00414A50  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80417B14 00414A54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417B18 00414A58  40 81 00 0C */	ble .L_80417B24
/* 80417B1C 00414A5C  38 60 00 00 */	li r3, 0
/* 80417B20 00414A60  48 00 00 48 */	b .L_80417B68
.L_80417B24:
/* 80417B24 00414A64  C0 DE 00 0C */	lfs f6, 0xc(r30)
/* 80417B28 00414A68  38 60 00 01 */	li r3, 1
/* 80417B2C 00414A6C  C0 1C 00 0C */	lfs f0, 0xc(r28)
/* 80417B30 00414A70  C0 5C 00 10 */	lfs f2, 0x10(r28)
/* 80417B34 00414A74  EC 00 01 B2 */	fmuls f0, f0, f6
/* 80417B38 00414A78  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80417B3C 00414A7C  C0 9C 00 14 */	lfs f4, 0x14(r28)
/* 80417B40 00414A80  EC 42 01 B2 */	fmuls f2, f2, f6
/* 80417B44 00414A84  C0 7E 00 04 */	lfs f3, 4(r30)
/* 80417B48 00414A88  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417B4C 00414A8C  C0 BE 00 08 */	lfs f5, 8(r30)
/* 80417B50 00414A90  EC 24 01 B2 */	fmuls f1, f4, f6
/* 80417B54 00414A94  EC 43 10 28 */	fsubs f2, f3, f2
/* 80417B58 00414A98  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80417B5C 00414A9C  EC 05 08 28 */	fsubs f0, f5, f1
/* 80417B60 00414AA0  D0 5F 00 04 */	stfs f2, 4(r31)
/* 80417B64 00414AA4  D0 1F 00 08 */	stfs f0, 8(r31)
.L_80417B68:
/* 80417B68 00414AA8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80417B6C 00414AAC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80417B70 00414AB0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80417B74 00414AB4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80417B78 00414AB8  83 81 00 30 */	lwz r28, 0x30(r1)
/* 80417B7C 00414ABC  7C 08 03 A6 */	mtlr r0
/* 80417B80 00414AC0  38 21 00 40 */	addi r1, r1, 0x40
/* 80417B84 00414AC4  4E 80 00 20 */	blr 
.endfn intersectHard__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>

.fn insideXZ__Q23Sys8TriangleFR10Vector3<f>, global
/* 80417B88 00414AC8  C0 83 00 10 */	lfs f4, 0x10(r3)
/* 80417B8C 00414ACC  C0 E2 1F A8 */	lfs f7, lbl_80520308@sda21(r2)
/* 80417B90 00414AD0  FC 04 38 40 */	fcmpo cr0, f4, f7
/* 80417B94 00414AD4  4C 40 13 82 */	cror 2, 0, 2
/* 80417B98 00414AD8  40 82 00 0C */	bne .L_80417BA4
/* 80417B9C 00414ADC  38 60 00 00 */	li r3, 0
/* 80417BA0 00414AE0  4E 80 00 20 */	blr 
.L_80417BA4:
/* 80417BA4 00414AE4  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 80417BA8 00414AE8  C0 04 00 08 */	lfs f0, 8(r4)
/* 80417BAC 00414AEC  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 80417BB0 00414AF0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80417BB4 00414AF4  C0 24 00 00 */	lfs f1, 0(r4)
/* 80417BB8 00414AF8  C0 63 00 18 */	lfs f3, 0x18(r3)
/* 80417BBC 00414AFC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80417BC0 00414B00  EC 03 00 28 */	fsubs f0, f3, f0
/* 80417BC4 00414B04  EC 00 20 24 */	fdivs f0, f0, f4
/* 80417BC8 00414B08  D0 04 00 04 */	stfs f0, 4(r4)
/* 80417BCC 00414B0C  C0 44 00 04 */	lfs f2, 4(r4)
/* 80417BD0 00414B10  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80417BD4 00414B14  C0 84 00 00 */	lfs f4, 0(r4)
/* 80417BD8 00414B18  EC 22 00 32 */	fmuls f1, f2, f0
/* 80417BDC 00414B1C  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 80417BE0 00414B20  C0 C4 00 08 */	lfs f6, 8(r4)
/* 80417BE4 00414B24  C0 A3 00 24 */	lfs f5, 0x24(r3)
/* 80417BE8 00414B28  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80417BEC 00414B2C  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 80417BF0 00414B30  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 80417BF4 00414B34  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417BF8 00414B38  FC 00 38 40 */	fcmpo cr0, f0, f7
/* 80417BFC 00414B3C  40 81 00 0C */	ble .L_80417C08
/* 80417C00 00414B40  38 60 00 00 */	li r3, 0
/* 80417C04 00414B44  4E 80 00 20 */	blr 
.L_80417C08:
/* 80417C08 00414B48  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 80417C0C 00414B4C  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80417C10 00414B50  EC 22 00 32 */	fmuls f1, f2, f0
/* 80417C14 00414B54  C0 A3 00 34 */	lfs f5, 0x34(r3)
/* 80417C18 00414B58  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80417C1C 00414B5C  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80417C20 00414B60  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 80417C24 00414B64  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417C28 00414B68  FC 00 38 40 */	fcmpo cr0, f0, f7
/* 80417C2C 00414B6C  40 81 00 0C */	ble .L_80417C38
/* 80417C30 00414B70  38 60 00 00 */	li r3, 0
/* 80417C34 00414B74  4E 80 00 20 */	blr 
.L_80417C38:
/* 80417C38 00414B78  38 63 00 20 */	addi r3, r3, 0x20
/* 80417C3C 00414B7C  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80417C40 00414B80  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 80417C44 00414B84  EC 22 00 32 */	fmuls f1, f2, f0
/* 80417C48 00414B88  C0 A3 00 24 */	lfs f5, 0x24(r3)
/* 80417C4C 00414B8C  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 80417C50 00414B90  EC 24 08 FA */	fmadds f1, f4, f3, f1
/* 80417C54 00414B94  EC 26 09 7A */	fmadds f1, f6, f5, f1
/* 80417C58 00414B98  EC 01 00 28 */	fsubs f0, f1, f0
/* 80417C5C 00414B9C  FC 00 38 40 */	fcmpo cr0, f0, f7
/* 80417C60 00414BA0  40 81 00 0C */	ble .L_80417C6C
/* 80417C64 00414BA4  38 60 00 00 */	li r3, 0
/* 80417C68 00414BA8  4E 80 00 20 */	blr 
.L_80417C6C:
/* 80417C6C 00414BAC  38 60 00 01 */	li r3, 1
/* 80417C70 00414BB0  4E 80 00 20 */	blr 
.endfn insideXZ__Q23Sys8TriangleFR10Vector3<f>

.fn makePlanes__Q23Sys8TriangleFRQ23Sys11VertexTable, global
/* 80417C74 00414BB4  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 80417C78 00414BB8  7C 08 02 A6 */	mflr r0
/* 80417C7C 00414BBC  90 01 01 44 */	stw r0, 0x144(r1)
/* 80417C80 00414BC0  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 80417C84 00414BC4  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 80417C88 00414BC8  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 80417C8C 00414BCC  F3 C1 01 28 */	psq_st f30, 296(r1), 0, qr0
/* 80417C90 00414BD0  DB A1 01 10 */	stfd f29, 0x110(r1)
/* 80417C94 00414BD4  F3 A1 01 18 */	psq_st f29, 280(r1), 0, qr0
/* 80417C98 00414BD8  DB 81 01 00 */	stfd f28, 0x100(r1)
/* 80417C9C 00414BDC  F3 81 01 08 */	psq_st f28, 264(r1), 0, qr0
/* 80417CA0 00414BE0  DB 61 00 F0 */	stfd f27, 0xf0(r1)
/* 80417CA4 00414BE4  F3 61 00 F8 */	psq_st f27, 248(r1), 0, qr0
/* 80417CA8 00414BE8  DB 41 00 E0 */	stfd f26, 0xe0(r1)
/* 80417CAC 00414BEC  F3 41 00 E8 */	psq_st f26, 232(r1), 0, qr0
/* 80417CB0 00414BF0  DB 21 00 D0 */	stfd f25, 0xd0(r1)
/* 80417CB4 00414BF4  F3 21 00 D8 */	psq_st f25, 216(r1), 0, qr0
/* 80417CB8 00414BF8  DB 01 00 C0 */	stfd f24, 0xc0(r1)
/* 80417CBC 00414BFC  F3 01 00 C8 */	psq_st f24, 200(r1), 0, qr0
/* 80417CC0 00414C00  DA E1 00 B0 */	stfd f23, 0xb0(r1)
/* 80417CC4 00414C04  F2 E1 00 B8 */	psq_st f23, 184(r1), 0, qr0
/* 80417CC8 00414C08  DA C1 00 A0 */	stfd f22, 0xa0(r1)
/* 80417CCC 00414C0C  F2 C1 00 A8 */	psq_st f22, 168(r1), 0, qr0
/* 80417CD0 00414C10  DA A1 00 90 */	stfd f21, 0x90(r1)
/* 80417CD4 00414C14  F2 A1 00 98 */	psq_st f21, 152(r1), 0, qr0
/* 80417CD8 00414C18  DA 81 00 80 */	stfd f20, 0x80(r1)
/* 80417CDC 00414C1C  F2 81 00 88 */	psq_st f20, 136(r1), 0, qr0
/* 80417CE0 00414C20  DA 61 00 70 */	stfd f19, 0x70(r1)
/* 80417CE4 00414C24  F2 61 00 78 */	psq_st f19, 120(r1), 0, qr0
/* 80417CE8 00414C28  DA 41 00 60 */	stfd f18, 0x60(r1)
/* 80417CEC 00414C2C  F2 41 00 68 */	psq_st f18, 104(r1), 0, qr0
/* 80417CF0 00414C30  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80417CF4 00414C34  7C 7F 1B 78 */	mr r31, r3
/* 80417CF8 00414C38  80 A4 00 24 */	lwz r5, 0x24(r4)
/* 80417CFC 00414C3C  80 83 00 00 */	lwz r4, 0(r3)
/* 80417D00 00414C40  80 63 00 04 */	lwz r3, 4(r3)
/* 80417D04 00414C44  80 1F 00 08 */	lwz r0, 8(r31)
/* 80417D08 00414C48  1C 84 00 0C */	mulli r4, r4, 0xc
/* 80417D0C 00414C4C  7C 85 22 14 */	add r4, r5, r4
/* 80417D10 00414C50  1C 63 00 0C */	mulli r3, r3, 0xc
/* 80417D14 00414C54  C3 E4 00 00 */	lfs f31, 0(r4)
/* 80417D18 00414C58  C3 C4 00 04 */	lfs f30, 4(r4)
/* 80417D1C 00414C5C  C3 A4 00 08 */	lfs f29, 8(r4)
/* 80417D20 00414C60  7C 65 1A 14 */	add r3, r5, r3
/* 80417D24 00414C64  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80417D28 00414C68  C3 63 00 04 */	lfs f27, 4(r3)
/* 80417D2C 00414C6C  C3 43 00 08 */	lfs f26, 8(r3)
/* 80417D30 00414C70  C3 83 00 00 */	lfs f28, 0(r3)
/* 80417D34 00414C74  EC 9B F0 28 */	fsubs f4, f27, f30
/* 80417D38 00414C78  7C 65 02 14 */	add r3, r5, r0
/* 80417D3C 00414C7C  C3 23 00 00 */	lfs f25, 0(r3)
/* 80417D40 00414C80  EC BA E8 28 */	fsubs f5, f26, f29
/* 80417D44 00414C84  C2 E3 00 08 */	lfs f23, 8(r3)
/* 80417D48 00414C88  EC 7C F8 28 */	fsubs f3, f28, f31
/* 80417D4C 00414C8C  EE 59 F8 28 */	fsubs f18, f25, f31
/* 80417D50 00414C90  C3 03 00 04 */	lfs f24, 4(r3)
/* 80417D54 00414C94  EE 97 E8 28 */	fsubs f20, f23, f29
/* 80417D58 00414C98  EE 78 F0 28 */	fsubs f19, f24, f30
/* 80417D5C 00414C9C  EC 52 01 72 */	fmuls f2, f18, f5
/* 80417D60 00414CA0  D2 41 00 44 */	stfs f18, 0x44(r1)
/* 80417D64 00414CA4  EC 14 01 32 */	fmuls f0, f20, f4
/* 80417D68 00414CA8  EC 33 00 F2 */	fmuls f1, f19, f3
/* 80417D6C 00414CAC  D2 61 00 48 */	stfs f19, 0x48(r1)
/* 80417D70 00414CB0  EC 54 10 F8 */	fmsubs f2, f20, f3, f2
/* 80417D74 00414CB4  EC 73 01 78 */	fmsubs f3, f19, f5, f0
/* 80417D78 00414CB8  D2 81 00 4C */	stfs f20, 0x4c(r1)
/* 80417D7C 00414CBC  EC 92 09 38 */	fmsubs f4, f18, f4, f1
/* 80417D80 00414CC0  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80417D84 00414CC4  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 80417D88 00414CC8  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80417D8C 00414CCC  EC 44 01 32 */	fmuls f2, f4, f4
/* 80417D90 00414CD0  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 80417D94 00414CD4  EC 01 00 2A */	fadds f0, f1, f0
/* 80417D98 00414CD8  D0 81 00 4C */	stfs f4, 0x4c(r1)
/* 80417D9C 00414CDC  EC 22 00 2A */	fadds f1, f2, f0
/* 80417DA0 00414CE0  4B FF 9A 65 */	bl pikmin2_sqrtf__Ff
/* 80417DA4 00414CE4  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80417DA8 00414CE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417DAC 00414CEC  40 81 00 30 */	ble .L_80417DDC
/* 80417DB0 00414CF0  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80417DB4 00414CF4  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 80417DB8 00414CF8  EC 60 08 24 */	fdivs f3, f0, f1
/* 80417DBC 00414CFC  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 80417DC0 00414D00  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80417DC4 00414D04  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80417DC8 00414D08  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80417DCC 00414D0C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80417DD0 00414D10  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80417DD4 00414D14  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80417DD8 00414D18  D0 01 00 4C */	stfs f0, 0x4c(r1)
.L_80417DDC:
/* 80417DDC 00414D1C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80417DE0 00414D20  EC 7F E0 28 */	fsubs f3, f31, f28
/* 80417DE4 00414D24  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80417DE8 00414D28  EC BD D0 28 */	fsubs f5, f29, f26
/* 80417DEC 00414D2C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80417DF0 00414D30  EC DE D8 28 */	fsubs f6, f30, f27
/* 80417DF4 00414D34  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80417DF8 00414D38  90 61 00 30 */	stw r3, 0x30(r1)
/* 80417DFC 00414D3C  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80417E00 00414D40  90 01 00 34 */	stw r0, 0x34(r1)
/* 80417E04 00414D44  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80417E08 00414D48  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 80417E0C 00414D4C  C2 A1 00 4C */	lfs f21, 0x4c(r1)
/* 80417E10 00414D50  C2 C1 00 48 */	lfs f22, 0x48(r1)
/* 80417E14 00414D54  C0 E1 00 44 */	lfs f7, 0x44(r1)
/* 80417E18 00414D58  EC 03 05 72 */	fmuls f0, f3, f21
/* 80417E1C 00414D5C  EC 25 05 B2 */	fmuls f1, f5, f22
/* 80417E20 00414D60  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 80417E24 00414D64  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 80417E28 00414D68  EC 46 01 F2 */	fmuls f2, f6, f7
/* 80417E2C 00414D6C  EC 05 01 F8 */	fmsubs f0, f5, f7, f0
/* 80417E30 00414D70  D0 9F 00 14 */	stfs f4, 0x14(r31)
/* 80417E34 00414D74  EC 86 0D 78 */	fmsubs f4, f6, f21, f1
/* 80417E38 00414D78  C0 FF 00 10 */	lfs f7, 0x10(r31)
/* 80417E3C 00414D7C  ED 43 15 B8 */	fmsubs f10, f3, f22, f2
/* 80417E40 00414D80  C1 1F 00 0C */	lfs f8, 0xc(r31)
/* 80417E44 00414D84  EC 20 00 32 */	fmuls f1, f0, f0
/* 80417E48 00414D88  EC E7 07 B2 */	fmuls f7, f7, f30
/* 80417E4C 00414D8C  EC 44 01 32 */	fmuls f2, f4, f4
/* 80417E50 00414D90  C1 3F 00 14 */	lfs f9, 0x14(r31)
/* 80417E54 00414D94  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 80417E58 00414D98  EC 6A 02 B2 */	fmuls f3, f10, f10
/* 80417E5C 00414D9C  EC E8 3F FA */	fmadds f7, f8, f31, f7
/* 80417E60 00414DA0  EC 22 08 2A */	fadds f1, f2, f1
/* 80417E64 00414DA4  D0 C1 00 3C */	stfs f6, 0x3c(r1)
/* 80417E68 00414DA8  EC 49 3F 7A */	fmadds f2, f9, f29, f7
/* 80417E6C 00414DAC  D0 A1 00 40 */	stfs f5, 0x40(r1)
/* 80417E70 00414DB0  EC 23 08 2A */	fadds f1, f3, f1
/* 80417E74 00414DB4  D0 5F 00 18 */	stfs f2, 0x18(r31)
/* 80417E78 00414DB8  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 80417E7C 00414DBC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80417E80 00414DC0  D1 41 00 40 */	stfs f10, 0x40(r1)
/* 80417E84 00414DC4  4B FF 99 81 */	bl pikmin2_sqrtf__Ff
/* 80417E88 00414DC8  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80417E8C 00414DCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417E90 00414DD0  40 81 00 30 */	ble .L_80417EC0
/* 80417E94 00414DD4  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80417E98 00414DD8  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80417E9C 00414DDC  EC 60 08 24 */	fdivs f3, f0, f1
/* 80417EA0 00414DE0  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80417EA4 00414DE4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80417EA8 00414DE8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80417EAC 00414DEC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80417EB0 00414DF0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80417EB4 00414DF4  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80417EB8 00414DF8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80417EBC 00414DFC  D0 01 00 40 */	stfs f0, 0x40(r1)
.L_80417EC0:
/* 80417EC0 00414E00  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80417EC4 00414E04  EC DC C8 28 */	fsubs f6, f28, f25
/* 80417EC8 00414E08  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80417ECC 00414E0C  EC 9A B8 28 */	fsubs f4, f26, f23
/* 80417ED0 00414E10  90 01 00 20 */	stw r0, 0x20(r1)
/* 80417ED4 00414E14  EC BB C0 28 */	fsubs f5, f27, f24
/* 80417ED8 00414E18  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80417EDC 00414E1C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80417EE0 00414E20  EC 04 05 B2 */	fmuls f0, f4, f22
/* 80417EE4 00414E24  C0 E1 00 20 */	lfs f7, 0x20(r1)
/* 80417EE8 00414E28  EC 46 05 72 */	fmuls f2, f6, f21
/* 80417EEC 00414E2C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80417EF0 00414E30  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80417EF4 00414E34  EC 65 05 78 */	fmsubs f3, f5, f21, f0
/* 80417EF8 00414E38  D0 FF 00 1C */	stfs f7, 0x1c(r31)
/* 80417EFC 00414E3C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80417F00 00414E40  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 80417F04 00414E44  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80417F08 00414E48  C0 E1 00 44 */	lfs f7, 0x44(r1)
/* 80417F0C 00414E4C  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80417F10 00414E50  ED 04 11 F8 */	fmsubs f8, f4, f7, f2
/* 80417F14 00414E54  C0 5F 00 20 */	lfs f2, 0x20(r31)
/* 80417F18 00414E58  EC 05 01 F2 */	fmuls f0, f5, f7
/* 80417F1C 00414E5C  C0 FF 00 1C */	lfs f7, 0x1c(r31)
/* 80417F20 00414E60  EC 42 07 B2 */	fmuls f2, f2, f30
/* 80417F24 00414E64  D0 C1 00 38 */	stfs f6, 0x38(r1)
/* 80417F28 00414E68  ED 26 05 B8 */	fmsubs f9, f6, f22, f0
/* 80417F2C 00414E6C  C0 DF 00 24 */	lfs f6, 0x24(r31)
/* 80417F30 00414E70  EC 08 02 32 */	fmuls f0, f8, f8
/* 80417F34 00414E74  D0 A1 00 3C */	stfs f5, 0x3c(r1)
/* 80417F38 00414E78  EC A7 17 FA */	fmadds f5, f7, f31, f2
/* 80417F3C 00414E7C  D0 81 00 40 */	stfs f4, 0x40(r1)
/* 80417F40 00414E80  EC 49 02 72 */	fmuls f2, f9, f9
/* 80417F44 00414E84  EC 01 00 2A */	fadds f0, f1, f0
/* 80417F48 00414E88  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 80417F4C 00414E8C  EC 66 2F 7A */	fmadds f3, f6, f29, f5
/* 80417F50 00414E90  D1 01 00 3C */	stfs f8, 0x3c(r1)
/* 80417F54 00414E94  EC 22 00 2A */	fadds f1, f2, f0
/* 80417F58 00414E98  D0 7F 00 28 */	stfs f3, 0x28(r31)
/* 80417F5C 00414E9C  D1 21 00 40 */	stfs f9, 0x40(r1)
/* 80417F60 00414EA0  4B FF 98 A5 */	bl pikmin2_sqrtf__Ff
/* 80417F64 00414EA4  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80417F68 00414EA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80417F6C 00414EAC  40 81 00 30 */	ble .L_80417F9C
/* 80417F70 00414EB0  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80417F74 00414EB4  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80417F78 00414EB8  EC 60 08 24 */	fdivs f3, f0, f1
/* 80417F7C 00414EBC  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80417F80 00414EC0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80417F84 00414EC4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80417F88 00414EC8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80417F8C 00414ECC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80417F90 00414ED0  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80417F94 00414ED4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80417F98 00414ED8  D0 01 00 40 */	stfs f0, 0x40(r1)
.L_80417F9C:
/* 80417F9C 00414EDC  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80417FA0 00414EE0  EC 14 05 B2 */	fmuls f0, f20, f22
/* 80417FA4 00414EE4  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80417FA8 00414EE8  EC 52 05 72 */	fmuls f2, f18, f21
/* 80417FAC 00414EEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80417FB0 00414EF0  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80417FB4 00414EF4  EC 73 05 78 */	fmsubs f3, f19, f21, f0
/* 80417FB8 00414EF8  90 61 00 18 */	stw r3, 0x18(r1)
/* 80417FBC 00414EFC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80417FC0 00414F00  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80417FC4 00414F04  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80417FC8 00414F08  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 80417FCC 00414F0C  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80417FD0 00414F10  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80417FD4 00414F14  D0 9F 00 30 */	stfs f4, 0x30(r31)
/* 80417FD8 00414F18  C0 81 00 44 */	lfs f4, 0x44(r1)
/* 80417FDC 00414F1C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 80417FE0 00414F20  EC D4 11 38 */	fmsubs f6, f20, f4, f2
/* 80417FE4 00414F24  C0 5F 00 30 */	lfs f2, 0x30(r31)
/* 80417FE8 00414F28  EC 13 01 32 */	fmuls f0, f19, f4
/* 80417FEC 00414F2C  C0 9F 00 2C */	lfs f4, 0x2c(r31)
/* 80417FF0 00414F30  EC 42 06 F2 */	fmuls f2, f2, f27
/* 80417FF4 00414F34  D2 41 00 38 */	stfs f18, 0x38(r1)
/* 80417FF8 00414F38  EC F2 05 B8 */	fmsubs f7, f18, f22, f0
/* 80417FFC 00414F3C  C0 BF 00 34 */	lfs f5, 0x34(r31)
/* 80418000 00414F40  EC 06 01 B2 */	fmuls f0, f6, f6
/* 80418004 00414F44  D2 61 00 3C */	stfs f19, 0x3c(r1)
/* 80418008 00414F48  EC 84 17 3A */	fmadds f4, f4, f28, f2
/* 8041800C 00414F4C  D2 81 00 40 */	stfs f20, 0x40(r1)
/* 80418010 00414F50  EC 47 01 F2 */	fmuls f2, f7, f7
/* 80418014 00414F54  EC 01 00 2A */	fadds f0, f1, f0
/* 80418018 00414F58  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 8041801C 00414F5C  EC 65 26 BA */	fmadds f3, f5, f26, f4
/* 80418020 00414F60  D0 C1 00 3C */	stfs f6, 0x3c(r1)
/* 80418024 00414F64  EC 22 00 2A */	fadds f1, f2, f0
/* 80418028 00414F68  D0 7F 00 38 */	stfs f3, 0x38(r31)
/* 8041802C 00414F6C  D0 E1 00 40 */	stfs f7, 0x40(r1)
/* 80418030 00414F70  4B FF 97 D5 */	bl pikmin2_sqrtf__Ff
/* 80418034 00414F74  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 80418038 00414F78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8041803C 00414F7C  40 81 00 30 */	ble .L_8041806C
/* 80418040 00414F80  C0 02 1F AC */	lfs f0, lbl_8052030C@sda21(r2)
/* 80418044 00414F84  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80418048 00414F88  EC 60 08 24 */	fdivs f3, f0, f1
/* 8041804C 00414F8C  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80418050 00414F90  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80418054 00414F94  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80418058 00414F98  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8041805C 00414F9C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80418060 00414FA0  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80418064 00414FA4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80418068 00414FA8  D0 01 00 40 */	stfs f0, 0x40(r1)
.L_8041806C:
/* 8041806C 00414FAC  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80418070 00414FB0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80418074 00414FB4  90 01 00 08 */	stw r0, 8(r1)
/* 80418078 00414FB8  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8041807C 00414FBC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80418080 00414FC0  C0 01 00 08 */	lfs f0, 8(r1)
/* 80418084 00414FC4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80418088 00414FC8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8041808C 00414FCC  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80418090 00414FD0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80418094 00414FD4  D0 3F 00 40 */	stfs f1, 0x40(r31)
/* 80418098 00414FD8  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8041809C 00414FDC  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 804180A0 00414FE0  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 804180A4 00414FE4  EC 00 06 32 */	fmuls f0, f0, f24
/* 804180A8 00414FE8  C0 5F 00 44 */	lfs f2, 0x44(r31)
/* 804180AC 00414FEC  EC 01 06 7A */	fmadds f0, f1, f25, f0
/* 804180B0 00414FF0  EC 02 05 FA */	fmadds f0, f2, f23, f0
/* 804180B4 00414FF4  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 804180B8 00414FF8  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 804180BC 00414FFC  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 804180C0 00415000  E3 C1 01 28 */	psq_l f30, 296(r1), 0, qr0
/* 804180C4 00415004  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 804180C8 00415008  E3 A1 01 18 */	psq_l f29, 280(r1), 0, qr0
/* 804180CC 0041500C  CB A1 01 10 */	lfd f29, 0x110(r1)
/* 804180D0 00415010  E3 81 01 08 */	psq_l f28, 264(r1), 0, qr0
/* 804180D4 00415014  CB 81 01 00 */	lfd f28, 0x100(r1)
/* 804180D8 00415018  E3 61 00 F8 */	psq_l f27, 248(r1), 0, qr0
/* 804180DC 0041501C  CB 61 00 F0 */	lfd f27, 0xf0(r1)
/* 804180E0 00415020  E3 41 00 E8 */	psq_l f26, 232(r1), 0, qr0
/* 804180E4 00415024  CB 41 00 E0 */	lfd f26, 0xe0(r1)
/* 804180E8 00415028  E3 21 00 D8 */	psq_l f25, 216(r1), 0, qr0
/* 804180EC 0041502C  CB 21 00 D0 */	lfd f25, 0xd0(r1)
/* 804180F0 00415030  E3 01 00 C8 */	psq_l f24, 200(r1), 0, qr0
/* 804180F4 00415034  CB 01 00 C0 */	lfd f24, 0xc0(r1)
/* 804180F8 00415038  E2 E1 00 B8 */	psq_l f23, 184(r1), 0, qr0
/* 804180FC 0041503C  CA E1 00 B0 */	lfd f23, 0xb0(r1)
/* 80418100 00415040  E2 C1 00 A8 */	psq_l f22, 168(r1), 0, qr0
/* 80418104 00415044  CA C1 00 A0 */	lfd f22, 0xa0(r1)
/* 80418108 00415048  E2 A1 00 98 */	psq_l f21, 152(r1), 0, qr0
/* 8041810C 0041504C  CA A1 00 90 */	lfd f21, 0x90(r1)
/* 80418110 00415050  E2 81 00 88 */	psq_l f20, 136(r1), 0, qr0
/* 80418114 00415054  CA 81 00 80 */	lfd f20, 0x80(r1)
/* 80418118 00415058  E2 61 00 78 */	psq_l f19, 120(r1), 0, qr0
/* 8041811C 0041505C  CA 61 00 70 */	lfd f19, 0x70(r1)
/* 80418120 00415060  E2 41 00 68 */	psq_l f18, 104(r1), 0, qr0
/* 80418124 00415064  CA 41 00 60 */	lfd f18, 0x60(r1)
/* 80418128 00415068  80 01 01 44 */	lwz r0, 0x144(r1)
/* 8041812C 0041506C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80418130 00415070  7C 08 03 A6 */	mtlr r0
/* 80418134 00415074  38 21 01 40 */	addi r1, r1, 0x140
/* 80418138 00415078  4E 80 00 20 */	blr 
.endfn makePlanes__Q23Sys8TriangleFRQ23Sys11VertexTable

.fn condition__Q23Sys16RayIntersectInfoFRQ23Sys8Triangle, global
/* 8041813C 0041507C  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 80418140 00415080  28 00 00 00 */	cmplwi r0, 0
/* 80418144 00415084  41 82 00 30 */	beq .L_80418174
/* 80418148 00415088  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8041814C 0041508C  C0 02 1F B0 */	lfs f0, lbl_80520310@sda21(r2)
/* 80418150 00415090  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80418154 00415094  40 80 00 18 */	bge .L_8041816C
/* 80418158 00415098  C0 02 1F C4 */	lfs f0, lbl_80520324@sda21(r2)
/* 8041815C 0041509C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80418160 004150A0  40 81 00 0C */	ble .L_8041816C
/* 80418164 004150A4  38 60 00 01 */	li r3, 1
/* 80418168 004150A8  4E 80 00 20 */	blr 
.L_8041816C:
/* 8041816C 004150AC  38 60 00 00 */	li r3, 0
/* 80418170 004150B0  4E 80 00 20 */	blr 
.L_80418174:
/* 80418174 004150B4  38 60 00 01 */	li r3, 1
/* 80418178 004150B8  4E 80 00 20 */	blr 
.endfn condition__Q23Sys16RayIntersectInfoFRQ23Sys8Triangle

.fn createTriangles__Q23Sys11GridDividerFRQ23Sys17CreateTriangleArg, global
/* 8041817C 004150BC  94 21 EB C0 */	stwu r1, -0x1440(r1)
/* 80418180 004150C0  7C 08 02 A6 */	mflr r0
/* 80418184 004150C4  90 01 14 44 */	stw r0, 0x1444(r1)
/* 80418188 004150C8  38 00 14 38 */	li r0, 0x1438
/* 8041818C 004150CC  DB E1 14 30 */	stfd f31, 0x1430(r1)
/* 80418190 004150D0  13 E1 00 0E */	psq_stx f31, r1, r0, 0, qr0
/* 80418194 004150D4  BF 41 14 18 */	stmw r26, 0x1418(r1)
/* 80418198 004150D8  38 00 00 00 */	li r0, 0
/* 8041819C 004150DC  7C 7F 1B 78 */	mr r31, r3
/* 804181A0 004150E0  90 04 00 18 */	stw r0, 0x18(r4)
/* 804181A4 004150E4  7C 9C 23 78 */	mr r28, r4
/* 804181A8 004150E8  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 804181AC 004150EC  38 61 02 08 */	addi r3, r1, 0x208
/* 804181B0 004150F0  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 804181B4 004150F4  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 804181B8 004150F8  38 A0 00 00 */	li r5, 0
/* 804181BC 004150FC  38 C0 00 0C */	li r6, 0xc
/* 804181C0 00415100  38 E0 01 80 */	li r7, 0x180
/* 804181C4 00415104  4B CA 96 79 */	bl __construct_array
/* 804181C8 00415108  C0 5C 00 00 */	lfs f2, 0(r28)
/* 804181CC 0041510C  3B A0 00 00 */	li r29, 0
/* 804181D0 00415110  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 804181D4 00415114  38 60 00 00 */	li r3, 0
/* 804181D8 00415118  C0 7C 00 08 */	lfs f3, 8(r28)
/* 804181DC 0041511C  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 804181E0 00415120  EC 42 08 28 */	fsubs f2, f2, f1
/* 804181E4 00415124  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 804181E8 00415128  EC 63 00 28 */	fsubs f3, f3, f0
/* 804181EC 0041512C  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 804181F0 00415130  EC 22 08 24 */	fdivs f1, f2, f1
/* 804181F4 00415134  EC 03 00 24 */	fdivs f0, f3, f0
/* 804181F8 00415138  FC 20 08 1E */	fctiwz f1, f1
/* 804181FC 0041513C  FC 00 00 1E */	fctiwz f0, f0
/* 80418200 00415140  D8 21 14 08 */	stfd f1, 0x1408(r1)
/* 80418204 00415144  80 81 14 0C */	lwz r4, 0x140c(r1)
/* 80418208 00415148  D8 01 14 10 */	stfd f0, 0x1410(r1)
/* 8041820C 0041514C  2C 04 00 00 */	cmpwi r4, 0
/* 80418210 00415150  81 21 14 14 */	lwz r9, 0x1414(r1)
/* 80418214 00415154  41 80 00 28 */	blt .L_8041823C
/* 80418218 00415158  2C 09 00 00 */	cmpwi r9, 0
/* 8041821C 0041515C  41 80 00 20 */	blt .L_8041823C
/* 80418220 00415160  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80418224 00415164  7C 04 00 00 */	cmpw r4, r0
/* 80418228 00415168  40 80 00 14 */	bge .L_8041823C
/* 8041822C 0041516C  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 80418230 00415170  7C 09 00 00 */	cmpw r9, r0
/* 80418234 00415174  40 80 00 08 */	bge .L_8041823C
/* 80418238 00415178  38 60 00 01 */	li r3, 1
.L_8041823C:
/* 8041823C 0041517C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80418240 00415180  41 82 03 44 */	beq .L_80418584
/* 80418244 00415184  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80418248 00415188  38 01 00 08 */	addi r0, r1, 8
/* 8041824C 0041518C  3B C1 02 08 */	addi r30, r1, 0x208
/* 80418250 00415190  81 1F 00 28 */	lwz r8, 0x28(r31)
/* 80418254 00415194  7C 64 19 D6 */	mullw r3, r4, r3
/* 80418258 00415198  7C 05 03 78 */	mr r5, r0
/* 8041825C 0041519C  7F C6 F3 78 */	mr r6, r30
/* 80418260 004151A0  38 E0 00 00 */	li r7, 0
/* 80418264 004151A4  38 80 00 00 */	li r4, 0
/* 80418268 004151A8  7C 69 1A 14 */	add r3, r9, r3
/* 8041826C 004151AC  1C 63 00 28 */	mulli r3, r3, 0x28
/* 80418270 004151B0  7D 88 1A 14 */	add r12, r8, r3
/* 80418274 004151B4  48 00 01 30 */	b .L_804183A4
.L_80418278:
/* 80418278 004151B8  81 2C 00 24 */	lwz r9, 0x24(r12)
/* 8041827C 004151BC  7C 03 03 78 */	mr r3, r0
/* 80418280 004151C0  81 7F 00 1C */	lwz r11, 0x1c(r31)
/* 80418284 004151C4  39 00 00 00 */	li r8, 0
/* 80418288 004151C8  7D 49 20 2E */	lwzx r10, r9, r4
/* 8041828C 004151CC  81 3F 00 18 */	lwz r9, 0x18(r31)
/* 80418290 004151D0  1D 4A 00 60 */	mulli r10, r10, 0x60
/* 80418294 004151D4  81 6B 00 24 */	lwz r11, 0x24(r11)
/* 80418298 004151D8  83 49 00 24 */	lwz r26, 0x24(r9)
/* 8041829C 004151DC  7F 6B 52 14 */	add r27, r11, r10
/* 804182A0 004151E0  81 7B 00 00 */	lwz r11, 0(r27)
/* 804182A4 004151E4  81 5B 00 04 */	lwz r10, 4(r27)
/* 804182A8 004151E8  81 3B 00 08 */	lwz r9, 8(r27)
/* 804182AC 004151EC  1D 6B 00 0C */	mulli r11, r11, 0xc
/* 804182B0 004151F0  7D 7A 5A 14 */	add r11, r26, r11
/* 804182B4 004151F4  1D 4A 00 0C */	mulli r10, r10, 0xc
/* 804182B8 004151F8  C0 2B 00 00 */	lfs f1, 0(r11)
/* 804182BC 004151FC  C0 6B 00 04 */	lfs f3, 4(r11)
/* 804182C0 00415200  C0 8B 00 08 */	lfs f4, 8(r11)
/* 804182C4 00415204  7D 5A 52 14 */	add r10, r26, r10
/* 804182C8 00415208  1D 29 00 0C */	mulli r9, r9, 0xc
/* 804182CC 0041520C  C0 AA 00 00 */	lfs f5, 0(r10)
/* 804182D0 00415210  C0 CA 00 04 */	lfs f6, 4(r10)
/* 804182D4 00415214  C0 EA 00 08 */	lfs f7, 8(r10)
/* 804182D8 00415218  7D 3A 4A 14 */	add r9, r26, r9
/* 804182DC 0041521C  C1 09 00 00 */	lfs f8, 0(r9)
/* 804182E0 00415220  C1 29 00 04 */	lfs f9, 4(r9)
/* 804182E4 00415224  C1 49 00 08 */	lfs f10, 8(r9)
/* 804182E8 00415228  7F A9 03 A6 */	mtctr r29
/* 804182EC 0041522C  2C 1D 00 00 */	cmpwi r29, 0
/* 804182F0 00415230  40 81 00 1C */	ble .L_8041830C
.L_804182F4:
/* 804182F4 00415234  81 23 00 00 */	lwz r9, 0(r3)
/* 804182F8 00415238  7C 1B 48 40 */	cmplw r27, r9
/* 804182FC 0041523C  40 82 00 08 */	bne .L_80418304
/* 80418300 00415240  39 00 00 01 */	li r8, 1
.L_80418304:
/* 80418304 00415244  38 63 00 04 */	addi r3, r3, 4
/* 80418308 00415248  42 00 FF EC */	bdnz .L_804182F4
.L_8041830C:
/* 8041830C 0041524C  55 03 06 3F */	clrlwi. r3, r8, 0x18
/* 80418310 00415250  40 82 00 8C */	bne .L_8041839C
/* 80418314 00415254  2C 1D 00 80 */	cmpwi r29, 0x80
/* 80418318 00415258  40 80 00 84 */	bge .L_8041839C
/* 8041831C 0041525C  C1 7B 00 10 */	lfs f11, 0x10(r27)
/* 80418320 00415260  C0 1C 00 14 */	lfs f0, 0x14(r28)
/* 80418324 00415264  C0 5B 00 0C */	lfs f2, 0xc(r27)
/* 80418328 00415268  FC 0B 00 40 */	fcmpo cr0, f11, f0
/* 8041832C 0041526C  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 80418330 00415270  40 81 00 6C */	ble .L_8041839C
/* 80418334 00415274  C3 FC 00 10 */	lfs f31, 0x10(r28)
/* 80418338 00415278  3B BD 00 01 */	addi r29, r29, 1
/* 8041833C 0041527C  93 65 00 00 */	stw r27, 0(r5)
/* 80418340 00415280  38 A5 00 04 */	addi r5, r5, 4
/* 80418344 00415284  ED A2 07 F2 */	fmuls f13, f2, f31
/* 80418348 00415288  ED 8B 07 F2 */	fmuls f12, f11, f31
/* 8041834C 0041528C  ED 60 07 F2 */	fmuls f11, f0, f31
/* 80418350 00415290  EC 41 68 2A */	fadds f2, f1, f13
/* 80418354 00415294  EC 23 60 2A */	fadds f1, f3, f12
/* 80418358 00415298  EC 04 58 2A */	fadds f0, f4, f11
/* 8041835C 0041529C  D0 46 00 00 */	stfs f2, 0(r6)
/* 80418360 004152A0  EC A5 68 2A */	fadds f5, f5, f13
/* 80418364 004152A4  EC 86 60 2A */	fadds f4, f6, f12
/* 80418368 004152A8  D0 26 00 04 */	stfs f1, 4(r6)
/* 8041836C 004152AC  EC 67 58 2A */	fadds f3, f7, f11
/* 80418370 004152B0  EC 48 68 2A */	fadds f2, f8, f13
/* 80418374 004152B4  D0 06 00 08 */	stfs f0, 8(r6)
/* 80418378 004152B8  EC 29 60 2A */	fadds f1, f9, f12
/* 8041837C 004152BC  EC 0A 58 2A */	fadds f0, f10, f11
/* 80418380 004152C0  D0 A6 00 0C */	stfs f5, 0xc(r6)
/* 80418384 004152C4  D0 86 00 10 */	stfs f4, 0x10(r6)
/* 80418388 004152C8  D0 66 00 14 */	stfs f3, 0x14(r6)
/* 8041838C 004152CC  D0 46 00 18 */	stfs f2, 0x18(r6)
/* 80418390 004152D0  D0 26 00 1C */	stfs f1, 0x1c(r6)
/* 80418394 004152D4  D0 06 00 20 */	stfs f0, 0x20(r6)
/* 80418398 004152D8  38 C6 00 24 */	addi r6, r6, 0x24
.L_8041839C:
/* 8041839C 004152DC  38 84 00 04 */	addi r4, r4, 4
/* 804183A0 004152E0  38 E7 00 01 */	addi r7, r7, 1
.L_804183A4:
/* 804183A4 004152E4  80 6C 00 1C */	lwz r3, 0x1c(r12)
/* 804183A8 004152E8  7C 07 18 00 */	cmpw r7, r3
/* 804183AC 004152EC  41 80 FE CC */	blt .L_80418278
/* 804183B0 004152F0  1F FD 00 03 */	mulli r31, r29, 3
/* 804183B4 004152F4  1C 7F 00 0C */	mulli r3, r31, 0xc
/* 804183B8 004152F8  38 63 00 10 */	addi r3, r3, 0x10
/* 804183BC 004152FC  4B C0 BB F1 */	bl __nwa__FUl
/* 804183C0 00415300  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 804183C4 00415304  7F E7 FB 78 */	mr r7, r31
/* 804183C8 00415308  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 804183CC 0041530C  38 A0 00 00 */	li r5, 0
/* 804183D0 00415310  38 C0 00 0C */	li r6, 0xc
/* 804183D4 00415314  4B CA 96 1D */	bl __construct_new_array
/* 804183D8 00415318  2C 1F 00 00 */	cmpwi r31, 0
/* 804183DC 0041531C  90 7C 00 18 */	stw r3, 0x18(r28)
/* 804183E0 00415320  38 60 00 00 */	li r3, 0
/* 804183E4 00415324  40 81 01 9C */	ble .L_80418580
/* 804183E8 00415328  2C 1F 00 08 */	cmpwi r31, 8
/* 804183EC 0041532C  38 9F FF F8 */	addi r4, r31, -8
/* 804183F0 00415330  40 81 01 48 */	ble .L_80418538
/* 804183F4 00415334  38 04 00 07 */	addi r0, r4, 7
/* 804183F8 00415338  38 A0 00 00 */	li r5, 0
/* 804183FC 0041533C  54 00 E8 FE */	srwi r0, r0, 3
/* 80418400 00415340  7C 09 03 A6 */	mtctr r0
/* 80418404 00415344  2C 04 00 00 */	cmpwi r4, 0
/* 80418408 00415348  40 81 01 30 */	ble .L_80418538
.L_8041840C:
/* 8041840C 0041534C  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80418410 00415350  39 85 00 0C */	addi r12, r5, 0xc
/* 80418414 00415354  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80418418 00415358  39 65 00 18 */	addi r11, r5, 0x18
/* 8041841C 0041535C  7C 80 2A 14 */	add r4, r0, r5
/* 80418420 00415360  39 45 00 24 */	addi r10, r5, 0x24
/* 80418424 00415364  D0 04 00 00 */	stfs f0, 0(r4)
/* 80418428 00415368  39 25 00 30 */	addi r9, r5, 0x30
/* 8041842C 0041536C  39 05 00 3C */	addi r8, r5, 0x3c
/* 80418430 00415370  38 E5 00 48 */	addi r7, r5, 0x48
/* 80418434 00415374  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80418438 00415378  38 C5 00 54 */	addi r6, r5, 0x54
/* 8041843C 0041537C  38 A5 00 60 */	addi r5, r5, 0x60
/* 80418440 00415380  38 63 00 08 */	addi r3, r3, 8
/* 80418444 00415384  D0 04 00 04 */	stfs f0, 4(r4)
/* 80418448 00415388  C0 1E 00 08 */	lfs f0, 8(r30)
/* 8041844C 0041538C  D0 04 00 08 */	stfs f0, 8(r4)
/* 80418450 00415390  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80418454 00415394  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 80418458 00415398  7D 80 62 14 */	add r12, r0, r12
/* 8041845C 0041539C  D0 0C 00 00 */	stfs f0, 0(r12)
/* 80418460 004153A0  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 80418464 004153A4  D0 0C 00 04 */	stfs f0, 4(r12)
/* 80418468 004153A8  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8041846C 004153AC  D0 0C 00 08 */	stfs f0, 8(r12)
/* 80418470 004153B0  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80418474 004153B4  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80418478 004153B8  7D 60 5A 14 */	add r11, r0, r11
/* 8041847C 004153BC  D0 0B 00 00 */	stfs f0, 0(r11)
/* 80418480 004153C0  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 80418484 004153C4  D0 0B 00 04 */	stfs f0, 4(r11)
/* 80418488 004153C8  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 8041848C 004153CC  D0 0B 00 08 */	stfs f0, 8(r11)
/* 80418490 004153D0  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80418494 004153D4  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80418498 004153D8  7D 40 52 14 */	add r10, r0, r10
/* 8041849C 004153DC  D0 0A 00 00 */	stfs f0, 0(r10)
/* 804184A0 004153E0  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 804184A4 004153E4  D0 0A 00 04 */	stfs f0, 4(r10)
/* 804184A8 004153E8  C0 1E 00 2C */	lfs f0, 0x2c(r30)
/* 804184AC 004153EC  D0 0A 00 08 */	stfs f0, 8(r10)
/* 804184B0 004153F0  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 804184B4 004153F4  C0 1E 00 30 */	lfs f0, 0x30(r30)
/* 804184B8 004153F8  7D 20 4A 14 */	add r9, r0, r9
/* 804184BC 004153FC  D0 09 00 00 */	stfs f0, 0(r9)
/* 804184C0 00415400  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 804184C4 00415404  D0 09 00 04 */	stfs f0, 4(r9)
/* 804184C8 00415408  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 804184CC 0041540C  D0 09 00 08 */	stfs f0, 8(r9)
/* 804184D0 00415410  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 804184D4 00415414  C0 1E 00 3C */	lfs f0, 0x3c(r30)
/* 804184D8 00415418  7D 00 42 14 */	add r8, r0, r8
/* 804184DC 0041541C  D0 08 00 00 */	stfs f0, 0(r8)
/* 804184E0 00415420  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 804184E4 00415424  D0 08 00 04 */	stfs f0, 4(r8)
/* 804184E8 00415428  C0 1E 00 44 */	lfs f0, 0x44(r30)
/* 804184EC 0041542C  D0 08 00 08 */	stfs f0, 8(r8)
/* 804184F0 00415430  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 804184F4 00415434  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 804184F8 00415438  7C E0 3A 14 */	add r7, r0, r7
/* 804184FC 0041543C  D0 07 00 00 */	stfs f0, 0(r7)
/* 80418500 00415440  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 80418504 00415444  D0 07 00 04 */	stfs f0, 4(r7)
/* 80418508 00415448  C0 1E 00 50 */	lfs f0, 0x50(r30)
/* 8041850C 0041544C  D0 07 00 08 */	stfs f0, 8(r7)
/* 80418510 00415450  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80418514 00415454  C0 1E 00 54 */	lfs f0, 0x54(r30)
/* 80418518 00415458  7C C0 32 14 */	add r6, r0, r6
/* 8041851C 0041545C  D0 06 00 00 */	stfs f0, 0(r6)
/* 80418520 00415460  C0 1E 00 58 */	lfs f0, 0x58(r30)
/* 80418524 00415464  D0 06 00 04 */	stfs f0, 4(r6)
/* 80418528 00415468  C0 1E 00 5C */	lfs f0, 0x5c(r30)
/* 8041852C 0041546C  3B DE 00 60 */	addi r30, r30, 0x60
/* 80418530 00415470  D0 06 00 08 */	stfs f0, 8(r6)
/* 80418534 00415474  42 00 FE D8 */	bdnz .L_8041840C
.L_80418538:
/* 80418538 00415478  1C A3 00 0C */	mulli r5, r3, 0xc
/* 8041853C 0041547C  38 81 02 08 */	addi r4, r1, 0x208
/* 80418540 00415480  7C 03 F8 50 */	subf r0, r3, r31
/* 80418544 00415484  7C 84 2A 14 */	add r4, r4, r5
/* 80418548 00415488  7C 09 03 A6 */	mtctr r0
/* 8041854C 0041548C  7C 03 F8 00 */	cmpw r3, r31
/* 80418550 00415490  40 80 00 30 */	bge .L_80418580
.L_80418554:
/* 80418554 00415494  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80418558 00415498  C0 04 00 00 */	lfs f0, 0(r4)
/* 8041855C 0041549C  7C 60 2A 14 */	add r3, r0, r5
/* 80418560 004154A0  38 A5 00 0C */	addi r5, r5, 0xc
/* 80418564 004154A4  D0 03 00 00 */	stfs f0, 0(r3)
/* 80418568 004154A8  C0 04 00 04 */	lfs f0, 4(r4)
/* 8041856C 004154AC  D0 03 00 04 */	stfs f0, 4(r3)
/* 80418570 004154B0  C0 04 00 08 */	lfs f0, 8(r4)
/* 80418574 004154B4  38 84 00 0C */	addi r4, r4, 0xc
/* 80418578 004154B8  D0 03 00 08 */	stfs f0, 8(r3)
/* 8041857C 004154BC  42 00 FF D8 */	bdnz .L_80418554
.L_80418580:
/* 80418580 004154C0  93 BC 00 1C */	stw r29, 0x1c(r28)
.L_80418584:
/* 80418584 004154C4  38 00 14 38 */	li r0, 0x1438
/* 80418588 004154C8  13 E1 00 0C */	psq_lx f31, r1, r0, 0, qr0
/* 8041858C 004154CC  CB E1 14 30 */	lfd f31, 0x1430(r1)
/* 80418590 004154D0  BB 41 14 18 */	lmw r26, 0x1418(r1)
/* 80418594 004154D4  80 01 14 44 */	lwz r0, 0x1444(r1)
/* 80418598 004154D8  7C 08 03 A6 */	mtlr r0
/* 8041859C 004154DC  38 21 14 40 */	addi r1, r1, 0x1440
/* 804185A0 004154E0  4E 80 00 20 */	blr 
.endfn createTriangles__Q23Sys11GridDividerFRQ23Sys17CreateTriangleArg

.fn getMinY__Q23Sys11GridDividerFR10Vector3<f>, global
/* 804185A4 004154E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804185A8 004154E8  38 A0 00 00 */	li r5, 0
/* 804185AC 004154EC  C1 24 00 00 */	lfs f9, 0(r4)
/* 804185B0 004154F0  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 804185B4 004154F4  C1 44 00 08 */	lfs f10, 8(r4)
/* 804185B8 004154F8  EC 49 08 28 */	fsubs f2, f9, f1
/* 804185BC 004154FC  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 804185C0 00415500  C0 23 00 44 */	lfs f1, 0x44(r3)
/* 804185C4 00415504  EC 6A 00 28 */	fsubs f3, f10, f0
/* 804185C8 00415508  C0 03 00 48 */	lfs f0, 0x48(r3)
/* 804185CC 0041550C  EC 22 08 24 */	fdivs f1, f2, f1
/* 804185D0 00415510  EC 03 00 24 */	fdivs f0, f3, f0
/* 804185D4 00415514  FC 20 08 1E */	fctiwz f1, f1
/* 804185D8 00415518  FC 00 00 1E */	fctiwz f0, f0
/* 804185DC 0041551C  D8 21 00 08 */	stfd f1, 8(r1)
/* 804185E0 00415520  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 804185E4 00415524  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 804185E8 00415528  2C 06 00 00 */	cmpwi r6, 0
/* 804185EC 0041552C  81 01 00 14 */	lwz r8, 0x14(r1)
/* 804185F0 00415530  41 80 00 28 */	blt .L_80418618
/* 804185F4 00415534  2C 08 00 00 */	cmpwi r8, 0
/* 804185F8 00415538  41 80 00 20 */	blt .L_80418618
/* 804185FC 0041553C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80418600 00415540  7C 06 00 00 */	cmpw r6, r0
/* 80418604 00415544  40 80 00 14 */	bge .L_80418618
/* 80418608 00415548  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8041860C 0041554C  7C 08 00 00 */	cmpw r8, r0
/* 80418610 00415550  40 80 00 08 */	bge .L_80418618
/* 80418614 00415554  38 A0 00 01 */	li r5, 1
.L_80418618:
/* 80418618 00415558  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8041861C 0041555C  40 82 00 0C */	bne .L_80418628
/* 80418620 00415560  C0 22 1F A8 */	lfs f1, lbl_80520308@sda21(r2)
/* 80418624 00415564  48 00 01 50 */	b .L_80418774
.L_80418628:
/* 80418628 00415568  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8041862C 0041556C  39 20 00 00 */	li r9, 0
/* 80418630 00415570  80 A3 00 28 */	lwz r5, 0x28(r3)
/* 80418634 00415574  38 E0 00 00 */	li r7, 0
/* 80418638 00415578  7C 06 01 D6 */	mullw r0, r6, r0
/* 8041863C 0041557C  C0 22 1F C8 */	lfs f1, lbl_80520328@sda21(r2)
/* 80418640 00415580  C0 C4 00 04 */	lfs f6, 4(r4)
/* 80418644 00415584  C1 02 1F A8 */	lfs f8, lbl_80520308@sda21(r2)
/* 80418648 00415588  7C 08 02 14 */	add r0, r8, r0
/* 8041864C 0041558C  1C 00 00 28 */	mulli r0, r0, 0x28
/* 80418650 00415590  7C C5 02 14 */	add r6, r5, r0
/* 80418654 00415594  80 06 00 1C */	lwz r0, 0x1c(r6)
/* 80418658 00415598  7C 09 03 A6 */	mtctr r0
/* 8041865C 0041559C  2C 00 00 00 */	cmpwi r0, 0
/* 80418660 004155A0  40 81 01 04 */	ble .L_80418764
.L_80418664:
/* 80418664 004155A4  80 86 00 24 */	lwz r4, 0x24(r6)
/* 80418668 004155A8  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 8041866C 004155AC  7C 04 38 2E */	lwzx r0, r4, r7
/* 80418670 004155B0  80 85 00 24 */	lwz r4, 0x24(r5)
/* 80418674 004155B4  1C 00 00 60 */	mulli r0, r0, 0x60
/* 80418678 004155B8  7C 84 02 14 */	add r4, r4, r0
/* 8041867C 004155BC  C1 64 00 10 */	lfs f11, 0x10(r4)
/* 80418680 004155C0  FC 0B 40 40 */	fcmpo cr0, f11, f8
/* 80418684 004155C4  4C 40 13 82 */	cror 2, 0, 2
/* 80418688 004155C8  40 82 00 0C */	bne .L_80418694
/* 8041868C 004155CC  38 00 00 00 */	li r0, 0
/* 80418690 004155D0  48 00 00 B4 */	b .L_80418744
.L_80418694:
/* 80418694 004155D4  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80418698 004155D8  38 00 00 00 */	li r0, 0
/* 8041869C 004155DC  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 804186A0 004155E0  EC 00 02 B2 */	fmuls f0, f0, f10
/* 804186A4 004155E4  C0 E4 00 18 */	lfs f7, 0x18(r4)
/* 804186A8 004155E8  C0 64 00 20 */	lfs f3, 0x20(r4)
/* 804186AC 004155EC  C0 84 00 1C */	lfs f4, 0x1c(r4)
/* 804186B0 004155F0  EC C2 02 7A */	fmadds f6, f2, f9, f0
/* 804186B4 004155F4  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 804186B8 004155F8  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 804186BC 004155FC  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804186C0 00415600  EC C7 30 28 */	fsubs f6, f7, f6
/* 804186C4 00415604  EC C6 58 24 */	fdivs f6, f6, f11
/* 804186C8 00415608  EC 66 00 F2 */	fmuls f3, f6, f3
/* 804186CC 0041560C  EC 69 19 3A */	fmadds f3, f9, f4, f3
/* 804186D0 00415610  EC 6A 19 7A */	fmadds f3, f10, f5, f3
/* 804186D4 00415614  EC 43 10 28 */	fsubs f2, f3, f2
/* 804186D8 00415618  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 804186DC 0041561C  40 81 00 08 */	ble .L_804186E4
/* 804186E0 00415620  48 00 00 64 */	b .L_80418744
.L_804186E4:
/* 804186E4 00415624  C0 64 00 30 */	lfs f3, 0x30(r4)
/* 804186E8 00415628  C0 84 00 2C */	lfs f4, 0x2c(r4)
/* 804186EC 0041562C  EC 66 00 F2 */	fmuls f3, f6, f3
/* 804186F0 00415630  C0 A4 00 34 */	lfs f5, 0x34(r4)
/* 804186F4 00415634  C0 44 00 38 */	lfs f2, 0x38(r4)
/* 804186F8 00415638  EC 69 19 3A */	fmadds f3, f9, f4, f3
/* 804186FC 0041563C  EC 6A 19 7A */	fmadds f3, f10, f5, f3
/* 80418700 00415640  EC 43 10 28 */	fsubs f2, f3, f2
/* 80418704 00415644  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80418708 00415648  40 81 00 08 */	ble .L_80418710
/* 8041870C 0041564C  48 00 00 38 */	b .L_80418744
.L_80418710:
/* 80418710 00415650  38 84 00 20 */	addi r4, r4, 0x20
/* 80418714 00415654  C0 64 00 20 */	lfs f3, 0x20(r4)
/* 80418718 00415658  C0 84 00 1C */	lfs f4, 0x1c(r4)
/* 8041871C 0041565C  EC 66 00 F2 */	fmuls f3, f6, f3
/* 80418720 00415660  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 80418724 00415664  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 80418728 00415668  EC 69 19 3A */	fmadds f3, f9, f4, f3
/* 8041872C 0041566C  EC 6A 19 7A */	fmadds f3, f10, f5, f3
/* 80418730 00415670  EC 43 10 28 */	fsubs f2, f3, f2
/* 80418734 00415674  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80418738 00415678  40 81 00 08 */	ble .L_80418740
/* 8041873C 0041567C  48 00 00 08 */	b .L_80418744
.L_80418740:
/* 80418740 00415680  38 00 00 01 */	li r0, 1
.L_80418744:
/* 80418744 00415684  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80418748 00415688  41 82 00 14 */	beq .L_8041875C
/* 8041874C 0041568C  FC 01 30 40 */	fcmpo cr0, f1, f6
/* 80418750 00415690  40 81 00 0C */	ble .L_8041875C
/* 80418754 00415694  FC 20 30 90 */	fmr f1, f6
/* 80418758 00415698  39 20 00 01 */	li r9, 1
.L_8041875C:
/* 8041875C 0041569C  38 E7 00 04 */	addi r7, r7, 4
/* 80418760 004156A0  42 00 FF 04 */	bdnz .L_80418664
.L_80418764:
/* 80418764 004156A4  55 20 06 3F */	clrlwi. r0, r9, 0x18
/* 80418768 004156A8  41 82 00 08 */	beq .L_80418770
/* 8041876C 004156AC  48 00 00 08 */	b .L_80418774
.L_80418770:
/* 80418770 004156B0  C0 22 1F A8 */	lfs f1, lbl_80520308@sda21(r2)
.L_80418774:
/* 80418774 004156B4  38 21 00 20 */	addi r1, r1, 0x20
/* 80418778 004156B8  4E 80 00 20 */	blr 
.endfn getMinY__Q23Sys11GridDividerFR10Vector3<f>

.fn getCurrTri__Q23Sys11GridDividerFRQ24Game11CurrTriInfo, global
/* 8041877C 004156BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80418780 004156C0  38 A0 00 00 */	li r5, 0
/* 80418784 004156C4  C0 04 00 00 */	lfs f0, 0(r4)
/* 80418788 004156C8  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 8041878C 004156CC  C0 24 00 08 */	lfs f1, 8(r4)
/* 80418790 004156D0  EC 80 18 28 */	fsubs f4, f0, f3
/* 80418794 004156D4  C0 43 00 34 */	lfs f2, 0x34(r3)
/* 80418798 004156D8  C0 63 00 44 */	lfs f3, 0x44(r3)
/* 8041879C 004156DC  EC A1 10 28 */	fsubs f5, f1, f2
/* 804187A0 004156E0  C0 43 00 48 */	lfs f2, 0x48(r3)
/* 804187A4 004156E4  EC 64 18 24 */	fdivs f3, f4, f3
/* 804187A8 004156E8  EC 45 10 24 */	fdivs f2, f5, f2
/* 804187AC 004156EC  FC 60 18 1E */	fctiwz f3, f3
/* 804187B0 004156F0  FC 40 10 1E */	fctiwz f2, f2
/* 804187B4 004156F4  D8 61 00 08 */	stfd f3, 8(r1)
/* 804187B8 004156F8  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 804187BC 004156FC  D8 41 00 10 */	stfd f2, 0x10(r1)
/* 804187C0 00415700  2C 06 00 00 */	cmpwi r6, 0
/* 804187C4 00415704  80 E1 00 14 */	lwz r7, 0x14(r1)
/* 804187C8 00415708  41 80 00 28 */	blt .L_804187F0
/* 804187CC 0041570C  2C 07 00 00 */	cmpwi r7, 0
/* 804187D0 00415710  41 80 00 20 */	blt .L_804187F0
/* 804187D4 00415714  80 03 00 20 */	lwz r0, 0x20(r3)
/* 804187D8 00415718  7C 06 00 00 */	cmpw r6, r0
/* 804187DC 0041571C  40 80 00 14 */	bge .L_804187F0
/* 804187E0 00415720  80 03 00 24 */	lwz r0, 0x24(r3)
/* 804187E4 00415724  7C 07 00 00 */	cmpw r7, r0
/* 804187E8 00415728  40 80 00 08 */	bge .L_804187F0
/* 804187EC 0041572C  38 A0 00 01 */	li r5, 1
.L_804187F0:
/* 804187F0 00415730  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 804187F4 00415734  41 82 01 B4 */	beq .L_804189A8
/* 804187F8 00415738  80 03 00 24 */	lwz r0, 0x24(r3)
/* 804187FC 0041573C  39 20 00 00 */	li r9, 0
/* 80418800 00415740  80 A3 00 28 */	lwz r5, 0x28(r3)
/* 80418804 00415744  39 40 00 00 */	li r10, 0
/* 80418808 00415748  7C 06 01 D6 */	mullw r0, r6, r0
/* 8041880C 0041574C  C1 62 1F C8 */	lfs f11, lbl_80520328@sda21(r2)
/* 80418810 00415750  C1 82 1F CC */	lfs f12, lbl_8052032C@sda21(r2)
/* 80418814 00415754  39 00 00 00 */	li r8, 0
/* 80418818 00415758  C0 E4 00 04 */	lfs f7, 4(r4)
/* 8041881C 0041575C  C1 22 1F A8 */	lfs f9, lbl_80520308@sda21(r2)
/* 80418820 00415760  7C 07 02 14 */	add r0, r7, r0
/* 80418824 00415764  1C 00 00 28 */	mulli r0, r0, 0x28
/* 80418828 00415768  7C E5 02 14 */	add r7, r5, r0
/* 8041882C 0041576C  48 00 01 60 */	b .L_8041898C
.L_80418830:
/* 80418830 00415770  80 A7 00 24 */	lwz r5, 0x24(r7)
/* 80418834 00415774  80 C3 00 1C */	lwz r6, 0x1c(r3)
/* 80418838 00415778  7C 05 40 2E */	lwzx r0, r5, r8
/* 8041883C 0041577C  80 A6 00 24 */	lwz r5, 0x24(r6)
/* 80418840 00415780  1C 00 00 60 */	mulli r0, r0, 0x60
/* 80418844 00415784  7C A5 02 14 */	add r5, r5, r0
/* 80418848 00415788  C1 45 00 10 */	lfs f10, 0x10(r5)
/* 8041884C 0041578C  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 80418850 00415790  4C 40 13 82 */	cror 2, 0, 2
/* 80418854 00415794  40 82 00 0C */	bne .L_80418860
/* 80418858 00415798  38 00 00 00 */	li r0, 0
/* 8041885C 0041579C  48 00 00 B0 */	b .L_8041890C
.L_80418860:
/* 80418860 004157A0  C0 45 00 14 */	lfs f2, 0x14(r5)
/* 80418864 004157A4  38 00 00 00 */	li r0, 0
/* 80418868 004157A8  C0 65 00 0C */	lfs f3, 0xc(r5)
/* 8041886C 004157AC  EC 42 00 72 */	fmuls f2, f2, f1
/* 80418870 004157B0  C1 05 00 18 */	lfs f8, 0x18(r5)
/* 80418874 004157B4  C0 85 00 20 */	lfs f4, 0x20(r5)
/* 80418878 004157B8  C0 A5 00 1C */	lfs f5, 0x1c(r5)
/* 8041887C 004157BC  EC E3 10 3A */	fmadds f7, f3, f0, f2
/* 80418880 004157C0  C0 C5 00 24 */	lfs f6, 0x24(r5)
/* 80418884 004157C4  C0 65 00 28 */	lfs f3, 0x28(r5)
/* 80418888 004157C8  C0 42 1F A8 */	lfs f2, lbl_80520308@sda21(r2)
/* 8041888C 004157CC  EC E8 38 28 */	fsubs f7, f8, f7
/* 80418890 004157D0  EC E7 50 24 */	fdivs f7, f7, f10
/* 80418894 004157D4  EC 87 01 32 */	fmuls f4, f7, f4
/* 80418898 004157D8  EC 80 21 7A */	fmadds f4, f0, f5, f4
/* 8041889C 004157DC  EC 81 21 BA */	fmadds f4, f1, f6, f4
/* 804188A0 004157E0  EC 64 18 28 */	fsubs f3, f4, f3
/* 804188A4 004157E4  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 804188A8 004157E8  40 81 00 08 */	ble .L_804188B0
/* 804188AC 004157EC  48 00 00 60 */	b .L_8041890C
.L_804188B0:
/* 804188B0 004157F0  C0 85 00 30 */	lfs f4, 0x30(r5)
/* 804188B4 004157F4  C0 A5 00 2C */	lfs f5, 0x2c(r5)
/* 804188B8 004157F8  EC 87 01 32 */	fmuls f4, f7, f4
/* 804188BC 004157FC  C0 C5 00 34 */	lfs f6, 0x34(r5)
/* 804188C0 00415800  C0 65 00 38 */	lfs f3, 0x38(r5)
/* 804188C4 00415804  EC 80 21 7A */	fmadds f4, f0, f5, f4
/* 804188C8 00415808  EC 81 21 BA */	fmadds f4, f1, f6, f4
/* 804188CC 0041580C  EC 64 18 28 */	fsubs f3, f4, f3
/* 804188D0 00415810  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 804188D4 00415814  40 81 00 08 */	ble .L_804188DC
/* 804188D8 00415818  48 00 00 34 */	b .L_8041890C
.L_804188DC:
/* 804188DC 0041581C  C0 85 00 40 */	lfs f4, 0x40(r5)
/* 804188E0 00415820  C0 A5 00 3C */	lfs f5, 0x3c(r5)
/* 804188E4 00415824  EC 87 01 32 */	fmuls f4, f7, f4
/* 804188E8 00415828  C0 C5 00 44 */	lfs f6, 0x44(r5)
/* 804188EC 0041582C  C0 65 00 48 */	lfs f3, 0x48(r5)
/* 804188F0 00415830  EC 80 21 7A */	fmadds f4, f0, f5, f4
/* 804188F4 00415834  EC 81 21 BA */	fmadds f4, f1, f6, f4
/* 804188F8 00415838  EC 64 18 28 */	fsubs f3, f4, f3
/* 804188FC 0041583C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80418900 00415840  40 81 00 08 */	ble .L_80418908
/* 80418904 00415844  48 00 00 08 */	b .L_8041890C
.L_80418908:
/* 80418908 00415848  38 00 00 01 */	li r0, 1
.L_8041890C:
/* 8041890C 0041584C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80418910 00415850  41 82 00 74 */	beq .L_80418984
/* 80418914 00415854  FC 0B 38 40 */	fcmpo cr0, f11, f7
/* 80418918 00415858  40 81 00 34 */	ble .L_8041894C
/* 8041891C 0041585C  88 04 00 0C */	lbz r0, 0xc(r4)
/* 80418920 00415860  FD 60 38 90 */	fmr f11, f7
/* 80418924 00415864  28 00 00 00 */	cmplwi r0, 0
/* 80418928 00415868  41 82 00 24 */	beq .L_8041894C
/* 8041892C 0041586C  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 80418930 00415870  39 20 00 01 */	li r9, 1
/* 80418934 00415874  D0 44 00 20 */	stfs f2, 0x20(r4)
/* 80418938 00415878  C0 45 00 10 */	lfs f2, 0x10(r5)
/* 8041893C 0041587C  D0 44 00 24 */	stfs f2, 0x24(r4)
/* 80418940 00415880  C0 45 00 14 */	lfs f2, 0x14(r5)
/* 80418944 00415884  D0 44 00 28 */	stfs f2, 0x28(r4)
/* 80418948 00415888  90 A4 00 14 */	stw r5, 0x14(r4)
.L_8041894C:
/* 8041894C 0041588C  FC 07 60 40 */	fcmpo cr0, f7, f12
/* 80418950 00415890  40 81 00 34 */	ble .L_80418984
/* 80418954 00415894  88 04 00 0C */	lbz r0, 0xc(r4)
/* 80418958 00415898  FD 80 38 90 */	fmr f12, f7
/* 8041895C 0041589C  28 00 00 00 */	cmplwi r0, 0
/* 80418960 004158A0  40 82 00 24 */	bne .L_80418984
/* 80418964 004158A4  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 80418968 004158A8  39 20 00 01 */	li r9, 1
/* 8041896C 004158AC  D0 44 00 20 */	stfs f2, 0x20(r4)
/* 80418970 004158B0  C0 45 00 10 */	lfs f2, 0x10(r5)
/* 80418974 004158B4  D0 44 00 24 */	stfs f2, 0x24(r4)
/* 80418978 004158B8  C0 45 00 14 */	lfs f2, 0x14(r5)
/* 8041897C 004158BC  D0 44 00 28 */	stfs f2, 0x28(r4)
/* 80418980 004158C0  90 A4 00 14 */	stw r5, 0x14(r4)
.L_80418984:
/* 80418984 004158C4  39 08 00 04 */	addi r8, r8, 4
/* 80418988 004158C8  39 4A 00 01 */	addi r10, r10, 1
.L_8041898C:
/* 8041898C 004158CC  80 07 00 1C */	lwz r0, 0x1c(r7)
/* 80418990 004158D0  7C 0A 00 00 */	cmpw r10, r0
/* 80418994 004158D4  41 80 FE 9C */	blt .L_80418830
/* 80418998 004158D8  55 20 06 3F */	clrlwi. r0, r9, 0x18
/* 8041899C 004158DC  41 82 00 0C */	beq .L_804189A8
/* 804189A0 004158E0  D1 64 00 18 */	stfs f11, 0x18(r4)
/* 804189A4 004158E4  D1 84 00 1C */	stfs f12, 0x1c(r4)
.L_804189A8:
/* 804189A8 004158E8  38 21 00 20 */	addi r1, r1, 0x20
/* 804189AC 004158EC  4E 80 00 20 */	blr 
.endfn getCurrTri__Q23Sys11GridDividerFRQ24Game11CurrTriInfo

.fn findTriLists__Q23Sys11GridDividerFRQ23Sys6Sphere, global
/* 804189B0 004158F0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 804189B4 004158F4  7C 08 02 A6 */	mflr r0
/* 804189B8 004158F8  90 01 00 54 */	stw r0, 0x54(r1)
/* 804189BC 004158FC  BF 01 00 30 */	stmw r24, 0x30(r1)
/* 804189C0 00415900  7C 78 1B 78 */	mr r24, r3
/* 804189C4 00415904  3B 80 00 00 */	li r28, 0
/* 804189C8 00415908  C0 24 00 00 */	lfs f1, 0(r4)
/* 804189CC 0041590C  C0 84 00 0C */	lfs f4, 0xc(r4)
/* 804189D0 00415910  C0 64 00 08 */	lfs f3, 8(r4)
/* 804189D4 00415914  EC 01 20 28 */	fsubs f0, f1, f4
/* 804189D8 00415918  C0 A3 00 2C */	lfs f5, 0x2c(r3)
/* 804189DC 0041591C  EC 41 20 2A */	fadds f2, f1, f4
/* 804189E0 00415920  C0 C3 00 44 */	lfs f6, 0x44(r3)
/* 804189E4 00415924  EC 23 20 28 */	fsubs f1, f3, f4
/* 804189E8 00415928  C0 E3 00 34 */	lfs f7, 0x34(r3)
/* 804189EC 0041592C  EC 00 28 28 */	fsubs f0, f0, f5
/* 804189F0 00415930  C1 03 00 48 */	lfs f8, 0x48(r3)
/* 804189F4 00415934  EC 83 20 2A */	fadds f4, f3, f4
/* 804189F8 00415938  EC 21 38 28 */	fsubs f1, f1, f7
/* 804189FC 0041593C  EC 60 30 24 */	fdivs f3, f0, f6
/* 80418A00 00415940  EC A2 28 28 */	fsubs f5, f2, f5
/* 80418A04 00415944  EC 41 40 24 */	fdivs f2, f1, f8
/* 80418A08 00415948  EC 04 38 28 */	fsubs f0, f4, f7
/* 80418A0C 0041594C  EC 25 30 24 */	fdivs f1, f5, f6
/* 80418A10 00415950  EC 00 40 24 */	fdivs f0, f0, f8
/* 80418A14 00415954  FC 60 18 1E */	fctiwz f3, f3
/* 80418A18 00415958  FC 40 10 1E */	fctiwz f2, f2
/* 80418A1C 0041595C  FC 20 08 1E */	fctiwz f1, f1
/* 80418A20 00415960  D8 61 00 08 */	stfd f3, 8(r1)
/* 80418A24 00415964  FC 00 00 1E */	fctiwz f0, f0
/* 80418A28 00415968  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80418A2C 0041596C  D8 41 00 10 */	stfd f2, 0x10(r1)
/* 80418A30 00415970  2C 00 00 00 */	cmpwi r0, 0
/* 80418A34 00415974  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 80418A38 00415978  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80418A3C 0041597C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80418A40 00415980  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 80418A44 00415984  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 80418A48 00415988  40 80 00 0C */	bge .L_80418A54
/* 80418A4C 0041598C  38 00 00 00 */	li r0, 0
/* 80418A50 00415990  48 00 00 14 */	b .L_80418A64
.L_80418A54:
/* 80418A54 00415994  80 78 00 20 */	lwz r3, 0x20(r24)
/* 80418A58 00415998  7C 00 18 00 */	cmpw r0, r3
/* 80418A5C 0041599C  41 80 00 08 */	blt .L_80418A64
/* 80418A60 004159A0  38 03 FF FF */	addi r0, r3, -1
.L_80418A64:
/* 80418A64 004159A4  2C 04 00 00 */	cmpwi r4, 0
/* 80418A68 004159A8  40 80 00 0C */	bge .L_80418A74
/* 80418A6C 004159AC  3B E0 00 00 */	li r31, 0
/* 80418A70 004159B0  48 00 00 1C */	b .L_80418A8C
.L_80418A74:
/* 80418A74 004159B4  80 78 00 24 */	lwz r3, 0x24(r24)
/* 80418A78 004159B8  7C 04 18 00 */	cmpw r4, r3
/* 80418A7C 004159BC  41 80 00 0C */	blt .L_80418A88
/* 80418A80 004159C0  3B E3 FF FF */	addi r31, r3, -1
/* 80418A84 004159C4  48 00 00 08 */	b .L_80418A8C
.L_80418A88:
/* 80418A88 004159C8  7C 9F 23 78 */	mr r31, r4
.L_80418A8C:
/* 80418A8C 004159CC  2C 05 00 00 */	cmpwi r5, 0
/* 80418A90 004159D0  40 80 00 0C */	bge .L_80418A9C
/* 80418A94 004159D4  3B C0 00 00 */	li r30, 0
/* 80418A98 004159D8  48 00 00 1C */	b .L_80418AB4
.L_80418A9C:
/* 80418A9C 004159DC  80 78 00 20 */	lwz r3, 0x20(r24)
/* 80418AA0 004159E0  7C 05 18 00 */	cmpw r5, r3
/* 80418AA4 004159E4  41 80 00 0C */	blt .L_80418AB0
/* 80418AA8 004159E8  3B C3 FF FF */	addi r30, r3, -1
/* 80418AAC 004159EC  48 00 00 08 */	b .L_80418AB4
.L_80418AB0:
/* 80418AB0 004159F0  7C BE 2B 78 */	mr r30, r5
.L_80418AB4:
/* 80418AB4 004159F4  2C 06 00 00 */	cmpwi r6, 0
/* 80418AB8 004159F8  40 80 00 0C */	bge .L_80418AC4
/* 80418ABC 004159FC  3B A0 00 00 */	li r29, 0
/* 80418AC0 00415A00  48 00 00 1C */	b .L_80418ADC
.L_80418AC4:
/* 80418AC4 00415A04  80 78 00 24 */	lwz r3, 0x24(r24)
/* 80418AC8 00415A08  7C 06 18 00 */	cmpw r6, r3
/* 80418ACC 00415A0C  41 80 00 0C */	blt .L_80418AD8
/* 80418AD0 00415A10  3B A3 FF FF */	addi r29, r3, -1
/* 80418AD4 00415A14  48 00 00 08 */	b .L_80418ADC
.L_80418AD8:
/* 80418AD8 00415A18  7C DD 33 78 */	mr r29, r6
.L_80418ADC:
/* 80418ADC 00415A1C  7C 1A 03 78 */	mr r26, r0
/* 80418AE0 00415A20  3B 60 00 00 */	li r27, 0
/* 80418AE4 00415A24  48 00 00 CC */	b .L_80418BB0
.L_80418AE8:
/* 80418AE8 00415A28  7F F9 FB 78 */	mr r25, r31
/* 80418AEC 00415A2C  48 00 00 B8 */	b .L_80418BA4
.L_80418AF0:
/* 80418AF0 00415A30  2C 1A 00 00 */	cmpwi r26, 0
/* 80418AF4 00415A34  38 60 00 00 */	li r3, 0
/* 80418AF8 00415A38  41 80 00 28 */	blt .L_80418B20
/* 80418AFC 00415A3C  2C 19 00 00 */	cmpwi r25, 0
/* 80418B00 00415A40  41 80 00 20 */	blt .L_80418B20
/* 80418B04 00415A44  80 18 00 20 */	lwz r0, 0x20(r24)
/* 80418B08 00415A48  7C 1A 00 00 */	cmpw r26, r0
/* 80418B0C 00415A4C  40 80 00 14 */	bge .L_80418B20
/* 80418B10 00415A50  80 18 00 24 */	lwz r0, 0x24(r24)
/* 80418B14 00415A54  7C 19 00 00 */	cmpw r25, r0
/* 80418B18 00415A58  40 80 00 08 */	bge .L_80418B20
/* 80418B1C 00415A5C  38 60 00 01 */	li r3, 1
.L_80418B20:
/* 80418B20 00415A60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80418B24 00415A64  41 82 00 7C */	beq .L_80418BA0
/* 80418B28 00415A68  28 1B 00 00 */	cmplwi r27, 0
/* 80418B2C 00415A6C  41 82 00 40 */	beq .L_80418B6C
/* 80418B30 00415A70  80 98 00 24 */	lwz r4, 0x24(r24)
/* 80418B34 00415A74  38 00 00 00 */	li r0, 0
/* 80418B38 00415A78  80 B8 00 28 */	lwz r5, 0x28(r24)
/* 80418B3C 00415A7C  7F 63 DB 78 */	mr r3, r27
/* 80418B40 00415A80  7C 9A 21 D6 */	mullw r4, r26, r4
/* 80418B44 00415A84  7C 99 22 14 */	add r4, r25, r4
/* 80418B48 00415A88  1C 84 00 28 */	mulli r4, r4, 0x28
/* 80418B4C 00415A8C  7C 85 22 14 */	add r4, r5, r4
/* 80418B50 00415A90  90 04 00 10 */	stw r0, 0x10(r4)
/* 80418B54 00415A94  90 04 00 0C */	stw r0, 0xc(r4)
/* 80418B58 00415A98  90 04 00 08 */	stw r0, 8(r4)
/* 80418B5C 00415A9C  90 04 00 04 */	stw r0, 4(r4)
/* 80418B60 00415AA0  4B FF 89 79 */	bl concat__5CNodeFP5CNode
/* 80418B64 00415AA4  3B 9C 00 01 */	addi r28, r28, 1
/* 80418B68 00415AA8  48 00 00 38 */	b .L_80418BA0
.L_80418B6C:
/* 80418B6C 00415AAC  80 78 00 24 */	lwz r3, 0x24(r24)
/* 80418B70 00415AB0  38 00 00 00 */	li r0, 0
/* 80418B74 00415AB4  80 98 00 28 */	lwz r4, 0x28(r24)
/* 80418B78 00415AB8  3B 9C 00 01 */	addi r28, r28, 1
/* 80418B7C 00415ABC  7C 7A 19 D6 */	mullw r3, r26, r3
/* 80418B80 00415AC0  7C 79 1A 14 */	add r3, r25, r3
/* 80418B84 00415AC4  1C 63 00 28 */	mulli r3, r3, 0x28
/* 80418B88 00415AC8  7C 64 1A 14 */	add r3, r4, r3
/* 80418B8C 00415ACC  90 03 00 10 */	stw r0, 0x10(r3)
/* 80418B90 00415AD0  7C 7B 1B 78 */	mr r27, r3
/* 80418B94 00415AD4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80418B98 00415AD8  90 03 00 08 */	stw r0, 8(r3)
/* 80418B9C 00415ADC  90 03 00 04 */	stw r0, 4(r3)
.L_80418BA0:
/* 80418BA0 00415AE0  3B 39 00 01 */	addi r25, r25, 1
.L_80418BA4:
/* 80418BA4 00415AE4  7C 19 E8 00 */	cmpw r25, r29
/* 80418BA8 00415AE8  40 81 FF 48 */	ble .L_80418AF0
/* 80418BAC 00415AEC  3B 5A 00 01 */	addi r26, r26, 1
.L_80418BB0:
/* 80418BB0 00415AF0  7C 1A F0 00 */	cmpw r26, r30
/* 80418BB4 00415AF4  40 81 FF 34 */	ble .L_80418AE8
/* 80418BB8 00415AF8  2C 1C 00 32 */	cmpwi r28, 0x32
/* 80418BBC 00415AFC  40 81 00 0C */	ble .L_80418BC8
/* 80418BC0 00415B00  7F 63 DB 78 */	mr r3, r27
/* 80418BC4 00415B04  4B FF 88 F5 */	bl calcNextCount__5CNodeFv
.L_80418BC8:
/* 80418BC8 00415B08  7F 63 DB 78 */	mr r3, r27
/* 80418BCC 00415B0C  BB 01 00 30 */	lmw r24, 0x30(r1)
/* 80418BD0 00415B10  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80418BD4 00415B14  7C 08 03 A6 */	mtlr r0
/* 80418BD8 00415B18  38 21 00 50 */	addi r1, r1, 0x50
/* 80418BDC 00415B1C  4E 80 00 20 */	blr 
.endfn findTriLists__Q23Sys11GridDividerFRQ23Sys6Sphere

.fn create__Q23Sys11GridDividerFR8BoundBoxiiPQ23Sys11VertexTablePQ23Sys13TriangleTable, global
/* 80418BE0 00415B20  94 21 EF 80 */	stwu r1, -0x1080(r1)
/* 80418BE4 00415B24  7C 08 02 A6 */	mflr r0
/* 80418BE8 00415B28  90 01 10 84 */	stw r0, 0x1084(r1)
/* 80418BEC 00415B2C  38 00 10 78 */	li r0, 0x1078
/* 80418BF0 00415B30  DB E1 10 70 */	stfd f31, 0x1070(r1)
/* 80418BF4 00415B34  13 E1 00 0E */	psq_stx f31, r1, r0, 0, qr0
/* 80418BF8 00415B38  38 00 10 68 */	li r0, 0x1068
/* 80418BFC 00415B3C  DB C1 10 60 */	stfd f30, 0x1060(r1)
/* 80418C00 00415B40  13 C1 00 0E */	psq_stx f30, r1, r0, 0, qr0
/* 80418C04 00415B44  38 00 10 58 */	li r0, 0x1058
/* 80418C08 00415B48  DB A1 10 50 */	stfd f29, 0x1050(r1)
/* 80418C0C 00415B4C  13 A1 00 0E */	psq_stx f29, r1, r0, 0, qr0
/* 80418C10 00415B50  BE A1 10 24 */	stmw r21, 0x1024(r1)
/* 80418C14 00415B54  7C B9 2B 78 */	mr r25, r5
/* 80418C18 00415B58  7C DA 33 78 */	mr r26, r6
/* 80418C1C 00415B5C  7C 78 1B 78 */	mr r24, r3
/* 80418C20 00415B60  7C 95 23 78 */	mr r21, r4
/* 80418C24 00415B64  7F 79 D1 D6 */	mullw r27, r25, r26
/* 80418C28 00415B68  90 E3 00 18 */	stw r7, 0x18(r3)
/* 80418C2C 00415B6C  91 03 00 1C */	stw r8, 0x1c(r3)
/* 80418C30 00415B70  93 23 00 20 */	stw r25, 0x20(r3)
/* 80418C34 00415B74  1C 7B 00 28 */	mulli r3, r27, 0x28
/* 80418C38 00415B78  93 58 00 24 */	stw r26, 0x24(r24)
/* 80418C3C 00415B7C  38 63 00 10 */	addi r3, r3, 0x10
/* 80418C40 00415B80  4B C0 B3 6D */	bl __nwa__FUl
/* 80418C44 00415B84  3C 80 80 42 */	lis r4, __ct__Q23Sys12TriIndexListFv@ha
/* 80418C48 00415B88  3C A0 80 13 */	lis r5, __dt__Q23Sys12TriIndexListFv@ha
/* 80418C4C 00415B8C  38 84 90 3C */	addi r4, r4, __ct__Q23Sys12TriIndexListFv@l
/* 80418C50 00415B90  7F 67 DB 78 */	mr r7, r27
/* 80418C54 00415B94  38 A5 3E 64 */	addi r5, r5, __dt__Q23Sys12TriIndexListFv@l
/* 80418C58 00415B98  38 C0 00 28 */	li r6, 0x28
/* 80418C5C 00415B9C  4B CA 8D 95 */	bl __construct_new_array
/* 80418C60 00415BA0  90 78 00 28 */	stw r3, 0x28(r24)
/* 80418C64 00415BA4  3F C0 43 30 */	lis r30, 0x4330
/* 80418C68 00415BA8  6F 23 80 00 */	xoris r3, r25, 0x8000
/* 80418C6C 00415BAC  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 80418C70 00415BB0  C0 15 00 00 */	lfs f0, 0(r21)
/* 80418C74 00415BB4  3B 80 00 00 */	li r28, 0
/* 80418C78 00415BB8  90 61 10 0C */	stw r3, 0x100c(r1)
/* 80418C7C 00415BBC  CB E2 1F D0 */	lfd f31, lbl_80520330@sda21(r2)
/* 80418C80 00415BC0  D0 18 00 2C */	stfs f0, 0x2c(r24)
/* 80418C84 00415BC4  C3 A2 1F B8 */	lfs f29, lbl_80520318@sda21(r2)
/* 80418C88 00415BC8  C0 15 00 04 */	lfs f0, 4(r21)
/* 80418C8C 00415BCC  93 C1 10 08 */	stw r30, 0x1008(r1)
/* 80418C90 00415BD0  C3 C2 1F BC */	lfs f30, lbl_8052031C@sda21(r2)
/* 80418C94 00415BD4  D0 18 00 30 */	stfs f0, 0x30(r24)
/* 80418C98 00415BD8  C8 01 10 08 */	lfd f0, 0x1008(r1)
/* 80418C9C 00415BDC  C0 55 00 08 */	lfs f2, 8(r21)
/* 80418CA0 00415BE0  EC 20 F8 28 */	fsubs f1, f0, f31
/* 80418CA4 00415BE4  90 01 10 14 */	stw r0, 0x1014(r1)
/* 80418CA8 00415BE8  D0 58 00 34 */	stfs f2, 0x34(r24)
/* 80418CAC 00415BEC  C0 15 00 0C */	lfs f0, 0xc(r21)
/* 80418CB0 00415BF0  93 C1 10 10 */	stw r30, 0x1010(r1)
/* 80418CB4 00415BF4  D0 18 00 38 */	stfs f0, 0x38(r24)
/* 80418CB8 00415BF8  C8 01 10 10 */	lfd f0, 0x1010(r1)
/* 80418CBC 00415BFC  C0 55 00 10 */	lfs f2, 0x10(r21)
/* 80418CC0 00415C00  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80418CC4 00415C04  D0 58 00 3C */	stfs f2, 0x3c(r24)
/* 80418CC8 00415C08  C0 55 00 14 */	lfs f2, 0x14(r21)
/* 80418CCC 00415C0C  D0 58 00 40 */	stfs f2, 0x40(r24)
/* 80418CD0 00415C10  C0 75 00 0C */	lfs f3, 0xc(r21)
/* 80418CD4 00415C14  C0 55 00 00 */	lfs f2, 0(r21)
/* 80418CD8 00415C18  EC 43 10 28 */	fsubs f2, f3, f2
/* 80418CDC 00415C1C  FC 40 12 10 */	fabs f2, f2
/* 80418CE0 00415C20  FC 40 10 18 */	frsp f2, f2
/* 80418CE4 00415C24  EC 22 08 24 */	fdivs f1, f2, f1
/* 80418CE8 00415C28  D0 38 00 44 */	stfs f1, 0x44(r24)
/* 80418CEC 00415C2C  C0 55 00 14 */	lfs f2, 0x14(r21)
/* 80418CF0 00415C30  C0 35 00 08 */	lfs f1, 8(r21)
/* 80418CF4 00415C34  EC 22 08 28 */	fsubs f1, f2, f1
/* 80418CF8 00415C38  FC 20 0A 10 */	fabs f1, f1
/* 80418CFC 00415C3C  FC 20 08 18 */	frsp f1, f1
/* 80418D00 00415C40  EC 01 00 24 */	fdivs f0, f1, f0
/* 80418D04 00415C44  D0 18 00 48 */	stfs f0, 0x48(r24)
/* 80418D08 00415C48  48 00 02 F4 */	b .L_80418FFC
.L_80418D0C:
/* 80418D0C 00415C4C  6F 9F 80 00 */	xoris r31, r28, 0x8000
/* 80418D10 00415C50  3B 60 00 00 */	li r27, 0
/* 80418D14 00415C54  48 00 02 DC */	b .L_80418FF0
.L_80418D18:
/* 80418D18 00415C58  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 80418D1C 00415C5C  38 A0 00 00 */	li r5, 0
/* 80418D20 00415C60  93 E1 10 14 */	stw r31, 0x1014(r1)
/* 80418D24 00415C64  7C A3 2B 78 */	mr r3, r5
/* 80418D28 00415C68  C0 98 00 44 */	lfs f4, 0x44(r24)
/* 80418D2C 00415C6C  3B A0 00 00 */	li r29, 0
/* 80418D30 00415C70  93 C1 10 10 */	stw r30, 0x1010(r1)
/* 80418D34 00415C74  38 80 00 00 */	li r4, 0
/* 80418D38 00415C78  C0 58 00 2C */	lfs f2, 0x2c(r24)
/* 80418D3C 00415C7C  C8 01 10 10 */	lfd f0, 0x1010(r1)
/* 80418D40 00415C80  90 01 10 0C */	stw r0, 0x100c(r1)
/* 80418D44 00415C84  EC 60 F8 28 */	fsubs f3, f0, f31
/* 80418D48 00415C88  C0 B8 00 48 */	lfs f5, 0x48(r24)
/* 80418D4C 00415C8C  93 C1 10 08 */	stw r30, 0x1008(r1)
/* 80418D50 00415C90  C0 18 00 34 */	lfs f0, 0x34(r24)
/* 80418D54 00415C94  C8 21 10 08 */	lfd f1, 0x1008(r1)
/* 80418D58 00415C98  EC 43 11 3A */	fmadds f2, f3, f4, f2
/* 80418D5C 00415C9C  EC 21 F8 28 */	fsubs f1, f1, f31
/* 80418D60 00415CA0  EC 62 20 2A */	fadds f3, f2, f4
/* 80418D64 00415CA4  EC 01 01 7A */	fmadds f0, f1, f5, f0
/* 80418D68 00415CA8  EC 20 28 2A */	fadds f1, f0, f5
/* 80418D6C 00415CAC  48 00 02 04 */	b .L_80418F70
.L_80418D70:
/* 80418D70 00415CB0  80 06 00 24 */	lwz r0, 0x24(r6)
/* 80418D74 00415CB4  80 D8 00 18 */	lwz r6, 0x18(r24)
/* 80418D78 00415CB8  7C E0 1A 14 */	add r7, r0, r3
/* 80418D7C 00415CBC  C0 82 1F B8 */	lfs f4, lbl_80520318@sda21(r2)
/* 80418D80 00415CC0  80 07 00 00 */	lwz r0, 0(r7)
/* 80418D84 00415CC4  C0 C2 1F BC */	lfs f6, lbl_8052031C@sda21(r2)
/* 80418D88 00415CC8  FC A0 20 90 */	fmr f5, f4
/* 80418D8C 00415CCC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80418D90 00415CD0  81 06 00 24 */	lwz r8, 0x24(r6)
/* 80418D94 00415CD4  FC E0 30 90 */	fmr f7, f6
/* 80418D98 00415CD8  7C C8 02 14 */	add r6, r8, r0
/* 80418D9C 00415CDC  C1 06 00 00 */	lfs f8, 0(r6)
/* 80418DA0 00415CE0  FC 04 40 40 */	fcmpo cr0, f4, f8
/* 80418DA4 00415CE4  40 81 00 08 */	ble .L_80418DAC
/* 80418DA8 00415CE8  FC 80 40 90 */	fmr f4, f8
.L_80418DAC:
/* 80418DAC 00415CEC  C1 26 00 08 */	lfs f9, 8(r6)
/* 80418DB0 00415CF0  FC 1D 48 40 */	fcmpo cr0, f29, f9
/* 80418DB4 00415CF4  40 81 00 08 */	ble .L_80418DBC
/* 80418DB8 00415CF8  FC A0 48 90 */	fmr f5, f9
.L_80418DBC:
/* 80418DBC 00415CFC  FC 1E 40 40 */	fcmpo cr0, f30, f8
/* 80418DC0 00415D00  40 80 00 08 */	bge .L_80418DC8
/* 80418DC4 00415D04  FC C0 40 90 */	fmr f6, f8
.L_80418DC8:
/* 80418DC8 00415D08  FC 1E 48 40 */	fcmpo cr0, f30, f9
/* 80418DCC 00415D0C  40 80 00 08 */	bge .L_80418DD4
/* 80418DD0 00415D10  FC E0 48 90 */	fmr f7, f9
.L_80418DD4:
/* 80418DD4 00415D14  80 07 00 04 */	lwz r0, 4(r7)
/* 80418DD8 00415D18  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80418DDC 00415D1C  7C C8 02 14 */	add r6, r8, r0
/* 80418DE0 00415D20  C1 06 00 00 */	lfs f8, 0(r6)
/* 80418DE4 00415D24  FC 04 40 40 */	fcmpo cr0, f4, f8
/* 80418DE8 00415D28  40 81 00 08 */	ble .L_80418DF0
/* 80418DEC 00415D2C  FC 80 40 90 */	fmr f4, f8
.L_80418DF0:
/* 80418DF0 00415D30  C1 26 00 08 */	lfs f9, 8(r6)
/* 80418DF4 00415D34  FC 05 48 40 */	fcmpo cr0, f5, f9
/* 80418DF8 00415D38  40 81 00 08 */	ble .L_80418E00
/* 80418DFC 00415D3C  FC A0 48 90 */	fmr f5, f9
.L_80418E00:
/* 80418E00 00415D40  FC 06 40 40 */	fcmpo cr0, f6, f8
/* 80418E04 00415D44  40 80 00 08 */	bge .L_80418E0C
/* 80418E08 00415D48  FC C0 40 90 */	fmr f6, f8
.L_80418E0C:
/* 80418E0C 00415D4C  FC 07 48 40 */	fcmpo cr0, f7, f9
/* 80418E10 00415D50  40 80 00 08 */	bge .L_80418E18
/* 80418E14 00415D54  FC E0 48 90 */	fmr f7, f9
.L_80418E18:
/* 80418E18 00415D58  80 07 00 08 */	lwz r0, 8(r7)
/* 80418E1C 00415D5C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80418E20 00415D60  7C C8 02 14 */	add r6, r8, r0
/* 80418E24 00415D64  C1 06 00 00 */	lfs f8, 0(r6)
/* 80418E28 00415D68  FC 04 40 40 */	fcmpo cr0, f4, f8
/* 80418E2C 00415D6C  40 81 00 08 */	ble .L_80418E34
/* 80418E30 00415D70  FC 80 40 90 */	fmr f4, f8
.L_80418E34:
/* 80418E34 00415D74  C1 26 00 08 */	lfs f9, 8(r6)
/* 80418E38 00415D78  FC 05 48 40 */	fcmpo cr0, f5, f9
/* 80418E3C 00415D7C  40 81 00 08 */	ble .L_80418E44
/* 80418E40 00415D80  FC A0 48 90 */	fmr f5, f9
.L_80418E44:
/* 80418E44 00415D84  FC 06 40 40 */	fcmpo cr0, f6, f8
/* 80418E48 00415D88  40 80 00 08 */	bge .L_80418E50
/* 80418E4C 00415D8C  FC C0 40 90 */	fmr f6, f8
.L_80418E50:
/* 80418E50 00415D90  FC 07 48 40 */	fcmpo cr0, f7, f9
/* 80418E54 00415D94  40 80 00 08 */	bge .L_80418E5C
/* 80418E58 00415D98  FC E0 48 90 */	fmr f7, f9
.L_80418E5C:
/* 80418E5C 00415D9C  FC 03 20 40 */	fcmpo cr0, f3, f4
/* 80418E60 00415DA0  40 80 00 0C */	bge .L_80418E6C
/* 80418E64 00415DA4  38 00 00 00 */	li r0, 0
/* 80418E68 00415DA8  48 00 00 58 */	b .L_80418EC0
.L_80418E6C:
/* 80418E6C 00415DAC  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 80418E70 00415DB0  40 80 00 0C */	bge .L_80418E7C
/* 80418E74 00415DB4  38 00 00 00 */	li r0, 0
/* 80418E78 00415DB8  48 00 00 48 */	b .L_80418EC0
.L_80418E7C:
/* 80418E7C 00415DBC  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 80418E80 00415DC0  4C 40 13 82 */	cror 2, 0, 2
/* 80418E84 00415DC4  40 82 00 18 */	bne .L_80418E9C
/* 80418E88 00415DC8  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80418E8C 00415DCC  4C 40 13 82 */	cror 2, 0, 2
/* 80418E90 00415DD0  40 82 00 0C */	bne .L_80418E9C
/* 80418E94 00415DD4  38 00 00 01 */	li r0, 1
/* 80418E98 00415DD8  48 00 00 28 */	b .L_80418EC0
.L_80418E9C:
/* 80418E9C 00415DDC  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 80418EA0 00415DE0  4C 40 13 82 */	cror 2, 0, 2
/* 80418EA4 00415DE4  40 82 00 18 */	bne .L_80418EBC
/* 80418EA8 00415DE8  FC 02 30 40 */	fcmpo cr0, f2, f6
/* 80418EAC 00415DEC  4C 40 13 82 */	cror 2, 0, 2
/* 80418EB0 00415DF0  40 82 00 0C */	bne .L_80418EBC
/* 80418EB4 00415DF4  38 00 00 01 */	li r0, 1
/* 80418EB8 00415DF8  48 00 00 08 */	b .L_80418EC0
.L_80418EBC:
/* 80418EBC 00415DFC  38 00 00 00 */	li r0, 0
.L_80418EC0:
/* 80418EC0 00415E00  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80418EC4 00415E04  40 82 00 0C */	bne .L_80418ED0
/* 80418EC8 00415E08  38 00 00 00 */	li r0, 0
/* 80418ECC 00415E0C  48 00 00 7C */	b .L_80418F48
.L_80418ED0:
/* 80418ED0 00415E10  FC 01 28 40 */	fcmpo cr0, f1, f5
/* 80418ED4 00415E14  40 80 00 0C */	bge .L_80418EE0
/* 80418ED8 00415E18  38 00 00 00 */	li r0, 0
/* 80418EDC 00415E1C  48 00 00 58 */	b .L_80418F34
.L_80418EE0:
/* 80418EE0 00415E20  FC 07 00 40 */	fcmpo cr0, f7, f0
/* 80418EE4 00415E24  40 80 00 0C */	bge .L_80418EF0
/* 80418EE8 00415E28  38 00 00 00 */	li r0, 0
/* 80418EEC 00415E2C  48 00 00 48 */	b .L_80418F34
.L_80418EF0:
/* 80418EF0 00415E30  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 80418EF4 00415E34  4C 40 13 82 */	cror 2, 0, 2
/* 80418EF8 00415E38  40 82 00 18 */	bne .L_80418F10
/* 80418EFC 00415E3C  FC 05 08 40 */	fcmpo cr0, f5, f1
/* 80418F00 00415E40  4C 40 13 82 */	cror 2, 0, 2
/* 80418F04 00415E44  40 82 00 0C */	bne .L_80418F10
/* 80418F08 00415E48  38 00 00 01 */	li r0, 1
/* 80418F0C 00415E4C  48 00 00 28 */	b .L_80418F34
.L_80418F10:
/* 80418F10 00415E50  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80418F14 00415E54  4C 40 13 82 */	cror 2, 0, 2
/* 80418F18 00415E58  40 82 00 18 */	bne .L_80418F30
/* 80418F1C 00415E5C  FC 00 38 40 */	fcmpo cr0, f0, f7
/* 80418F20 00415E60  4C 40 13 82 */	cror 2, 0, 2
/* 80418F24 00415E64  40 82 00 0C */	bne .L_80418F30
/* 80418F28 00415E68  38 00 00 01 */	li r0, 1
/* 80418F2C 00415E6C  48 00 00 08 */	b .L_80418F34
.L_80418F30:
/* 80418F30 00415E70  38 00 00 00 */	li r0, 0
.L_80418F34:
/* 80418F34 00415E74  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80418F38 00415E78  40 82 00 0C */	bne .L_80418F44
/* 80418F3C 00415E7C  38 00 00 00 */	li r0, 0
/* 80418F40 00415E80  48 00 00 08 */	b .L_80418F48
.L_80418F44:
/* 80418F44 00415E84  38 00 00 01 */	li r0, 1
.L_80418F48:
/* 80418F48 00415E88  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80418F4C 00415E8C  41 82 00 1C */	beq .L_80418F68
/* 80418F50 00415E90  2C 1D 04 00 */	cmpwi r29, 0x400
/* 80418F54 00415E94  40 80 00 14 */	bge .L_80418F68
/* 80418F58 00415E98  38 C1 00 08 */	addi r6, r1, 8
/* 80418F5C 00415E9C  3B BD 00 01 */	addi r29, r29, 1
/* 80418F60 00415EA0  7C 86 29 2E */	stwx r4, r6, r5
/* 80418F64 00415EA4  38 A5 00 04 */	addi r5, r5, 4
.L_80418F68:
/* 80418F68 00415EA8  38 63 00 60 */	addi r3, r3, 0x60
/* 80418F6C 00415EAC  38 84 00 01 */	addi r4, r4, 1
.L_80418F70:
/* 80418F70 00415EB0  80 D8 00 1C */	lwz r6, 0x1c(r24)
/* 80418F74 00415EB4  80 06 00 1C */	lwz r0, 0x1c(r6)
/* 80418F78 00415EB8  7C 04 00 00 */	cmpw r4, r0
/* 80418F7C 00415EBC  41 80 FD F4 */	blt .L_80418D70
/* 80418F80 00415EC0  80 18 00 24 */	lwz r0, 0x24(r24)
/* 80418F84 00415EC4  2C 1D 00 00 */	cmpwi r29, 0
/* 80418F88 00415EC8  80 78 00 28 */	lwz r3, 0x28(r24)
/* 80418F8C 00415ECC  7C 1C 01 D6 */	mullw r0, r28, r0
/* 80418F90 00415ED0  7C 1B 02 14 */	add r0, r27, r0
/* 80418F94 00415ED4  1C 00 00 28 */	mulli r0, r0, 0x28
/* 80418F98 00415ED8  7E E3 02 14 */	add r23, r3, r0
/* 80418F9C 00415EDC  40 81 00 50 */	ble .L_80418FEC
/* 80418FA0 00415EE0  7E E3 BB 78 */	mr r3, r23
/* 80418FA4 00415EE4  7F A4 EB 78 */	mr r4, r29
/* 80418FA8 00415EE8  81 97 00 00 */	lwz r12, 0(r23)
/* 80418FAC 00415EEC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80418FB0 00415EF0  7D 89 03 A6 */	mtctr r12
/* 80418FB4 00415EF4  4E 80 04 21 */	bctrl 
/* 80418FB8 00415EF8  3A C1 00 08 */	addi r22, r1, 8
/* 80418FBC 00415EFC  3A A0 00 00 */	li r21, 0
/* 80418FC0 00415F00  48 00 00 24 */	b .L_80418FE4
.L_80418FC4:
/* 80418FC4 00415F04  7E E3 BB 78 */	mr r3, r23
/* 80418FC8 00415F08  7E C4 B3 78 */	mr r4, r22
/* 80418FCC 00415F0C  81 97 00 00 */	lwz r12, 0(r23)
/* 80418FD0 00415F10  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80418FD4 00415F14  7D 89 03 A6 */	mtctr r12
/* 80418FD8 00415F18  4E 80 04 21 */	bctrl 
/* 80418FDC 00415F1C  3A D6 00 04 */	addi r22, r22, 4
/* 80418FE0 00415F20  3A B5 00 01 */	addi r21, r21, 1
.L_80418FE4:
/* 80418FE4 00415F24  7C 15 E8 00 */	cmpw r21, r29
/* 80418FE8 00415F28  41 80 FF DC */	blt .L_80418FC4
.L_80418FEC:
/* 80418FEC 00415F2C  3B 7B 00 01 */	addi r27, r27, 1
.L_80418FF0:
/* 80418FF0 00415F30  7C 1B D0 00 */	cmpw r27, r26
/* 80418FF4 00415F34  41 80 FD 24 */	blt .L_80418D18
/* 80418FF8 00415F38  3B 9C 00 01 */	addi r28, r28, 1
.L_80418FFC:
/* 80418FFC 00415F3C  7C 1C C8 00 */	cmpw r28, r25
/* 80419000 00415F40  41 80 FD 0C */	blt .L_80418D0C
/* 80419004 00415F44  38 00 10 78 */	li r0, 0x1078
/* 80419008 00415F48  13 E1 00 0C */	psq_lx f31, r1, r0, 0, qr0
/* 8041900C 00415F4C  CB E1 10 70 */	lfd f31, 0x1070(r1)
/* 80419010 00415F50  38 00 10 68 */	li r0, 0x1068
/* 80419014 00415F54  13 C1 00 0C */	psq_lx f30, r1, r0, 0, qr0
/* 80419018 00415F58  CB C1 10 60 */	lfd f30, 0x1060(r1)
/* 8041901C 00415F5C  38 00 10 58 */	li r0, 0x1058
/* 80419020 00415F60  13 A1 00 0C */	psq_lx f29, r1, r0, 0, qr0
/* 80419024 00415F64  CB A1 10 50 */	lfd f29, 0x1050(r1)
/* 80419028 00415F68  BA A1 10 24 */	lmw r21, 0x1024(r1)
/* 8041902C 00415F6C  80 01 10 84 */	lwz r0, 0x1084(r1)
/* 80419030 00415F70  7C 08 03 A6 */	mtlr r0
/* 80419034 00415F74  38 21 10 80 */	addi r1, r1, 0x1080
/* 80419038 00415F78  4E 80 00 20 */	blr 
.endfn create__Q23Sys11GridDividerFR8BoundBoxiiPQ23Sys11VertexTablePQ23Sys13TriangleTable

.fn __ct__Q23Sys12TriIndexListFv, weak
/* 8041903C 00415F7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419040 00415F80  7C 08 02 A6 */	mflr r0
/* 80419044 00415F84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419048 00415F88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041904C 00415F8C  7C 7F 1B 78 */	mr r31, r3
/* 80419050 00415F90  4B FF 83 41 */	bl __ct__5CNodeFv
/* 80419054 00415F94  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80419058 00415F98  3C 60 80 4B */	lis r3, "__vt__12Container<i>"@ha
/* 8041905C 00415F9C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80419060 00415FA0  3C A0 80 4B */	lis r5, "__vt__17ArrayContainer<i>"@ha
/* 80419064 00415FA4  90 1F 00 00 */	stw r0, 0(r31)
/* 80419068 00415FA8  38 03 FE E0 */	addi r0, r3, "__vt__12Container<i>"@l
/* 8041906C 00415FAC  3C 80 80 4B */	lis r4, __vt__Q23Sys9IndexList@ha
/* 80419070 00415FB0  3C 60 80 4B */	lis r3, __vt__Q23Sys12TriIndexList@ha
/* 80419074 00415FB4  90 1F 00 00 */	stw r0, 0(r31)
/* 80419078 00415FB8  38 E0 00 00 */	li r7, 0
/* 8041907C 00415FBC  38 C5 FF 0C */	addi r6, r5, "__vt__17ArrayContainer<i>"@l
/* 80419080 00415FC0  38 A0 00 01 */	li r5, 1
/* 80419084 00415FC4  98 FF 00 18 */	stb r7, 0x18(r31)
/* 80419088 00415FC8  38 84 FF 54 */	addi r4, r4, __vt__Q23Sys9IndexList@l
/* 8041908C 00415FCC  38 03 FF 9C */	addi r0, r3, __vt__Q23Sys12TriIndexList@l
/* 80419090 00415FD0  7F E3 FB 78 */	mr r3, r31
/* 80419094 00415FD4  90 DF 00 00 */	stw r6, 0(r31)
/* 80419098 00415FD8  98 BF 00 18 */	stb r5, 0x18(r31)
/* 8041909C 00415FDC  90 FF 00 20 */	stw r7, 0x20(r31)
/* 804190A0 00415FE0  90 FF 00 1C */	stw r7, 0x1c(r31)
/* 804190A4 00415FE4  90 FF 00 24 */	stw r7, 0x24(r31)
/* 804190A8 00415FE8  90 9F 00 00 */	stw r4, 0(r31)
/* 804190AC 00415FEC  90 1F 00 00 */	stw r0, 0(r31)
/* 804190B0 00415FF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804190B4 00415FF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804190B8 00415FF8  7C 08 03 A6 */	mtlr r0
/* 804190BC 00415FFC  38 21 00 10 */	addi r1, r1, 0x10
/* 804190C0 00416000  4E 80 00 20 */	blr 
.endfn __ct__Q23Sys12TriIndexListFv

.fn write__31ArrayContainer<Q23Sys8Triangle>FR6Stream, weak
/* 804190C4 00416004  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804190C8 00416008  7C 08 02 A6 */	mflr r0
/* 804190CC 0041600C  90 01 00 24 */	stw r0, 0x24(r1)
/* 804190D0 00416010  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 804190D4 00416014  7C 9C 23 78 */	mr r28, r4
/* 804190D8 00416018  7C 7B 1B 78 */	mr r27, r3
/* 804190DC 0041601C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 804190E0 00416020  7F 83 E3 78 */	mr r3, r28
/* 804190E4 00416024  4B FF AF 39 */	bl textBeginGroup__6StreamFPc
/* 804190E8 00416028  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 804190EC 0041602C  7F 83 E3 78 */	mr r3, r28
/* 804190F0 00416030  4B FF B3 45 */	bl textWriteTab__6StreamFi
/* 804190F4 00416034  80 9B 00 20 */	lwz r4, 0x20(r27)
/* 804190F8 00416038  7F 83 E3 78 */	mr r3, r28
/* 804190FC 0041603C  4B FF C6 C5 */	bl writeInt__6StreamFi
/* 80419100 00416040  7F 83 E3 78 */	mr r3, r28
/* 80419104 00416044  38 82 1F D8 */	addi r4, r2, lbl_80520338@sda21
/* 80419108 00416048  4C C6 31 82 */	crclr 6
/* 8041910C 0041604C  4B FF B0 D1 */	bl textWriteText__6StreamFPce
/* 80419110 00416050  3C 60 80 4A */	lis r3, lbl_804997A8@ha
/* 80419114 00416054  3B A0 00 00 */	li r29, 0
/* 80419118 00416058  3B E3 97 A8 */	addi r31, r3, lbl_804997A8@l
/* 8041911C 0041605C  3B C0 00 00 */	li r30, 0
/* 80419120 00416060  48 00 00 50 */	b .L_80419170
.L_80419124:
/* 80419124 00416064  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 80419128 00416068  7F 83 E3 78 */	mr r3, r28
/* 8041912C 0041606C  4B FF B3 09 */	bl textWriteTab__6StreamFi
/* 80419130 00416070  7F 63 DB 78 */	mr r3, r27
/* 80419134 00416074  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 80419138 00416078  81 9B 00 00 */	lwz r12, 0(r27)
/* 8041913C 0041607C  7F 84 E3 78 */	mr r4, r28
/* 80419140 00416080  7C A0 F2 14 */	add r5, r0, r30
/* 80419144 00416084  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80419148 00416088  7D 89 03 A6 */	mtctr r12
/* 8041914C 0041608C  4E 80 04 21 */	bctrl 
/* 80419150 00416090  80 DB 00 20 */	lwz r6, 0x20(r27)
/* 80419154 00416094  7F 83 E3 78 */	mr r3, r28
/* 80419158 00416098  7F E4 FB 78 */	mr r4, r31
/* 8041915C 0041609C  7F A5 EB 78 */	mr r5, r29
/* 80419160 004160A0  4C C6 31 82 */	crclr 6
/* 80419164 004160A4  4B FF B0 79 */	bl textWriteText__6StreamFPce
/* 80419168 004160A8  3B DE 00 60 */	addi r30, r30, 0x60
/* 8041916C 004160AC  3B BD 00 01 */	addi r29, r29, 1
.L_80419170:
/* 80419170 004160B0  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 80419174 004160B4  7C 1D 00 00 */	cmpw r29, r0
/* 80419178 004160B8  41 80 FF AC */	blt .L_80419124
/* 8041917C 004160BC  7F 83 E3 78 */	mr r3, r28
/* 80419180 004160C0  4B FF AF 21 */	bl textEndGroup__6StreamFv
/* 80419184 004160C4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80419188 004160C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041918C 004160CC  7C 08 03 A6 */	mtlr r0
/* 80419190 004160D0  38 21 00 20 */	addi r1, r1, 0x20
/* 80419194 004160D4  4E 80 00 20 */	blr 
.endfn write__31ArrayContainer<Q23Sys8Triangle>FR6Stream

.fn writeObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle, weak
/* 80419198 004160D8  4E 80 00 20 */	blr 
.endfn writeObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle

.fn read__Q23Sys11GridDividerFR6Stream, global
/* 8041919C 004160DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 804191A0 004160E0  7C 08 02 A6 */	mflr r0
/* 804191A4 004160E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 804191A8 004160E8  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 804191AC 004160EC  7C 7E 1B 78 */	mr r30, r3
/* 804191B0 004160F0  7C 9F 23 78 */	mr r31, r4
/* 804191B4 004160F4  38 60 00 50 */	li r3, 0x50
/* 804191B8 004160F8  4B C0 AC ED */	bl __nw__FUl
/* 804191BC 004160FC  7C 7D 1B 79 */	or. r29, r3, r3
/* 804191C0 00416100  41 82 00 74 */	beq .L_80419234
/* 804191C4 00416104  4B FF 81 CD */	bl __ct__5CNodeFv
/* 804191C8 00416108  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 804191CC 0041610C  3C 60 80 4B */	lis r3, "__vt__23Container<10Vector3<f>>"@ha
/* 804191D0 00416110  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 804191D4 00416114  3C 80 80 4B */	lis r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
/* 804191D8 00416118  90 1D 00 00 */	stw r0, 0(r29)
/* 804191DC 0041611C  38 03 00 2C */	addi r0, r3, "__vt__23Container<10Vector3<f>>"@l
/* 804191E0 00416120  3C 60 80 4F */	lis r3, __vt__Q23Sys11VertexTable@ha
/* 804191E4 00416124  38 C0 00 00 */	li r6, 0
/* 804191E8 00416128  90 1D 00 00 */	stw r0, 0(r29)
/* 804191EC 0041612C  38 A4 FF E4 */	addi r5, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
/* 804191F0 00416130  38 80 00 01 */	li r4, 1
/* 804191F4 00416134  38 03 B5 C0 */	addi r0, r3, __vt__Q23Sys11VertexTable@l
/* 804191F8 00416138  98 DD 00 18 */	stb r6, 0x18(r29)
/* 804191FC 0041613C  C0 22 1F DC */	lfs f1, lbl_8052033C@sda21(r2)
/* 80419200 00416140  90 BD 00 00 */	stw r5, 0(r29)
/* 80419204 00416144  C0 02 1F E0 */	lfs f0, lbl_80520340@sda21(r2)
/* 80419208 00416148  98 9D 00 18 */	stb r4, 0x18(r29)
/* 8041920C 0041614C  90 DD 00 20 */	stw r6, 0x20(r29)
/* 80419210 00416150  90 DD 00 1C */	stw r6, 0x1c(r29)
/* 80419214 00416154  90 DD 00 24 */	stw r6, 0x24(r29)
/* 80419218 00416158  90 1D 00 00 */	stw r0, 0(r29)
/* 8041921C 0041615C  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 80419220 00416160  D0 3D 00 2C */	stfs f1, 0x2c(r29)
/* 80419224 00416164  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 80419228 00416168  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 8041922C 0041616C  D0 1D 00 38 */	stfs f0, 0x38(r29)
/* 80419230 00416170  D0 1D 00 3C */	stfs f0, 0x3c(r29)
.L_80419234:
/* 80419234 00416174  93 BE 00 18 */	stw r29, 0x18(r30)
/* 80419238 00416178  7F E4 FB 78 */	mr r4, r31
/* 8041923C 0041617C  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80419240 00416180  81 83 00 00 */	lwz r12, 0(r3)
/* 80419244 00416184  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80419248 00416188  7D 89 03 A6 */	mtctr r12
/* 8041924C 0041618C  4E 80 04 21 */	bctrl 
/* 80419250 00416190  38 60 00 28 */	li r3, 0x28
/* 80419254 00416194  4B C0 AC 51 */	bl __nw__FUl
/* 80419258 00416198  7C 60 1B 79 */	or. r0, r3, r3
/* 8041925C 0041619C  41 82 00 0C */	beq .L_80419268
/* 80419260 004161A0  48 00 07 1D */	bl __ct__Q23Sys13TriangleTableFv
/* 80419264 004161A4  7C 60 1B 78 */	mr r0, r3
.L_80419268:
/* 80419268 004161A8  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 8041926C 004161AC  7F E4 FB 78 */	mr r4, r31
/* 80419270 004161B0  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 80419274 004161B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80419278 004161B8  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8041927C 004161BC  7D 89 03 A6 */	mtctr r12
/* 80419280 004161C0  4E 80 04 21 */	bctrl 
/* 80419284 004161C4  7F E4 FB 78 */	mr r4, r31
/* 80419288 004161C8  38 7E 00 2C */	addi r3, r30, 0x2c
/* 8041928C 004161CC  4B FF 86 C1 */	bl read__8BoundBoxFR6Stream
/* 80419290 004161D0  7F E3 FB 78 */	mr r3, r31
/* 80419294 004161D4  4B FF B7 FD */	bl readInt__6StreamFv
/* 80419298 004161D8  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8041929C 004161DC  7F E3 FB 78 */	mr r3, r31
/* 804192A0 004161E0  4B FF B7 F1 */	bl readInt__6StreamFv
/* 804192A4 004161E4  90 7E 00 24 */	stw r3, 0x24(r30)
/* 804192A8 004161E8  7F E3 FB 78 */	mr r3, r31
/* 804192AC 004161EC  4B FF BB 01 */	bl readFloat__6StreamFv
/* 804192B0 004161F0  D0 3E 00 44 */	stfs f1, 0x44(r30)
/* 804192B4 004161F4  7F E3 FB 78 */	mr r3, r31
/* 804192B8 004161F8  4B FF BA F5 */	bl readFloat__6StreamFv
/* 804192BC 004161FC  D0 3E 00 48 */	stfs f1, 0x48(r30)
/* 804192C0 00416200  83 7E 00 24 */	lwz r27, 0x24(r30)
/* 804192C4 00416204  83 9E 00 20 */	lwz r28, 0x20(r30)
/* 804192C8 00416208  7F BC D9 D6 */	mullw r29, r28, r27
/* 804192CC 0041620C  1C 7D 00 28 */	mulli r3, r29, 0x28
/* 804192D0 00416210  38 63 00 10 */	addi r3, r3, 0x10
/* 804192D4 00416214  4B C0 AC D9 */	bl __nwa__FUl
/* 804192D8 00416218  3C 80 80 42 */	lis r4, __ct__Q23Sys12TriIndexListFv@ha
/* 804192DC 0041621C  3C A0 80 13 */	lis r5, __dt__Q23Sys12TriIndexListFv@ha
/* 804192E0 00416220  38 84 90 3C */	addi r4, r4, __ct__Q23Sys12TriIndexListFv@l
/* 804192E4 00416224  7F A7 EB 78 */	mr r7, r29
/* 804192E8 00416228  38 A5 3E 64 */	addi r5, r5, __dt__Q23Sys12TriIndexListFv@l
/* 804192EC 0041622C  38 C0 00 28 */	li r6, 0x28
/* 804192F0 00416230  4B CA 87 01 */	bl __construct_new_array
/* 804192F4 00416234  90 7E 00 28 */	stw r3, 0x28(r30)
/* 804192F8 00416238  3C 60 43 30 */	lis r3, 0x4330
/* 804192FC 0041623C  6F 84 80 00 */	xoris r4, r28, 0x8000
/* 80419300 00416240  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 80419304 00416244  C0 1E 00 2C */	lfs f0, 0x2c(r30)
/* 80419308 00416248  3B A0 00 00 */	li r29, 0
/* 8041930C 0041624C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80419310 00416250  7F BB EB 78 */	mr r27, r29
/* 80419314 00416254  C8 42 1F D0 */	lfd f2, lbl_80520330@sda21(r2)
/* 80419318 00416258  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 8041931C 0041625C  C0 1E 00 30 */	lfs f0, 0x30(r30)
/* 80419320 00416260  90 61 00 08 */	stw r3, 8(r1)
/* 80419324 00416264  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 80419328 00416268  C8 01 00 08 */	lfd f0, 8(r1)
/* 8041932C 0041626C  C0 7E 00 34 */	lfs f3, 0x34(r30)
/* 80419330 00416270  EC 20 10 28 */	fsubs f1, f0, f2
/* 80419334 00416274  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419338 00416278  D0 7E 00 34 */	stfs f3, 0x34(r30)
/* 8041933C 0041627C  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 80419340 00416280  90 61 00 10 */	stw r3, 0x10(r1)
/* 80419344 00416284  D0 1E 00 38 */	stfs f0, 0x38(r30)
/* 80419348 00416288  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8041934C 0041628C  C0 7E 00 38 */	lfs f3, 0x38(r30)
/* 80419350 00416290  EC 00 10 28 */	fsubs f0, f0, f2
/* 80419354 00416294  C0 5E 00 2C */	lfs f2, 0x2c(r30)
/* 80419358 00416298  EC 43 10 28 */	fsubs f2, f3, f2
/* 8041935C 0041629C  FC 40 12 10 */	fabs f2, f2
/* 80419360 004162A0  FC 40 10 18 */	frsp f2, f2
/* 80419364 004162A4  EC 22 08 24 */	fdivs f1, f2, f1
/* 80419368 004162A8  D0 3E 00 44 */	stfs f1, 0x44(r30)
/* 8041936C 004162AC  C0 5E 00 40 */	lfs f2, 0x40(r30)
/* 80419370 004162B0  C0 3E 00 34 */	lfs f1, 0x34(r30)
/* 80419374 004162B4  EC 22 08 28 */	fsubs f1, f2, f1
/* 80419378 004162B8  FC 20 0A 10 */	fabs f1, f1
/* 8041937C 004162BC  FC 20 08 18 */	frsp f1, f1
/* 80419380 004162C0  EC 01 00 24 */	fdivs f0, f1, f0
/* 80419384 004162C4  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 80419388 004162C8  48 00 00 28 */	b .L_804193B0
.L_8041938C:
/* 8041938C 004162CC  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 80419390 004162D0  7F E4 FB 78 */	mr r4, r31
/* 80419394 004162D4  7C 60 DA 14 */	add r3, r0, r27
/* 80419398 004162D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8041939C 004162DC  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 804193A0 004162E0  7D 89 03 A6 */	mtctr r12
/* 804193A4 004162E4  4E 80 04 21 */	bctrl 
/* 804193A8 004162E8  3B 7B 00 28 */	addi r27, r27, 0x28
/* 804193AC 004162EC  3B BD 00 01 */	addi r29, r29, 1
.L_804193B0:
/* 804193B0 004162F0  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 804193B4 004162F4  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 804193B8 004162F8  7C 03 01 D6 */	mullw r0, r3, r0
/* 804193BC 004162FC  7C 1D 00 00 */	cmpw r29, r0
/* 804193C0 00416300  41 80 FF CC */	blt .L_8041938C
/* 804193C4 00416304  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 804193C8 00416308  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 804193CC 0041630C  48 00 00 CD */	bl createTriangleSphere__Q23Sys13TriangleTableFRQ23Sys11VertexTable
/* 804193D0 00416310  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 804193D4 00416314  80 01 00 34 */	lwz r0, 0x34(r1)
/* 804193D8 00416318  7C 08 03 A6 */	mtlr r0
/* 804193DC 0041631C  38 21 00 30 */	addi r1, r1, 0x30
/* 804193E0 00416320  4E 80 00 20 */	blr 
.endfn read__Q23Sys11GridDividerFR6Stream

.fn read__31ArrayContainer<Q23Sys8Triangle>FR6Stream, weak
/* 804193E4 00416324  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804193E8 00416328  7C 08 02 A6 */	mflr r0
/* 804193EC 0041632C  90 01 00 24 */	stw r0, 0x24(r1)
/* 804193F0 00416330  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804193F4 00416334  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804193F8 00416338  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804193FC 0041633C  7C 9D 23 78 */	mr r29, r4
/* 80419400 00416340  93 81 00 10 */	stw r28, 0x10(r1)
/* 80419404 00416344  7C 7C 1B 78 */	mr r28, r3
/* 80419408 00416348  7F A3 EB 78 */	mr r3, r29
/* 8041940C 0041634C  4B FF B6 85 */	bl readInt__6StreamFv
/* 80419410 00416350  90 7C 00 20 */	stw r3, 0x20(r28)
/* 80419414 00416354  7F 83 E3 78 */	mr r3, r28
/* 80419418 00416358  81 9C 00 00 */	lwz r12, 0(r28)
/* 8041941C 0041635C  80 9C 00 20 */	lwz r4, 0x20(r28)
/* 80419420 00416360  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80419424 00416364  7D 89 03 A6 */	mtctr r12
/* 80419428 00416368  4E 80 04 21 */	bctrl 
/* 8041942C 0041636C  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 80419430 00416370  3B C0 00 00 */	li r30, 0
/* 80419434 00416374  3B E0 00 00 */	li r31, 0
/* 80419438 00416378  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 8041943C 0041637C  48 00 00 2C */	b .L_80419468
.L_80419440:
/* 80419440 00416380  7F 83 E3 78 */	mr r3, r28
/* 80419444 00416384  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80419448 00416388  81 9C 00 00 */	lwz r12, 0(r28)
/* 8041944C 0041638C  7F A4 EB 78 */	mr r4, r29
/* 80419450 00416390  7C A0 FA 14 */	add r5, r0, r31
/* 80419454 00416394  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80419458 00416398  7D 89 03 A6 */	mtctr r12
/* 8041945C 0041639C  4E 80 04 21 */	bctrl 
/* 80419460 004163A0  3B FF 00 60 */	addi r31, r31, 0x60
/* 80419464 004163A4  3B DE 00 01 */	addi r30, r30, 1
.L_80419468:
/* 80419468 004163A8  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 8041946C 004163AC  7C 1E 00 00 */	cmpw r30, r0
/* 80419470 004163B0  41 80 FF D0 */	blt .L_80419440
/* 80419474 004163B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80419478 004163B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041947C 004163BC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80419480 004163C0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80419484 004163C4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80419488 004163C8  7C 08 03 A6 */	mtlr r0
/* 8041948C 004163CC  38 21 00 20 */	addi r1, r1, 0x20
/* 80419490 004163D0  4E 80 00 20 */	blr 
.endfn read__31ArrayContainer<Q23Sys8Triangle>FR6Stream

.fn readObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle, weak
/* 80419494 004163D4  4E 80 00 20 */	blr 
.endfn readObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle

.fn createTriangleSphere__Q23Sys13TriangleTableFRQ23Sys11VertexTable, global
/* 80419498 004163D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041949C 004163DC  7C 08 02 A6 */	mflr r0
/* 804194A0 004163E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 804194A4 004163E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804194A8 004163E8  3B E0 00 00 */	li r31, 0
/* 804194AC 004163EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804194B0 004163F0  3B C0 00 00 */	li r30, 0
/* 804194B4 004163F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804194B8 004163F8  7C 9D 23 78 */	mr r29, r4
/* 804194BC 004163FC  93 81 00 10 */	stw r28, 0x10(r1)
/* 804194C0 00416400  7C 7C 1B 78 */	mr r28, r3
/* 804194C4 00416404  48 00 00 1C */	b .L_804194E0
.L_804194C8:
/* 804194C8 00416408  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 804194CC 0041640C  7F A4 EB 78 */	mr r4, r29
/* 804194D0 00416410  7C 60 FA 14 */	add r3, r0, r31
/* 804194D4 00416414  4B FF D4 85 */	bl createSphere__Q23Sys8TriangleFRQ23Sys11VertexTable
/* 804194D8 00416418  3B FF 00 60 */	addi r31, r31, 0x60
/* 804194DC 0041641C  3B DE 00 01 */	addi r30, r30, 1
.L_804194E0:
/* 804194E0 00416420  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 804194E4 00416424  7C 1E 00 00 */	cmpw r30, r0
/* 804194E8 00416428  41 80 FF E0 */	blt .L_804194C8
/* 804194EC 0041642C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804194F0 00416430  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804194F4 00416434  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804194F8 00416438  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804194FC 0041643C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80419500 00416440  7C 08 03 A6 */	mtlr r0
/* 80419504 00416444  38 21 00 20 */	addi r1, r1, 0x20
/* 80419508 00416448  4E 80 00 20 */	blr 
.endfn createTriangleSphere__Q23Sys13TriangleTableFRQ23Sys11VertexTable

.fn constructClone__Q23Sys12TriIndexListFRQ23Sys13TriangleTable, global
/* 8041950C 0041644C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80419510 00416450  7C 08 02 A6 */	mflr r0
/* 80419514 00416454  90 01 00 24 */	stw r0, 0x24(r1)
/* 80419518 00416458  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041951C 0041645C  7C 9F 23 78 */	mr r31, r4
/* 80419520 00416460  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80419524 00416464  7C 7E 1B 78 */	mr r30, r3
/* 80419528 00416468  81 83 00 00 */	lwz r12, 0(r3)
/* 8041952C 0041646C  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 80419530 00416470  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80419534 00416474  7D 89 03 A6 */	mtctr r12
/* 80419538 00416478  4E 80 04 21 */	bctrl 
/* 8041953C 0041647C  38 00 00 00 */	li r0, 0
/* 80419540 00416480  90 01 00 08 */	stw r0, 8(r1)
/* 80419544 00416484  48 00 00 28 */	b .L_8041956C
.L_80419548:
/* 80419548 00416488  7F C3 F3 78 */	mr r3, r30
/* 8041954C 0041648C  38 81 00 08 */	addi r4, r1, 8
/* 80419550 00416490  81 9E 00 00 */	lwz r12, 0(r30)
/* 80419554 00416494  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80419558 00416498  7D 89 03 A6 */	mtctr r12
/* 8041955C 0041649C  4E 80 04 21 */	bctrl 
/* 80419560 004164A0  80 61 00 08 */	lwz r3, 8(r1)
/* 80419564 004164A4  38 03 00 01 */	addi r0, r3, 1
/* 80419568 004164A8  90 01 00 08 */	stw r0, 8(r1)
.L_8041956C:
/* 8041956C 004164AC  80 61 00 08 */	lwz r3, 8(r1)
/* 80419570 004164B0  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80419574 004164B4  7C 03 00 00 */	cmpw r3, r0
/* 80419578 004164B8  41 80 FF D0 */	blt .L_80419548
/* 8041957C 004164BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80419580 004164C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80419584 004164C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80419588 004164C8  7C 08 03 A6 */	mtlr r0
/* 8041958C 004164CC  38 21 00 20 */	addi r1, r1, 0x20
/* 80419590 004164D0  4E 80 00 20 */	blr 
.endfn constructClone__Q23Sys12TriIndexListFRQ23Sys13TriangleTable

.fn getMinMax__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR10Vector3<f>R10Vector3<f>RfRf, global
/* 80419594 004164D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80419598 004164D8  C0 22 1F E4 */	lfs f1, lbl_80520344@sda21(r2)
/* 8041959C 004164DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 804195A0 004164E0  C0 02 1F E8 */	lfs f0, lbl_80520348@sda21(r2)
/* 804195A4 004164E4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 804195A8 004164E8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 804195AC 004164EC  3B A0 00 00 */	li r29, 0
/* 804195B0 004164F0  93 81 00 30 */	stw r28, 0x30(r1)
/* 804195B4 004164F4  3B 80 00 00 */	li r28, 0
/* 804195B8 004164F8  D0 28 00 00 */	stfs f1, 0(r8)
/* 804195BC 004164FC  D0 09 00 00 */	stfs f0, 0(r9)
/* 804195C0 00416500  48 00 01 00 */	b .L_804196C0
.L_804195C4:
/* 804195C4 00416504  81 43 00 24 */	lwz r10, 0x24(r3)
/* 804195C8 00416508  38 00 00 03 */	li r0, 3
/* 804195CC 0041650C  81 65 00 24 */	lwz r11, 0x24(r5)
/* 804195D0 00416510  3B C1 00 08 */	addi r30, r1, 8
/* 804195D4 00416514  7D 4A E8 2E */	lwzx r10, r10, r29
/* 804195D8 00416518  83 E4 00 24 */	lwz r31, 0x24(r4)
/* 804195DC 0041651C  1D 4A 00 60 */	mulli r10, r10, 0x60
/* 804195E0 00416520  7D 4B 52 14 */	add r10, r11, r10
/* 804195E4 00416524  81 8A 00 00 */	lwz r12, 0(r10)
/* 804195E8 00416528  81 6A 00 04 */	lwz r11, 4(r10)
/* 804195EC 0041652C  81 4A 00 08 */	lwz r10, 8(r10)
/* 804195F0 00416530  1D 8C 00 0C */	mulli r12, r12, 0xc
/* 804195F4 00416534  7D 9F 62 14 */	add r12, r31, r12
/* 804195F8 00416538  1D 6B 00 0C */	mulli r11, r11, 0xc
/* 804195FC 0041653C  C0 2C 00 00 */	lfs f1, 0(r12)
/* 80419600 00416540  C0 0C 00 04 */	lfs f0, 4(r12)
/* 80419604 00416544  C0 CC 00 08 */	lfs f6, 8(r12)
/* 80419608 00416548  7D 7F 5A 14 */	add r11, r31, r11
/* 8041960C 0041654C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80419610 00416550  1D 4A 00 0C */	mulli r10, r10, 0xc
/* 80419614 00416554  C0 AB 00 00 */	lfs f5, 0(r11)
/* 80419618 00416558  C0 8B 00 04 */	lfs f4, 4(r11)
/* 8041961C 0041655C  C0 6B 00 08 */	lfs f3, 8(r11)
/* 80419620 00416560  7D 5F 52 14 */	add r10, r31, r10
/* 80419624 00416564  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80419628 00416568  C0 4A 00 00 */	lfs f2, 0(r10)
/* 8041962C 0041656C  C0 2A 00 04 */	lfs f1, 4(r10)
/* 80419630 00416570  C0 0A 00 08 */	lfs f0, 8(r10)
/* 80419634 00416574  D0 C1 00 10 */	stfs f6, 0x10(r1)
/* 80419638 00416578  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8041963C 0041657C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80419640 00416580  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80419644 00416584  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80419648 00416588  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8041964C 0041658C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80419650 00416590  7C 09 03 A6 */	mtctr r0
.L_80419654:
/* 80419654 00416594  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80419658 00416598  C0 07 00 04 */	lfs f0, 4(r7)
/* 8041965C 0041659C  C0 7E 00 00 */	lfs f3, 0(r30)
/* 80419660 004165A0  C0 47 00 00 */	lfs f2, 0(r7)
/* 80419664 004165A4  EC 21 00 28 */	fsubs f1, f1, f0
/* 80419668 004165A8  C0 06 00 04 */	lfs f0, 4(r6)
/* 8041966C 004165AC  EC 43 10 28 */	fsubs f2, f3, f2
/* 80419670 004165B0  C0 9E 00 08 */	lfs f4, 8(r30)
/* 80419674 004165B4  C0 67 00 08 */	lfs f3, 8(r7)
/* 80419678 004165B8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8041967C 004165BC  C0 26 00 00 */	lfs f1, 0(r6)
/* 80419680 004165C0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80419684 004165C4  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 80419688 004165C8  C0 46 00 08 */	lfs f2, 8(r6)
/* 8041968C 004165CC  C0 09 00 00 */	lfs f0, 0(r9)
/* 80419690 004165D0  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80419694 004165D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80419698 004165D8  40 81 00 08 */	ble .L_804196A0
/* 8041969C 004165DC  D0 29 00 00 */	stfs f1, 0(r9)
.L_804196A0:
/* 804196A0 004165E0  C0 08 00 00 */	lfs f0, 0(r8)
/* 804196A4 004165E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804196A8 004165E8  40 80 00 08 */	bge .L_804196B0
/* 804196AC 004165EC  D0 28 00 00 */	stfs f1, 0(r8)
.L_804196B0:
/* 804196B0 004165F0  3B DE 00 0C */	addi r30, r30, 0xc
/* 804196B4 004165F4  42 00 FF A0 */	bdnz .L_80419654
/* 804196B8 004165F8  3B BD 00 04 */	addi r29, r29, 4
/* 804196BC 004165FC  3B 9C 00 01 */	addi r28, r28, 1
.L_804196C0:
/* 804196C0 00416600  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 804196C4 00416604  7C 1C 00 00 */	cmpw r28, r0
/* 804196C8 00416608  41 80 FE FC */	blt .L_804195C4
/* 804196CC 0041660C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 804196D0 00416610  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 804196D4 00416614  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 804196D8 00416618  83 81 00 30 */	lwz r28, 0x30(r1)
/* 804196DC 0041661C  38 21 00 40 */	addi r1, r1, 0x40
/* 804196E0 00416620  4E 80 00 20 */	blr 
.endfn getMinMax__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR10Vector3<f>R10Vector3<f>RfRf

.fn makeCovarianceMatrix__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR10Vector3<f>, global
/* 804196E4 00416624  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 804196E8 00416628  3C 00 43 30 */	lis r0, 0x4330
/* 804196EC 0041662C  C8 42 1F D0 */	lfd f2, lbl_80520330@sda21(r2)
/* 804196F0 00416630  39 60 00 00 */	li r11, 0
/* 804196F4 00416634  BE 41 00 38 */	stmw r18, 0x38(r1)
/* 804196F8 00416638  C0 02 1F A8 */	lfs f0, lbl_80520308@sda21(r2)
/* 804196FC 0041663C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80419700 00416640  C0 62 1F AC */	lfs f3, lbl_8052030C@sda21(r2)
/* 80419704 00416644  82 63 00 1C */	lwz r19, 0x1c(r3)
/* 80419708 00416648  6E 60 80 00 */	xoris r0, r19, 0x8000
/* 8041970C 0041664C  D0 07 00 00 */	stfs f0, 0(r7)
/* 80419710 00416650  90 01 00 34 */	stw r0, 0x34(r1)
/* 80419714 00416654  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80419718 00416658  D0 07 00 04 */	stfs f0, 4(r7)
/* 8041971C 0041665C  EC 21 10 28 */	fsubs f1, f1, f2
/* 80419720 00416660  C0 42 1F EC */	lfs f2, lbl_8052034C@sda21(r2)
/* 80419724 00416664  D0 07 00 08 */	stfs f0, 8(r7)
/* 80419728 00416668  EC 22 00 72 */	fmuls f1, f2, f1
/* 8041972C 0041666C  EC 03 08 24 */	fdivs f0, f3, f1
/* 80419730 00416670  7E 69 03 A6 */	mtctr r19
/* 80419734 00416674  2C 13 00 00 */	cmpwi r19, 0
/* 80419738 00416678  40 81 00 A8 */	ble .L_804197E0
.L_8041973C:
/* 8041973C 0041667C  81 03 00 24 */	lwz r8, 0x24(r3)
/* 80419740 00416680  81 25 00 24 */	lwz r9, 0x24(r5)
/* 80419744 00416684  7C 08 58 2E */	lwzx r0, r8, r11
/* 80419748 00416688  39 6B 00 04 */	addi r11, r11, 4
/* 8041974C 0041668C  81 84 00 24 */	lwz r12, 0x24(r4)
/* 80419750 00416690  1C 00 00 60 */	mulli r0, r0, 0x60
/* 80419754 00416694  C0 67 00 00 */	lfs f3, 0(r7)
/* 80419758 00416698  C0 C7 00 04 */	lfs f6, 4(r7)
/* 8041975C 0041669C  C1 27 00 08 */	lfs f9, 8(r7)
/* 80419760 004166A0  7D 49 02 14 */	add r10, r9, r0
/* 80419764 004166A4  80 0A 00 00 */	lwz r0, 0(r10)
/* 80419768 004166A8  81 0A 00 04 */	lwz r8, 4(r10)
/* 8041976C 004166AC  1D 20 00 0C */	mulli r9, r0, 0xc
/* 80419770 004166B0  80 0A 00 08 */	lwz r0, 8(r10)
/* 80419774 004166B4  7D 2C 4A 14 */	add r9, r12, r9
/* 80419778 004166B8  1D 08 00 0C */	mulli r8, r8, 0xc
/* 8041977C 004166BC  C0 49 00 00 */	lfs f2, 0(r9)
/* 80419780 004166C0  C0 A9 00 04 */	lfs f5, 4(r9)
/* 80419784 004166C4  C1 09 00 08 */	lfs f8, 8(r9)
/* 80419788 004166C8  7D 0C 42 14 */	add r8, r12, r8
/* 8041978C 004166CC  C0 28 00 00 */	lfs f1, 0(r8)
/* 80419790 004166D0  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80419794 004166D4  C0 88 00 04 */	lfs f4, 4(r8)
/* 80419798 004166D8  C0 E8 00 08 */	lfs f7, 8(r8)
/* 8041979C 004166DC  EC 42 08 2A */	fadds f2, f2, f1
/* 804197A0 004166E0  7D 0C 02 14 */	add r8, r12, r0
/* 804197A4 004166E4  EC A5 20 2A */	fadds f5, f5, f4
/* 804197A8 004166E8  C0 28 00 00 */	lfs f1, 0(r8)
/* 804197AC 004166EC  ED 08 38 2A */	fadds f8, f8, f7
/* 804197B0 004166F0  C0 88 00 04 */	lfs f4, 4(r8)
/* 804197B4 004166F4  EC 22 08 2A */	fadds f1, f2, f1
/* 804197B8 004166F8  C0 E8 00 08 */	lfs f7, 8(r8)
/* 804197BC 004166FC  EC 45 20 2A */	fadds f2, f5, f4
/* 804197C0 00416700  EC 88 38 2A */	fadds f4, f8, f7
/* 804197C4 00416704  EC 23 08 2A */	fadds f1, f3, f1
/* 804197C8 00416708  EC 46 10 2A */	fadds f2, f6, f2
/* 804197CC 0041670C  EC 69 20 2A */	fadds f3, f9, f4
/* 804197D0 00416710  D0 27 00 00 */	stfs f1, 0(r7)
/* 804197D4 00416714  D0 47 00 04 */	stfs f2, 4(r7)
/* 804197D8 00416718  D0 67 00 08 */	stfs f3, 8(r7)
/* 804197DC 0041671C  42 00 FF 60 */	bdnz .L_8041973C
.L_804197E0:
/* 804197E0 00416720  C0 27 00 00 */	lfs f1, 0(r7)
/* 804197E4 00416724  3A 41 00 14 */	addi r18, r1, 0x14
/* 804197E8 00416728  C0 47 00 04 */	lfs f2, 4(r7)
/* 804197EC 0041672C  38 01 00 20 */	addi r0, r1, 0x20
/* 804197F0 00416730  EC 21 00 32 */	fmuls f1, f1, f0
/* 804197F4 00416734  C0 67 00 08 */	lfs f3, 8(r7)
/* 804197F8 00416738  3B 61 00 08 */	addi r27, r1, 8
/* 804197FC 0041673C  EC 42 00 32 */	fmuls f2, f2, f0
/* 80419800 00416740  EC 63 00 32 */	fmuls f3, f3, f0
/* 80419804 00416744  7C FF 3B 78 */	mr r31, r7
/* 80419808 00416748  D0 27 00 00 */	stfs f1, 0(r7)
/* 8041980C 0041674C  7E 5E 93 78 */	mr r30, r18
/* 80419810 00416750  7C 1D 03 78 */	mr r29, r0
/* 80419814 00416754  7F 7C DB 78 */	mr r28, r27
/* 80419818 00416758  D0 47 00 04 */	stfs f2, 4(r7)
/* 8041981C 0041675C  3B 20 00 00 */	li r25, 0
/* 80419820 00416760  D0 67 00 08 */	stfs f3, 8(r7)
.L_80419824:
/* 80419824 00416764  7C E8 3B 78 */	mr r8, r7
/* 80419828 00416768  7E 49 93 78 */	mr r9, r18
/* 8041982C 0041676C  7C 0A 03 78 */	mr r10, r0
/* 80419830 00416770  7F 6B DB 78 */	mr r11, r27
/* 80419834 00416774  7C CC 33 78 */	mr r12, r6
/* 80419838 00416778  3B 00 00 00 */	li r24, 0
.L_8041983C:
/* 8041983C 0041677C  3B 40 00 00 */	li r26, 0
/* 80419840 00416780  C1 62 1F A8 */	lfs f11, lbl_80520308@sda21(r2)
/* 80419844 00416784  7E 69 03 A6 */	mtctr r19
/* 80419848 00416788  2C 13 00 00 */	cmpwi r19, 0
/* 8041984C 0041678C  40 81 00 D8 */	ble .L_80419924
.L_80419850:
/* 80419850 00416790  82 83 00 24 */	lwz r20, 0x24(r3)
/* 80419854 00416794  82 A5 00 24 */	lwz r21, 0x24(r5)
/* 80419858 00416798  7E D4 D0 2E */	lwzx r22, r20, r26
/* 8041985C 0041679C  3B 5A 00 04 */	addi r26, r26, 4
/* 80419860 004167A0  82 84 00 24 */	lwz r20, 0x24(r4)
/* 80419864 004167A4  1E D6 00 60 */	mulli r22, r22, 0x60
/* 80419868 004167A8  C1 28 00 00 */	lfs f9, 0(r8)
/* 8041986C 004167AC  C1 5F 00 00 */	lfs f10, 0(r31)
/* 80419870 004167B0  7E F5 B2 14 */	add r23, r21, r22
/* 80419874 004167B4  82 D7 00 04 */	lwz r22, 4(r23)
/* 80419878 004167B8  82 B7 00 00 */	lwz r21, 0(r23)
/* 8041987C 004167BC  1E D6 00 0C */	mulli r22, r22, 0xc
/* 80419880 004167C0  82 F7 00 08 */	lwz r23, 8(r23)
/* 80419884 004167C4  7E D4 B2 14 */	add r22, r20, r22
/* 80419888 004167C8  C0 76 00 00 */	lfs f3, 0(r22)
/* 8041988C 004167CC  1E B5 00 0C */	mulli r21, r21, 0xc
/* 80419890 004167D0  C0 56 00 04 */	lfs f2, 4(r22)
/* 80419894 004167D4  C0 36 00 08 */	lfs f1, 8(r22)
/* 80419898 004167D8  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8041989C 004167DC  7E B4 AA 14 */	add r21, r20, r21
/* 804198A0 004167E0  C1 15 00 00 */	lfs f8, 0(r21)
/* 804198A4 004167E4  1E D7 00 0C */	mulli r22, r23, 0xc
/* 804198A8 004167E8  C0 F5 00 04 */	lfs f7, 4(r21)
/* 804198AC 004167EC  C0 75 00 08 */	lfs f3, 8(r21)
/* 804198B0 004167F0  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 804198B4 004167F4  7E 94 B2 14 */	add r20, r20, r22
/* 804198B8 004167F8  C0 D4 00 00 */	lfs f6, 0(r20)
/* 804198BC 004167FC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 804198C0 00416800  C0 B4 00 04 */	lfs f5, 4(r20)
/* 804198C4 00416804  C0 5E 00 00 */	lfs f2, 0(r30)
/* 804198C8 00416808  C0 29 00 00 */	lfs f1, 0(r9)
/* 804198CC 0041680C  C0 94 00 08 */	lfs f4, 8(r20)
/* 804198D0 00416810  EC 42 50 28 */	fsubs f2, f2, f10
/* 804198D4 00416814  EC 21 48 28 */	fsubs f1, f1, f9
/* 804198D8 00416818  D1 01 00 20 */	stfs f8, 0x20(r1)
/* 804198DC 0041681C  D0 E1 00 24 */	stfs f7, 0x24(r1)
/* 804198E0 00416820  EC 22 00 72 */	fmuls f1, f2, f1
/* 804198E4 00416824  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 804198E8 00416828  C0 7D 00 00 */	lfs f3, 0(r29)
/* 804198EC 0041682C  C0 4A 00 00 */	lfs f2, 0(r10)
/* 804198F0 00416830  EC 63 50 28 */	fsubs f3, f3, f10
/* 804198F4 00416834  D0 C1 00 08 */	stfs f6, 8(r1)
/* 804198F8 00416838  EC 42 48 28 */	fsubs f2, f2, f9
/* 804198FC 0041683C  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 80419900 00416840  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 80419904 00416844  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80419908 00416848  C0 7C 00 00 */	lfs f3, 0(r28)
/* 8041990C 0041684C  C0 4B 00 00 */	lfs f2, 0(r11)
/* 80419910 00416850  EC 63 50 28 */	fsubs f3, f3, f10
/* 80419914 00416854  EC 42 48 28 */	fsubs f2, f2, f9
/* 80419918 00416858  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8041991C 0041685C  ED 6B 08 2A */	fadds f11, f11, f1
/* 80419920 00416860  42 00 FF 30 */	bdnz .L_80419850
.L_80419924:
/* 80419924 00416864  ED 6B 00 32 */	fmuls f11, f11, f0
/* 80419928 00416868  3B 18 00 01 */	addi r24, r24, 1
/* 8041992C 0041686C  2C 18 00 03 */	cmpwi r24, 3
/* 80419930 00416870  39 6B 00 04 */	addi r11, r11, 4
/* 80419934 00416874  39 08 00 04 */	addi r8, r8, 4
/* 80419938 00416878  39 29 00 04 */	addi r9, r9, 4
/* 8041993C 0041687C  D1 6C 00 00 */	stfs f11, 0(r12)
/* 80419940 00416880  39 8C 00 04 */	addi r12, r12, 4
/* 80419944 00416884  39 4A 00 04 */	addi r10, r10, 4
/* 80419948 00416888  41 80 FE F4 */	blt .L_8041983C
/* 8041994C 0041688C  3B 39 00 01 */	addi r25, r25, 1
/* 80419950 00416890  3B FF 00 04 */	addi r31, r31, 4
/* 80419954 00416894  2C 19 00 03 */	cmpwi r25, 3
/* 80419958 00416898  3B DE 00 04 */	addi r30, r30, 4
/* 8041995C 0041689C  3B BD 00 04 */	addi r29, r29, 4
/* 80419960 004168A0  3B 9C 00 04 */	addi r28, r28, 4
/* 80419964 004168A4  38 C6 00 0C */	addi r6, r6, 0xc
/* 80419968 004168A8  41 80 FE BC */	blt .L_80419824
/* 8041996C 004168AC  BA 41 00 38 */	lmw r18, 0x38(r1)
/* 80419970 004168B0  38 21 00 70 */	addi r1, r1, 0x70
/* 80419974 004168B4  4E 80 00 20 */	blr 
.endfn makeCovarianceMatrix__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR10Vector3<f>

.fn draw__Q23Sys12TriIndexListFR8GraphicsRQ23Sys11VertexTableRQ23Sys13TriangleTableb, global
/* 80419978 004168B8  4E 80 00 20 */	blr 
.endfn draw__Q23Sys12TriIndexListFR8GraphicsRQ23Sys11VertexTableRQ23Sys13TriangleTableb

.fn __ct__Q23Sys13TriangleTableFv, global
/* 8041997C 004168BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419980 004168C0  7C 08 02 A6 */	mflr r0
/* 80419984 004168C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419988 004168C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8041998C 004168CC  7C 7F 1B 78 */	mr r31, r3
/* 80419990 004168D0  4B FF 7A 01 */	bl __ct__5CNodeFv
/* 80419994 004168D4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80419998 004168D8  3C 60 80 4F */	lis r3, "__vt__26Container<Q23Sys8Triangle>"@ha
/* 8041999C 004168DC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 804199A0 004168E0  3C 80 80 4F */	lis r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@ha
/* 804199A4 004168E4  90 1F 00 00 */	stw r0, 0(r31)
/* 804199A8 004168E8  38 03 B6 98 */	addi r0, r3, "__vt__26Container<Q23Sys8Triangle>"@l
/* 804199AC 004168EC  3C 60 80 4F */	lis r3, __vt__Q23Sys13TriangleTable@ha
/* 804199B0 004168F0  38 C0 00 00 */	li r6, 0
/* 804199B4 004168F4  90 1F 00 00 */	stw r0, 0(r31)
/* 804199B8 004168F8  38 A4 B6 50 */	addi r5, r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@l
/* 804199BC 004168FC  38 80 00 01 */	li r4, 1
/* 804199C0 00416900  38 03 B6 08 */	addi r0, r3, __vt__Q23Sys13TriangleTable@l
/* 804199C4 00416904  98 DF 00 18 */	stb r6, 0x18(r31)
/* 804199C8 00416908  7F E3 FB 78 */	mr r3, r31
/* 804199CC 0041690C  90 BF 00 00 */	stw r5, 0(r31)
/* 804199D0 00416910  98 9F 00 18 */	stb r4, 0x18(r31)
/* 804199D4 00416914  90 DF 00 20 */	stw r6, 0x20(r31)
/* 804199D8 00416918  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 804199DC 0041691C  90 DF 00 24 */	stw r6, 0x24(r31)
/* 804199E0 00416920  90 1F 00 00 */	stw r0, 0(r31)
/* 804199E4 00416924  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804199E8 00416928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804199EC 0041692C  7C 08 03 A6 */	mtlr r0
/* 804199F0 00416930  38 21 00 10 */	addi r1, r1, 0x10
/* 804199F4 00416934  4E 80 00 20 */	blr 
.endfn __ct__Q23Sys13TriangleTableFv

.fn __dt__31ArrayContainer<Q23Sys8Triangle>Fv, weak
/* 804199F8 00416938  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804199FC 0041693C  7C 08 02 A6 */	mflr r0
/* 80419A00 00416940  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419A04 00416944  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80419A08 00416948  7C 9F 23 78 */	mr r31, r4
/* 80419A0C 0041694C  93 C1 00 08 */	stw r30, 8(r1)
/* 80419A10 00416950  7C 7E 1B 79 */	or. r30, r3, r3
/* 80419A14 00416954  41 82 00 48 */	beq .L_80419A5C
/* 80419A18 00416958  3C 80 80 4F */	lis r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@ha
/* 80419A1C 0041695C  38 04 B6 50 */	addi r0, r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@l
/* 80419A20 00416960  90 1E 00 00 */	stw r0, 0(r30)
/* 80419A24 00416964  41 82 00 28 */	beq .L_80419A4C
/* 80419A28 00416968  3C 80 80 4F */	lis r4, "__vt__26Container<Q23Sys8Triangle>"@ha
/* 80419A2C 0041696C  38 04 B6 98 */	addi r0, r4, "__vt__26Container<Q23Sys8Triangle>"@l
/* 80419A30 00416970  90 1E 00 00 */	stw r0, 0(r30)
/* 80419A34 00416974  41 82 00 18 */	beq .L_80419A4C
/* 80419A38 00416978  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80419A3C 0041697C  38 80 00 00 */	li r4, 0
/* 80419A40 00416980  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80419A44 00416984  90 1E 00 00 */	stw r0, 0(r30)
/* 80419A48 00416988  4B FF 7B 41 */	bl __dt__5CNodeFv
.L_80419A4C:
/* 80419A4C 0041698C  7F E0 07 35 */	extsh. r0, r31
/* 80419A50 00416990  40 81 00 0C */	ble .L_80419A5C
/* 80419A54 00416994  7F C3 F3 78 */	mr r3, r30
/* 80419A58 00416998  4B C0 A6 5D */	bl __dl__FPv
.L_80419A5C:
/* 80419A5C 0041699C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419A60 004169A0  7F C3 F3 78 */	mr r3, r30
/* 80419A64 004169A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80419A68 004169A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80419A6C 004169AC  7C 08 03 A6 */	mtlr r0
/* 80419A70 004169B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80419A74 004169B4  4E 80 00 20 */	blr 
.endfn __dt__31ArrayContainer<Q23Sys8Triangle>Fv

.fn __dt__26Container<Q23Sys8Triangle>Fv, weak
/* 80419A78 004169B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419A7C 004169BC  7C 08 02 A6 */	mflr r0
/* 80419A80 004169C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419A84 004169C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80419A88 004169C8  7C 9F 23 78 */	mr r31, r4
/* 80419A8C 004169CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80419A90 004169D0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80419A94 004169D4  41 82 00 38 */	beq .L_80419ACC
/* 80419A98 004169D8  3C 80 80 4F */	lis r4, "__vt__26Container<Q23Sys8Triangle>"@ha
/* 80419A9C 004169DC  38 04 B6 98 */	addi r0, r4, "__vt__26Container<Q23Sys8Triangle>"@l
/* 80419AA0 004169E0  90 1E 00 00 */	stw r0, 0(r30)
/* 80419AA4 004169E4  41 82 00 18 */	beq .L_80419ABC
/* 80419AA8 004169E8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80419AAC 004169EC  38 80 00 00 */	li r4, 0
/* 80419AB0 004169F0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80419AB4 004169F4  90 1E 00 00 */	stw r0, 0(r30)
/* 80419AB8 004169F8  4B FF 7A D1 */	bl __dt__5CNodeFv
.L_80419ABC:
/* 80419ABC 004169FC  7F E0 07 35 */	extsh. r0, r31
/* 80419AC0 00416A00  40 81 00 0C */	ble .L_80419ACC
/* 80419AC4 00416A04  7F C3 F3 78 */	mr r3, r30
/* 80419AC8 00416A08  4B C0 A5 ED */	bl __dl__FPv
.L_80419ACC:
/* 80419ACC 00416A0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419AD0 00416A10  7F C3 F3 78 */	mr r3, r30
/* 80419AD4 00416A14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80419AD8 00416A18  83 C1 00 08 */	lwz r30, 8(r1)
/* 80419ADC 00416A1C  7C 08 03 A6 */	mtlr r0
/* 80419AE0 00416A20  38 21 00 10 */	addi r1, r1, 0x10
/* 80419AE4 00416A24  4E 80 00 20 */	blr 
.endfn __dt__26Container<Q23Sys8Triangle>Fv

.fn transform__Q23Sys11VertexTableFR7Matrixf, global
/* 80419AE8 00416A28  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80419AEC 00416A2C  7C 08 02 A6 */	mflr r0
/* 80419AF0 00416A30  90 01 00 34 */	stw r0, 0x34(r1)
/* 80419AF4 00416A34  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80419AF8 00416A38  7C 7B 1B 78 */	mr r27, r3
/* 80419AFC 00416A3C  7C 9C 23 78 */	mr r28, r4
/* 80419B00 00416A40  3B C0 00 00 */	li r30, 0
/* 80419B04 00416A44  3B E0 00 00 */	li r31, 0
/* 80419B08 00416A48  48 00 00 3C */	b .L_80419B44
.L_80419B0C:
/* 80419B0C 00416A4C  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 80419B10 00416A50  7F 83 E3 78 */	mr r3, r28
/* 80419B14 00416A54  38 A1 00 08 */	addi r5, r1, 8
/* 80419B18 00416A58  7F A0 FA 14 */	add r29, r0, r31
/* 80419B1C 00416A5C  7F A4 EB 78 */	mr r4, r29
/* 80419B20 00416A60  4B CD 10 B9 */	bl PSMTXMultVec
/* 80419B24 00416A64  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80419B28 00416A68  3B FF 00 0C */	addi r31, r31, 0xc
/* 80419B2C 00416A6C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80419B30 00416A70  3B DE 00 01 */	addi r30, r30, 1
/* 80419B34 00416A74  C0 01 00 08 */	lfs f0, 8(r1)
/* 80419B38 00416A78  D0 1D 00 00 */	stfs f0, 0(r29)
/* 80419B3C 00416A7C  D0 3D 00 04 */	stfs f1, 4(r29)
/* 80419B40 00416A80  D0 5D 00 08 */	stfs f2, 8(r29)
.L_80419B44:
/* 80419B44 00416A84  80 1B 00 1C */	lwz r0, 0x1c(r27)
/* 80419B48 00416A88  7C 1E 00 00 */	cmpw r30, r0
/* 80419B4C 00416A8C  41 80 FF C0 */	blt .L_80419B0C
/* 80419B50 00416A90  C0 22 1F DC */	lfs f1, lbl_8052033C@sda21(r2)
/* 80419B54 00416A94  38 60 00 00 */	li r3, 0
/* 80419B58 00416A98  C0 02 1F E0 */	lfs f0, lbl_80520340@sda21(r2)
/* 80419B5C 00416A9C  7C 65 1B 78 */	mr r5, r3
/* 80419B60 00416AA0  D0 3B 00 28 */	stfs f1, 0x28(r27)
/* 80419B64 00416AA4  D0 3B 00 2C */	stfs f1, 0x2c(r27)
/* 80419B68 00416AA8  D0 3B 00 30 */	stfs f1, 0x30(r27)
/* 80419B6C 00416AAC  D0 1B 00 34 */	stfs f0, 0x34(r27)
/* 80419B70 00416AB0  D0 1B 00 38 */	stfs f0, 0x38(r27)
/* 80419B74 00416AB4  D0 1B 00 3C */	stfs f0, 0x3c(r27)
/* 80419B78 00416AB8  48 00 00 8C */	b .L_80419C04
.L_80419B7C:
/* 80419B7C 00416ABC  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 80419B80 00416AC0  C0 1B 00 28 */	lfs f0, 0x28(r27)
/* 80419B84 00416AC4  7C 80 2A 14 */	add r4, r0, r5
/* 80419B88 00416AC8  C0 24 00 00 */	lfs f1, 0(r4)
/* 80419B8C 00416ACC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80419B90 00416AD0  40 80 00 08 */	bge .L_80419B98
/* 80419B94 00416AD4  D0 3B 00 28 */	stfs f1, 0x28(r27)
.L_80419B98:
/* 80419B98 00416AD8  C0 24 00 04 */	lfs f1, 4(r4)
/* 80419B9C 00416ADC  C0 1B 00 2C */	lfs f0, 0x2c(r27)
/* 80419BA0 00416AE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80419BA4 00416AE4  40 80 00 08 */	bge .L_80419BAC
/* 80419BA8 00416AE8  D0 3B 00 2C */	stfs f1, 0x2c(r27)
.L_80419BAC:
/* 80419BAC 00416AEC  C0 24 00 08 */	lfs f1, 8(r4)
/* 80419BB0 00416AF0  C0 1B 00 30 */	lfs f0, 0x30(r27)
/* 80419BB4 00416AF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80419BB8 00416AF8  40 80 00 08 */	bge .L_80419BC0
/* 80419BBC 00416AFC  D0 3B 00 30 */	stfs f1, 0x30(r27)
.L_80419BC0:
/* 80419BC0 00416B00  C0 24 00 00 */	lfs f1, 0(r4)
/* 80419BC4 00416B04  C0 1B 00 34 */	lfs f0, 0x34(r27)
/* 80419BC8 00416B08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80419BCC 00416B0C  40 81 00 08 */	ble .L_80419BD4
/* 80419BD0 00416B10  D0 3B 00 34 */	stfs f1, 0x34(r27)
.L_80419BD4:
/* 80419BD4 00416B14  C0 24 00 04 */	lfs f1, 4(r4)
/* 80419BD8 00416B18  C0 1B 00 38 */	lfs f0, 0x38(r27)
/* 80419BDC 00416B1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80419BE0 00416B20  40 81 00 08 */	ble .L_80419BE8
/* 80419BE4 00416B24  D0 3B 00 38 */	stfs f1, 0x38(r27)
.L_80419BE8:
/* 80419BE8 00416B28  C0 24 00 08 */	lfs f1, 8(r4)
/* 80419BEC 00416B2C  C0 1B 00 3C */	lfs f0, 0x3c(r27)
/* 80419BF0 00416B30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80419BF4 00416B34  40 81 00 08 */	ble .L_80419BFC
/* 80419BF8 00416B38  D0 3B 00 3C */	stfs f1, 0x3c(r27)
.L_80419BFC:
/* 80419BFC 00416B3C  38 A5 00 0C */	addi r5, r5, 0xc
/* 80419C00 00416B40  38 63 00 01 */	addi r3, r3, 1
.L_80419C04:
/* 80419C04 00416B44  80 1B 00 1C */	lwz r0, 0x1c(r27)
/* 80419C08 00416B48  7C 03 00 00 */	cmpw r3, r0
/* 80419C0C 00416B4C  41 80 FF 70 */	blt .L_80419B7C
/* 80419C10 00416B50  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80419C14 00416B54  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80419C18 00416B58  7C 08 03 A6 */	mtlr r0
/* 80419C1C 00416B5C  38 21 00 30 */	addi r1, r1, 0x30
/* 80419C20 00416B60  4E 80 00 20 */	blr 
.endfn transform__Q23Sys11VertexTableFR7Matrixf

.fn write__Q23Sys11VertexTableFR6Stream, global
/* 80419C24 00416B64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80419C28 00416B68  7C 08 02 A6 */	mflr r0
/* 80419C2C 00416B6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80419C30 00416B70  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80419C34 00416B74  7C 9C 23 78 */	mr r28, r4
/* 80419C38 00416B78  7C 7B 1B 78 */	mr r27, r3
/* 80419C3C 00416B7C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80419C40 00416B80  7F 83 E3 78 */	mr r3, r28
/* 80419C44 00416B84  4B FF A3 D9 */	bl textBeginGroup__6StreamFPc
/* 80419C48 00416B88  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 80419C4C 00416B8C  7F 83 E3 78 */	mr r3, r28
/* 80419C50 00416B90  4B FF A7 E5 */	bl textWriteTab__6StreamFi
/* 80419C54 00416B94  80 9B 00 20 */	lwz r4, 0x20(r27)
/* 80419C58 00416B98  7F 83 E3 78 */	mr r3, r28
/* 80419C5C 00416B9C  4B FF BB 65 */	bl writeInt__6StreamFi
/* 80419C60 00416BA0  7F 83 E3 78 */	mr r3, r28
/* 80419C64 00416BA4  38 82 1F D8 */	addi r4, r2, lbl_80520338@sda21
/* 80419C68 00416BA8  4C C6 31 82 */	crclr 6
/* 80419C6C 00416BAC  4B FF A5 71 */	bl textWriteText__6StreamFPce
/* 80419C70 00416BB0  3C 60 80 4A */	lis r3, lbl_804997A8@ha
/* 80419C74 00416BB4  3B A0 00 00 */	li r29, 0
/* 80419C78 00416BB8  3B E3 97 A8 */	addi r31, r3, lbl_804997A8@l
/* 80419C7C 00416BBC  3B C0 00 00 */	li r30, 0
/* 80419C80 00416BC0  48 00 00 50 */	b .L_80419CD0
.L_80419C84:
/* 80419C84 00416BC4  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 80419C88 00416BC8  7F 83 E3 78 */	mr r3, r28
/* 80419C8C 00416BCC  4B FF A7 A9 */	bl textWriteTab__6StreamFi
/* 80419C90 00416BD0  7F 63 DB 78 */	mr r3, r27
/* 80419C94 00416BD4  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 80419C98 00416BD8  81 9B 00 00 */	lwz r12, 0(r27)
/* 80419C9C 00416BDC  7F 84 E3 78 */	mr r4, r28
/* 80419CA0 00416BE0  7C A0 F2 14 */	add r5, r0, r30
/* 80419CA4 00416BE4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80419CA8 00416BE8  7D 89 03 A6 */	mtctr r12
/* 80419CAC 00416BEC  4E 80 04 21 */	bctrl 
/* 80419CB0 00416BF0  80 DB 00 20 */	lwz r6, 0x20(r27)
/* 80419CB4 00416BF4  7F 83 E3 78 */	mr r3, r28
/* 80419CB8 00416BF8  7F E4 FB 78 */	mr r4, r31
/* 80419CBC 00416BFC  7F A5 EB 78 */	mr r5, r29
/* 80419CC0 00416C00  4C C6 31 82 */	crclr 6
/* 80419CC4 00416C04  4B FF A5 19 */	bl textWriteText__6StreamFPce
/* 80419CC8 00416C08  3B DE 00 0C */	addi r30, r30, 0xc
/* 80419CCC 00416C0C  3B BD 00 01 */	addi r29, r29, 1
.L_80419CD0:
/* 80419CD0 00416C10  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 80419CD4 00416C14  7C 1D 00 00 */	cmpw r29, r0
/* 80419CD8 00416C18  41 80 FF AC */	blt .L_80419C84
/* 80419CDC 00416C1C  7F 83 E3 78 */	mr r3, r28
/* 80419CE0 00416C20  4B FF A3 C1 */	bl textEndGroup__6StreamFv
/* 80419CE4 00416C24  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80419CE8 00416C28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80419CEC 00416C2C  7C 08 03 A6 */	mtlr r0
/* 80419CF0 00416C30  38 21 00 20 */	addi r1, r1, 0x20
/* 80419CF4 00416C34  4E 80 00 20 */	blr 
.endfn write__Q23Sys11VertexTableFR6Stream

.fn writeObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>, global
/* 80419CF8 00416C38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419CFC 00416C3C  7C 08 02 A6 */	mflr r0
/* 80419D00 00416C40  7C A3 2B 78 */	mr r3, r5
/* 80419D04 00416C44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419D08 00416C48  4B FF 7C E1 */	bl "write__10Vector3<f>FR6Stream"
/* 80419D0C 00416C4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419D10 00416C50  7C 08 03 A6 */	mtlr r0
/* 80419D14 00416C54  38 21 00 10 */	addi r1, r1, 0x10
/* 80419D18 00416C58  4E 80 00 20 */	blr 
.endfn writeObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>

.fn __dt__Q23Sys11VertexTableFv, weak
/* 80419D1C 00416C5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419D20 00416C60  7C 08 02 A6 */	mflr r0
/* 80419D24 00416C64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419D28 00416C68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80419D2C 00416C6C  7C 9F 23 78 */	mr r31, r4
/* 80419D30 00416C70  93 C1 00 08 */	stw r30, 8(r1)
/* 80419D34 00416C74  7C 7E 1B 79 */	or. r30, r3, r3
/* 80419D38 00416C78  41 82 00 58 */	beq .L_80419D90
/* 80419D3C 00416C7C  3C 80 80 4F */	lis r4, __vt__Q23Sys11VertexTable@ha
/* 80419D40 00416C80  38 04 B5 C0 */	addi r0, r4, __vt__Q23Sys11VertexTable@l
/* 80419D44 00416C84  90 1E 00 00 */	stw r0, 0(r30)
/* 80419D48 00416C88  41 82 00 38 */	beq .L_80419D80
/* 80419D4C 00416C8C  3C 80 80 4B */	lis r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
/* 80419D50 00416C90  38 04 FF E4 */	addi r0, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
/* 80419D54 00416C94  90 1E 00 00 */	stw r0, 0(r30)
/* 80419D58 00416C98  41 82 00 28 */	beq .L_80419D80
/* 80419D5C 00416C9C  3C 80 80 4B */	lis r4, "__vt__23Container<10Vector3<f>>"@ha
/* 80419D60 00416CA0  38 04 00 2C */	addi r0, r4, "__vt__23Container<10Vector3<f>>"@l
/* 80419D64 00416CA4  90 1E 00 00 */	stw r0, 0(r30)
/* 80419D68 00416CA8  41 82 00 18 */	beq .L_80419D80
/* 80419D6C 00416CAC  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80419D70 00416CB0  38 80 00 00 */	li r4, 0
/* 80419D74 00416CB4  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80419D78 00416CB8  90 1E 00 00 */	stw r0, 0(r30)
/* 80419D7C 00416CBC  4B FF 78 0D */	bl __dt__5CNodeFv
.L_80419D80:
/* 80419D80 00416CC0  7F E0 07 35 */	extsh. r0, r31
/* 80419D84 00416CC4  40 81 00 0C */	ble .L_80419D90
/* 80419D88 00416CC8  7F C3 F3 78 */	mr r3, r30
/* 80419D8C 00416CCC  4B C0 A3 29 */	bl __dl__FPv
.L_80419D90:
/* 80419D90 00416CD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419D94 00416CD4  7F C3 F3 78 */	mr r3, r30
/* 80419D98 00416CD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80419D9C 00416CDC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80419DA0 00416CE0  7C 08 03 A6 */	mtlr r0
/* 80419DA4 00416CE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80419DA8 00416CE8  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys11VertexTableFv

.fn readObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>, weak
/* 80419DAC 00416CEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419DB0 00416CF0  7C 08 02 A6 */	mflr r0
/* 80419DB4 00416CF4  7C A3 2B 78 */	mr r3, r5
/* 80419DB8 00416CF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419DBC 00416CFC  4B FF 7B D5 */	bl "read__10Vector3<f>FR6Stream"
/* 80419DC0 00416D00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419DC4 00416D04  7C 08 03 A6 */	mtlr r0
/* 80419DC8 00416D08  38 21 00 10 */	addi r1, r1, 0x10
/* 80419DCC 00416D0C  4E 80 00 20 */	blr 
.endfn readObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>

.fn __dt__Q23Sys13TriangleTableFv, weak
/* 80419DD0 00416D10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419DD4 00416D14  7C 08 02 A6 */	mflr r0
/* 80419DD8 00416D18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419DDC 00416D1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80419DE0 00416D20  7C 9F 23 78 */	mr r31, r4
/* 80419DE4 00416D24  93 C1 00 08 */	stw r30, 8(r1)
/* 80419DE8 00416D28  7C 7E 1B 79 */	or. r30, r3, r3
/* 80419DEC 00416D2C  41 82 00 58 */	beq .L_80419E44
/* 80419DF0 00416D30  3C 80 80 4F */	lis r4, __vt__Q23Sys13TriangleTable@ha
/* 80419DF4 00416D34  38 04 B6 08 */	addi r0, r4, __vt__Q23Sys13TriangleTable@l
/* 80419DF8 00416D38  90 1E 00 00 */	stw r0, 0(r30)
/* 80419DFC 00416D3C  41 82 00 38 */	beq .L_80419E34
/* 80419E00 00416D40  3C 80 80 4F */	lis r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@ha
/* 80419E04 00416D44  38 04 B6 50 */	addi r0, r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@l
/* 80419E08 00416D48  90 1E 00 00 */	stw r0, 0(r30)
/* 80419E0C 00416D4C  41 82 00 28 */	beq .L_80419E34
/* 80419E10 00416D50  3C 80 80 4F */	lis r4, "__vt__26Container<Q23Sys8Triangle>"@ha
/* 80419E14 00416D54  38 04 B6 98 */	addi r0, r4, "__vt__26Container<Q23Sys8Triangle>"@l
/* 80419E18 00416D58  90 1E 00 00 */	stw r0, 0(r30)
/* 80419E1C 00416D5C  41 82 00 18 */	beq .L_80419E34
/* 80419E20 00416D60  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80419E24 00416D64  38 80 00 00 */	li r4, 0
/* 80419E28 00416D68  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80419E2C 00416D6C  90 1E 00 00 */	stw r0, 0(r30)
/* 80419E30 00416D70  4B FF 77 59 */	bl __dt__5CNodeFv
.L_80419E34:
/* 80419E34 00416D74  7F E0 07 35 */	extsh. r0, r31
/* 80419E38 00416D78  40 81 00 0C */	ble .L_80419E44
/* 80419E3C 00416D7C  7F C3 F3 78 */	mr r3, r30
/* 80419E40 00416D80  4B C0 A2 75 */	bl __dl__FPv
.L_80419E44:
/* 80419E44 00416D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419E48 00416D88  7F C3 F3 78 */	mr r3, r30
/* 80419E4C 00416D8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80419E50 00416D90  83 C1 00 08 */	lwz r30, 8(r1)
/* 80419E54 00416D94  7C 08 03 A6 */	mtlr r0
/* 80419E58 00416D98  38 21 00 10 */	addi r1, r1, 0x10
/* 80419E5C 00416D9C  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys13TriangleTableFv

.fn readObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle, weak
/* 80419E60 00416DA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419E64 00416DA4  7C 08 02 A6 */	mflr r0
/* 80419E68 00416DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419E6C 00416DAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80419E70 00416DB0  7C BF 2B 78 */	mr r31, r5
/* 80419E74 00416DB4  93 C1 00 08 */	stw r30, 8(r1)
/* 80419E78 00416DB8  7C 9E 23 78 */	mr r30, r4
/* 80419E7C 00416DBC  7F C3 F3 78 */	mr r3, r30
/* 80419E80 00416DC0  4B FF AC 11 */	bl readInt__6StreamFv
/* 80419E84 00416DC4  90 7F 00 00 */	stw r3, 0(r31)
/* 80419E88 00416DC8  7F C3 F3 78 */	mr r3, r30
/* 80419E8C 00416DCC  4B FF AC 05 */	bl readInt__6StreamFv
/* 80419E90 00416DD0  90 7F 00 04 */	stw r3, 4(r31)
/* 80419E94 00416DD4  7F C3 F3 78 */	mr r3, r30
/* 80419E98 00416DD8  4B FF AB F9 */	bl readInt__6StreamFv
/* 80419E9C 00416DDC  90 7F 00 08 */	stw r3, 8(r31)
/* 80419EA0 00416DE0  7F C4 F3 78 */	mr r4, r30
/* 80419EA4 00416DE4  38 7F 00 0C */	addi r3, r31, 0xc
/* 80419EA8 00416DE8  4B FF 7B FD */	bl read__5PlaneFR6Stream
/* 80419EAC 00416DEC  7F C4 F3 78 */	mr r4, r30
/* 80419EB0 00416DF0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80419EB4 00416DF4  4B FF 7B F1 */	bl read__5PlaneFR6Stream
/* 80419EB8 00416DF8  7F C4 F3 78 */	mr r4, r30
/* 80419EBC 00416DFC  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80419EC0 00416E00  4B FF 7B E5 */	bl read__5PlaneFR6Stream
/* 80419EC4 00416E04  7F C4 F3 78 */	mr r4, r30
/* 80419EC8 00416E08  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80419ECC 00416E0C  4B FF 7B D9 */	bl read__5PlaneFR6Stream
/* 80419ED0 00416E10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419ED4 00416E14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80419ED8 00416E18  83 C1 00 08 */	lwz r30, 8(r1)
/* 80419EDC 00416E1C  7C 08 03 A6 */	mtlr r0
/* 80419EE0 00416E20  38 21 00 10 */	addi r1, r1, 0x10
/* 80419EE4 00416E24  4E 80 00 20 */	blr 
.endfn readObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle

.fn writeObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle, weak
/* 80419EE8 00416E28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419EEC 00416E2C  7C 08 02 A6 */	mflr r0
/* 80419EF0 00416E30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80419EF4 00416E34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80419EF8 00416E38  7C BF 2B 78 */	mr r31, r5
/* 80419EFC 00416E3C  93 C1 00 08 */	stw r30, 8(r1)
/* 80419F00 00416E40  7C 9E 23 78 */	mr r30, r4
/* 80419F04 00416E44  7F C3 F3 78 */	mr r3, r30
/* 80419F08 00416E48  80 85 00 00 */	lwz r4, 0(r5)
/* 80419F0C 00416E4C  4B FF B8 B5 */	bl writeInt__6StreamFi
/* 80419F10 00416E50  80 9F 00 04 */	lwz r4, 4(r31)
/* 80419F14 00416E54  7F C3 F3 78 */	mr r3, r30
/* 80419F18 00416E58  4B FF B8 A9 */	bl writeInt__6StreamFi
/* 80419F1C 00416E5C  80 9F 00 08 */	lwz r4, 8(r31)
/* 80419F20 00416E60  7F C3 F3 78 */	mr r3, r30
/* 80419F24 00416E64  4B FF B8 9D */	bl writeInt__6StreamFi
/* 80419F28 00416E68  7F C4 F3 78 */	mr r4, r30
/* 80419F2C 00416E6C  38 7F 00 0C */	addi r3, r31, 0xc
/* 80419F30 00416E70  4B FF 7B 11 */	bl write__5PlaneFR6Stream
/* 80419F34 00416E74  7F C4 F3 78 */	mr r4, r30
/* 80419F38 00416E78  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80419F3C 00416E7C  4B FF 7B 05 */	bl write__5PlaneFR6Stream
/* 80419F40 00416E80  7F C4 F3 78 */	mr r4, r30
/* 80419F44 00416E84  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80419F48 00416E88  4B FF 7A F9 */	bl write__5PlaneFR6Stream
/* 80419F4C 00416E8C  7F C4 F3 78 */	mr r4, r30
/* 80419F50 00416E90  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80419F54 00416E94  4B FF 7A ED */	bl write__5PlaneFR6Stream
/* 80419F58 00416E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80419F5C 00416E9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80419F60 00416EA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80419F64 00416EA4  7C 08 03 A6 */	mtlr r0
/* 80419F68 00416EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80419F6C 00416EAC  4E 80 00 20 */	blr 
.endfn writeObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle

.fn getBoundBox__Q23Sys11GridDividerFR8BoundBox, weak
/* 80419F70 00416EB0  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 80419F74 00416EB4  D0 04 00 00 */	stfs f0, 0(r4)
/* 80419F78 00416EB8  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 80419F7C 00416EBC  D0 04 00 04 */	stfs f0, 4(r4)
/* 80419F80 00416EC0  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 80419F84 00416EC4  D0 04 00 08 */	stfs f0, 8(r4)
/* 80419F88 00416EC8  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80419F8C 00416ECC  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80419F90 00416ED0  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 80419F94 00416ED4  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80419F98 00416ED8  C0 03 00 40 */	lfs f0, 0x40(r3)
/* 80419F9C 00416EDC  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 80419FA0 00416EE0  4E 80 00 20 */	blr 
.endfn getBoundBox__Q23Sys11GridDividerFR8BoundBox

.fn setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei, weak
/* 80419FA4 00416EE4  90 83 00 24 */	stw r4, 0x24(r3)
/* 80419FA8 00416EE8  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80419FAC 00416EEC  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80419FB0 00416EF0  4E 80 00 20 */	blr 
.endfn setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei

.fn get__31ArrayContainer<Q23Sys8Triangle>FPv, weak
/* 80419FB4 00416EF4  1C 04 00 60 */	mulli r0, r4, 0x60
/* 80419FB8 00416EF8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80419FBC 00416EFC  7C 63 02 14 */	add r3, r3, r0
/* 80419FC0 00416F00  4E 80 00 20 */	blr 
.endfn get__31ArrayContainer<Q23Sys8Triangle>FPv

.fn getNext__31ArrayContainer<Q23Sys8Triangle>FPv, weak
/* 80419FC4 00416F04  38 64 00 01 */	addi r3, r4, 1
/* 80419FC8 00416F08  4E 80 00 20 */	blr 
.endfn getNext__31ArrayContainer<Q23Sys8Triangle>FPv

.fn getStart__31ArrayContainer<Q23Sys8Triangle>Fv, weak
/* 80419FCC 00416F0C  38 60 00 00 */	li r3, 0
/* 80419FD0 00416F10  4E 80 00 20 */	blr 
.endfn getStart__31ArrayContainer<Q23Sys8Triangle>Fv

.fn getEnd__31ArrayContainer<Q23Sys8Triangle>Fv, weak
/* 80419FD4 00416F14  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80419FD8 00416F18  4E 80 00 20 */	blr 
.endfn getEnd__31ArrayContainer<Q23Sys8Triangle>Fv

.fn getAt__31ArrayContainer<Q23Sys8Triangle>Fi, weak
/* 80419FDC 00416F1C  1C 04 00 60 */	mulli r0, r4, 0x60
/* 80419FE0 00416F20  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80419FE4 00416F24  7C 63 02 14 */	add r3, r3, r0
/* 80419FE8 00416F28  4E 80 00 20 */	blr 
.endfn getAt__31ArrayContainer<Q23Sys8Triangle>Fi

.fn getTo__31ArrayContainer<Q23Sys8Triangle>Fv, weak
/* 80419FEC 00416F2C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80419FF0 00416F30  4E 80 00 20 */	blr 
.endfn getTo__31ArrayContainer<Q23Sys8Triangle>Fv

.fn getObject__26Container<Q23Sys8Triangle>FPv, weak
/* 80419FF4 00416F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80419FF8 00416F38  7C 08 02 A6 */	mflr r0
/* 80419FFC 00416F3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041A000 00416F40  81 83 00 00 */	lwz r12, 0(r3)
/* 8041A004 00416F44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8041A008 00416F48  7D 89 03 A6 */	mtctr r12
/* 8041A00C 00416F4C  4E 80 04 21 */	bctrl 
/* 8041A010 00416F50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041A014 00416F54  7C 08 03 A6 */	mtlr r0
/* 8041A018 00416F58  38 21 00 10 */	addi r1, r1, 0x10
/* 8041A01C 00416F5C  4E 80 00 20 */	blr 
.endfn getObject__26Container<Q23Sys8Triangle>FPv

.fn getAt__26Container<Q23Sys8Triangle>Fi, weak
/* 8041A020 00416F60  38 60 00 00 */	li r3, 0
/* 8041A024 00416F64  4E 80 00 20 */	blr 
.endfn getAt__26Container<Q23Sys8Triangle>Fi

.fn getTo__26Container<Q23Sys8Triangle>Fv, weak
/* 8041A028 00416F68  38 60 00 00 */	li r3, 0
/* 8041A02C 00416F6C  4E 80 00 20 */	blr 
.endfn getTo__26Container<Q23Sys8Triangle>Fv
