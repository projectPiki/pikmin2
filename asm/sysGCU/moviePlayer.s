.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_moviePlayer_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80499F10, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80499F10
.balign 4
.obj lbl_80499F1C, local
	.asciz "moviePlayer"
.endobj lbl_80499F1C
.balign 4
.obj lbl_80499F28, local
	.asciz "moviePlayer.cpp"
.endobj lbl_80499F28
.balign 4
.obj lbl_80499F38, local
	.asciz "P2Assert"
.endobj lbl_80499F38
.balign 4
.obj lbl_80499F44, local # Shift-JIS
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A20
	.4byte 0x819A834C
	.4byte 0x8385815B
	.4byte 0x82C982CD
	.4byte 0x82A282E8
	.4byte 0x82AB82E7
	.4byte 0x82F182E6
	.4byte 0x81608149
	.4byte 0x81490A00
.endobj lbl_80499F44
.balign 4
.obj lbl_80499F6C, local
	.asciz "/user/Mukki/movie/%s/demo.stb"
.endobj lbl_80499F6C
.balign 4
.obj lbl_80499F8C, local
	.asciz "/user/Mukki/movie/%s/demo.szs"
.endobj lbl_80499F8C
.balign 4
.obj lbl_80499FAC, local
	.asciz "moviePl:play"
.endobj lbl_80499FAC
.balign 4
.obj lbl_80499FBC, local
	.asciz "The Bikkuri\n"
.endobj lbl_80499FBC
.balign 4
.obj lbl_80499FCC, local
	.asciz "[QUE_FAILED] %s\n"
.endobj lbl_80499FCC
.balign 4
.obj lbl_80499FE0, local # Shift-JIS
	.4byte 0x20834C83
	.4byte 0x85815B82
	.4byte 0xC982C882
	.4byte 0xC982E082
	.4byte 0xC882A282
	.4byte 0xBC815B81
	.4byte 0x5B28545E
	.4byte 0x54290A00
.endobj lbl_80499FE0
.balign 4
.obj lbl_8049A000, local
	.asciz "ObjectSystem"
.endobj lbl_8049A000
.balign 4
.obj lbl_8049A010, local
	.asciz "movieResource"
.endobj lbl_8049A010
.balign 4
.obj lbl_8049A020, local
	.asciz "demo.stb"
.endobj lbl_8049A020
.balign 4
.obj lbl_8049A02C, local # Shift-JIS
	.4byte 0x82DC82C0
	.4byte 0x82A98297
	.2byte 0x0A00
.endobj lbl_8049A02C
.balign 4
.obj lbl_8049A038, local # Shift-JIS
	.4byte 0x64656D6F
	.4byte 0x2E737A73
	.4byte 0x2082AA82
	.4byte 0xC882A282
	.4byte 0xC682BE82
	.4byte 0xDF82BE82
	.4byte 0xE682970A
	.byte 0
.endobj lbl_8049A038
.balign 4
.obj lbl_8049A058, local
	.asciz "resource open failed!\n"
.endobj lbl_8049A058
.balign 4
.obj lbl_8049A070, local
	.asciz "JStudio::TParse"
.endobj lbl_8049A070
.balign 4
.obj lbl_8049A080, local # Shift-JIS
	.4byte 0x8366815B
	.4byte 0x835E82F0
	.4byte 0x89F08EDF
	.4byte 0x82C582AB
	.4byte 0x82DC82B5
	.4byte 0x82A582F1
	.2byte 0x0A00
.endobj lbl_8049A080
.balign 4
.obj lbl_8049A09C, local
	.asciz "moviePl:loaddone"
.endobj lbl_8049A09C
.balign 4
.obj lbl_8049A0B0, local
	.asciz "moviePl:donecall"
.endobj lbl_8049A0B0
.balign 4
.obj lbl_8049A0C4, local
	.asciz "curr=%d init=%d free invalid\n"
.endobj lbl_8049A0C4
.balign 4
.obj lbl_8049A0E4, local
	.asciz "MyCamera"
.endobj lbl_8049A0E4
.balign 4
.obj lbl_8049A0F0, local
	.asciz "moviePl:unsuspend"
.endobj lbl_8049A0F0
.balign 4
.obj lbl_8049A104, local
	.asciz "moviePl:g33/susp"
.endobj lbl_8049A104
.balign 4
.obj lbl_8049A118, local
	.asciz "moviePl:skip"
.endobj lbl_8049A118
.balign 4
.obj lbl_8049A128, local
	.asciz "<suspend>"
.endobj lbl_8049A128
.balign 4
.obj lbl_8049A134, local
	.asciz "frame %4d"
.endobj lbl_8049A134
.balign 4
.obj lbl_8049A140, local
	.asciz "use  %.1fK"
.endobj lbl_8049A140
.balign 4
.obj lbl_8049A14C, local
	.asciz "heap %.1fK"
.endobj lbl_8049A14C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804EBFBC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte loadResource__Q24Game11MoviePlayerFv
.endobj lbl_804EBFBC
.obj lbl_804EBFC8, local
	.4byte .L_8042D6B0
	.4byte .L_8042D6B8
	.4byte .L_8042D734
	.4byte .L_8042D894
	.4byte .L_8042D8A0
	.4byte .L_8042D8AC
	.4byte .L_8042D8B8
	.4byte .L_8042DB64
.endobj lbl_804EBFC8
.obj __vt__Q24Game12MovieContext, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game12MovieContextFv
	.4byte getChildCount__5CNodeFv
	.4byte getChild__Q24Game12MovieContextFv
	.4byte getNext__Q24Game12MovieContextFv
.endobj __vt__Q24Game12MovieContext
.obj "__vt__30Delegate<Q24Game11MoviePlayer>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__30Delegate<Q24Game11MoviePlayer>Fv"
.endobj "__vt__30Delegate<Q24Game11MoviePlayer>"
.obj __vt__Q24Game11MoviePlayer, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game11MoviePlayerFv
.endobj __vt__Q24Game11MoviePlayer

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj mArchive__Q24Game11MoviePlayer, global
	.skip 0x4
.endobj mArchive__Q24Game11MoviePlayer
.obj moviePlayer__4Game, global
	.skip 0x4
.endobj moviePlayer__4Game

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520610, local
	.float 0.0
.endobj lbl_80520610
.obj lbl_80520614, local
	.float 57.295776
.endobj lbl_80520614
.obj lbl_80520618, local
	.float 250.0
.endobj lbl_80520618
.obj lbl_8052061C, local
	.float 0.43633235
.endobj lbl_8052061C
.obj lbl_80520620, local
	.float 0.5
.endobj lbl_80520620
.balign 8
.obj lbl_80520628, local
	.double 0.03333333507180214
.endobj lbl_80520628
.balign 4
.obj lbl_80520630, local
	.asciz "arc"
.endobj lbl_80520630
.balign 4
.obj lbl_80520634, local
	.asciz "message"
.endobj lbl_80520634
.balign 4
.obj lbl_8052063C, local
	.asciz "efx.jpc"
.endobj lbl_8052063C
.balign 4
.obj lbl_80520644, local
	.asciz "stb"
.endobj lbl_80520644
.balign 4
.obj lbl_80520648, local
	.float 1.1
.endobj lbl_80520648
.obj lbl_8052064C, local
	.float 1.0
.endobj lbl_8052064C
.obj lbl_80520650, local
	.float 10.0
.endobj lbl_80520650
.obj lbl_80520654, local
	.float 2.0
.endobj lbl_80520654
.balign 4
.obj lbl_80520658, local
	.asciz "camera"
.endobj lbl_80520658
.balign 4
.obj lbl_80520660, local
	.asciz "viewmat"
.endobj lbl_80520660
.balign 4
.obj lbl_80520668, local # pi
	.float 3.1415927
.endobj lbl_80520668
.obj lbl_8052066C, local
	.float 0.0055555557
.endobj lbl_8052066C
.balign 8
.obj lbl_80520670, local
	.8byte 0x4330000000000000
.endobj lbl_80520670

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q24Game11MoviePlayerFv, global
/* 8042C700 00429640  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042C704 00429644  7C 08 02 A6 */	mflr r0
/* 8042C708 00429648  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042C70C 0042964C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042C710 00429650  7C 7F 1B 78 */	mr r31, r3
/* 8042C714 00429654  4B BF 08 B9 */	bl __ct__11JKRDisposerFv
/* 8042C718 00429658  3C 80 80 4F */	lis r4, __vt__Q24Game11MoviePlayer@ha
/* 8042C71C 0042965C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8042C720 00429660  38 04 C0 0C */	addi r0, r4, __vt__Q24Game11MoviePlayer@l
/* 8042C724 00429664  90 1F 00 00 */	stw r0, 0(r31)
/* 8042C728 00429668  4B FF 80 F1 */	bl __ct__16DvdThreadCommandFv
/* 8042C72C 0042966C  38 7F 00 CC */	addi r3, r31, 0xcc
/* 8042C730 00429670  48 00 06 61 */	bl __ct__Q24Game12MovieContextFv
/* 8042C734 00429674  38 7F 01 28 */	addi r3, r31, 0x128
/* 8042C738 00429678  48 00 06 59 */	bl __ct__Q24Game12MovieContextFv
/* 8042C73C 0042967C  38 00 00 00 */	li r0, 0
/* 8042C740 00429680  3C 80 00 06 */	lis r4, 0x00060400@ha
/* 8042C744 00429684  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 8042C748 00429688  7F E3 FB 78 */	mr r3, r31
/* 8042C74C 0042968C  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042C750 00429690  38 84 04 00 */	addi r4, r4, 0x00060400@l
/* 8042C754 00429694  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 8042C758 00429698  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 8042C75C 0042969C  98 1F 01 F0 */	stb r0, 0x1f0(r31)
/* 8042C760 004296A0  98 1F 01 F1 */	stb r0, 0x1f1(r31)
/* 8042C764 004296A4  98 1F 01 F2 */	stb r0, 0x1f2(r31)
/* 8042C768 004296A8  98 1F 01 F3 */	stb r0, 0x1f3(r31)
/* 8042C76C 004296AC  90 0D 9B 50 */	stw r0, mArchive__Q24Game11MoviePlayer@sda21(r13)
/* 8042C770 004296B0  D0 1F 01 BC */	stfs f0, 0x1bc(r31)
/* 8042C774 004296B4  D0 1F 01 C0 */	stfs f0, 0x1c0(r31)
/* 8042C778 004296B8  D0 1F 01 C4 */	stfs f0, 0x1c4(r31)
/* 8042C77C 004296BC  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 8042C780 004296C0  90 1F 01 90 */	stw r0, 0x190(r31)
/* 8042C784 004296C4  90 1F 01 9C */	stw r0, 0x19c(r31)
/* 8042C788 004296C8  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 8042C78C 004296CC  90 1F 01 98 */	stw r0, 0x198(r31)
/* 8042C790 004296D0  90 1F 01 94 */	stw r0, 0x194(r31)
/* 8042C794 004296D4  98 1F 01 F0 */	stb r0, 0x1f0(r31)
/* 8042C798 004296D8  98 1F 01 F1 */	stb r0, 0x1f1(r31)
/* 8042C79C 004296DC  98 1F 01 F2 */	stb r0, 0x1f2(r31)
/* 8042C7A0 004296E0  98 1F 01 F3 */	stb r0, 0x1f3(r31)
/* 8042C7A4 004296E4  90 1F 00 B0 */	stw r0, 0xb0(r31)
/* 8042C7A8 004296E8  90 1F 00 B4 */	stw r0, 0xb4(r31)
/* 8042C7AC 004296EC  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 8042C7B0 004296F0  90 1F 01 B0 */	stw r0, 0x1b0(r31)
/* 8042C7B4 004296F4  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 8042C7B8 004296F8  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8042C7BC 004296FC  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 8042C7C0 00429700  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8042C7C4 00429704  90 1F 01 CC */	stw r0, 0x1cc(r31)
/* 8042C7C8 00429708  90 1F 00 AC */	stw r0, 0xac(r31)
/* 8042C7CC 0042970C  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 8042C7D0 00429710  48 00 01 45 */	bl allocMovieHeap__Q24Game11MoviePlayerFUl
/* 8042C7D4 00429714  7F E3 FB 78 */	mr r3, r31
/* 8042C7D8 00429718  48 00 06 69 */	bl allocContexts__Q24Game11MoviePlayerFv
/* 8042C7DC 0042971C  38 60 00 14 */	li r3, 0x14
/* 8042C7E0 00429720  4B BF 76 C5 */	bl __nw__FUl
/* 8042C7E4 00429724  28 03 00 00 */	cmplwi r3, 0
/* 8042C7E8 00429728  41 82 00 4C */	beq .L_8042C834
/* 8042C7EC 0042972C  3C 80 80 4F */	lis r4, lbl_804EBFBC@ha
/* 8042C7F0 00429730  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 8042C7F4 00429734  39 04 BF BC */	addi r8, r4, lbl_804EBFBC@l
/* 8042C7F8 00429738  3C 80 80 4F */	lis r4, "__vt__30Delegate<Q24Game11MoviePlayer>"@ha
/* 8042C7FC 0042973C  80 E8 00 00 */	lwz r7, 0(r8)
/* 8042C800 00429740  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 8042C804 00429744  80 C8 00 04 */	lwz r6, 4(r8)
/* 8042C808 00429748  38 04 C0 00 */	addi r0, r4, "__vt__30Delegate<Q24Game11MoviePlayer>"@l
/* 8042C80C 0042974C  80 88 00 08 */	lwz r4, 8(r8)
/* 8042C810 00429750  90 E1 00 08 */	stw r7, 8(r1)
/* 8042C814 00429754  90 A3 00 00 */	stw r5, 0(r3)
/* 8042C818 00429758  90 03 00 00 */	stw r0, 0(r3)
/* 8042C81C 0042975C  93 E3 00 04 */	stw r31, 4(r3)
/* 8042C820 00429760  90 E3 00 08 */	stw r7, 8(r3)
/* 8042C824 00429764  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8042C828 00429768  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8042C82C 0042976C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8042C830 00429770  90 83 00 10 */	stw r4, 0x10(r3)
.L_8042C834:
/* 8042C834 00429774  90 7F 01 A4 */	stw r3, 0x1a4(r31)
/* 8042C838 00429778  7F E3 FB 78 */	mr r3, r31
/* 8042C83C 0042977C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042C840 00429780  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042C844 00429784  7C 08 03 A6 */	mtlr r0
/* 8042C848 00429788  38 21 00 20 */	addi r1, r1, 0x20
/* 8042C84C 0042978C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game11MoviePlayerFv

.fn __dt__Q24Game12MovieContextFv, weak
/* 8042C850 00429790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C854 00429794  7C 08 02 A6 */	mflr r0
/* 8042C858 00429798  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C85C 0042979C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042C860 004297A0  7C 9F 23 78 */	mr r31, r4
/* 8042C864 004297A4  93 C1 00 08 */	stw r30, 8(r1)
/* 8042C868 004297A8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8042C86C 004297AC  41 82 00 28 */	beq .L_8042C894
/* 8042C870 004297B0  3C A0 80 4F */	lis r5, __vt__Q24Game12MovieContext@ha
/* 8042C874 004297B4  38 80 00 00 */	li r4, 0
/* 8042C878 004297B8  38 05 BF E8 */	addi r0, r5, __vt__Q24Game12MovieContext@l
/* 8042C87C 004297BC  90 1E 00 00 */	stw r0, 0(r30)
/* 8042C880 004297C0  4B FE 4D 09 */	bl __dt__5CNodeFv
/* 8042C884 004297C4  7F E0 07 35 */	extsh. r0, r31
/* 8042C888 004297C8  40 81 00 0C */	ble .L_8042C894
/* 8042C88C 004297CC  7F C3 F3 78 */	mr r3, r30
/* 8042C890 004297D0  4B BF 78 25 */	bl __dl__FPv
.L_8042C894:
/* 8042C894 004297D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C898 004297D8  7F C3 F3 78 */	mr r3, r30
/* 8042C89C 004297DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042C8A0 004297E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042C8A4 004297E4  7C 08 03 A6 */	mtlr r0
/* 8042C8A8 004297E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C8AC 004297EC  4E 80 00 20 */	blr 
.endfn __dt__Q24Game12MovieContextFv

.fn reset__Q24Game11MoviePlayerFv, global
/* 8042C8B0 004297F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C8B4 004297F4  7C 08 02 A6 */	mflr r0
/* 8042C8B8 004297F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C8BC 004297FC  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8042C8C0 00429800  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8042C8C4 00429804  41 82 00 08 */	beq .L_8042C8CC
/* 8042C8C8 00429808  48 00 16 7D */	bl stop__Q24Game11MoviePlayerFv
.L_8042C8CC:
/* 8042C8CC 0042980C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C8D0 00429810  7C 08 03 A6 */	mtlr r0
/* 8042C8D4 00429814  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C8D8 00429818  4E 80 00 20 */	blr 
.endfn reset__Q24Game11MoviePlayerFv

.fn getActiveOrima__Q24Game11MoviePlayerFv, global
/* 8042C8DC 0042981C  80 03 01 9C */	lwz r0, 0x19c(r3)
/* 8042C8E0 00429820  28 00 00 00 */	cmplwi r0, 0
/* 8042C8E4 00429824  41 82 00 0C */	beq .L_8042C8F0
/* 8042C8E8 00429828  7C 03 03 78 */	mr r3, r0
/* 8042C8EC 0042982C  4E 80 00 20 */	blr 
.L_8042C8F0:
/* 8042C8F0 00429830  80 63 01 8C */	lwz r3, 0x18c(r3)
/* 8042C8F4 00429834  4E 80 00 20 */	blr 
.endfn getActiveOrima__Q24Game11MoviePlayerFv

.fn getActiveGameCamera__Q24Game11MoviePlayerFv, global
/* 8042C8F8 00429838  80 03 01 A0 */	lwz r0, 0x1a0(r3)
/* 8042C8FC 0042983C  28 00 00 00 */	cmplwi r0, 0
/* 8042C900 00429840  41 82 00 0C */	beq .L_8042C90C
/* 8042C904 00429844  7C 03 03 78 */	mr r3, r0
/* 8042C908 00429848  4E 80 00 20 */	blr 
.L_8042C90C:
/* 8042C90C 0042984C  80 63 01 90 */	lwz r3, 0x190(r3)
/* 8042C910 00429850  4E 80 00 20 */	blr 
.endfn getActiveGameCamera__Q24Game11MoviePlayerFv

.fn allocMovieHeap__Q24Game11MoviePlayerFUl, global
/* 8042C914 00429854  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042C918 00429858  7C 08 02 A6 */	mflr r0
/* 8042C91C 0042985C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042C920 00429860  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042C924 00429864  7C 9F 23 78 */	mr r31, r4
/* 8042C928 00429868  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8042C92C 0042986C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8042C930 00429870  7C 7D 1B 78 */	mr r29, r3
/* 8042C934 00429874  80 03 01 B0 */	lwz r0, 0x1b0(r3)
/* 8042C938 00429878  28 00 00 00 */	cmplwi r0, 0
/* 8042C93C 0042987C  41 82 00 20 */	beq .L_8042C95C
/* 8042C940 00429880  3C 60 80 4A */	lis r3, lbl_80499F28@ha
/* 8042C944 00429884  3C A0 80 4A */	lis r5, lbl_80499F38@ha
/* 8042C948 00429888  38 63 9F 28 */	addi r3, r3, lbl_80499F28@l
/* 8042C94C 0042988C  38 80 01 FF */	li r4, 0x1ff
/* 8042C950 00429890  38 A5 9F 38 */	addi r5, r5, lbl_80499F38@l
/* 8042C954 00429894  4C C6 31 82 */	crclr 6
/* 8042C958 00429898  4B BF DC E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042C95C:
/* 8042C95C 0042989C  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8042C960 004298A0  7F E3 FB 78 */	mr r3, r31
/* 8042C964 004298A4  38 A0 00 01 */	li r5, 1
/* 8042C968 004298A8  7F C4 F3 78 */	mr r4, r30
/* 8042C96C 004298AC  4B BF 84 05 */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 8042C970 004298B0  80 1D 01 B0 */	lwz r0, 0x1b0(r29)
/* 8042C974 004298B4  7C 7F 1B 78 */	mr r31, r3
/* 8042C978 004298B8  28 00 00 00 */	cmplwi r0, 0
/* 8042C97C 004298BC  41 82 00 20 */	beq .L_8042C99C
/* 8042C980 004298C0  3C 60 80 4A */	lis r3, lbl_80499F28@ha
/* 8042C984 004298C4  3C A0 80 4A */	lis r5, lbl_80499F38@ha
/* 8042C988 004298C8  38 63 9F 28 */	addi r3, r3, lbl_80499F28@l
/* 8042C98C 004298CC  38 80 01 F5 */	li r4, 0x1f5
/* 8042C990 004298D0  38 A5 9F 38 */	addi r5, r5, lbl_80499F38@l
/* 8042C994 004298D4  4C C6 31 82 */	crclr 6
/* 8042C998 004298D8  4B BF DC A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042C99C:
/* 8042C99C 004298DC  93 FD 01 B0 */	stw r31, 0x1b0(r29)
/* 8042C9A0 004298E0  7F E3 FB 78 */	mr r3, r31
/* 8042C9A4 004298E4  4B BF 6E 3D */	bl getTotalFreeSize__7JKRHeapFv
/* 8042C9A8 004298E8  90 7D 01 B4 */	stw r3, 0x1b4(r29)
/* 8042C9AC 004298EC  7F C3 F3 78 */	mr r3, r30
/* 8042C9B0 004298F0  4B BF 6B F5 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8042C9B4 004298F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042C9B8 004298F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042C9BC 004298FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8042C9C0 00429900  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8042C9C4 00429904  7C 08 03 A6 */	mtlr r0
/* 8042C9C8 00429908  38 21 00 20 */	addi r1, r1, 0x20
/* 8042C9CC 0042990C  4E 80 00 20 */	blr 
.endfn allocMovieHeap__Q24Game11MoviePlayerFUl

.fn play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg, global
/* 8042C9D0 00429910  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C9D4 00429914  7C 08 02 A6 */	mflr r0
/* 8042C9D8 00429918  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C9DC 0042991C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042C9E0 00429920  7C 9F 23 78 */	mr r31, r4
/* 8042C9E4 00429924  93 C1 00 08 */	stw r30, 8(r1)
/* 8042C9E8 00429928  7C 7E 1B 78 */	mr r30, r3
/* 8042C9EC 0042992C  80 84 00 00 */	lwz r4, 0(r4)
/* 8042C9F0 00429930  80 BF 00 04 */	lwz r5, 4(r31)
/* 8042C9F4 00429934  48 00 03 79 */	bl findConfig__Q24Game11MoviePlayerFPcPc
/* 8042C9F8 00429938  7C 64 1B 79 */	or. r4, r3, r3
/* 8042C9FC 0042993C  41 82 00 18 */	beq .L_8042CA14
/* 8042CA00 00429940  7F C3 F3 78 */	mr r3, r30
/* 8042CA04 00429944  7F E5 FB 78 */	mr r5, r31
/* 8042CA08 00429948  38 C0 00 00 */	li r6, 0
/* 8042CA0C 0042994C  48 00 00 25 */	bl play__Q24Game11MoviePlayerFPQ24Game11MovieConfigRQ24Game12MoviePlayArgb
/* 8042CA10 00429950  48 00 00 08 */	b .L_8042CA18
.L_8042CA14:
/* 8042CA14 00429954  38 60 00 01 */	li r3, 1
.L_8042CA18:
/* 8042CA18 00429958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042CA1C 0042995C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042CA20 00429960  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042CA24 00429964  7C 08 03 A6 */	mtlr r0
/* 8042CA28 00429968  38 21 00 10 */	addi r1, r1, 0x10
/* 8042CA2C 0042996C  4E 80 00 20 */	blr 
.endfn play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

