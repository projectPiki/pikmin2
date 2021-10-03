

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
 * Address:	........
 * Size:	00000C
 */
void MemoryCardMgr::setTmpHeap(JKRHeap*)
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804405F0
 * Size:	00007C
 */
void MemoryCardMgr::MemoryCardMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r4, 0x804F
      li        r5, 0
      stw       r0, 0x14(r1)
      subi      r0, r4, 0x30F0
      li        r6, 0x20
      li        r7, 0x5
      stw       r31, 0xC(r1)
      mr        r31, r3
      lis       r3, 0x8044
      stw       r0, 0x0(r31)
      addi      r4, r3, 0x66C
      addi      r3, r31, 0x4
      bl        -0x37EDEC
      li        r0, 0
      mr        r3, r31
      stw       r0, 0xA4(r31)
      stw       r0, 0xA8(r31)
      stw       r0, 0xCC(r31)
      stb       r0, 0xD0(r31)
      stw       r0, 0xD4(r31)
      lwz       r0, -0x77D8(r13)
      stw       r0, 0xCC(r31)
      bl        0x40
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8044066C
 * Size:	000024
 */
void MemoryCardMgrCommand::__defctor()
{
    /*
    .loc_0x0:
      lis       r5, 0x804F
      lis       r4, 0x804F
      subi      r0, r5, 0x30B8
      li        r5, 0
      stw       r0, 0x4(r3)
      subi      r0, r4, 0x30C4
      stw       r5, 0x0(r3)
      stw       r0, 0x4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80440690
 * Size:	000024
 */
void MemoryCardMgr::resetCommandFlagQueue()
{
    /*
    .loc_0x0:
      li        r0, 0
      stw       r0, 0x4(r3)
      stw       r0, 0x24(r3)
      stw       r0, 0x44(r3)
      stw       r0, 0x64(r3)
      stw       r0, 0x84(r3)
      stw       r0, 0xA4(r3)
      stw       r0, 0xA8(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void MemoryCardMgr::getCurrentCommand()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804406B4
 * Size:	000040
 */
void MemoryCardMgr::setCommand(int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      lis       r6, 0x804F
      lis       r5, 0x804F
      stw       r0, 0x34(r1)
      subi      r6, r6, 0x30B8
      subi      r0, r5, 0x30C4
      stw       r6, 0xC(r1)
      stw       r4, 0x8(r1)
      addi      r4, r1, 0x8
      stw       r0, 0xC(r1)
      bl        .loc_0x40
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr

    .loc_0x40:
    */
}

/*
 * --INFO--
 * Address:	804406F4
 * Size:	000138
 */
void MemoryCardMgr::setCommand(MemoryCardMgrCommandBase*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stmw      r26, 0x8(r1)
      mr        r27, r4
      lis       r4, 0x804A
      mr        r26, r3
      mr        r3, r27
      li        r29, 0x1
      subi      r31, r4, 0x52F8
      lwz       r12, 0x4(r27)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x20
      ble-      .loc_0x54
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xE1
      crclr     6, 0x6
      bl        -0x416104

    .loc_0x54:
      addi      r3, r26, 0xAC
      bl        -0x350BE4
      li        r28, 0
      mr        r30, r26

    .loc_0x64:
      lwz       r0, 0x4(r30)
      cmpwi     r0, 0
      beq-      .loc_0x9C
      addi      r28, r28, 0x1
      addi      r30, r30, 0x20
      cmplwi    r28, 0x5
      bne+      .loc_0x64
      addi      r3, r31, 0
      addi      r5, r31, 0x44
      li        r29, 0
      li        r4, 0xF0
      crclr     6, 0x6
      bl        -0x416148
      b         .loc_0x64

    .loc_0x9C:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x110
      lwz       r4, 0xA4(r26)

    .loc_0xA8:
      rlwinm    r0,r4,5,0,26
      add       r3, r26, r0
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0xFC
      mr        r4, r27
      addi      r3, r3, 0x4
      li        r5, 0x20
      bl        -0x43B620
      lwz       r3, 0xA8(r26)
      addi      r0, r3, 0x1
      stw       r0, 0xA8(r26)
      lwz       r0, 0xA8(r26)
      cmplwi    r0, 0x5
      ble-      .loc_0x110
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xFE
      crclr     6, 0x6
      bl        -0x4161A8
      b         .loc_0x110

    .loc_0xFC:
      addi      r4, r4, 0x1
      cmplwi    r4, 0x5
      bne+      .loc_0xA8
      li        r4, 0
      b         .loc_0xA8

    .loc_0x110:
      addi      r3, r26, 0xAC
      bl        -0x350BC4
      addi      r3, r26, 0xC4
      bl        -0x3508E4
      mr        r3, r29
      lmw       r26, 0x8(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void MemoryCardMgr::releaseCurrentCommand()
{
    // UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044082C
 * Size:	0002A0
 */
void MemoryCardMgr::cardFormat(MemoryCardMgr::ECardSlot)
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      stw       r0, 0x64(r1)
      stmw      r26, 0x48(r1)
      mr        r29, r3
      lis       r3, 0x804A
      mr        r26, r4
      subi      r31, r3, 0x52F8
      li        r30, 0
      addi      r3, r29, 0xAC
      bl        -0x350AD8
      cmpwi     r3, 0
      beq-      .loc_0x288
      cmpwi     r26, 0
      li        r30, 0x1
      bne-      .loc_0x15C
      lis       r3, 0x804F
      li        r27, 0x1
      subi      r0, r3, 0x30B8
      stw       r27, 0x28(r1)
      lis       r3, 0x804F
      subi      r12, r3, 0x30C4
      stw       r0, 0x2C(r1)
      addi      r3, r1, 0x28
      stw       r12, 0x2C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x20
      ble-      .loc_0x8C
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xE1
      crclr     6, 0x6
      bl        -0x416274

    .loc_0x8C:
      addi      r3, r29, 0xAC
      bl        -0x350D54
      li        r28, 0
      mr        r26, r29

    .loc_0x9C:
      lwz       r0, 0x4(r26)
      cmpwi     r0, 0
      beq-      .loc_0xD4
      addi      r28, r28, 0x1
      addi      r26, r26, 0x20
      cmplwi    r28, 0x5
      bne+      .loc_0x9C
      addi      r3, r31, 0
      addi      r5, r31, 0x44
      li        r27, 0
      li        r4, 0xF0
      crclr     6, 0x6
      bl        -0x4162B8
      b         .loc_0x9C

    .loc_0xD4:
      rlwinm.   r0,r27,0,24,31
      beq-      .loc_0x148
      lwz       r4, 0xA4(r29)

    .loc_0xE0:
      rlwinm    r0,r4,5,0,26
      add       r3, r29, r0
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x134
      addi      r3, r3, 0x4
      addi      r4, r1, 0x28
      li        r5, 0x20
      bl        -0x43B790
      lwz       r3, 0xA8(r29)
      addi      r0, r3, 0x1
      stw       r0, 0xA8(r29)
      lwz       r0, 0xA8(r29)
      cmplwi    r0, 0x5
      ble-      .loc_0x148
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xFE
      crclr     6, 0x6
      bl        -0x416318
      b         .loc_0x148

    .loc_0x134:
      addi      r4, r4, 0x1
      cmplwi    r4, 0x5
      bne+      .loc_0xE0
      li        r4, 0
      b         .loc_0xE0

    .loc_0x148:
      addi      r3, r29, 0xAC
      bl        -0x350D34
      addi      r3, r29, 0xC4
      bl        -0x350A54
      b         .loc_0x278

    .loc_0x15C:
      lis       r4, 0x804F
      lis       r3, 0x804F
      subi      r4, r4, 0x30B8
      li        r0, 0x2
      stw       r4, 0xC(r1)
      subi      r12, r3, 0x30C4
      addi      r3, r1, 0x8
      li        r28, 0x1
      stw       r0, 0x8(r1)
      stw       r12, 0xC(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x20
      ble-      .loc_0x1AC
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xE1
      crclr     6, 0x6
      bl        -0x416394

    .loc_0x1AC:
      addi      r3, r29, 0xAC
      bl        -0x350E74
      li        r27, 0
      mr        r26, r29

    .loc_0x1BC:
      lwz       r0, 0x4(r26)
      cmpwi     r0, 0
      beq-      .loc_0x1F4
      addi      r27, r27, 0x1
      addi      r26, r26, 0x20
      cmplwi    r27, 0x5
      bne+      .loc_0x1BC
      addi      r3, r31, 0
      addi      r5, r31, 0x44
      li        r28, 0
      li        r4, 0xF0
      crclr     6, 0x6
      bl        -0x4163D8
      b         .loc_0x1BC

    .loc_0x1F4:
      rlwinm.   r0,r28,0,24,31
      beq-      .loc_0x268
      lwz       r4, 0xA4(r29)

    .loc_0x200:
      rlwinm    r0,r4,5,0,26
      add       r3, r29, r0
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x254
      addi      r3, r3, 0x4
      addi      r4, r1, 0x8
      li        r5, 0x20
      bl        -0x43B8B0
      lwz       r3, 0xA8(r29)
      addi      r0, r3, 0x1
      stw       r0, 0xA8(r29)
      lwz       r0, 0xA8(r29)
      cmplwi    r0, 0x5
      ble-      .loc_0x268
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xFE
      crclr     6, 0x6
      bl        -0x416438
      b         .loc_0x268

    .loc_0x254:
      addi      r4, r4, 0x1
      cmplwi    r4, 0x5
      bne+      .loc_0x200
      li        r4, 0
      b         .loc_0x200

    .loc_0x268:
      addi      r3, r29, 0xAC
      bl        -0x350E54
      addi      r3, r29, 0xC4
      bl        -0x350B74

    .loc_0x278:
      addi      r3, r29, 0xAC
      bl        -0x350E64
      addi      r3, r29, 0xC4
      bl        -0x350B84

    .loc_0x288:
      mr        r3, r30
      lmw       r26, 0x48(r1)
      lwz       r0, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80440ACC
 * Size:	00007C
 */
void MemoryCardMgr::init()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      bl        -0x36B600
      li        r0, 0
      mr        r3, r31
      stw       r0, 0x4(r31)
      li        r4, 0
      stw       r0, 0x24(r31)
      stw       r0, 0x44(r31)
      stw       r0, 0x64(r31)
      stw       r0, 0x84(r31)
      stw       r0, 0xA4(r31)
      stw       r0, 0xA8(r31)
      bl        0x1D34
      addi      r3, r31, 0xAC
      bl        -0x350FE4
      addi      r3, r31, 0xC4
      bl        -0x350CE4
      mr        r3, r31
      lwz       r12, 0x0(r31)
      lwz       r12, 0x10(r12)
      mtctr     r12
      bctrl
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80440B48
 * Size:	000004
 */
void MemoryCardMgr::doInit()
{
    /*
    .loc_0x0:
      blr
    */
}

/*
 * --INFO--
 * Address:	80440B4C
 * Size:	000320
 */
void MemoryCardMgr::update()
{
    /*
    .loc_0x0:
      stwu      r1, -0x60(r1)
      mflr      r0
      lis       r4, 0x804A
      stw       r0, 0x64(r1)
      stmw      r27, 0x4C(r1)
      mr        r30, r3
      subi      r31, r4, 0x52F8
      bl        0x454
      cmplwi    r3, 0xB
      beq-      .loc_0x30C
      lwz       r3, -0x6514(r13)
      bl        -0x1D7C8
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x30C
      li        r3, 0
      bl        -0x368788
      cmpwi     r3, 0
      beq-      .loc_0x1A4
      mr        r3, r30
      bl        0x424
      cmplwi    r3, 0
      bne-      .loc_0x1A4
      lwz       r0, 0xA8(r30)
      li        r29, 0
      cmpwi     r0, 0
      bne-      .loc_0x7C
      mr        r3, r30
      bl        0x404
      cmplwi    r3, 0xB
      beq-      .loc_0x7C
      li        r29, 0x1

    .loc_0x7C:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x30C
      lis       r4, 0x804F
      lis       r3, 0x804F
      subi      r4, r4, 0x30B8
      li        r0, 0x3
      stw       r4, 0x2C(r1)
      subi      r12, r3, 0x30C4
      addi      r3, r1, 0x28
      li        r28, 0x1
      stw       r0, 0x28(r1)
      stw       r12, 0x2C(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x20
      ble-      .loc_0xD4
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xE1
      crclr     6, 0x6
      bl        -0x4165DC

    .loc_0xD4:
      addi      r3, r30, 0xAC
      bl        -0x3510BC
      li        r29, 0
      mr        r27, r30

    .loc_0xE4:
      lwz       r0, 0x4(r27)
      cmpwi     r0, 0
      beq-      .loc_0x11C
      addi      r29, r29, 0x1
      addi      r27, r27, 0x20
      cmplwi    r29, 0x5
      bne+      .loc_0xE4
      addi      r3, r31, 0
      addi      r5, r31, 0x44
      li        r28, 0
      li        r4, 0xF0
      crclr     6, 0x6
      bl        -0x416620
      b         .loc_0xE4

    .loc_0x11C:
      rlwinm.   r0,r28,0,24,31
      beq-      .loc_0x190
      lwz       r4, 0xA4(r30)

    .loc_0x128:
      rlwinm    r0,r4,5,0,26
      add       r3, r30, r0
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x17C
      addi      r3, r3, 0x4
      addi      r4, r1, 0x28
      li        r5, 0x20
      bl        -0x43BAF8
      lwz       r3, 0xA8(r30)
      addi      r0, r3, 0x1
      stw       r0, 0xA8(r30)
      lwz       r0, 0xA8(r30)
      cmplwi    r0, 0x5
      ble-      .loc_0x190
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xFE
      crclr     6, 0x6
      bl        -0x416680
      b         .loc_0x190

    .loc_0x17C:
      addi      r4, r4, 0x1
      cmplwi    r4, 0x5
      bne+      .loc_0x128
      li        r4, 0
      b         .loc_0x128

    .loc_0x190:
      addi      r3, r30, 0xAC
      bl        -0x35109C
      addi      r3, r30, 0xC4
      bl        -0x350DBC
      b         .loc_0x30C

    .loc_0x1A4:
      li        r3, 0
      bl        -0x3688F4
      cmpwi     r3, 0
      bne-      .loc_0x30C
      mr        r3, r30
      bl        0x2B8
      cmplwi    r3, 0
      beq-      .loc_0x30C
      lwz       r0, 0xA8(r30)
      li        r29, 0
      cmpwi     r0, 0
      bne-      .loc_0x1E8
      mr        r3, r30
      bl        0x298
      cmplwi    r3, 0xB
      beq-      .loc_0x1E8
      li        r29, 0x1

    .loc_0x1E8:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x30C
      lis       r4, 0x804F
      lis       r3, 0x804F
      subi      r4, r4, 0x30B8
      li        r0, 0x4
      stw       r4, 0xC(r1)
      subi      r12, r3, 0x30C4
      addi      r3, r1, 0x8
      li        r29, 0x1
      stw       r0, 0x8(r1)
      stw       r12, 0xC(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x20
      ble-      .loc_0x240
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xE1
      crclr     6, 0x6
      bl        -0x416748

    .loc_0x240:
      addi      r3, r30, 0xAC
      bl        -0x351228
      li        r28, 0
      mr        r27, r30

    .loc_0x250:
      lwz       r0, 0x4(r27)
      cmpwi     r0, 0
      beq-      .loc_0x288
      addi      r28, r28, 0x1
      addi      r27, r27, 0x20
      cmplwi    r28, 0x5
      bne+      .loc_0x250
      addi      r3, r31, 0
      addi      r5, r31, 0x44
      li        r29, 0
      li        r4, 0xF0
      crclr     6, 0x6
      bl        -0x41678C
      b         .loc_0x250

    .loc_0x288:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x2FC
      lwz       r4, 0xA4(r30)

    .loc_0x294:
      rlwinm    r0,r4,5,0,26
      add       r3, r30, r0
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x2E8
      addi      r3, r3, 0x4
      addi      r4, r1, 0x8
      li        r5, 0x20
      bl        -0x43BC64
      lwz       r3, 0xA8(r30)
      addi      r0, r3, 0x1
      stw       r0, 0xA8(r30)
      lwz       r0, 0xA8(r30)
      cmplwi    r0, 0x5
      ble-      .loc_0x2FC
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xFE
      crclr     6, 0x6
      bl        -0x4167EC
      b         .loc_0x2FC

    .loc_0x2E8:
      addi      r4, r4, 0x1
      cmplwi    r4, 0x5
      bne+      .loc_0x294
      li        r4, 0
      b         .loc_0x294

    .loc_0x2FC:
      addi      r3, r30, 0xAC
      bl        -0x351208
      addi      r3, r30, 0xC4
      bl        -0x350F28

    .loc_0x30C:
      lmw       r27, 0x4C(r1)
      lwz       r0, 0x64(r1)
      mtlr      r0
      addi      r1, r1, 0x60
      blr
    */
}

/*
 * --INFO--
 * Address:	80440E6C
 * Size:	000150
 */
void MemoryCardMgr::cardMount()
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      lis       r5, 0x804F
      lis       r4, 0x804F
      stw       r0, 0x44(r1)
      subi      r12, r4, 0x30C4
      subi      r5, r5, 0x30B8
      li        r0, 0x3
      stmw      r27, 0x2C(r1)
      lis       r4, 0x804A
      mr        r27, r3
      addi      r3, r1, 0x8
      subi      r31, r4, 0x52F8
      li        r29, 0x1
      stw       r5, 0xC(r1)
      stw       r0, 0x8(r1)
      stw       r12, 0xC(r1)
      lwz       r12, 0x8(r12)
      mtctr     r12
      bctrl
      cmplwi    r3, 0x20
      ble-      .loc_0x6C
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xE1
      crclr     6, 0x6
      bl        -0x416894

    .loc_0x6C:
      addi      r3, r27, 0xAC
      bl        -0x351374
      li        r30, 0
      mr        r28, r27

    .loc_0x7C:
      lwz       r0, 0x4(r28)
      cmpwi     r0, 0
      beq-      .loc_0xB4
      addi      r30, r30, 0x1
      addi      r28, r28, 0x20
      cmplwi    r30, 0x5
      bne+      .loc_0x7C
      addi      r3, r31, 0
      addi      r5, r31, 0x44
      li        r29, 0
      li        r4, 0xF0
      crclr     6, 0x6
      bl        -0x4168D8
      b         .loc_0x7C

    .loc_0xB4:
      rlwinm.   r0,r29,0,24,31
      beq-      .loc_0x128
      lwz       r4, 0xA4(r27)

    .loc_0xC0:
      rlwinm    r0,r4,5,0,26
      add       r3, r27, r0
      lwz       r0, 0x4(r3)
      cmpwi     r0, 0
      bne-      .loc_0x114
      addi      r3, r3, 0x4
      addi      r4, r1, 0x8
      li        r5, 0x20
      bl        -0x43BDB0
      lwz       r3, 0xA8(r27)
      addi      r0, r3, 0x1
      stw       r0, 0xA8(r27)
      lwz       r0, 0xA8(r27)
      cmplwi    r0, 0x5
      ble-      .loc_0x128
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0xFE
      crclr     6, 0x6
      bl        -0x416938
      b         .loc_0x128

    .loc_0x114:
      addi      r4, r4, 0x1
      cmplwi    r4, 0x5
      bne+      .loc_0xC0
      li        r4, 0
      b         .loc_0xC0

    .loc_0x128:
      addi      r3, r27, 0xAC
      bl        -0x351354
      addi      r3, r27, 0xC4
      bl        -0x351074
      mr        r3, r29
      lmw       r27, 0x2C(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80440FBC
 * Size:	000104
 */
void MemoryCardMgr::checkStatus()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      li        r30, 0xB
      stw       r29, 0x14(r1)
      mr        r29, r3
      lis       r3, 0x804A
      subi      r31, r3, 0x52F8
      addi      r3, r29, 0xAC
      bl        -0x35126C
      cmpwi     r3, 0
      beq-      .loc_0xE4
      lwz       r0, 0xD4(r29)
      cmplwi    r0, 0xB
      bgt-      .loc_0xC8
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x3240
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r30, 0x1
      b         .loc_0xDC
      li        r30, 0x2
      b         .loc_0xDC
      li        r30, 0
      b         .loc_0xDC
      li        r30, 0x4
      b         .loc_0xDC
      li        r30, 0x3
      b         .loc_0xDC
      li        r30, 0x8
      b         .loc_0xDC
      li        r30, 0x9
      b         .loc_0xDC
      li        r30, 0x6
      b         .loc_0xDC
      li        r30, 0x7
      b         .loc_0xDC
      li        r30, 0x5
      b         .loc_0xDC
      addi      r3, r31, 0
      addi      r5, r31, 0x5C
      li        r4, 0x1BF
      crclr     6, 0x6
      bl        -0x416A38
      li        r30, 0xB
      b         .loc_0xDC

    .loc_0xC8:
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0x1C4
      crclr     6, 0x6
      bl        -0x416A54

    .loc_0xDC:
      addi      r3, r29, 0xAC
      bl        -0x351458

    .loc_0xE4:
      lwz       r0, 0x24(r1)
      mr        r3, r30
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
 * Address:	804410C0
 * Size:	000250
 */
void MemoryCardMgr::cardProc(void*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804A
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      subi      r31, r5, 0x52F8
      stw       r30, 0x18(r1)
      mr        r30, r4
      stw       r29, 0x14(r1)
      mr        r29, r3
      stw       r28, 0x10(r1)

    .loc_0x2C:
      addi      r3, r29, 0xAC
      bl        -0x351588
      lwz       r0, 0xA4(r29)
      li        r3, 0
      rlwinm    r4,r0,5,0,26
      addi      r28, r4, 0x4
      add       r28, r29, r28
      lwz       r6, 0x0(r28)
      cmpwi     r6, 0
      bne-      .loc_0x64
      bne-      .loc_0x68
      lwz       r0, 0xA8(r29)
      cmpwi     r0, 0
      bne-      .loc_0x68

    .loc_0x64:
      li        r3, 0x1

    .loc_0x68:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x90
      lwz       r0, 0xA8(r29)
      addi      r3, r31, 0
      addi      r5, r31, 0x10
      li        r4, 0xC6
      cntlzw    r0, r0
      rlwinm    r7,r0,27,24,31
      crclr     6, 0x6
      bl        -0x416B0C

    .loc_0x90:
      mr        r5, r28
      b         .loc_0x104

    .loc_0x98:
      addi      r3, r29, 0xC4
      addi      r4, r29, 0xAC
      bl        -0x351308
      lwz       r0, 0xA4(r29)
      li        r3, 0
      rlwinm    r4,r0,5,0,26
      addi      r28, r4, 0x4
      add       r28, r29, r28
      lwz       r6, 0x0(r28)
      cmpwi     r6, 0
      bne-      .loc_0xD4
      bne-      .loc_0xD8
      lwz       r0, 0xA8(r29)
      cmpwi     r0, 0
      bne-      .loc_0xD8

    .loc_0xD4:
      li        r3, 0x1

    .loc_0xD8:
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x100
      lwz       r0, 0xA8(r29)
      addi      r3, r31, 0
      addi      r5, r31, 0x10
      li        r4, 0xC6
      cntlzw    r0, r0
      rlwinm    r7,r0,27,24,31
      crclr     6, 0x6
      bl        -0x416B7C

    .loc_0x100:
      mr        r5, r28

    .loc_0x104:
      lwz       r0, 0x0(r5)
      cmpwi     r0, 0
      beq+      .loc_0x98
      cmpwi     r0, 0x3
      beq-      .loc_0x158
      bge-      .loc_0x12C
      cmpwi     r0, 0x1
      beq-      .loc_0x138
      bge-      .loc_0x148
      b         .loc_0x178

    .loc_0x12C:
      cmpwi     r0, 0x5
      bge-      .loc_0x178
      b         .loc_0x168

    .loc_0x138:
      mr        r3, r29
      li        r4, 0
      bl        0xDE4
      b         .loc_0x190

    .loc_0x148:
      mr        r3, r29
      li        r4, 0x1
      bl        0xDD4
      b         .loc_0x190

    .loc_0x158:
      mr        r3, r29
      li        r4, 0
      bl        0xE4C
      b         .loc_0x190

    .loc_0x168:
      mr        r3, r29
      li        r4, 0
      bl        0xED4
      b         .loc_0x190

    .loc_0x178:
      lwz       r12, 0x0(r29)
      mr        r3, r29
      mr        r4, r30
      lwz       r12, 0x14(r12)
      mtctr     r12
      bctrl

    .loc_0x190:
      lwz       r0, 0xA4(r29)
      li        r4, 0xCD
      li        r5, 0x20
      rlwinm    r3,r0,5,0,26
      addi      r3, r3, 0x4
      add       r3, r29, r3
      bl        -0x43C1B4
      lwz       r0, 0xA4(r29)
      li        r4, 0
      rlwinm    r3,r0,5,0,26
      addi      r0, r3, 0x4
      stwx      r4, r29, r0
      lwz       r3, 0xA8(r29)
      subi      r0, r3, 0x1
      stw       r0, 0xA8(r29)
      lwz       r0, 0xA8(r29)
      cmpwi     r0, 0
      bge-      .loc_0x1EC
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0x11D
      crclr     6, 0x6
      bl        -0x416C68

    .loc_0x1EC:
      lwz       r3, 0xA4(r29)
      addi      r0, r3, 0x1
      cmplwi    r0, 0x5
      stw       r0, 0xA4(r29)
      bne-      .loc_0x208
      li        r0, 0
      stw       r0, 0xA4(r29)

    .loc_0x208:
      mr        r3, r29
      lwz       r12, 0x0(r29)
      lwz       r12, 0x28(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x244
      li        r0, 0
      stw       r0, 0x4(r29)
      stw       r0, 0x24(r29)
      stw       r0, 0x44(r29)
      stw       r0, 0x64(r29)
      stw       r0, 0x84(r29)
      stw       r0, 0xA4(r29)
      stw       r0, 0xA8(r29)

    .loc_0x244:
      addi      r3, r29, 0xAC
      bl        -0x3516C4
      b         .loc_0x2C
    */
}

/*
 * --INFO--
 * Address:	80441310
 * Size:	000008
 */
void MemoryCardMgr::doCardProc(void*, MemoryCardMgrCommand*)
{
    /*
    .loc_0x0:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80441318
 * Size:	000110
 */
void MemoryCardMgr::isErrorOccured()
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      li        r30, 0xB
      stw       r29, 0x14(r1)
      mr        r29, r3
      lis       r3, 0x804A
      subi      r31, r3, 0x52F8
      addi      r3, r29, 0xAC
      bl        -0x3515C8
      cmpwi     r3, 0
      beq-      .loc_0xE4
      lwz       r0, 0xD4(r29)
      cmplwi    r0, 0xB
      bgt-      .loc_0xC8
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x3210
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r30, 0x1
      b         .loc_0xDC
      li        r30, 0x2
      b         .loc_0xDC
      li        r30, 0
      b         .loc_0xDC
      li        r30, 0x4
      b         .loc_0xDC
      li        r30, 0x3
      b         .loc_0xDC
      li        r30, 0x8
      b         .loc_0xDC
      li        r30, 0x9
      b         .loc_0xDC
      li        r30, 0x6
      b         .loc_0xDC
      li        r30, 0x7
      b         .loc_0xDC
      li        r30, 0x5
      b         .loc_0xDC
      addi      r3, r31, 0
      addi      r5, r31, 0x5C
      li        r4, 0x1BF
      crclr     6, 0x6
      bl        -0x416D94
      li        r30, 0xB
      b         .loc_0xDC

    .loc_0xC8:
      addi      r3, r31, 0
      addi      r5, r31, 0x38
      li        r4, 0x1C4
      crclr     6, 0x6
      bl        -0x416DB0

    .loc_0xDC:
      addi      r3, r29, 0xAC
      bl        -0x3517B4

    .loc_0xE4:
      subfic    r3, r30, 0x2
      subi      r0, r30, 0x2
      or        r0, r3, r0
      rlwinm    r3,r0,1,31,31
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      lwz       r29, 0x14(r1)
      lwz       r0, 0x24(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80441428
 * Size:	0001A0
 */
void MemoryCardMgr::fileOpen(CARDFileInfo*, MemoryCardMgr::ECardSlot,
                             const char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x30(r1)
      mflr      r0
      li        r8, 0x1
      lis       r7, 0x804A
      stw       r0, 0x34(r1)
      stmw      r25, 0x14(r1)
      mr        r31, r5
      subfic    r0, r31, 0x1
      mr        r29, r3
      orc       r5, r8, r31
      mr        r30, r4
      rlwinm    r0,r0,31,1,31
      mr        r25, r6
      sub       r0, r5, r0
      subi      r28, r7, 0x52F8
      rlwinm.   r0,r0,1,31,31
      bne-      .loc_0x48
      li        r8, 0

    .loc_0x48:
      rlwinm.   r0,r8,0,24,31
      bne-      .loc_0x64
      addi      r3, r28, 0
      addi      r5, r28, 0x38
      li        r4, 0x218
      crclr     6, 0x6
      bl        -0x416E48

    .loc_0x64:
      addi      r3, r29, 0xAC
      li        r26, 0
      li        r27, 0xB
      bl        -0x35171C
      cmpwi     r3, 0
      beq-      .loc_0x128
      lwz       r0, 0xD4(r29)
      cmplwi    r0, 0xB
      bgt-      .loc_0x10C
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x31E0
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r27, 0x1
      b         .loc_0x120
      li        r27, 0x2
      b         .loc_0x120
      li        r27, 0
      b         .loc_0x120
      li        r27, 0x4
      b         .loc_0x120
      li        r27, 0x3
      b         .loc_0x120
      li        r27, 0x8
      b         .loc_0x120
      li        r27, 0x9
      b         .loc_0x120
      li        r27, 0x6
      b         .loc_0x120
      li        r27, 0x7
      b         .loc_0x120
      li        r27, 0x5
      b         .loc_0x120
      addi      r3, r28, 0
      addi      r5, r28, 0x5C
      li        r4, 0x1BF
      crclr     6, 0x6
      bl        -0x416EE8
      li        r27, 0xB
      b         .loc_0x120

    .loc_0x10C:
      addi      r3, r28, 0
      addi      r5, r28, 0x38
      li        r4, 0x1C4
      crclr     6, 0x6
      bl        -0x416F04

    .loc_0x120:
      addi      r3, r29, 0xAC
      bl        -0x351908

    .loc_0x128:
      cmplwi    r27, 0x2
      bne-      .loc_0x188
      mr        r3, r31
      mr        r4, r25
      mr        r5, r30
      bl        -0x367C24
      cmpwi     r3, 0
      beq-      .loc_0x158
      bge-      .loc_0x17C
      cmpwi     r3, -0x3
      beq-      .loc_0x16C
      b         .loc_0x17C

    .loc_0x158:
      mr        r3, r29
      li        r4, 0x1
      bl        0x12B8
      li        r26, 0x1
      b         .loc_0x188

    .loc_0x16C:
      mr        r3, r29
      li        r4, 0
      bl        0x12A4
      b         .loc_0x188

    .loc_0x17C:
      mr        r3, r29
      li        r4, 0x3
      bl        0x1294

    .loc_0x188:
      mr        r3, r26
      lmw       r25, 0x14(r1)
      lwz       r0, 0x34(r1)
      mtlr      r0
      addi      r1, r1, 0x30
      blr
    */
}

/*
 * --INFO--
 * Address:	804415C8
 * Size:	000278
 */
void MemoryCardMgr::writeHeader(MemoryCardMgr::ECardSlot, const char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x40(r1)
      mflr      r0
      li        r7, 0x1
      lis       r6, 0x804A
      stw       r0, 0x44(r1)
      stmw      r25, 0x24(r1)
      mr        r29, r4
      subfic    r0, r29, 0x1
      mr        r28, r3
      orc       r4, r7, r29
      mr        r30, r5
      rlwinm    r0,r0,31,1,31
      subi      r27, r6, 0x52F8
      sub       r0, r4, r0
      li        r31, 0
      rlwinm.   r0,r0,1,31,31
      bne-      .loc_0x48
      li        r7, 0

    .loc_0x48:
      rlwinm.   r0,r7,0,24,31
      bne-      .loc_0x64
      addi      r3, r27, 0
      addi      r5, r27, 0x38
      li        r4, 0x218
      crclr     6, 0x6
      bl        -0x416FE8

    .loc_0x64:
      addi      r3, r28, 0xAC
      li        r26, 0
      li        r25, 0xB
      bl        -0x3518BC
      cmpwi     r3, 0
      beq-      .loc_0x128
      lwz       r0, 0xD4(r28)
      cmplwi    r0, 0xB
      bgt-      .loc_0x10C
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x31B0
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r25, 0x1
      b         .loc_0x120
      li        r25, 0x2
      b         .loc_0x120
      li        r25, 0
      b         .loc_0x120
      li        r25, 0x4
      b         .loc_0x120
      li        r25, 0x3
      b         .loc_0x120
      li        r25, 0x8
      b         .loc_0x120
      li        r25, 0x9
      b         .loc_0x120
      li        r25, 0x6
      b         .loc_0x120
      li        r25, 0x7
      b         .loc_0x120
      li        r25, 0x5
      b         .loc_0x120
      addi      r3, r27, 0
      addi      r5, r27, 0x5C
      li        r4, 0x1BF
      crclr     6, 0x6
      bl        -0x417088
      li        r25, 0xB
      b         .loc_0x120

    .loc_0x10C:
      addi      r3, r27, 0
      addi      r5, r27, 0x38
      li        r4, 0x1C4
      crclr     6, 0x6
      bl        -0x4170A4

    .loc_0x120:
      addi      r3, r28, 0xAC
      bl        -0x351AA8

    .loc_0x128:
      cmplwi    r25, 0x2
      bne-      .loc_0x188
      mr        r3, r29
      mr        r4, r30
      addi      r5, r1, 0x8
      bl        -0x367DC4
      cmpwi     r3, 0
      beq-      .loc_0x158
      bge-      .loc_0x17C
      cmpwi     r3, -0x3
      beq-      .loc_0x16C
      b         .loc_0x17C

    .loc_0x158:
      mr        r3, r28
      li        r4, 0x1
      bl        0x1118
      li        r26, 0x1
      b         .loc_0x188

    .loc_0x16C:
      mr        r3, r28
      li        r4, 0
      bl        0x1104
      b         .loc_0x188

    .loc_0x17C:
      mr        r3, r28
      li        r4, 0x3
      bl        0x10F4

    .loc_0x188:
      rlwinm.   r0,r26,0,24,31
      beq-      .loc_0x258
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      lwz       r4, 0xCC(r28)
      li        r5, -0x20
      bl        -0x41D72C
      mr        r0, r3
      mr        r3, r28
      lwz       r12, 0x0(r28)
      mr        r25, r0
      mr        r4, r25
      lwz       r12, 0x1C(r12)
      mtctr     r12
      bctrl
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      mr        r4, r3
      mr        r3, r25
      bl        -0x35509C
      mr        r3, r28
      li        r4, 0xB
      bl        0x1080
      mr        r3, r28
      lwz       r12, 0x0(r28)
      lwz       r12, 0x18(r12)
      mtctr     r12
      bctrl
      mr        r5, r3
      mr        r4, r25
      addi      r3, r1, 0x8
      li        r6, 0
      bl        -0x3671F8
      cmpwi     r3, 0
      beq-      .loc_0x230
      b         .loc_0x244

    .loc_0x230:
      mr        r3, r28
      li        r4, 0x1
      bl        0x1040
      li        r31, 0x1
      b         .loc_0x250

    .loc_0x244:
      mr        r3, r28
      li        r4, 0xA
      bl        0x102C

    .loc_0x250:
      mr        r3, r25
      bl        -0x41D768

    .loc_0x258:
      addi      r3, r1, 0x8
      bl        -0x367DC8
      mr        r3, r31
      lmw       r25, 0x24(r1)
      lwz       r0, 0x44(r1)
      mtlr      r0
      addi      r1, r1, 0x40
      blr
    */
}

/*
 * --INFO--
 * Address:	80441840
 * Size:	000008
 */
void MemoryCardMgr::getHeaderSize()
{
    /*
    .loc_0x0:
      li        r3, 0x2000
      blr
    */
}

/*
 * --INFO--
 * Address:	80441848
 * Size:	000254
 */
void MemoryCardMgr::writeCardStatus(MemoryCardMgr::ECardSlot, const char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      li        r7, 0x1
      lis       r6, 0x804A
      stw       r0, 0xB4(r1)
      stmw      r25, 0x94(r1)
      mr        r30, r4
      subfic    r0, r30, 0x1
      mr        r29, r3
      orc       r4, r7, r30
      mr        r31, r5
      rlwinm    r0,r0,31,1,31
      subi      r28, r6, 0x52F8
      sub       r0, r4, r0
      li        r25, 0
      rlwinm.   r0,r0,1,31,31
      bne-      .loc_0x48
      li        r7, 0

    .loc_0x48:
      rlwinm.   r0,r7,0,24,31
      bne-      .loc_0x64
      addi      r3, r28, 0
      addi      r5, r28, 0x38
      li        r4, 0x218
      crclr     6, 0x6
      bl        -0x417268

    .loc_0x64:
      addi      r3, r29, 0xAC
      li        r27, 0
      li        r26, 0xB
      bl        -0x351B3C
      cmpwi     r3, 0
      beq-      .loc_0x128
      lwz       r0, 0xD4(r29)
      cmplwi    r0, 0xB
      bgt-      .loc_0x10C
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x3180
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r26, 0x1
      b         .loc_0x120
      li        r26, 0x2
      b         .loc_0x120
      li        r26, 0
      b         .loc_0x120
      li        r26, 0x4
      b         .loc_0x120
      li        r26, 0x3
      b         .loc_0x120
      li        r26, 0x8
      b         .loc_0x120
      li        r26, 0x9
      b         .loc_0x120
      li        r26, 0x6
      b         .loc_0x120
      li        r26, 0x7
      b         .loc_0x120
      li        r26, 0x5
      b         .loc_0x120
      addi      r3, r28, 0
      addi      r5, r28, 0x5C
      li        r4, 0x1BF
      crclr     6, 0x6
      bl        -0x417308
      li        r26, 0xB
      b         .loc_0x120

    .loc_0x10C:
      addi      r3, r28, 0
      addi      r5, r28, 0x38
      li        r4, 0x1C4
      crclr     6, 0x6
      bl        -0x417324

    .loc_0x120:
      addi      r3, r29, 0xAC
      bl        -0x351D28

    .loc_0x128:
      cmplwi    r26, 0x2
      bne-      .loc_0x188
      mr        r3, r30
      mr        r4, r31
      addi      r5, r1, 0x8
      bl        -0x368044
      cmpwi     r3, 0
      beq-      .loc_0x158
      bge-      .loc_0x17C
      cmpwi     r3, -0x3
      beq-      .loc_0x16C
      b         .loc_0x17C

    .loc_0x158:
      mr        r3, r29
      li        r4, 0x1
      bl        0xE98
      li        r27, 0x1
      b         .loc_0x188

    .loc_0x16C:
      mr        r3, r29
      li        r4, 0
      bl        0xE84
      b         .loc_0x188

    .loc_0x17C:
      mr        r3, r29
      li        r4, 0x3
      bl        0xE74

    .loc_0x188:
      rlwinm.   r0,r27,0,24,31
      beq-      .loc_0x234
      lwz       r4, 0xC(r1)
      mr        r3, r30
      addi      r5, r1, 0x1C
      bl        -0x3671B4
      cmpwi     r3, 0
      bne-      .loc_0x228
      mr        r3, r29
      addi      r4, r1, 0x1C
      lwz       r12, 0x0(r29)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      bne-      .loc_0x234
      mr        r3, r29
      addi      r4, r1, 0x1C
      lwz       r12, 0x0(r29)
      lwz       r12, 0x20(r12)
      mtctr     r12
      bctrl
      mr        r3, r29
      li        r4, 0xB
      bl        0xE10
      lwz       r4, 0xC(r1)
      mr        r3, r30
      addi      r5, r1, 0x1C
      bl        -0x366F88
      cmpwi     r3, 0
      beq-      .loc_0x214
      mr        r3, r29
      li        r4, 0xA
      bl        0xDEC
      b         .loc_0x234

    .loc_0x214:
      mr        r3, r29
      li        r4, 0x1
      bl        0xDDC
      li        r25, 0x1
      b         .loc_0x234

    .loc_0x228:
      mr        r3, r29
      li        r4, 0xA
      bl        0xDC8

    .loc_0x234:
      addi      r3, r1, 0x8
      bl        -0x368024
      mr        r3, r25
      lmw       r25, 0x94(r1)
      lwz       r0, 0xB4(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	80441A9C
 * Size:	000204
 */
void MemoryCardMgr::write(MemoryCardMgr::ECardSlot, const char*, unsigned char*,
                          long, long)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      li        r10, 0x1
      lis       r9, 0x804A
      stw       r0, 0x54(r1)
      stmw      r22, 0x28(r1)
      mr        r26, r4
      subfic    r0, r26, 0x1
      mr        r25, r3
      orc       r4, r10, r26
      mr        r27, r5
      rlwinm    r0,r0,31,1,31
      mr        r28, r6
      sub       r0, r4, r0
      mr        r29, r7
      rlwinm.   r0,r0,1,31,31
      mr        r30, r8
      subi      r24, r9, 0x52F8
      li        r31, 0
      bne-      .loc_0x54
      li        r10, 0

    .loc_0x54:
      rlwinm.   r0,r10,0,24,31
      bne-      .loc_0x70
      addi      r3, r24, 0
      addi      r5, r24, 0x38
      li        r4, 0x218
      crclr     6, 0x6
      bl        -0x4174C8

    .loc_0x70:
      addi      r3, r25, 0xAC
      li        r23, 0
      li        r22, 0xB
      bl        -0x351D9C
      cmpwi     r3, 0
      beq-      .loc_0x134
      lwz       r0, 0xD4(r25)
      cmplwi    r0, 0xB
      bgt-      .loc_0x118
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x3150
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r22, 0x1
      b         .loc_0x12C
      li        r22, 0x2
      b         .loc_0x12C
      li        r22, 0
      b         .loc_0x12C
      li        r22, 0x4
      b         .loc_0x12C
      li        r22, 0x3
      b         .loc_0x12C
      li        r22, 0x8
      b         .loc_0x12C
      li        r22, 0x9
      b         .loc_0x12C
      li        r22, 0x6
      b         .loc_0x12C
      li        r22, 0x7
      b         .loc_0x12C
      li        r22, 0x5
      b         .loc_0x12C
      addi      r3, r24, 0
      addi      r5, r24, 0x5C
      li        r4, 0x1BF
      crclr     6, 0x6
      bl        -0x417568
      li        r22, 0xB
      b         .loc_0x12C

    .loc_0x118:
      addi      r3, r24, 0
      addi      r5, r24, 0x38
      li        r4, 0x1C4
      crclr     6, 0x6
      bl        -0x417584

    .loc_0x12C:
      addi      r3, r25, 0xAC
      bl        -0x351F88

    .loc_0x134:
      cmplwi    r22, 0x2
      bne-      .loc_0x194
      mr        r3, r26
      mr        r4, r27
      addi      r5, r1, 0x8
      bl        -0x3682A4
      cmpwi     r3, 0
      beq-      .loc_0x164
      bge-      .loc_0x188
      cmpwi     r3, -0x3
      beq-      .loc_0x178
      b         .loc_0x188

    .loc_0x164:
      mr        r3, r25
      li        r4, 0x1
      bl        0xC38
      li        r23, 0x1
      b         .loc_0x194

    .loc_0x178:
      mr        r3, r25
      li        r4, 0
      bl        0xC24
      b         .loc_0x194

    .loc_0x188:
      mr        r3, r25
      li        r4, 0x3
      bl        0xC14

    .loc_0x194:
      rlwinm.   r0,r23,0,24,31
      beq-      .loc_0x1EC
      mr        r3, r25
      li        r4, 0xB
      bl        0xC00
      mr        r4, r28
      mr        r5, r29
      mr        r6, r30
      addi      r3, r1, 0x8
      bl        -0x367664
      cmpwi     r3, 0
      beq-      .loc_0x1D4
      mr        r3, r25
      li        r4, 0xA
      bl        0xBD8
      b         .loc_0x1E4

    .loc_0x1D4:
      mr        r3, r25
      li        r4, 0x1
      bl        0xBC8
      li        r31, 0x1

    .loc_0x1E4:
      addi      r3, r1, 0x8
      bl        -0x368228

    .loc_0x1EC:
      mr        r3, r31
      lmw       r22, 0x28(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	80441CA0
 * Size:	0000C4
 */
void MemoryCardMgr::checkCardStat(MemoryCardMgr::ECardSlot, CARDFileInfo*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x90(r1)
      mflr      r0
      stw       r0, 0x94(r1)
      stw       r31, 0x8C(r1)
      li        r31, 0
      stw       r30, 0x88(r1)
      mr        r30, r5
      stw       r29, 0x84(r1)
      mr        r29, r4
      li        r4, 0xB
      stw       r28, 0x80(r1)
      mr        r28, r3
      bl        0xB70
      lwz       r4, 0x4(r30)
      mr        r3, r29
      addi      r5, r1, 0x8
      bl        -0x3674B0
      cmpwi     r3, 0
      bne-      .loc_0x90
      mr        r3, r28
      addi      r4, r1, 0x8
      lwz       r12, 0x0(r28)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      mr        r31, r3
      beq-      .loc_0x80
      mr        r3, r28
      li        r4, 0x1
      bl        0xB28
      b         .loc_0x9C

    .loc_0x80:
      mr        r3, r28
      li        r4, 0x1
      bl        0xB18
      b         .loc_0x9C

    .loc_0x90:
      mr        r3, r28
      li        r4, 0xA
      bl        0xB08

    .loc_0x9C:
      stb       r31, 0xD0(r28)
      mr        r3, r31
      lwz       r0, 0x94(r1)
      lwz       r31, 0x8C(r1)
      lwz       r30, 0x88(r1)
      lwz       r29, 0x84(r1)
      lwz       r28, 0x80(r1)
      mtlr      r0
      addi      r1, r1, 0x90
      blr
    */
}

/*
 * --INFO--
 * Address:	80441D64
 * Size:	000280
 */
void MemoryCardMgr::read(MemoryCardMgr::ECardSlot, const char*, unsigned char*,
                         long, long)
{
    /*
    .loc_0x0:
      stwu      r1, -0xB0(r1)
      mflr      r0
      li        r10, 0x1
      lis       r9, 0x804A
      stw       r0, 0xB4(r1)
      stmw      r22, 0x88(r1)
      mr        r26, r4
      subfic    r0, r26, 0x1
      mr        r25, r3
      orc       r4, r10, r26
      mr        r27, r5
      rlwinm    r0,r0,31,1,31
      mr        r28, r6
      sub       r0, r4, r0
      mr        r29, r7
      rlwinm.   r0,r0,1,31,31
      mr        r30, r8
      subi      r24, r9, 0x52F8
      li        r31, 0
      bne-      .loc_0x54
      li        r10, 0

    .loc_0x54:
      rlwinm.   r0,r10,0,24,31
      bne-      .loc_0x70
      addi      r3, r24, 0
      addi      r5, r24, 0x38
      li        r4, 0x218
      crclr     6, 0x6
      bl        -0x417790

    .loc_0x70:
      addi      r3, r25, 0xAC
      li        r23, 0
      li        r22, 0xB
      bl        -0x352064
      cmpwi     r3, 0
      beq-      .loc_0x134
      lwz       r0, 0xD4(r25)
      cmplwi    r0, 0xB
      bgt-      .loc_0x118
      lis       r3, 0x804F
      rlwinm    r0,r0,2,0,29
      subi      r3, r3, 0x3120
      lwzx      r0, r3, r0
      mtctr     r0
      bctr
      li        r22, 0x1
      b         .loc_0x12C
      li        r22, 0x2
      b         .loc_0x12C
      li        r22, 0
      b         .loc_0x12C
      li        r22, 0x4
      b         .loc_0x12C
      li        r22, 0x3
      b         .loc_0x12C
      li        r22, 0x8
      b         .loc_0x12C
      li        r22, 0x9
      b         .loc_0x12C
      li        r22, 0x6
      b         .loc_0x12C
      li        r22, 0x7
      b         .loc_0x12C
      li        r22, 0x5
      b         .loc_0x12C
      addi      r3, r24, 0
      addi      r5, r24, 0x5C
      li        r4, 0x1BF
      crclr     6, 0x6
      bl        -0x417830
      li        r22, 0xB
      b         .loc_0x12C

    .loc_0x118:
      addi      r3, r24, 0
      addi      r5, r24, 0x38
      li        r4, 0x1C4
      crclr     6, 0x6
      bl        -0x41784C

    .loc_0x12C:
      addi      r3, r25, 0xAC
      bl        -0x352250

    .loc_0x134:
      cmplwi    r22, 0x2
      bne-      .loc_0x194
      mr        r3, r26
      mr        r4, r27
      addi      r5, r1, 0x8
      bl        -0x36856C
      cmpwi     r3, 0
      beq-      .loc_0x164
      bge-      .loc_0x188
      cmpwi     r3, -0x3
      beq-      .loc_0x178
      b         .loc_0x188

    .loc_0x164:
      mr        r3, r25
      li        r4, 0x1
      bl        0x970
      li        r23, 0x1
      b         .loc_0x194

    .loc_0x178:
      mr        r3, r25
      li        r4, 0
      bl        0x95C
      b         .loc_0x194

    .loc_0x188:
      mr        r3, r25
      li        r4, 0x3
      bl        0x94C

    .loc_0x194:
      rlwinm.   r0,r23,0,24,31
      beq-      .loc_0x268
      mr        r3, r25
      li        r23, 0
      li        r4, 0xB
      bl        0x934
      lwz       r4, 0xC(r1)
      mr        r3, r26
      addi      r5, r1, 0x1C
      bl        -0x3676EC
      cmpwi     r3, 0
      bne-      .loc_0x208
      mr        r3, r25
      addi      r4, r1, 0x1C
      lwz       r12, 0x0(r25)
      lwz       r12, 0x24(r12)
      mtctr     r12
      bctrl
      rlwinm.   r0,r3,0,24,31
      mr        r23, r3
      beq-      .loc_0x1F8
      mr        r3, r25
      li        r4, 0x1
      bl        0x8EC
      b         .loc_0x214

    .loc_0x1F8:
      mr        r3, r25
      li        r4, 0x1
      bl        0x8DC
      b         .loc_0x214

    .loc_0x208:
      mr        r3, r25
      li        r4, 0xA
      bl        0x8CC

    .loc_0x214:
      stb       r23, 0xD0(r25)
      mr        r3, r25
      li        r4, 0xB
      bl        0x8BC
      mr        r4, r28
      mr        r5, r29
      mr        r6, r30
      addi      r3, r1, 0x8
      bl        -0x367D24
      cmpwi     r3, 0
      beq-      .loc_0x250
      mr        r3, r25
      li        r4, 0xA
      bl        0x894
      b         .loc_0x260

    .loc_0x250:
      mr        r3, r25
      li        r4, 0x1
      bl        0x884
      li        r31, 0x1

    .loc_0x260:
      addi      r3, r1, 0x8
      bl        -0x36856C

    .loc_0x268:
      mr        r3, r31
      lmw       r22, 0x88(r1)
      lwz       r0, 0xB4(r1)
      mtlr      r0
      addi      r1, r1, 0xB0
      blr
    */
}

/*
 * --INFO--
 * Address:	80441FE4
 * Size:	000088
 */
void MemoryCardMgr::format(MemoryCardMgr::ECardSlot)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      lis       r5, 0x804F
      stw       r0, 0x14(r1)
      addi      r0, r5, 0x7D80
      li        r5, 0
      stw       r31, 0xC(r1)
      mr        r31, r4
      mr        r4, r0
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x369378
      mr        r3, r30
      li        r4, 0xB
      bl        0x820
      mr        r3, r31
      bl        -0x368A60
      cmpwi     r3, 0
      beq-      .loc_0x54
      b         .loc_0x64

    .loc_0x54:
      mr        r3, r30
      li        r4, 0x2
      bl        0x800
      b         .loc_0x70

    .loc_0x64:
      mr        r3, r30
      li        r4, 0xA
      bl        0x7F0

    .loc_0x70:
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	8044206C
 * Size:	000098
 */
void MemoryCardMgr::attach(MemoryCardMgr::ECardSlot)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      addi      r5, r1, 0x8
      stw       r31, 0x1C(r1)
      mr        r31, r4
      addi      r4, r1, 0xC
      stw       r30, 0x18(r1)
      mr        r30, r3
      mr        r3, r31
      bl        -0x369C5C
      cmpwi     r3, -0x2
      bne-      .loc_0x44
      mr        r3, r30
      li        r4, 0x8
      bl        0x798
      b         .loc_0x80

    .loc_0x44:
      lwz       r0, 0x8(r1)
      cmpwi     r0, 0x2000
      beq-      .loc_0x60
      mr        r3, r30
      li        r4, 0x9
      bl        0x77C
      b         .loc_0x80

    .loc_0x60:
      mr        r3, r30
      mr        r4, r31
      bl        0x6C
      rlwinm.   r0,r3,0,24,31
      beq-      .loc_0x80
      mr        r3, r30
      li        r4, 0x2
      bl        0x758

    .loc_0x80:
      lwz       r0, 0x24(r1)
      lwz       r31, 0x1C(r1)
      lwz       r30, 0x18(r1)
      mtlr      r0
      addi      r1, r1, 0x20
      blr
    */
}

/*
 * --INFO--
 * Address:	80442104
 * Size:	00003C
 */
void MemoryCardMgr::detach(MemoryCardMgr::ECardSlot)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr        r31, r3
      mr        r3, r4
      bl        -0x36939C
      mr        r3, r31
      li        r4, 0
      bl        0x72C
      lwz       r0, 0x14(r1)
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	80442140
 * Size:	000168
 */
void MemoryCardMgr::mount(MemoryCardMgr::ECardSlot)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      lis       r5, 0x804F
      stw       r0, 0x24(r1)
      addi      r0, r5, 0x7D80
      li        r5, 0
      stw       r31, 0x1C(r1)
      mr        r31, r4
      mr        r4, r0
      stw       r30, 0x18(r1)
      li        r30, 0
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r3, r31
      bl        -0x3694DC
      cmpwi     r3, -0x5
      beq-      .loc_0x84
      bge-      .loc_0x6C
      cmpwi     r3, -0xD
      beq-      .loc_0x118
      bge-      .loc_0x60
      cmpwi     r3, -0x80
      beq-      .loc_0x84
      b         .loc_0x12C

    .loc_0x60:
      cmpwi     r3, -0x6
      bge-      .loc_0xAC
      b         .loc_0x12C

    .loc_0x6C:
      cmpwi     r3, 0
      beq-      .loc_0xAC
      bge-      .loc_0x12C
      cmpwi     r3, -0x3
      beq-      .loc_0x98
      b         .loc_0x12C

    .loc_0x84:
      mr        r3, r29
      li        r4, 0xA
      bl        0x674
      li        r30, 0
      b         .loc_0x148

    .loc_0x98:
      mr        r3, r29
      li        r4, 0
      bl        0x660
      li        r30, 0
      b         .loc_0x148

    .loc_0xAC:
      mr        r3, r31
      bl        -0x369F10
      cmpwi     r3, -0x5
      beq-      .loc_0xE0
      bge-      .loc_0xCC
      cmpwi     r3, -0x80
      beq-      .loc_0xE0
      b         .loc_0xF4

    .loc_0xCC:
      cmpwi     r3, 0
      beq-      .loc_0xD8
      b         .loc_0xF4

    .loc_0xD8:
      li        r30, 0x1
      b         .loc_0x104

    .loc_0xE0:
      mr        r3, r29
      li        r4, 0xA
      bl        0x618
      li        r30, 0
      b         .loc_0x104

    .loc_0xF4:
      mr        r3, r29
      li        r4, 0x5
      bl        0x604
      li        r30, 0

    .loc_0x104:
      rlwinm.   r0,r30,0,24,31
      bne-      .loc_0x148
      mr        r3, r31
      bl        -0x3694D0
      b         .loc_0x148

    .loc_0x118:
      mr        r3, r29
      li        r4, 0x4
      bl        0x5E0
      li        r30, 0
      b         .loc_0x148

    .loc_0x12C:
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x52F8
      li        r4, 0x3DD
      subi      r5, r5, 0x52C0
      crclr     6, 0x6
      bl        -0x417C44

    .loc_0x148:
      lwz       r0, 0x24(r1)
      mr        r3, r30
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
 * Address:	804422A8
 * Size:	0000FC
 */
void MemoryCardMgr::checkSpace(MemoryCardMgr::ECardSlot, int)
{
    /*
    .loc_0x0:
      stwu      r1, -0x20(r1)
      mflr      r0
      stw       r0, 0x24(r1)
      mr        r0, r4
      addi      r4, r1, 0xC
      stw       r31, 0x1C(r1)
      stw       r30, 0x18(r1)
      mr        r30, r5
      addi      r5, r1, 0x8
      stw       r29, 0x14(r1)
      mr        r29, r3
      mr        r3, r0
      bl        -0x36CBF0
      mr        r31, r3
      cmpwi     r31, -0x1
      bne-      .loc_0x5C
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x52F8
      li        r4, 0x3F3
      subi      r5, r5, 0x52C0
      crclr     6, 0x6
      bl        -0x417CC0

    .loc_0x5C:
      cmpwi     r31, -0x6
      beq-      .loc_0xA0
      bge-      .loc_0x74
      cmpwi     r31, -0x80
      beq-      .loc_0x80
      b         .loc_0xAC

    .loc_0x74:
      cmpwi     r31, -0x3
      beq-      .loc_0x90
      b         .loc_0xAC

    .loc_0x80:
      mr        r3, r29
      li        r4, 0xA
      bl        0x510
      b         .loc_0xAC

    .loc_0x90:
      mr        r3, r29
      li        r4, 0
      bl        0x500
      b         .loc_0xAC

    .loc_0xA0:
      mr        r3, r29
      li        r4, 0x5
      bl        0x4F0

    .loc_0xAC:
      lwz       r0, 0xC(r1)
      cmpw      r0, r30
      bge-      .loc_0xC0
      li        r3, 0x1
      b         .loc_0xE0

    .loc_0xC0:
      lwz       r5, 0x8(r1)
      li        r3, 0x1
      rlwinm    r4,r3,1,31,31
      li        r0, 0x2
      subc      r3, r5, r3
      rlwinm    r3,r5,1,31,31
      subfe     r3, r3, r4
      and       r3, r0, r3

    .loc_0xE0:
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
 * Address:	804423A4
 * Size:	000104
 */
void MemoryCardMgr::doMakeHeader(unsigned char*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      lis       r3, 0x804A
      stw       r0, 0x54(r1)
      subi      r5, r3, 0x5288
      stw       r31, 0x4C(r1)
      stw       r30, 0x48(r1)
      stw       r29, 0x44(r1)
      mr        r29, r4
      li        r4, 0x20
      addi      r3, r29, 0x1C00
      crclr     6, 0x6
      bl        -0x37AEBC
      bl        -0x34F848
      addi      r5, r1, 0x10
      bl        -0x34F630
      lwz       r0, 0x10(r1)
      lis       r3, 0x804A
      subi      r5, r3, 0x526C
      li        r4, 0x20
      stw       r0, 0x8(r1)
      addi      r3, r29, 0x1C20
      lwz       r7, 0x20(r1)
      lwz       r6, 0x24(r1)
      lwz       r8, 0x1C(r1)
      addi      r7, r7, 0x1
      lwz       r9, 0x18(r1)
      lwz       r10, 0x14(r1)
      crclr     6, 0x6
      bl        -0x37AF00
      mr        r3, r29
      li        r4, 0
      li        r5, 0xE00
      bl        -0x43D374
      li        r3, 0xF0
      li        r0, 0xFF
      stb       r3, 0xC00(r29)
      li        r30, 0
      li        r31, 0xE00
      stb       r0, 0xC01(r29)

    .loc_0xA0:
      mr        r4, r30
      add       r3, r29, r31
      li        r5, 0x400
      bl        -0x43D39C
      addi      r30, r30, 0x1
      addi      r31, r31, 0x400
      cmpwi     r30, 0x3
      blt+      .loc_0xA0
      li        r5, 0xFF
      li        r4, 0xF
      stb       r5, 0x1A00(r29)
      li        r3, 0
      li        r0, 0xF0
      stb       r4, 0x1A01(r29)
      stb       r5, 0x1A02(r29)
      stb       r3, 0x1A03(r29)
      stb       r5, 0x1A04(r29)
      stb       r0, 0x1A05(r29)
      lwz       r31, 0x4C(r1)
      lwz       r30, 0x48(r1)
      lwz       r29, 0x44(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr
    */
}

/*
 * --INFO--
 * Address:	804424A8
 * Size:	0000E0
 */
void MemoryCardMgr::doCheckCardStat(CARDStat*)
{
    /*
    .loc_0x0:
      lwz       r0, 0x30(r4)
      cmplwi    r0, 0
      bne-      .loc_0xD0
      lwz       r0, 0x38(r4)
      cmplwi    r0, 0x1C00
      bne-      .loc_0xD0
      lbz       r3, 0x2E(r4)
      rlwinm    r0,r3,0,30,31
      cmpwi     r0, 0x1
      bne-      .loc_0xD0
      rlwinm.   r0,r3,0,29,29
      bne-      .loc_0xD0
      lhz       r3, 0x34(r4)
      rlwinm    r0,r3,0,30,31
      cmpwi     r0, 0x1
      bne-      .loc_0xD0
      rlwinm    r0,r3,30,30,31
      cmpwi     r0, 0x1
      bne-      .loc_0xD0
      rlwinm    r0,r3,28,30,31
      cmpwi     r0, 0x1
      bne-      .loc_0xD0
      rlwinm.   r0,r3,26,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,24,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,22,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,20,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,18,30,31
      bne-      .loc_0xD0
      lhz       r3, 0x36(r4)
      rlwinm    r0,r3,0,30,31
      cmpwi     r0, 0x3
      bne-      .loc_0xD0
      rlwinm    r0,r3,30,30,31
      cmpwi     r0, 0x3
      bne-      .loc_0xD0
      rlwinm    r0,r3,28,30,31
      cmpwi     r0, 0x3
      bne-      .loc_0xD0
      rlwinm.   r0,r3,26,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,24,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,22,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,20,30,31
      bne-      .loc_0xD0
      rlwinm.   r0,r3,18,30,31
      beq-      .loc_0xD8

    .loc_0xD0:
      li        r3, 0
      blr

    .loc_0xD8:
      li        r3, 0x1
      blr
    */
}

/*
 * --INFO--
 * Address:	80442588
 * Size:	000108
 */
void MemoryCardMgr::doSetCardStat(CARDStat*)
{
    /*
    .loc_0x0:
      li        r3, 0
      li        r0, 0x1C00
      stw       r3, 0x30(r4)
      stw       r0, 0x38(r4)
      lbz       r0, 0x2E(r4)
      rlwinm    r0,r0,0,0,29
      ori       r0, r0, 0x1
      stb       r0, 0x2E(r4)
      lbz       r0, 0x2E(r4)
      rlwinm    r0,r0,0,30,28
      stb       r0, 0x2E(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,0,29
      ori       r0, r0, 0x1
      sth       r0, 0x34(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,30,27
      ori       r0, r0, 0x4
      sth       r0, 0x34(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,28,25
      ori       r0, r0, 0x10
      sth       r0, 0x34(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,26,23
      sth       r0, 0x34(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,24,21
      sth       r0, 0x34(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,22,19
      sth       r0, 0x34(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,20,17
      sth       r0, 0x34(r4)
      lhz       r0, 0x34(r4)
      rlwinm    r0,r0,0,18,31
      sth       r0, 0x34(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,0,29
      ori       r0, r0, 0x3
      sth       r0, 0x36(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,30,27
      ori       r0, r0, 0xC
      sth       r0, 0x36(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,28,25
      ori       r0, r0, 0x30
      sth       r0, 0x36(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,26,23
      sth       r0, 0x36(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,24,21
      sth       r0, 0x36(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,22,19
      sth       r0, 0x36(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,20,17
      sth       r0, 0x36(r4)
      lhz       r0, 0x36(r4)
      rlwinm    r0,r0,0,18,31
      sth       r0, 0x36(r4)
      blr
    */
}

/*
 * --INFO--
 * Address:	80442690
 * Size:	0000F8
 */
void MemoryCardMgr::calcCheckSum(void*, unsigned long)
{
    /*
    .loc_0x0:
      rlwinm    r5,r5,31,1,31
      li        r3, 0
      cmplwi    r5, 0
      li        r7, 0
      ble-      .loc_0xF0
      rlwinm.   r0,r5,29,3,31
      mtctr     r0
      beq-      .loc_0xD0

    .loc_0x20:
      lhz       r6, 0x0(r4)
      not       r0, r6
      add       r7, r7, r6
      lhz       r6, 0x2(r4)
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      not       r0, r6
      add       r7, r7, r6
      lhz       r6, 0x4(r4)
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      not       r0, r6
      add       r7, r7, r6
      lhz       r6, 0x6(r4)
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      not       r0, r6
      add       r7, r7, r6
      lhz       r6, 0x8(r4)
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      not       r0, r6
      add       r7, r7, r6
      lhz       r6, 0xA(r4)
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      not       r0, r6
      add       r7, r7, r6
      lhz       r6, 0xC(r4)
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      not       r0, r6
      add       r7, r7, r6
      lhz       r6, 0xE(r4)
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      addi      r4, r4, 0x10
      not       r0, r6
      add       r7, r7, r6
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      bdnz+     .loc_0x20
      andi.     r5, r5, 0x7
      beq-      .loc_0xF0

    .loc_0xD0:
      mtctr     r5

    .loc_0xD4:
      lhz       r6, 0x0(r4)
      addi      r4, r4, 0x2
      not       r0, r6
      add       r7, r7, r6
      add       r0, r3, r0
      rlwinm    r3,r0,0,16,31
      bdnz+     .loc_0xD4

    .loc_0xF0:
      rlwimi    r3,r7,16,0,15
      blr
    */
}

/*
 * --INFO--
 * Address:	80442788
 * Size:	0000B8
 */
void MemoryCardMgr::readCardSerialNo(unsigned long long*,
                                     MemoryCardMgr::ECardSlot)
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      li        r31, 0
      stw       r30, 0x8(r1)
      mr        r30, r3
      mr        r3, r5
      bl        -0x367CA8
      cmpwi     r3, -0x2
      beq-      .loc_0x9C
      bge-      .loc_0x48
      cmpwi     r3, -0x80
      beq-      .loc_0x60
      blt-      .loc_0x9C
      cmpwi     r3, -0x3
      bge-      .loc_0x70
      b         .loc_0x9C

    .loc_0x48:
      cmpwi     r3, 0
      beq-      .loc_0x58
      bge-      .loc_0x9C
      b         .loc_0x80

    .loc_0x58:
      li        r31, 0x1
      b         .loc_0x9C

    .loc_0x60:
      mr        r3, r30
      li        r4, 0xA
      bl        .loc_0xB8
      b         .loc_0x9C

    .loc_0x70:
      mr        r3, r30
      li        r4, 0
      bl        .loc_0xB8
      b         .loc_0x9C

    .loc_0x80:
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x52F8
      li        r4, 0x4D2
      subi      r5, r5, 0x52C0
      crclr     6, 0x6
      bl        -0x4181E0

    .loc_0x9C:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      lwz       r30, 0x8(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr

    .loc_0xB8:
    */
}

/*
 * --INFO--
 * Address:	80442840
 * Size:	000014
 */
void MemoryCardMgr::setInsideStatusFlag(MemoryCardMgr::EInsideStatusFlag)
{
    /*
    .loc_0x0:
      lwz       r0, 0xD4(r3)
      cmpwi     r0, 0xA
      beqlr-
      stw       r4, 0xD4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	80442854
 * Size:	000008
 */
void MemoryCardMgr::resetInsideStatusFlag(MemoryCardMgr::EInsideStatusFlag)
{
    /*
    .loc_0x0:
      stw       r4, 0xD4(r3)
      blr
    */
}

/*
 * --INFO--
 * Address:	8044285C
 * Size:	000048
 */
void MemoryCardMgr::~MemoryCardMgr()
{
    /*
    .loc_0x0:
      stwu      r1, -0x10(r1)
      mflr      r0
      stw       r0, 0x14(r1)
      stw       r31, 0xC(r1)
      mr.       r31, r3
      beq-      .loc_0x30
      lis       r5, 0x804F
      extsh.    r0, r4
      subi      r0, r5, 0x30F0
      stw       r0, 0x0(r31)
      ble-      .loc_0x30
      bl        -0x41E7D4

    .loc_0x30:
      lwz       r0, 0x14(r1)
      mr        r3, r31
      lwz       r31, 0xC(r1)
      mtlr      r0
      addi      r1, r1, 0x10
      blr
    */
}

/*
 * --INFO--
 * Address:	804428A4
 * Size:	000008
 */
void MemoryCardMgrCommand::getClassSize()
{
    /*
    .loc_0x0:
      li        r3, 0x20
      blr
    */
}
