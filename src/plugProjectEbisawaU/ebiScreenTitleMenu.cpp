

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D9CE0
 * Size:	000928
 */
void ebi::Screen::TTitleMenu::doSetArchive((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x64(r1)
	  stmw      r24, 0x40(r1)
	  mr        r29, r3
	  addi      r31, r5, 0x6D38
	  mr        r30, r4
	  li        r5, 0
	  addi      r4, r31, 0x14
	  lwz       r3, -0x6514(r13)
	  bl        0x49650
	  li        r3, 0x148
	  bl        -0x3B5E70
	  mr.       r0, r3
	  beq-      .loc_0x48
	  bl        0x5B08C
	  mr        r0, r3

	.loc_0x48:
	  stw       r0, 0xE0(r29)
	  mr        r6, r30
	  addi      r4, r31, 0x2C
	  lis       r5, 0x110
	  lwz       r3, 0xE0(r29)
	  bl        -0x39A718
	  lis       r4, 0x6761
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x6D65
	  li        r5, 0x4E
	  bl        -0xF9F8
	  stw       r3, 0xE4(r29)
	  lis       r3, 0x4E
	  addi      r6, r3, 0x7673
	  li        r5, 0
	  lwz       r3, 0xE0(r29)
	  bl        -0xFA10
	  stw       r3, 0xE8(r29)
	  lis       r5, 0x6C6C
	  lis       r4, 0x4E63
	  lwz       r3, 0xE0(r29)
	  addi      r6, r5, 0x656E
	  addi      r5, r4, 0x6861
	  bl        -0xFA2C
	  stw       r3, 0xEC(r29)
	  lis       r5, 0x7469
	  lis       r4, 0x4E
	  lwz       r3, 0xE0(r29)
	  addi      r6, r5, 0x6F6E
	  addi      r5, r4, 0x6F70
	  bl        -0xFA48
	  stw       r3, 0xF0(r29)
	  lis       r5, 0x636F
	  lis       r4, 0x4E68
	  lwz       r3, 0xE0(r29)
	  addi      r6, r5, 0x7265
	  addi      r5, r4, 0x6973
	  bl        -0xFA64
	  stw       r3, 0xF4(r29)
	  lis       r3, 0x6D61
	  addi      r6, r3, 0x6B65
	  li        r5, 0x4E6F
	  lwz       r3, 0xE0(r29)
	  bl        -0xFA7C
	  stw       r3, 0xF8(r29)
	  lis       r8, 0x6761
	  lis       r3, 0x50
	  addi      r4, r29, 0x114
	  addi      r5, r3, 0x7069
	  lwz       r3, 0xE0(r29)
	  mr        r7, r5
	  addi      r6, r8, 0x3030
	  addi      r8, r8, 0x3939
	  li        r9, 0x64
	  bl        -0x399948
	  stw       r3, 0xFC(r29)
	  lwz       r0, 0xFC(r29)
	  cmpwi     r0, 0x64
	  blt-      .loc_0x148
	  addi      r3, r31, 0x40
	  addi      r5, r31, 0x58
	  li        r4, 0x2C
	  crclr     6, 0x6
	  bl        -0x3AF7E4

	.loc_0x148:
	  lis       r3, 0x50
	  lis       r8, 0x7673
	  addi      r5, r3, 0x7069
	  lwz       r3, 0xE0(r29)
	  mr        r7, r5
	  addi      r4, r29, 0x2A4
	  addi      r6, r8, 0x3030
	  addi      r8, r8, 0x3939
	  li        r9, 0x64
	  bl        -0x399994
	  stw       r3, 0x100(r29)
	  lwz       r0, 0x100(r29)
	  cmpwi     r0, 0x64
	  blt-      .loc_0x194
	  addi      r3, r31, 0x40
	  addi      r5, r31, 0x58
	  li        r4, 0x32
	  crclr     6, 0x6
	  bl        -0x3AF830

	.loc_0x194:
	  lis       r3, 0x50
	  lis       r8, 0x6368
	  addi      r5, r3, 0x7069
	  lwz       r3, 0xE0(r29)
	  mr        r7, r5
	  addi      r4, r29, 0x434
	  addi      r6, r8, 0x3030
	  addi      r8, r8, 0x3939
	  li        r9, 0x64
	  bl        -0x3999E0
	  stw       r3, 0x104(r29)
	  lwz       r0, 0x104(r29)
	  cmpwi     r0, 0x64
	  blt-      .loc_0x1E0
	  addi      r3, r31, 0x40
	  addi      r5, r31, 0x58
	  li        r4, 0x38
	  crclr     6, 0x6
	  bl        -0x3AF87C

	.loc_0x1E0:
	  lis       r3, 0x50
	  lis       r8, 0x6F70
	  addi      r5, r3, 0x7069
	  lwz       r3, 0xE0(r29)
	  mr        r7, r5
	  addi      r4, r29, 0x5C4
	  addi      r6, r8, 0x3030
	  addi      r8, r8, 0x3939
	  li        r9, 0x64
	  bl        -0x399A2C
	  stw       r3, 0x108(r29)
	  lwz       r0, 0x108(r29)
	  cmpwi     r0, 0x64
	  blt-      .loc_0x22C
	  addi      r3, r31, 0x40
	  addi      r5, r31, 0x58
	  li        r4, 0x3E
	  crclr     6, 0x6
	  bl        -0x3AF8C8

	.loc_0x22C:
	  lis       r3, 0x50
	  lis       r8, 0x6873
	  addi      r5, r3, 0x7069
	  lwz       r3, 0xE0(r29)
	  mr        r7, r5
	  addi      r4, r29, 0x754
	  addi      r6, r8, 0x3030
	  addi      r8, r8, 0x3939
	  li        r9, 0x64
	  bl        -0x399A78
	  stw       r3, 0x10C(r29)
	  lwz       r0, 0x10C(r29)
	  cmpwi     r0, 0x64
	  blt-      .loc_0x278
	  addi      r3, r31, 0x40
	  addi      r5, r31, 0x58
	  li        r4, 0x44
	  crclr     6, 0x6
	  bl        -0x3AF914

	.loc_0x278:
	  lis       r3, 0x50
	  lis       r8, 0x6F6D
	  addi      r5, r3, 0x7069
	  lwz       r3, 0xE0(r29)
	  mr        r7, r5
	  addi      r4, r29, 0x8E4
	  addi      r6, r8, 0x3030
	  addi      r8, r8, 0x3939
	  li        r9, 0x64
	  bl        -0x399AC4
	  stw       r3, 0x110(r29)
	  lwz       r0, 0x110(r29)
	  cmpwi     r0, 0x64
	  blt-      .loc_0x2C4
	  addi      r3, r31, 0x40
	  addi      r5, r31, 0x58
	  li        r4, 0x4A
	  crclr     6, 0x6
	  bl        -0x3AF960

	.loc_0x2C4:
	  lis       r4, 0x6761
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x696C
	  li        r5, 0x50
	  bl        -0xFC5C
	  stw       r3, 0x20(r1)
	  lis       r4, 0x7673
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x696C
	  li        r5, 0x50
	  bl        -0xFC74
	  stw       r3, 0x24(r1)
	  lis       r4, 0x6368
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x696C
	  li        r5, 0x50
	  bl        -0xFC8C
	  stw       r3, 0x28(r1)
	  lis       r4, 0x6F70
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x696C
	  li        r5, 0x50
	  bl        -0xFCA4
	  stw       r3, 0x2C(r1)
	  lis       r4, 0x6869
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x696C
	  li        r5, 0x50
	  bl        -0xFCBC
	  stw       r3, 0x30(r1)
	  lis       r4, 0x6F6D
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x696C
	  li        r5, 0x50
	  bl        -0xFCD4
	  stw       r3, 0x34(r1)
	  lis       r4, 0x6761
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x6972
	  li        r5, 0x50
	  bl        -0xFCEC
	  stw       r3, 0x8(r1)
	  lis       r4, 0x7673
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x6972
	  li        r5, 0x50
	  bl        -0xFD04
	  stw       r3, 0xC(r1)
	  lis       r4, 0x6368
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x6972
	  li        r5, 0x50
	  bl        -0xFD1C
	  stw       r3, 0x10(r1)
	  lis       r4, 0x6F70
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x6972
	  li        r5, 0x50
	  bl        -0xFD34
	  stw       r3, 0x14(r1)
	  lis       r4, 0x6869
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x6972
	  li        r5, 0x50
	  bl        -0xFD4C
	  stw       r3, 0x18(r1)
	  lis       r4, 0x6F6D
	  lwz       r3, 0xE0(r29)
	  addi      r6, r4, 0x6972
	  li        r5, 0x50
	  bl        -0xFD64
	  lwz       r4, 0xE0(r29)
	  stw       r3, 0x1C(r1)
	  mr        r3, r4
	  bl        -0xF7B0
	  lwz       r3, 0xE0(r29)
	  addi      r5, r29, 0x12E4
	  mr        r4, r3
	  bl        0x5AB80
	  lwz       r3, 0xE0(r29)
	  addi      r5, r29, 0x1320
	  mr        r4, r3
	  bl        0x5AB70
	  li        r25, 0
	  mr        r26, r29

	.loc_0x418:
	  mr        r28, r26
	  mr        r27, r29
	  li        r24, 0

	.loc_0x424:
	  lwz       r3, 0xE0(r29)
	  addi      r5, r28, 0xA74
	  lwz       r4, 0xE4(r27)
	  bl        0x5AB4C
	  addi      r24, r24, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r24, 0x6
	  addi      r28, r28, 0x3C
	  blt+      .loc_0x424
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x168
	  cmpwi     r25, 0x2
	  blt+      .loc_0x418
	  mr        r26, r29
	  addi      r27, r1, 0x20
	  addi      r28, r1, 0x8
	  li        r24, 0

	.loc_0x468:
	  lwz       r3, 0xE0(r29)
	  addi      r5, r26, 0xD44
	  lwz       r4, 0x0(r27)
	  bl        0x5AB08
	  lwz       r3, 0xE0(r29)
	  addi      r5, r26, 0xEAC
	  lwz       r4, 0x0(r28)
	  bl        0x5AAF8
	  lwz       r3, 0xE0(r29)
	  addi      r5, r26, 0x1014
	  lwz       r4, 0x0(r27)
	  bl        0x5AAE8
	  lwz       r3, 0xE0(r29)
	  addi      r5, r26, 0x117C
	  lwz       r4, 0x0(r28)
	  bl        0x5AAD8
	  addi      r24, r24, 0x1
	  addi      r27, r27, 0x4
	  cmpwi     r24, 0x6
	  addi      r28, r28, 0x4
	  addi      r26, r26, 0x3C
	  blt+      .loc_0x468
	  lwz       r3, 0xE0(r29)
	  addi      r5, r29, 0x135C
	  mr        r4, r3
	  bl        0x5AAB0
	  mr        r5, r30
	  addi      r3, r29, 0xA74
	  addi      r4, r31, 0x64
	  li        r6, 0x64
	  li        r7, 0xDD
	  bl        -0x96F4
	  mr        r5, r30
	  addi      r3, r29, 0xAB0
	  addi      r4, r31, 0x64
	  li        r6, 0x127
	  li        r7, 0x1A5
	  bl        -0x970C
	  mr        r5, r30
	  addi      r3, r29, 0xAEC
	  addi      r4, r31, 0x64
	  li        r6, 0x1EF
	  li        r7, 0x26D
	  bl        -0x9724
	  mr        r5, r30
	  addi      r3, r29, 0xB28
	  addi      r4, r31, 0x64
	  li        r6, 0x2B7
	  li        r7, 0x335
	  bl        -0x973C
	  mr        r5, r30
	  addi      r3, r29, 0xB64
	  addi      r4, r31, 0x64
	  li        r6, 0x37F
	  li        r7, 0x3FD
	  bl        -0x9754
	  mr        r5, r30
	  addi      r3, r29, 0xBA0
	  addi      r4, r31, 0x64
	  li        r6, 0x447
	  li        r7, 0x4C5
	  bl        -0x976C
	  mr        r5, r30
	  addi      r3, r29, 0xBDC
	  addi      r4, r31, 0x78
	  li        r6, 0x64
	  li        r7, 0xDD
	  bl        -0x9784
	  mr        r5, r30
	  addi      r3, r29, 0xC18
	  addi      r4, r31, 0x78
	  li        r6, 0x127
	  li        r7, 0x1A5
	  bl        -0x979C
	  mr        r5, r30
	  addi      r3, r29, 0xC54
	  addi      r4, r31, 0x78
	  li        r6, 0x1EF
	  li        r7, 0x26D
	  bl        -0x97B4
	  mr        r5, r30
	  addi      r3, r29, 0xC90
	  addi      r4, r31, 0x78
	  li        r6, 0x2B7
	  li        r7, 0x335
	  bl        -0x97CC
	  mr        r5, r30
	  addi      r3, r29, 0xCCC
	  addi      r4, r31, 0x78
	  li        r6, 0x37F
	  li        r7, 0x3FD
	  bl        -0x97E4
	  mr        r5, r30
	  addi      r3, r29, 0xD08
	  addi      r4, r31, 0x78
	  li        r6, 0x447
	  li        r7, 0x4C5
	  bl        -0x97FC
	  addi      r24, r31, 0x78
	  mr        r5, r30
	  mr        r4, r24
	  addi      r3, r29, 0xD44
	  li        r6, 0x5F
	  li        r7, 0x6D
	  bl        -0x9818
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x1014
	  li        r6, 0x6E
	  li        r7, 0xE5
	  bl        -0x9830
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xD80
	  li        r6, 0x127
	  li        r7, 0x135
	  bl        -0x9848
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x1050
	  li        r6, 0x136
	  li        r7, 0x1AD
	  bl        -0x9860
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xDBC
	  li        r6, 0x1EE
	  li        r7, 0x1FD
	  bl        -0x9878
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x108C
	  li        r6, 0x1FE
	  li        r7, 0x275
	  bl        -0x9890
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xDF8
	  li        r6, 0x2B6
	  li        r7, 0x2C5
	  bl        -0x98A8
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x10C8
	  li        r6, 0x2C6
	  li        r7, 0x33D
	  bl        -0x98C0
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xE34
	  li        r6, 0x37E
	  li        r7, 0x38D
	  bl        -0x98D8
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x1104
	  li        r6, 0x38E
	  li        r7, 0x405
	  bl        -0x98F0
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xE70
	  li        r6, 0x446
	  li        r7, 0x455
	  bl        -0x9908
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x1140
	  li        r6, 0x456
	  li        r7, 0x4CD
	  bl        -0x9920
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xEAC
	  li        r6, 0x5F
	  li        r7, 0x6D
	  bl        -0x9938
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x117C
	  li        r6, 0x6E
	  li        r7, 0xE5
	  bl        -0x9950
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xEE8
	  li        r6, 0x127
	  li        r7, 0x135
	  bl        -0x9968
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x11B8
	  li        r6, 0x136
	  li        r7, 0x1AD
	  bl        -0x9980
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xF24
	  li        r6, 0x1EE
	  li        r7, 0x1FD
	  bl        -0x9998
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x11F4
	  li        r6, 0x1FE
	  li        r7, 0x275
	  bl        -0x99B0
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xF60
	  li        r6, 0x2B6
	  li        r7, 0x2C5
	  bl        -0x99C8
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x1230
	  li        r6, 0x2C6
	  li        r7, 0x33D
	  bl        -0x99E0
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xF9C
	  li        r6, 0x37E
	  li        r7, 0x38D
	  bl        -0x99F8
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x126C
	  li        r6, 0x38E
	  li        r7, 0x405
	  bl        -0x9A10
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0xFD8
	  li        r6, 0x446
	  li        r7, 0x455
	  bl        -0x9A28
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x12A8
	  li        r6, 0x456
	  li        r7, 0x4CD
	  bl        -0x9A40
	  mr        r4, r24
	  mr        r5, r30
	  addi      r3, r29, 0x12E4
	  li        r6, 0
	  li        r7, 0x64
	  bl        -0x9A58
	  mr        r5, r30
	  addi      r3, r29, 0x1320
	  addi      r4, r31, 0x64
	  li        r6, 0
	  li        r7, 0x64
	  bl        -0x9A70
	  lwz       r3, 0xE0(r29)
	  li        r4, 0x1
	  bl        -0x10168
	  li        r0, 0x2
	  mr        r7, r29
	  mr        r8, r29
	  li        r4, 0
	  mtctr     r0

	.loc_0x884:
	  addi      r6, r7, 0xD44
	  addi      r5, r7, 0x1014
	  stw       r6, 0x4C(r8)
	  addi      r3, r7, 0xEAC
	  addi      r0, r7, 0x117C
	  addi      r6, r7, 0xD80
	  stw       r5, 0x50(r8)
	  addi      r5, r7, 0x1050
	  stw       r4, 0x54(r8)
	  stw       r3, 0x94(r8)
	  addi      r3, r7, 0xEE8
	  stw       r0, 0x98(r8)
	  addi      r0, r7, 0x11B8
	  stw       r4, 0x9C(r8)
	  stw       r6, 0x58(r8)
	  addi      r6, r7, 0xDBC
	  stw       r5, 0x5C(r8)
	  addi      r5, r7, 0x108C
	  stw       r4, 0x60(r8)
	  stw       r3, 0xA0(r8)
	  addi      r3, r7, 0xF24
	  stw       r0, 0xA4(r8)
	  addi      r0, r7, 0x11F4
	  addi      r7, r7, 0xB4
	  stw       r4, 0xA8(r8)
	  stw       r6, 0x64(r8)
	  stw       r5, 0x68(r8)
	  stw       r4, 0x6C(r8)
	  stw       r3, 0xAC(r8)
	  stw       r0, 0xB0(r8)
	  stw       r4, 0xB4(r8)
	  addi      r8, r8, 0x24
	  bdnz+     .loc_0x884
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x14
	  bl        0x48D74
	  lmw       r24, 0x40(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DA608
 * Size:	00021C
 */
void ebi::Screen::TTitleMenu::doOpenScreen((ebi::Screen::ArgOpen*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr.       r28, r4
	  bne-      .loc_0x44
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6D78
	  li        r4, 0xC5
	  addi      r5, r5, 0x6D90
	  crclr     6, 0x6
	  bl        -0x3B0008

	.loc_0x44:
	  lwz       r0, 0x4(r28)
	  li        r3, 0
	  stw       r0, 0xDC(r31)
	  lwz       r0, 0x8(r28)
	  stw       r0, 0x3C(r31)
	  lwz       r0, 0xDC(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x70
	  cmpwi     r0, 0x2
	  bge-      .loc_0x70
	  li        r3, 0x1

	.loc_0x70:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6D78
	  li        r4, 0xCB
	  addi      r5, r5, 0x6D90
	  crclr     6, 0x6
	  bl        -0x3B0058

	.loc_0x94:
	  lwz       r3, 0xE0(r31)
	  bl        -0x100E4
	  lis       r3, 0x8051
	  addi      r30, r3, 0x41FC
	  lwz       r0, 0x1C8(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0xF0
	  li        r28, 0
	  mr        r29, r31

	.loc_0xB8:
	  cmpwi     r28, 0x1
	  beq-      .loc_0xE0
	  cmpwi     r28, 0x2
	  beq-      .loc_0xE0
	  lwz       r3, 0xE4(r29)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x6
	  blt+      .loc_0xB8

	.loc_0xF0:
	  lwz       r0, 0x1C8(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x124
	  lwz       r4, 0xC(r31)
	  addi      r3, r31, 0x10
	  lfs       f1, 0x1808(r2)
	  addi      r7, r31, 0x3C
	  lfs       f2, 0x180C(r2)
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r8, 0x3
	  bl        -0x18CE8
	  b         .loc_0x148

	.loc_0x124:
	  lwz       r4, 0xC(r31)
	  addi      r3, r31, 0x10
	  lfs       f1, 0x1808(r2)
	  addi      r7, r31, 0x3C
	  lfs       f2, 0x180C(r2)
	  li        r5, 0
	  li        r6, 0x5
	  li        r8, 0x3
	  bl        -0x18D10

	.loc_0x148:
	  lwz       r3, 0xE0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xDC(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B0
	  bge-      .loc_0x1D8
	  cmpwi     r0, 0
	  bge-      .loc_0x178
	  b         .loc_0x1D8

	.loc_0x178:
	  lwz       r4, 0xEC(r31)
	  li        r0, 0
	  addi      r3, r31, 0x12E4
	  stb       r0, 0xB0(r4)
	  bl        -0x99DC
	  lwz       r5, -0x6514(r13)
	  addi      r3, r31, 0x1320
	  lfs       f1, 0x1810(r2)
	  li        r4, 0
	  lfs       f0, 0x54(r5)
	  li        r5, 0x1
	  fmuls     f1, f1, f0
	  bl        -0x9C18
	  b         .loc_0x1D8

	.loc_0x1B0:
	  lwz       r5, -0x6514(r13)
	  addi      r3, r31, 0x12E4
	  lfs       f1, 0x1810(r2)
	  li        r4, 0
	  lfs       f0, 0x54(r5)
	  li        r5, 0x1
	  fmuls     f1, f1, f0
	  bl        -0x9C3C
	  addi      r3, r31, 0x1320
	  bl        -0x9A28

	.loc_0x1D8:
	  li        r0, 0
	  li        r4, 0xFF
	  stb       r0, 0x40(r31)
	  stb       r0, 0x41(r31)
	  lwz       r3, 0xE0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DA824
 * Size:	0001C4
 */
void ebi::Screen::TTitleMenu::doInitWaitState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r0, 0xDC(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x3C
	  b         .loc_0x90

	.loc_0x3C:
	  addi      r3, r31, 0x1320
	  bl        -0x9A60
	  li        r29, 0
	  mr        r30, r31

	.loc_0x4C:
	  addi      r3, r30, 0xBDC
	  bl        -0x9AC0
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x3C
	  cmpwi     r29, 0x6
	  blt+      .loc_0x4C
	  b         .loc_0x90

	.loc_0x68:
	  addi      r3, r31, 0x12E4
	  bl        -0x9A8C
	  li        r29, 0
	  mr        r30, r31

	.loc_0x78:
	  addi      r3, r30, 0xA74
	  bl        -0x9AEC
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x3C
	  cmpwi     r29, 0x6
	  blt+      .loc_0x78

	.loc_0x90:
	  lwz       r6, 0xDC(r31)
	  li        r4, 0
	  lwz       r0, 0x3C(r31)
	  li        r5, 0x1
	  lwz       r3, -0x6514(r13)
	  mulli     r6, r6, 0x168
	  lfs       f1, 0x1810(r2)
	  lfs       f0, 0x54(r3)
	  mulli     r0, r0, 0x3C
	  fmuls     f1, f1, f0
	  add       r3, r6, r0
	  addi      r3, r3, 0xA74
	  add       r3, r31, r3
	  bl        -0x9D50
	  lwz       r4, 0x3C(r31)
	  mr        r3, r31
	  bl        0x818
	  mr        r29, r31
	  li        r28, 0
	  li        r30, 0

	.loc_0xE0:
	  stw       r30, 0x54(r29)
	  lwz       r3, 0x4C(r29)
	  bl        -0x9B44
	  stw       r30, 0x9C(r29)
	  lwz       r3, 0x94(r29)
	  bl        -0x9B50
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0xC
	  cmpwi     r28, 0x6
	  blt+      .loc_0xE0
	  lwz       r3, 0x3C(r31)
	  li        r0, 0x1
	  lfs       f1, 0x1810(r2)
	  li        r4, 0
	  mulli     r3, r3, 0xC
	  li        r5, 0x1
	  addi      r30, r3, 0x4C
	  add       r30, r31, r30
	  stw       r0, 0x8(r30)
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x0(r30)
	  lfs       f0, 0x54(r6)
	  fmuls     f1, f1, f0
	  bl        -0x9DC8
	  lwz       r3, 0x4(r30)
	  bl        -0x9BB4
	  lwz       r3, 0x3C(r31)
	  li        r0, 0x1
	  lfs       f1, 0x1810(r2)
	  li        r4, 0
	  mulli     r3, r3, 0xC
	  li        r5, 0x1
	  addi      r30, r3, 0x94
	  add       r30, r31, r30
	  stw       r0, 0x8(r30)
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x0(r30)
	  lfs       f0, 0x54(r6)
	  fmuls     f1, f1, f0
	  bl        -0x9E08
	  lwz       r3, 0x4(r30)
	  bl        -0x9BF4
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1814(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x318E70
	  stw       r3, 0x44(r31)
	  stw       r3, 0x48(r31)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DA9E8
 * Size:	000070
 */
void ebi::Screen::TTitleMenu::doCloseScreen((ebi::Screen::ArgClose*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x41(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1818(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x318ECC
	  stw       r3, 0x44(r31)
	  stw       r3, 0x48(r31)
	  b         .loc_0x5C

	.loc_0x40:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x181C(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x318EEC
	  stw       r3, 0x44(r31)
	  stw       r3, 0x48(r31)

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DAA58
 * Size:	000084
 */
void ebi::Screen::TTitleMenu::doUpdateStateOpen(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0xE0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xDC(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x50
	  bge-      .loc_0x54
	  cmpwi     r0, 0
	  bge-      .loc_0x48
	  b         .loc_0x54

	.loc_0x48:
	  addi      r31, r30, 0x1320
	  b         .loc_0x54

	.loc_0x50:
	  addi      r31, r30, 0x12E4

	.loc_0x54:
	  mr        r3, r31
	  bl        -0x9B00
	  rlwinm    r3,r3,0,24,31
	  lwz       r31, 0xC(r1)
	  neg       r0, r3
	  lwz       r30, 0x8(r1)
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DAADC
 * Size:	000470
 */
void ebi::Screen::TTitleMenu::doUpdateStateWait(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  lwz       r3, 0x44(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  subi      r0, r3, 0x1
	  stw       r0, 0x44(r30)

	.loc_0x30:
	  lwz       r3, 0xE0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r31, 0
	  mr        r29, r30

	.loc_0x4C:
	  lwz       r0, 0x54(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xD4
	  bge-      .loc_0x6C
	  cmpwi     r0, 0
	  beq-      .loc_0xD4
	  bge-      .loc_0x78
	  b         .loc_0xD4

	.loc_0x6C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xD4
	  b         .loc_0xBC

	.loc_0x78:
	  lwz       r3, 0x4C(r29)
	  bl        -0x9BA8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  li        r0, 0x2
	  stw       r0, 0x54(r29)
	  lwz       r3, 0x4C(r29)
	  bl        -0x9DBC
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x2
	  lfs       f1, 0x1810(r2)
	  li        r5, 0x1
	  lfs       f0, 0x54(r3)
	  lwz       r3, 0x50(r29)
	  fmuls     f1, f1, f0
	  bl        -0x9FF8
	  b         .loc_0xD4

	.loc_0xBC:
	  lwz       r3, 0x4C(r29)
	  bl        -0x9BEC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  li        r0, 0
	  stw       r0, 0x54(r29)

	.loc_0xD4:
	  lwz       r0, 0x9C(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x15C
	  bge-      .loc_0xF4
	  cmpwi     r0, 0
	  beq-      .loc_0x15C
	  bge-      .loc_0x100
	  b         .loc_0x15C

	.loc_0xF4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x15C
	  b         .loc_0x144

	.loc_0x100:
	  lwz       r3, 0x94(r29)
	  bl        -0x9C30
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  li        r0, 0x2
	  stw       r0, 0x9C(r29)
	  lwz       r3, 0x94(r29)
	  bl        -0x9E44
	  lwz       r3, -0x6514(r13)
	  li        r4, 0x2
	  lfs       f1, 0x1810(r2)
	  li        r5, 0x1
	  lfs       f0, 0x54(r3)
	  lwz       r3, 0x98(r29)
	  fmuls     f1, f1, f0
	  bl        -0xA080
	  b         .loc_0x15C

	.loc_0x144:
	  lwz       r3, 0x94(r29)
	  bl        -0x9C74
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  li        r0, 0
	  stw       r0, 0x9C(r29)

	.loc_0x15C:
	  addi      r31, r31, 0x1
	  addi      r29, r29, 0xC
	  cmpwi     r31, 0x6
	  blt+      .loc_0x4C
	  addi      r3, r30, 0x10
	  bl        -0x191B0
	  lbz       r0, 0x1D(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x314
	  lwz       r0, 0xDC(r30)
	  lwz       r31, 0x2C(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x1B8
	  lwz       r3, 0x3C(r30)
	  cmpwi     r3, 0x2
	  bne-      .loc_0x1B8
	  cmpw      r31, r3
	  bge-      .loc_0x1B0
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C(r30)
	  b         .loc_0x1B8

	.loc_0x1B0:
	  subi      r0, r3, 0x1
	  stw       r0, 0x3C(r30)

	.loc_0x1B8:
	  lwz       r6, 0xDC(r30)
	  li        r4, 0
	  lwz       r0, 0x3C(r30)
	  li        r5, 0x1
	  lwz       r3, -0x6514(r13)
	  mulli     r6, r6, 0x168
	  lfs       f1, 0x1810(r2)
	  lfs       f0, 0x54(r3)
	  mulli     r0, r0, 0x3C
	  fmuls     f1, f1, f0
	  add       r3, r6, r0
	  addi      r3, r3, 0xA74
	  add       r3, r30, r3
	  bl        -0xA130
	  lwz       r4, 0x3C(r30)
	  mr        r3, r30
	  bl        0x438
	  lwz       r3, 0x3C(r30)
	  li        r0, 0x1
	  lfs       f1, 0x1810(r2)
	  li        r4, 0
	  mulli     r3, r3, 0xC
	  li        r5, 0x1
	  addi      r29, r3, 0x4C
	  add       r29, r30, r29
	  stw       r0, 0x8(r29)
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x0(r29)
	  lfs       f0, 0x54(r6)
	  fmuls     f1, f1, f0
	  bl        -0xA174
	  lwz       r3, 0x4(r29)
	  bl        -0x9F60
	  lwz       r3, 0x3C(r30)
	  li        r0, 0x1
	  lfs       f1, 0x1810(r2)
	  li        r4, 0
	  mulli     r3, r3, 0xC
	  li        r5, 0x1
	  addi      r29, r3, 0x94
	  add       r29, r30, r29
	  stw       r0, 0x8(r29)
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x0(r29)
	  lfs       f0, 0x54(r6)
	  fmuls     f1, f1, f0
	  bl        -0xA1B4
	  lwz       r3, 0x4(r29)
	  bl        -0x9FA0
	  mulli     r29, r31, 0xC
	  li        r0, 0x3
	  lfs       f1, 0x1810(r2)
	  li        r4, 0x1
	  add       r3, r30, r29
	  stw       r0, 0x54(r3)
	  lwz       r5, -0x6514(r13)
	  lwz       r3, 0x4C(r3)
	  lfs       f0, 0x54(r5)
	  fmuls     f1, f1, f0
	  bl        -0xA0DC
	  add       r3, r30, r29
	  lwz       r3, 0x50(r3)
	  bl        -0x9FD8
	  add       r3, r30, r29
	  li        r0, 0x3
	  stw       r0, 0x9C(r3)
	  li        r4, 0x1
	  lfs       f1, 0x1810(r2)
	  lwz       r5, -0x6514(r13)
	  lwz       r3, 0x94(r3)
	  lfs       f0, 0x54(r5)
	  fmuls     f1, f1, f0
	  bl        -0xA110
	  add       r3, r30, r29
	  lwz       r3, 0x98(r3)
	  bl        -0xA00C
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1802
	  li        r5, 0
	  bl        -0xA27A0
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1814(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x319298
	  stw       r3, 0x44(r30)
	  stw       r3, 0x48(r30)

	.loc_0x314:
	  lwz       r3, 0xDC(r30)
	  lwz       r0, 0x3C(r30)
	  mulli     r3, r3, 0x168
	  mulli     r0, r0, 0x3C
	  add       r3, r3, r0
	  addi      r3, r3, 0xA74
	  add       r3, r30, r3
	  bl        -0x9E5C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C4
	  bl        -0x311878
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, 0x1828(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x1820(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, 0x1818(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x380
	  lwz       r4, 0x3C(r30)
	  mr        r3, r30
	  bl        0x2B8
	  b         .loc_0x38C

	.loc_0x380:
	  lwz       r4, 0x3C(r30)
	  mr        r3, r30
	  bl        0x2E4

	.loc_0x38C:
	  lwz       r6, 0xDC(r30)
	  li        r4, 0
	  lwz       r0, 0x3C(r30)
	  li        r5, 0x1
	  lwz       r3, -0x6514(r13)
	  mulli     r6, r6, 0x168
	  lfs       f1, 0x1810(r2)
	  lfs       f0, 0x54(r3)
	  mulli     r0, r0, 0x3C
	  fmuls     f1, f1, f0
	  add       r3, r6, r0
	  addi      r3, r3, 0xA74
	  add       r3, r30, r3
	  bl        -0xA304

	.loc_0x3C4:
	  lwz       r3, 0xC(r30)
	  lwz       r3, 0x1C(r3)
	  rlwinm.   r0,r3,0,23,23
	  bne-      .loc_0x3DC
	  rlwinm.   r0,r3,0,19,19
	  beq-      .loc_0x3FC

	.loc_0x3DC:
	  li        r0, 0x1
	  li        r4, 0x1800
	  stb       r0, 0x40(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA289C
	  li        r3, 0x1
	  b         .loc_0x454

	.loc_0x3FC:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x424
	  li        r0, 0x1
	  li        r4, 0x1801
	  stb       r0, 0x41(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA28C4
	  li        r3, 0x1
	  b         .loc_0x454

	.loc_0x424:
	  lwz       r0, 0x44(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x450
	  li        r0, 0x1
	  li        r4, 0x1801
	  stb       r0, 0x41(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xA28F0
	  li        r3, 0x1
	  b         .loc_0x454

	.loc_0x450:
	  li        r3, 0

	.loc_0x454:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DAF4C
 * Size:	0000D4
 */
void ebi::Screen::TTitleMenu::doUpdateStateClose(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0xE0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  subi      r0, r3, 0x1
	  stw       r0, 0x44(r31)

	.loc_0x3C:
	  lwz       r4, 0x48(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x7C
	  lwz       r3, 0x44(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x1838(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0x80

	.loc_0x7C:
	  lfs       f1, 0x1830(r2)

	.loc_0x80:
	  lfs       f0, 0x1834(r2)
	  lwz       r3, 0xE0(r31)
	  fmuls     f0, f0, f1
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  li        r3, 0x1
	  b         .loc_0xC0

	.loc_0xBC:
	  li        r3, 0

	.loc_0xC0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB020
 * Size:	000074
 */
void ebi::Screen::TTitleMenu::doDraw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r4, -0x6514(r13)
	  lwz       r30, 0x24(r4)
	  addi      r31, r30, 0x190
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xE0(r29)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB094
 * Size:	000008
 */
void ebi::Screen::TTitleMenu::setController((Controller*))
{
	/*
	.loc_0x0:
	  stw       r4, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB09C
 * Size:	000060
 */
void ebi::Screen::TTitleMenu::openMenuSet((ebi::Screen::ArgOpen*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x4C

	.loc_0x48:
	  li        r3, 0

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB0FC
 * Size:	000008
 */
void ebi::Screen::TTitleMenu::isDecide(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB104
 * Size:	000008
 */
void ebi::Screen::TTitleMenu::isCancel(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x41(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB10C
 * Size:	00003C
 */
void ebi::Screen::TTitleMenu::showPika_((long))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x190
	  rlwinm    r4,r4,2,0,29
	  li        r8, 0
	  addi      r7, r4, 0xFC
	  add       r6, r3, r0
	  li        r5, 0x1
	  b         .loc_0x2C

	.loc_0x1C:
	  lwz       r4, 0x114(r6)
	  addi      r6, r6, 0x4
	  addi      r8, r8, 0x1
	  stb       r5, 0xB0(r4)

	.loc_0x2C:
	  lwzx      r0, r3, r7
	  cmpw      r8, r0
	  blt+      .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB148
 * Size:	00003C
 */
void ebi::Screen::TTitleMenu::hidePika_((long))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x190
	  rlwinm    r4,r4,2,0,29
	  li        r8, 0
	  addi      r7, r4, 0xFC
	  add       r6, r3, r0
	  li        r5, 0
	  b         .loc_0x2C

	.loc_0x1C:
	  lwz       r4, 0x114(r6)
	  addi      r6, r6, 0x4
	  addi      r8, r8, 0x1
	  stb       r5, 0xB0(r4)

	.loc_0x2C:
	  lwzx      r0, r3, r7
	  cmpw      r8, r0
	  blt+      .loc_0x1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB184
 * Size:	00000C
 */
void ebi::Screen::TTitleMenu::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  addi      r3, r3, 0x6DC4
	  blr
	*/
}
