#include "Game/Entities/Item.h"
#include "System.h"
#include "nans.h"

namespace Game {

static const int someArray[3] = { 0, 0, 0 };
static const char fileName[]  = "registItem";

template <typename T, typename T2>
inline void GenerateMgr(T2& mgr, char* name)
{
	sys->heapStatusStart(name, nullptr);
	mgr = new T();
	mgr->loadResources();
	itemMgr->addMgr(mgr);
	sys->heapStatusEnd(name);
}

/**
 * @note Address: 0x801E4B98
 * @note Size: 0x664
 */
void ItemMgr::createManagers(u32 flags)
{
	bool inCave      = (flags >> 1) & 1;
	bool isExitFloor = flags & 1;

	GenerateMgr<ItemBarrel::Mgr>(ItemBarrel::mgr, "-Barrel-");
	GenerateMgr<ItemUjamushi::Mgr>(ItemUjamushi::mgr, "-Ujamushi-");

	sys->heapStatusStart("-Weed-", nullptr);
	if (inCave) {
		ItemWeed::mgr = new ItemWeed::Mgr;
		ItemWeed::mgr->loadResources();
		itemMgr->addMgr(ItemWeed::mgr);
	} else {
		ItemWeed::mgr = nullptr;
	}
	sys->heapStatusEnd("-Weed-");

	GenerateMgr<ItemDownFloor::Mgr>(ItemDownFloor::mgr, "-DownFloor-");
	GenerateMgr<ItemTreasure::Mgr>(ItemTreasure::mgr, "-Treasure-");
	GenerateMgr<ItemPikihead::Mgr>(ItemPikihead::mgr, "-PikiHead-");

	sys->heapStatusStart("-Plant-", nullptr);
	if (inCave) {
		ItemPlant::mgr = new ItemPlant::Mgr;
		ItemPlant::mgr->loadResources();
		itemMgr->addMgr(ItemPlant::mgr);
	} else {
		ItemPlant::mgr = nullptr;
	}
	sys->heapStatusEnd("-Plant-");

	sys->heapStatusStart("-Rock-", nullptr);
	if (inCave) {
		ItemRock::mgr = new ItemRock::Mgr;
		ItemRock::mgr->loadResources();
		itemMgr->addMgr(ItemRock::mgr);
	} else {
		ItemRock::mgr = nullptr;
	}
	sys->heapStatusEnd("-Rock-");

	GenerateMgr<ItemHoney::Mgr>(ItemHoney::mgr, "-Honey-");

	// Had to be custom
	sys->heapStatusStart("-Onyon-", nullptr);
	ItemOnyon::mgr = new ItemOnyon::Mgr;
	itemMgr->addMgr(ItemOnyon::mgr);
	ItemOnyon::mgr->init();
	sys->heapStatusEnd("-Onyon-");

	sys->heapStatusStart("-Hole-", nullptr);
	if (isExitFloor) {
		ItemHole::mgr = new ItemHole::Mgr;
		ItemHole::mgr->loadResources();
		itemMgr->addMgr(ItemHole::mgr);
	} else {
		ItemHole::mgr = nullptr;
	}
	sys->heapStatusEnd("-Hole-");

	sys->heapStatusStart("-Cave-", nullptr);
	if (inCave) {
		ItemCave::mgr = new ItemCave::Mgr;
		ItemCave::mgr->loadResources();
		itemMgr->addMgr(ItemCave::mgr);
	} else {
		ItemCave::mgr = nullptr;
	}
	sys->heapStatusEnd("-Cave-");

	sys->heapStatusStart("-BigFountain-", nullptr);
	if (isExitFloor) {
		ItemBigFountain::mgr = new ItemBigFountain::Mgr;
		ItemBigFountain::mgr->loadResources();
		itemMgr->addMgr(ItemBigFountain::mgr);
	} else {
		ItemBigFountain::mgr = nullptr;
	}
	sys->heapStatusEnd("-BigFountain-");

	sys->heapStatusStart("-Bridge-", nullptr);
	if (inCave) {
		ItemBridge::mgr = new ItemBridge::Mgr;
		ItemBridge::mgr->loadResources();
		itemMgr->addMgr(ItemBridge::mgr);
	} else {
		ItemBridge::mgr = nullptr;
	}
	sys->heapStatusEnd("-Bridge-");

	sys->heapStatusStart("-Gate-", nullptr);
	itemGateMgr = new ItemGateMgr();
	itemMgr->addMgr(itemGateMgr);
	sys->heapStatusEnd("-Gate-");

	sys->heapStatusStart("-DengekiGate-", nullptr);
	if (inCave) {
		ItemDengekiGate::mgr = new ItemDengekiGate::Mgr;
		itemMgr->addMgr(ItemDengekiGate::mgr);
	} else {
		ItemDengekiGate::mgr = nullptr;
	}
	sys->heapStatusEnd("-DengekiGate-");
}

/**
 * @note Address: 0x801E51FC
 * @note Size: 0x48
 */
void ItemMgr::clearGlobalPointers()
{
	ItemBarrel::mgr      = nullptr;
	ItemUjamushi::mgr    = nullptr;
	ItemWeed::mgr        = nullptr;
	ItemDownFloor::mgr   = nullptr;
	ItemTreasure::mgr    = nullptr;
	ItemPikihead::mgr    = nullptr;
	ItemPlant::mgr       = nullptr;
	ItemRock::mgr        = nullptr;
	ItemHoney::mgr       = nullptr;
	ItemOnyon::mgr       = nullptr;
	ItemHole::mgr        = nullptr;
	ItemCave::mgr        = nullptr;
	ItemBigFountain::mgr = nullptr;
	ItemBridge::mgr      = nullptr;
	itemGateMgr          = nullptr;
	ItemDengekiGate::mgr = nullptr;
}

/**
 * @note Address: 0x801E5244
 * @note Size: 0xE8
 */
void ItemMgr::killAllExceptOnyonMgr()
{
	if (ItemPlant::mgr) {
		ItemPlant::mgr->killAll();
		if (gameSystem) {
			gameSystem->detachObjectMgr(ItemPlant::mgr);
			itemMgr->delNode(ItemPlant::mgr);
		}
		ItemPlant::mgr = nullptr;
	}

	if (ItemRock::mgr) {
		ItemRock::mgr->killAll();
		if (gameSystem) {
			gameSystem->detachObjectMgr(ItemRock::mgr);
			itemMgr->delNode(ItemRock::mgr);
		}
		ItemRock::mgr = nullptr;
	}

	if (ItemHoney::mgr) {
		ItemHoney::mgr->killAll();
		if (gameSystem) {
			gameSystem->detachObjectMgr(ItemHoney::mgr);
			itemMgr->delNode(ItemHoney::mgr);
		}
		ItemHoney::mgr = nullptr;
	}
}

} // namespace Game