.fn play__Q24Game11MoviePlayerFPQ24Game11MovieConfigRQ24Game12MoviePlayArgb, global
/* 8042CA30 00429970  94 21 FB E0 */	stwu r1, -0x420(r1)
/* 8042CA34 00429974  7C 08 02 A6 */	mflr r0
/* 8042CA38 00429978  3C E0 80 4A */	lis r7, lbl_80499F10@ha
/* 8042CA3C 0042997C  90 01 04 24 */	stw r0, 0x424(r1)
/* 8042CA40 00429980  BF 61 04 0C */	stmw r27, 0x40c(r1)
/* 8042CA44 00429984  7C 7C 1B 78 */	mr r28, r3
/* 8042CA48 00429988  7C 9B 23 78 */	mr r27, r4
/* 8042CA4C 0042998C  7C BD 2B 78 */	mr r29, r5
/* 8042CA50 00429990  7C DE 33 78 */	mr r30, r6
/* 8042CA54 00429994  3B E7 9F 10 */	addi r31, r7, lbl_80499F10@l
/* 8042CA58 00429998  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8042CA5C 0042999C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8042CA60 004299A0  41 82 00 44 */	beq .L_8042CAA4
/* 8042CA64 004299A4  48 00 05 D1 */	bl getNewContext__Q24Game11MoviePlayerFv
/* 8042CA68 004299A8  7C 64 1B 79 */	or. r4, r3, r3
/* 8042CA6C 004299AC  40 82 00 20 */	bne .L_8042CA8C
/* 8042CA70 004299B0  38 7F 00 18 */	addi r3, r31, 0x18
/* 8042CA74 004299B4  38 BF 00 34 */	addi r5, r31, 0x34
/* 8042CA78 004299B8  38 80 02 30 */	li r4, 0x230
/* 8042CA7C 004299BC  4C C6 31 82 */	crclr 6
/* 8042CA80 004299C0  4B BF DB C1 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8042CA84 004299C4  38 60 00 03 */	li r3, 3
/* 8042CA88 004299C8  48 00 02 D0 */	b .L_8042CD58
.L_8042CA8C:
/* 8042CA8C 004299CC  7F 83 E3 78 */	mr r3, r28
/* 8042CA90 004299D0  7F 65 DB 78 */	mr r5, r27
/* 8042CA94 004299D4  7F A6 EB 78 */	mr r6, r29
/* 8042CA98 004299D8  48 00 06 11 */	bl setContext__Q24Game11MoviePlayerFPQ24Game12MovieContextPQ24Game11MovieConfigRQ24Game12MoviePlayArg
/* 8042CA9C 004299DC  38 60 00 02 */	li r3, 2
/* 8042CAA0 004299E0  48 00 02 B8 */	b .L_8042CD58
.L_8042CAA4:
/* 8042CAA4 004299E4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8042CAA8 004299E8  28 03 00 00 */	cmplwi r3, 0
/* 8042CAAC 004299EC  41 82 00 08 */	beq .L_8042CAB4
/* 8042CAB0 004299F0  4B FD 1D E9 */	bl stopFinalFloorSound__Q26Screen9Game2DMgrFv
.L_8042CAB4:
/* 8042CAB4 004299F4  80 1C 01 8C */	lwz r0, 0x18c(r28)
/* 8042CAB8 004299F8  38 80 00 02 */	li r4, 2
/* 8042CABC 004299FC  90 1C 01 9C */	stw r0, 0x19c(r28)
/* 8042CAC0 00429A00  80 1C 01 90 */	lwz r0, 0x190(r28)
/* 8042CAC4 00429A04  90 1C 01 A0 */	stw r0, 0x1a0(r28)
/* 8042CAC8 00429A08  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8042CACC 00429A0C  4B E2 59 A1 */	bl controllerLock__Q24Game9CameraMgrFi
/* 8042CAD0 00429A10  7F 63 DB 78 */	mr r3, r27
/* 8042CAD4 00429A14  48 00 4D CD */	bl dump__Q24Game11MovieConfigFv
/* 8042CAD8 00429A18  93 7C 00 B0 */	stw r27, 0xb0(r28)
/* 8042CADC 00429A1C  28 1B 00 00 */	cmplwi r27, 0
/* 8042CAE0 00429A20  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 8042CAE4 00429A24  90 1C 00 B8 */	stw r0, 0xb8(r28)
/* 8042CAE8 00429A28  40 82 00 18 */	bne .L_8042CB00
/* 8042CAEC 00429A2C  38 7F 00 18 */	addi r3, r31, 0x18
/* 8042CAF0 00429A30  38 BF 00 28 */	addi r5, r31, 0x28
/* 8042CAF4 00429A34  38 80 02 52 */	li r4, 0x252
/* 8042CAF8 00429A38  4C C6 31 82 */	crclr 6
/* 8042CAFC 00429A3C  4B BF DB 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042CB00:
/* 8042CB00 00429A40  38 61 02 08 */	addi r3, r1, 0x208
/* 8042CB04 00429A44  38 9F 00 5C */	addi r4, r31, 0x5c
/* 8042CB08 00429A48  38 BB 00 45 */	addi r5, r27, 0x45
/* 8042CB0C 00429A4C  4C C6 31 82 */	crclr 6
/* 8042CB10 00429A50  4B C9 A9 29 */	bl sprintf
/* 8042CB14 00429A54  38 61 00 08 */	addi r3, r1, 8
/* 8042CB18 00429A58  38 9F 00 7C */	addi r4, r31, 0x7c
/* 8042CB1C 00429A5C  38 BB 00 45 */	addi r5, r27, 0x45
/* 8042CB20 00429A60  4C C6 31 82 */	crclr 6
/* 8042CB24 00429A64  4B C9 A9 15 */	bl sprintf
/* 8042CB28 00429A68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042CB2C 00429A6C  38 BF 00 9C */	addi r5, r31, 0x9c
/* 8042CB30 00429A70  38 80 00 01 */	li r4, 1
/* 8042CB34 00429A74  38 C0 00 03 */	li r6, 3
/* 8042CB38 00429A78  4B D8 84 5D */	bl setPause__Q24Game10GameSystemFbPci
/* 8042CB3C 00429A7C  98 7C 00 88 */	stb r3, 0x88(r28)
/* 8042CB40 00429A80  38 60 00 00 */	li r3, 0
/* 8042CB44 00429A84  90 7C 00 A8 */	stw r3, 0xa8(r28)
/* 8042CB48 00429A88  80 9C 00 B0 */	lwz r4, 0xb0(r28)
/* 8042CB4C 00429A8C  88 A4 00 24 */	lbz r5, 0x24(r4)
/* 8042CB50 00429A90  54 A0 07 FF */	clrlwi. r0, r5, 0x1f
/* 8042CB54 00429A94  40 82 00 FC */	bne .L_8042CC50
/* 8042CB58 00429A98  54 A0 07 7B */	rlwinm. r0, r5, 0, 0x1d, 0x1d
/* 8042CB5C 00429A9C  40 82 00 0C */	bne .L_8042CB68
/* 8042CB60 00429AA0  54 A0 07 39 */	rlwinm. r0, r5, 0, 0x1c, 0x1c
/* 8042CB64 00429AA4  41 82 00 08 */	beq .L_8042CB6C
.L_8042CB68:
/* 8042CB68 00429AA8  38 60 00 01 */	li r3, 1
.L_8042CB6C:
/* 8042CB6C 00429AAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042CB70 00429AB0  41 82 00 80 */	beq .L_8042CBF0
/* 8042CB74 00429AB4  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 8042CB78 00429AB8  C0 22 22 B4 */	lfs f1, lbl_80520614@sda21(r2)
/* 8042CB7C 00429ABC  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 8042CB80 00429AC0  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8042CB84 00429AC4  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 8042CB88 00429AC8  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 8042CB8C 00429ACC  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8042CB90 00429AD0  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 8042CB94 00429AD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8042CB98 00429AD8  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 8042CB9C 00429ADC  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042CBA0 00429AE0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8042CBA4 00429AE4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8042CBA8 00429AE8  41 82 00 A8 */	beq .L_8042CC50
/* 8042CBAC 00429AEC  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 8042CBB0 00429AF0  28 00 00 00 */	cmplwi r0, 0
/* 8042CBB4 00429AF4  40 82 00 18 */	bne .L_8042CBCC
/* 8042CBB8 00429AF8  38 7F 00 18 */	addi r3, r31, 0x18
/* 8042CBBC 00429AFC  38 BF 00 AC */	addi r5, r31, 0xac
/* 8042CBC0 00429B00  38 80 02 61 */	li r4, 0x261
/* 8042CBC4 00429B04  4C C6 31 82 */	crclr 6
/* 8042CBC8 00429B08  4B BF DA 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042CBCC:
/* 8042CBCC 00429B0C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8042CBD0 00429B10  38 9C 00 8C */	addi r4, r28, 0x8c
/* 8042CBD4 00429B14  C0 22 22 B8 */	lfs f1, lbl_80520618@sda21(r2)
/* 8042CBD8 00429B18  C0 42 22 BC */	lfs f2, lbl_8052061C@sda21(r2)
/* 8042CBDC 00429B1C  4B D3 5B 65 */	bl "getBestAngle__Q24Game6MapMgrFR10Vector3<f>ff"
/* 8042CBE0 00429B20  C0 02 22 B4 */	lfs f0, lbl_80520614@sda21(r2)
/* 8042CBE4 00429B24  EC 00 00 72 */	fmuls f0, f0, f1
/* 8042CBE8 00429B28  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 8042CBEC 00429B2C  48 00 00 64 */	b .L_8042CC50
.L_8042CBF0:
/* 8042CBF0 00429B30  54 A0 06 F7 */	rlwinm. r0, r5, 0, 0x1b, 0x1b
/* 8042CBF4 00429B34  41 82 00 38 */	beq .L_8042CC2C
/* 8042CBF8 00429B38  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 8042CBFC 00429B3C  C0 22 22 B4 */	lfs f1, lbl_80520614@sda21(r2)
/* 8042CC00 00429B40  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 8042CC04 00429B44  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8042CC08 00429B48  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 8042CC0C 00429B4C  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 8042CC10 00429B50  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8042CC14 00429B54  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 8042CC18 00429B58  EC 01 00 32 */	fmuls f0, f1, f0
/* 8042CC1C 00429B5C  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 8042CC20 00429B60  80 1D 00 30 */	lwz r0, 0x30(r29)
/* 8042CC24 00429B64  90 1C 00 A8 */	stw r0, 0xa8(r28)
/* 8042CC28 00429B68  48 00 00 28 */	b .L_8042CC50
.L_8042CC2C:
/* 8042CC2C 00429B6C  C0 04 00 A4 */	lfs f0, 0xa4(r4)
/* 8042CC30 00429B70  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 8042CC34 00429B74  C0 04 00 A8 */	lfs f0, 0xa8(r4)
/* 8042CC38 00429B78  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 8042CC3C 00429B7C  C0 04 00 AC */	lfs f0, 0xac(r4)
/* 8042CC40 00429B80  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8042CC44 00429B84  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042CC48 00429B88  C0 03 00 B0 */	lfs f0, 0xb0(r3)
/* 8042CC4C 00429B8C  D0 1C 00 98 */	stfs f0, 0x98(r28)
.L_8042CC50:
/* 8042CC50 00429B90  80 7C 01 F0 */	lwz r3, 0x1f0(r28)
/* 8042CC54 00429B94  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8042CC58 00429B98  38 00 00 01 */	li r0, 1
/* 8042CC5C 00429B9C  54 63 07 FA */	rlwinm r3, r3, 0, 0x1f, 0x1d
/* 8042CC60 00429BA0  90 7C 01 F0 */	stw r3, 0x1f0(r28)
/* 8042CC64 00429BA4  80 7C 01 F0 */	lwz r3, 0x1f0(r28)
/* 8042CC68 00429BA8  60 63 00 01 */	ori r3, r3, 1
/* 8042CC6C 00429BAC  90 7C 01 F0 */	stw r3, 0x1f0(r28)
/* 8042CC70 00429BB0  80 7C 01 F0 */	lwz r3, 0x1f0(r28)
/* 8042CC74 00429BB4  54 63 00 7E */	clrlwi r3, r3, 1
/* 8042CC78 00429BB8  90 7C 01 F0 */	stw r3, 0x1f0(r28)
/* 8042CC7C 00429BBC  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 8042CC80 00429BC0  90 7C 00 B4 */	stw r3, 0xb4(r28)
/* 8042CC84 00429BC4  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 8042CC88 00429BC8  90 7C 00 BC */	stw r3, 0xbc(r28)
/* 8042CC8C 00429BCC  80 7D 00 08 */	lwz r3, 8(r29)
/* 8042CC90 00429BD0  90 7C 00 C0 */	stw r3, 0xc0(r28)
/* 8042CC94 00429BD4  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8042CC98 00429BD8  90 7C 00 C4 */	stw r3, 0xc4(r28)
/* 8042CC9C 00429BDC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8042CCA0 00429BE0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8042CCA4 00429BE4  98 03 00 92 */	stb r0, 0x92(r3)
/* 8042CCA8 00429BE8  40 82 00 8C */	bne .L_8042CD34
/* 8042CCAC 00429BEC  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042CCB0 00429BF0  A0 03 00 C0 */	lhz r0, 0xc0(r3)
/* 8042CCB4 00429BF4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8042CCB8 00429BF8  41 82 00 7C */	beq .L_8042CD34
/* 8042CCBC 00429BFC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042CCC0 00429C00  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8042CCC4 00429C04  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8042CCC8 00429C08  28 03 00 00 */	cmplwi r3, 0
/* 8042CCCC 00429C0C  41 82 00 3C */	beq .L_8042CD08
/* 8042CCD0 00429C10  81 83 00 00 */	lwz r12, 0(r3)
/* 8042CCD4 00429C14  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8042CCD8 00429C18  7D 89 03 A6 */	mtctr r12
/* 8042CCDC 00429C1C  4E 80 04 21 */	bctrl 
/* 8042CCE0 00429C20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042CCE4 00429C24  41 82 00 24 */	beq .L_8042CD08
/* 8042CCE8 00429C28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042CCEC 00429C2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042CCF0 00429C30  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8042CCF4 00429C34  7D 89 03 A6 */	mtctr r12
/* 8042CCF8 00429C38  4E 80 04 21 */	bctrl 
/* 8042CCFC 00429C3C  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042CD00 00429C40  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 8042CD04 00429C44  48 00 00 24 */	b .L_8042CD28
.L_8042CD08:
/* 8042CD08 00429C48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042CD0C 00429C4C  C0 22 22 C0 */	lfs f1, lbl_80520620@sda21(r2)
/* 8042CD10 00429C50  81 83 00 00 */	lwz r12, 0(r3)
/* 8042CD14 00429C54  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8042CD18 00429C58  7D 89 03 A6 */	mtctr r12
/* 8042CD1C 00429C5C  4E 80 04 21 */	bctrl 
/* 8042CD20 00429C60  C0 02 22 C0 */	lfs f0, lbl_80520620@sda21(r2)
/* 8042CD24 00429C64  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
.L_8042CD28:
/* 8042CD28 00429C68  38 00 00 01 */	li r0, 1
/* 8042CD2C 00429C6C  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042CD30 00429C70  48 00 00 24 */	b .L_8042CD54
.L_8042CD34:
/* 8042CD34 00429C74  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042CD38 00429C78  38 9C 00 1C */	addi r4, r28, 0x1c
/* 8042CD3C 00429C7C  80 BC 01 A4 */	lwz r5, 0x1a4(r28)
/* 8042CD40 00429C80  4B FF 61 F9 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8042CD44 00429C84  38 00 00 02 */	li r0, 2
/* 8042CD48 00429C88  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042CD4C 00429C8C  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042CD50 00429C90  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
.L_8042CD54:
/* 8042CD54 00429C94  38 60 00 00 */	li r3, 0
.L_8042CD58:
/* 8042CD58 00429C98  BB 61 04 0C */	lmw r27, 0x40c(r1)
/* 8042CD5C 00429C9C  80 01 04 24 */	lwz r0, 0x424(r1)
/* 8042CD60 00429CA0  7C 08 03 A6 */	mtlr r0
/* 8042CD64 00429CA4  38 21 04 20 */	addi r1, r1, 0x420
/* 8042CD68 00429CA8  4E 80 00 20 */	blr 
.endfn play__Q24Game11MoviePlayerFPQ24Game11MovieConfigRQ24Game12MoviePlayArgb

.fn findConfig__Q24Game11MoviePlayerFPcPc, global
/* 8042CD6C 00429CAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042CD70 00429CB0  7C 08 02 A6 */	mflr r0
/* 8042CD74 00429CB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042CD78 00429CB8  80 6D 9B 98 */	lwz r3, movieList__4Game@sda21(r13)
/* 8042CD7C 00429CBC  48 00 51 05 */	bl findConfig__Q24Game9MovieListFPcPc
/* 8042CD80 00429CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042CD84 00429CC4  7C 08 03 A6 */	mtlr r0
/* 8042CD88 00429CC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8042CD8C 00429CCC  4E 80 00 20 */	blr 
.endfn findConfig__Q24Game11MoviePlayerFPcPc

.fn __ct__Q24Game12MovieContextFv, global
/* 8042CD90 00429CD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042CD94 00429CD4  7C 08 02 A6 */	mflr r0
/* 8042CD98 00429CD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042CD9C 00429CDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042CDA0 00429CE0  7C 7F 1B 78 */	mr r31, r3
/* 8042CDA4 00429CE4  4B FE 45 ED */	bl __ct__5CNodeFv
/* 8042CDA8 00429CE8  3C 60 80 4F */	lis r3, __vt__Q24Game12MovieContext@ha
/* 8042CDAC 00429CEC  38 00 00 00 */	li r0, 0
/* 8042CDB0 00429CF0  38 63 BF E8 */	addi r3, r3, __vt__Q24Game12MovieContext@l
/* 8042CDB4 00429CF4  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042CDB8 00429CF8  90 7F 00 00 */	stw r3, 0(r31)
/* 8042CDBC 00429CFC  7F E3 FB 78 */	mr r3, r31
/* 8042CDC0 00429D00  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8042CDC4 00429D04  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8042CDC8 00429D08  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8042CDCC 00429D0C  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8042CDD0 00429D10  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8042CDD4 00429D14  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8042CDD8 00429D18  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8042CDDC 00429D1C  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8042CDE0 00429D20  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8042CDE4 00429D24  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8042CDE8 00429D28  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8042CDEC 00429D2C  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8042CDF0 00429D30  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8042CDF4 00429D34  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8042CDF8 00429D38  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8042CDFC 00429D3C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8042CE00 00429D40  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8042CE04 00429D44  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8042CE08 00429D48  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8042CE0C 00429D4C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8042CE10 00429D50  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8042CE14 00429D54  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8042CE18 00429D58  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8042CE1C 00429D5C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8042CE20 00429D60  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8042CE24 00429D64  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8042CE28 00429D68  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8042CE2C 00429D6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042CE30 00429D70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042CE34 00429D74  7C 08 03 A6 */	mtlr r0
/* 8042CE38 00429D78  38 21 00 10 */	addi r1, r1, 0x10
/* 8042CE3C 00429D7C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game12MovieContextFv

.fn allocContexts__Q24Game11MoviePlayerFv, global
/* 8042CE40 00429D80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042CE44 00429D84  7C 08 02 A6 */	mflr r0
/* 8042CE48 00429D88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042CE4C 00429D8C  38 00 00 08 */	li r0, 8
/* 8042CE50 00429D90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042CE54 00429D94  93 C1 00 08 */	stw r30, 8(r1)
/* 8042CE58 00429D98  7C 7E 1B 78 */	mr r30, r3
/* 8042CE5C 00429D9C  90 03 01 88 */	stw r0, 0x188(r3)
/* 8042CE60 00429DA0  38 00 00 00 */	li r0, 0
/* 8042CE64 00429DA4  90 03 01 84 */	stw r0, 0x184(r3)
/* 8042CE68 00429DA8  83 E3 01 88 */	lwz r31, 0x188(r3)
/* 8042CE6C 00429DAC  1C 7F 00 5C */	mulli r3, r31, 0x5c
/* 8042CE70 00429DB0  38 63 00 10 */	addi r3, r3, 0x10
/* 8042CE74 00429DB4  4B BF 71 39 */	bl __nwa__FUl
/* 8042CE78 00429DB8  3C 80 80 43 */	lis r4, __ct__Q24Game12MovieContextFv@ha
/* 8042CE7C 00429DBC  3C A0 80 43 */	lis r5, __dt__Q24Game12MovieContextFv@ha
/* 8042CE80 00429DC0  38 84 CD 90 */	addi r4, r4, __ct__Q24Game12MovieContextFv@l
/* 8042CE84 00429DC4  7F E7 FB 78 */	mr r7, r31
/* 8042CE88 00429DC8  38 A5 C8 50 */	addi r5, r5, __dt__Q24Game12MovieContextFv@l
/* 8042CE8C 00429DCC  38 C0 00 5C */	li r6, 0x5c
/* 8042CE90 00429DD0  4B C9 4B 61 */	bl __construct_new_array
/* 8042CE94 00429DD4  90 7E 00 C8 */	stw r3, 0xc8(r30)
/* 8042CE98 00429DD8  38 00 00 00 */	li r0, 0
/* 8042CE9C 00429DDC  7F C3 F3 78 */	mr r3, r30
/* 8042CEA0 00429DE0  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 8042CEA4 00429DE4  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 8042CEA8 00429DE8  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 8042CEAC 00429DEC  90 1E 00 D0 */	stw r0, 0xd0(r30)
/* 8042CEB0 00429DF0  90 1E 01 38 */	stw r0, 0x138(r30)
/* 8042CEB4 00429DF4  90 1E 01 34 */	stw r0, 0x134(r30)
/* 8042CEB8 00429DF8  90 1E 01 30 */	stw r0, 0x130(r30)
/* 8042CEBC 00429DFC  90 1E 01 2C */	stw r0, 0x12c(r30)
/* 8042CEC0 00429E00  48 00 00 1D */	bl clearContexts__Q24Game11MoviePlayerFv
/* 8042CEC4 00429E04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042CEC8 00429E08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042CECC 00429E0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042CED0 00429E10  7C 08 03 A6 */	mtlr r0
/* 8042CED4 00429E14  38 21 00 10 */	addi r1, r1, 0x10
/* 8042CED8 00429E18  4E 80 00 20 */	blr 
.endfn allocContexts__Q24Game11MoviePlayerFv

