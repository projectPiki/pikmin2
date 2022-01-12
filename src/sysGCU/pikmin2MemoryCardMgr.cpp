#include "types.h"

#include "Game/MemoryCard/Player.h"
#include "Game/MemoryCard/PlayerFileInfo.h"
#include "Game/MemoryCard/Resource.h"
#include "JSystem/JKRArchive.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049ADB8
    lbl_8049ADB8:
        .asciz "Pikmin2_SaveData"
        .skip 3
    .global gStrMemoryCardMgrCpp
    gStrMemoryCardMgrCpp:
        .asciz "pikmin2MemoryCardMgr.cpp"
        .skip 3
    .global gStrMemoryCardMgrP2Assert
    gStrMemoryCardMgrP2Assert:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049ADF4
    lbl_8049ADF4:
        .asciz "sizeof(PlayerInfo): %d BLOCKSIZE %d padding:%d \n"
        .skip 3
    .global lbl_8049AE28
    lbl_8049AE28:
        .asciz "/memoryCard/memoryCardHeader.szs"
        .skip 3
        .asciz "banner.dat"
        .skip 1
        .asciz "icon.dat"
        .skip 3
    .global lbl_8049AE64
    lbl_8049AE64:
        .asciz "MemoryCardModify Error"
        .skip 1
        .asciz "card [%d] memory[%d]\n"
        .skip 2
    .global lbl_8049AE94
    lbl_8049AE94:
        .asciz "PIKMIN 2"
        .skip 3
    .global lbl_8049AEA0
    lbl_8049AEA0:
        .asciz "%02d/%02d/%04d %02d:%02d:%02d"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804ECF58
    lbl_804ECF58:
        .4byte lbl_80443790
        .4byte lbl_804437EC
        .4byte lbl_80443768
        .4byte lbl_804437FC
        .4byte lbl_8044385C
        .4byte lbl_804438BC
        .4byte lbl_804438D4
        .4byte lbl_80443930
        .4byte lbl_80443994
        .4byte lbl_804439A8
        .4byte lbl_804439B8
        .4byte lbl_804439C8
    .global __vt__Q34Game10MemoryCard25MgrCommandGetPlayerHeader
    __vt__Q34Game10MemoryCard25MgrCommandGetPlayerHeader:
        .4byte 0
        .4byte 0
        .4byte getClassSize__Q34Game10MemoryCard25MgrCommandGetPlayerHeaderFv
    .global __vt__Q34Game10MemoryCard20MgrCommandCopyPlayer
    __vt__Q34Game10MemoryCard20MgrCommandCopyPlayer:
        .4byte 0
        .4byte 0
        .4byte getClassSize__Q34Game10MemoryCard20MgrCommandCopyPlayerFv
    .global __vt__Q34Game10MemoryCard18MgrCommandPlayerNo
    __vt__Q34Game10MemoryCard18MgrCommandPlayerNo:
        .4byte 0
        .4byte 0
        .4byte getClassSize__Q34Game10MemoryCard18MgrCommandPlayerNoFv
    .global __vt__Q34Game10MemoryCard3Mgr
    __vt__Q34Game10MemoryCard3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game10MemoryCard3MgrFv
        .4byte update__Q34Game10MemoryCard3MgrFv
        .4byte doInit__13MemoryCardMgrFv
        .4byte doCardProc__Q34Game10MemoryCard3MgrFPvP20MemoryCardMgrCommand
        .4byte getHeaderSize__Q34Game10MemoryCard3MgrFv
        .4byte doMakeHeader__Q34Game10MemoryCard3MgrFPUc
        .4byte doSetCardStat__Q34Game10MemoryCard3MgrFP8CARDStat
        .4byte doCheckCardStat__Q34Game10MemoryCard3MgrFP8CARDStat
        .4byte isErrorOccured__Q34Game10MemoryCard3MgrFv
    .global __vt__Q34Game10MemoryCard8Resource
    __vt__Q34Game10MemoryCard8Resource:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game10MemoryCard8ResourceFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global cFileName__Q24Game10MemoryCard
    cFileName__Q24Game10MemoryCard:
        .4byte lbl_8049ADB8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520978
    lbl_80520978:
        .asciz "dameck\n"
*/

extern const char lbl_8049ADF4[49]; // "sizeof(PlayerInfo): %d BLOCKSIZE %d padding:%d \n"

extern const char lbl_8049AE28[33]; // "/memoryCard/memoryCardHeader.szs"

namespace Game {
namespace MemoryCard {
/*
 * --INFO--
 * Address:	804428AC
 * Size:	00003C
 */
Player::Player()
    : _00(0)
    , _04(0)
    , _08(0)
    , _0C(0)
    , _10(0)
    , _14(0)
    , _18(0)
    , _1C(0)
    , _20(0)
    , _24(0)
    , _28(0)
    , _2C(0)
    , _30(0)
{
}

/*
 * --INFO--
 * Address:	804428E8
 * Size:	000044
 */
PlayerFileInfo::PlayerFileInfo() { }

/*
 * --INFO--
 * Address:	8044292C
 * Size:	000074
 */
Player* PlayerFileInfo::getPlayer(int idx)
{
	checkValidity(idx);
	return &m_players[idx];
}

/*
 * --INFO--
 * Address:	804429A0
 * Size:	000080
 */
u8 PlayerFileInfo::isBrokenFile(int idx)
{
	checkValidity(idx);
	return m_players[idx]._00 != 0;
}

/*
 * --INFO--
 * Address:	80442A20
 * Size:	000094
 */
bool PlayerFileInfo::isNewFile(int idx)
{
	checkValidity(idx);
	Player* curPlayer = &m_players[idx];
	return !curPlayer->_00 && !curPlayer->_04;
}

/*
 * --INFO--
 * Address:	80442AB4
 * Size:	00006C
 */
Resource::~Resource() { m_mgr->destroyResource(); }

/*
 * --INFO--
 * Address:	80442B20
 * Size:	00007C
 */
Mgr::Mgr()
    : MemoryCardMgr()
{
	_D8 = 0;
	_DC = 0;
	_E0 = 0;
	_E4 = 0;
	_E5 = 0;
	_E6 = 0;
	_E7 = 0;

	OSReport(lbl_8049ADF4, 0xC000, 0xC000, 0x3C);
}

/*
 * --INFO--
 * Address:	80442B9C
 * Size:	000030
 */
u32 Mgr::isErrorOccured() { return !(getCardStatus() == MCS_Error); }

/*
 * --INFO--
 * Address:	80442BCC
 * Size:	000120
 */
// void Mgr::loadResource(JKRHeap* heap)
// {
//     Resource* resource = new (heap, 0) Resource(this);
//     if (!resource) {
//         JUTException::panic_f(gStrMemoryCardMgrCpp, 533,
//                               gStrMemoryCardMgrP2Assert);
//     }

//     u32* file = JKRArchive::mount(lbl_8049AE28,
//     (JKRArchive::EMountMode)1,
//                                   heap, (JKRArchive::EMountDirection)1);
//     if (!file) {
//         JUTException::panic_f(gStrMemoryCardMgrCpp, 540,
//                               gStrMemoryCardMgrP2Assert);
//     }
// }

} // namespace MemoryCard
} // namespace Game

/*
 * --INFO--
 * Address:	80442BCC
 * Size:	000120
 */
// void Game::MemoryCard::Mgr::loadResource(JKRHeap*)
// {
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    lis      r5, lbl_8049ADB8@ha
    stw      r0, 0x24(r1)
    stw      r31, 0x1c(r1)
    stw      r30, 0x18(r1)
    addi     r30, r5, lbl_8049ADB8@l
    li       r5, 0
    stw      r29, 0x14(r1)
    mr       r29, r4
    stw      r28, 0x10(r1)
    mr       r28, r3
    li       r3, 0x1c
    bl       __nw__FUlP7JKRHeapi
    or.      r31, r3, r3
    beq      lbl_80442C20
    bl       __ct__11JKRDisposerFv
    lis      r3, __vt__Q34Game10MemoryCard8Resource@ha
    addi     r0, r3, __vt__Q34Game10MemoryCard8Resource@l
    stw      r0, 0(r31)
    stw      r28, 0x18(r31)