.fn clearContexts__Q24Game11MoviePlayerFv, global
/* 8042CEDC 00429E1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042CEE0 00429E20  7C 08 02 A6 */	mflr r0
/* 8042CEE4 00429E24  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042CEE8 00429E28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042CEEC 00429E2C  3B E0 00 00 */	li r31, 0
/* 8042CEF0 00429E30  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8042CEF4 00429E34  7F FE FB 78 */	mr r30, r31
/* 8042CEF8 00429E38  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8042CEFC 00429E3C  3B A0 00 00 */	li r29, 0
/* 8042CF00 00429E40  93 81 00 10 */	stw r28, 0x10(r1)
/* 8042CF04 00429E44  7C 7C 1B 78 */	mr r28, r3
/* 8042CF08 00429E48  93 E3 00 DC */	stw r31, 0xdc(r3)
/* 8042CF0C 00429E4C  93 E3 00 D8 */	stw r31, 0xd8(r3)
/* 8042CF10 00429E50  93 E3 00 D4 */	stw r31, 0xd4(r3)
/* 8042CF14 00429E54  93 E3 00 D0 */	stw r31, 0xd0(r3)
/* 8042CF18 00429E58  93 E3 01 38 */	stw r31, 0x138(r3)
/* 8042CF1C 00429E5C  93 E3 01 34 */	stw r31, 0x134(r3)
/* 8042CF20 00429E60  93 E3 01 30 */	stw r31, 0x130(r3)
/* 8042CF24 00429E64  93 E3 01 2C */	stw r31, 0x12c(r3)
/* 8042CF28 00429E68  48 00 00 2C */	b .L_8042CF54
.L_8042CF2C:
/* 8042CF2C 00429E6C  80 1C 00 C8 */	lwz r0, 0xc8(r28)
/* 8042CF30 00429E70  38 7C 01 28 */	addi r3, r28, 0x128
/* 8042CF34 00429E74  7C 80 F2 14 */	add r4, r0, r30
/* 8042CF38 00429E78  93 E4 00 10 */	stw r31, 0x10(r4)
/* 8042CF3C 00429E7C  93 E4 00 0C */	stw r31, 0xc(r4)
/* 8042CF40 00429E80  93 E4 00 08 */	stw r31, 8(r4)
/* 8042CF44 00429E84  93 E4 00 04 */	stw r31, 4(r4)
/* 8042CF48 00429E88  4B FE 44 C1 */	bl add__5CNodeFP5CNode
/* 8042CF4C 00429E8C  3B DE 00 5C */	addi r30, r30, 0x5c
/* 8042CF50 00429E90  3B BD 00 01 */	addi r29, r29, 1
.L_8042CF54:
/* 8042CF54 00429E94  80 1C 01 88 */	lwz r0, 0x188(r28)
/* 8042CF58 00429E98  7C 1D 00 00 */	cmpw r29, r0
/* 8042CF5C 00429E9C  41 80 FF D0 */	blt .L_8042CF2C
/* 8042CF60 00429EA0  38 00 00 00 */	li r0, 0
/* 8042CF64 00429EA4  90 1C 01 84 */	stw r0, 0x184(r28)
/* 8042CF68 00429EA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042CF6C 00429EAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042CF70 00429EB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8042CF74 00429EB4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8042CF78 00429EB8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8042CF7C 00429EBC  7C 08 03 A6 */	mtlr r0
/* 8042CF80 00429EC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8042CF84 00429EC4  4E 80 00 20 */	blr 
.endfn clearContexts__Q24Game11MoviePlayerFv

.fn clearSuspendedDemo__Q24Game11MoviePlayerFv, global
/* 8042CF88 00429EC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042CF8C 00429ECC  7C 08 02 A6 */	mflr r0
/* 8042CF90 00429ED0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042CF94 00429ED4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8042CF98 00429ED8  3B E0 00 00 */	li r31, 0
/* 8042CF9C 00429EDC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8042CFA0 00429EE0  7F FE FB 78 */	mr r30, r31
/* 8042CFA4 00429EE4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8042CFA8 00429EE8  7F FD FB 78 */	mr r29, r31
/* 8042CFAC 00429EEC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8042CFB0 00429EF0  7C 7C 1B 78 */	mr r28, r3
/* 8042CFB4 00429EF4  93 E3 00 DC */	stw r31, 0xdc(r3)
/* 8042CFB8 00429EF8  93 E3 00 D8 */	stw r31, 0xd8(r3)
/* 8042CFBC 00429EFC  93 E3 00 D4 */	stw r31, 0xd4(r3)
/* 8042CFC0 00429F00  93 E3 00 D0 */	stw r31, 0xd0(r3)
/* 8042CFC4 00429F04  93 E3 01 38 */	stw r31, 0x138(r3)
/* 8042CFC8 00429F08  93 E3 01 34 */	stw r31, 0x134(r3)
/* 8042CFCC 00429F0C  93 E3 01 30 */	stw r31, 0x130(r3)
/* 8042CFD0 00429F10  93 E3 01 2C */	stw r31, 0x12c(r3)
/* 8042CFD4 00429F14  48 00 00 2C */	b .L_8042D000
.L_8042CFD8:
/* 8042CFD8 00429F18  80 1C 00 C8 */	lwz r0, 0xc8(r28)
/* 8042CFDC 00429F1C  38 7C 01 28 */	addi r3, r28, 0x128
/* 8042CFE0 00429F20  7C 80 EA 14 */	add r4, r0, r29
/* 8042CFE4 00429F24  93 E4 00 10 */	stw r31, 0x10(r4)
/* 8042CFE8 00429F28  93 E4 00 0C */	stw r31, 0xc(r4)
/* 8042CFEC 00429F2C  93 E4 00 08 */	stw r31, 8(r4)
/* 8042CFF0 00429F30  93 E4 00 04 */	stw r31, 4(r4)
/* 8042CFF4 00429F34  4B FE 44 15 */	bl add__5CNodeFP5CNode
/* 8042CFF8 00429F38  3B BD 00 5C */	addi r29, r29, 0x5c
/* 8042CFFC 00429F3C  3B DE 00 01 */	addi r30, r30, 1
.L_8042D000:
/* 8042D000 00429F40  80 1C 01 88 */	lwz r0, 0x188(r28)
/* 8042D004 00429F44  7C 1E 00 00 */	cmpw r30, r0
/* 8042D008 00429F48  41 80 FF D0 */	blt .L_8042CFD8
/* 8042D00C 00429F4C  38 00 00 00 */	li r0, 0
/* 8042D010 00429F50  90 1C 01 84 */	stw r0, 0x184(r28)
/* 8042D014 00429F54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042D018 00429F58  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8042D01C 00429F5C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8042D020 00429F60  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8042D024 00429F64  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8042D028 00429F68  7C 08 03 A6 */	mtlr r0
/* 8042D02C 00429F6C  38 21 00 20 */	addi r1, r1, 0x20
/* 8042D030 00429F70  4E 80 00 20 */	blr 
.endfn clearSuspendedDemo__Q24Game11MoviePlayerFv

.fn getNewContext__Q24Game11MoviePlayerFv, global
/* 8042D034 00429F74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042D038 00429F78  7C 08 02 A6 */	mflr r0
/* 8042D03C 00429F7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042D040 00429F80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042D044 00429F84  93 C1 00 08 */	stw r30, 8(r1)
/* 8042D048 00429F88  7C 7E 1B 78 */	mr r30, r3
/* 8042D04C 00429F8C  38 7E 01 28 */	addi r3, r30, 0x128
/* 8042D050 00429F90  81 9E 01 28 */	lwz r12, 0x128(r30)
/* 8042D054 00429F94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8042D058 00429F98  7D 89 03 A6 */	mtctr r12
/* 8042D05C 00429F9C  4E 80 04 21 */	bctrl 
/* 8042D060 00429FA0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8042D064 00429FA4  41 82 00 20 */	beq .L_8042D084
/* 8042D068 00429FA8  4B FE 45 69 */	bl del__5CNodeFv
/* 8042D06C 00429FAC  7F E4 FB 78 */	mr r4, r31
/* 8042D070 00429FB0  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8042D074 00429FB4  4B FE 43 95 */	bl add__5CNodeFP5CNode
/* 8042D078 00429FB8  80 7E 01 84 */	lwz r3, 0x184(r30)
/* 8042D07C 00429FBC  38 03 00 01 */	addi r0, r3, 1
/* 8042D080 00429FC0  90 1E 01 84 */	stw r0, 0x184(r30)
.L_8042D084:
/* 8042D084 00429FC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042D088 00429FC8  7F E3 FB 78 */	mr r3, r31
/* 8042D08C 00429FCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042D090 00429FD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042D094 00429FD4  7C 08 03 A6 */	mtlr r0
/* 8042D098 00429FD8  38 21 00 10 */	addi r1, r1, 0x10
/* 8042D09C 00429FDC  4E 80 00 20 */	blr 
.endfn getNewContext__Q24Game11MoviePlayerFv

.fn getChild__Q24Game12MovieContextFv, weak
/* 8042D0A0 00429FE0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8042D0A4 00429FE4  4E 80 00 20 */	blr 
.endfn getChild__Q24Game12MovieContextFv

.fn setContext__Q24Game11MoviePlayerFPQ24Game12MovieContextPQ24Game11MovieConfigRQ24Game12MoviePlayArg, global
/* 8042D0A8 00429FE8  90 A4 00 4C */	stw r5, 0x4c(r4)
/* 8042D0AC 00429FEC  80 03 01 8C */	lwz r0, 0x18c(r3)
/* 8042D0B0 00429FF0  90 04 00 50 */	stw r0, 0x50(r4)
/* 8042D0B4 00429FF4  80 03 01 94 */	lwz r0, 0x194(r3)
/* 8042D0B8 00429FF8  90 04 00 54 */	stw r0, 0x54(r4)
/* 8042D0BC 00429FFC  80 03 01 90 */	lwz r0, 0x190(r3)
/* 8042D0C0 0042A000  90 04 00 58 */	stw r0, 0x58(r4)
/* 8042D0C4 0042A004  80 06 00 00 */	lwz r0, 0(r6)
/* 8042D0C8 0042A008  90 04 00 18 */	stw r0, 0x18(r4)
/* 8042D0CC 0042A00C  80 06 00 04 */	lwz r0, 4(r6)
/* 8042D0D0 0042A010  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8042D0D4 0042A014  80 06 00 08 */	lwz r0, 8(r6)
/* 8042D0D8 0042A018  90 04 00 20 */	stw r0, 0x20(r4)
/* 8042D0DC 0042A01C  80 06 00 0C */	lwz r0, 0xc(r6)
/* 8042D0E0 0042A020  90 04 00 24 */	stw r0, 0x24(r4)
/* 8042D0E4 0042A024  80 06 00 10 */	lwz r0, 0x10(r6)
/* 8042D0E8 0042A028  90 04 00 28 */	stw r0, 0x28(r4)
/* 8042D0EC 0042A02C  80 06 00 14 */	lwz r0, 0x14(r6)
/* 8042D0F0 0042A030  90 04 00 2C */	stw r0, 0x2c(r4)
/* 8042D0F4 0042A034  C0 06 00 18 */	lfs f0, 0x18(r6)
/* 8042D0F8 0042A038  D0 04 00 30 */	stfs f0, 0x30(r4)
/* 8042D0FC 0042A03C  C0 06 00 1C */	lfs f0, 0x1c(r6)
/* 8042D100 0042A040  D0 04 00 34 */	stfs f0, 0x34(r4)
/* 8042D104 0042A044  C0 06 00 20 */	lfs f0, 0x20(r6)
/* 8042D108 0042A048  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 8042D10C 0042A04C  C0 06 00 24 */	lfs f0, 0x24(r6)
/* 8042D110 0042A050  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 8042D114 0042A054  80 06 00 28 */	lwz r0, 0x28(r6)
/* 8042D118 0042A058  90 04 00 40 */	stw r0, 0x40(r4)
/* 8042D11C 0042A05C  80 06 00 2C */	lwz r0, 0x2c(r6)
/* 8042D120 0042A060  90 04 00 44 */	stw r0, 0x44(r4)
/* 8042D124 0042A064  80 06 00 30 */	lwz r0, 0x30(r6)
/* 8042D128 0042A068  90 04 00 48 */	stw r0, 0x48(r4)
/* 8042D12C 0042A06C  4E 80 00 20 */	blr 
.endfn setContext__Q24Game11MoviePlayerFPQ24Game12MovieContextPQ24Game11MovieConfigRQ24Game12MoviePlayArg

.fn loadResource__Q24Game11MoviePlayerFv, global
/* 8042D130 0042A070  94 21 FD B0 */	stwu r1, -0x250(r1)
/* 8042D134 0042A074  7C 08 02 A6 */	mflr r0
/* 8042D138 0042A078  90 01 02 54 */	stw r0, 0x254(r1)
/* 8042D13C 0042A07C  93 E1 02 4C */	stw r31, 0x24c(r1)
/* 8042D140 0042A080  7C 7F 1B 78 */	mr r31, r3
/* 8042D144 0042A084  3C 60 80 4A */	lis r3, lbl_80499F10@ha
/* 8042D148 0042A088  93 C1 02 48 */	stw r30, 0x248(r1)
/* 8042D14C 0042A08C  3B C3 9F 10 */	addi r30, r3, lbl_80499F10@l
/* 8042D150 0042A090  38 61 01 38 */	addi r3, r1, 0x138
/* 8042D154 0042A094  93 A1 02 44 */	stw r29, 0x244(r1)
/* 8042D158 0042A098  38 9E 00 5C */	addi r4, r30, 0x5c
/* 8042D15C 0042A09C  80 BF 00 B0 */	lwz r5, 0xb0(r31)
/* 8042D160 0042A0A0  38 A5 00 45 */	addi r5, r5, 0x45
/* 8042D164 0042A0A4  4C C6 31 82 */	crclr 6
/* 8042D168 0042A0A8  4B C9 A2 D1 */	bl sprintf
/* 8042D16C 0042A0AC  80 BF 00 B0 */	lwz r5, 0xb0(r31)
/* 8042D170 0042A0B0  38 61 00 38 */	addi r3, r1, 0x38
/* 8042D174 0042A0B4  38 9E 00 7C */	addi r4, r30, 0x7c
/* 8042D178 0042A0B8  38 A5 00 45 */	addi r5, r5, 0x45
/* 8042D17C 0042A0BC  4C C6 31 82 */	crclr 6
/* 8042D180 0042A0C0  4B C9 A2 B9 */	bl sprintf
/* 8042D184 0042A0C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D188 0042A0C8  80 9F 01 B0 */	lwz r4, 0x1b0(r31)
/* 8042D18C 0042A0CC  4B FF 62 BD */	bl startChangeCurrentHeap__6SystemFP7JKRHeap
/* 8042D190 0042A0D0  38 60 00 2C */	li r3, 0x2c
/* 8042D194 0042A0D4  4B BF 6D 11 */	bl __nw__FUl
/* 8042D198 0042A0D8  7C 60 1B 79 */	or. r0, r3, r3
/* 8042D19C 0042A0DC  41 82 00 0C */	beq .L_8042D1A8
/* 8042D1A0 0042A0E0  48 03 6E 49 */	bl __ct__Q23PSM4DemoFv
/* 8042D1A4 0042A0E4  7C 60 1B 78 */	mr r0, r3
.L_8042D1A8:
/* 8042D1A8 0042A0E8  90 1F 00 AC */	stw r0, 0xac(r31)
/* 8042D1AC 0042A0EC  38 60 00 30 */	li r3, 0x30
/* 8042D1B0 0042A0F0  4B BF 6C F5 */	bl __nw__FUl
/* 8042D1B4 0042A0F4  7C 60 1B 79 */	or. r0, r3, r3
/* 8042D1B8 0042A0F8  41 82 00 14 */	beq .L_8042D1CC
/* 8042D1BC 0042A0FC  7F E5 FB 78 */	mr r5, r31
/* 8042D1C0 0042A100  38 9E 00 F0 */	addi r4, r30, 0xf0
/* 8042D1C4 0042A104  48 00 37 91 */	bl __ct__Q34Game5P2JST12ObjectSystemFPCcPQ24Game11MoviePlayer
/* 8042D1C8 0042A108  7C 60 1B 78 */	mr r0, r3
.L_8042D1CC:
/* 8042D1CC 0042A10C  90 1F 01 CC */	stw r0, 0x1cc(r31)
/* 8042D1D0 0042A110  38 60 00 78 */	li r3, 0x78
/* 8042D1D4 0042A114  4B BF 6C D1 */	bl __nw__FUl
/* 8042D1D8 0042A118  7C 60 1B 79 */	or. r0, r3, r3
/* 8042D1DC 0042A11C  41 82 00 0C */	beq .L_8042D1E8
/* 8042D1E0 0042A120  48 00 87 BD */	bl __ct__Q35P2JME5Movie8TControlFv
/* 8042D1E4 0042A124  7C 60 1B 78 */	mr r0, r3
.L_8042D1E8:
/* 8042D1E8 0042A128  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 8042D1EC 0042A12C  38 60 00 10 */	li r3, 0x10
/* 8042D1F0 0042A130  4B BF 6C B5 */	bl __nw__FUl
/* 8042D1F4 0042A134  7C 7D 1B 79 */	or. r29, r3, r3
/* 8042D1F8 0042A138  41 82 00 3C */	beq .L_8042D234
/* 8042D1FC 0042A13C  3C 60 80 4A */	lis r3, __vt__Q27JStudio13TCreateObject@ha
/* 8042D200 0042A140  80 DF 01 E4 */	lwz r6, 0x1e4(r31)
/* 8042D204 0042A144  38 03 E6 7C */	addi r0, r3, __vt__Q27JStudio13TCreateObject@l
/* 8042D208 0042A148  3C 80 80 4A */	lis r4, __vt__Q216JStudio_JMessage18TCreateObject_base@ha
/* 8042D20C 0042A14C  90 1D 00 00 */	stw r0, 0(r29)
/* 8042D210 0042A150  38 A0 00 00 */	li r5, 0
/* 8042D214 0042A154  3C 60 80 4A */	lis r3, __vt__Q216JStudio_JMessage13TCreateObject@ha
/* 8042D218 0042A158  38 84 F8 FC */	addi r4, r4, __vt__Q216JStudio_JMessage18TCreateObject_base@l
/* 8042D21C 0042A15C  90 BD 00 04 */	stw r5, 4(r29)
/* 8042D220 0042A160  38 03 F8 E8 */	addi r0, r3, __vt__Q216JStudio_JMessage13TCreateObject@l
/* 8042D224 0042A164  90 BD 00 08 */	stw r5, 8(r29)
/* 8042D228 0042A168  90 9D 00 00 */	stw r4, 0(r29)
/* 8042D22C 0042A16C  90 1D 00 00 */	stw r0, 0(r29)
/* 8042D230 0042A170  90 DD 00 0C */	stw r6, 0xc(r29)
.L_8042D234:
/* 8042D234 0042A174  38 60 00 10 */	li r3, 0x10
/* 8042D238 0042A178  4B BF 6C 6D */	bl __nw__FUl
/* 8042D23C 0042A17C  28 03 00 00 */	cmplwi r3, 0
/* 8042D240 0042A180  41 82 00 30 */	beq .L_8042D270
/* 8042D244 0042A184  3C 80 80 4A */	lis r4, __vt__Q27JStudio13TCreateObject@ha
/* 8042D248 0042A188  80 DF 01 CC */	lwz r6, 0x1cc(r31)
/* 8042D24C 0042A18C  38 04 E6 7C */	addi r0, r4, __vt__Q27JStudio13TCreateObject@l
/* 8042D250 0042A190  3C 80 80 4A */	lis r4, __vt__Q214JStudio_JStage13TCreateObject@ha
/* 8042D254 0042A194  90 03 00 00 */	stw r0, 0(r3)
/* 8042D258 0042A198  38 A0 00 00 */	li r5, 0
/* 8042D25C 0042A19C  38 04 F8 B0 */	addi r0, r4, __vt__Q214JStudio_JStage13TCreateObject@l
/* 8042D260 0042A1A0  90 A3 00 04 */	stw r5, 4(r3)
/* 8042D264 0042A1A4  90 A3 00 08 */	stw r5, 8(r3)
/* 8042D268 0042A1A8  90 03 00 00 */	stw r0, 0(r3)
/* 8042D26C 0042A1AC  90 C3 00 0C */	stw r6, 0xc(r3)
.L_8042D270:
/* 8042D270 0042A1B0  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 8042D274 0042A1B4  38 60 00 14 */	li r3, 0x14
/* 8042D278 0042A1B8  4B BF 6C 2D */	bl __nw__FUl
/* 8042D27C 0042A1BC  28 03 00 00 */	cmplwi r3, 0
/* 8042D280 0042A1C0  41 82 00 44 */	beq .L_8042D2C4
/* 8042D284 0042A1C4  3C 80 80 4A */	lis r4, __vt__Q37JStudio3stb8TFactory@ha
/* 8042D288 0042A1C8  3C A0 80 4A */	lis r5, __vt__Q27JStudio8TFactory@ha
/* 8042D28C 0042A1CC  38 04 F5 18 */	addi r0, r4, __vt__Q37JStudio3stb8TFactory@l
/* 8042D290 0042A1D0  3C 80 80 4A */	lis r4, __vt__Q37JStudio3fvb8TFactory@ha
/* 8042D294 0042A1D4  90 03 00 00 */	stw r0, 0(r3)
/* 8042D298 0042A1D8  38 05 E6 68 */	addi r0, r5, __vt__Q27JStudio8TFactory@l
/* 8042D29C 0042A1DC  38 C0 00 00 */	li r6, 0
/* 8042D2A0 0042A1E0  38 A3 00 08 */	addi r5, r3, 8
/* 8042D2A4 0042A1E4  90 03 00 00 */	stw r0, 0(r3)
/* 8042D2A8 0042A1E8  38 04 E5 B8 */	addi r0, r4, __vt__Q37JStudio3fvb8TFactory@l
/* 8042D2AC 0042A1EC  90 C3 00 08 */	stw r6, 8(r3)
/* 8042D2B0 0042A1F0  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8042D2B4 0042A1F4  90 C3 00 04 */	stw r6, 4(r3)
/* 8042D2B8 0042A1F8  90 A3 00 08 */	stw r5, 8(r3)
/* 8042D2BC 0042A1FC  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8042D2C0 0042A200  90 03 00 10 */	stw r0, 0x10(r3)
.L_8042D2C4:
/* 8042D2C4 0042A204  90 7F 01 D4 */	stw r3, 0x1d4(r31)
/* 8042D2C8 0042A208  80 7F 01 D4 */	lwz r3, 0x1d4(r31)
/* 8042D2CC 0042A20C  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 8042D2D0 0042A210  4B BD FA B5 */	bl appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
/* 8042D2D4 0042A214  80 7F 01 D4 */	lwz r3, 0x1d4(r31)
/* 8042D2D8 0042A218  7F A4 EB 78 */	mr r4, r29
/* 8042D2DC 0042A21C  4B BD FA A9 */	bl appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
/* 8042D2E0 0042A220  38 60 00 14 */	li r3, 0x14
/* 8042D2E4 0042A224  4B BF 6B C1 */	bl __nw__FUl
/* 8042D2E8 0042A228  28 03 00 00 */	cmplwi r3, 0
/* 8042D2EC 0042A22C  41 82 00 3C */	beq .L_8042D328
/* 8042D2F0 0042A230  80 CD 9A 18 */	lwz r6, particleMgr@sda21(r13)
/* 8042D2F4 0042A234  3C A0 80 4A */	lis r5, __vt__Q27JStudio13TCreateObject@ha
/* 8042D2F8 0042A238  3C 80 80 4A */	lis r4, __vt__Q217JStudio_JParticle13TCreateObject@ha
/* 8042D2FC 0042A23C  81 1F 01 CC */	lwz r8, 0x1cc(r31)
/* 8042D300 0042A240  80 E6 00 98 */	lwz r7, 0x98(r6)
/* 8042D304 0042A244  38 C5 E6 7C */	addi r6, r5, __vt__Q27JStudio13TCreateObject@l
/* 8042D308 0042A248  38 A0 00 00 */	li r5, 0
/* 8042D30C 0042A24C  38 04 E2 D8 */	addi r0, r4, __vt__Q217JStudio_JParticle13TCreateObject@l
/* 8042D310 0042A250  90 C3 00 00 */	stw r6, 0(r3)
/* 8042D314 0042A254  90 A3 00 04 */	stw r5, 4(r3)
/* 8042D318 0042A258  90 A3 00 08 */	stw r5, 8(r3)
/* 8042D31C 0042A25C  90 03 00 00 */	stw r0, 0(r3)
/* 8042D320 0042A260  90 E3 00 0C */	stw r7, 0xc(r3)
/* 8042D324 0042A264  91 03 00 10 */	stw r8, 0x10(r3)
.L_8042D328:
/* 8042D328 0042A268  90 7F 01 DC */	stw r3, 0x1dc(r31)
/* 8042D32C 0042A26C  80 7F 01 D4 */	lwz r3, 0x1d4(r31)
/* 8042D330 0042A270  80 9F 01 DC */	lwz r4, 0x1dc(r31)
/* 8042D334 0042A274  4B BD FA 51 */	bl appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
/* 8042D338 0042A278  83 AD 98 58 */	lwz r29, spSysIF__8PSSystem@sda21(r13)
/* 8042D33C 0042A27C  38 60 00 14 */	li r3, 0x14
/* 8042D340 0042A280  4B BF 6B 65 */	bl __nw__FUl
/* 8042D344 0042A284  7C 60 1B 79 */	or. r0, r3, r3
/* 8042D348 0042A288  41 82 00 14 */	beq .L_8042D35C
/* 8042D34C 0042A28C  80 BF 01 CC */	lwz r5, 0x1cc(r31)
/* 8042D350 0042A290  7F A4 EB 78 */	mr r4, r29
/* 8042D354 0042A294  48 02 79 DD */	bl __ct__27Pikmin_TCreateObject_JAudioFP8JAIBasicPCQ26JStage7TSystem
/* 8042D358 0042A298  7C 60 1B 78 */	mr r0, r3
.L_8042D35C:
/* 8042D35C 0042A29C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8042D360 0042A2A0  80 7F 01 D4 */	lwz r3, 0x1d4(r31)
/* 8042D364 0042A2A4  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8042D368 0042A2A8  4B BD FA 1D */	bl appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject
/* 8042D36C 0042A2AC  38 60 00 F8 */	li r3, 0xf8
/* 8042D370 0042A2B0  4B BF 6B 35 */	bl __nw__FUl
/* 8042D374 0042A2B4  7C 60 1B 79 */	or. r0, r3, r3
/* 8042D378 0042A2B8  41 82 00 0C */	beq .L_8042D384
/* 8042D37C 0042A2BC  4B BD F7 29 */	bl __ct__Q27JStudio8TControlFv
/* 8042D380 0042A2C0  7C 60 1B 78 */	mr r0, r3
.L_8042D384:
/* 8042D384 0042A2C4  90 1F 01 D0 */	stw r0, 0x1d0(r31)
/* 8042D388 0042A2C8  80 9F 01 D4 */	lwz r4, 0x1d4(r31)
/* 8042D38C 0042A2CC  80 7F 01 D0 */	lwz r3, 0x1d0(r31)
/* 8042D390 0042A2D0  28 04 00 00 */	cmplwi r4, 0
/* 8042D394 0042A2D4  40 82 00 0C */	bne .L_8042D3A0
/* 8042D398 0042A2D8  38 00 00 00 */	li r0, 0
/* 8042D39C 0042A2DC  48 00 00 08 */	b .L_8042D3A4
.L_8042D3A0:
/* 8042D3A0 0042A2E0  38 04 00 10 */	addi r0, r4, 0x10
.L_8042D3A4:
/* 8042D3A4 0042A2E4  90 83 00 0C */	stw r4, 0xc(r3)
/* 8042D3A8 0042A2E8  38 9E 01 00 */	addi r4, r30, 0x100
/* 8042D3AC 0042A2EC  C8 02 22 C8 */	lfd f0, lbl_80520628@sda21(r2)
/* 8042D3B0 0042A2F0  38 A0 00 00 */	li r5, 0
/* 8042D3B4 0042A2F4  90 03 00 64 */	stw r0, 0x64(r3)
/* 8042D3B8 0042A2F8  80 7F 01 D0 */	lwz r3, 0x1d0(r31)
/* 8042D3BC 0042A2FC  D8 03 00 58 */	stfd f0, 0x58(r3)
/* 8042D3C0 0042A300  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D3C4 0042A304  4B FF 5F 99 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8042D3C8 0042A308  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D3CC 0042A30C  38 82 22 D0 */	addi r4, r2, lbl_80520630@sda21
/* 8042D3D0 0042A310  38 A0 00 00 */	li r5, 0
/* 8042D3D4 0042A314  4B FF 5F 89 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8042D3D8 0042A318  38 61 00 08 */	addi r3, r1, 8
/* 8042D3DC 0042A31C  38 81 00 38 */	addi r4, r1, 0x38
/* 8042D3E0 0042A320  48 01 F1 F9 */	bl __ct__Q212LoadResource3ArgFPCc
/* 8042D3E4 0042A324  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8042D3E8 0042A328  38 81 00 08 */	addi r4, r1, 8
/* 8042D3EC 0042A32C  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8042D3F0 0042A330  90 01 00 20 */	stw r0, 0x20(r1)
/* 8042D3F4 0042A334  48 01 F3 21 */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8042D3F8 0042A338  28 03 00 00 */	cmplwi r3, 0
/* 8042D3FC 0042A33C  41 82 00 0C */	beq .L_8042D408
/* 8042D400 0042A340  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8042D404 0042A344  48 00 00 08 */	b .L_8042D40C
.L_8042D408:
/* 8042D408 0042A348  38 00 00 00 */	li r0, 0
.L_8042D40C:
/* 8042D40C 0042A34C  90 0D 9B 50 */	stw r0, mArchive__Q24Game11MoviePlayer@sda21(r13)
/* 8042D410 0042A350  80 7F 01 B0 */	lwz r3, 0x1b0(r31)
/* 8042D414 0042A354  80 9F 01 B4 */	lwz r4, 0x1b4(r31)
/* 8042D418 0042A358  4B CB F3 31 */	bl DCStoreRange
/* 8042D41C 0042A35C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D420 0042A360  38 82 22 D0 */	addi r4, r2, lbl_80520630@sda21
/* 8042D424 0042A364  4B FF 5F 41 */	bl heapStatusEnd__6SystemFPc
/* 8042D428 0042A368  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D42C 0042A36C  38 82 22 D4 */	addi r4, r2, lbl_80520634@sda21
/* 8042D430 0042A370  38 A0 00 00 */	li r5, 0
/* 8042D434 0042A374  4B FF 5F 29 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8042D438 0042A378  80 7F 01 E4 */	lwz r3, 0x1e4(r31)
/* 8042D43C 0042A37C  48 00 B7 99 */	bl init__Q25P2JME8TControlFv
/* 8042D440 0042A380  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D444 0042A384  38 82 22 D4 */	addi r4, r2, lbl_80520634@sda21
/* 8042D448 0042A388  4B FF 5F 1D */	bl heapStatusEnd__6SystemFPc
/* 8042D44C 0042A38C  38 00 00 00 */	li r0, 0
/* 8042D450 0042A390  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 8042D454 0042A394  80 6D 9B 50 */	lwz r3, mArchive__Q24Game11MoviePlayer@sda21(r13)
/* 8042D458 0042A398  28 03 00 00 */	cmplwi r3, 0
/* 8042D45C 0042A39C  41 82 00 50 */	beq .L_8042D4AC
/* 8042D460 0042A3A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D464 0042A3A4  38 82 22 DC */	addi r4, r2, lbl_8052063C@sda21
/* 8042D468 0042A3A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042D46C 0042A3AC  7D 89 03 A6 */	mtctr r12
/* 8042D470 0042A3B0  4E 80 04 21 */	bctrl 
/* 8042D474 0042A3B4  7C 7D 1B 79 */	or. r29, r3, r3
/* 8042D478 0042A3B8  41 82 00 34 */	beq .L_8042D4AC
/* 8042D47C 0042A3BC  38 60 00 14 */	li r3, 0x14
/* 8042D480 0042A3C0  4B BF 6A 25 */	bl __nw__FUl
/* 8042D484 0042A3C4  7C 60 1B 79 */	or. r0, r3, r3
/* 8042D488 0042A3C8  41 82 00 14 */	beq .L_8042D49C
/* 8042D48C 0042A3CC  80 BF 01 B0 */	lwz r5, 0x1b0(r31)
/* 8042D490 0042A3D0  7F A4 EB 78 */	mr r4, r29
/* 8042D494 0042A3D4  4B C6 B0 3D */	bl __ct__18JPAResourceManagerFPCvP7JKRHeap
/* 8042D498 0042A3D8  7C 60 1B 78 */	mr r0, r3
.L_8042D49C:
/* 8042D49C 0042A3DC  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 8042D4A0 0042A3E0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8042D4A4 0042A3E4  80 9F 01 F4 */	lwz r4, 0x1f4(r31)
/* 8042D4A8 0042A3E8  4B F8 E6 31 */	bl setDemoResourceManager__11ParticleMgrFP18JPAResourceManager
.L_8042D4AC:
/* 8042D4AC 0042A3EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D4B0 0042A3F0  38 82 22 E4 */	addi r4, r2, lbl_80520644@sda21
/* 8042D4B4 0042A3F4  38 A0 00 00 */	li r5, 0
/* 8042D4B8 0042A3F8  4B FF 5E A5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8042D4BC 0042A3FC  80 6D 9B 50 */	lwz r3, mArchive__Q24Game11MoviePlayer@sda21(r13)
/* 8042D4C0 0042A400  28 03 00 00 */	cmplwi r3, 0
/* 8042D4C4 0042A404  41 82 00 40 */	beq .L_8042D504
/* 8042D4C8 0042A408  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D4CC 0042A40C  38 9E 01 10 */	addi r4, r30, 0x110
/* 8042D4D0 0042A410  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042D4D4 0042A414  7D 89 03 A6 */	mtctr r12
/* 8042D4D8 0042A418  4E 80 04 21 */	bctrl 
/* 8042D4DC 0042A41C  90 7F 01 EC */	stw r3, 0x1ec(r31)
/* 8042D4E0 0042A420  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 8042D4E4 0042A424  28 00 00 00 */	cmplwi r0, 0
/* 8042D4E8 0042A428  40 82 00 30 */	bne .L_8042D518
/* 8042D4EC 0042A42C  38 7E 00 18 */	addi r3, r30, 0x18
/* 8042D4F0 0042A430  38 BE 01 1C */	addi r5, r30, 0x11c
/* 8042D4F4 0042A434  38 80 03 BA */	li r4, 0x3ba
/* 8042D4F8 0042A438  4C C6 31 82 */	crclr 6
/* 8042D4FC 0042A43C  4B BF D1 45 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8042D500 0042A440  48 00 00 18 */	b .L_8042D518
.L_8042D504:
/* 8042D504 0042A444  38 7E 00 18 */	addi r3, r30, 0x18
/* 8042D508 0042A448  38 BE 01 28 */	addi r5, r30, 0x128
/* 8042D50C 0042A44C  38 80 03 BD */	li r4, 0x3bd
/* 8042D510 0042A450  4C C6 31 82 */	crclr 6
/* 8042D514 0042A454  4B BF D1 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042D518:
/* 8042D518 0042A458  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 8042D51C 0042A45C  28 00 00 00 */	cmplwi r0, 0
/* 8042D520 0042A460  40 82 00 18 */	bne .L_8042D538
/* 8042D524 0042A464  38 7E 00 18 */	addi r3, r30, 0x18
/* 8042D528 0042A468  38 BE 01 48 */	addi r5, r30, 0x148
/* 8042D52C 0042A46C  38 80 03 C0 */	li r4, 0x3c0
/* 8042D530 0042A470  4C C6 31 82 */	crclr 6
/* 8042D534 0042A474  4B BF D1 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042D538:
/* 8042D538 0042A478  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D53C 0042A47C  38 82 22 E4 */	addi r4, r2, lbl_80520644@sda21
/* 8042D540 0042A480  4B FF 5E 25 */	bl heapStatusEnd__6SystemFPc
/* 8042D544 0042A484  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D548 0042A488  38 9E 01 60 */	addi r4, r30, 0x160
/* 8042D54C 0042A48C  38 A0 00 00 */	li r5, 0
/* 8042D550 0042A490  4B FF 5E 0D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8042D554 0042A494  7F E3 FB 78 */	mr r3, r31
/* 8042D558 0042A498  38 80 00 01 */	li r4, 1
/* 8042D55C 0042A49C  48 00 00 4D */	bl parse__Q24Game11MoviePlayerFb
/* 8042D560 0042A4A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D564 0042A4A4  38 9E 01 60 */	addi r4, r30, 0x160
/* 8042D568 0042A4A8  4B FF 5D FD */	bl heapStatusEnd__6SystemFPc
/* 8042D56C 0042A4AC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D570 0042A4B0  38 9E 01 00 */	addi r4, r30, 0x100
/* 8042D574 0042A4B4  4B FF 5D F1 */	bl heapStatusEnd__6SystemFPc
/* 8042D578 0042A4B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D57C 0042A4BC  4B FF 5F 3D */	bl endChangeCurrentHeap__6SystemFv
/* 8042D580 0042A4C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D584 0042A4C4  38 80 00 00 */	li r4, 0
/* 8042D588 0042A4C8  4B FF 5D E1 */	bl heapStatusDump__6SystemFb
/* 8042D58C 0042A4CC  80 01 02 54 */	lwz r0, 0x254(r1)
/* 8042D590 0042A4D0  83 E1 02 4C */	lwz r31, 0x24c(r1)
/* 8042D594 0042A4D4  83 C1 02 48 */	lwz r30, 0x248(r1)
/* 8042D598 0042A4D8  83 A1 02 44 */	lwz r29, 0x244(r1)
/* 8042D59C 0042A4DC  7C 08 03 A6 */	mtlr r0
/* 8042D5A0 0042A4E0  38 21 02 50 */	addi r1, r1, 0x250
/* 8042D5A4 0042A4E4  4E 80 00 20 */	blr 
.endfn loadResource__Q24Game11MoviePlayerFv

.fn parse__Q24Game11MoviePlayerFb, global
/* 8042D5A8 0042A4E8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8042D5AC 0042A4EC  7C 08 02 A6 */	mflr r0
/* 8042D5B0 0042A4F0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8042D5B4 0042A4F4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8042D5B8 0042A4F8  7C 9F 23 78 */	mr r31, r4
/* 8042D5BC 0042A4FC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8042D5C0 0042A500  7C 7E 1B 78 */	mr r30, r3
/* 8042D5C4 0042A504  80 83 01 D0 */	lwz r4, 0x1d0(r3)
/* 8042D5C8 0042A508  38 61 00 0C */	addi r3, r1, 0xc
/* 8042D5CC 0042A50C  4B BD F8 BD */	bl __ct__Q27JStudio6TParseFPQ27JStudio8TControl
/* 8042D5D0 0042A510  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8042D5D4 0042A514  38 A0 00 30 */	li r5, 0x30
/* 8042D5D8 0042A518  41 82 00 08 */	beq .L_8042D5E0
/* 8042D5DC 0042A51C  38 A0 00 40 */	li r5, 0x40
.L_8042D5E0:
/* 8042D5E0 0042A520  80 1E 01 EC */	lwz r0, 0x1ec(r30)
/* 8042D5E4 0042A524  38 61 00 0C */	addi r3, r1, 0xc
/* 8042D5E8 0042A528  38 81 00 08 */	addi r4, r1, 8
/* 8042D5EC 0042A52C  90 01 00 08 */	stw r0, 8(r1)
/* 8042D5F0 0042A530  4B BF 9B E9 */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
/* 8042D5F4 0042A534  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042D5F8 0042A538  40 82 00 34 */	bne .L_8042D62C
/* 8042D5FC 0042A53C  3C 60 80 4A */	lis r3, lbl_80499F28@ha
/* 8042D600 0042A540  3C A0 80 4A */	lis r5, lbl_8049A080@ha
/* 8042D604 0042A544  38 63 9F 28 */	addi r3, r3, lbl_80499F28@l
/* 8042D608 0042A548  38 80 03 EC */	li r4, 0x3ec
/* 8042D60C 0042A54C  38 A5 A0 80 */	addi r5, r5, lbl_8049A080@l
/* 8042D610 0042A550  4C C6 31 82 */	crclr 6
/* 8042D614 0042A554  4B BF D0 2D */	bl panic_f__12JUTExceptionFPCciPCce
/* 8042D618 0042A558  38 61 00 0C */	addi r3, r1, 0xc
/* 8042D61C 0042A55C  38 80 FF FF */	li r4, -1
/* 8042D620 0042A560  4B BD F8 BD */	bl __dt__Q27JStudio6TParseFv
/* 8042D624 0042A564  38 60 00 00 */	li r3, 0
/* 8042D628 0042A568  48 00 00 28 */	b .L_8042D650
.L_8042D62C:
/* 8042D62C 0042A56C  80 7E 01 CC */	lwz r3, 0x1cc(r30)
/* 8042D630 0042A570  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D634 0042A574  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8042D638 0042A578  7D 89 03 A6 */	mtctr r12
/* 8042D63C 0042A57C  4E 80 04 21 */	bctrl 
/* 8042D640 0042A580  38 61 00 0C */	addi r3, r1, 0xc
/* 8042D644 0042A584  38 80 FF FF */	li r4, -1
/* 8042D648 0042A588  4B BD F8 95 */	bl __dt__Q27JStudio6TParseFv
/* 8042D64C 0042A58C  38 60 00 01 */	li r3, 1
.L_8042D650:
/* 8042D650 0042A590  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8042D654 0042A594  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8042D658 0042A598  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8042D65C 0042A59C  7C 08 03 A6 */	mtlr r0
/* 8042D660 0042A5A0  38 21 00 30 */	addi r1, r1, 0x30
/* 8042D664 0042A5A4  4E 80 00 20 */	blr 
.endfn parse__Q24Game11MoviePlayerFb