lbl_80442C20:
    cmplwi   r31, 0
    bne      lbl_80442C3C
    addi     r3, r30, 0x14
    addi     r5, r30, 0x30
    li       r4, 0x215
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442C3C:
    mr       r5, r29
    addi     r3, r30, 0x70
    li       r4, 1
    li       r6, 1
    bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
    or.      r31, r3, r3
    bne      lbl_80442C6C
    addi     r3, r30, 0x14
    addi     r5, r30, 0x30
    li       r4, 0x21c
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442C6C:
    mr       r4, r31
    addi     r3, r30, 0x94
    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
    stw      r3, 0xdc(r28)
    mr       r4, r31
    addi     r3, r30, 0xa0
    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
    stw      r3, 0xe0(r28)
    lwz      r0, 0xdc(r28)
    cmplwi   r0, 0
    bne      lbl_80442CAC
    addi     r3, r30, 0x14
    addi     r5, r30, 0x30
    li       r4, 0x21f
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442CAC:
    lwz      r0, 0xe0(r28)
    cmplwi   r0, 0
    bne      lbl_80442CCC
    addi     r3, r30, 0x14
    addi     r5, r30, 0x30
    li       r4, 0x220
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80442CCC:
    lwz      r0, 0x24(r1)
    lwz      r31, 0x1c(r1)
    lwz      r30, 0x18(r1)
    lwz      r29, 0x14(r1)
    lwz      r28, 0x10(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

namespace Game {

/*
* --INFO--
* Address:	80442CEC
* Size:	000010

void MemoryCard::Mgr::destroyResource(void)
{
/*
    li       r0, 0
    stw      r0, 0xdc(r3)
    stw      r0, 0xe0(r3)
    blr

}

/*
* --INFO--
* Address:	80442CFC
* Size:	000020

void MemoryCard::Mgr::update(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    bl       update__13MemoryCardMgrFv
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80442D1C
* Size:	00006C

void MemoryCard::Mgr::format(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    stw      r30, 8(r1)
    mr       r30, r3
    addi     r3, r30, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80442D6C
    mr       r3, r30
    li       r4, 0
    bl       cardFormat__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlot
    mr       r0, r3
    addi     r3, r30, 0xac
    mr       r31, r0
    bl       OSUnlockMutex
    addi     r3, r30, 0xc4
    bl       OSSignalCond

lbl_80442D6C:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	........
* Size:	000080

void MemoryCard::Mgr::setCommandFlag(int)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	........
* Size:	000074

void MemoryCard::Mgr::verifySerialNo(void)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80442D88
* Size:	000074

void MemoryCard::Mgr::checkBeforeSave(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    stw      r30, 8(r1)
    mr       r30, r3
    bl       checkError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80442DE0
    addi     r3, r30, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80442DE0
    mr       r3, r30
    li       r31, 1
    li       r4, 0xf
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r30, 0xac
    bl       OSUnlockMutex
    addi     r3, r30, 0xc4
    bl       OSSignalCond

lbl_80442DE0:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80442DFC
* Size:	000074

void MemoryCard::Mgr::checkError(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    stw      r30, 8(r1)
    mr       r30, r3
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80442E54
    addi     r3, r30, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80442E54
    mr       r3, r30
    li       r31, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r30, 0xac
    bl       OSUnlockMutex
    addi     r3, r30, 0xc4
    bl       OSSignalCond

lbl_80442E54:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80442E70
* Size:	000074

void MemoryCard::Mgr::createNewFile(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    stw      r30, 8(r1)
    mr       r30, r3
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80442EC8
    addi     r3, r30, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80442EC8
    mr       r3, r30
    li       r31, 1
    li       r4, 7
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r30, 0xac
    bl       OSUnlockMutex
    addi     r3, r30, 0xc4
    bl       OSSignalCond

lbl_80442EC8:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80442EE4
* Size:	0000B8

void MemoryCard::Mgr::saveGameOption(void)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stw      r31, 0x1c(r1)
    li       r31, 0
    stw      r30, 0x18(r1)
    li       r30, 0
    stw      r29, 0x14(r1)
    mr       r29, r3
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80442F44
    addi     r3, r29, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80442F44
    mr       r3, r29
    li       r31, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r29, 0xac
    bl       OSUnlockMutex
    addi     r3, r29, 0xc4
    bl       OSSignalCond

lbl_80442F44:
    clrlwi.  r0, r31, 0x18
    beq      lbl_80442F7C
    addi     r3, r29, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80442F7C
    mr       r3, r29
    li       r30, 1
    li       r4, 5
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r29, 0xac
    bl       OSUnlockMutex
    addi     r3, r29, 0xc4
    bl       OSSignalCond

lbl_80442F7C:
    lwz      r0, 0x24(r1)
    mr       r3, r30
    lwz      r31, 0x1c(r1)
    lwz      r30, 0x18(r1)
    lwz      r29, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	80442F9C
* Size:	0000B8

void MemoryCard::Mgr::loadGameOption(void)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stw      r31, 0x1c(r1)
    li       r31, 0
    stw      r30, 0x18(r1)
    li       r30, 0
    stw      r29, 0x14(r1)
    mr       r29, r3
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80442FFC
    addi     r3, r29, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80442FFC
    mr       r3, r29
    li       r31, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r29, 0xac
    bl       OSUnlockMutex
    addi     r3, r29, 0xc4
    bl       OSSignalCond

lbl_80442FFC:
    clrlwi.  r0, r31, 0x18
    beq      lbl_80443034
    addi     r3, r29, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80443034
    mr       r3, r29
    li       r30, 1
    li       r4, 6
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r29, 0xac
    bl       OSUnlockMutex
    addi     r3, r29, 0xc4
    bl       OSSignalCond

lbl_80443034:
    lwz      r0, 0x24(r1)
    mr       r3, r30
    lwz      r31, 0x1c(r1)
    lwz      r30, 0x18(r1)
    lwz      r29, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	80443054
* Size:	000124

void MemoryCard::Mgr::savePlayerNoCheckSerialNumber(int)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    stw      r0, 0x34(r1)
    stw      r31, 0x2c(r1)
    stw      r30, 0x28(r1)
    li       r30, 0
    stw      r29, 0x24(r1)
    or.      r29, r4, r4
    stw      r28, 0x20(r1)
    mr       r28, r3
    blt      lbl_80443088
    cmpwi    r29, 3
    blt      lbl_804430B4

lbl_80443088:
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    lbz      r3, 0x20(r3)
    extsb.   r0, r3
    blt      lbl_804430A8
    extsb    r0, r3
    cmpwi    r0, 3
    blt      lbl_804430B0

lbl_804430A8:
    li       r29, 0
    b        lbl_804430B4

lbl_804430B0:
    mr       r29, r0

lbl_804430B4:
    mr       r3, r28
    li       r31, 0
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_804430F8
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_804430F8
    mr       r3, r28
    li       r31, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_804430F8:
    clrlwi.  r0, r31, 0x18
    beq      lbl_80443154
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80443154
    lis      r4, __vt__24MemoryCardMgrCommandBase@ha
    lis      r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@ha
    addi     r0, r4, __vt__24MemoryCardMgrCommandBase@l
    li       r5, 9
    stw      r0, 0xc(r1)
    addi     r0, r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@l
    mr       r3, r28
    addi     r4, r1, 8
    stw      r5, 8(r1)
    li       r30, 1
    stw      r0, 0xc(r1)
    stw      r29, 0x10(r1)
    bl       setCommand__13MemoryCardMgrFP24MemoryCardMgrCommandBase
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_80443154:
    lwz      r0, 0x34(r1)
    mr       r3, r30
    lwz      r31, 0x2c(r1)
    lwz      r30, 0x28(r1)
    lwz      r29, 0x24(r1)
    lwz      r28, 0x20(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	80443178
* Size:	000114

void MemoryCard::Mgr::savePlayer(int)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    stw      r0, 0x34(r1)
    stmw     r27, 0x1c(r1)
    or.      r28, r4, r4
    mr       r27, r3
    li       r30, 0
    li       r29, 8
    blt      lbl_804431A4
    cmpwi    r28, 3
    blt      lbl_804431D4

lbl_804431A4:
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    lbz      r3, 0x20(r3)
    extsb.   r0, r3
    blt      lbl_804431C4
    extsb    r0, r3
    cmpwi    r0, 3
    blt      lbl_804431CC

lbl_804431C4:
    li       r3, 0
    b        lbl_80443278

lbl_804431CC:
    mr       r28, r0
    b        lbl_804431D8

lbl_804431D4:
    li       r29, 9

lbl_804431D8:
    mr       r3, r27
    li       r31, 0
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_8044321C
    addi     r3, r27, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_8044321C
    mr       r3, r27
    li       r31, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r27, 0xac
    bl       OSUnlockMutex
    addi     r3, r27, 0xc4
    bl       OSSignalCond

lbl_8044321C:
    clrlwi.  r0, r31, 0x18
    beq      lbl_80443274
    addi     r3, r27, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80443274
    lis      r4, __vt__24MemoryCardMgrCommandBase@ha
    lis      r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@ha
    addi     r4, r4, __vt__24MemoryCardMgrCommandBase@l
    stw      r29, 8(r1)
    addi     r0, r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@l
    mr       r3, r27
    stw      r4, 0xc(r1)
    addi     r4, r1, 8
    li       r30, 1
    stw      r0, 0xc(r1)
    stw      r28, 0x10(r1)
    bl       setCommand__13MemoryCardMgrFP24MemoryCardMgrCommandBase
    addi     r3, r27, 0xac
    bl       OSUnlockMutex
    addi     r3, r27, 0xc4
    bl       OSSignalCond

lbl_80443274:
    mr       r3, r30

lbl_80443278:
    lmw      r27, 0x1c(r1)
    lwz      r0, 0x34(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	8044328C
* Size:	000124

void MemoryCard::Mgr::loadPlayer(int)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    stw      r0, 0x34(r1)
    li       r0, 0
    stw      r31, 0x2c(r1)
    stw      r30, 0x28(r1)
    li       r30, 0
    stw      r29, 0x24(r1)
    or.      r29, r4, r4
    stw      r28, 0x20(r1)
    mr       r28, r3
    blt      lbl_804432C8
    cmpwi    r29, 3
    bge      lbl_804432C8
    li       r0, 1

lbl_804432C8:
    clrlwi.  r0, r0, 0x18
    bne      lbl_804432EC
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x32f
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804432EC:
    mr       r3, r28
    li       r31, 0
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443330
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80443330
    mr       r3, r28
    li       r31, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_80443330:
    clrlwi.  r0, r31, 0x18
    beq      lbl_8044338C
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_8044338C
    lis      r4, __vt__24MemoryCardMgrCommandBase@ha
    lis      r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@ha
    addi     r0, r4, __vt__24MemoryCardMgrCommandBase@l
    li       r5, 0xa
    stw      r0, 0xc(r1)
    addi     r0, r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@l
    mr       r3, r28
    addi     r4, r1, 8
    stw      r5, 8(r1)
    li       r30, 1
    stw      r0, 0xc(r1)
    stw      r29, 0x10(r1)
    bl       setCommand__13MemoryCardMgrFP24MemoryCardMgrCommandBase
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_8044338C:
    lwz      r0, 0x34(r1)
    mr       r3, r30
    lwz      r31, 0x2c(r1)
    lwz      r30, 0x28(r1)
    lwz      r29, 0x24(r1)
    lwz      r28, 0x20(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	804433B0
* Size:	000124

void MemoryCard::Mgr::deletePlayer(int)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    stw      r0, 0x34(r1)
    li       r0, 0
    stw      r31, 0x2c(r1)
    stw      r30, 0x28(r1)
    li       r30, 0
    stw      r29, 0x24(r1)
    or.      r29, r4, r4
    stw      r28, 0x20(r1)
    mr       r28, r3
    blt      lbl_804433EC
    cmpwi    r29, 3
    bge      lbl_804433EC
    li       r0, 1

lbl_804433EC:
    clrlwi.  r0, r0, 0x18
    bne      lbl_80443410
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x347
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80443410:
    mr       r3, r28
    li       r31, 0
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443454
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_80443454
    mr       r3, r28
    li       r31, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_80443454:
    clrlwi.  r0, r31, 0x18
    beq      lbl_804434B0
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_804434B0
    lis      r4, __vt__24MemoryCardMgrCommandBase@ha
    lis      r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@ha
    addi     r0, r4, __vt__24MemoryCardMgrCommandBase@l
    li       r5, 0xb
    stw      r0, 0xc(r1)
    addi     r0, r3, __vt__Q34Game10MemoryCard18MgrCommandPlayerNo@l
    mr       r3, r28
    addi     r4, r1, 8
    stw      r5, 8(r1)
    li       r30, 1
    stw      r0, 0xc(r1)
    stw      r29, 0x10(r1)
    bl       setCommand__13MemoryCardMgrFP24MemoryCardMgrCommandBase
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_804434B0:
    lwz      r0, 0x34(r1)
    mr       r3, r30
    lwz      r31, 0x2c(r1)
    lwz      r30, 0x28(r1)
    lwz      r29, 0x24(r1)
    lwz      r28, 0x20(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	804434D4
* Size:	000150

void MemoryCard::Mgr::copyPlayer(int, int)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    stw      r0, 0x34(r1)
    li       r0, 0
    stmw     r27, 0x1c(r1)
    or.      r29, r4, r4
    mr       r28, r3
    mr       r30, r5
    li       r31, 0
    blt      lbl_80443508
    cmpwi    r29, 2
    bgt      lbl_80443508
    li       r0, 1

lbl_80443508:
    clrlwi.  r0, r0, 0x18
    bne      lbl_8044352C
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x35e
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044352C:
    cmpwi    r30, 0
    li       r0, 0
    blt      lbl_80443544
    cmpwi    r30, 2
    bgt      lbl_80443544
    li       r0, 1

lbl_80443544:
    clrlwi.  r0, r0, 0x18
    bne      lbl_80443568
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x35f
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80443568:
    mr       r3, r28
    li       r27, 0
    bl       resetError__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_804435AC
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_804435AC
    mr       r3, r28
    li       r27, 1
    li       r4, 0x10
    bl       setCommand__13MemoryCardMgrFi
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_804435AC:
    clrlwi.  r0, r27, 0x18
    beq      lbl_8044360C
    addi     r3, r28, 0xac
    bl       OSTryLockMutex
    cmpwi    r3, 0
    beq      lbl_8044360C
    lis      r4, __vt__24MemoryCardMgrCommandBase@ha
    lis      r3, __vt__Q34Game10MemoryCard20MgrCommandCopyPlayer@ha
    addi     r0, r4, __vt__24MemoryCardMgrCommandBase@l
    sth      r29, 0x10(r1)
    li       r4, 0xc
    li       r31, 1
    stw      r0, 0xc(r1)
    addi     r0, r3, __vt__Q34Game10MemoryCard20MgrCommandCopyPlayer@l
    mr       r3, r28
    stw      r4, 8(r1)
    addi     r4, r1, 8
    stw      r0, 0xc(r1)
    sth      r30, 0x12(r1)
    bl       setCommand__13MemoryCardMgrFP24MemoryCardMgrCommandBase
    addi     r3, r28, 0xac
    bl       OSUnlockMutex
    addi     r3, r28, 0xc4
    bl       OSSignalCond

lbl_8044360C:
    mr       r3, r31
    lmw      r27, 0x1c(r1)
    lwz      r0, 0x34(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	80443624
* Size:	0000E8

void
MemoryCard::Mgr::getPlayerHeader(Game::MemoryCard::PlayerFileInfo*)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  li        r31, 0
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  bl        0x3214
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  addi      r3, r28, 0xAC
  bl        -0x3538E4
  cmpwi     r3, 0
  beq-      .loc_0x68
  mr        r3, r28
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x2FC4
  addi      r3, r28, 0xAC
  bl        -0x353A3C
  addi      r3, r28, 0xC4
  bl        -0x35375C

.loc_0x68:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xC4
  addi      r3, r28, 0xAC
  bl        -0x35391C
  cmpwi     r3, 0
  beq-      .loc_0xC4
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x30B8
  li        r5, 0xD
  stw       r0, 0xC(r1)
  subi      r0, r3, 0x3078
  mr        r3, r28
  addi      r4, r1, 0x8
  stw       r5, 0x8(r1)
  li        r30, 0x1
  stw       r0, 0xC(r1)
  stw       r29, 0x10(r1)
  bl        -0x2FE0
  addi      r3, r28, 0xAC
  bl        -0x353A98
  addi      r3, r28, 0xC4
  bl        -0x3537B8

.loc_0xC4:
  lwz       r0, 0x34(r1)
  mr        r3, r30
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr

}

/*
* --INFO--
* Address:	8044370C
* Size:	000354

void MemoryCard::Mgr::doCardProc(void*, MemoryCardMgrCommand*)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stmw     r26, 8(r1)
    mr       r26, r3
    mr       r27, r5
    li       r28, 0
    lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
    bl       getTotalFreeSize__7JKRHeapFv
    lwz      r29, sCurrentHeap__7JKRHeap@sda21(r13)
    li       r31, 0
    mr       r30, r3
    stw      r31, 0xd8(r26)
    lwz      r3, 0(r27)
    addi     r0, r3, -5
    cmplwi   r0, 0xb
    bgt      lbl_804439D8
    lis      r3, lbl_804ECF58@ha
    slwi     r0, r0, 2
    addi     r3, r3, lbl_804ECF58@l
    lwzx     r0, r3, r0
    mtctr    r0
    bctr

lbl_80443768:
    lwz      r0, 0xe4(r26)
    mr       r3, r26
    ori      r0, r0, 1
    stw      r0, 0xe4(r26)
    bl       commandCreateNewFile__Q34Game10MemoryCard3MgrFv
    lwz      r0, 0xe4(r26)
    mr       r28, r3
    rlwinm   r0, r0, 0, 0, 0x1e
    stw      r0, 0xe4(r26)
    b        lbl_804439F4

lbl_80443790:
    lwz      r0, 0xe4(r26)
    mr       r3, r26
    ori      r0, r0, 1
    stw      r0, 0xe4(r26)
    bl       varifyCardStatus__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_804437D8
    mr       r3, r26
    li       r4, 0
    li       r5, 0
    bl       commandSaveGameOption__Q34Game10MemoryCard3MgrFbb
    clrlwi.  r0, r3, 0x18
    beq      lbl_804437D8
    mr       r3, r26
    bl       commandSaveHeader__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_804437D8
    li       r31, 1

lbl_804437D8:
    lwz      r0, 0xe4(r26)
    mr       r28, r31
    rlwinm   r0, r0, 0, 0, 0x1e
    stw      r0, 0xe4(r26)
    b        lbl_804439F4

lbl_804437EC:
    mr       r3, r26
    bl       commandLoadGameOption__Q34Game10MemoryCard3MgrFv
    mr       r28, r3
    b        lbl_804439F4

lbl_804437FC:
    lwz      r0, 0xe4(r26)
    mr       r3, r26
    ori      r0, r0, 1
    stw      r0, 0xe4(r26)
    bl       varifyCardStatus__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443848
    lwz      r0, 8(r27)
    mr       r3, r26
    li       r5, 1
    extsb    r4, r0
    bl       commandSavePlayer__Q34Game10MemoryCard3MgrFScb
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443848
    mr       r3, r26
    bl       commandSaveHeader__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443848
    li       r31, 1

lbl_80443848:
    lwz      r0, 0xe4(r26)
    mr       r28, r31
    rlwinm   r0, r0, 0, 0, 0x1e
    stw      r0, 0xe4(r26)
    b        lbl_804439F4

lbl_8044385C:
    lwz      r0, 0xe4(r26)
    mr       r3, r26
    ori      r0, r0, 1
    stw      r0, 0xe4(r26)
    bl       varifyCardStatus__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_804438A8
    lwz      r0, 8(r27)
    mr       r3, r26
    li       r5, 1
    extsb    r4, r0
    bl       commandSavePlayerNoCheckSerialNo__Q34Game10MemoryCard3MgrFScb
    clrlwi.  r0, r3, 0x18
    beq      lbl_804438A8
    mr       r3, r26
    bl       commandSaveHeader__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_804438A8
    li       r31, 1

lbl_804438A8:
    lwz      r0, 0xe4(r26)
    mr       r28, r31
    rlwinm   r0, r0, 0, 0, 0x1e
    stw      r0, 0xe4(r26)
    b        lbl_804439F4

lbl_804438BC:
    lwz      r0, 8(r27)
    mr       r3, r26
    extsb    r4, r0
    bl       commandLoadPlayer__Q34Game10MemoryCard3MgrFSc
    mr       r28, r3
    b        lbl_804439F4

lbl_804438D4:
    lwz      r0, 0xe4(r26)
    mr       r3, r26
    ori      r0, r0, 1
    stw      r0, 0xe4(r26)
    bl       varifyCardStatus__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_8044391C
    lwz      r0, 8(r27)
    mr       r3, r26
    extsb    r4, r0
    bl       commandDeletePlayer__Q34Game10MemoryCard3MgrFSc
    clrlwi.  r0, r3, 0x18
    beq      lbl_8044391C
    mr       r3, r26
    bl       commandSaveHeader__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_8044391C
    li       r31, 1

lbl_8044391C:
    lwz      r0, 0xe4(r26)
    mr       r28, r31
    rlwinm   r0, r0, 0, 0, 0x1e
    stw      r0, 0xe4(r26)
    b        lbl_804439F4

lbl_80443930:
    lwz      r0, 0xe4(r26)
    mr       r3, r26
    ori      r0, r0, 1
    stw      r0, 0xe4(r26)
    bl       varifyCardStatus__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443980
    lha      r4, 8(r27)
    mr       r3, r26
    lha      r0, 0xa(r27)
    extsb    r4, r4
    extsb    r5, r0
    bl       commandCopyPlayer__Q34Game10MemoryCard3MgrFScSc
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443980
    mr       r3, r26
    bl       commandSaveHeader__Q34Game10MemoryCard3MgrFv
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443980
    li       r31, 1

lbl_80443980:
    lwz      r0, 0xe4(r26)
    mr       r28, r31
    rlwinm   r0, r0, 0, 0, 0x1e
    stw      r0, 0xe4(r26)
    b        lbl_804439F4

lbl_80443994:
    lwz      r4, 8(r27)
    mr       r3, r26
    bl
commandUpdatePlayerHeader__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard14PlayerFileInfo
    mr       r28, r3
    b        lbl_804439F4

lbl_804439A8:
    mr       r3, r26
    bl       commandCheckSerialNo__Q34Game10MemoryCard3MgrFv
    mr       r28, r3
    b        lbl_804439F4

lbl_804439B8:
    mr       r3, r26
    bl       commandCheckBeforeSave__Q34Game10MemoryCard3MgrFv
    mr       r28, r3
    b        lbl_804439F4

lbl_804439C8:
    mr       r3, r26
    bl       commandCheckError__Q34Game10MemoryCard3MgrFv
    mr       r28, r3
    b        lbl_804439F4

lbl_804439D8:
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x3e3
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804439F4:
    lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
    cmplw    r29, r0
    beq      lbl_80443A1C
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x3f0
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80443A1C:
    lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
    bl       getTotalFreeSize__7JKRHeapFv
    cmpw     r30, r3
    beq      lbl_80443A48
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x3f2
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80443A48:
    mr       r3, r28
    lmw      r26, 8(r1)
    lwz      r0, 0x24(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	80443A60
* Size:	000390

void MemoryCard::Mgr::commandUpdatePlayerHeader(
(Game::MemoryCard::PlayerFileInfo*))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stmw      r26, 0x58(r1)
  mr.       r28, r4
  mr        r27, r3
  li        r30, 0
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x407
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419458

.loc_0x3C:
  li        r0, 0
  mr        r31, r28
  stb       r0, 0x8(r1)
  li        r29, 0
  b         .loc_0x2E4

.loc_0x50:
  li        r0, 0
  mr        r3, r27
  stb       r0, 0x18(r1)
  mr        r4, r29
  addi      r5, r1, 0xC
  addi      r6, r1, 0x8
  stw       r0, 0x1C(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x44(r1)
  stw       r0, 0x48(r1)
  bl        0x12E0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x15C
  extsb.    r3, r29
  li        r0, 0
  blt-      .loc_0xBC
  cmpwi     r3, 0x3
  bge-      .loc_0xBC
  li        r0, 0x1

.loc_0xBC:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0xE0
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x4194FC

.loc_0xE0:
  lbz       r0, 0x18(r1)
  stb       r0, 0x0(r31)
  lbz       r0, 0x19(r1)
  stb       r0, 0x1(r31)
  lhz       r0, 0x1A(r1)
  sth       r0, 0x2(r31)
  lwz       r0, 0x1C(r1)
  stw       r0, 0x4(r31)
  lwz       r0, 0x20(r1)
  stw       r0, 0x8(r31)
  lwz       r0, 0x24(r1)
  stw       r0, 0xC(r31)
  lwz       r0, 0x28(r1)
  stw       r0, 0x10(r31)
  lwz       r0, 0x2C(r1)
  stw       r0, 0x14(r31)
  lwz       r0, 0x30(r1)
  stw       r0, 0x18(r31)
  lwz       r0, 0x34(r1)
  stw       r0, 0x1C(r31)
  lwz       r0, 0x38(r1)
  stw       r0, 0x20(r31)
  lwz       r0, 0x3C(r1)
  stw       r0, 0x24(r31)
  lwz       r0, 0x40(r1)
  stw       r0, 0x28(r31)
  lwz       r0, 0x44(r1)
  stw       r0, 0x2C(r31)
  lwz       r0, 0x48(r1)
  stw       r0, 0x30(r31)
  b         .loc_0x2DC

.loc_0x15C:
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2F0
  lwz       r5, 0xC(r1)
  subis     r0, r5, 0x506C
  cmplwi    r0, 0x496E
  bne-      .loc_0x220
  lis       r3, 0x506C
  extsb.    r6, r29
  addi      r3, r3, 0x496E
  li        r0, 0
  sub       r4, r3, r5
  sub       r3, r5, r3
  or        r3, r4, r3
  rlwinm    r26,r3,1,31,31
  blt-      .loc_0x1B8
  cmpwi     r6, 0x3
  bge-      .loc_0x1B8
  li        r0, 0x1

.loc_0x1B8:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x1DC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x4195F8

.loc_0x1DC:
  stb       r26, 0x0(r31)
  li        r3, 0
  li        r0, 0x2710
  stb       r3, 0x1(r31)
  sth       r3, 0x2(r31)
  stw       r3, 0x4(r31)
  stw       r3, 0x8(r31)
  stw       r3, 0xC(r31)
  stw       r3, 0x10(r31)
  stw       r3, 0x14(r31)
  stw       r3, 0x18(r31)
  stw       r3, 0x1C(r31)
  stw       r0, 0x20(r31)
  stw       r3, 0x28(r31)
  stw       r3, 0x2C(r31)
  stw       r3, 0x30(r31)
  b         .loc_0x2DC

.loc_0x220:
  li        r3, 0x1
  extsb.    r4, r29
  stb       r3, 0x18(r1)
  li        r0, 0
  blt-      .loc_0x240
  cmpwi     r4, 0x3
  bge-      .loc_0x240
  mr        r0, r3

.loc_0x240:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x264
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419680

.loc_0x264:
  lbz       r0, 0x18(r1)
  stb       r0, 0x0(r31)
  lbz       r0, 0x19(r1)
  stb       r0, 0x1(r31)
  lhz       r0, 0x1A(r1)
  sth       r0, 0x2(r31)
  lwz       r0, 0x1C(r1)
  stw       r0, 0x4(r31)
  lwz       r0, 0x20(r1)
  stw       r0, 0x8(r31)
  lwz       r0, 0x24(r1)
  stw       r0, 0xC(r31)
  lwz       r0, 0x28(r1)
  stw       r0, 0x10(r31)
  lwz       r0, 0x2C(r1)
  stw       r0, 0x14(r31)
  lwz       r0, 0x30(r1)
  stw       r0, 0x18(r31)
  lwz       r0, 0x34(r1)
  stw       r0, 0x1C(r31)
  lwz       r0, 0x38(r1)
  stw       r0, 0x20(r31)
  lwz       r0, 0x3C(r1)
  stw       r0, 0x24(r31)
  lwz       r0, 0x40(r1)
  stw       r0, 0x28(r31)
  lwz       r0, 0x44(r1)
  stw       r0, 0x2C(r31)
  lwz       r0, 0x48(r1)
  stw       r0, 0x30(r31)

.loc_0x2DC:
  addi      r31, r31, 0x34
  addi      r29, r29, 0x1

.loc_0x2E4:
  extsb     r0, r29
  cmpwi     r0, 0x3
  blt+      .loc_0x50

.loc_0x2F0:
  lbz       r0, 0x8(r1)
  cmplwi    r0, 0
  bne+      .loc_0x3C
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r29, r4, 0x5234
  li        r26, 0
  subi      r28, r3, 0x5218
  b         .loc_0x34C

.loc_0x314:
  extsb.    r3, r26
  li        r0, 0
  blt-      .loc_0x32C
  cmpwi     r3, 0x3
  bge-      .loc_0x32C
  li        r0, 0x1

.loc_0x32C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x348
  mr        r3, r29
  mr        r5, r28
  li        r4, 0x18C
  crclr     6, 0x6
  bl        -0x419764

.loc_0x348:
  addi      r26, r26, 0x1

.loc_0x34C:
  extsb     r0, r26
  cmpwi     r0, 0x3
  blt+      .loc_0x314
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x378
  li        r30, 0x1

.loc_0x378:
  mr        r3, r30
  lmw       r26, 0x58(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr

}

/*
* --INFO--
* Address:	80443DF0
* Size:	00007C

void MemoryCard::Mgr::commandCheckBeforeSave(void)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    li       r5, 0
    stw      r0, 0x34(r1)
    addi     r4, r1, 8
    stw      r31, 0x2c(r1)
    mr       r31, r3
    lwz      r6, cFileName__Q24Game10MemoryCard@sda21(r13)
    bl fileOpen__13MemoryCardMgrFP12CARDFileInfoQ213MemoryCardMgr9ECardSlotPCc
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443E30
    addi     r3, r1, 8
    bl       CARDClose
    mr       r3, r31
    bl       commandCheckSerialNo__Q34Game10MemoryCard3MgrFv
    b        lbl_80443E58

lbl_80443E30:
    mr       r3, r31
    li       r4, 0
    bl       checkSpace__Q34Game10MemoryCard3MgrFQ213MemoryCardMgr9ECardSlot
    lwz      r0, 0xd4(r31)
    cmpwi    r0, 2
    bne      lbl_80443E54
    mr       r3, r31
    li       r4, 3
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80443E54:
    li       r3, 0

lbl_80443E58:
    lwz      r0, 0x34(r1)
    lwz      r31, 0x2c(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	80443E6C
* Size:	000080

void MemoryCard::Mgr::commandCheckError(void)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    li       r5, 0
    stw      r0, 0x34(r1)
    addi     r4, r1, 8
    stw      r31, 0x2c(r1)
    li       r31, 1
    stw      r30, 0x28(r1)
    mr       r30, r3
    lwz      r6, cFileName__Q24Game10MemoryCard@sda21(r13)
    bl fileOpen__13MemoryCardMgrFP12CARDFileInfoQ213MemoryCardMgr9ECardSlotPCc
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443EAC
    addi     r3, r1, 8
    bl       CARDClose
    b        lbl_80443ED0

lbl_80443EAC:
    mr       r3, r30
    li       r4, 0
    bl       checkSpace__Q34Game10MemoryCard3MgrFQ213MemoryCardMgr9ECardSlot
    clrlwi.  r0, r3, 0x18
    beq      lbl_80443ECC
    mr       r3, r30
    li       r4, 3
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_80443ECC:
    li       r31, 0

lbl_80443ED0:
    lwz      r0, 0x34(r1)
    mr       r3, r31
    lwz      r31, 0x2c(r1)
    lwz      r30, 0x28(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	80443EEC
* Size:	0000B8

void MemoryCard::Mgr::checkSpace(MemoryCardMgr::ECardSlot)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    lis      r5, 0x00036000@ha
    stw      r0, 0x14(r1)
    addi     r5, r5, 0x00036000@l
    stw      r31, 0xc(r1)
    li       r31, 0
    stw      r30, 8(r1)
    mr       r30, r3
    bl       checkSpace__13MemoryCardMgrFQ213MemoryCardMgr9ECardSloti
    cmpwi    r3, 1
    beq      lbl_80443F4C
    bge      lbl_80443F2C
    cmpwi    r3, 0
    bge      lbl_80443F38
    b        lbl_80443F6C

lbl_80443F2C:
    cmpwi    r3, 3
    bge      lbl_80443F6C
    b        lbl_80443F5C

lbl_80443F38:
    mr       r3, r30
    li       r4, 2
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
    li       r31, 1
    b        lbl_80443F88

lbl_80443F4C:
    mr       r3, r30
    li       r4, 6
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
    b        lbl_80443F88

lbl_80443F5C:
    mr       r3, r30
    li       r4, 7
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
    b        lbl_80443F88

lbl_80443F6C:
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x4c4
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80443F88:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80443FA4
* Size:	000118

void MemoryCard::Mgr::commandSaveHeader(void)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    stw      r0, 0x34(r1)
    stw      r31, 0x2c(r1)
    li       r31, 0
    stw      r30, 0x28(r1)
    mr       r30, r3
    lwz      r12, 0(r3)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_804440A0
    lwz      r6, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r30
    addi     r4, r1, 8
    li       r5, 0
    bl fileOpen__13MemoryCardMgrFP12CARDFileInfoQ213MemoryCardMgr9ECardSlotPCc
    clrlwi.  r0, r3, 0x18
    beq      lbl_80444078
    addi     r3, r1, 8
    bl       CARDClose
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444028
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r30
    li       r4, 0
    bl       writeHeader__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCc

lbl_80444028:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444054
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r30
    li       r4, 0
    bl       writeCardStatus__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCc

lbl_80444054:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_804440A0
    li       r31, 1
    b        lbl_804440A0

lbl_80444078:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_804440A0
    mr       r3, r30
    li       r4, 3
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_804440A0:
    lwz      r0, 0x34(r1)
    mr       r3, r31
    lwz      r31, 0x2c(r1)
    lwz      r30, 0x28(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	804440BC
* Size:	0001A0

void MemoryCard::Mgr::commandCreateNewFile(void)
{
/*
    stwu     r1, -0x40(r1)
    mflr     r0
    li       r5, 0
    stw      r0, 0x44(r1)
    addi     r4, r1, 0x10
    stw      r31, 0x3c(r1)
    stw      r30, 0x38(r1)
    li       r30, 0
    stw      r29, 0x34(r1)
    mr       r29, r3
    lwz      r6, cFileName__Q24Game10MemoryCard@sda21(r13)
    bl fileOpen__13MemoryCardMgrFP12CARDFileInfoQ213MemoryCardMgr9ECardSlotPCc
    clrlwi.  r0, r3, 0x18
    beq      lbl_80444104
    addi     r3, r1, 0x10
    bl       CARDClose
    li       r30, 1
    b        lbl_8044423C

lbl_80444104:
    lis      r4, 0x00036000@ha
    mr       r3, r29
    addi     r5, r4, 0x00036000@l
    li       r4, 0
    bl       checkSpace__13MemoryCardMgrFQ213MemoryCardMgr9ECardSloti
    cmpwi    r3, 1
    beq      lbl_8044414C
    bge      lbl_80444130
    cmpwi    r3, 0
    bge      lbl_8044413C
    b        lbl_8044416C

lbl_80444130:
    cmpwi    r3, 3
    bge      lbl_8044416C
    b        lbl_8044415C

lbl_8044413C:
    mr       r3, r29
    li       r4, 2
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
    b        lbl_80444188

lbl_8044414C:
    mr       r3, r29
    li       r4, 6
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
    b        lbl_80444188

lbl_8044415C:
    mr       r3, r29
    li       r4, 7
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag
    b        lbl_80444188

lbl_8044416C:
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x4c4
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80444188:
    mr       r3, r29
    addi     r4, r1, 8
    li       r5, 0
    bl       readCardSerialNo__13MemoryCardMgrFPUxQ213MemoryCardMgr9ECardSlot
    clrlwi.  r0, r3, 0x18
    beq      lbl_804441B4
    lwz      r3, sys@sda21(r13)
    lwz      r5, 8(r1)
    lwz      r3, 0x60(r3)
    lwz      r6, 0xc(r1)
    bl       setCardSerialNo__Q34Game14CommonSaveData3MgrFUx

lbl_804441B4:
    mr       r3, r29
    bl       checkStatus__13MemoryCardMgrFv
    cmplwi   r3, 2
    bne      lbl_8044420C
    lis      r3, 0x00036000@ha
    lwz      r4, cFileName__Q24Game10MemoryCard@sda21(r13)
    addi     r5, r3, 0x00036000@l
    addi     r6, r1, 0x10
    li       r3, 0
    bl       CARDCreate
    mr       r31, r3
    addi     r3, r1, 0x10
    bl       CARDClose
    cmpwi    r31, 0
    bne      lbl_80444200
    mr       r3, r29
    li       r4, 0
    bl       dataFormat__Q34Game10MemoryCard3MgrFQ213MemoryCardMgr9ECardSlot
    b        lbl_8044420C

lbl_80444200:
    mr       r3, r29
    li       r4, 0xa
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_8044420C:
    mr       r3, r29
    lwz      r12, 0(r29)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444230
    li       r30, 1
    b        lbl_8044423C

lbl_80444230:
    mr       r3, r29
    li       r4, 0xa
    bl setInsideStatusFlag__13MemoryCardMgrFQ213MemoryCardMgr17EInsideStatusFlag

lbl_8044423C:
    lwz      r0, 0x44(r1)
    mr       r3, r30
    lwz      r31, 0x3c(r1)
    lwz      r30, 0x38(r1)
    lwz      r29, 0x34(r1)
    mtlr     r0
    addi     r1, r1, 0x40
    blr

}

/*
* --INFO--
* Address:	8044425C
* Size:	000100

void MemoryCard::Mgr::dataFormat(MemoryCardMgr::ECardSlot)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    mr       r31, r4
    stw      r30, 8(r1)
    mr       r30, r3
    lwz      r12, 0(r3)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_804442A0
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r30
    mr       r4, r31
    bl       writeHeader__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCc

lbl_804442A0:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_804442D4
    mr       r3, r30
    bl       writeInvalidGameOption__Q34Game10MemoryCard3MgrFv
    mr       r3, r30
    li       r4, 0
    li       r5, 1
    bl       commandSaveGameOption__Q34Game10MemoryCard3MgrFbb

lbl_804442D4:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_804442F8
    mr       r3, r30
    bl       writeInvalidPlayerInfoAll__Q34Game10MemoryCard3MgrFv

lbl_804442F8:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444324
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r30
    mr       r4, r31
    bl       writeCardStatus__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCc

lbl_80444324:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi   r0, r3, 0x18
    lwz      r31, 0xc(r1)
    cntlzw   r0, r0
    lwz      r30, 8(r1)
    srwi     r3, r0, 5
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	........
* Size:	000114

void MemoryCard::Mgr::writeBrokenData(MemoryCardMgr::ECardSlot)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	8044435C
* Size:	000170

void MemoryCard::Mgr::varifyCardStatus(void)
{
/*
    stwu     r1, -0x30(r1)
    mflr     r0
    li       r5, 0
    stw      r0, 0x34(r1)
    addi     r4, r1, 8
    stw      r31, 0x2c(r1)
    stw      r30, 0x28(r1)
    stw      r29, 0x24(r1)
    stw      r28, 0x20(r1)
    mr       r28, r3
    lwz      r6, cFileName__Q24Game10MemoryCard@sda21(r13)
    bl fileOpen__13MemoryCardMgrFP12CARDFileInfoQ213MemoryCardMgr9ECardSlotPCc
    clrlwi.  r0, r3, 0x18
    beq      lbl_804443AC
    mr       r3, r28
    addi     r5, r1, 8
    li       r4, 0
    bl checkCardStat__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotP12CARDFileInfo
    addi     r3, r1, 8
    bl       CARDClose

lbl_804443AC:
    lbz      r0, 0xd0(r28)
    cmplwi   r0, 0
    beq      lbl_804443C0
    li       r3, 1
    b        lbl_804444AC

lbl_804443C0:
    li       r3, 0x2000
    bl       __nwa__FUl
    li       r4, 0xcd
    mr       r30, r3
    li       r5, 0x2000
    bl       memset
    li       r31, 0
    mr       r29, r31

lbl_804443E0:
    mr       r3, r28
    lwz      r12, 0(r28)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444418
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r28
    mr       r6, r30
    mr       r8, r29
    li       r4, 0
    li       r7, 0x2000
    bl       write__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll

lbl_80444418:
    addi     r31, r31, 1
    addi     r29, r29, 0x2000
    cmpwi    r31, 0x1b
    blt      lbl_804443E0
    mr       r3, r30
    bl       __dl__FPv
    mr       r3, r28
    lwz      r12, 0(r28)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_8044445C
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r28
    li       r4, 0
    bl       writeHeader__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCc

lbl_8044445C:
    mr       r3, r28
    lwz      r12, 0(r28)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444488
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r28
    li       r4, 0
    bl       writeCardStatus__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCc

lbl_80444488:
    mr       r3, r28
    lwz      r12, 0(r28)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi   r0, r3, 0x18
    cntlzw   r0, r0
    srwi     r0, r0, 5
    mr       r3, r0

lbl_804444AC:
    lwz      r0, 0x34(r1)
    lwz      r31, 0x2c(r1)
    lwz      r30, 0x28(r1)
    lwz      r29, 0x24(r1)
    lwz      r28, 0x20(r1)
    mtlr     r0
    addi     r1, r1, 0x30
    blr

}

/*
* --INFO--
* Address:	804444CC
* Size:	0001C0

void MemoryCard::Mgr::commandSaveGameOption(bool, bool)
{
/*
    stwu     r1, -0x450(r1)
    mflr     r0
    stw      r0, 0x454(r1)
    clrlwi.  r0, r4, 0x18
    stmw     r25, 0x434(r1)
    mr       r28, r3
    mr       r25, r5
    li       r31, 0
    bne      lbl_80444500
    li       r4, 0
    bl       checkSerialNo__Q34Game10MemoryCard3MgrFb
    clrlwi.  r0, r3, 0x18
    beq      lbl_80444664

lbl_80444500:
    lwz      r4, 0xcc(r28)
    li       r3, 0x2000
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    or.      r30, r3, r3
    bne      lbl_80444534
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x5dc
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80444534:
    clrlwi.  r0, r25, 0x18
    li       r29, -1
    li       r26, 0
    bne      lbl_804445AC
    li       r25, 0
    li       r27, 0x2000

lbl_8044454C:
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r28
    mr       r6, r30
    mr       r8, r27
    li       r4, 0
    li       r7, 0x2000
    bl       read__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444578
    li       r26, 1
    b        lbl_804445AC

lbl_80444578:
    mr       r3, r28
    mr       r4, r30
    bl checkOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo
    clrlwi   r0, r3, 0x18
    cntlzw   r0, r0
    rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
    beq      lbl_8044459C
    mr       r29, r25
    b        lbl_804445AC

lbl_8044459C:
    addi     r25, r25, 1
    addi     r27, r27, 0x2000
    cmpwi    r25, 2
    blt      lbl_8044454C

lbl_804445AC:
    cmpwi    r29, -1
    bne      lbl_804445C8
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    lwz      r3, 0x28(r3)
    addi     r0, r3, 1
    clrlwi   r29, r0, 0x1f

lbl_804445C8:
    clrlwi.  r0, r26, 0x18
    bne      lbl_8044465C
    lwz      r6, sys@sda21(r13)
    lis      r5, 0x4F705661@ha
    lis      r4, 0x30303032@ha
    addi     r3, r1, 8
    lwz      r8, 0x60(r6)
    addi     r6, r5, 0x4F705661@l
    addi     r0, r4, 0x30303032@l
    addi     r4, r30, 0xc
    lwz      r7, 0x28(r8)
    li       r5, 0x1c00
    addi     r7, r7, 1
    stw      r7, 0x28(r8)
    stw      r6, 0(r30)
    stw      r0, 4(r30)
    lwz      r6, sys@sda21(r13)
    lwz      r6, 0x60(r6)
    lwz      r0, 0x28(r6)
    stw      r0, 8(r30)
    bl       __ct__9RamStreamFPvi
    mr       r3, r28
    addi     r4, r1, 8
    bl       writeGameOption__Q34Game10MemoryCard3MgrFR6Stream
    mr       r3, r28
    mr       r4, r30
    bl
calcCheckSumOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo
    stw      r3, 0x1ffc(r30)
    slwi     r4, r29, 0xd
    mr       r3, r28
    mr       r6, r30
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    addi     r8, r4, 0x2000
    li       r4, 0
    li       r7, 0x2000
    bl       write__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    mr       r31, r3

lbl_8044465C:
    mr       r3, r30
    bl       __dl__FPv

lbl_80444664:
    clrlwi.  r0, r31, 0x18
    beq      lbl_80444674
    lwz      r3, sys@sda21(r13)
    bl       clearOptionBlockSaveFlag__6SystemFv

lbl_80444674:
    mr       r3, r31
    lmw      r25, 0x434(r1)
    lwz      r0, 0x454(r1)
    mtlr     r0
    addi     r1, r1, 0x450
    blr

}

/*
* --INFO--
* Address:	8044468C
* Size:	000248

void MemoryCard::Mgr::commandLoadGameOption(void)
{
/*
    stwu     r1, -0x460(r1)
    mflr     r0
    li       r5, 0
    stw      r0, 0x464(r1)
    addi     r4, r1, 0x10
    stmw     r25, 0x444(r1)
    mr       r29, r3
    li       r30, 0
    bl       readCardSerialNo__13MemoryCardMgrFPUxQ213MemoryCardMgr9ECardSlot
    clrlwi.  r0, r3, 0x18
    beq      lbl_804448B0
    lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
    bl       getTotalFreeSize__7JKRHeapFv
    lwz      r4, 0xcc(r29)
    mr       r31, r3
    li       r3, 0x2000
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    cmplwi   r3, 0
    stw      r3, 8(r1)
    bne      lbl_804446FC
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x650
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804446FC:
    lwz      r4, 0xcc(r29)
    li       r3, 0x2000
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    cmplwi   r3, 0
    stw      r3, 0xc(r1)
    bne      lbl_80444734
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x652
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80444734:
    addi     r27, r1, 8
    li       r25, 0
    li       r26, 0
    li       r28, 0x2000

lbl_80444744:
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r29
    lwz      r6, 0(r27)
    mr       r8, r28
    li       r4, 0
    li       r7, 0x2000
    bl       read__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    clrlwi.  r0, r3, 0x18
    bne      lbl_80444770
    li       r30, 0
    li       r25, 1

lbl_80444770:
    addi     r26, r26, 1
    addi     r27, r27, 4
    cmpwi    r26, 2
    addi     r28, r28, 0x2000
    blt      lbl_80444744
    clrlwi.  r0, r25, 0x18
    bne      lbl_80444874
    lwz      r26, 8(r1)
    mr       r3, r29
    lwz      r25, 0xc(r1)
    li       r27, 0
    mr       r4, r26
    bl checkOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo
    mr       r28, r3
    mr       r3, r29
    mr       r4, r25
    bl checkOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo
    clrlwi.  r0, r28, 0x18
    beq      lbl_804447E4
    clrlwi.  r0, r3, 0x18
    beq      lbl_804447E4
    lwz      r3, 8(r26)
    lwz      r0, 8(r25)
    cmplw    r3, r0
    blt      lbl_804447DC
    mr       r27, r26
    b        lbl_80444810

lbl_804447DC:
    mr       r27, r25
    b        lbl_80444810

lbl_804447E4:
    clrlwi.  r0, r28, 0x18
    beq      lbl_804447FC
    clrlwi.  r0, r3, 0x18
    bne      lbl_804447FC
    mr       r27, r26
    b        lbl_80444810

lbl_804447FC:
    clrlwi.  r0, r28, 0x18
    bne      lbl_80444810
    clrlwi.  r0, r3, 0x18
    beq      lbl_80444810
    mr       r27, r25

lbl_80444810:
    cmplwi   r27, 0
    bne      lbl_80444830
    li       r0, 1
    stw      r0, 0xd8(r29)
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    bl       setDefault__Q34Game14CommonSaveData3MgrFv
    b        lbl_80444860

lbl_80444830:
    lwz      r5, sys@sda21(r13)
    addi     r3, r1, 0x18
    lwz      r0, 8(r27)
    addi     r4, r27, 0xc
    lwz      r6, 0x60(r5)
    li       r30, 1
    li       r5, 0x1c00
    stw      r0, 0x28(r6)
    bl       __ct__9RamStreamFPvi
    mr       r3, r29
    addi     r4, r1, 0x18
    bl       readGameOption__Q34Game10MemoryCard3MgrFR6Stream

lbl_80444860:
    lwz      r3, sys@sda21(r13)
    lwz      r5, 0x10(r1)
    lwz      r3, 0x60(r3)
    lwz      r6, 0x14(r1)
    bl       setCardSerialNo__Q34Game14CommonSaveData3MgrFUx

lbl_80444874:
    lwz      r3, 8(r1)
    bl       __dl__FPv
    lwz      r3, 0xc(r1)
    bl       __dl__FPv
    lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
    bl       getTotalFreeSize__7JKRHeapFv
    cmpw     r31, r3
    beq      lbl_804448B0
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x6ab
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804448B0:
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    bl       setup__Q34Game14CommonSaveData3MgrFv
    mr       r3, r30
    lmw      r25, 0x444(r1)
    lwz      r0, 0x464(r1)
    mtlr     r0
    addi     r1, r1, 0x460
    blr

}

/*
* --INFO--
* Address:	804448D4
* Size:	000028

void MemoryCard::Mgr::writeGameOption(Stream&)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    bl       write__Q34Game14CommonSaveData3MgrFR6Stream
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	804448FC
* Size:	000028

void MemoryCard::Mgr::readGameOption(Stream&)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    bl       read__Q34Game14CommonSaveData3MgrFR6Stream
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80444924
* Size:	000070

void MemoryCard::Mgr::checkSerialNo(bool)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    lwz      r5, sys@sda21(r13)
    lwz      r5, 0x60(r5)
    lhz      r0, 0x40(r5)
    clrlwi.  r0, r0, 0x1f
    bne      lbl_80444964
    clrlwi.  r0, r4, 0x18
    beq      lbl_8044495C
    li       r0, 3
    stw      r0, 0xd8(r3)

lbl_8044495C:
    li       r31, 1
    b        lbl_8044497C

lbl_80444964:
    addi     r4, r5, 0x30
    li       r5, 0
    bl
verifyCardSerialNo__Q34Game10MemoryCard3MgrFPUxQ213MemoryCardMgr9ECardSlot
    clrlwi.  r0, r3, 0x18
    beq      lbl_8044497C
    li       r31, 1

lbl_8044497C:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80444994
* Size:	0000D0

void MemoryCard::Mgr::commandSavePlayer(signed char, bool)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stmw     r27, 0xc(r1)
    mr       r31, r4
    mr       r30, r3
    mr       r27, r5
    extsb.   r0, r31
    li       r28, 0
    li       r3, 0
    blt      lbl_804449D0
    extsb    r0, r31
    cmpwi    r0, 3
    bge      lbl_804449D0
    li       r3, 1

lbl_804449D0:
    clrlwi.  r0, r3, 0x18
    bne      lbl_804449F4
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x77a
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804449F4:
    lwz      r3, sys@sda21(r13)
    li       r29, 0
    lwz      r4, 0x60(r3)
    lhz      r0, 0x40(r4)
    clrlwi.  r0, r0, 0x1f
    bne      lbl_80444A14
    li       r29, 1
    b        lbl_80444A30

lbl_80444A14:
    mr       r3, r30
    addi     r4, r4, 0x30
    li       r5, 0
    bl
verifyCardSerialNo__Q34Game10MemoryCard3MgrFPUxQ213MemoryCardMgr9ECardSlot
    clrlwi.  r0, r3, 0x18
    beq      lbl_80444A30
    li       r29, 1

lbl_80444A30:
    clrlwi.  r0, r29, 0x18
    beq      lbl_80444A4C
    mr       r3, r30
    mr       r4, r31
    mr       r5, r27
    bl       commandSavePlayerNoCheckSerialNo__Q34Game10MemoryCard3MgrFScb
    mr       r28, r3

lbl_80444A4C:
    mr       r3, r28
    lmw      r27, 0xc(r1)
    lwz      r0, 0x24(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	80444A64
* Size:	000374

void MemoryCard::Mgr::commandSavePlayerNoCheckSerialNo(signed char,
                                                          bool)
{
/*
.loc_0x0:
  stwu      r1, -0x460(r1)
  mflr      r0
  stw       r0, 0x464(r1)
  stmw      r27, 0x44C(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  li        r30, 0
  lwz       r3, -0x77D4(r13)
  bl        -0x4212A8
  mr        r31, r3
  mr        r3, r27
  addi      r4, r1, 0x10
  li        r5, 0
  bl        -0x2314
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x314
  lis       r3, 0x1
  lwz       r4, 0xCC(r27)
  subi      r3, r3, 0x4000
  li        r5, -0x20
  bl        -0x420A70
  mr.       r30, r3
  bne-      .loc_0x7C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x793
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A49C

.loc_0x7C:
  lwz       r5, -0x6514(r13)
  lis       r4, 0x506C
  lis       r3, 0x3030
  li        r0, 0
  lwz       r6, 0x60(r5)
  addi      r4, r4, 0x5661
  addi      r3, r3, 0x3033
  lwz       r5, 0x18(r6)
  addi      r5, r5, 0x1
  stw       r5, 0x18(r6)
  stw       r4, 0x0(r30)
  stw       r3, 0x4(r30)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  lwz       r3, 0x18(r3)
  stw       r3, 0x10(r30)
  stb       r28, 0x8(r30)
  stb       r0, 0xC(r30)
  stb       r29, 0xD(r30)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  lhz       r0, 0x22(r3)
  sth       r0, 0xE(r30)
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x254
  lwz       r3, 0x40(r3)
  lwz       r3, 0x218(r3)
  addi      r0, r3, 0x1
  stw       r0, 0x14(r30)
  lwz       r4, -0x6514(r13)
  lwz       r3, -0x6B70(r13)
  lwz       r29, 0x60(r4)
  bl        -0x25DC0C
  lwz       r5, -0x6B70(r13)
  lwz       r4, 0x1C(r29)
  lbz       r0, 0x4C(r5)
  add       r29, r4, r3
  cmplwi    r0, 0
  beq-      .loc_0x180
  addi      r3, r5, 0x60
  li        r4, 0x1
  bl        -0x2535D8
  stw       r3, 0x18(r30)
  li        r4, 0
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x2535EC
  stw       r3, 0x1C(r30)
  li        r4, 0x2
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x253600
  stw       r3, 0x20(r30)
  li        r4, 0x4
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x253614
  stw       r3, 0x24(r30)
  li        r4, 0x3
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x253628
  stw       r3, 0x28(r30)
  b         .loc_0x1E0

.loc_0x180:
  addi      r3, r5, 0xA8
  li        r4, 0x1
  bl        -0x25363C
  stw       r3, 0x18(r30)
  li        r4, 0
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x253650
  stw       r3, 0x1C(r30)
  li        r4, 0x2
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x253664
  stw       r3, 0x20(r30)
  li        r4, 0x4
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x253678
  stw       r3, 0x24(r30)
  li        r4, 0x3
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x25368C
  stw       r3, 0x28(r30)

.loc_0x1E0:
  lwz       r3, -0x6B70(r13)
  lwz       r0, 0xE8(r3)
  stw       r0, 0x2C(r30)
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x4C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x22C
  addi      r3, r1, 0x18
  bl        -0x319F4
  lwz       r3, -0x6B70(r13)
  addi      r4, r1, 0x18
  addi      r5, r1, 0x8
  bl        -0x25D758
  lwz       r0, 0x20(r1)
  stw       r0, 0x34(r30)
  lwz       r3, 0x8(r1)
  addi      r0, r3, 0x1
  stw       r0, 0x38(r30)
  b         .loc_0x23C

.loc_0x22C:
  li        r3, 0
  li        r0, 0x7B
  stw       r3, 0x34(r30)
  stw       r0, 0x38(r30)

.loc_0x23C:
  lwz       r3, -0x6B70(r13)
  lwz       r3, 0xB0(r3)
  bl        -0x25F3F8
  stw       r3, 0x30(r30)
  stw       r29, 0x3C(r30)
  b         .loc_0x2B4

.loc_0x254:
  lis       r3, 0x804A
  li        r4, 0x7FA
  subi      r3, r3, 0x5234
  addi      r5, r2, 0x2618
  crclr     6, 0x6
  bl        -0x41A68C
  li        r9, 0
  li        r8, 0x1
  stw       r9, 0x14(r30)
  li        r7, 0x2
  li        r6, 0x3
  li        r5, 0x4
  stw       r8, 0x18(r30)
  li        r4, 0x5
  li        r3, 0x3039
  li        r0, 0x63
  stw       r7, 0x1C(r30)
  stw       r6, 0x20(r30)
  stw       r5, 0x24(r30)
  stw       r4, 0x28(r30)
  stw       r3, 0x2C(r30)
  stw       r8, 0x34(r30)
  stw       r0, 0x38(r30)
  stw       r9, 0x30(r30)

.loc_0x2B4:
  lis       r5, 0x1
  addi      r3, r1, 0x24
  addi      r4, r30, 0x40
  subi      r5, r5, 0x4080
  bl        -0x2F430
  mr        r3, r27
  addi      r4, r1, 0x24
  bl        0xBD4
  mr        r3, r27
  mr        r4, r28
  mr        r5, r30
  li        r6, 0x1
  bl        0x7F4
  mr        r0, r3
  mr        r3, r30
  mr        r30, r0
  bl        -0x420CA4
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x314
  lwz       r3, -0x6514(r13)
  lwz       r5, 0x10(r1)
  lwz       r3, 0x60(r3)
  lwz       r6, 0x14(r1)
  bl        0x1FB0

.loc_0x314:
  lwz       r3, -0x77D4(r13)
  bl        -0x42159C
  cmpw      r31, r3
  beq-      .loc_0x340
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x81F
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A760

.loc_0x340:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x35C
  mr        r3, r27
  li        r4, 0x1
  li        r5, 0
  bl        -0x8EC
  mr        r30, r3

.loc_0x35C:
  mr        r3, r30
  lmw       r27, 0x44C(r1)
  lwz       r0, 0x464(r1)
  mtlr      r0
  addi      r1, r1, 0x460
  blr

}

/*
* --INFO--
* Address:	80444DD8
* Size:	000070

void MemoryCard::Mgr::getPlayerInfo(signed char,
                                       Game::MemoryCard::PlayerInfoHeader*,
                                       bool*)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        .loc_0x70
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  li        r31, 0
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  cmpwi     r30, 0
  blt-      .loc_0x54
  cmpwi     r30, 0x4
  bge-      .loc_0x54
  li        r31, 0x1

.loc_0x54:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

.loc_0x70:

}

/*
* --INFO--
* Address:	80444E48
* Size:	0002B0

void MemoryCard::Mgr::getIndexPlayerInfo(
(signed char, Game::MemoryCard::PlayerInfoHeader*, bool*))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  li        r0, 0
  stmw      r23, 0x4C(r1)
  mr.       r25, r5
  mr        r23, r3
  mr        r24, r4
  mr        r26, r6
  li        r31, -0x1
  li        r29, 0
  li        r28, 0
  stb       r0, 0x14(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x44(r1)
  beq-      .loc_0x78
  mr        r3, r25
  li        r4, 0xCD
  li        r5, 0x40
  bl        -0x43FE08

.loc_0x78:
  li        r30, 0x1
  b         .loc_0x290

.loc_0x80:
  addi      r28, r28, 0x1
  cmplwi    r28, 0x5
  blt-      .loc_0xA8
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x873
  subi      r5, r5, 0x519C
  crclr     6, 0x6
  bl        -0x41A8AC

.loc_0xA8:
  li        r30, 0
  li        r27, 0

.loc_0xB0:
  mr        r3, r23
  mr        r4, r27
  mr        r5, r24
  addi      r6, r1, 0x8
  bl        0xEF4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x19C
  cmpwi     r31, -0x1
  li        r29, 0x1
  bne-      .loc_0x168
  cmplwi    r25, 0
  mr        r31, r27
  beq-      .loc_0x284
  lwz       r0, 0x8(r1)
  stw       r0, 0x0(r25)
  lwz       r0, 0xC(r1)
  stw       r0, 0x4(r25)
  lbz       r0, 0x10(r1)
  stb       r0, 0x8(r25)
  lwz       r3, 0x14(r1)
  lwz       r0, 0x18(r1)
  stw       r3, 0xC(r25)
  stw       r0, 0x10(r25)
  lwz       r3, 0x1C(r1)
  lwz       r0, 0x20(r1)
  stw       r3, 0x14(r25)
  stw       r0, 0x18(r25)
  lwz       r3, 0x24(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0x1C(r25)
  stw       r0, 0x20(r25)
  lwz       r3, 0x2C(r1)
  lwz       r0, 0x30(r1)
  stw       r3, 0x24(r25)
  stw       r0, 0x28(r25)
  lwz       r3, 0x34(r1)
  lwz       r0, 0x38(r1)
  stw       r3, 0x2C(r25)
  stw       r0, 0x30(r25)
  lwz       r3, 0x3C(r1)
  lwz       r0, 0x40(r1)
  stw       r3, 0x34(r25)
  stw       r0, 0x38(r25)
  lwz       r0, 0x44(r1)
  stw       r0, 0x3C(r25)
  b         .loc_0x284

.loc_0x168:
  mr        r3, r23
  mr        r4, r24
  mr        r5, r26
  bl        0x1368
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x18C
  li        r31, -0x1
  li        r30, 0x1
  b         .loc_0x290

.loc_0x18C:
  li        r0, 0x2
  li        r31, -0x1
  stw       r0, 0xD8(r23)
  b         .loc_0x290

.loc_0x19C:
  cmplwi    r25, 0
  beq-      .loc_0x284
  lwz       r3, 0x0(r25)
  subis     r4, r3, 0x506C
  cmplwi    r4, 0x5661
  beq-      .loc_0x284
  lbz       r3, 0x10(r1)
  extsb     r0, r24
  li        r5, 0
  extsb     r3, r3
  cmpw      r3, r0
  bne-      .loc_0x1F8
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0x1DC
  li        r5, 0x1
  b         .loc_0x1F8

.loc_0x1DC:
  cmplwi    r4, 0x496E
  beq-      .loc_0x1F8
  lwz       r3, 0x8(r1)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x496E
  bne-      .loc_0x1F8
  li        r5, 0x1

.loc_0x1F8:
  rlwinm.   r0,r5,0,24,31
  beq-      .loc_0x284
  lwz       r0, 0x8(r1)
  li        r29, 0x1
  stw       r0, 0x0(r25)
  lwz       r0, 0xC(r1)
  stw       r0, 0x4(r25)
  lbz       r0, 0x10(r1)
  stb       r0, 0x8(r25)
  lwz       r3, 0x14(r1)
  lwz       r0, 0x18(r1)
  stw       r3, 0xC(r25)
  stw       r0, 0x10(r25)
  lwz       r3, 0x1C(r1)
  lwz       r0, 0x20(r1)
  stw       r3, 0x14(r25)
  stw       r0, 0x18(r25)
  lwz       r3, 0x24(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0x1C(r25)
  stw       r0, 0x20(r25)
  lwz       r3, 0x2C(r1)
  lwz       r0, 0x30(r1)
  stw       r3, 0x24(r25)
  stw       r0, 0x28(r25)
  lwz       r3, 0x34(r1)
  lwz       r0, 0x38(r1)
  stw       r3, 0x2C(r25)
  stw       r0, 0x30(r25)
  lwz       r3, 0x3C(r1)
  lwz       r0, 0x40(r1)
  stw       r3, 0x34(r25)
  stw       r0, 0x38(r25)
  lwz       r0, 0x44(r1)
  stw       r0, 0x3C(r25)

.loc_0x284:
  addi      r27, r27, 0x1
  cmpwi     r27, 0x4
  blt+      .loc_0xB0

.loc_0x290:
  rlwinm.   r0,r30,0,24,31
  bne+      .loc_0x80
  mr        r3, r31
  lmw       r23, 0x4C(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr

}

/*
* --INFO--
* Address:	804450F8
* Size:	00019C

void MemoryCard::Mgr::commandLoadPlayer(signed char)
{
/*
    stwu     r1, -0x440(r1)
    mflr     r0
    stw      r0, 0x444(r1)
    stw      r31, 0x43c(r1)
    mr       r31, r4
    extsb.   r0, r31
    stw      r30, 0x438(r1)
    mr       r30, r3
    li       r3, 0
    stw      r29, 0x434(r1)
    blt      lbl_80445134
    extsb    r0, r31
    cmpwi    r0, 3
    bge      lbl_80445134
    li       r3, 1

lbl_80445134:
    clrlwi.  r0, r3, 0x18
    bne      lbl_80445158
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x8d8
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80445158:
    mr       r3, r30
    bl       commandLoadGameOption__Q34Game10MemoryCard3MgrFv
    lwz      r0, 0xd8(r30)
    cmpwi    r0, 1
    bne      lbl_80445174
    li       r0, 0
    stw      r0, 0xd8(r30)

lbl_80445174:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi.  r0, r3, 0x18
    bne      lbl_80445258
    mr       r3, r30
    addi     r4, r1, 8
    li       r5, 0
    bl       readCardSerialNo__13MemoryCardMgrFPUxQ213MemoryCardMgr9ECardSlot
    clrlwi.  r0, r3, 0x18
    beq      lbl_80445258
    lis      r3, 0x0000C000@ha
    lwz      r4, 0xcc(r30)
    addi     r3, r3, 0x0000C000@l
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    or.      r29, r3, r3
    bne      lbl_804451E0
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x8f2
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804451E0:
    lwz      r3, sys@sda21(r13)
    lwz      r5, 8(r1)
    lwz      r3, 0x60(r3)
    lwz      r6, 0xc(r1)
    bl       setCardSerialNo__Q34Game14CommonSaveData3MgrFUx
    mr       r3, r30
    mr       r4, r31
    mr       r5, r29
    bl       loadPlayerProc__Q34Game10MemoryCard3MgrFScPUc
    clrlwi.  r0, r3, 0x18
    beq      lbl_80445250
    lis      r5, 0x0000BF80@ha
    addi     r3, r1, 0x10
    addi     r4, r29, 0x40
    addi     r5, r5, 0x0000BF80@l
    bl       __ct__9RamStreamFPvi
    mr       r3, r30
    addi     r4, r1, 0x10
    bl       readPlayer__Q34Game10MemoryCard3MgrFR6Stream
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    stb      r31, 0x20(r3)
    lwz      r0, 0x10(r29)
    stw      r0, 0x18(r3)
    lwz      r0, 0x3c(r29)
    stw      r0, 0x1c(r3)
    lhz      r0, 0xe(r29)
    sth      r0, 0x22(r3)

lbl_80445250:
    mr       r3, r29
    bl       __dl__FPv

lbl_80445258:
    mr       r3, r30
    lwz      r12, 0(r30)
    lwz      r12, 0x28(r12)
    mtctr    r12
    bctrl
    clrlwi   r0, r3, 0x18
    lwz      r31, 0x43c(r1)
    cntlzw   r0, r0
    lwz      r30, 0x438(r1)
    srwi     r3, r0, 5
    lwz      r0, 0x444(r1)
    lwz      r29, 0x434(r1)
    mtlr     r0
    addi     r1, r1, 0x440
    blr

}

/*
* --INFO--
* Address:	80445294
* Size:	00009C

void MemoryCard::Mgr::loadPlayerForNoCard(signed char)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    li       r3, 0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    mr       r31, r4
    extsb.   r0, r31
    blt      lbl_804452C4
    extsb    r0, r31
    cmpwi    r0, 3
    bge      lbl_804452C4
    li       r3, 1

lbl_804452C4:
    clrlwi.  r0, r3, 0x18
    bne      lbl_804452E8
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x94e
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804452E8:
    lwz      r3, sys@sda21(r13)
    extsb    r4, r31
    lwz      r3, 0x60(r3)
    stb      r31, 0x20(r3)
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    bl       resetPlayer__Q34Game14CommonSaveData3MgrFSc
    lwz      r3, playData__4Game@sda21(r13)
    bl       reset__Q24Game8PlayDataFv
    lwz      r3, sys@sda21(r13)
    lwz      r3, 0x60(r3)
    bl       resetCardSerialNo__Q34Game14CommonSaveData3MgrFv
    lwz      r0, 0x14(r1)
    li       r3, 1
    lwz      r31, 0xc(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80445330
* Size:	000178

void MemoryCard::Mgr::loadPlayerProc(signed char, unsigned char*)
{
/*
    stwu     r1, -0x60(r1)
    mflr     r0
    stw      r0, 0x64(r1)
    stw      r31, 0x5c(r1)
    li       r31, 0
    stw      r30, 0x58(r1)
    mr       r30, r3
    li       r3, 0
    stw      r29, 0x54(r1)
    mr       r29, r5
    stw      r28, 0x50(r1)
    mr       r28, r4
    extsb.   r0, r28
    blt      lbl_80445378
    extsb    r0, r28
    cmpwi    r0, 3
    bge      lbl_80445378
    li       r3, 1

lbl_80445378:
    clrlwi.  r0, r3, 0x18
    bne      lbl_8044539C
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x967
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044539C:
    li       r0, 0
    mr       r3, r30
    stb      r0, 0x14(r1)
    mr       r4, r28
    addi     r5, r1, 8
    li       r6, 0
    stw      r0, 0x18(r1)
    stw      r0, 0x1c(r1)
    stw      r0, 0x20(r1)
    stw      r0, 0x24(r1)
    stw      r0, 0x28(r1)
    stw      r0, 0x2c(r1)
    stw      r0, 0x30(r1)
    stw      r0, 0x34(r1)
    stw      r0, 0x38(r1)
    stw      r0, 0x3c(r1)
    stw      r0, 0x40(r1)
    stw      r0, 0x44(r1)
    bl
getIndexPlayerInfo__Q34Game10MemoryCard3MgrFScPQ34Game10MemoryCard16PlayerInfoHeaderPb
    or.      r0, r3, r3
    blt      lbl_8044544C
    cmpwi    r0, 4
    bge      lbl_8044544C
    lis      r3, 0x0000C000@ha
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    addi     r7, r3, 0x0000C000@l
    mr       r3, r30
    mullw    r8, r0, r7
    mr       r6, r29
    li       r4, 0
    addi     r8, r8, 0x6000
    bl       read__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    clrlwi.  r0, r3, 0x18
    mr       r31, r3
    beq      lbl_80445484
    mr       r3, r30
    mr       r4, r29
    bl checkPlayerInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10PlayerInfo
    clrlwi.  r0, r3, 0x18
    bne      lbl_80445484
    li       r0, 2
    li       r31, 0
    stw      r0, 0xd8(r30)
    b        lbl_80445484

lbl_8044544C:
    lwz      r3, 8(r1)
    addis    r0, r3, 0xaf94
    cmplwi   r0, 0x496e
    bne      lbl_80445478
    lwz      r3, sys@sda21(r13)
    extsb    r4, r28
    lwz      r3, 0x60(r3)
    bl       resetPlayer__Q34Game14CommonSaveData3MgrFSc
    lwz      r3, playData__4Game@sda21(r13)
    bl       reset__Q24Game8PlayDataFv
    b        lbl_80445484

lbl_80445478:
    li       r0, 2
    li       r31, 0
    stw      r0, 0xd8(r30)

lbl_80445484:
    lwz      r0, 0x64(r1)
    mr       r3, r31
    lwz      r31, 0x5c(r1)
    lwz      r30, 0x58(r1)
    lwz      r29, 0x54(r1)
    lwz      r28, 0x50(r1)
    mtlr     r0
    addi     r1, r1, 0x60
    blr

}

/*
* --INFO--
* Address:	804454A8
* Size:	000094

void MemoryCard::Mgr::commandDeletePlayer(signed char)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    li       r5, 0
    li       r6, 0
    stw      r0, 0x24(r1)
    stw      r31, 0x1c(r1)
    li       r31, 0
    stw      r30, 0x18(r1)
    mr       r30, r4
    stw      r29, 0x14(r1)
    mr       r29, r3
    bl
getIndexPlayerInfo__Q34Game10MemoryCard3MgrFScPQ34Game10MemoryCard16PlayerInfoHeaderPb
    or.      r4, r3, r3
    blt      lbl_804454FC
    cmpwi    r4, 4
    bge      lbl_804454FC
    mr       r3, r29
    extsb    r5, r30
    bl       writeInvalidPlayerInfo__Q34Game10MemoryCard3MgrFiSc
    mr       r31, r3
    b        lbl_8044551C

lbl_804454FC:
    mr       r3, r29
    mr       r4, r30
    li       r5, 0
    bl       modifyPlayerInfo__Q34Game10MemoryCard3MgrFScPb
    clrlwi.  r0, r3, 0x18
    bne      lbl_8044551C
    li       r0, 2
    stw      r0, 0xd8(r29)

lbl_8044551C:
    lwz      r0, 0x24(r1)
    mr       r3, r31
    lwz      r31, 0x1c(r1)
    lwz      r30, 0x18(r1)
    lwz      r29, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	8044553C
* Size:	00019C

void MemoryCard::Mgr::savePlayerProc(signed char, unsigned char*,
bool)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r30, r4
  li        r4, -0x1
  mr        r29, r3
  extsb.    r0, r30
  mr        r28, r5
  mr        r27, r6
  li        r31, 0
  li        r3, 0
  stb       r4, 0x8(r1)
  blt-      .loc_0x48
  extsb     r0, r30
  cmpwi     r0, 0x3
  bge-      .loc_0x48
  li        r3, 0x1

.loc_0x48:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x6C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x9CA
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41AF64

.loc_0x6C:
  lwz       r7, 0x10(r28)
  mr        r3, r29
  mr        r6, r30
  mr        r8, r27
  addi      r4, r1, 0xC
  addi      r5, r1, 0x8
  bl        0x9E4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  lwz       r0, 0xC(r1)
  cmpwi     r0, 0
  blt-      .loc_0xA4
  cmpwi     r0, 0x4
  blt-      .loc_0xC0

.loc_0xA4:
  li        r0, 0x2
  mr        r3, r29
  stw       r0, 0xD8(r29)
  mr        r4, r30
  li        r5, 0
  bl        0xD30
  b         .loc_0x184

.loc_0xC0:
  mr        r3, r29
  mr        r4, r28
  bl        0x498
  addis     r5, r28, 0x1
  lis       r4, 0x1
  stw       r3, -0x4004(r5)
  subi      r7, r4, 0x4000
  mr        r3, r29
  mr        r6, r28
  lwz       r0, 0xC(r1)
  li        r4, 0
  lwz       r5, -0x7978(r13)
  mullw     r8, r0, r7
  addi      r8, r8, 0x6000
  bl        -0x3B98
  lbz       r4, 0x8(r1)
  mr        r31, r3
  mr        r28, r30
  extsb.    r0, r4
  blt-      .loc_0x120
  extsb     r0, r4
  cmpwi     r0, 0x3
  bge-      .loc_0x120
  mr        r28, r4

.loc_0x120:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x184
  li        r27, 0

.loc_0x12C:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x178
  lwz       r0, 0xC(r1)
  cmpw      r27, r0
  beq-      .loc_0x178
  mr        r3, r29
  mr        r4, r27
  mr        r5, r30
  li        r6, 0
  bl        0x770
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  mr        r3, r29
  mr        r4, r27
  mr        r5, r28
  bl        0x648
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x178
  li        r31, 0

.loc_0x178:
  addi      r27, r27, 0x1
  cmpwi     r27, 0x4
  blt+      .loc_0x12C

.loc_0x184:
  mr        r3, r31
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr

}

/*
* --INFO--
* Address:	804456D8
* Size:	000068

void MemoryCard::Mgr::commandCheckSerialNo(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    lwz      r4, sys@sda21(r13)
    lwz      r4, 0x60(r4)
    lhz      r0, 0x40(r4)
    clrlwi.  r0, r0, 0x1f
    bne      lbl_80445710
    li       r0, 3
    li       r31, 1
    stw      r0, 0xd8(r3)
    b        lbl_80445728

lbl_80445710:
    addi     r4, r4, 0x30
    li       r5, 0
    bl
verifyCardSerialNo__Q34Game10MemoryCard3MgrFPUxQ213MemoryCardMgr9ECardSlot
    clrlwi.  r0, r3, 0x18
    beq      lbl_80445728
    li       r31, 1

lbl_80445728:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80445740
* Size:	0001C8

void MemoryCard::Mgr::commandCopyPlayer(signed char, signed char)
{
/*
    stwu     r1, -0x60(r1)
    mflr     r0
    stw      r0, 0x64(r1)
    stmw     r27, 0x4c(r1)
    mr       r27, r3
    mr       r28, r4
    lis      r3, 0x0000C000@ha
    mr       r29, r5
    li       r5, -32
    addi     r3, r3, 0x0000C000@l
    lwz      r4, 0xcc(r27)
    bl       __nwa__FUlP7JKRHeapi
    or.      r30, r3, r3
    bne      lbl_80445794
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xa5a
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80445794:
    extsb.   r0, r28
    li       r31, 0
    mr       r3, r31
    blt      lbl_804457B4
    extsb    r0, r28
    cmpwi    r0, 3
    bge      lbl_804457B4
    li       r3, 1

lbl_804457B4:
    clrlwi.  r0, r3, 0x18
    bne      lbl_804457D8
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0x967
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804457D8:
    li       r0, 0
    mr       r3, r27
    stb      r0, 0x14(r1)
    mr       r4, r28
    addi     r5, r1, 8
    li       r6, 0
    stw      r0, 0x18(r1)
    stw      r0, 0x1c(r1)
    stw      r0, 0x20(r1)
    stw      r0, 0x24(r1)
    stw      r0, 0x28(r1)
    stw      r0, 0x2c(r1)
    stw      r0, 0x30(r1)
    stw      r0, 0x34(r1)
    stw      r0, 0x38(r1)
    stw      r0, 0x3c(r1)
    stw      r0, 0x40(r1)
    stw      r0, 0x44(r1)
    bl
getIndexPlayerInfo__Q34Game10MemoryCard3MgrFScPQ34Game10MemoryCard16PlayerInfoHeaderPb
    or.      r0, r3, r3
    blt      lbl_80445888
    cmpwi    r0, 4
    bge      lbl_80445888
    lis      r3, 0x0000C000@ha
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    addi     r7, r3, 0x0000C000@l
    mr       r3, r27
    mullw    r8, r0, r7
    mr       r6, r30
    li       r4, 0
    addi     r8, r8, 0x6000
    bl       read__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    clrlwi.  r0, r3, 0x18
    mr       r31, r3
    beq      lbl_804458C0
    mr       r3, r27
    mr       r4, r30
    bl checkPlayerInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10PlayerInfo
    clrlwi.  r0, r3, 0x18
    bne      lbl_804458C0
    li       r0, 2
    li       r31, 0
    stw      r0, 0xd8(r27)
    b        lbl_804458C0

lbl_80445888:
    lwz      r3, 8(r1)
    addis    r0, r3, 0xaf94
    cmplwi   r0, 0x496e
    bne      lbl_804458B4
    lwz      r3, sys@sda21(r13)
    extsb    r4, r28
    lwz      r3, 0x60(r3)
    bl       resetPlayer__Q34Game14CommonSaveData3MgrFSc
    lwz      r3, playData__4Game@sda21(r13)
    bl       reset__Q24Game8PlayDataFv
    b        lbl_804458C0

lbl_804458B4:
    li       r0, 2
    li       r31, 0
    stw      r0, 0xd8(r27)

lbl_804458C0:
    clrlwi.  r0, r31, 0x18
    mr       r28, r31
    beq      lbl_804458E8
    stb      r29, 8(r30)
    mr       r3, r27
    mr       r4, r29
    mr       r5, r30
    li       r6, 0
    bl       savePlayerProc__Q34Game10MemoryCard3MgrFScPUcb
    mr       r28, r3

lbl_804458E8:
    mr       r3, r30
    bl       __dl__FPv
    mr       r3, r28
    lmw      r27, 0x4c(r1)
    lwz      r0, 0x64(r1)
    mtlr     r0
    addi     r1, r1, 0x60
    blr

}

/*
* --INFO--
* Address:	80445908
* Size:	000024

void MemoryCard::Mgr::writePlayer(Stream&)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    lwz      r3, playData__4Game@sda21(r13)
    bl       write__Q24Game8PlayDataFR6Stream
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	8044592C
* Size:	000024

void MemoryCard::Mgr::readPlayer(Stream&)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    lwz      r3, playData__4Game@sda21(r13)
    bl       read__Q24Game8PlayDataFR6Stream
    lwz      r0, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80445950
* Size:	000074

void MemoryCard::Mgr::checkOptionInfo(Game::MemoryCard::OptionInfo*)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    stw      r30, 8(r1)
    mr       r30, r4
    lbz      r0, 0xd0(r3)
    cmplwi   r0, 0
    beq      lbl_804459A8
    bl
testCheckSumOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo
    clrlwi.  r0, r3, 0x18
    beq      lbl_804459A8
    lwz      r3, 0(r30)
    addis    r0, r3, 0xb090
    cmplwi   r0, 0x5661
    bne      lbl_804459A8
    lwz      r3, 4(r30)
    addis    r0, r3, 0xcfd0
    cmplwi   r0, 0x3032
    bne      lbl_804459A8
    li       r31, 1

lbl_804459A8:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	804459C4
* Size:	000024

void MemoryCard::Mgr::calcCheckSumOptionInfo(
(Game::MemoryCard::OptionInfo*))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x1FFC
  stw       r0, 0x14(r1)
  bl        -0x3344
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	804459E8
* Size:	000040

void MemoryCard::Mgr::testCheckSumOptionInfo(
(Game::MemoryCard::OptionInfo*))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x1FFC
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  bl        -0x3370
  lwz       r0, 0x1FFC(r31)
  sub       r0, r3, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80445A28
* Size:	000074

void MemoryCard::Mgr::checkPlayerInfo(Game::MemoryCard::PlayerInfo*)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    li       r31, 0
    stw      r30, 8(r1)
    mr       r30, r4
    lbz      r0, 0xd0(r3)
    cmplwi   r0, 0
    beq      lbl_80445A80
    bl
testCheckSumPlayerInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10PlayerInfo
    clrlwi.  r0, r3, 0x18
    beq      lbl_80445A80
    lwz      r3, 0(r30)
    addis    r0, r3, 0xaf94
    cmplwi   r0, 0x5661
    bne      lbl_80445A80
    lwz      r3, 4(r30)
    addis    r0, r3, 0xcfd0
    cmplwi   r0, 0x3033
    bne      lbl_80445A80
    li       r31, 1

lbl_80445A80:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80445A9C
* Size:	000028

void MemoryCard::Mgr::calcCheckSumPlayerInfo(
(Game::MemoryCard::PlayerInfo*))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x1
  stw       r0, 0x14(r1)
  subi      r5, r5, 0x4004
  bl        -0x3420
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80445AC4
* Size:	000048

void MemoryCard::Mgr::testCheckSumPlayerInfo(
(Game::MemoryCard::PlayerInfo*))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x1
  stw       r0, 0x14(r1)
  subi      r5, r5, 0x4004
  stw       r31, 0xC(r1)
  mr        r31, r4
  bl        -0x3450
  addis     r4, r31, 0x1
  lwz       r0, -0x4004(r4)
  sub       r0, r3, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr

}

/*
* --INFO--
* Address:	80445B0C
* Size:	0000B8

void MemoryCard::Mgr::getCardStatus(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    stw      r30, 8(r1)
    mr       r30, r3
    bl       checkStatus__13MemoryCardMgrFv
    cmplwi   r3, 2
    bne      lbl_80445B9C
    lwz      r0, 0xd8(r30)
    cmpwi    r0, 2
    beq      lbl_80445B6C
    bge      lbl_80445B50
    cmpwi    r0, 0
    beq      lbl_80445B5C
    bge      lbl_80445B64
    b        lbl_80445B7C

lbl_80445B50:
    cmpwi    r0, 4
    bge      lbl_80445B7C
    b        lbl_80445B74

lbl_80445B5C:
    li       r31, 2
    b        lbl_80445BA8

lbl_80445B64:
    li       r31, 0xc
    b        lbl_80445BA8

lbl_80445B6C:
    li       r31, 0xd
    b        lbl_80445BA8

lbl_80445B74:
    li       r31, 0xe
    b        lbl_80445BA8

lbl_80445B7C:
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb10
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce
    b        lbl_80445BA8

lbl_80445B9C:
    mr       r3, r30
    bl       checkStatus__13MemoryCardMgrFv
    mr       r31, r3

lbl_80445BA8:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80445BC4
* Size:	0000B8

void MemoryCard::Mgr::writeInvalidGameOption(void)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    li       r5, -32
    stw      r0, 0x24(r1)
    stmw     r27, 0xc(r1)
    mr       r27, r3
    li       r3, 0x2000
    lwz      r4, 0xcc(r27)
    bl       __nwa__FUlP7JKRHeapi
    or.      r29, r3, r3
    bne      lbl_80445C0C
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb29
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80445C0C:
    lis      r3, 0x4F70496E@ha
    li       r30, 1
    addi     r0, r3, 0x4F70496E@l
    li       r28, 0
    stw      r0, 0(r29)
    li       r31, 0x2000

lbl_80445C24:
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r27
    mr       r6, r29
    mr       r8, r31
    li       r4, 0
    li       r7, 0x2000
    bl       write__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    clrlwi.  r0, r3, 0x18
    bne      lbl_80445C4C
    li       r30, 0

lbl_80445C4C:
    addi     r28, r28, 1
    addi     r31, r31, 0x2000
    cmpwi    r28, 2
    blt      lbl_80445C24
    mr       r3, r29
    bl       __dl__FPv
    mr       r3, r30
    lmw      r27, 0xc(r1)
    lwz      r0, 0x24(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	80445C7C
* Size:	000070

void MemoryCard::Mgr::writeInvalidPlayerInfoAll(void)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    stw      r31, 0x1c(r1)
    li       r31, 1
    stw      r30, 0x18(r1)
    li       r30, 0
    stw      r29, 0x14(r1)
    mr       r29, r3

lbl_80445CA0:
    addi     r0, r30, -1
    mr       r3, r29
    mr       r4, r30
    extsb    r5, r0
    bl       writeInvalidPlayerInfo__Q34Game10MemoryCard3MgrFiSc
    clrlwi.  r0, r3, 0x18
    bne      lbl_80445CC0
    li       r31, 0

lbl_80445CC0:
    addi     r30, r30, 1
    cmpwi    r30, 4
    blt      lbl_80445CA0
    lwz      r0, 0x24(r1)
    mr       r3, r31
    lwz      r31, 0x1c(r1)
    lwz      r30, 0x18(r1)
    lwz      r29, 0x14(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	80445CEC
* Size:	000110

void MemoryCard::Mgr::writeInvalidPlayerInfo(int, signed char)
{
/*
    stwu     r1, -0x20(r1)
    mflr     r0
    stw      r0, 0x24(r1)
    li       r0, 0
    stw      r31, 0x1c(r1)
    stw      r30, 0x18(r1)
    mr       r30, r5
    stw      r29, 0x14(r1)
    or.      r29, r4, r4
    stw      r28, 0x10(r1)
    mr       r28, r3
    blt      lbl_80445D28
    cmpwi    r29, 4
    bge      lbl_80445D28
    li       r0, 1

lbl_80445D28:
    clrlwi.  r0, r0, 0x18
    bne      lbl_80445D4C
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb6a
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80445D4C:
    lwz      r4, 0xcc(r28)
    li       r3, 0x2000
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    or.      r31, r3, r3
    bne      lbl_80445D80
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb6d
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80445D80:
    mr       r3, r31
    li       r4, 0xcd
    li       r5, 0x2000
    bl       memset
    lis      r3, 0x506C496E@ha
    lis      r4, 0x0000C000@ha
    addi     r5, r3, 0x506C496E@l
    mr       r3, r28
    addi     r0, r4, 0x0000C000@l
    stw      r5, 0(r31)
    mullw    r8, r29, r0
    mr       r6, r31
    stb      r30, 8(r31)
    li       r4, 0
    li       r7, 0x2000
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    addi     r8, r8, 0x6000
    bl       write__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    mr       r0, r3
    mr       r3, r31
    mr       r31, r0
    bl       __dl__FPv
    lwz      r0, 0x24(r1)
    mr       r3, r31
    lwz      r31, 0x1c(r1)
    lwz      r30, 0x18(r1)
    lwz      r29, 0x14(r1)
    lwz      r28, 0x10(r1)
    mtlr     r0
    addi     r1, r1, 0x20
    blr

}

/*
* --INFO--
* Address:	80445DFC
* Size:	0001A8

void MemoryCard::Mgr::checkPlayerNoPlayerInfo(
(int, signed char, Game::MemoryCard::PlayerInfoHeader*))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r25, 0x24(r1)
  mr        r26, r4
  mr        r28, r5
  mr        r29, r6
  mr        r25, r3
  addi      r4, r1, 0x8
  li        r31, 0
  li        r5, 0
  lwz       r0, -0x7978(r13)
  mr        r27, r0
  mr        r6, r0
  bl        -0x4A0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  mr        r3, r25
  addi      r5, r1, 0x8
  li        r4, 0
  bl        -0x41AC
  addi      r3, r1, 0x8
  bl        -0x36C3F8

.loc_0x5C:
  lbz       r0, 0xD0(r25)
  cmplwi    r0, 0
  beq-      .loc_0x188
  lwz       r4, 0xCC(r25)
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x421E28
  mr.       r30, r3
  bne-      .loc_0x9C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB9F
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B854

.loc_0x9C:
  lis       r4, 0x1
  mr        r3, r25
  subi      r0, r4, 0x4000
  mr        r5, r27
  mullw     r8, r26, r0
  mr        r6, r30
  li        r4, 0
  li        r7, 0x200
  addi      r8, r8, 0x6000
  bl        -0x4158
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x17C
  cmplwi    r29, 0
  beq-      .loc_0x154
  lwz       r0, 0x0(r30)
  stw       r0, 0x0(r29)
  lwz       r0, 0x4(r30)
  stw       r0, 0x4(r29)
  lbz       r0, 0x8(r30)
  stb       r0, 0x8(r29)
  lwz       r3, 0xC(r30)
  lwz       r0, 0x10(r30)
  stw       r3, 0xC(r29)
  stw       r0, 0x10(r29)
  lwz       r3, 0x14(r30)
  lwz       r0, 0x18(r30)
  stw       r3, 0x14(r29)
  stw       r0, 0x18(r29)
  lwz       r3, 0x1C(r30)
  lwz       r0, 0x20(r30)
  stw       r3, 0x1C(r29)
  stw       r0, 0x20(r29)
  lwz       r3, 0x24(r30)
  lwz       r0, 0x28(r30)
  stw       r3, 0x24(r29)
  stw       r0, 0x28(r29)
  lwz       r3, 0x2C(r30)
  lwz       r0, 0x30(r30)
  stw       r3, 0x2C(r29)
  stw       r0, 0x30(r29)
  lwz       r3, 0x34(r30)
  lwz       r0, 0x38(r30)
  stw       r3, 0x34(r29)
  stw       r0, 0x38(r29)
  lwz       r0, 0x3C(r30)
  stw       r0, 0x3C(r29)

.loc_0x154:
  lbz       r3, 0x8(r30)
  extsb     r0, r28
  extsb     r3, r3
  cmpw      r3, r0
  bne-      .loc_0x17C
  lwz       r3, 0x0(r30)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x17C
  li        r31, 0x1

.loc_0x17C:
  mr        r3, r30
  bl        -0x421EC8
  b         .loc_0x190

.loc_0x188:
  li        r0, -0x1
  stw       r0, 0x0(r29)

.loc_0x190:
  mr        r3, r31
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr

}

/*
* --INFO--
* Address:	........
* Size:	000040

void MemoryCard::Mgr::loadPlayerHeaderProc(int, unsigned char*)
{
// UNUSED FUNCTION
}

/*
* --INFO--
* Address:	80445FA4
* Size:	000380

void MemoryCard::Mgr::getIndexInvalidPlayerInfo(int*, signed char*,
                                                   signed char,
                                                   unsigned long, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  li        r10, -0x1
  lis       r9, 0xCDCE
  stw       r0, 0x84(r1)
  subi      r0, r9, 0x3233
  stmw      r15, 0x3C(r1)
  mr        r25, r3
  mr        r15, r4
  lis       r3, 0x804A
  mr        r26, r5
  stw       r10, 0x24(r1)
  subi      r23, r3, 0x5248
  mr        r27, r6
  stw       r0, 0x14(r1)
  mr        r28, r7
  mr        r29, r8
  addi      r19, r1, 0x24
  stw       r10, 0x28(r1)
  addi      r18, r1, 0x14
  li        r31, 0x1
  li        r30, -0x1
  stw       r0, 0x18(r1)
  li        r3, 0x200
  li        r5, -0x20
  stw       r10, 0x2C(r1)
  stw       r0, 0x1C(r1)
  stw       r10, 0x30(r1)
  stw       r0, 0x20(r1)
  lwz       r4, 0xCC(r25)
  bl        -0x421FD4
  mr.       r17, r3
  bne-      .loc_0x98
  addi      r3, r23, 0x14
  addi      r5, r23, 0x30
  li        r4, 0xBFF
  crclr     6, 0x6
  bl        -0x41B9F8

.loc_0x98:
  mr        r21, r19
  mr        r20, r18
  extsb     r24, r27
  li        r16, 0
  li        r22, 0x6000

.loc_0xAC:
  lwz       r5, -0x7978(r13)
  mr        r3, r25
  mr        r6, r17
  mr        r8, r22
  li        r4, 0
  li        r7, 0x200
  bl        -0x4304
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x170
  lbz       r0, 0x8(r17)
  cmpwi     r30, -0x1
  lwz       r3, 0x0(r17)
  extsb     r4, r0
  stw       r4, 0x0(r21)
  stw       r3, 0x0(r20)
  bne-      .loc_0x10C
  extsb     r0, r27
  cmpw      r4, r0
  bne-      .loc_0x10C
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x10C
  stb       r27, 0x0(r26)
  mr        r30, r16

.loc_0x10C:
  lbz       r0, 0x8(r17)
  extsb     r0, r0
  cmpw      r0, r24
  bne-      .loc_0x178
  lwz       r3, 0x0(r17)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x178
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x178
  lwz       r6, 0x10(r17)
  cmplw     r6, r28
  blt-      .loc_0x178
  cmplwi    r28, 0x1
  beq-      .loc_0x160
  mr        r7, r28
  addi      r3, r23, 0x14
  addi      r5, r23, 0xC4
  li        r4, 0xC4C
  crclr     6, 0x6
  bl        -0x41BAC0

.loc_0x160:
  li        r0, 0x3
  li        r31, 0
  stw       r0, 0xD8(r25)
  b         .loc_0x194

.loc_0x170:
  li        r31, 0
  b         .loc_0x194

.loc_0x178:
  addi      r16, r16, 0x1
  addis     r22, r22, 0x1
  cmpwi     r16, 0x4
  addi      r21, r21, 0x4
  subi      r22, r22, 0x4000
  addi      r20, r20, 0x4
  blt+      .loc_0xAC

.loc_0x194:
  mr        r3, r17
  bl        -0x422088
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x364
  cmpwi     r30, -0x1
  bne-      .loc_0x364
  li        r6, -0x1
  li        r0, 0x4
  mr        r3, r19
  mr        r4, r18
  stw       r6, 0x8(r1)
  li        r5, 0
  stw       r6, 0xC(r1)
  stw       r6, 0x10(r1)
  mtctr     r0

.loc_0x1D0:
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0
  blt-      .loc_0x294
  cmpwi     r0, 0x3
  bge-      .loc_0x294
  rlwinm    r0,r0,2,0,29
  addi      r6, r1, 0x8
  lwzx      r7, r6, r0
  cmpwi     r7, -0x1
  bne-      .loc_0x200
  stwx      r5, r6, r0
  b         .loc_0x294

.loc_0x200:
  lwz       r8, 0x0(r4)
  subis     r0, r8, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x230
  rlwinm    r0,r7,2,0,29
  addi      r6, r1, 0x14
  lwzx      r6, r6, r0
  subis     r0, r6, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x230
  mr        r30, r7
  b         .loc_0x284

.loc_0x230:
  subis     r0, r8, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x25C
  rlwinm    r0,r7,2,0,29
  addi      r6, r1, 0x14
  lwzx      r6, r6, r0
  subis     r0, r6, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x25C
  mr        r30, r5
  b         .loc_0x284

.loc_0x25C:
  subis     r0, r8, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x284
  rlwinm    r0,r7,2,0,29
  addi      r6, r1, 0x14
  lwzx      r6, r6, r0
  subis     r0, r6, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x284
  mr        r30, r5

.loc_0x284:
  cmpwi     r30, -0x1
  beq-      .loc_0x294
  stb       r27, 0x0(r26)
  b         .loc_0x2A4

.loc_0x294:
  addi      r3, r3, 0x4
  addi      r4, r4, 0x4
  addi      r5, r5, 0x1
  bdnz+     .loc_0x1D0

.loc_0x2A4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x364
  cmpwi     r30, -0x1
  bne-      .loc_0x364
  li        r0, 0x2
  li        r4, 0
  mtctr     r0

.loc_0x2C0:
  lwz       r0, 0x0(r19)
  cmpwi     r0, 0
  blt-      .loc_0x2D4
  cmpwi     r0, 0x2
  ble-      .loc_0x2DC

.loc_0x2D4:
  mr        r30, r4
  b         .loc_0x2F8

.loc_0x2DC:
  lwz       r3, 0x0(r18)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x2F8
  cmplwi    r0, 0x496E
  beq-      .loc_0x2F8
  mr        r30, r4

.loc_0x2F8:
  cmpwi     r30, -0x1
  beq-      .loc_0x308
  stb       r27, 0x0(r26)
  b         .loc_0x364

.loc_0x308:
  lwz       r0, 0x4(r19)
  addi      r4, r4, 0x1
  cmpwi     r0, 0
  blt-      .loc_0x320
  cmpwi     r0, 0x2
  ble-      .loc_0x328

.loc_0x320:
  mr        r30, r4
  b         .loc_0x344

.loc_0x328:
  lwz       r3, 0x4(r18)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x344
  cmplwi    r0, 0x496E
  beq-      .loc_0x344
  mr        r30, r4

.loc_0x344:
  cmpwi     r30, -0x1
  beq-      .loc_0x354
  stb       r27, 0x0(r26)
  b         .loc_0x364

.loc_0x354:
  addi      r19, r19, 0x8
  addi      r18, r18, 0x8
  addi      r4, r4, 0x1
  bdnz+     .loc_0x2C0

.loc_0x364:
  stw       r30, 0x0(r15)
  mr        r3, r31
  lmw       r15, 0x3C(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr

}

/*
* --INFO--
* Address:	80446324
* Size:	0004BC

void MemoryCard::Mgr::modifyPlayerInfo(signed char, bool*)
{
/*
    stwu     r1, -0x60(r1)
    mflr     r0
    stw      r0, 0x64(r1)
    stmw     r19, 0x2c(r1)
    or.      r23, r5, r5
    mr       r31, r3
    mr       r26, r4
    beq      lbl_8044634C
    li       r0, 0
    stb      r0, 0(r23)

lbl_8044634C:
    li       r3, 0
    li       r0, -1
    addi     r27, r1, 0xc
    stw      r3, 0x1c(r1)
    mr       r24, r27
    li       r25, 0
    stb      r3, 8(r1)
    li       r22, 0x6000
    lis      r20, 0x0000C000@ha
    stw      r0, 0x10(r1)
    stw      r3, 0x20(r1)
    stb      r3, 9(r1)
    stw      r0, 0x14(r1)
    stw      r3, 0x24(r1)
    stb      r3, 0xa(r1)
    stw      r0, 0x18(r1)
    stb      r3, 0xc(r1)
    stb      r3, 0xd(r1)
    stb      r3, 0xe(r1)
    stb      r3, 0xf(r1)

lbl_8044639C:
    lwz      r4, 0xcc(r31)
    addi     r3, r20, 0x0000C000@l
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    or.      r28, r3, r3
    bne      lbl_804463D0
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xd75
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804463D0:
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    mr       r3, r31
    mr       r6, r28
    mr       r8, r22
    addi     r7, r20, -16384
    li       r4, 0
    bl       read__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    clrlwi.  r0, r3, 0x18
    mr       r29, r3
    beq      lbl_80446538
    lbz      r0, 0xd0(r31)
    li       r19, 0
    mr       r21, r19
    cmplwi   r0, 0
    mr       r30, r19
    beq      lbl_80446438
    lis      r5, 0x0000BFFC@ha
    mr       r3, r31
    mr       r4, r28
    addi     r5, r5, 0x0000BFFC@l
    bl       calcCheckSum__13MemoryCardMgrFPvUl
    addis    r4, r28, 1
    lwz      r0, -0x4004(r4)
    cmplw    r0, r3
    bne      lbl_80446438
    li       r30, 1

lbl_80446438:
    clrlwi.  r0, r30, 0x18
    beq      lbl_80446454
    lwz      r3, 0(r28)
    addis    r0, r3, 0xaf94
    cmplwi   r0, 0x5661
    bne      lbl_80446454
    li       r21, 1

lbl_80446454:
    clrlwi.  r0, r21, 0x18
    beq      lbl_80446470
    lwz      r3, 4(r28)
    addis    r0, r3, 0xcfd0
    cmplwi   r0, 0x3033
    bne      lbl_80446470
    li       r19, 1

lbl_80446470:
    clrlwi.  r0, r19, 0x18
    beq      lbl_804464D8
    lbz      r0, 8(r28)
    addi     r7, r1, 0x1c
    extsb    r0, r0
    slwi     r4, r0, 2
    lwzx     r3, r7, r4
    cmplwi   r3, 0
    beq      lbl_804464A0
    lwz      r0, 0x10(r28)
    cmplw    r0, r3
    ble      lbl_804464CC

lbl_804464A0:
    addi     r6, r1, 0x10
    lwzx     r5, r6, r4
    cmpwi    r5, -1
    beq      lbl_804464BC
    addi     r3, r1, 0xc
    li       r0, 1
    stbx     r0, r3, r5

lbl_804464BC:
    lwz      r0, 0x10(r28)
    stwx     r25, r6, r4
    stwx     r0, r7, r4
    b        lbl_80446538

lbl_804464CC:
    li       r0, 1
    stb      r0, 0(r24)
    b        lbl_80446538

lbl_804464D8:
    lwz      r3, 0(r28)
    addis    r0, r3, 0xaf94
    cmplwi   r0, 0x496e
    bne      lbl_80446530
    lbz      r3, 8(r28)
    extsb.   r0, r3
    blt      lbl_80446530
    extsb    r0, r3
    cmpwi    r0, 3
    bge      lbl_80446530
    addi     r3, r1, 8
    lbzx     r0, r3, r0
    cmplwi   r0, 0
    beq      lbl_80446518
    li       r0, 1
    stb      r0, 0(r24)

lbl_80446518:
    lbz      r0, 8(r28)
    addi     r3, r1, 8
    li       r4, 1
    extsb    r0, r0
    stbx     r4, r3, r0
    b        lbl_80446538

lbl_80446530:
    li       r0, 1
    stb      r0, 0(r24)

lbl_80446538:
    mr       r3, r28
    addi     r5, r20, -16384
    li       r4, 0xcd
    bl       memset
    mr       r3, r28
    bl       __dl__FPv
    clrlwi.  r0, r29, 0x18
    beq      lbl_80446570
    addi     r25, r25, 1
    addis    r22, r22, 1
    cmpwi    r25, 4
    addi     r24, r24, 1
    addi     r22, r22, -16384
    blt      lbl_8044639C

lbl_80446570:
    clrlwi.  r0, r29, 0x18
    beq      lbl_804467C8
    extsb    r25, r26
    addi     r20, r1, 8
    addi     r22, r1, 0x10
    li       r28, 0
    slwi     r24, r25, 2
    li       r30, 0x6000

lbl_80446590:
    lbz      r0, 0(r27)
    cmplwi   r0, 0
    beq      lbl_804467B0
    lbzx     r0, r20, r25
    cmplwi   r0, 0
    bne      lbl_80446674
    lwzx     r0, r22, r24
    cmpwi    r0, -1
    bne      lbl_80446674
    cmpwi    r28, 0
    li       r0, 0
    blt      lbl_804465CC
    cmpwi    r28, 4
    bge      lbl_804465CC
    li       r0, 1

lbl_804465CC:
    clrlwi.  r0, r0, 0x18
    bne      lbl_804465F0
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb6a
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804465F0:
    lwz      r4, 0xcc(r31)
    li       r3, 0x2000
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    or.      r21, r3, r3
    bne      lbl_80446624
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb6d
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80446624:
    mr       r3, r21
    li       r4, 0xcd
    li       r5, 0x2000
    bl       memset
    lis      r4, 0x506C496E@ha
    mr       r3, r31
    addi     r0, r4, 0x506C496E@l
    mr       r6, r21
    stw      r0, 0(r21)
    mr       r8, r30
    li       r4, 0
    li       r7, 0x2000
    stb      r26, 8(r21)
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    bl       write__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    mr       r19, r3
    mr       r3, r21
    bl       __dl__FPv
    mr       r0, r19
    b        lbl_80446790

lbl_80446674:
    lbz      r0, 8(r1)
    mr       r21, r26
    cmplwi   r0, 0
    bne      lbl_80446698
    lwz      r0, 0x10(r1)
    cmpwi    r0, -1
    bne      lbl_80446698
    li       r21, 0
    b        lbl_804466D4

lbl_80446698:
    lbz      r0, 9(r1)
    cmplwi   r0, 0
    bne      lbl_804466B8
    lwz      r0, 0x14(r1)
    cmpwi    r0, -1
    bne      lbl_804466B8
    li       r21, 1
    b        lbl_804466D4

lbl_804466B8:
    lbz      r0, 0xa(r1)
    cmplwi   r0, 0
    bne      lbl_804466D4
    lwz      r0, 0x18(r1)
    cmpwi    r0, -1
    bne      lbl_804466D4
    li       r21, 2

lbl_804466D4:
    cmpwi    r28, 0
    li       r0, 0
    blt      lbl_804466EC
    cmpwi    r28, 4
    bge      lbl_804466EC
    li       r0, 1

lbl_804466EC:
    clrlwi.  r0, r0, 0x18
    bne      lbl_80446710
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb6a
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80446710:
    lwz      r4, 0xcc(r31)
    li       r3, 0x2000
    li       r5, -32
    bl       __nwa__FUlP7JKRHeapi
    or.      r19, r3, r3
    bne      lbl_80446744
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xb6d
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_80446744:
    mr       r3, r19
    li       r4, 0xcd
    li       r5, 0x2000
    bl       memset
    lis      r4, 0x506C496E@ha
    mr       r3, r31
    addi     r0, r4, 0x506C496E@l
    mr       r6, r19
    stw      r0, 0(r19)
    mr       r8, r30
    li       r4, 0
    li       r7, 0x2000
    stb      r21, 8(r19)
    lwz      r5, cFileName__Q24Game10MemoryCard@sda21(r13)
    bl       write__13MemoryCardMgrFQ213MemoryCardMgr9ECardSlotPCcPUcll
    mr       r21, r3
    mr       r3, r19
    bl       __dl__FPv
    mr       r0, r21

lbl_80446790:
    clrlwi.  r0, r0, 0x18
    beq      lbl_804467AC
    cmplwi   r23, 0
    beq      lbl_804467C8
    li       r0, 1
    stb      r0, 0(r23)
    b        lbl_804467C8

lbl_804467AC:
    li       r29, 0

lbl_804467B0:
    addi     r28, r28, 1
    addis    r30, r30, 1
    cmpwi    r28, 4
    addi     r27, r27, 1
    addi     r30, r30, -16384
    blt      lbl_80446590

lbl_804467C8:
    mr       r3, r29
    lmw      r19, 0x2c(r1)
    lwz      r0, 0x64(r1)
    mtlr     r0
    addi     r1, r1, 0x60
    blr

}

/*
* --INFO--
* Address:	804467E0
* Size:	000084

void MemoryCard::Mgr::verifyCardSerialNo(unsigned long long*,
                                            MemoryCardMgr::ECardSlot)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  addi      r4, r1, 0x8
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x4080
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  lwz       r4, 0x8(r1)
  lwz       r0, 0x0(r30)
  lwz       r5, 0xC(r1)
  lwz       r3, 0x4(r30)
  xor       r0, r4, r0
  xor       r3, r5, r3
  or.       r0, r3, r0
  bne-      .loc_0x5C
  li        r31, 0x1
  b         .loc_0x64

.loc_0x5C:
  li        r0, 0x3
  stw       r0, 0xD8(r29)

.loc_0x64:
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr

}

/*
* --INFO--
* Address:	80446864
* Size:	00007C

void MemoryCard::Mgr::resetError(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    mr       r31, r3
    li       r3, 0
    bl       CARDProbe
    cmpwi    r3, 0
    beq      lbl_804468A0
    mr       r3, r31
    bl       cardMount__13MemoryCardMgrFv
    li       r0, 0
    stw      r0, 0xd8(r31)
    mr       r31, r3
    b        lbl_804468A4

lbl_804468A0:
    li       r31, 1

lbl_804468A4:
    clrlwi.  r0, r31, 0x18
    bne      lbl_804468C8
    lis      r3, gStrMemoryCardMgrCpp@ha
    lis      r5, gStrMemoryCardMgrP2Assert@ha
    addi     r3, r3, gStrMemoryCardMgrCpp@l
    li       r4, 0xebd
    addi     r5, r5, gStrMemoryCardMgrP2Assert@l
    crclr    6
    bl       panic_f__12JUTExceptionFPCciPCce

lbl_804468C8:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	804468E0
* Size:	00012C

void MemoryCard::Mgr::doMakeHeader(unsigned char*)
{
/*
    stwu     r1, -0x40(r1)
    mflr     r0
    lis      r5, lbl_8049AE94@ha
    stw      r0, 0x44(r1)
    addi     r5, r5, lbl_8049AE94@l
    stw      r31, 0x3c(r1)
    mr       r31, r4
    li       r4, 0x20
    stw      r30, 0x38(r1)
    mr       r30, r3
    addi     r3, r31, 0x1800
    crclr    6
    bl       snprintf
    bl       OSGetTime
    addi     r5, r1, 0x10
    bl       OSTicksToCalendarTime
    lwz      r0, 0x10(r1)
    lis      r3, lbl_8049AEA0@ha
    addi     r5, r3, lbl_8049AEA0@l
    li       r4, 0x20
    stw      r0, 8(r1)
    addi     r3, r31, 0x1820
    lwz      r6, 0x20(r1)
    lwz      r7, 0x1c(r1)
    lwz      r8, 0x24(r1)
    addi     r6, r6, 1
    lwz      r9, 0x18(r1)
    lwz      r10, 0x14(r1)
    crclr    6
    bl       snprintf
    lwz      r4, 0xdc(r30)
    cmplwi   r4, 0
    beq      lbl_804469B4
    lwz      r0, 0xe0(r30)
    cmplwi   r0, 0
    beq      lbl_804469B4
    mr       r3, r31
    li       r5, 0xe00
    bl       memcpy
    lwz      r4, 0xe0(r30)
    addi     r3, r31, 0xe00
    li       r5, 0x400
    bl       memcpy
    lwz      r4, 0xe0(r30)
    addi     r3, r31, 0x1200
    li       r5, 0x400
    bl       memcpy
    lwz      r4, 0xe0(r30)
    addi     r3, r31, 0x1600
    li       r5, 0x200
    addi     r4, r4, 0x400
    bl       memcpy
    b        lbl_804469F4

lbl_804469B4:
    mr       r3, r31
    li       r4, 0
    li       r5, 0xc00
    bl       memset
    addi     r3, r31, 0xc00
    li       r4, 0xff
    li       r5, 0x200
    bl       memset
    addi     r3, r31, 0xe00
    li       r4, 0
    li       r5, 0x2000
    bl       memset
    addi     r3, r31, 0x2e00
    li       r4, 0xff
    li       r5, 0x200
    bl       memset

lbl_804469F4:
    lwz      r0, 0x44(r1)
    lwz      r31, 0x3c(r1)
    lwz      r30, 0x38(r1)
    mtlr     r0
    addi     r1, r1, 0x40
    blr

}

/*
* --INFO--
* Address:	80446A0C
* Size:	000104

void MemoryCard::Mgr::doSetCardStat(CARDStat*)
{
/*
    li       r3, 0
    li       r0, 0x1800
    stw      r3, 0x30(r4)
    stw      r0, 0x38(r4)
    lbz      r0, 0x2e(r4)
    rlwinm   r0, r0, 0, 0, 0x1d
    ori      r0, r0, 1
    stb      r0, 0x2e(r4)
    lbz      r0, 0x2e(r4)
    rlwinm   r0, r0, 0, 0x1e, 0x1c
    ori      r0, r0, 4
    stb      r0, 0x2e(r4)
    lhz      r0, 0x34(r4)
    rlwinm   r0, r0, 0, 0, 0x1d
    ori      r0, r0, 1
    sth      r0, 0x34(r4)
    lhz      r0, 0x34(r4)
    rlwinm   r0, r0, 0, 0x1e, 0x1b
    ori      r0, r0, 4
    sth      r0, 0x34(r4)
    lhz      r0, 0x34(r4)
    rlwinm   r0, r0, 0, 0x1c, 0x19
    sth      r0, 0x34(r4)
    lhz      r0, 0x34(r4)
    rlwinm   r0, r0, 0, 0x1a, 0x17
    sth      r0, 0x34(r4)
    lhz      r0, 0x34(r4)
    rlwinm   r0, r0, 0, 0x18, 0x15
    sth      r0, 0x34(r4)
    lhz      r0, 0x34(r4)
    rlwinm   r0, r0, 0, 0x16, 0x13
    sth      r0, 0x34(r4)
    lhz      r0, 0x34(r4)
    rlwinm   r0, r0, 0, 0x14, 0x11
    sth      r0, 0x34(r4)
    lhz      r0, 0x34(r4)
    clrlwi   r0, r0, 0x12
    sth      r0, 0x34(r4)
    lhz      r0, 0x36(r4)
    rlwinm   r0, r0, 0, 0, 0x1d
    ori      r0, r0, 3
    sth      r0, 0x36(r4)
    lhz      r0, 0x36(r4)
    rlwinm   r0, r0, 0, 0x1e, 0x1b
    ori      r0, r0, 0xc
    sth      r0, 0x36(r4)
    lhz      r0, 0x36(r4)
    rlwinm   r0, r0, 0, 0x1c, 0x19
    sth      r0, 0x36(r4)
    lhz      r0, 0x36(r4)
    rlwinm   r0, r0, 0, 0x1a, 0x17
    sth      r0, 0x36(r4)
    lhz      r0, 0x36(r4)
    rlwinm   r0, r0, 0, 0x18, 0x15
    sth      r0, 0x36(r4)
    lhz      r0, 0x36(r4)
    rlwinm   r0, r0, 0, 0x16, 0x13
    sth      r0, 0x36(r4)
    lhz      r0, 0x36(r4)
    rlwinm   r0, r0, 0, 0x14, 0x11
    sth      r0, 0x36(r4)
    lhz      r0, 0x36(r4)
    clrlwi   r0, r0, 0x12
    sth      r0, 0x36(r4)
    blr

}

/*
* --INFO--
* Address:	80446B10
* Size:	0000DC

void MemoryCard::Mgr::doCheckCardStat(CARDStat*)
{
/*
    lwz      r0, 0x30(r4)
    cmplwi   r0, 0
    bne      lbl_80446BDC
    lwz      r0, 0x38(r4)
    cmplwi   r0, 0x1800
    bne      lbl_80446BDC
    lbz      r3, 0x2e(r4)
    clrlwi   r0, r3, 0x1e
    cmpwi    r0, 1
    bne      lbl_80446BDC
    rlwinm   r0, r3, 0, 0x1d, 0x1d
    cmpwi    r0, 4
    bne      lbl_80446BDC
    lhz      r3, 0x34(r4)
    clrlwi   r0, r3, 0x1e
    cmpwi    r0, 1
    bne      lbl_80446BDC
    rlwinm   r0, r3, 0x1e, 0x1e, 0x1f
    cmpwi    r0, 1
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x1c, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x1a, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x18, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x16, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x14, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x12, 0x1e, 0x1f
    bne      lbl_80446BDC
    lhz      r3, 0x36(r4)
    clrlwi   r0, r3, 0x1e
    cmpwi    r0, 3
    bne      lbl_80446BDC
    rlwinm   r0, r3, 0x1e, 0x1e, 0x1f
    cmpwi    r0, 3
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x1c, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x1a, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x18, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x16, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x14, 0x1e, 0x1f
    bne      lbl_80446BDC
    rlwinm.  r0, r3, 0x12, 0x1e, 0x1f
    beq      lbl_80446BE4

lbl_80446BDC:
    li       r3, 0
    blr

lbl_80446BE4:
    li       r3, 1
    blr

}

/*
* --INFO--
* Address:	80446BEC
* Size:	000008

u32 MemoryCard::MgrCommandGetPlayerHeader::getClassSize(void)
{
    return 0xC;
}

/*
* --INFO--
* Address:	80446BF4
* Size:	000008

u32 MemoryCard::MgrCommandCopyPlayer::getClassSize(void)
{
    return 0xC;
}

/*
* --INFO--
* Address:	80446BFC
* Size:	000008

u32 MemoryCard::MgrCommandPlayerNo::getClassSize(void)
{
    return 0xC;
}

/*
* --INFO--
* Address:	80446C04
* Size:	00005C

MemoryCard::Mgr::~Mgr(void)
{
/*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    or.      r31, r3, r3
    beq      lbl_80446C48
    lis      r3, __vt__Q34Game10MemoryCard3Mgr@ha
    addi     r0, r3, __vt__Q34Game10MemoryCard3Mgr@l
    stw      r0, 0(r31)
    beq      lbl_80446C38
    lis      r3, __vt__13MemoryCardMgr@ha
    addi     r0, r3, __vt__13MemoryCardMgr@l
    stw      r0, 0(r31)

lbl_80446C38:
    extsh.   r0, r4
    ble      lbl_80446C48
    mr       r3, r31
    bl       __dl__FPv

lbl_80446C48:
    lwz      r0, 0x14(r1)
    mr       r3, r31
    lwz      r31, 0xc(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
* --INFO--
* Address:	80446C60
* Size:	000008

u32 MemoryCard::Mgr::getHeaderSize(void)
{
    return 0x2000;
}
*/
} // Game