.fn update__Q24Game11MoviePlayerFP10ControllerP10Controller, global
/* 8042D668 0042A5A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042D66C 0042A5AC  7C 08 02 A6 */	mflr r0
/* 8042D670 0042A5B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042D674 0042A5B4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8042D678 0042A5B8  7C 7C 1B 78 */	mr r28, r3
/* 8042D67C 0042A5BC  3C 60 80 4A */	lis r3, lbl_80499F10@ha
/* 8042D680 0042A5C0  7C 9D 23 78 */	mr r29, r4
/* 8042D684 0042A5C4  7C BE 2B 78 */	mr r30, r5
/* 8042D688 0042A5C8  3B E3 9F 10 */	addi r31, r3, lbl_80499F10@l
/* 8042D68C 0042A5CC  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 8042D690 0042A5D0  28 00 00 07 */	cmplwi r0, 7
/* 8042D694 0042A5D4  41 81 04 D0 */	bgt .L_8042DB64
/* 8042D698 0042A5D8  3C 60 80 4F */	lis r3, lbl_804EBFC8@ha
/* 8042D69C 0042A5DC  54 00 10 3A */	slwi r0, r0, 2
/* 8042D6A0 0042A5E0  38 63 BF C8 */	addi r3, r3, lbl_804EBFC8@l
/* 8042D6A4 0042A5E4  7C 03 00 2E */	lwzx r0, r3, r0
/* 8042D6A8 0042A5E8  7C 09 03 A6 */	mtctr r0
/* 8042D6AC 0042A5EC  4E 80 04 20 */	bctr 
.L_8042D6B0:
/* 8042D6B0 0042A5F0  38 60 00 00 */	li r3, 0
/* 8042D6B4 0042A5F4  48 00 07 64 */	b .L_8042DE18
.L_8042D6B8:
/* 8042D6B8 0042A5F8  C0 5C 00 A0 */	lfs f2, 0xa0(r28)
/* 8042D6BC 0042A5FC  C0 22 22 B0 */	lfs f1, lbl_80520610@sda21(r2)
/* 8042D6C0 0042A600  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8042D6C4 0042A604  40 81 00 3C */	ble .L_8042D700
/* 8042D6C8 0042A608  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D6CC 0042A60C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8042D6D0 0042A610  EC 02 00 28 */	fsubs f0, f2, f0
/* 8042D6D4 0042A614  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 8042D6D8 0042A618  C0 1C 00 A0 */	lfs f0, 0xa0(r28)
/* 8042D6DC 0042A61C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8042D6E0 0042A620  4C 40 13 82 */	cror 2, 0, 2
/* 8042D6E4 0042A624  40 82 00 48 */	bne .L_8042D72C
/* 8042D6E8 0042A628  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D6EC 0042A62C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D6F0 0042A630  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8042D6F4 0042A634  7D 89 03 A6 */	mtctr r12
/* 8042D6F8 0042A638  4E 80 04 21 */	bctrl 
/* 8042D6FC 0042A63C  48 00 00 30 */	b .L_8042D72C
.L_8042D700:
/* 8042D700 0042A640  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D704 0042A644  38 9C 00 1C */	addi r4, r28, 0x1c
/* 8042D708 0042A648  80 BC 01 A4 */	lwz r5, 0x1a4(r28)
/* 8042D70C 0042A64C  4B FF 58 2D */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8042D710 0042A650  38 00 00 02 */	li r0, 2
/* 8042D714 0042A654  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042D718 0042A658  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D71C 0042A65C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D720 0042A660  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8042D724 0042A664  7D 89 03 A6 */	mtctr r12
/* 8042D728 0042A668  4E 80 04 21 */	bctrl 
.L_8042D72C:
/* 8042D72C 0042A66C  38 60 00 01 */	li r3, 1
/* 8042D730 0042A670  48 00 06 E8 */	b .L_8042DE18
.L_8042D734:
/* 8042D734 0042A674  C0 3C 00 A0 */	lfs f1, 0xa0(r28)
/* 8042D738 0042A678  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042D73C 0042A67C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042D740 0042A680  40 81 00 14 */	ble .L_8042D754
/* 8042D744 0042A684  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D748 0042A688  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8042D74C 0042A68C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8042D750 0042A690  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
.L_8042D754:
/* 8042D754 0042A694  80 1C 00 34 */	lwz r0, 0x34(r28)
/* 8042D758 0042A698  2C 00 00 02 */	cmpwi r0, 2
/* 8042D75C 0042A69C  40 82 00 34 */	bne .L_8042D790
/* 8042D760 0042A6A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D764 0042A6A4  80 9C 01 B0 */	lwz r4, 0x1b0(r28)
/* 8042D768 0042A6A8  4B FF 5C E1 */	bl startChangeCurrentHeap__6SystemFP7JKRHeap
/* 8042D76C 0042A6AC  80 9C 01 A0 */	lwz r4, 0x1a0(r28)
/* 8042D770 0042A6B0  28 04 00 00 */	cmplwi r4, 0
/* 8042D774 0042A6B4  41 82 00 08 */	beq .L_8042D77C
/* 8042D778 0042A6B8  48 00 00 08 */	b .L_8042D780
.L_8042D77C:
/* 8042D77C 0042A6BC  80 9C 01 90 */	lwz r4, 0x190(r28)
.L_8042D780:
/* 8042D780 0042A6C0  7F 83 E3 78 */	mr r3, r28
/* 8042D784 0042A6C4  48 00 08 E1 */	bl setCamera__Q24Game11MoviePlayerFP6Camera
/* 8042D788 0042A6C8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D78C 0042A6CC  4B FF 5D 2D */	bl endChangeCurrentHeap__6SystemFv
.L_8042D790:
/* 8042D790 0042A6D0  80 1C 00 34 */	lwz r0, 0x34(r28)
/* 8042D794 0042A6D4  2C 00 00 02 */	cmpwi r0, 2
/* 8042D798 0042A6D8  40 82 00 F4 */	bne .L_8042D88C
/* 8042D79C 0042A6DC  C0 3C 00 A0 */	lfs f1, 0xa0(r28)
/* 8042D7A0 0042A6E0  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042D7A4 0042A6E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042D7A8 0042A6E8  4C 40 13 82 */	cror 2, 0, 2
/* 8042D7AC 0042A6EC  40 82 00 E0 */	bne .L_8042D88C
/* 8042D7B0 0042A6F0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D7B4 0042A6F4  38 BF 01 8C */	addi r5, r31, 0x18c
/* 8042D7B8 0042A6F8  38 80 00 00 */	li r4, 0
/* 8042D7BC 0042A6FC  38 C0 00 03 */	li r6, 3
/* 8042D7C0 0042A700  4B D8 77 D5 */	bl setPause__Q24Game10GameSystemFbPci
/* 8042D7C4 0042A704  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D7C8 0042A708  4B D8 78 01 */	bl paused__Q24Game10GameSystemFv
/* 8042D7CC 0042A70C  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 8042D7D0 0042A710  28 03 00 00 */	cmplwi r3, 0
/* 8042D7D4 0042A714  41 82 00 20 */	beq .L_8042D7F4
/* 8042D7D8 0042A718  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D7DC 0042A71C  38 A0 00 00 */	li r5, 0
/* 8042D7E0 0042A720  80 9C 00 B0 */	lwz r4, 0xb0(r28)
/* 8042D7E4 0042A724  81 8C 00 08 */	lwz r12, 8(r12)
/* 8042D7E8 0042A728  80 DC 00 B8 */	lwz r6, 0xb8(r28)
/* 8042D7EC 0042A72C  7D 89 03 A6 */	mtctr r12
/* 8042D7F0 0042A730  4E 80 04 21 */	bctrl 
.L_8042D7F4:
/* 8042D7F4 0042A734  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042D7F8 0042A738  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8042D7FC 0042A73C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8042D800 0042A740  40 82 00 14 */	bne .L_8042D814
/* 8042D804 0042A744  C0 3C 00 98 */	lfs f1, 0x98(r28)
/* 8042D808 0042A748  7F 83 E3 78 */	mr r3, r28
/* 8042D80C 0042A74C  38 9C 00 8C */	addi r4, r28, 0x8c
/* 8042D810 0042A750  48 00 0D 0D */	bl "setTransform__Q24Game11MoviePlayerFR10Vector3<f>f"
.L_8042D814:
/* 8042D814 0042A754  7F 83 E3 78 */	mr r3, r28
/* 8042D818 0042A758  38 80 00 00 */	li r4, 0
/* 8042D81C 0042A75C  48 00 06 B5 */	bl start__Q24Game11MoviePlayerFP6Camera
/* 8042D820 0042A760  80 9C 00 B0 */	lwz r4, 0xb0(r28)
/* 8042D824 0042A764  7F 83 E3 78 */	mr r3, r28
/* 8042D828 0042A768  48 00 96 A9 */	bl setPauseAndDraw__Q24Game11MoviePlayerFPQ24Game11MovieConfig
/* 8042D82C 0042A76C  38 00 00 05 */	li r0, 5
/* 8042D830 0042A770  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042D834 0042A774  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042D838 0042A778  A0 63 00 C0 */	lhz r3, 0xc0(r3)
/* 8042D83C 0042A77C  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 8042D840 0042A780  40 82 00 28 */	bne .L_8042D868
/* 8042D844 0042A784  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 8042D848 0042A788  41 82 00 20 */	beq .L_8042D868
/* 8042D84C 0042A78C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D850 0042A790  C0 22 22 C0 */	lfs f1, lbl_80520620@sda21(r2)
/* 8042D854 0042A794  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D858 0042A798  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8042D85C 0042A79C  7D 89 03 A6 */	mtctr r12
/* 8042D860 0042A7A0  4E 80 04 21 */	bctrl 
/* 8042D864 0042A7A4  48 00 00 18 */	b .L_8042D87C
.L_8042D868:
/* 8042D868 0042A7A8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D86C 0042A7AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D870 0042A7B0  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8042D874 0042A7B4  7D 89 03 A6 */	mtctr r12
/* 8042D878 0042A7B8  4E 80 04 21 */	bctrl 
.L_8042D87C:
/* 8042D87C 0042A7BC  38 00 00 03 */	li r0, 3
/* 8042D880 0042A7C0  38 60 00 01 */	li r3, 1
/* 8042D884 0042A7C4  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042D888 0042A7C8  48 00 05 90 */	b .L_8042DE18
.L_8042D88C:
/* 8042D88C 0042A7CC  38 60 00 01 */	li r3, 1
/* 8042D890 0042A7D0  48 00 05 88 */	b .L_8042DE18
.L_8042D894:
/* 8042D894 0042A7D4  38 00 00 04 */	li r0, 4
/* 8042D898 0042A7D8  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042D89C 0042A7DC  48 00 02 C8 */	b .L_8042DB64
.L_8042D8A0:
/* 8042D8A0 0042A7E0  38 00 00 05 */	li r0, 5
/* 8042D8A4 0042A7E4  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042D8A8 0042A7E8  48 00 02 BC */	b .L_8042DB64
.L_8042D8AC:
/* 8042D8AC 0042A7EC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D8B0 0042A7F0  4B D8 77 19 */	bl paused__Q24Game10GameSystemFv
/* 8042D8B4 0042A7F4  48 00 02 B0 */	b .L_8042DB64
.L_8042D8B8:
/* 8042D8B8 0042A7F8  80 7C 01 CC */	lwz r3, 0x1cc(r28)
/* 8042D8BC 0042A7FC  28 03 00 00 */	cmplwi r3, 0
/* 8042D8C0 0042A800  41 82 00 14 */	beq .L_8042D8D4
/* 8042D8C4 0042A804  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D8C8 0042A808  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8042D8CC 0042A80C  7D 89 03 A6 */	mtctr r12
/* 8042D8D0 0042A810  4E 80 04 21 */	bctrl 
.L_8042D8D4:
/* 8042D8D4 0042A814  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042D8D8 0042A818  C0 5C 00 A0 */	lfs f2, 0xa0(r28)
/* 8042D8DC 0042A81C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8042D8E0 0042A820  C0 02 22 E8 */	lfs f0, lbl_80520648@sda21(r2)
/* 8042D8E4 0042A824  EC 22 08 28 */	fsubs f1, f2, f1
/* 8042D8E8 0042A828  D0 3C 00 A0 */	stfs f1, 0xa0(r28)
/* 8042D8EC 0042A82C  C0 3C 00 A0 */	lfs f1, 0xa0(r28)
/* 8042D8F0 0042A830  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042D8F4 0042A834  40 80 02 50 */	bge .L_8042DB44
/* 8042D8F8 0042A838  88 1C 00 A4 */	lbz r0, 0xa4(r28)
/* 8042D8FC 0042A83C  28 00 00 00 */	cmplwi r0, 0
/* 8042D900 0042A840  40 82 02 44 */	bne .L_8042DB44
/* 8042D904 0042A844  80 1C 01 F0 */	lwz r0, 0x1f0(r28)
/* 8042D908 0042A848  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8042D90C 0042A84C  41 82 00 80 */	beq .L_8042D98C
/* 8042D910 0042A850  7F 83 E3 78 */	mr r3, r28
/* 8042D914 0042A854  48 00 0B 45 */	bl resetFrame__Q24Game11MoviePlayerFv
/* 8042D918 0042A858  3B 60 00 00 */	li r27, 0
/* 8042D91C 0042A85C  48 00 00 68 */	b .L_8042D984
.L_8042D920:
/* 8042D920 0042A860  80 7C 01 D0 */	lwz r3, 0x1d0(r28)
/* 8042D924 0042A864  38 80 00 01 */	li r4, 1
/* 8042D928 0042A868  4B BE 31 F1 */	bl forward__Q37JStudio3stb8TControlFUl
/* 8042D92C 0042A86C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8042D930 0042A870  80 7C 01 CC */	lwz r3, 0x1cc(r28)
/* 8042D934 0042A874  7C 00 00 34 */	cntlzw r0, r0
/* 8042D938 0042A878  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D93C 0042A87C  54 00 D9 7E */	srwi r0, r0, 5
/* 8042D940 0042A880  7C 1B 03 78 */	mr r27, r0
/* 8042D944 0042A884  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8042D948 0042A888  7D 89 03 A6 */	mtctr r12
/* 8042D94C 0042A88C  4E 80 04 21 */	bctrl 
/* 8042D950 0042A890  80 7C 01 E4 */	lwz r3, 0x1e4(r28)
/* 8042D954 0042A894  28 03 00 00 */	cmplwi r3, 0
/* 8042D958 0042A898  41 82 00 1C */	beq .L_8042D974
/* 8042D95C 0042A89C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D960 0042A8A0  7F A4 EB 78 */	mr r4, r29
/* 8042D964 0042A8A4  7F C5 F3 78 */	mr r5, r30
/* 8042D968 0042A8A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042D96C 0042A8AC  7D 89 03 A6 */	mtctr r12
/* 8042D970 0042A8B0  4E 80 04 21 */	bctrl 
.L_8042D974:
/* 8042D974 0042A8B4  7F 83 E3 78 */	mr r3, r28
/* 8042D978 0042A8B8  38 80 00 01 */	li r4, 1
/* 8042D97C 0042A8BC  38 A0 00 00 */	li r5, 0
/* 8042D980 0042A8C0  48 00 0A 09 */	bl unsuspend__Q24Game11MoviePlayerFlb
.L_8042D984:
/* 8042D984 0042A8C4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8042D988 0042A8C8  41 82 FF 98 */	beq .L_8042D920
.L_8042D98C:
/* 8042D98C 0042A8CC  38 00 00 01 */	li r0, 1
/* 8042D990 0042A8D0  7F 83 E3 78 */	mr r3, r28
/* 8042D994 0042A8D4  98 1C 00 A4 */	stb r0, 0xa4(r28)
/* 8042D998 0042A8D8  83 7C 00 B0 */	lwz r27, 0xb0(r28)
/* 8042D99C 0042A8DC  48 00 05 A9 */	bl stop__Q24Game11MoviePlayerFv
/* 8042D9A0 0042A8E0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8042D9A4 0042A8E4  38 00 00 00 */	li r0, 0
/* 8042D9A8 0042A8E8  38 80 00 02 */	li r4, 2
/* 8042D9AC 0042A8EC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8042D9B0 0042A8F0  98 03 00 92 */	stb r0, 0x92(r3)
/* 8042D9B4 0042A8F4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 8042D9B8 0042A8F8  4B E2 4B 25 */	bl controllerUnLock__Q24Game9CameraMgrFi
/* 8042D9BC 0042A8FC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042D9C0 0042A900  38 BF 01 A0 */	addi r5, r31, 0x1a0
/* 8042D9C4 0042A904  38 80 00 00 */	li r4, 0
/* 8042D9C8 0042A908  38 C0 00 03 */	li r6, 3
/* 8042D9CC 0042A90C  4B D8 75 C9 */	bl setPause__Q24Game10GameSystemFbPci
/* 8042D9D0 0042A910  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8042D9D4 0042A914  28 03 00 00 */	cmplwi r3, 0
/* 8042D9D8 0042A918  41 82 00 08 */	beq .L_8042D9E0
/* 8042D9DC 0042A91C  4B FD 0F 2D */	bl restartFinalFloorSound__Q26Screen9Game2DMgrFv
.L_8042D9E0:
/* 8042D9E0 0042A920  80 7C 00 B4 */	lwz r3, 0xb4(r28)
/* 8042D9E4 0042A924  28 03 00 00 */	cmplwi r3, 0
/* 8042D9E8 0042A928  41 82 00 20 */	beq .L_8042DA08
/* 8042D9EC 0042A92C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042D9F0 0042A930  7F 64 DB 78 */	mr r4, r27
/* 8042D9F4 0042A934  38 A0 00 00 */	li r5, 0
/* 8042D9F8 0042A938  80 DC 00 B8 */	lwz r6, 0xb8(r28)
/* 8042D9FC 0042A93C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8042DA00 0042A940  7D 89 03 A6 */	mtctr r12
/* 8042DA04 0042A944  4E 80 04 21 */	bctrl 
.L_8042DA08:
/* 8042DA08 0042A948  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042DA0C 0042A94C  C0 22 22 EC */	lfs f1, lbl_8052064C@sda21(r2)
/* 8042DA10 0042A950  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DA14 0042A954  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8042DA18 0042A958  7D 89 03 A6 */	mtctr r12
/* 8042DA1C 0042A95C  4E 80 04 21 */	bctrl 
/* 8042DA20 0042A960  38 7C 00 CC */	addi r3, r28, 0xcc
/* 8042DA24 0042A964  81 9C 00 CC */	lwz r12, 0xcc(r28)
/* 8042DA28 0042A968  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8042DA2C 0042A96C  7D 89 03 A6 */	mtctr r12
/* 8042DA30 0042A970  4E 80 04 21 */	bctrl 
/* 8042DA34 0042A974  28 03 00 00 */	cmplwi r3, 0
/* 8042DA38 0042A978  41 82 00 F0 */	beq .L_8042DB28
/* 8042DA3C 0042A97C  48 03 99 FD */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8042DA40 0042A980  38 7C 00 CC */	addi r3, r28, 0xcc
/* 8042DA44 0042A984  81 9C 00 CC */	lwz r12, 0xcc(r28)
/* 8042DA48 0042A988  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8042DA4C 0042A98C  7D 89 03 A6 */	mtctr r12
/* 8042DA50 0042A990  4E 80 04 21 */	bctrl 
/* 8042DA54 0042A994  7C 7D 1B 79 */	or. r29, r3, r3
/* 8042DA58 0042A998  41 82 00 20 */	beq .L_8042DA78
/* 8042DA5C 0042A99C  4B FE 3B 75 */	bl del__5CNodeFv
/* 8042DA60 0042A9A0  7F A4 EB 78 */	mr r4, r29
/* 8042DA64 0042A9A4  38 7C 01 28 */	addi r3, r28, 0x128
/* 8042DA68 0042A9A8  4B FE 39 A1 */	bl add__5CNodeFP5CNode
/* 8042DA6C 0042A9AC  80 7C 01 84 */	lwz r3, 0x184(r28)
/* 8042DA70 0042A9B0  38 03 FF FF */	addi r0, r3, -1
/* 8042DA74 0042A9B4  90 1C 01 84 */	stw r0, 0x184(r28)
.L_8042DA78:
/* 8042DA78 0042A9B8  28 1D 00 00 */	cmplwi r29, 0
/* 8042DA7C 0042A9BC  41 82 00 90 */	beq .L_8042DB0C
/* 8042DA80 0042A9C0  80 1D 00 50 */	lwz r0, 0x50(r29)
/* 8042DA84 0042A9C4  7F 83 E3 78 */	mr r3, r28
/* 8042DA88 0042A9C8  38 BD 00 18 */	addi r5, r29, 0x18
/* 8042DA8C 0042A9CC  38 C0 00 01 */	li r6, 1
/* 8042DA90 0042A9D0  90 1C 01 8C */	stw r0, 0x18c(r28)
/* 8042DA94 0042A9D4  80 1D 00 58 */	lwz r0, 0x58(r29)
/* 8042DA98 0042A9D8  90 1C 01 90 */	stw r0, 0x190(r28)
/* 8042DA9C 0042A9DC  80 1D 00 54 */	lwz r0, 0x54(r29)
/* 8042DAA0 0042A9E0  90 1C 01 94 */	stw r0, 0x194(r28)
/* 8042DAA4 0042A9E4  80 9D 00 4C */	lwz r4, 0x4c(r29)
/* 8042DAA8 0042A9E8  4B FF EF 89 */	bl play__Q24Game11MoviePlayerFPQ24Game11MovieConfigRQ24Game12MoviePlayArgb
/* 8042DAAC 0042A9EC  2C 03 00 02 */	cmpwi r3, 2
/* 8042DAB0 0042A9F0  41 82 00 34 */	beq .L_8042DAE4
/* 8042DAB4 0042A9F4  40 80 00 14 */	bge .L_8042DAC8
/* 8042DAB8 0042A9F8  2C 03 00 00 */	cmpwi r3, 0
/* 8042DABC 0042A9FC  41 82 00 18 */	beq .L_8042DAD4
/* 8042DAC0 0042AA00  40 80 00 1C */	bge .L_8042DADC
/* 8042DAC4 0042AA04  48 00 00 5C */	b .L_8042DB20
.L_8042DAC8:
/* 8042DAC8 0042AA08  2C 03 00 04 */	cmpwi r3, 4
/* 8042DACC 0042AA0C  40 80 00 54 */	bge .L_8042DB20
/* 8042DAD0 0042AA10  48 00 00 1C */	b .L_8042DAEC
.L_8042DAD4:
/* 8042DAD4 0042AA14  38 60 00 01 */	li r3, 1
/* 8042DAD8 0042AA18  48 00 03 40 */	b .L_8042DE18
.L_8042DADC:
/* 8042DADC 0042AA1C  38 60 00 00 */	li r3, 0
/* 8042DAE0 0042AA20  48 00 03 38 */	b .L_8042DE18
.L_8042DAE4:
/* 8042DAE4 0042AA24  38 60 00 01 */	li r3, 1
/* 8042DAE8 0042AA28  48 00 03 30 */	b .L_8042DE18
.L_8042DAEC:
/* 8042DAEC 0042AA2C  80 DD 00 18 */	lwz r6, 0x18(r29)
/* 8042DAF0 0042AA30  38 7F 00 18 */	addi r3, r31, 0x18
/* 8042DAF4 0042AA34  38 BF 00 BC */	addi r5, r31, 0xbc
/* 8042DAF8 0042AA38  38 80 02 FF */	li r4, 0x2ff
/* 8042DAFC 0042AA3C  4C C6 31 82 */	crclr 6
/* 8042DB00 0042AA40  4B BF CB 41 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8042DB04 0042AA44  38 60 00 00 */	li r3, 0
/* 8042DB08 0042AA48  48 00 03 10 */	b .L_8042DE18
.L_8042DB0C:
/* 8042DB0C 0042AA4C  38 7F 00 18 */	addi r3, r31, 0x18
/* 8042DB10 0042AA50  38 BF 00 D0 */	addi r5, r31, 0xd0
/* 8042DB14 0042AA54  38 80 03 04 */	li r4, 0x304
/* 8042DB18 0042AA58  4C C6 31 82 */	crclr 6
/* 8042DB1C 0042AA5C  4B BF CB 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042DB20:
/* 8042DB20 0042AA60  38 60 00 00 */	li r3, 0
/* 8042DB24 0042AA64  48 00 02 F4 */	b .L_8042DE18
.L_8042DB28:
/* 8042DB28 0042AA68  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 8042DB2C 0042AA6C  2C 00 00 02 */	cmpwi r0, 2
/* 8042DB30 0042AA70  41 82 00 0C */	beq .L_8042DB3C
/* 8042DB34 0042AA74  2C 00 00 01 */	cmpwi r0, 1
/* 8042DB38 0042AA78  40 82 00 24 */	bne .L_8042DB5C
.L_8042DB3C:
/* 8042DB3C 0042AA7C  48 03 98 FD */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8042DB40 0042AA80  48 00 00 1C */	b .L_8042DB5C
.L_8042DB44:
/* 8042DB44 0042AA84  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042DB48 0042AA88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042DB4C 0042AA8C  4C 40 13 82 */	cror 2, 0, 2
/* 8042DB50 0042AA90  40 82 00 0C */	bne .L_8042DB5C
/* 8042DB54 0042AA94  38 00 00 00 */	li r0, 0
/* 8042DB58 0042AA98  90 1C 00 18 */	stw r0, 0x18(r28)
.L_8042DB5C:
/* 8042DB5C 0042AA9C  38 60 00 01 */	li r3, 1
/* 8042DB60 0042AAA0  48 00 02 B8 */	b .L_8042DE18
.L_8042DB64:
/* 8042DB64 0042AAA4  80 1C 01 F0 */	lwz r0, 0x1f0(r28)
/* 8042DB68 0042AAA8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8042DB6C 0042AAAC  41 82 02 A4 */	beq .L_8042DE10
/* 8042DB70 0042AAB0  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 8042DB74 0042AAB4  70 00 0F 70 */	andi. r0, r0, 0xf70
/* 8042DB78 0042AAB8  40 82 00 28 */	bne .L_8042DBA0
/* 8042DB7C 0042AABC  28 1E 00 00 */	cmplwi r30, 0
/* 8042DB80 0042AAC0  41 82 00 14 */	beq .L_8042DB94
/* 8042DB84 0042AAC4  41 82 00 1C */	beq .L_8042DBA0
/* 8042DB88 0042AAC8  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8042DB8C 0042AACC  70 00 0F 70 */	andi. r0, r0, 0xf70
/* 8042DB90 0042AAD0  40 82 00 10 */	bne .L_8042DBA0
.L_8042DB94:
/* 8042DB94 0042AAD4  80 1C 01 F0 */	lwz r0, 0x1f0(r28)
/* 8042DB98 0042AAD8  64 00 80 00 */	oris r0, r0, 0x8000
/* 8042DB9C 0042AADC  90 1C 01 F0 */	stw r0, 0x1f0(r28)
.L_8042DBA0:
/* 8042DBA0 0042AAE0  80 7C 01 D0 */	lwz r3, 0x1d0(r28)
/* 8042DBA4 0042AAE4  80 03 00 54 */	lwz r0, 0x54(r3)
/* 8042DBA8 0042AAE8  2C 00 00 00 */	cmpwi r0, 0
/* 8042DBAC 0042AAEC  41 81 00 10 */	bgt .L_8042DBBC
/* 8042DBB0 0042AAF0  80 7C 01 E8 */	lwz r3, 0x1e8(r28)
/* 8042DBB4 0042AAF4  38 03 00 01 */	addi r0, r3, 1
/* 8042DBB8 0042AAF8  90 1C 01 E8 */	stw r0, 0x1e8(r28)
.L_8042DBBC:
/* 8042DBBC 0042AAFC  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042DBC0 0042AB00  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8042DBC4 0042AB04  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8042DBC8 0042AB08  41 82 00 D4 */	beq .L_8042DC9C
/* 8042DBCC 0042AB0C  80 7C 00 A8 */	lwz r3, 0xa8(r28)
/* 8042DBD0 0042AB10  28 03 00 00 */	cmplwi r3, 0
/* 8042DBD4 0042AB14  41 82 00 C8 */	beq .L_8042DC9C
/* 8042DBD8 0042AB18  C0 83 00 04 */	lfs f4, 4(r3)
/* 8042DBDC 0042AB1C  C0 1C 00 90 */	lfs f0, 0x90(r28)
/* 8042DBE0 0042AB20  C0 63 00 00 */	lfs f3, 0(r3)
/* 8042DBE4 0042AB24  EC C0 20 28 */	fsubs f6, f0, f4
/* 8042DBE8 0042AB28  C0 1C 00 8C */	lfs f0, 0x8c(r28)
/* 8042DBEC 0042AB2C  C0 A3 00 08 */	lfs f5, 8(r3)
/* 8042DBF0 0042AB30  C0 3C 00 94 */	lfs f1, 0x94(r28)
/* 8042DBF4 0042AB34  EC 40 18 28 */	fsubs f2, f0, f3
/* 8042DBF8 0042AB38  ED 06 01 B2 */	fmuls f8, f6, f6
/* 8042DBFC 0042AB3C  EC E1 28 28 */	fsubs f7, f1, f5
/* 8042DC00 0042AB40  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042DC04 0042AB44  EC 22 40 BA */	fmadds f1, f2, f2, f8
/* 8042DC08 0042AB48  ED 07 01 F2 */	fmuls f8, f7, f7
/* 8042DC0C 0042AB4C  EC 28 08 2A */	fadds f1, f8, f1
/* 8042DC10 0042AB50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042DC14 0042AB54  40 81 00 14 */	ble .L_8042DC28
/* 8042DC18 0042AB58  40 81 00 14 */	ble .L_8042DC2C
/* 8042DC1C 0042AB5C  FC 00 08 34 */	frsqrte f0, f1
/* 8042DC20 0042AB60  EC 20 00 72 */	fmuls f1, f0, f1
/* 8042DC24 0042AB64  48 00 00 08 */	b .L_8042DC2C
.L_8042DC28:
/* 8042DC28 0042AB68  FC 20 00 90 */	fmr f1, f0
.L_8042DC2C:
/* 8042DC2C 0042AB6C  C0 02 22 B0 */	lfs f0, lbl_80520610@sda21(r2)
/* 8042DC30 0042AB70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042DC34 0042AB74  40 81 00 1C */	ble .L_8042DC50
/* 8042DC38 0042AB78  C0 02 22 EC */	lfs f0, lbl_8052064C@sda21(r2)
/* 8042DC3C 0042AB7C  EC 00 08 24 */	fdivs f0, f0, f1
/* 8042DC40 0042AB80  EC 42 00 32 */	fmuls f2, f2, f0
/* 8042DC44 0042AB84  EC C6 00 32 */	fmuls f6, f6, f0
/* 8042DC48 0042AB88  EC E7 00 32 */	fmuls f7, f7, f0
/* 8042DC4C 0042AB8C  48 00 00 08 */	b .L_8042DC54
.L_8042DC50:
/* 8042DC50 0042AB90  FC 20 00 90 */	fmr f1, f0
.L_8042DC54:
/* 8042DC54 0042AB94  C0 02 22 F0 */	lfs f0, lbl_80520650@sda21(r2)
/* 8042DC58 0042AB98  FD 00 08 90 */	fmr f8, f1
/* 8042DC5C 0042AB9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042DC60 0042ABA0  40 81 00 08 */	ble .L_8042DC68
/* 8042DC64 0042ABA4  FD 00 00 90 */	fmr f8, f0
.L_8042DC68:
/* 8042DC68 0042ABA8  EC 42 02 32 */	fmuls f2, f2, f8
/* 8042DC6C 0042ABAC  7F 83 E3 78 */	mr r3, r28
/* 8042DC70 0042ABB0  EC 26 02 32 */	fmuls f1, f6, f8
/* 8042DC74 0042ABB4  38 9C 00 8C */	addi r4, r28, 0x8c
/* 8042DC78 0042ABB8  EC 07 02 32 */	fmuls f0, f7, f8
/* 8042DC7C 0042ABBC  EC 43 10 2A */	fadds f2, f3, f2
/* 8042DC80 0042ABC0  EC 24 08 2A */	fadds f1, f4, f1
/* 8042DC84 0042ABC4  EC 05 00 2A */	fadds f0, f5, f0
/* 8042DC88 0042ABC8  D0 5C 00 8C */	stfs f2, 0x8c(r28)
/* 8042DC8C 0042ABCC  D0 3C 00 90 */	stfs f1, 0x90(r28)
/* 8042DC90 0042ABD0  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8042DC94 0042ABD4  C0 3C 00 98 */	lfs f1, 0x98(r28)
/* 8042DC98 0042ABD8  48 00 08 85 */	bl "setTransform__Q24Game11MoviePlayerFR10Vector3<f>f"
.L_8042DC9C:
/* 8042DC9C 0042ABDC  80 7C 01 D0 */	lwz r3, 0x1d0(r28)
/* 8042DCA0 0042ABE0  38 80 00 01 */	li r4, 1
/* 8042DCA4 0042ABE4  4B BE 2E 75 */	bl forward__Q37JStudio3stb8TControlFUl
/* 8042DCA8 0042ABE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042DCAC 0042ABEC  40 82 00 7C */	bne .L_8042DD28
/* 8042DCB0 0042ABF0  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 8042DCB4 0042ABF4  2C 00 00 06 */	cmpwi r0, 6
/* 8042DCB8 0042ABF8  41 82 00 BC */	beq .L_8042DD74
/* 8042DCBC 0042ABFC  38 00 00 06 */	li r0, 6
/* 8042DCC0 0042AC00  C0 02 22 F4 */	lfs f0, lbl_80520654@sda21(r2)
/* 8042DCC4 0042AC04  90 1C 00 18 */	stw r0, 0x18(r28)
/* 8042DCC8 0042AC08  38 00 00 00 */	li r0, 0
/* 8042DCCC 0042AC0C  38 80 00 01 */	li r4, 1
/* 8042DCD0 0042AC10  38 A0 00 00 */	li r5, 0
/* 8042DCD4 0042AC14  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 8042DCD8 0042AC18  38 C0 00 03 */	li r6, 3
/* 8042DCDC 0042AC1C  98 1C 00 A4 */	stb r0, 0xa4(r28)
/* 8042DCE0 0042AC20  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042DCE4 0042AC24  4B D8 72 B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 8042DCE8 0042AC28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042DCEC 0042AC2C  C0 22 22 EC */	lfs f1, lbl_8052064C@sda21(r2)
/* 8042DCF0 0042AC30  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DCF4 0042AC34  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8042DCF8 0042AC38  7D 89 03 A6 */	mtctr r12
/* 8042DCFC 0042AC3C  4E 80 04 21 */	bctrl 
/* 8042DD00 0042AC40  80 7C 00 AC */	lwz r3, 0xac(r28)
/* 8042DD04 0042AC44  38 80 00 1E */	li r4, 0x1e
/* 8042DD08 0042AC48  48 03 8D 69 */	bl onDemoFadeoutStart__Q23PSM4DemoFUl
/* 8042DD0C 0042AC4C  80 7C 01 CC */	lwz r3, 0x1cc(r28)
/* 8042DD10 0042AC50  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DD14 0042AC54  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8042DD18 0042AC58  7D 89 03 A6 */	mtctr r12
/* 8042DD1C 0042AC5C  4E 80 04 21 */	bctrl 
/* 8042DD20 0042AC60  38 60 00 01 */	li r3, 1
/* 8042DD24 0042AC64  48 00 00 F4 */	b .L_8042DE18
.L_8042DD28:
/* 8042DD28 0042AC68  80 7C 01 CC */	lwz r3, 0x1cc(r28)
/* 8042DD2C 0042AC6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DD30 0042AC70  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8042DD34 0042AC74  7D 89 03 A6 */	mtctr r12
/* 8042DD38 0042AC78  4E 80 04 21 */	bctrl 
/* 8042DD3C 0042AC7C  80 7C 01 CC */	lwz r3, 0x1cc(r28)
/* 8042DD40 0042AC80  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DD44 0042AC84  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8042DD48 0042AC88  7D 89 03 A6 */	mtctr r12
/* 8042DD4C 0042AC8C  4E 80 04 21 */	bctrl 
/* 8042DD50 0042AC90  80 7C 01 E4 */	lwz r3, 0x1e4(r28)
/* 8042DD54 0042AC94  28 03 00 00 */	cmplwi r3, 0
/* 8042DD58 0042AC98  41 82 00 1C */	beq .L_8042DD74
/* 8042DD5C 0042AC9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DD60 0042ACA0  7F A4 EB 78 */	mr r4, r29
/* 8042DD64 0042ACA4  7F C5 F3 78 */	mr r5, r30
/* 8042DD68 0042ACA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042DD6C 0042ACAC  7D 89 03 A6 */	mtctr r12
/* 8042DD70 0042ACB0  4E 80 04 21 */	bctrl 
.L_8042DD74:
/* 8042DD74 0042ACB4  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 8042DD78 0042ACB8  2C 00 00 05 */	cmpwi r0, 5
/* 8042DD7C 0042ACBC  40 82 00 94 */	bne .L_8042DE10
/* 8042DD80 0042ACC0  80 1C 01 F0 */	lwz r0, 0x1f0(r28)
/* 8042DD84 0042ACC4  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 8042DD88 0042ACC8  41 82 00 88 */	beq .L_8042DE10
/* 8042DD8C 0042ACCC  80 7C 01 D0 */	lwz r3, 0x1d0(r28)
/* 8042DD90 0042ACD0  80 03 00 54 */	lwz r0, 0x54(r3)
/* 8042DD94 0042ACD4  2C 00 00 00 */	cmpwi r0, 0
/* 8042DD98 0042ACD8  40 82 00 78 */	bne .L_8042DE10
/* 8042DD9C 0042ACDC  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 8042DDA0 0042ACE0  70 00 0F 70 */	andi. r0, r0, 0xf70
/* 8042DDA4 0042ACE4  40 82 00 18 */	bne .L_8042DDBC
/* 8042DDA8 0042ACE8  28 1E 00 00 */	cmplwi r30, 0
/* 8042DDAC 0042ACEC  41 82 00 2C */	beq .L_8042DDD8
/* 8042DDB0 0042ACF0  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8042DDB4 0042ACF4  70 00 0F 70 */	andi. r0, r0, 0xf70
/* 8042DDB8 0042ACF8  41 82 00 20 */	beq .L_8042DDD8
.L_8042DDBC:
/* 8042DDBC 0042ACFC  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042DDC0 0042AD00  48 00 3A E5 */	bl isSkippable__Q24Game11MovieConfigFv
/* 8042DDC4 0042AD04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042DDC8 0042AD08  41 82 00 10 */	beq .L_8042DDD8
/* 8042DDCC 0042AD0C  7F 83 E3 78 */	mr r3, r28
/* 8042DDD0 0042AD10  48 00 09 65 */	bl skip__Q24Game11MoviePlayerFv
/* 8042DDD4 0042AD14  48 00 00 3C */	b .L_8042DE10
.L_8042DDD8:
/* 8042DDD8 0042AD18  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 8042DDDC 0042AD1C  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 8042DDE0 0042AD20  40 82 00 18 */	bne .L_8042DDF8
/* 8042DDE4 0042AD24  28 1E 00 00 */	cmplwi r30, 0
/* 8042DDE8 0042AD28  41 82 00 28 */	beq .L_8042DE10
/* 8042DDEC 0042AD2C  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 8042DDF0 0042AD30  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 8042DDF4 0042AD34  41 82 00 1C */	beq .L_8042DE10
.L_8042DDF8:
/* 8042DDF8 0042AD38  80 7C 00 B0 */	lwz r3, 0xb0(r28)
/* 8042DDFC 0042AD3C  48 00 3A C5 */	bl isNeverSkippable__Q24Game11MovieConfigFv
/* 8042DE00 0042AD40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042DE04 0042AD44  40 82 00 0C */	bne .L_8042DE10
/* 8042DE08 0042AD48  7F 83 E3 78 */	mr r3, r28
/* 8042DE0C 0042AD4C  48 00 09 29 */	bl skip__Q24Game11MoviePlayerFv
.L_8042DE10:
/* 8042DE10 0042AD50  80 1C 01 F0 */	lwz r0, 0x1f0(r28)
/* 8042DE14 0042AD54  54 03 07 FE */	clrlwi r3, r0, 0x1f
.L_8042DE18:
/* 8042DE18 0042AD58  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8042DE1C 0042AD5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042DE20 0042AD60  7C 08 03 A6 */	mtlr r0
/* 8042DE24 0042AD64  38 21 00 20 */	addi r1, r1, 0x20
/* 8042DE28 0042AD68  4E 80 00 20 */	blr 
.endfn update__Q24Game11MoviePlayerFP10ControllerP10Controller

.fn update__Q25P2JME8TControlFP10ControllerP10Controller, weak
/* 8042DE2C 0042AD6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042DE30 0042AD70  7C 08 02 A6 */	mflr r0
/* 8042DE34 0042AD74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042DE38 0042AD78  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DE3C 0042AD7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8042DE40 0042AD80  7D 89 03 A6 */	mtctr r12
/* 8042DE44 0042AD84  4E 80 04 21 */	bctrl 
/* 8042DE48 0042AD88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042DE4C 0042AD8C  7C 08 03 A6 */	mtlr r0
/* 8042DE50 0042AD90  38 21 00 10 */	addi r1, r1, 0x10
/* 8042DE54 0042AD94  4E 80 00 20 */	blr 
.endfn update__Q25P2JME8TControlFP10ControllerP10Controller

.fn draw__Q24Game11MoviePlayerFR8Graphics, global
/* 8042DE58 0042AD98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042DE5C 0042AD9C  7C 08 02 A6 */	mflr r0
/* 8042DE60 0042ADA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042DE64 0042ADA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042DE68 0042ADA8  7C 9F 23 78 */	mr r31, r4
/* 8042DE6C 0042ADAC  93 C1 00 08 */	stw r30, 8(r1)
/* 8042DE70 0042ADB0  7C 7E 1B 78 */	mr r30, r3
/* 8042DE74 0042ADB4  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8042DE78 0042ADB8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8042DE7C 0042ADBC  41 82 00 3C */	beq .L_8042DEB8
/* 8042DE80 0042ADC0  80 1E 01 E4 */	lwz r0, 0x1e4(r30)
/* 8042DE84 0042ADC4  28 00 00 00 */	cmplwi r0, 0
/* 8042DE88 0042ADC8  41 82 00 30 */	beq .L_8042DEB8
/* 8042DE8C 0042ADCC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8042DE90 0042ADD0  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8042DE94 0042ADD4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042DE98 0042ADD8  7D 89 03 A6 */	mtctr r12
/* 8042DE9C 0042ADDC  4E 80 04 21 */	bctrl 
/* 8042DEA0 0042ADE0  80 7E 01 E4 */	lwz r3, 0x1e4(r30)
/* 8042DEA4 0042ADE4  7F E4 FB 78 */	mr r4, r31
/* 8042DEA8 0042ADE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DEAC 0042ADEC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8042DEB0 0042ADF0  7D 89 03 A6 */	mtctr r12
/* 8042DEB4 0042ADF4  4E 80 04 21 */	bctrl 
.L_8042DEB8:
/* 8042DEB8 0042ADF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042DEBC 0042ADFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042DEC0 0042AE00  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042DEC4 0042AE04  7C 08 03 A6 */	mtlr r0
/* 8042DEC8 0042AE08  38 21 00 10 */	addi r1, r1, 0x10
/* 8042DECC 0042AE0C  4E 80 00 20 */	blr 
.endfn draw__Q24Game11MoviePlayerFR8Graphics

.fn start__Q24Game11MoviePlayerFP6Camera, global
/* 8042DED0 0042AE10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042DED4 0042AE14  7C 08 02 A6 */	mflr r0
/* 8042DED8 0042AE18  28 04 00 00 */	cmplwi r4, 0
/* 8042DEDC 0042AE1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042DEE0 0042AE20  38 00 00 00 */	li r0, 0
/* 8042DEE4 0042AE24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042DEE8 0042AE28  7C 7F 1B 78 */	mr r31, r3
/* 8042DEEC 0042AE2C  90 03 01 B8 */	stw r0, 0x1b8(r3)
/* 8042DEF0 0042AE30  41 82 00 08 */	beq .L_8042DEF8
/* 8042DEF4 0042AE34  48 00 01 71 */	bl setCamera__Q24Game11MoviePlayerFP6Camera
.L_8042DEF8:
/* 8042DEF8 0042AE38  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 8042DEFC 0042AE3C  28 00 00 00 */	cmplwi r0, 0
/* 8042DF00 0042AE40  41 82 00 28 */	beq .L_8042DF28
/* 8042DF04 0042AE44  38 00 00 00 */	li r0, 0
/* 8042DF08 0042AE48  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 8042DF0C 0042AE4C  80 7F 01 D0 */	lwz r3, 0x1d0(r31)
/* 8042DF10 0042AE50  90 03 00 40 */	stw r0, 0x40(r3)
/* 8042DF14 0042AE54  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8042DF18 0042AE58  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DF1C 0042AE5C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8042DF20 0042AE60  7D 89 03 A6 */	mtctr r12
/* 8042DF24 0042AE64  4E 80 04 21 */	bctrl 
.L_8042DF28:
/* 8042DF28 0042AE68  80 1F 01 F0 */	lwz r0, 0x1f0(r31)
/* 8042DF2C 0042AE6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042DF30 0042AE70  54 03 07 FE */	clrlwi r3, r0, 0x1f
/* 8042DF34 0042AE74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042DF38 0042AE78  7C 08 03 A6 */	mtlr r0
/* 8042DF3C 0042AE7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8042DF40 0042AE80  4E 80 00 20 */	blr 
.endfn start__Q24Game11MoviePlayerFP6Camera

.fn stop__Q24Game11MoviePlayerFv, global
/* 8042DF44 0042AE84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042DF48 0042AE88  7C 08 02 A6 */	mflr r0
/* 8042DF4C 0042AE8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042DF50 0042AE90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042DF54 0042AE94  7C 7F 1B 78 */	mr r31, r3
/* 8042DF58 0042AE98  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8042DF5C 0042AE9C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8042DF60 0042AEA0  41 82 00 CC */	beq .L_8042E02C
/* 8042DF64 0042AEA4  48 00 8F DD */	bl clearPauseAndDraw__Q24Game11MoviePlayerFv
/* 8042DF68 0042AEA8  80 1F 01 F0 */	lwz r0, 0x1f0(r31)
/* 8042DF6C 0042AEAC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8042DF70 0042AEB0  90 1F 01 F0 */	stw r0, 0x1f0(r31)
/* 8042DF74 0042AEB4  80 1F 01 F0 */	lwz r0, 0x1f0(r31)
/* 8042DF78 0042AEB8  54 00 00 7E */	clrlwi r0, r0, 1
/* 8042DF7C 0042AEBC  90 1F 01 F0 */	stw r0, 0x1f0(r31)
/* 8042DF80 0042AEC0  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8042DF84 0042AEC4  28 03 00 00 */	cmplwi r3, 0
/* 8042DF88 0042AEC8  41 82 00 1C */	beq .L_8042DFA4
/* 8042DF8C 0042AECC  81 83 00 00 */	lwz r12, 0(r3)
/* 8042DF90 0042AED0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8042DF94 0042AED4  7D 89 03 A6 */	mtctr r12
/* 8042DF98 0042AED8  4E 80 04 21 */	bctrl 
/* 8042DF9C 0042AEDC  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8042DFA0 0042AEE0  48 00 2A D9 */	bl destroyObjectAll__Q34Game5P2JST12ObjectSystemFv
.L_8042DFA4:
/* 8042DFA4 0042AEE4  38 00 00 00 */	li r0, 0
/* 8042DFA8 0042AEE8  90 1F 01 CC */	stw r0, 0x1cc(r31)
/* 8042DFAC 0042AEEC  90 1F 01 E4 */	stw r0, 0x1e4(r31)
/* 8042DFB0 0042AEF0  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 8042DFB4 0042AEF4  28 00 00 00 */	cmplwi r0, 0
/* 8042DFB8 0042AEF8  41 82 00 14 */	beq .L_8042DFCC
/* 8042DFBC 0042AEFC  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 8042DFC0 0042AF00  4B F8 DB 41 */	bl clearDemoResourceManager__11ParticleMgrFv
/* 8042DFC4 0042AF04  38 00 00 00 */	li r0, 0
/* 8042DFC8 0042AF08  90 1F 01 F4 */	stw r0, 0x1f4(r31)
.L_8042DFCC:
/* 8042DFCC 0042AF0C  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042DFD0 0042AF10  28 03 00 00 */	cmplwi r3, 0
/* 8042DFD4 0042AF14  41 82 00 10 */	beq .L_8042DFE4
/* 8042DFD8 0042AF18  48 03 8B 95 */	bl onDemoEnd__Q23PSM4DemoFv
/* 8042DFDC 0042AF1C  38 00 00 00 */	li r0, 0
/* 8042DFE0 0042AF20  90 1F 00 AC */	stw r0, 0xac(r31)
.L_8042DFE4:
/* 8042DFE4 0042AF24  80 7F 01 B0 */	lwz r3, 0x1b0(r31)
/* 8042DFE8 0042AF28  4B BF 57 49 */	bl freeAll__7JKRHeapFv
/* 8042DFEC 0042AF2C  80 7F 01 B0 */	lwz r3, 0x1b0(r31)
/* 8042DFF0 0042AF30  4B BF 57 F1 */	bl getTotalFreeSize__7JKRHeapFv
/* 8042DFF4 0042AF34  80 FF 01 B4 */	lwz r7, 0x1b4(r31)
/* 8042DFF8 0042AF38  7C 03 38 00 */	cmpw r3, r7
/* 8042DFFC 0042AF3C  41 82 00 28 */	beq .L_8042E024
/* 8042E000 0042AF40  3C A0 80 4A */	lis r5, lbl_80499F28@ha
/* 8042E004 0042AF44  3C 80 80 4A */	lis r4, lbl_8049A0C4@ha
/* 8042E008 0042AF48  38 05 9F 28 */	addi r0, r5, lbl_80499F28@l
/* 8042E00C 0042AF4C  7C 66 1B 78 */	mr r6, r3
/* 8042E010 0042AF50  38 A4 A0 C4 */	addi r5, r4, lbl_8049A0C4@l
/* 8042E014 0042AF54  38 80 05 3B */	li r4, 0x53b
/* 8042E018 0042AF58  7C 03 03 78 */	mr r3, r0
/* 8042E01C 0042AF5C  4C C6 31 82 */	crclr 6
/* 8042E020 0042AF60  4B BF C6 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042E024:
/* 8042E024 0042AF64  38 00 00 00 */	li r0, 0
/* 8042E028 0042AF68  90 1F 00 B0 */	stw r0, 0xb0(r31)
.L_8042E02C:
/* 8042E02C 0042AF6C  38 00 00 00 */	li r0, 0
/* 8042E030 0042AF70  90 1F 01 8C */	stw r0, 0x18c(r31)
/* 8042E034 0042AF74  90 1F 01 94 */	stw r0, 0x194(r31)
/* 8042E038 0042AF78  90 1F 01 9C */	stw r0, 0x19c(r31)
/* 8042E03C 0042AF7C  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 8042E040 0042AF80  80 1F 01 F0 */	lwz r0, 0x1f0(r31)
/* 8042E044 0042AF84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042E048 0042AF88  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8042E04C 0042AF8C  7C 00 00 34 */	cntlzw r0, r0
/* 8042E050 0042AF90  54 03 D9 7E */	srwi r3, r0, 5
/* 8042E054 0042AF94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042E058 0042AF98  7C 08 03 A6 */	mtlr r0
/* 8042E05C 0042AF9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8042E060 0042AFA0  4E 80 00 20 */	blr 
.endfn stop__Q24Game11MoviePlayerFv

.fn setCamera__Q24Game11MoviePlayerFP6Camera, global
/* 8042E064 0042AFA4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8042E068 0042AFA8  7C 08 02 A6 */	mflr r0
/* 8042E06C 0042AFAC  38 A0 00 03 */	li r5, 3
/* 8042E070 0042AFB0  90 01 00 64 */	stw r0, 0x64(r1)
/* 8042E074 0042AFB4  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8042E078 0042AFB8  7C 7F 1B 78 */	mr r31, r3
/* 8042E07C 0042AFBC  3C 60 80 4A */	lis r3, lbl_80499F10@ha
/* 8042E080 0042AFC0  7C 9B 23 78 */	mr r27, r4
/* 8042E084 0042AFC4  3B A3 9F 10 */	addi r29, r3, lbl_80499F10@l
/* 8042E088 0042AFC8  38 9D 01 D4 */	addi r4, r29, 0x1d4
/* 8042E08C 0042AFCC  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8042E090 0042AFD0  48 00 2E AD */	bl findObject__Q34Game5P2JST12ObjectSystemCFPCcQ26JStage8TEObject
/* 8042E094 0042AFD4  7C 7C 1B 79 */	or. r28, r3, r3
/* 8042E098 0042AFD8  40 82 00 18 */	bne .L_8042E0B0
/* 8042E09C 0042AFDC  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8042E0A0 0042AFE0  38 82 22 F8 */	addi r4, r2, lbl_80520658@sda21
/* 8042E0A4 0042AFE4  38 A0 00 03 */	li r5, 3
/* 8042E0A8 0042AFE8  48 00 2E 95 */	bl findObject__Q34Game5P2JST12ObjectSystemCFPCcQ26JStage8TEObject
/* 8042E0AC 0042AFEC  7C 7C 1B 78 */	mr r28, r3
.L_8042E0B0:
/* 8042E0B0 0042AFF0  28 1C 00 00 */	cmplwi r28, 0
/* 8042E0B4 0042AFF4  40 82 01 58 */	bne .L_8042E20C
/* 8042E0B8 0042AFF8  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8042E0BC 0042AFFC  28 03 00 00 */	cmplwi r3, 0
/* 8042E0C0 0042B000  41 82 00 0C */	beq .L_8042E0CC
/* 8042E0C4 0042B004  80 83 00 A0 */	lwz r4, 0xa0(r3)
/* 8042E0C8 0042B008  48 00 00 08 */	b .L_8042E0D0
.L_8042E0CC:
/* 8042E0CC 0042B00C  38 80 00 00 */	li r4, 0
.L_8042E0D0:
/* 8042E0D0 0042B010  80 BF 01 A0 */	lwz r5, 0x1a0(r31)
/* 8042E0D4 0042B014  38 60 00 00 */	li r3, 0
/* 8042E0D8 0042B018  80 1F 00 C4 */	lwz r0, 0xc4(r31)
/* 8042E0DC 0042B01C  90 61 00 38 */	stw r3, 0x38(r1)
/* 8042E0E0 0042B020  28 05 00 00 */	cmplwi r5, 0
/* 8042E0E4 0042B024  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8042E0E8 0042B028  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8042E0EC 0042B02C  90 61 00 38 */	stw r3, 0x38(r1)
/* 8042E0F0 0042B030  90 01 00 40 */	stw r0, 0x40(r1)
/* 8042E0F4 0042B034  41 82 00 08 */	beq .L_8042E0FC
/* 8042E0F8 0042B038  48 00 00 08 */	b .L_8042E100
.L_8042E0FC:
/* 8042E0FC 0042B03C  80 BF 01 90 */	lwz r5, 0x190(r31)
.L_8042E100:
/* 8042E100 0042B040  28 05 00 00 */	cmplwi r5, 0
/* 8042E104 0042B044  41 82 00 C0 */	beq .L_8042E1C4
/* 8042E108 0042B048  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8042E10C 0042B04C  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8042E110 0042B050  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8042E114 0042B054  90 81 00 20 */	stw r4, 0x20(r1)
/* 8042E118 0042B058  90 61 00 24 */	stw r3, 0x24(r1)
/* 8042E11C 0042B05C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8042E120 0042B060  80 7F 01 A0 */	lwz r3, 0x1a0(r31)
/* 8042E124 0042B064  28 03 00 00 */	cmplwi r3, 0
/* 8042E128 0042B068  41 82 00 0C */	beq .L_8042E134
/* 8042E12C 0042B06C  7C 7C 1B 78 */	mr r28, r3
/* 8042E130 0042B070  48 00 00 08 */	b .L_8042E138
.L_8042E134:
/* 8042E134 0042B074  83 9F 01 90 */	lwz r28, 0x190(r31)
.L_8042E138:
/* 8042E138 0042B078  28 03 00 00 */	cmplwi r3, 0
/* 8042E13C 0042B07C  41 82 00 0C */	beq .L_8042E148
/* 8042E140 0042B080  7C 7D 1B 78 */	mr r29, r3
/* 8042E144 0042B084  48 00 00 08 */	b .L_8042E14C
.L_8042E148:
/* 8042E148 0042B088  83 BF 01 90 */	lwz r29, 0x190(r31)
.L_8042E14C:
/* 8042E14C 0042B08C  28 03 00 00 */	cmplwi r3, 0
/* 8042E150 0042B090  41 82 00 08 */	beq .L_8042E158
/* 8042E154 0042B094  48 00 00 08 */	b .L_8042E15C
.L_8042E158:
/* 8042E158 0042B098  80 7F 01 90 */	lwz r3, 0x190(r31)
.L_8042E15C:
/* 8042E15C 0042B09C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042E160 0042B0A0  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8042E164 0042B0A4  7D 89 03 A6 */	mtctr r12
/* 8042E168 0042B0A8  4E 80 04 21 */	bctrl 
/* 8042E16C 0042B0AC  7C 7E 1B 78 */	mr r30, r3
/* 8042E170 0042B0B0  7F A3 EB 78 */	mr r3, r29
/* 8042E174 0042B0B4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8042E178 0042B0B8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8042E17C 0042B0BC  7D 89 03 A6 */	mtctr r12
/* 8042E180 0042B0C0  4E 80 04 21 */	bctrl 
/* 8042E184 0042B0C4  7C 7D 1B 78 */	mr r29, r3
/* 8042E188 0042B0C8  7F 83 E3 78 */	mr r3, r28
/* 8042E18C 0042B0CC  81 9C 00 00 */	lwz r12, 0(r28)
/* 8042E190 0042B0D0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8042E194 0042B0D4  7D 89 03 A6 */	mtctr r12
/* 8042E198 0042B0D8  4E 80 04 21 */	bctrl 
/* 8042E19C 0042B0DC  7C 64 1B 78 */	mr r4, r3
/* 8042E1A0 0042B0E0  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042E1A4 0042B0E4  7F A5 EB 78 */	mr r5, r29
/* 8042E1A8 0042B0E8  7F C6 F3 78 */	mr r6, r30
/* 8042E1AC 0042B0EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8042E1B0 0042B0F0  38 E1 00 20 */	addi r7, r1, 0x20
/* 8042E1B4 0042B0F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8042E1B8 0042B0F8  7D 89 03 A6 */	mtctr r12
/* 8042E1BC 0042B0FC  4E 80 04 21 */	bctrl 
/* 8042E1C0 0042B100  48 00 00 40 */	b .L_8042E200
.L_8042E1C4:
/* 8042E1C4 0042B104  80 C1 00 38 */	lwz r6, 0x38(r1)
/* 8042E1C8 0042B108  38 E1 00 14 */	addi r7, r1, 0x14
/* 8042E1CC 0042B10C  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8042E1D0 0042B110  38 80 00 00 */	li r4, 0
/* 8042E1D4 0042B114  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8042E1D8 0042B118  38 A0 00 00 */	li r5, 0
/* 8042E1DC 0042B11C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8042E1E0 0042B120  38 C0 00 00 */	li r6, 0
/* 8042E1E4 0042B124  90 61 00 18 */	stw r3, 0x18(r1)
/* 8042E1E8 0042B128  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8042E1EC 0042B12C  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042E1F0 0042B130  81 83 00 00 */	lwz r12, 0(r3)
/* 8042E1F4 0042B134  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8042E1F8 0042B138  7D 89 03 A6 */	mtctr r12
/* 8042E1FC 0042B13C  4E 80 04 21 */	bctrl 
.L_8042E200:
/* 8042E200 0042B140  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042E204 0042B144  48 03 80 A9 */	bl onDemoTop__Q23PSM4DemoFv
/* 8042E208 0042B148  48 00 01 6C */	b .L_8042E374
.L_8042E20C:
/* 8042E20C 0042B14C  40 82 00 18 */	bne .L_8042E224
/* 8042E210 0042B150  38 7D 00 18 */	addi r3, r29, 0x18
/* 8042E214 0042B154  38 BD 00 28 */	addi r5, r29, 0x28
/* 8042E218 0042B158  38 80 05 AD */	li r4, 0x5ad
/* 8042E21C 0042B15C  4C C6 31 82 */	crclr 6
/* 8042E220 0042B160  4B BF C4 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8042E224:
/* 8042E224 0042B164  80 1F 01 A0 */	lwz r0, 0x1a0(r31)
/* 8042E228 0042B168  28 00 00 00 */	cmplwi r0, 0
/* 8042E22C 0042B16C  41 82 00 08 */	beq .L_8042E234
/* 8042E230 0042B170  48 00 00 08 */	b .L_8042E238
.L_8042E234:
/* 8042E234 0042B174  80 1F 01 90 */	lwz r0, 0x190(r31)
.L_8042E238:
/* 8042E238 0042B178  28 00 00 00 */	cmplwi r0, 0
/* 8042E23C 0042B17C  41 82 00 08 */	beq .L_8042E244
/* 8042E240 0042B180  83 7F 01 90 */	lwz r27, 0x190(r31)
.L_8042E244:
/* 8042E244 0042B184  7F 83 E3 78 */	mr r3, r28
/* 8042E248 0042B188  7F 64 DB 78 */	mr r4, r27
/* 8042E24C 0042B18C  48 00 18 ED */	bl setCamera__Q34Game5P2JST12ObjectCameraFP6Camera
/* 8042E250 0042B190  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8042E254 0042B194  28 03 00 00 */	cmplwi r3, 0
/* 8042E258 0042B198  41 82 00 0C */	beq .L_8042E264
/* 8042E25C 0042B19C  80 C3 00 A0 */	lwz r6, 0xa0(r3)
/* 8042E260 0042B1A0  48 00 00 08 */	b .L_8042E268
.L_8042E264:
/* 8042E264 0042B1A4  38 C0 00 00 */	li r6, 0
.L_8042E268:
/* 8042E268 0042B1A8  80 1F 00 C4 */	lwz r0, 0xc4(r31)
/* 8042E26C 0042B1AC  38 A0 00 00 */	li r5, 0
/* 8042E270 0042B1B0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8042E274 0042B1B4  7F 63 DB 78 */	mr r3, r27
/* 8042E278 0042B1B8  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8042E27C 0042B1BC  90 81 00 08 */	stw r4, 8(r1)
/* 8042E280 0042B1C0  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8042E284 0042B1C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8042E288 0042B1C8  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E28C 0042B1CC  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8042E290 0042B1D0  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8042E294 0042B1D4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8042E298 0042B1D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8042E29C 0042B1DC  7D 89 03 A6 */	mtctr r12
/* 8042E2A0 0042B1E0  4E 80 04 21 */	bctrl 
/* 8042E2A4 0042B1E4  7C 7D 1B 78 */	mr r29, r3
/* 8042E2A8 0042B1E8  7F 63 DB 78 */	mr r3, r27
/* 8042E2AC 0042B1EC  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E2B0 0042B1F0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8042E2B4 0042B1F4  7D 89 03 A6 */	mtctr r12
/* 8042E2B8 0042B1F8  4E 80 04 21 */	bctrl 
/* 8042E2BC 0042B1FC  7C 7E 1B 78 */	mr r30, r3
/* 8042E2C0 0042B200  7F 63 DB 78 */	mr r3, r27
/* 8042E2C4 0042B204  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E2C8 0042B208  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8042E2CC 0042B20C  7D 89 03 A6 */	mtctr r12
/* 8042E2D0 0042B210  4E 80 04 21 */	bctrl 
/* 8042E2D4 0042B214  7C 64 1B 78 */	mr r4, r3
/* 8042E2D8 0042B218  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042E2DC 0042B21C  7F C5 F3 78 */	mr r5, r30
/* 8042E2E0 0042B220  7F A6 EB 78 */	mr r6, r29
/* 8042E2E4 0042B224  81 83 00 00 */	lwz r12, 0(r3)
/* 8042E2E8 0042B228  38 E1 00 08 */	addi r7, r1, 8
/* 8042E2EC 0042B22C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8042E2F0 0042B230  7D 89 03 A6 */	mtctr r12
/* 8042E2F4 0042B234  4E 80 04 21 */	bctrl 
/* 8042E2F8 0042B238  7F 63 DB 78 */	mr r3, r27
/* 8042E2FC 0042B23C  38 80 00 00 */	li r4, 0
/* 8042E300 0042B240  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E304 0042B244  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8042E308 0042B248  7D 89 03 A6 */	mtctr r12
/* 8042E30C 0042B24C  4E 80 04 21 */	bctrl 
/* 8042E310 0042B250  7F 63 DB 78 */	mr r3, r27
/* 8042E314 0042B254  38 80 00 00 */	li r4, 0
/* 8042E318 0042B258  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E31C 0042B25C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8042E320 0042B260  7D 89 03 A6 */	mtctr r12
/* 8042E324 0042B264  4E 80 04 21 */	bctrl 
/* 8042E328 0042B268  38 82 23 00 */	addi r4, r2, lbl_80520660@sda21
/* 8042E32C 0042B26C  4B FF 9F A9 */	bl print__7MatrixfFPc
/* 8042E330 0042B270  7F 63 DB 78 */	mr r3, r27
/* 8042E334 0042B274  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E338 0042B278  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8042E33C 0042B27C  7D 89 03 A6 */	mtctr r12
/* 8042E340 0042B280  4E 80 04 21 */	bctrl 
/* 8042E344 0042B284  7F 63 DB 78 */	mr r3, r27
/* 8042E348 0042B288  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E34C 0042B28C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8042E350 0042B290  7D 89 03 A6 */	mtctr r12
/* 8042E354 0042B294  4E 80 04 21 */	bctrl 
/* 8042E358 0042B298  7F 63 DB 78 */	mr r3, r27
/* 8042E35C 0042B29C  81 9B 00 00 */	lwz r12, 0(r27)
/* 8042E360 0042B2A0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8042E364 0042B2A4  7D 89 03 A6 */	mtctr r12
/* 8042E368 0042B2A8  4E 80 04 21 */	bctrl 
/* 8042E36C 0042B2AC  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042E370 0042B2B0  48 03 7F 3D */	bl onDemoTop__Q23PSM4DemoFv
.L_8042E374:
/* 8042E374 0042B2B4  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8042E378 0042B2B8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8042E37C 0042B2BC  7C 08 03 A6 */	mtlr r0
/* 8042E380 0042B2C0  38 21 00 60 */	addi r1, r1, 0x60
/* 8042E384 0042B2C4  4E 80 00 20 */	blr 
.endfn setCamera__Q24Game11MoviePlayerFP6Camera

.fn unsuspend__Q24Game11MoviePlayerFlb, global
/* 8042E388 0042B2C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042E38C 0042B2CC  7C 08 02 A6 */	mflr r0
/* 8042E390 0042B2D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042E394 0042B2D4  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8042E398 0042B2D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042E39C 0042B2DC  7C 7F 1B 78 */	mr r31, r3
/* 8042E3A0 0042B2E0  80 63 01 D0 */	lwz r3, 0x1d0(r3)
/* 8042E3A4 0042B2E4  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8042E3A8 0042B2E8  7C 04 00 50 */	subf r0, r4, r0
/* 8042E3AC 0042B2EC  90 03 00 40 */	stw r0, 0x40(r3)
/* 8042E3B0 0042B2F0  41 82 00 94 */	beq .L_8042E444
/* 8042E3B4 0042B2F4  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 8042E3B8 0042B2F8  80 63 00 C4 */	lwz r3, 0xc4(r3)
/* 8042E3BC 0042B2FC  2C 03 00 00 */	cmpwi r3, 0
/* 8042E3C0 0042B300  41 82 00 10 */	beq .L_8042E3D0
/* 8042E3C4 0042B304  80 1F 01 B8 */	lwz r0, 0x1b8(r31)
/* 8042E3C8 0042B308  7C 00 18 00 */	cmpw r0, r3
/* 8042E3CC 0042B30C  41 80 00 48 */	blt .L_8042E414
.L_8042E3D0:
/* 8042E3D0 0042B310  3C 80 80 4A */	lis r4, lbl_8049A0F0@ha
/* 8042E3D4 0042B314  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042E3D8 0042B318  38 A4 A0 F0 */	addi r5, r4, lbl_8049A0F0@l
/* 8042E3DC 0042B31C  38 C0 00 00 */	li r6, 0
/* 8042E3E0 0042B320  38 80 00 01 */	li r4, 1
/* 8042E3E4 0042B324  4B D8 6B B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 8042E3E8 0042B328  38 00 00 0C */	li r0, 0xc
/* 8042E3EC 0042B32C  38 60 00 00 */	li r3, 0
/* 8042E3F0 0042B330  7C 09 03 A6 */	mtctr r0
.L_8042E3F4:
/* 8042E3F4 0042B334  38 63 00 08 */	addi r3, r3, 8
/* 8042E3F8 0042B338  42 00 FF FC */	bdnz .L_8042E3F4
/* 8042E3FC 0042B33C  20 03 00 64 */	subfic r0, r3, 0x64
/* 8042E400 0042B340  7C 09 03 A6 */	mtctr r0
/* 8042E404 0042B344  2C 03 00 64 */	cmpwi r3, 0x64
/* 8042E408 0042B348  40 80 00 24 */	bge .L_8042E42C
.L_8042E40C:
/* 8042E40C 0042B34C  42 00 00 00 */	bdnz .L_8042E40C
/* 8042E410 0042B350  48 00 00 1C */	b .L_8042E42C
.L_8042E414:
/* 8042E414 0042B354  3C 80 80 4A */	lis r4, lbl_8049A104@ha
/* 8042E418 0042B358  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042E41C 0042B35C  38 A4 A1 04 */	addi r5, r4, lbl_8049A104@l
/* 8042E420 0042B360  38 C0 00 03 */	li r6, 3
/* 8042E424 0042B364  38 80 00 00 */	li r4, 0
/* 8042E428 0042B368  4B D8 6B 6D */	bl setPause__Q24Game10GameSystemFbPci
.L_8042E42C:
/* 8042E42C 0042B36C  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042E430 0042B370  80 9F 01 B8 */	lwz r4, 0x1b8(r31)
/* 8042E434 0042B374  48 03 8D 9D */	bl onMessageEnd__Q23PSM4DemoFi
/* 8042E438 0042B378  80 7F 01 B8 */	lwz r3, 0x1b8(r31)
/* 8042E43C 0042B37C  38 03 00 01 */	addi r0, r3, 1
/* 8042E440 0042B380  90 1F 01 B8 */	stw r0, 0x1b8(r31)
.L_8042E444:
/* 8042E444 0042B384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042E448 0042B388  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042E44C 0042B38C  7C 08 03 A6 */	mtlr r0
/* 8042E450 0042B390  38 21 00 10 */	addi r1, r1, 0x10
/* 8042E454 0042B394  4E 80 00 20 */	blr 
.endfn unsuspend__Q24Game11MoviePlayerFlb

.fn resetFrame__Q24Game11MoviePlayerFv, global
/* 8042E458 0042B398  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8042E45C 0042B39C  7C 08 02 A6 */	mflr r0
/* 8042E460 0042B3A0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8042E464 0042B3A4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8042E468 0042B3A8  7C 7F 1B 78 */	mr r31, r3
/* 8042E46C 0042B3AC  38 60 00 00 */	li r3, 0
/* 8042E470 0042B3B0  4B BF 9C 55 */	bl setMessageCount__12JUTAssertionFi
/* 8042E474 0042B3B4  80 9F 01 D0 */	lwz r4, 0x1d0(r31)
/* 8042E478 0042B3B8  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8042E47C 0042B3BC  28 00 00 00 */	cmplwi r0, 0
/* 8042E480 0042B3C0  41 82 00 88 */	beq .L_8042E508
/* 8042E484 0042B3C4  38 61 00 0C */	addi r3, r1, 0xc
/* 8042E488 0042B3C8  4B BD EA 01 */	bl __ct__Q27JStudio6TParseFPQ27JStudio8TControl
/* 8042E48C 0042B3CC  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 8042E490 0042B3D0  38 61 00 0C */	addi r3, r1, 0xc
/* 8042E494 0042B3D4  38 81 00 08 */	addi r4, r1, 8
/* 8042E498 0042B3D8  38 A0 00 30 */	li r5, 0x30
/* 8042E49C 0042B3DC  90 01 00 08 */	stw r0, 8(r1)
/* 8042E4A0 0042B3E0  4B BF 8D 39 */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
/* 8042E4A4 0042B3E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8042E4A8 0042B3E8  40 82 00 30 */	bne .L_8042E4D8
/* 8042E4AC 0042B3EC  3C 60 80 4A */	lis r3, lbl_80499F28@ha
/* 8042E4B0 0042B3F0  3C A0 80 4A */	lis r5, lbl_8049A080@ha
/* 8042E4B4 0042B3F4  38 63 9F 28 */	addi r3, r3, lbl_80499F28@l
/* 8042E4B8 0042B3F8  38 80 03 EC */	li r4, 0x3ec
/* 8042E4BC 0042B3FC  38 A5 A0 80 */	addi r5, r5, lbl_8049A080@l
/* 8042E4C0 0042B400  4C C6 31 82 */	crclr 6
/* 8042E4C4 0042B404  4B BF C1 7D */	bl panic_f__12JUTExceptionFPCciPCce
/* 8042E4C8 0042B408  38 61 00 0C */	addi r3, r1, 0xc
/* 8042E4CC 0042B40C  38 80 FF FF */	li r4, -1
/* 8042E4D0 0042B410  4B BD EA 0D */	bl __dt__Q27JStudio6TParseFv
/* 8042E4D4 0042B414  48 00 00 24 */	b .L_8042E4F8
.L_8042E4D8:
/* 8042E4D8 0042B418  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 8042E4DC 0042B41C  81 83 00 00 */	lwz r12, 0(r3)
/* 8042E4E0 0042B420  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8042E4E4 0042B424  7D 89 03 A6 */	mtctr r12
/* 8042E4E8 0042B428  4E 80 04 21 */	bctrl 
/* 8042E4EC 0042B42C  38 61 00 0C */	addi r3, r1, 0xc
/* 8042E4F0 0042B430  38 80 FF FF */	li r4, -1
/* 8042E4F4 0042B434  4B BD E9 E9 */	bl __dt__Q27JStudio6TParseFv
.L_8042E4F8:
/* 8042E4F8 0042B438  38 00 00 00 */	li r0, 0
/* 8042E4FC 0042B43C  90 1F 01 E8 */	stw r0, 0x1e8(r31)
/* 8042E500 0042B440  80 7F 01 D0 */	lwz r3, 0x1d0(r31)
/* 8042E504 0042B444  90 03 00 40 */	stw r0, 0x40(r3)
.L_8042E508:
/* 8042E508 0042B448  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8042E50C 0042B44C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8042E510 0042B450  7C 08 03 A6 */	mtlr r0
/* 8042E514 0042B454  38 21 00 30 */	addi r1, r1, 0x30
/* 8042E518 0042B458  4E 80 00 20 */	blr 
.endfn resetFrame__Q24Game11MoviePlayerFv

.fn "setTransform__Q24Game11MoviePlayerFR10Vector3<f>f", global
/* 8042E51C 0042B45C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8042E520 0042B460  7C 08 02 A6 */	mflr r0
/* 8042E524 0042B464  90 01 00 24 */	stw r0, 0x24(r1)
/* 8042E528 0042B468  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8042E52C 0042B46C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8042E530 0042B470  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042E534 0042B474  93 C1 00 08 */	stw r30, 8(r1)
/* 8042E538 0042B478  7C 9E 23 78 */	mr r30, r4
/* 8042E53C 0042B47C  FF E0 08 90 */	fmr f31, f1
/* 8042E540 0042B480  C0 44 00 00 */	lfs f2, 0(r4)
/* 8042E544 0042B484  38 00 00 01 */	li r0, 1
/* 8042E548 0042B488  C0 02 23 0C */	lfs f0, lbl_8052066C@sda21(r2)
/* 8042E54C 0042B48C  D0 43 01 BC */	stfs f2, 0x1bc(r3)
/* 8042E550 0042B490  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8042E554 0042B494  C0 42 23 08 */	lfs f2, lbl_80520668@sda21(r2)
/* 8042E558 0042B498  C0 64 00 04 */	lfs f3, 4(r4)
/* 8042E55C 0042B49C  D0 63 01 C0 */	stfs f3, 0x1c0(r3)
/* 8042E560 0042B4A0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8042E564 0042B4A4  C0 44 00 08 */	lfs f2, 8(r4)
/* 8042E568 0042B4A8  D0 43 01 C4 */	stfs f2, 0x1c4(r3)
/* 8042E56C 0042B4AC  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 8042E570 0042B4B0  80 A3 01 D0 */	lwz r5, 0x1d0(r3)
/* 8042E574 0042B4B4  98 05 00 75 */	stb r0, 0x75(r5)
/* 8042E578 0042B4B8  98 05 00 74 */	stb r0, 0x74(r5)
/* 8042E57C 0042B4BC  83 E3 01 D0 */	lwz r31, 0x1d0(r3)
/* 8042E580 0042B4C0  7F E3 FB 78 */	mr r3, r31
/* 8042E584 0042B4C4  4B BD E6 A1 */	bl transformOnGet_setOrigin__Q27JStudio8TControlFRC3Vecf
/* 8042E588 0042B4C8  FC 20 F8 90 */	fmr f1, f31
/* 8042E58C 0042B4CC  7F E3 FB 78 */	mr r3, r31
/* 8042E590 0042B4D0  7F C4 F3 78 */	mr r4, r30
/* 8042E594 0042B4D4  4B BD E6 11 */	bl transformOnSet_setOrigin__Q27JStudio8TControlFRC3Vecf
/* 8042E598 0042B4D8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8042E59C 0042B4DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8042E5A0 0042B4E0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8042E5A4 0042B4E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042E5A8 0042B4E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042E5AC 0042B4EC  7C 08 03 A6 */	mtlr r0
/* 8042E5B0 0042B4F0  38 21 00 20 */	addi r1, r1, 0x20
/* 8042E5B4 0042B4F4  4E 80 00 20 */	blr 
.endfn "setTransform__Q24Game11MoviePlayerFR10Vector3<f>f"

.fn isPlaying__Q24Game11MoviePlayerFPc, global
/* 8042E5B8 0042B4F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042E5BC 0042B4FC  7C 08 02 A6 */	mflr r0
/* 8042E5C0 0042B500  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042E5C4 0042B504  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 8042E5C8 0042B508  28 03 00 00 */	cmplwi r3, 0
/* 8042E5CC 0042B50C  41 82 00 0C */	beq .L_8042E5D8
/* 8042E5D0 0042B510  48 00 32 FD */	bl is__Q24Game11MovieConfigFPc
/* 8042E5D4 0042B514  48 00 00 08 */	b .L_8042E5DC
.L_8042E5D8:
/* 8042E5D8 0042B518  38 60 00 00 */	li r3, 0
.L_8042E5DC:
/* 8042E5DC 0042B51C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042E5E0 0042B520  7C 08 03 A6 */	mtlr r0
/* 8042E5E4 0042B524  38 21 00 10 */	addi r1, r1, 0x10
/* 8042E5E8 0042B528  4E 80 00 20 */	blr 
.endfn isPlaying__Q24Game11MoviePlayerFPc

.fn drawLoading__Q24Game11MoviePlayerFR8Graphics, global
/* 8042E5EC 0042B52C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8042E5F0 0042B530  7C 08 02 A6 */	mflr r0
/* 8042E5F4 0042B534  90 01 00 54 */	stw r0, 0x54(r1)
/* 8042E5F8 0042B538  38 00 00 00 */	li r0, 0
/* 8042E5FC 0042B53C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8042E600 0042B540  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8042E604 0042B544  7C 9E 23 78 */	mr r30, r4
/* 8042E608 0042B548  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8042E60C 0042B54C  7C 7D 1B 78 */	mr r29, r3
/* 8042E610 0042B550  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8042E614 0042B554  2C 03 00 02 */	cmpwi r3, 2
/* 8042E618 0042B558  41 82 00 14 */	beq .L_8042E62C
/* 8042E61C 0042B55C  2C 03 00 03 */	cmpwi r3, 3
/* 8042E620 0042B560  41 82 00 0C */	beq .L_8042E62C
/* 8042E624 0042B564  2C 03 00 04 */	cmpwi r3, 4
/* 8042E628 0042B568  40 82 00 08 */	bne .L_8042E630
.L_8042E62C:
/* 8042E62C 0042B56C  38 00 00 01 */	li r0, 1
.L_8042E630:
/* 8042E630 0042B570  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8042E634 0042B574  41 82 00 E4 */	beq .L_8042E718
/* 8042E638 0042B578  38 7E 00 BC */	addi r3, r30, 0xbc
/* 8042E63C 0042B57C  81 9E 00 BC */	lwz r12, 0xbc(r30)
/* 8042E640 0042B580  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042E644 0042B584  7D 89 03 A6 */	mtctr r12
/* 8042E648 0042B588  4E 80 04 21 */	bctrl 
/* 8042E64C 0042B58C  39 00 00 00 */	li r8, 0
/* 8042E650 0042B590  38 00 00 FF */	li r0, 0xff
/* 8042E654 0042B594  99 01 00 18 */	stb r8, 0x18(r1)
/* 8042E658 0042B598  3B FE 00 BC */	addi r31, r30, 0xbc
/* 8042E65C 0042B59C  7F E3 FB 78 */	mr r3, r31
/* 8042E660 0042B5A0  38 81 00 08 */	addi r4, r1, 8
/* 8042E664 0042B5A4  99 01 00 19 */	stb r8, 0x19(r1)
/* 8042E668 0042B5A8  38 A1 00 0C */	addi r5, r1, 0xc
/* 8042E66C 0042B5AC  38 C1 00 10 */	addi r6, r1, 0x10
/* 8042E670 0042B5B0  38 E1 00 14 */	addi r7, r1, 0x14
/* 8042E674 0042B5B4  99 01 00 1A */	stb r8, 0x1a(r1)
/* 8042E678 0042B5B8  98 01 00 1B */	stb r0, 0x1b(r1)
/* 8042E67C 0042B5BC  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8042E680 0042B5C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042E684 0042B5C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8042E688 0042B5C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8042E68C 0042B5CC  90 01 00 08 */	stw r0, 8(r1)
/* 8042E690 0042B5D0  4B C0 7F FD */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8042E694 0042B5D4  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 8042E698 0042B5D8  28 03 00 00 */	cmplwi r3, 0
/* 8042E69C 0042B5DC  41 82 00 10 */	beq .L_8042E6AC
/* 8042E6A0 0042B5E0  A0 03 00 C0 */	lhz r0, 0xc0(r3)
/* 8042E6A4 0042B5E4  54 00 F7 FE */	rlwinm r0, r0, 0x1e, 0x1f, 0x1f
/* 8042E6A8 0042B5E8  48 00 00 08 */	b .L_8042E6B0
.L_8042E6AC:
/* 8042E6AC 0042B5EC  38 00 00 00 */	li r0, 0
.L_8042E6B0:
/* 8042E6B0 0042B5F0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8042E6B4 0042B5F4  41 82 00 64 */	beq .L_8042E718
/* 8042E6B8 0042B5F8  4B FF 4B 6D */	bl getRenderModeObj__6SystemFv
/* 8042E6BC 0042B5FC  A3 C3 00 06 */	lhz r30, 6(r3)
/* 8042E6C0 0042B600  4B FF 4B 65 */	bl getRenderModeObj__6SystemFv
/* 8042E6C4 0042B604  A0 83 00 04 */	lhz r4, 4(r3)
/* 8042E6C8 0042B608  3C 00 43 30 */	lis r0, 0x4330
/* 8042E6CC 0042B60C  C0 62 22 B0 */	lfs f3, lbl_80520610@sda21(r2)
/* 8042E6D0 0042B610  7F E3 FB 78 */	mr r3, r31
/* 8042E6D4 0042B614  90 81 00 34 */	stw r4, 0x34(r1)
/* 8042E6D8 0042B618  38 81 00 1C */	addi r4, r1, 0x1c
/* 8042E6DC 0042B61C  C8 42 23 10 */	lfd f2, lbl_80520670@sda21(r2)
/* 8042E6E0 0042B620  90 01 00 30 */	stw r0, 0x30(r1)
/* 8042E6E4 0042B624  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8042E6E8 0042B628  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 8042E6EC 0042B62C  EC 20 10 28 */	fsubs f1, f0, f2
/* 8042E6F0 0042B630  90 01 00 38 */	stw r0, 0x38(r1)
/* 8042E6F4 0042B634  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8042E6F8 0042B638  EC 23 08 2A */	fadds f1, f3, f1
/* 8042E6FC 0042B63C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8042E700 0042B640  EC 00 10 28 */	fsubs f0, f0, f2
/* 8042E704 0042B644  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8042E708 0042B648  EC 03 00 2A */	fadds f0, f3, f0
/* 8042E70C 0042B64C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8042E710 0042B650  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8042E714 0042B654  4B C0 80 C1 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_8042E718:
/* 8042E718 0042B658  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8042E71C 0042B65C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8042E720 0042B660  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8042E724 0042B664  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8042E728 0042B668  7C 08 03 A6 */	mtlr r0
/* 8042E72C 0042B66C  38 21 00 50 */	addi r1, r1, 0x50
/* 8042E730 0042B670  4E 80 00 20 */	blr 
.endfn drawLoading__Q24Game11MoviePlayerFR8Graphics

.fn skip__Q24Game11MoviePlayerFv, global
/* 8042E734 0042B674  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8042E738 0042B678  7C 08 02 A6 */	mflr r0
/* 8042E73C 0042B67C  C0 02 22 F4 */	lfs f0, lbl_80520654@sda21(r2)
/* 8042E740 0042B680  90 01 00 44 */	stw r0, 0x44(r1)
/* 8042E744 0042B684  38 00 00 00 */	li r0, 0
/* 8042E748 0042B688  C0 22 22 EC */	lfs f1, lbl_8052064C@sda21(r2)
/* 8042E74C 0042B68C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8042E750 0042B690  7C 7F 1B 78 */	mr r31, r3
/* 8042E754 0042B694  38 60 00 06 */	li r3, 6
/* 8042E758 0042B698  80 9F 01 F0 */	lwz r4, 0x1f0(r31)
/* 8042E75C 0042B69C  60 84 00 02 */	ori r4, r4, 2
/* 8042E760 0042B6A0  90 9F 01 F0 */	stw r4, 0x1f0(r31)
/* 8042E764 0042B6A4  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8042E768 0042B6A8  D0 1F 00 A0 */	stfs f0, 0xa0(r31)
/* 8042E76C 0042B6AC  98 1F 00 A4 */	stb r0, 0xa4(r31)
/* 8042E770 0042B6B0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042E774 0042B6B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8042E778 0042B6B8  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 8042E77C 0042B6BC  7D 89 03 A6 */	mtctr r12
/* 8042E780 0042B6C0  4E 80 04 21 */	bctrl 
/* 8042E784 0042B6C4  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8042E788 0042B6C8  38 80 00 1E */	li r4, 0x1e
/* 8042E78C 0042B6CC  48 03 82 E5 */	bl onDemoFadeoutStart__Q23PSM4DemoFUl
/* 8042E790 0042B6D0  3C 80 80 4A */	lis r4, lbl_8049A118@ha
/* 8042E794 0042B6D4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8042E798 0042B6D8  38 A4 A1 18 */	addi r5, r4, lbl_8049A118@l
/* 8042E79C 0042B6DC  38 C0 00 00 */	li r6, 0
/* 8042E7A0 0042B6E0  38 80 00 01 */	li r4, 1
/* 8042E7A4 0042B6E4  4B D8 67 F1 */	bl setPause__Q24Game10GameSystemFbPci
/* 8042E7A8 0042B6E8  83 FF 01 D0 */	lwz r31, 0x1d0(r31)
/* 8042E7AC 0042B6EC  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 8042E7B0 0042B6F0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8042E7B4 0042B6F4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8042E7B8 0042B6F8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8042E7BC 0042B6FC  48 00 00 40 */	b .L_8042E7FC
.L_8042E7C0:
/* 8042E7C0 0042B700  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8042E7C4 0042B704  84 83 FF F4 */	lwzu r4, -0xc(r3)
/* 8042E7C8 0042B708  88 04 00 00 */	lbz r0, 0(r4)
/* 8042E7CC 0042B70C  2C 00 00 23 */	cmpwi r0, 0x23
/* 8042E7D0 0042B710  40 82 00 20 */	bne .L_8042E7F0
/* 8042E7D4 0042B714  28 03 00 00 */	cmplwi r3, 0
/* 8042E7D8 0042B718  41 82 00 18 */	beq .L_8042E7F0
/* 8042E7DC 0042B71C  81 83 00 08 */	lwz r12, 8(r3)
/* 8042E7E0 0042B720  38 80 00 01 */	li r4, 1
/* 8042E7E4 0042B724  81 8C 00 08 */	lwz r12, 8(r12)
/* 8042E7E8 0042B728  7D 89 03 A6 */	mtctr r12
/* 8042E7EC 0042B72C  4E 80 04 21 */	bctrl 
.L_8042E7F0:
/* 8042E7F0 0042B730  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8042E7F4 0042B734  80 03 00 00 */	lwz r0, 0(r3)
/* 8042E7F8 0042B738  90 01 00 2C */	stw r0, 0x2c(r1)
.L_8042E7FC:
/* 8042E7FC 0042B73C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8042E800 0042B740  38 7F 00 14 */	addi r3, r31, 0x14
/* 8042E804 0042B744  90 61 00 14 */	stw r3, 0x14(r1)
/* 8042E808 0042B748  7C 00 18 40 */	cmplw r0, r3
/* 8042E80C 0042B74C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8042E810 0042B750  90 61 00 28 */	stw r3, 0x28(r1)
/* 8042E814 0042B754  90 61 00 24 */	stw r3, 0x24(r1)
/* 8042E818 0042B758  90 01 00 20 */	stw r0, 0x20(r1)
/* 8042E81C 0042B75C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8042E820 0042B760  90 01 00 08 */	stw r0, 8(r1)
/* 8042E824 0042B764  40 82 FF 9C */	bne .L_8042E7C0
/* 8042E828 0042B768  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8042E82C 0042B76C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8042E830 0042B770  7C 08 03 A6 */	mtlr r0
/* 8042E834 0042B774  38 21 00 40 */	addi r1, r1, 0x40
/* 8042E838 0042B778  4E 80 00 20 */	blr 
.endfn skip__Q24Game11MoviePlayerFv

.fn getNext__Q24Game12MovieContextFv, weak
/* 8042E83C 0042B77C  80 63 00 04 */	lwz r3, 4(r3)
/* 8042E840 0042B780  4E 80 00 20 */	blr 
.endfn getNext__Q24Game12MovieContextFv

.fn __dt__Q24Game11MoviePlayerFv, weak
/* 8042E844 0042B784  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042E848 0042B788  7C 08 02 A6 */	mflr r0
/* 8042E84C 0042B78C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042E850 0042B790  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042E854 0042B794  7C 9F 23 78 */	mr r31, r4
/* 8042E858 0042B798  93 C1 00 08 */	stw r30, 8(r1)
/* 8042E85C 0042B79C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8042E860 0042B7A0  41 82 00 8C */	beq .L_8042E8EC
/* 8042E864 0042B7A4  3C 60 80 4F */	lis r3, __vt__Q24Game11MoviePlayer@ha
/* 8042E868 0042B7A8  34 1E 01 28 */	addic. r0, r30, 0x128
/* 8042E86C 0042B7AC  38 63 C0 0C */	addi r3, r3, __vt__Q24Game11MoviePlayer@l
/* 8042E870 0042B7B0  38 00 00 00 */	li r0, 0
/* 8042E874 0042B7B4  90 7E 00 00 */	stw r3, 0(r30)
/* 8042E878 0042B7B8  90 0D 9B 50 */	stw r0, mArchive__Q24Game11MoviePlayer@sda21(r13)
/* 8042E87C 0042B7BC  41 82 00 1C */	beq .L_8042E898
/* 8042E880 0042B7C0  3C 80 80 4F */	lis r4, __vt__Q24Game12MovieContext@ha
/* 8042E884 0042B7C4  38 7E 01 28 */	addi r3, r30, 0x128
/* 8042E888 0042B7C8  38 04 BF E8 */	addi r0, r4, __vt__Q24Game12MovieContext@l
/* 8042E88C 0042B7CC  38 80 00 00 */	li r4, 0
/* 8042E890 0042B7D0  90 1E 01 28 */	stw r0, 0x128(r30)
/* 8042E894 0042B7D4  4B FE 2C F5 */	bl __dt__5CNodeFv
.L_8042E898:
/* 8042E898 0042B7D8  34 1E 00 CC */	addic. r0, r30, 0xcc
/* 8042E89C 0042B7DC  41 82 00 1C */	beq .L_8042E8B8
/* 8042E8A0 0042B7E0  3C 80 80 4F */	lis r4, __vt__Q24Game12MovieContext@ha
/* 8042E8A4 0042B7E4  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8042E8A8 0042B7E8  38 04 BF E8 */	addi r0, r4, __vt__Q24Game12MovieContext@l
/* 8042E8AC 0042B7EC  38 80 00 00 */	li r4, 0
/* 8042E8B0 0042B7F0  90 1E 00 CC */	stw r0, 0xcc(r30)
/* 8042E8B4 0042B7F4  4B FE 2C D5 */	bl __dt__5CNodeFv
.L_8042E8B8:
/* 8042E8B8 0042B7F8  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 8042E8BC 0042B7FC  41 82 00 14 */	beq .L_8042E8D0
/* 8042E8C0 0042B800  34 7E 00 78 */	addic. r3, r30, 0x78
/* 8042E8C4 0042B804  41 82 00 0C */	beq .L_8042E8D0
/* 8042E8C8 0042B808  38 80 00 00 */	li r4, 0
/* 8042E8CC 0042B80C  4B BF 7F 05 */	bl __dt__10JSUPtrLinkFv
.L_8042E8D0:
/* 8042E8D0 0042B810  7F C3 F3 78 */	mr r3, r30
/* 8042E8D4 0042B814  38 80 00 00 */	li r4, 0
/* 8042E8D8 0042B818  4B BE E7 5D */	bl __dt__11JKRDisposerFv
/* 8042E8DC 0042B81C  7F E0 07 35 */	extsh. r0, r31
/* 8042E8E0 0042B820  40 81 00 0C */	ble .L_8042E8EC
/* 8042E8E4 0042B824  7F C3 F3 78 */	mr r3, r30
/* 8042E8E8 0042B828  4B BF 57 CD */	bl __dl__FPv
.L_8042E8EC:
/* 8042E8EC 0042B82C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042E8F0 0042B830  7F C3 F3 78 */	mr r3, r30
/* 8042E8F4 0042B834  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042E8F8 0042B838  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042E8FC 0042B83C  7C 08 03 A6 */	mtlr r0
/* 8042E900 0042B840  38 21 00 10 */	addi r1, r1, 0x10
/* 8042E904 0042B844  4E 80 00 20 */	blr 
.endfn __dt__Q24Game11MoviePlayerFv

.fn "invoke__30Delegate<Q24Game11MoviePlayer>Fv", weak
/* 8042E908 0042B848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042E90C 0042B84C  7C 08 02 A6 */	mflr r0
/* 8042E910 0042B850  7C 64 1B 78 */	mr r4, r3
/* 8042E914 0042B854  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042E918 0042B858  39 84 00 08 */	addi r12, r4, 8
/* 8042E91C 0042B85C  80 63 00 04 */	lwz r3, 4(r3)
/* 8042E920 0042B860  4B C9 32 05 */	bl __ptmf_scall
/* 8042E924 0042B864  60 00 00 00 */	nop 
/* 8042E928 0042B868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042E92C 0042B86C  7C 08 03 A6 */	mtlr r0
/* 8042E930 0042B870  38 21 00 10 */	addi r1, r1, 0x10
/* 8042E934 0042B874  4E 80 00 20 */	blr 
.endfn "invoke__30Delegate<Q24Game11MoviePlayer>Fv"

.fn __sinit_moviePlayer_cpp, local
/* 8042E938 0042B878  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8042E93C 0042B87C  38 00 FF FF */	li r0, -1
/* 8042E940 0042B880  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8042E944 0042B884  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8042E948 0042B888  90 0D 9B 48 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8042E94C 0042B88C  D4 03 BF B0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8042E950 0042B890  D0 0D 9B 4C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8042E954 0042B894  D0 03 00 04 */	stfs f0, 4(r3)
/* 8042E958 0042B898  D0 03 00 08 */	stfs f0, 8(r3)
/* 8042E95C 0042B89C  4E 80 00 20 */	blr 
.endfn __sinit_moviePlayer_cpp
