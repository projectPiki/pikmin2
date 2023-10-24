#include "Game/mapParts.h"
#include "types.h"
#include "Vector3.h"
#include "Game/Entities/Item.h"
#include "Game/EnemyBase.h"
#include "Game/CurrTriInfo.h"
#include "Game/gamePlayData.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Cave/Node.h"
#include "nans.h"

namespace Game {

static const int unusedArray[] = { 0, 0, 0 };
static const char unusedName[] = "gameMapParts";

int RoomMapMgr::numRoomCulled            = 0;
bool RoomMapMgr::mUseCylinderViewCulling = false;

/*
 * --INFO--
 * Address:	801B6468
 * Size:	000024
 */
Door* MapUnitInterface::getDoor(int idx) { return (Door*)mDoor.getChildAt(idx); }

/*
 * --INFO--
 * Address:	801B648C
 * Size:	00001C
 */
void MapUnitInterface::getCellSize(int& x, int& y)
{
	x = mMapUnit->mCellSize.x;
	y = mMapUnit->mCellSize.y;
}

/*
 * --INFO--
 * Address:	801B64A8
 * Size:	000024
 */
DoorLink* Door::getLink(int idx) { return static_cast<DoorLink*>(mRootLink.getChildAt(idx)); }

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void DoorLink::write(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(mDistance);
	stream.writeInt(mDoorID);
	stream.writeInt(mTekiFlags);
	stream.textWriteText("\t# dist/door-id/tekiflag\r\n");
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void DoorLink::read(Stream& stream)
{
	mDistance  = stream.readFloat();
	mDoorID    = stream.readInt();
	int v0     = stream.readInt();
	mTekiFlags = v0 != 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void Door::write(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeInt(mIndex);
	stream.textWriteText("\t# index\r\n");

	stream.textWriteTab(stream.mTabCount);
	stream.writeInt(mDir);
	stream.writeInt(mOffs);
	stream.writeInt(mWpIndex);
	stream.textWriteText("\t# dir/offs/wpindex\r\n");

	stream.textWriteTab(stream.mTabCount);
	FOREACH_NODE(DoorLink, mRootLink.mChild, link) { link->write(stream); }
	stream.textWriteText("\t# door links\r\n");
}

/*
 * --INFO--
 * Address:	801B64CC
 * Size:	000104
 */
void Door::read(Stream& stream)
{
	mIndex     = stream.readInt();
	mDir       = stream.readInt();
	mOffs      = stream.readInt();
	mWpIndex   = stream.readInt();
	mLinkCount = stream.readInt();
	for (int i = 0; i < mLinkCount; i++) {
		DoorLink* link = new Game::DoorLink();
		link->read(stream);

		mRootLink.add(link);
	}
}

/*
 * --INFO--
 * Address:	801B65D0
 * Size:	0000AC
 */
MapUnit::MapUnit()
{
	mModelData   = nullptr;
	_04          = -1;
	_A8          = 0;
	mCellSize.y  = 0;
	mCellSize.x  = 0;
	mTexture     = nullptr;
	mImgResource = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void MapUnit::setupSizeInfo()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void MapUnit::save(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeShort(mCellSize.x);
	stream.writeShort(mCellSize.y);
	stream.textWriteText("\t# dX/dZ ; cell size\r\n");
}

/*
 * --INFO--
 * Address:	801B66AC
 * Size:	00004C
 */
void MapUnit::load(Stream& stream)
{
	mCellSize.x = stream.readShort();
	mCellSize.y = stream.readShort();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
MapUnitMgr::MapUnitMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6918
 * Size:	000088
 */
MapUnit* MapUnitMgr::getAt(int idx)
{
	TObjectNode<MapUnit>* node = static_cast<TObjectNode<MapUnit>*>(mNode.mChild);
	for (int i = 0; i < idx; i++) {
		node = node->getNext();
	}

	if (node) {
		return node->mContents;
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00020C
 */
void MapUnitMgr::findMapUnit(char* filePath)
{
	JUT_PANICLINE(500, "‚à‚¤Žg‚í‚È‚¢\n");
	JUT_PANICLINE(501, "%s : not found !\n", filePath);
	// UNUSED FUNCTION
}
/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void MapUnitMgr::testConstruct()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void MapUnitMgr::loadShape(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B69EC
 * Size:	000440
 * TODO
 */
void MapUnitMgr::makeUnit(Game::MapUnit* unit, char* folder)
{
	char path[512];

	sprintf(path, "%s/arc.szs", folder);
	JKRArchive* archive = JKRArchive::mount(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(651, archive);

	void* viewModelData = archive->getResource("view.bmd");
	P2ASSERTLINE(657, viewModelData);

	unit->mModelData = J3DModelLoaderDataBase::load(viewModelData,
	                                                0x20000000); // 0x20000000 is some flag
	unit->mModelData->newSharedDisplayList(0x40000);
	unit->mModelData->makeSharedDL();

	void* textureData = archive->getResource("texture.bti");
	if (textureData) {
		unit->mImgResource = static_cast<ResTIMG*>(textureData);
		unit->mTexture     = nullptr;
	}

	SysShape::Model::enableMaterialAnim(unit->mModelData, 0);

	int foundFiles        = 0;
	unit->mAnimationCount = 0;
	for (int i = 0; i < 100; ++i) {
		// Construct the filename
		sprintf(path, "%s_%d.btk", folder, i + 1);

		int pathLen   = strlen(path);
		char* strIter = &path[pathLen];

		while (pathLen > 0) {
			// Backtrack to the last instance of '/'
			if (*strIter == '/') {
				strIter++;
				break;
			}
			strIter--;
			pathLen--;
		}

		if (!archive->getResource(strIter)) {
			break;
		}

		foundFiles++;
	}

	if (foundFiles > 0) {
		unit->mAnimationCount = foundFiles;
		unit->mAnimations     = new Sys::MatTexAnimation[foundFiles];

		for (int i = 0; i < foundFiles; i++) {
			sprintf(path, "%s_%d.btk", folder, i + 1);
			int pathLength      = strlen(path);
			char* animationName = &path[pathLength];

			while (pathLength > 0) {
				if (*animationName == '/') {
					animationName++;
					break;
				}
				animationName--;
				pathLength--;
			}

			unit->mAnimations[i].attachResource(archive->getResource(animationName), unit->mModelData);
		}
	}

	// Load collision data
	sprintf(path, "%s/texts.szs", folder);
	archive = JKRArchive::mount(path, JKRArchive::EMM_Mem, JKRHeap::sCurrentHeap, JKRArchive::EMD_Tail);
	P2ASSERTLINE(777, archive);

	void* gridResource = archive->getResource("grid.bin");
	if (gridResource) {
		RamStream stream(gridResource, -1);
		unit->mCollision.read(stream);
		delete[] gridResource;

		unit->mCollision.getBoundBox(unit->mBoundingBox);
		unit->_A8 = 1;
	} else {
		unit->_A8 = 0;
	}

	// Load map code data
	void* mapCodeResource = archive->getResource("mapcode.bin");
	if (mapCodeResource) {
		MapCode::Mgr* mgr = new MapCode::Mgr();

		RamStream stream(mapCodeResource, -1);
		mgr->read(stream);
		mgr->attachCodes(unit->mCollision.mDivider->mTriangleTable);
	}

	// Load sea data
	void* waterBoxResource = archive->getResource("waterbox.txt");
	if (waterBoxResource) {
		RamStream stream(waterBoxResource, -1);
		stream.resetPosition(true, 1);
		unit->mSeaMgr.read(stream);
	}

	// Load route data
	void* routeResource = archive->getResource("route.txt");
	if (routeResource) {
		RamStream stream(routeResource, -1);
		stream.resetPosition(true, 1);
		unit->mRouteMgr.read(stream);
	}

	archive->unmount();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void MapUnitMgr::load(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6E2C
 * Size:	0000DC
 */
MapRoom::MapRoom()
{
	_188   = 0;
	_189   = 0;
	mModel = nullptr;
	mUnit  = nullptr;
	PSMTXIdentity(_0D8.mMatrix.mtxView);
	_184       = -1;
	mLink      = nullptr;
	mWpIndices = nullptr;
	_0BC       = 0;
	mInterface = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void MapRoom::countItems()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void MapRoom::countEnemys()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6F10
 * Size:	0007B8
 */
void MapRoom::placeObjects(Cave::FloorInfo* floorInfo, bool b)
{
	if (!mObjectLayoutInfo) {
		return;
	}
	for (int nodeType = 0; nodeType < 8; nodeType++) {
		for (int nodeIdx = 0; nodeIdx < mObjectLayoutInfo->getCount(nodeType); nodeIdx++) {
			ObjectLayoutNode* node = static_cast<ObjectLayoutNode*>(mObjectLayoutInfo->getNode(nodeType, nodeIdx));
			for (int subIdx = 0; subIdx < node->getBirthCount(); subIdx++) {
				switch (nodeType) {
				case OBJLAYOUT_Hole: {
					ItemHole::Item* hole = static_cast<ItemHole::Item*>(ItemHole::mgr->birth());
					Vector3f birthPos;
					node->getBirthPosition(birthPos.x, birthPos.z);
					birthPos.y = 0.0f;
					CurrTriInfo triInfo;
					triInfo.mPosition = birthPos;
					f32 minY          = 0.0f;
					if (mapMgr) {
						triInfo._0C = 0;
						mapMgr->getCurrTri(triInfo);
						minY = triInfo.mMinY;
					}
					birthPos.y = minY;
					if (gameSystem->isChallengeMode()) {
						ItemHole::InitArg holeArg;
						holeArg.mInitialState = ItemHole::Hole_Close;
						hole->init(&holeArg);
					} else {
						hole->init(nullptr);
					}
					hole->mFaceDir = node->getDirection();
					hole->setPosition(birthPos, false);
					if (floorInfo->useKaidanBarrel()) {
						ItemBarrel::Item* barrel = static_cast<ItemBarrel::Item*>(ItemBarrel::mgr->birth());
						barrel->init(nullptr);
						barrel->setPosition(birthPos, false);
					}
					break;
				}
				case OBJLAYOUT_Pod: {
					if (gameSystem->isVersusMode()) {
						break;
					}
					Onyon* pod = ItemOnyon::mgr->birth(ONYON_OBJECT_POD, 0);
					Vector3f birthPos;
					node->getBirthPosition(birthPos.x, birthPos.z);
					birthPos.y = 0.0f;
					pod->init(nullptr);
					pod->mFaceDir = node->getDirection();
					pod->setPosition(birthPos, false);
					break;
				}
				case OBJLAYOUT_VsBlueOnyon: {
					Onyon* pod = ItemOnyon::mgr->birth(ONYON_OBJECT_ONYON, ONYON_TYPE_BLUE);
					Vector3f birthPos;
					node->getBirthPosition(birthPos.x, birthPos.z);
					birthPos.y = 0.0f;
					pod->init(nullptr);
					pod->mFaceDir = node->getDirection();
					pod->setPosition(birthPos, false);
					break;
				}
				case OBJLAYOUT_VsRedOnyon: {
					Onyon* pod = ItemOnyon::mgr->birth(ONYON_OBJECT_ONYON, ONYON_TYPE_RED);
					Vector3f birthPos;
					node->getBirthPosition(birthPos.x, birthPos.z);
					birthPos.y = 0.0f;
					pod->init(nullptr);
					pod->mFaceDir = node->getDirection();
					pod->setPosition(birthPos, false);
					break;
				}
				case OBJLAYOUT_Fountain: {
					ItemBigFountain::Item* fountain = static_cast<ItemBigFountain::Item*>(ItemBigFountain::mgr->birth());
					Vector3f birthPos;
					node->getBirthPosition(birthPos.x, birthPos.z);
					birthPos.y = 0.0f;
					if (gameSystem->isChallengeMode()) {
						ItemBigFountain::InitArg fountainArg;
						fountainArg.mInitState = 3; // Close state (lack of an enum)
						fountain->init(&fountainArg);
					} else {
						fountain->init(nullptr);
					}
					fountain->mFaceDir = node->getDirection();
					fountain->setPosition(birthPos, false);
					break;
				}
				case OBJLAYOUT_Enemy: {
					Vector3f birthPos;
					birthPos.y = 0.0f;
					node->getBirthPosition(birthPos.x, birthPos.z);
					birthPos.y = mapMgr->getMinY(birthPos);
					EnemyBirthArg birthArg;
					birthArg.mFaceDir  = node->getDirection();
					birthArg.mPosition = birthPos;

					birthArg.mOtakaraItemCode = node->getExtraCode();
					birthArg.mTekiBirthType   = (EnemyTypeID::EEnemyTypeID)node->getObjectType();
					node->isFixedBattery();

					bool canSpawnTeki                   = true;
					bool isWaterwraith                  = false;
					EnemyTypeID::EEnemyTypeID enemyType = (EnemyTypeID::EEnemyTypeID)node->getObjectId();
					if (enemyType == EnemyTypeID::EnemyID_BlackMan) {
						if (playData->mCaveSaveData.mIsWaterwraithAlive) {
							isWaterwraith = true;
						} else {
							canSpawnTeki = false;
						}
					}

					if (canSpawnTeki) {
						EnemyBase* enemy = generalEnemyMgr->birth(node->getObjectId(), birthArg);
						if (enemy) {
							enemy->init(nullptr);
						}
						if (isWaterwraith) {
							BlackMan::Obj* waterwraith = static_cast<BlackMan::Obj*>(enemy);
							waterwraith->setTimer(floorInfo->mParms.mWaterwraithTimer);
							static_cast<RoomMapMgr*>(mapMgr)->mBlackMan = waterwraith;
						}
					}
					break;
				}
				case OBJLAYOUT_Item: {
					PelletIndexInitArg pelletIndex(node->getObjectId());
					Pellet* pellet = pelletMgr->birth(&pelletIndex);
					if (!pellet) {
						break;
					}
					Vector3f birthPos;
					node->getBirthPosition(birthPos.x, birthPos.z);
					if (mapMgr) {
						birthPos.y = mapMgr->getMinY(birthPos);
						birthPos.y += 0.5f * pellet->getCylinderHeight();
					} else {
						birthPos.y = 0.0f;
					}
					pellet->setPosition(birthPos, false);
					Vector3f rotation;
					rotation.y = node->getDirection();
					rotation.x = 0.0f;
					rotation.z = 0.0f;
					Matrixf pelletRot;
					pelletRot.makeTR(Vector3f::zero, rotation);
					node->getDirection();
					pellet->setOrientation(pelletRot);
					pellet->allocateTexCaster();
					break;
				}
				case OBJLAYOUT_Gate: {
					int doorIdx = node->getBirthDoorIndex();
					if (doorIdx == -1) {
						break;
					}
					RoomDoorInfo* doorinfo = &mDoorInfos[doorIdx];
					Vector3f birthPos      = Vector3f(doorinfo->mWaypoint->mPosition);
					f32 dir                = JMath::atanTable_.atan2_(doorinfo->mLookAtPos.x, doorinfo->mLookAtPos.z);
					ItemGateInitArg gateArg;
					gateArg.mFaceDir = dir;

					ItemGate* gate = static_cast<ItemGate*>(itemGateMgr->birth());
					gate->init(&gateArg);
					f32 health                  = static_cast<Cave::GateNode*>(node)->mUnit->mInfo->mLife;
					gate->mMaxSegmentHealth     = health;
					gate->mCurrentSegmentHealth = health;
					gate->setPosition(birthPos, false);
					break;
				}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void MapRoom::getCenterPosition(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void MapRoom::create(Game::MapUnit*, Matrixf&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
RoomDoorInfo* MapRoom::createDoorInfo(Game::MapUnitInterface*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B76E4
 * Size:	000004
 */
RoomDoorInfo::RoomDoorInfo() { }

/*
 * --INFO--
 * Address:	801B76E8
 * Size:	0000D4
 */
void MapRoom::doAnimation()
{
	if (RoomMapMgr::mUseCylinderViewCulling) {
		Graphics* gfx  = sys->mGfx;
		bool isVisible = false;
		for (int i = 0; i < gfx->mActiveViewports; i++) {
			Viewport* vp = gfx->getViewport(i);
			if (vp->viewable() && vp->mCamera->isCylinderVisible(_160)) {
				isVisible = true;
				break;
			}
		}
		if (!isVisible) {
			RoomMapMgr::numRoomCulled++;
		}
	} else if (!mModel->isVisible(mBoundingSphere)) {
		RoomMapMgr::numRoomCulled++;
	}
}

/*
 * --INFO--
 * Address:	801B77BC
 * Size:	0001F4
 */
void MapRoom::doEntry()
{
	if (RoomMapMgr::mUseCylinderViewCulling) {
		Graphics* gfx  = sys->mGfx;
		bool isVisible = false;
		for (int i = 0; i < gfx->mActiveViewports; i++) {
			Viewport* vp = gfx->getViewport(i);
			if (vp->viewable() && vp->mCamera->isCylinderVisible(_160)) {
				isVisible = true;
				break;
			}
		}
		if (isVisible) {
			mModel->mJ3dModel->entry();
		}
	} else {
		bool isVisible = false;
		Graphics* gfx  = sys->mGfx;

		for (int i = 0; i < gfx->mActiveViewports; i++) {
			Viewport* vp = gfx->getViewport(i);
			if (vp->viewable() && vp->mCamera->isVisible(_150)) {
				isVisible = true;
				break;
			}
		}
		if (isVisible) {
			if (!gameSystem->paused()) {
				for (int i = 0; i < _0C8; i++) {
					mAnimators[i].animate(30.0f);
				}
			}

			mModel->show();
		} else {
			if (BaseHIOParms::sEntryOptMapRoom && !gameSystem->isMultiplayerMode()) {
				return;
			}
			mModel->hide();
		}

		mModel->mJ3dModel->entry();
	}

	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->diff();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	lbz      r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801B785C
	lwz      r3, sys@sda21(r13)
	li       r28, 0
	li       r27, 0
	lwz      r29, 0x24(r3)
	b        lbl_801B782C

lbl_801B77F0:
	mr       r3, r29
	mr       r4, r27
	bl       getViewport__8GraphicsFi
	mr       r30, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7828
	lwz      r3, 0x44(r30)
	addi     r4, r31, 0x160
	bl       isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7828
	li       r28, 1
	b        lbl_801B7838

lbl_801B7828:
	addi     r27, r27, 1

lbl_801B782C:
	lwz      r0, 0x264(r29)
	cmpw     r27, r0
	blt      lbl_801B77F0

lbl_801B7838:
	clrlwi.  r0, r28, 0x18
	beq      lbl_801B7978
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7978

lbl_801B785C:
	lwz      r3, sys@sda21(r13)
	li       r27, 0
	li       r28, 0
	lwz      r29, 0x24(r3)
	b        lbl_801B78AC

lbl_801B7870:
	mr       r3, r29
	mr       r4, r28
	bl       getViewport__8GraphicsFi
	mr       r30, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B78A8
	lwz      r3, 0x44(r30)
	addi     r4, r31, 0x150
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B78A8
	li       r27, 1
	b        lbl_801B78B8

lbl_801B78A8:
	addi     r28, r28, 1

lbl_801B78AC:
	lwz      r0, 0x264(r29)
	cmpw     r28, r0
	blt      lbl_801B7870

lbl_801B78B8:
	clrlwi.  r0, r27, 0x18
	beq      lbl_801B7918
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B7900
	li       r27, 0
	li       r29, 0
	b        lbl_801B78F4

lbl_801B78DC:
	lwz      r0, 0xcc(r31)
	lfs      f1, lbl_80519460@sda21(r2)
	add      r3, r0, r29
	bl       animate__Q23Sys15MatBaseAnimatorFf
	addi     r29, r29, 0xc
	addi     r27, r27, 1

lbl_801B78F4:
	lwz      r0, 0xc8(r31)
	cmpw     r27, r0
	blt      lbl_801B78DC

lbl_801B7900:
	lwz      r3, 0x13c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7960

lbl_801B7918:
	lbz      r0, sEntryOptMapRoom__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801B794C
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_801B7940
	cmpwi    r0, 3
	bne      lbl_801B7944

lbl_801B7940:
	li       r3, 1

lbl_801B7944:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B799C

lbl_801B794C:
	lwz      r3, 0x13c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_801B7960:
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801B7978:
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x13c(r31)
	lwz      r3, 8(r3)
	bl       diff__8J3DModelFv

lbl_801B799C:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B79B0
 * Size:	000124
 */
void MapRoom::doSetView(int viewportNumber)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	clrlwi   r4, r4, 0x10
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x13c(r3)
	bl       setCurrentViewNo__Q28SysShape5ModelFUl
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	li       r4, 0
	lwz      r3, 0x24(r3)
	lwz      r0, 0x264(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801B7A60

lbl_801B79FC:
	cmpw     r4, r31
	bne      lbl_801B7A58
	bl       getViewport__8GraphicsFi
	mr       r31, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7A60
	lbz      r0, mUseCylinderViewCulling__Q24Game10RoomMapMgr@sda21(r13)
	lwz      r3, 0x44(r31)
	cmplwi   r0, 0
	beq      lbl_801B7A40
	addi     r4, r29, 0x160
	bl       isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7A60
	li       r30, 1
	b        lbl_801B7A60

lbl_801B7A40:
	addi     r4, r29, 0x150
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7A60
	li       r30, 1
	b        lbl_801B7A60

lbl_801B7A58:
	addi     r4, r4, 1
	bdnz     lbl_801B79FC

lbl_801B7A60:
	lbz      r0, usePacketCulling__Q24Game8Creature@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801B7AA4
	clrlwi.  r0, r30, 0x18
	beq      lbl_801B7A8C
	lwz      r3, 0x13c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7AB8

lbl_801B7A8C:
	lwz      r3, 0x13c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	b        lbl_801B7AB8

lbl_801B7AA4:
	lwz      r3, 0x13c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_801B7AB8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B7AD4
 * Size:	000024
 */
void MapRoom::doViewCalc() { mModel->viewCalc(); }

/*
 * --INFO--
 * Address:	801B7AF8
 * Size:	000004
 */
void MapRoom::doSimulation(f32) { }

/*
 * --INFO--
 * Address:	801B7AFC
 * Size:	000004
 */
void MapRoom::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B7B00
 * Size:	0001E8
 */
RoomMapMgr::RoomMapMgr(Game::Cave::CaveInfo*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	beq      lbl_801B7B40
	addi     r0, r29, 0x118
	lis      r3, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r29)
	addi     r0, r3, __vt__16GenericObjectMgr@l
	stw      r0, 0x118(r29)

lbl_801B7B40:
	mr       r3, r29
	li       r4, 0
	bl       __ct__Q24Game6MapMgrFv
	lis      r3, __vt__Q24Game10RoomMapMgr@ha
	addi     r0, r29, 0x118
	addi     r4, r3, __vt__Q24Game10RoomMapMgr@l
	addi     r3, r29, 0x24
	stw      r4, 4(r29)
	addi     r5, r4, 0x68
	lwz      r4, 0(r29)
	stw      r5, 0(r4)
	lwz      r4, 0(r29)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __ct__Q24Game9CaveVRBoxFv
	addi     r3, r29, 0x40
	bl       __ct__Q23Sys8TriangleFv
	addi     r3, r29, 0xac
	bl       "__ct__30MonoObjectMgr<Q24Game7MapRoom>Fv"
	lfs      f1, lbl_80519444@sda21(r2)
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	lfs      f0, lbl_80519448@sda21(r2)
	stfs     f1, 0xdc(r29)
	addi     r3, r29, 0xfc
	li       r5, 0
	li       r6, 0xc
	stfs     f1, 0xe0(r29)
	li       r7, 2
	stfs     f1, 0xe4(r29)
	stfs     f0, 0xe8(r29)
	stfs     f0, 0xec(r29)
	stfs     f0, 0xf0(r29)
	bl       __construct_array
	lfs      f0, lbl_80519440@sda21(r2)
	li       r3, 0x3c
	stfs     f0, 0xfc(r29)
	stfs     f0, 0x100(r29)
	stfs     f0, 0x104(r29)
	stfs     f0, 0x108(r29)
	stfs     f0, 0x10c(r29)
	stfs     f0, 0x110(r29)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801B7C78
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__26Container<Q24Game7MapUnit>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__26Container<Q24Game7MapUnit>"@l
	lis      r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@ha
	lis      r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@ha
	stw      r0, 0(r31)
	li       r0, 0
	addi     r6, r4, "__vt__26ObjectMgr<Q24Game7MapUnit>"@l
	addi     r4, r3, "__vt__30NodeObjectMgr<Q24Game7MapUnit>"@l
	stb      r0, 0x18(r31)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	addi     r28, r31, 0x20
	addi     r5, r6, 0x2c
	stw      r0, 0x1c(r31)
	addi     r0, r4, 0x2c
	mr       r3, r28
	stw      r6, 0(r31)
	stw      r5, 0x1c(r31)
	stw      r4, 0(r31)
	stw      r0, 0x1c(r31)
	bl       __ct__5CNodeFv
	lis      r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
	lis      r3, __vt__Q24Game10MapUnitMgr@ha
	addi     r0, r4, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
	stw      r0, 0(r28)
	addi     r3, r3, __vt__Q24Game10MapUnitMgr@l
	addi     r0, r3, 0x2c
	stw      r3, 0(r31)
	stw      r0, 0x1c(r31)

lbl_801B7C78:
	stw      r31, 0xa8(r29)
	li       r0, 0
	lfs      f3, lbl_80519444@sda21(r2)
	mr       r3, r29
	lfs      f2, lbl_80519448@sda21(r2)
	stfs     f3, 0xdc(r29)
	lfs      f1, lbl_80519440@sda21(r2)
	stfs     f3, 0xe0(r29)
	lfs      f0, lbl_80519458@sda21(r2)
	stfs     f3, 0xe4(r29)
	stfs     f2, 0xe8(r29)
	stfs     f2, 0xec(r29)
	stfs     f2, 0xf0(r29)
	stw      r30, 0x28(r29)
	stw      r0, 0x2c(r29)
	stw      r0, 0x30(r29)
	stfs     f1, 0x4c(r29)
	stfs     f0, 0x50(r29)
	stfs     f1, 0x54(r29)
	stw      r0, 0x114(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

namespace Game {

/*
 * --INFO--
 * Address:	801B7D88
 * Size:	0001FC
 */
void RoomMapMgr::getMapRoom(short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r3, r3, 0xac
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapRoom>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r5, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B7DDC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7E64

lbl_801B7DDC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7E48

lbl_801B7DF4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B7E64
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B7E48:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7DF4

lbl_801B7E64:
	extsh    r31, r31
	b        lbl_801B7F4C

lbl_801B7E6C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x184(r3)
	cmpw     r0, r31
	bne      lbl_801B7E90
	b        lbl_801B7F70

lbl_801B7E90:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B7EBC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7F4C

lbl_801B7EBC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B7F30

lbl_801B7EDC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B7F4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B7F30:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B7EDC

lbl_801B7F4C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B7E6C
	li       r3, 0

lbl_801B7F70:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

namespace Game {

/*
 * --INFO--
 * Address:	801B7FD0
 * Size:	00000C
 */
CaveVRBox::CaveVRBox()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void CaveVRBox::create(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B7FDC
 * Size:	000A48
 */
void RoomMapMgr::createRandomMap(int, Game::Cave::EditMapUnit*)
{
	/*
	stwu     r1, -0x1530(r1)
	mflr     r0
	lis      r6, lbl_8047FC70@ha
	stw      r0, 0x1534(r1)
	stmw     r21, 0x1504(r1)
	mr       r31, r3
	mr       r28, r4
	mr       r26, r5
	addi     r30, r6, lbl_8047FC70@l
	lwz      r3, 0x28(r3)
	bl       getFloorInfo__Q34Game4Cave8CaveInfoFi
	mr       r29, r3
	stw      r29, 0x2c(r31)
	stw      r28, 0x30(r31)
	bl       getTekiMax__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getTekiInfoNum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getTekiWeightSum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getItemMax__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getItemInfoNum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getItemWeightSum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getGateMax__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getGateInfoNum__Q34Game4Cave9FloorInfoFv
	mr       r3, r29
	bl       getGateWeightSum__Q34Game4Cave9FloorInfoFv
	lwz      r5, 0x1a4(r29)
	addi     r3, r1, 0x698
	addi     r4, r30, 0x178
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x698
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r27, r3, r3
	bne      lbl_801B80B8
	addi     r3, r30, 0x84
	addi     r5, r30, 0x198
	addi     r6, r1, 0x698
	li       r4, 0x649
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B80B8:
	mr       r4, r27
	addi     r3, r1, 0x10d8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x10e4(r1)
	bne      lbl_801B80E0
	li       r0, 0
	stw      r0, 0x14ec(r1)

lbl_801B80E0:
	addi     r3, r1, 0x10d8
	bl       readInt__6StreamFv
	mr       r25, r3
	mr       r24, r25
	mulli    r3, r24, 0x16c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game16MapUnitInterfaceFv@ha
	lis      r5, __dt__Q24Game16MapUnitInterfaceFv@ha
	addi     r4, r4, __ct__Q24Game16MapUnitInterfaceFv@l
	mr       r7, r24
	addi     r5, r5, __dt__Q24Game16MapUnitInterfaceFv@l
	li       r6, 0x16c
	bl       __construct_new_array
	mr       r24, r3
	li       r22, 0
	mr       r23, r24
	b        lbl_801B813C

lbl_801B8128:
	mr       r3, r23
	addi     r4, r1, 0x10d8
	bl       read__Q24Game9PartsViewFR6Stream
	addi     r23, r23, 0x16c
	addi     r22, r22, 1

lbl_801B813C:
	cmpw     r22, r25
	blt      lbl_801B8128
	stw      r24, 0xf8(r31)
	addi     r3, r1, 0x498
	addi     r4, r30, 0x1a8
	stw      r25, 0xf4(r31)
	lwz      r5, 0x1c4(r29)
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x498
	bl       DVDConvertPathToEntrynum
	cmpwi    r3, -1
	beq      lbl_801B8200
	li       r0, 0
	addi     r3, r1, 0x498
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r23, r3, r3
	beq      lbl_801B81E8
	mr       r4, r23
	addi     r3, r1, 0xcb8
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0xcc4(r1)
	bne      lbl_801B81CC
	li       r0, 0
	stw      r0, 0x10cc(r1)

lbl_801B81CC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       getLightMgr__Q24Game10GameSystemFv
	addi     r4, r1, 0xcb8
	bl       loadParm__Q24Game12GameLightMgrFR6Stream
	mr       r3, r23
	bl       __dla__FPv
	b        lbl_801B8200

lbl_801B81E8:
	addi     r3, r30, 0x84
	addi     r5, r30, 0x1bc
	addi     r6, r1, 0x498
	li       r4, 0x671
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B8200:
	lwz      r5, 0x1e4(r29)
	addi     r3, r1, 0x98
	addi     r4, r30, 0x13c
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x98
	bl       DVDConvertPathToEntrynum
	cmpwi    r3, -1
	beq      lbl_801B8320
	addi     r3, r1, 0x98
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	cmplwi   r3, 0
	beq      lbl_801B8320
	lwz      r12, 0(r3)
	addi     r4, r30, 0x158
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_801B8308
	lis      r4, 0x2000
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lis      r4, 4
	mr       r23, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r23
	bl       makeSharedDL__12J3DModelDataFv
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801B829C
	mr       r4, r23
	li       r5, 0
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_801B829C:
	stw      r0, 0x24(r31)
	addi     r3, r1, 0x38
	bl       PSMTXIdentity
	lwz      r4, 0x24(r31)
	addi     r3, r1, 0x38
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	b        lbl_801B8320

lbl_801B8308:
	addi     r3, r30, 0x84
	addi     r5, r30, 0x164
	addi     r6, r1, 0x98
	li       r4, 0x610
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B8320:
	mr       r22, r24
	li       r21, 0
	b        lbl_801B83EC

lbl_801B832C:
	lwz      r5, 0x14(r22)
	addi     r3, r1, 0x298
	addi     r4, r30, 0x1d0
	crclr    6
	bl       sprintf
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r1, 0x298
	li       r4, 1
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r23, r3, r3
	bne      lbl_801B8370
	addi     r3, r30, 0x84
	addi     r5, r30, 0x1f8
	li       r4, 0x697
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B8370:
	mr       r3, r23
	addi     r4, r30, 0x208
	lwz      r12, 0(r23)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_801B83D0
	mr       r4, r3
	addi     r3, r1, 0x898
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x8a4(r1)
	bne      lbl_801B83B8
	li       r0, 0
	stw      r0, 0xcac(r1)

lbl_801B83B8:
	lwz      r3, 0x168(r22)
	addi     r4, r1, 0x898
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801B83D0:
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r22, r22, 0x16c
	addi     r21, r21, 1

lbl_801B83EC:
	cmpw     r21, r25
	blt      lbl_801B832C
	bl       clear__Q24Game17PelletBirthBufferFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x214
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, 0x28(r31)
	bl       getFloorMax__Q34Game4Cave8CaveInfoFv
	addi     r0, r3, -1
	mr       r3, r31
	subf     r0, r28, r0
	mr       r4, r24
	cntlzw   r0, r0
	mr       r5, r25
	srwi     r7, r0, 5
	mr       r6, r29
	mr       r8, r26
	bl
nishimuraCreateRandomMap__Q24Game10RoomMapMgrFPQ24Game16MapUnitInterfaceiPQ34Game4Cave9FloorInfobPQ34Game4Cave11EditMapUnit
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x214
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x228
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	bl       completeUnitData__Q24Game10RoomMapMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x228
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801B8488
	bl       __ct__Q24Game14EditorRouteMgrFv
	mr       r0, r3

lbl_801B8488:
	stw      r0, 8(r31)
	addi     r4, r30, 0x23c
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	bl       nishimuraPlaceRooms__Q24Game10RoomMapMgrFv
	lwz      r3, 8(r31)
	bl       makeInvertLinks__Q24Game8RouteMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x23c
	bl       heapStatusEnd__6SystemFPc
	li       r4, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r4, 0xa0(r31)
	addi     r0, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r4, 0
	stw      r0, 0x28(r1)
	stw      r4, 0x34(r1)
	stw      r4, 0x2c(r1)
	stw      r3, 0x30(r1)
	bne      lbl_801B84FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8670

lbl_801B84FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8568

lbl_801B8514:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B8670
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B8568:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8514
	b        lbl_801B8670

lbl_801B8588:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x186(r3)
	cmpwi    r0, 1
	bne      lbl_801B85B4
	lwz      r3, 0xa0(r31)
	addi     r0, r3, 1
	stw      r0, 0xa0(r31)

lbl_801B85B4:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_801B85E0
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8670

lbl_801B85E0:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8654

lbl_801B8600:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B8670
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B8654:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8600

lbl_801B8670:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_801B8588
	lwz      r0, 0xa0(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0xa4(r31)
	li       r24, 0
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_801B86CC
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B885C

lbl_801B86CC:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B873C

lbl_801B86E8:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B885C
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B873C:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B86E8
	b        lbl_801B885C

lbl_801B875C:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x186(r3)
	cmpwi    r0, 1
	bne      lbl_801B87A0
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa4(r31)
	stwx     r3, r4, r24
	addi     r24, r24, 4

lbl_801B87A0:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_801B87CC
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B885C

lbl_801B87CC:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_801B8840

lbl_801B87EC:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B885C
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_801B8840:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B87EC

lbl_801B885C:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_801B875C
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_801B891C
	lfs      f1, lbl_80519458@sda21(r2)
	addi     r3, r1, 0x68
	lfs      f4, lbl_8051945C@sda21(r2)
	addi     r4, r1, 0x1c
	stfs     f1, 0x1c(r1)
	addi     r5, r1, 0x10
	lfs      f0, lbl_80519440@sda21(r2)
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	lfs      f2, 0xe0(r31)
	lfs      f1, 0xec(r31)
	lfs      f6, 0xe4(r31)
	fadds    f3, f2, f1
	lfs      f5, 0xf0(r31)
	lfs      f2, 0xdc(r31)
	lfs      f1, 0xe8(r31)
	fadds    f5, f6, f5
	fmuls    f3, f3, f4
	fadds    f1, f2, f1
	fmuls    f2, f5, f4
	stfs     f3, 0x14(r1)
	fmuls    f1, f1, f4
	stfs     f2, 0x18(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x24(r31)
	addi     r3, r1, 0x68
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x24(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801B891C:
	lfs      f4, 0xdc(r31)
	lfs      f0, lbl_80519464@sda21(r2)
	lfs      f3, 0xe4(r31)
	fsubs    f1, f4, f0
	lfs      f2, 0xe0(r31)
	fsubs    f3, f3, f0
	fcmpo    cr0, f1, f4
	bge      lbl_801B8940
	stfs     f1, 0xdc(r31)

lbl_801B8940:
	lfs      f0, 0xe0(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_801B8950
	stfs     f2, 0xe0(r31)

lbl_801B8950:
	lfs      f0, 0xe4(r31)
	fcmpo    cr0, f3, f0
	bge      lbl_801B8960
	stfs     f3, 0xe4(r31)

lbl_801B8960:
	lfs      f0, 0xe8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_801B8970
	stfs     f1, 0xe8(r31)

lbl_801B8970:
	lfs      f0, 0xec(r31)
	fcmpo    cr0, f2, f0
	ble      lbl_801B8980
	stfs     f2, 0xec(r31)

lbl_801B8980:
	lfs      f0, 0xf0(r31)
	fcmpo    cr0, f3, f0
	ble      lbl_801B8990
	stfs     f3, 0xf0(r31)

lbl_801B8990:
	lfs      f2, 0xe8(r31)
	lfs      f1, lbl_80519464@sda21(r2)
	lfs      f3, 0xf0(r31)
	fadds    f2, f2, f1
	lfs      f0, 0xdc(r31)
	fadds    f3, f3, f1
	lfs      f1, 0xec(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_801B89B8
	stfs     f2, 0xdc(r31)

lbl_801B89B8:
	lfs      f0, 0xe0(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_801B89C8
	stfs     f1, 0xe0(r31)

lbl_801B89C8:
	lfs      f0, 0xe4(r31)
	fcmpo    cr0, f3, f0
	bge      lbl_801B89D8
	stfs     f3, 0xe4(r31)

lbl_801B89D8:
	lfs      f0, 0xe8(r31)
	fcmpo    cr0, f2, f0
	ble      lbl_801B89E8
	stfs     f2, 0xe8(r31)

lbl_801B89E8:
	lfs      f0, 0xec(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_801B89F8
	stfs     f1, 0xec(r31)

lbl_801B89F8:
	lfs      f0, 0xf0(r31)
	fcmpo    cr0, f3, f0
	ble      lbl_801B8A08
	stfs     f3, 0xf0(r31)

lbl_801B8A08:
	mr       r3, r31
	bl       deleteTemp__Q24Game10RoomMapMgrFv
	lmw      r21, 0x1504(r1)
	lwz      r0, 0x1534(r1)
	mtlr     r0
	addi     r1, r1, 0x1530
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B8A24
 * Size:	0000EC
 */
MapUnitInterface::~MapUnitInterface()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_801B8AF4
	lis      r3, __vt__Q24Game16MapUnitInterface@ha
	addi     r0, r3, __vt__Q24Game16MapUnitInterface@l
	stw      r0, 0(r31)
	beq      lbl_801B8AE4
	lis      r3, __vt__Q24Game9PartsView@ha
	addic.   r0, r31, 0x118
	addi     r0, r3, __vt__Q24Game9PartsView@l
	stw      r0, 0(r31)
	beq      lbl_801B8A9C
	lis      r4, __vt__Q24Game4Door@ha
	addic.   r3, r31, 0x138
	addi     r0, r4, __vt__Q24Game4Door@l
	stw      r0, 0x118(r31)
	beq      lbl_801B8A90
	lis      r4, __vt__Q24Game8DoorLink@ha
	addi     r0, r4, __vt__Q24Game8DoorLink@l
	stw      r0, 0x138(r31)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8A90:
	addi     r3, r31, 0x118
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8A9C:
	addic.   r0, r31, 0x70
	beq      lbl_801B8AD8
	lis      r4, __vt__Q24Game14EditorRouteMgr@ha
	addic.   r3, r31, 0x90
	addi     r0, r4, __vt__Q24Game14EditorRouteMgr@l
	stw      r0, 0x70(r31)
	beq      lbl_801B8ACC
	lis      r4, __vt__Q34Game14EditorRouteMgr6WPNode@ha
	addi     r0, r4, __vt__Q34Game14EditorRouteMgr6WPNode@l
	stw      r0, 0x90(r31)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8ACC:
	addi     r3, r31, 0x70
	li       r4, 0
	bl       __dt__Q24Game8RouteMgrFv

lbl_801B8AD8:
	mr       r3, r31
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801B8AE4:
	extsh.   r0, r30
	ble      lbl_801B8AF4
	mr       r3, r31
	bl       __dl__FPv

lbl_801B8AF4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B8B10
 * Size:	00003C
 */
MapUnitInterface::MapUnitInterface()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game9PartsViewFv
	lis      r4, __vt__Q24Game16MapUnitInterface@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q24Game16MapUnitInterface@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
/*
 * --INFO--
 * Address:	801B8C28
 * Size:	000224
 */
void RoomMapMgr::completeUnitData()
{
	/*
	stwu     r1, -0x230(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x234(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stw      r31, 0x22c(r1)
	cmplwi   r0, 0
	stw      r30, 0x228(r1)
	stw      r29, 0x224(r1)
	mr       r29, r3
	lwz      r3, 0xa8(r3)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B8C84
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8D0C

lbl_801B8C84:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8CF0

lbl_801B8C9C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B8D0C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B8CF0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8C9C

lbl_801B8D0C:
	lis      r3, lbl_8047FEBC@ha
	addi     r31, r3, lbl_8047FEBC@l
	b        lbl_801B8E10

lbl_801B8D18:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r4, r31
	lwz      r5, 8(r30)
	addi     r3, r1, 0x18
	crclr    6
	bl       sprintf
	lwz      r3, 0xa8(r29)
	mr       r4, r30
	addi     r5, r1, 0x18
	bl       makeUnit__Q24Game10MapUnitMgrFPQ24Game7MapUnitPc
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B8D80
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8E10

lbl_801B8D80:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8DF4

lbl_801B8DA0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B8E10
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B8DF4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8DA0

lbl_801B8E10:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B8D18
	lwz      r0, 0x234(r1)
	lwz      r31, 0x22c(r1)
	lwz      r30, 0x228(r1)
	lwz      r29, 0x224(r1)
	mtlr     r0
	addi     r1, r1, 0x230
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B8E4C
 * Size:	000234
 */
void RoomMapMgr::setupJUTTextures()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stw      r31, 0x2c(r1)
	mr       r31, r3
	cmplwi   r0, 0
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lwz      r3, 0xa8(r3)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B8EA8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B903C

lbl_801B8EA8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B8F14

lbl_801B8EC0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B903C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B8F14:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8EC0
	b        lbl_801B903C

lbl_801B8F34:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801B8F7C
	lwz      r4, 0x30(r29)
	li       r0, 0
	li       r5, 0
	stw      r0, 0x28(r30)
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_801B8F7C:
	stw      r30, 0x2c(r29)
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B8FAC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B903C

lbl_801B8FAC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9020

lbl_801B8FCC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B903C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9020:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B8FCC

lbl_801B903C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B8F34
	mr       r3, r31
	bl       nishimuraSetTexture__Q24Game10RoomMapMgrFv
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9080
 * Size:	0002BC
 */
void RoomMapMgr::useUnit(char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r5, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
	stmw     r26, 0x18(r1)
	mr       r30, r3
	cmplwi   r0, 0
	mr       r31, r4
	lwz      r3, 0xa8(r3)
	stw      r5, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B90D8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9250

lbl_801B90D8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9144

lbl_801B90F0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B9250
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9144:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B90F0
	b        lbl_801B9250

lbl_801B9164:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r31
	lwz      r4, 8(r29)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801B9194
	b        lbl_801B9274

lbl_801B9194:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B91C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9250

lbl_801B91C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9234

lbl_801B91E0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B9250
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9234:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B91E0

lbl_801B9250:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9164
	li       r29, 0

lbl_801B9274:
	cmplwi   r29, 0
	mr       r27, r29
	bne      lbl_801B9328
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801B92A0
	bl       __ct__5CNodeFv
	lis      r3, "__vt__28TObjectNode<Q24Game7MapUnit>"@ha
	addi     r0, r3, "__vt__28TObjectNode<Q24Game7MapUnit>"@l
	stw      r0, 0(r29)

lbl_801B92A0:
	li       r26, 0
	li       r28, 0
	b        lbl_801B92E0

lbl_801B92AC:
	lwz      r4, 0xf8(r30)
	addi     r0, r28, 0x18
	mr       r3, r31
	lwzx     r4, r4, r0
	lwz      r4, 8(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801B92D8
	lwz      r3, 0xf8(r30)
	addi     r0, r28, 0x18
	lwzx     r27, r3, r0

lbl_801B92D8:
	addi     r28, r28, 0x16c
	addi     r26, r26, 1

lbl_801B92E0:
	lwz      r0, 0xf4(r30)
	cmpw     r26, r0
	blt      lbl_801B92AC
	cmplwi   r27, 0
	bne      lbl_801B9314
	lis      r3, lbl_8047FCF4@ha
	lis      r4, lbl_8047FED8@ha
	addi     r5, r4, lbl_8047FED8@l
	mr       r6, r31
	addi     r3, r3, lbl_8047FCF4@l
	li       r4, 0x75c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B9314:
	stw      r27, 0x18(r29)
	mr       r4, r29
	lwz      r3, 0xa8(r30)
	addi     r3, r3, 0x20
	bl       add__5CNodeFP5CNode

lbl_801B9328:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B933C
 * Size:	000210
 */
JUTTexture* RoomMapMgr::getTexture(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__25Iterator<Q24Game7MapUnit>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	cmplwi   r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r5, "__vt__25Iterator<Q24Game7MapUnit>"@l
	lwz      r3, 0xa8(r3)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B9394
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9510

lbl_801B9394:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9400

lbl_801B93AC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B9510
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9400:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B93AC
	b        lbl_801B9510

lbl_801B9420:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r4, r30
	lwz      r3, 8(r3)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801B9454
	lwz      r3, 0x2c(r31)
	b        lbl_801B9534

lbl_801B9454:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B9480
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9510

lbl_801B9480:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B94F4

lbl_801B94A0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B9510
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B94F4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B94A0

lbl_801B9510:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9420
	li       r3, 0

lbl_801B9534:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B954C
 * Size:	0001F4
 */
void RoomMapMgr::allocRooms(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r31, 0xac
	bl       "alloc__30MonoObjectMgr<Q24Game7MapRoom>Fi"
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B95A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B970C

lbl_801B95A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9614

lbl_801B95C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B970C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9614:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B95C0
	b        lbl_801B970C

lbl_801B9634:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r0, -1
	sth      r0, 0x184(r3)
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B967C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B970C

lbl_801B967C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B96F0

lbl_801B969C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B970C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B96F0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B969C

lbl_801B970C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9634
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9740
 * Size:	000050
 */
void RoomMapMgr::makeRoom(char*, f32, f32, int, int, Game::RoomLink*, Game::ObjectLayoutInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  xoris     r5, r5, 0x8000
	  lfd       f3, -0x4EF0(r2)
	  stw       r0, 0x14(r1)
	  lis       r0, 0x4330
	  lfs       f4, -0x4EF8(r2)
	  stw       r5, 0xC(r1)
	  extsh     r5, r6
	  mr        r6, r7
	  mr        r7, r8
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f3
	  fmuls     f3, f4, f0
	  bl        0x3198
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B9790
 * Size:	0003B4
 */
void RoomMapMgr::placeObjects()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stmw     r27, 0x6c(r1)
	li       r0, 0
	mr       r31, r3
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	stw      r0, 0x28(r1)
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 0x1c(r1)
	stw      r0, 0x20(r1)
	stw      r3, 0x24(r1)
	bne      lbl_801B97F4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B997C

lbl_801B97F4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B9860

lbl_801B980C:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B997C
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_801B9860:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B980C
	b        lbl_801B997C

lbl_801B9880:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	lwz      r3, 0x28(r31)
	bl       getFloorMax__Q34Game4Cave8CaveInfoFv
	lwz      r0, 0x30(r31)
	addi     r5, r3, -1
	lwz      r4, 0x2c(r31)
	mr       r3, r29
	subf     r0, r0, r5
	cntlzw   r0, r0
	srwi     r5, r0, 5
	bl       placeObjects__Q24Game7MapRoomFPQ34Game4Cave9FloorInfob
	lwz      r0, 0x28(r1)
	cmplwi   r0, 0
	bne      lbl_801B98EC
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B997C

lbl_801B98EC:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)
	b        lbl_801B9960

lbl_801B990C:
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B997C
	lwz      r3, 0x24(r1)
	lwz      r4, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x20(r1)

lbl_801B9960:
	lwz      r12, 0x1c(r1)
	addi     r3, r1, 0x1c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B990C

lbl_801B997C:
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x20(r1)
	cmplw    r4, r3
	bne      lbl_801B9880
	lwz      r4, 8(r31)
	cmplwi   r4, 0
	beq      lbl_801B9B20
	lwz      r3, 0x2c(r31)
	lwz      r0, 0x2e8(r3)
	cmpwi    r0, 0
	beq      lbl_801B9B20
	lhz      r0, 0x1c(r4)
	li       r28, -1
	lfd      f30, lbl_80519470@sda21(r2)
	li       r27, -1
	lfs      f31, lbl_80519444@sda21(r2)
	xoris    r30, r0, 0x8000
	lis      r29, 0x4330
	b        lbl_801B9A50

lbl_801B99D8:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r29, 0x30(r1)
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	stw      r30, 0x3c(r1)
	fsubs    f0, f0, f30
	stw      r29, 0x38(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r27, 0x44(r1)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r29, 0x48(r1)
	stw      r0, 0x4c(r1)
	lfd      f0, 0x48(r1)
	stw      r30, 0x54(r1)
	fsubs    f0, f0, f30
	stw      r29, 0x50(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r28, 0x5c(r1)

lbl_801B9A50:
	cmpw     r27, r28
	beq      lbl_801B99D8
	lwz      r3, 8(r31)
	extsh    r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	stw      r3, 8(r1)
	extsh    r4, r28
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	addi     r27, r1, 8
	li       r28, 0

lbl_801B9A98:
	lwz      r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
	bl       birth__Q34Game13ItemDownFloor3MgrFv
	or.      r29, r3, r3
	beq      lbl_801B9B10
	lwz      r6, 0(r27)
	lis      r4, 0x30303030@ha
	li       r5, 0x14
	li       r0, 1
	lfs      f1, 0x50(r6)
	addi     r3, r29, 0x21c
	lfs      f2, 0x54(r6)
	addi     r4, r4, 0x30303030@l
	lfs      f0, 0x4c(r6)
	stfs     f0, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f2, 0x18(r1)
	stw      r5, 0x1e8(r29)
	sth      r0, 0x204(r29)
	stb      r0, 0x228(r29)
	stb      r0, 0x229(r29)
	bl       setID__4ID32FUl
	mr       r3, r29
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f0, lbl_80519440@sda21(r2)
	mr       r3, r29
	addi     r4, r1, 0x10
	li       r5, 0
	stfs     f0, 0x200(r29)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_801B9B10:
	addi     r28, r28, 1
	addi     r27, r27, 4
	cmpwi    r28, 2
	blt      lbl_801B9A98

lbl_801B9B20:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9B44
 * Size:	000024
 */
void RoomMapMgr::getBoundBox2d(BoundBox2d&)
{
	/*
	lfs      f1, 0xe4(r3)
	lfs      f0, 0xdc(r3)
	stfs     f0, 0(r4)
	stfs     f1, 4(r4)
	lfs      f1, 0xf0(r3)
	lfs      f0, 0xe8(r3)
	stfs     f0, 8(r4)
	stfs     f1, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9B68
 * Size:	000034
 */
void RoomMapMgr::getBoundBox(BoundBox&)
{
	/*
	lfs      f0, 0xdc(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0xe0(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0xe4(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0xe8(r3)
	stfs     f0, 0xc(r4)
	lfs      f0, 0xec(r3)
	stfs     f0, 0x10(r4)
	lfs      f0, 0xf0(r3)
	stfs     f0, 0x14(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9B9C
 * Size:	000004
 */
void RoomMapMgr::drawCollision(Graphics&, Sys::Sphere&) { }

/*
 * --INFO--
 * Address:	801B9BA0
 * Size:	0001F0
 */
void RoomMapMgr::traceMove(Game::MoveInfo&, f32)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	mr       r28, r4
	lwz      r4, 4(r4)
	fmr      f31, f1
	mr       r27, r3
	lfs      f3, 0(r4)
	li       r31, 1
	lfs      f2, 4(r4)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	lfs      f4, 8(r4)
	lwz      r3, 0(r28)
	fmuls    f4, f4, f4
	lfs      f1, lbl_80519440@sda21(r2)
	fadds    f0, f0, f2
	lfs      f5, 0xc(r3)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801B9C1C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_801B9C20
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_801B9C20

lbl_801B9C1C:
	fmr      f2, f1

lbl_801B9C20:
	lfs      f0, lbl_8051945C@sda21(r2)

lbl_801B9C24:
	fmuls    f1, f31, f2
	fcmpo    cr0, f1, f5
	ble      lbl_801B9C40
	slwi     r31, r31, 1
	fmuls    f31, f31, f0
	cmpwi    r31, 4
	ble      lbl_801B9C24

lbl_801B9C40:
	li       r29, 0
	b        lbl_801B9C6C

lbl_801B9C48:
	mr       r3, r27
	fmr      f1, f31
	lwz      r12, 4(r27)
	mr       r4, r28
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	addi     r29, r29, 1

lbl_801B9C6C:
	cmpw     r29, r31
	blt      lbl_801B9C48
	lwz      r3, 0x2c(r27)
	bl       hasHiddenCollision__Q34Game4Cave9FloorInfoFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B9D70
	lwz      r0, 0x44(r28)
	cmplwi   r0, 0
	bne      lbl_801B9D70
	lwz      r3, 0(r28)
	lfs      f0, lbl_80519440@sda21(r2)
	lfs      f1, 4(r3)
	lfs      f2, 0xc(r3)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_801B9D70
	stfs     f2, 4(r3)
	lwz      r3, 4(r28)
	lfs      f2, 4(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_801B9CD8
	lfs      f1, 8(r28)
	fneg     f2, f2
	lfs      f0, lbl_80519458@sda21(r2)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 4(r3)

lbl_801B9CD8:
	lwz      r3, 0(r28)
	addi     r0, r27, 0x40
	lfs      f2, lbl_80519440@sda21(r2)
	lfs      f0, 0(r3)
	lfs      f1, lbl_80519458@sda21(r2)
	stfs     f0, 0x14(r1)
	lfs      f3, 4(r3)
	stfs     f3, 0x18(r1)
	lfs      f0, 8(r3)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0xc(r3)
	fsubs    f0, f3, f0
	stfs     f0, 0x18(r1)
	stw      r0, 0x44(r28)
	stfs     f2, 0x50(r28)
	stfs     f1, 0x54(r28)
	stfs     f2, 0x58(r28)
	stfs     f2, 0x78(r28)
	stfs     f1, 0x7c(r28)
	stfs     f2, 0x80(r28)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x84(r28)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x88(r28)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x8c(r28)
	lwz      r3, 0x10(r28)
	cmplwi   r3, 0
	beq      lbl_801B9D70
	stfs     f2, 8(r1)
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801B9D70:
	mr       r3, r30
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9D90
 * Size:	000024
 */
bool RoomMapMgr::hasHiddenCollision()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2c(r3)
	bl       hasHiddenCollision__Q34Game4Cave9FloorInfoFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9DB4
 * Size:	00008C
 */
void RoomMapMgr::constraintBoundBox(Sys::Sphere&)
{
	/*
	lfs      f3, 0(r4)
	lfs      f1, 0xc(r4)
	lfs      f2, 0xdc(r3)
	fsubs    f0, f3, f1
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_801B9DDC
	fadds    f0, f2, f1
	stfs     f0, 0(r4)
	b        lbl_801B9DF8

lbl_801B9DDC:
	fadds    f0, f3, f1
	lfs      f2, 0xe8(r3)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bne      lbl_801B9DF8
	fsubs    f0, f2, f1
	stfs     f0, 0(r4)

lbl_801B9DF8:
	lfs      f3, 8(r4)
	lfs      f1, 0xc(r4)
	lfs      f2, 0xe4(r3)
	fsubs    f0, f3, f1
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_801B9E20
	fadds    f0, f2, f1
	stfs     f0, 8(r4)
	blr

lbl_801B9E20:
	fadds    f0, f3, f1
	lfs      f2, 0xf0(r3)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bnelr
	fsubs    f0, f2, f1
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B9E40
 * Size:	0001F4
 */
void RoomMapMgr::entryToMapRoomCellMgr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r3, r3, 0xac
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B9E8C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BA004

lbl_801B9E8C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9EF8

lbl_801B9EA4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA004
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9EF8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B9EA4
	b        lbl_801BA004

lbl_801B9F18:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, mapRoomCellMgr__4Game@sda21(r13)
	mr       r4, r3
	cmplwi   r0, 0
	beq      lbl_801B9F48
	mr       r3, r0
	addi     r5, r4, 0x190
	bl       entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere

lbl_801B9F48:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B9F74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BA004

lbl_801B9F74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B9FE8

lbl_801B9F94:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA004
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B9FE8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B9F94

lbl_801BA004:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B9F18
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BA034
 * Size:	000128
 */
s16 RoomMapMgr::findRoomIndex(Sys::Sphere&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	addi     r3, r1, 0x20
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r4
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	lwz      r5, mapRoomCellMgr__4Game@sda21(r13)
	li       r0, 1
	stb      r0, 0x3c(r1)
	addi     r3, r1, 0x40
	addi     r4, r1, 0x20
	stw      r5, 0x38(r1)
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x40
	bl       first__Q24Game12CellIteratorFv
	b        lbl_801BA130

lbl_801BA07C:
	addi     r3, r1, 0x40
	bl       __ml__Q24Game12CellIteratorFv
	lfs      f0, 0(r30)
	mr       r31, r3
	addi     r3, r31, 0x108
	addi     r4, r1, 0x14
	stfs     f0, 0x14(r1)
	addi     r5, r1, 8
	lfs      f0, 4(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 8(r30)
	stfs     f0, 0x1c(r1)
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x138(r31)
	lfs      f6, 0xc(r30)
	lfs      f1, 0x7c(r3)
	lfs      f3, 0x84(r3)
	fsubs    f1, f1, f6
	lfs      f4, 0x88(r3)
	lfs      f5, 0x90(r3)
	fsubs    f3, f3, f6
	fadds    f4, f4, f6
	fcmpo    cr0, f1, f2
	fadds    f5, f5, f6
	cror     2, 0, 2
	bne      lbl_801BA128
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	bne      lbl_801BA128
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	bne      lbl_801BA128
	fcmpo    cr0, f0, f5
	cror     2, 0, 2
	bne      lbl_801BA128
	lha      r3, 0x184(r31)
	b        lbl_801BA144

lbl_801BA128:
	addi     r3, r1, 0x40
	bl       next__Q24Game12CellIteratorFv

lbl_801BA130:
	addi     r3, r1, 0x40
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA07C
	li       r3, -1

lbl_801BA144:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void MapRoom::createGlobalCollision()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801BA15C
 * Size:	0009FC
 */
void RoomMapMgr::createGlobalCollision()
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stmw     r18, 0x108(r1)
	mr       r31, r3
	lbz      r0, sMapRoomFinal__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801BA364
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 0x4c(r1)
	stw      r0, 0x58(r1)
	stw      r0, 0x50(r1)
	stw      r3, 0x54(r1)
	bne      lbl_801BA1C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA338

lbl_801BA1C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA230

lbl_801BA1DC:
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA338
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)

lbl_801BA230:
	lwz      r12, 0x4c(r1)
	addi     r3, r1, 0x4c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA1DC
	b        lbl_801BA338

lbl_801BA250:
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r18, r3
	lwz      r3, 0x138(r3)
	addi     r4, r18, 0xd8
	addi     r3, r3, 0x10
	bl       clone__12MapCollisionFR7Matrixf
	stw      r3, 0xb8(r18)
	lwz      r0, 0x58(r1)
	cmplwi   r0, 0
	bne      lbl_801BA2A8
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA338

lbl_801BA2A8:
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)
	b        lbl_801BA31C

lbl_801BA2C8:
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA338
	lwz      r3, 0x54(r1)
	lwz      r4, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x50(r1)

lbl_801BA31C:
	lwz      r12, 0x4c(r1)
	addi     r3, r1, 0x4c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA2C8

lbl_801BA338:
	lwz      r3, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x50(r1)
	cmplw    r4, r3
	bne      lbl_801BA250
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	b        lbl_801BAB44

lbl_801BA364:
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	li       r3, 0x50
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801BA3EC
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__23Container<10Vector3<f>>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__23Container<10Vector3<f>>"@l
	lis      r3, __vt__Q23Sys11VertexTable@ha
	li       r6, 0
	stw      r0, 0(r29)
	addi     r5, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
	li       r4, 1
	addi     r0, r3, __vt__Q23Sys11VertexTable@l
	stb      r6, 0x18(r29)
	lfs      f1, lbl_80519444@sda21(r2)
	stw      r5, 0(r29)
	lfs      f0, lbl_80519448@sda21(r2)
	stb      r4, 0x18(r29)
	stw      r6, 0x20(r29)
	stw      r6, 0x1c(r29)
	stw      r6, 0x24(r29)
	stw      r0, 0(r29)
	stfs     f1, 0x28(r29)
	stfs     f1, 0x2c(r29)
	stfs     f1, 0x30(r29)
	stfs     f0, 0x34(r29)
	stfs     f0, 0x38(r29)
	stfs     f0, 0x3c(r29)

lbl_801BA3EC:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801BA404
	bl       __ct__Q23Sys13TriangleTableFv
	mr       r28, r3

lbl_801BA404:
	lfs      f1, lbl_80519444@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_80519448@sda21(r2)
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stfs     f1, 0x5c(r1)
	li       r22, 0
	li       r23, 0
	stfs     f1, 0x60(r1)
	stfs     f1, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f0, 0x6c(r1)
	stfs     f0, 0x70(r1)
	stw      r4, 0x3c(r1)
	stw      r0, 0x48(r1)
	stw      r0, 0x40(r1)
	stw      r3, 0x44(r1)
	bne      lbl_801BA46C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA5E8

lbl_801BA46C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA4D8

lbl_801BA484:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA5E8
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_801BA4D8:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA484
	b        lbl_801BA5E8

lbl_801BA4F8:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x138(r3)
	lwz      r0, 0x48(r1)
	lwz      r3, 0x28(r3)
	cmplwi   r0, 0
	lwz      r4, 0x18(r3)
	lwz      r3, 0x1c(r3)
	lwz      r4, 0x20(r4)
	lwz      r0, 0x20(r3)
	add      r22, r22, r4
	add      r23, r23, r0
	bne      lbl_801BA558
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA5E8

lbl_801BA558:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)
	b        lbl_801BA5CC

lbl_801BA578:
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA5E8
	lwz      r3, 0x44(r1)
	lwz      r4, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x40(r1)

lbl_801BA5CC:
	lwz      r12, 0x3c(r1)
	addi     r3, r1, 0x3c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA578

lbl_801BA5E8:
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x40(r1)
	cmplw    r4, r3
	bne      lbl_801BA4F8
	mr       r3, r29
	mr       r4, r22
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r23
	lwz      r12, 0(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r23, 0x38(r31)
	lwz      r0, 0x38(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x3c(r31)
	li       r18, 0
	b        lbl_801BA678

lbl_801BA654:
	addi     r3, r1, 0x74
	bl       __ct__Q23Sys8TriangleFv
	mr       r3, r28
	addi     r4, r1, 0x74
	lwz      r12, 0(r28)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1

lbl_801BA678:
	cmpw     r18, r23
	blt      lbl_801BA654
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r31, 0xac
	cmplwi   r0, 0
	stw      r4, 0x2c(r1)
	li       r21, 0
	li       r20, 0
	stw      r0, 0x38(r1)
	stw      r0, 0x30(r1)
	stw      r3, 0x34(r1)
	bne      lbl_801BA6C8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA750

lbl_801BA6C8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA734

lbl_801BA6E0:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA750
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_801BA734:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA6E0

lbl_801BA750:
	li       r23, 0
	mr       r22, r23
	b        lbl_801BA964

lbl_801BA75C:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	li       r24, 0
	lwz      r3, 0x138(r3)
	addi     r25, r30, 0xd8
	li       r18, 0
	lwz      r3, 0x28(r3)
	lwz      r26, 0x18(r3)
	lwz      r19, 0x1c(r3)
	b        lbl_801BA800

lbl_801BA794:
	lwz      r0, 0x24(r26)
	mr       r3, r25
	addi     r4, r1, 0x20
	addi     r5, r1, 8
	add      r6, r0, r18
	lfs      f0, 0(r6)
	stfs     f0, 0x20(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x24(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x28(r1)
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	mr       r3, r29
	lfs      f1, 0xc(r1)
	addi     r4, r1, 0x14
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r21, r21, 1
	addi     r18, r18, 0xc
	addi     r24, r24, 1

lbl_801BA800:
	lwz      r0, 0x20(r26)
	cmpw     r24, r0
	blt      lbl_801BA794
	mr       r26, r23
	mr       r24, r22
	li       r18, 0
	li       r25, 0
	b        lbl_801BA898

lbl_801BA820:
	lwz      r0, 0x24(r19)
	mr       r4, r29
	lwz      r3, 0x24(r28)
	add      r5, r0, r25
	lwz      r0, 0(r5)
	add      r27, r3, r26
	mr       r3, r27
	add      r0, r0, r20
	stw      r0, 0(r27)
	lwz      r0, 4(r5)
	add      r0, r0, r20
	stw      r0, 4(r27)
	lwz      r0, 8(r5)
	add      r0, r0, r20
	stw      r0, 8(r27)
	lbz      r0, 0x5c(r5)
	stb      r0, 0x5c(r27)
	bl       makePlanes__Q23Sys8TriangleFRQ23Sys11VertexTable
	mr       r3, r27
	mr       r4, r29
	bl       createSphere__Q23Sys8TriangleFRQ23Sys11VertexTable
	lha      r0, 0x184(r30)
	addi     r18, r18, 1
	lwz      r3, 0x3c(r31)
	addi     r26, r26, 0x60
	addi     r23, r23, 0x60
	addi     r22, r22, 4
	stwx     r0, r3, r24
	addi     r24, r24, 4
	addi     r25, r25, 0x60

lbl_801BA898:
	lwz      r0, 0x20(r19)
	cmpw     r18, r0
	blt      lbl_801BA820
	lwz      r0, 0x38(r1)
	mr       r20, r21
	cmplwi   r0, 0
	bne      lbl_801BA8D4
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA964

lbl_801BA8D4:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_801BA948

lbl_801BA8F4:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BA964
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_801BA948:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BA8F4

lbl_801BA964:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_801BA75C
	lfs      f0, 0x28(r29)
	li       r3, 0x1c
	lfs      f2, lbl_80519478@sda21(r2)
	stfs     f0, 0x5c(r1)
	fsubs    f1, f0, f2
	lfs      f0, 0x2c(r29)
	stfs     f0, 0x60(r1)
	fsubs    f4, f0, f2
	lfs      f0, 0x30(r29)
	stfs     f0, 0x64(r1)
	fsubs    f5, f0, f2
	lfs      f0, 0x34(r29)
	stfs     f0, 0x68(r1)
	fadds    f0, f0, f2
	lfs      f3, 0x38(r29)
	stfs     f3, 0x6c(r1)
	fadds    f6, f3, f2
	lfs      f3, 0x3c(r29)
	fadds    f2, f3, f2
	stfs     f3, 0x70(r1)
	stfs     f1, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f5, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f6, 0x6c(r1)
	stfs     f2, 0x70(r1)
	bl       __nw__FUl
	or.      r18, r3, r3
	beq      lbl_801BAA08
	bl       __ct__5CNodeFv
	lis      r3, __vt__12MapCollision@ha
	addi     r0, r3, __vt__12MapCollision@l
	stw      r0, 0(r18)

lbl_801BAA08:
	stw      r18, 0x34(r31)
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r18, r3, r3
	beq      lbl_801BAA68
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23Sys10TriDivider@ha
	lis      r3, __vt__Q23Sys11GridDivider@ha
	addi     r0, r4, __vt__Q23Sys10TriDivider@l
	lfs      f1, lbl_80519444@sda21(r2)
	stw      r0, 0(r18)
	addi     r3, r3, __vt__Q23Sys11GridDivider@l
	lfs      f0, lbl_80519448@sda21(r2)
	li       r0, 0
	stw      r3, 0(r18)
	stfs     f1, 0x2c(r18)
	stfs     f1, 0x30(r18)
	stfs     f1, 0x34(r18)
	stfs     f0, 0x38(r18)
	stfs     f0, 0x3c(r18)
	stfs     f0, 0x40(r18)
	stw      r0, 0x28(r18)
	stw      r0, 0x24(r18)
	stw      r0, 0x20(r18)

lbl_801BAA68:
	lwz      r3, 0x34(r31)
	lis      r0, 0x4330
	stw      r0, 0xe0(r1)
	li       r5, 0x30
	lfd      f3, lbl_80519470@sda21(r2)
	li       r6, 0x30
	stw      r18, 0x18(r3)
	lfs      f2, lbl_8051947C@sda21(r2)
	lfs      f4, 0x68(r1)
	lfs      f0, 0x5c(r1)
	lfs      f1, 0x70(r1)
	fsubs    f4, f4, f0
	lfs      f0, 0x64(r1)
	stw      r0, 0xf8(r1)
	fsubs    f0, f1, f0
	fabs     f1, f4
	fabs     f0, f0
	frsp     f1, f1
	frsp     f0, f0
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f1, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	stfd     f0, 0xf0(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xe4(r1)
	lwz      r0, 0xf4(r1)
	lfd      f0, 0xe0(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xfc(r1)
	fsubs    f1, f0, f3
	lfd      f0, 0xf8(r1)
	fmuls    f1, f1, f2
	fsubs    f0, f0, f3
	fctiwz   f1, f1
	fmuls    f0, f0, f2
	stfd     f1, 0xe8(r1)
	fctiwz   f0, f0
	lwz      r0, 0xec(r1)
	stfd     f0, 0x100(r1)
	cmpwi    r0, 0x30
	lwz      r3, 0x104(r1)
	bge      lbl_801BAB18
	mr       r5, r0

lbl_801BAB18:
	cmpwi    r3, 0x30
	bge      lbl_801BAB24
	mr       r6, r3

lbl_801BAB24:
	lwz      r3, 0x34(r31)
	mr       r7, r29
	mr       r8, r28
	addi     r4, r1, 0x5c
	lwz      r3, 0x18(r3)
	bl
create__Q23Sys11GridDividerFR8BoundBoxiiPQ23Sys11VertexTablePQ23Sys13TriangleTable
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv

lbl_801BAB44:
	lmw      r18, 0x108(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801BAB58
 * Size:	0000B8
 */
void addOne__Q23Sys11VertexTableFR10Vector3f()
{
	/*
	lwz      r7, 0x1c(r3)
	lwz      r0, 0x20(r3)
	cmpw     r7, r0
	bge      lbl_801BAB94
	lwz      r6, 0x24(r3)
	addi     r5, r7, 1
	mulli    r0, r7, 0xc
	stw      r5, 0x1c(r3)
	lfs      f0, 0(r4)
	add      r5, r6, r0
	stfs     f0, 0(r5)
	lfs      f0, 4(r4)
	stfs     f0, 4(r5)
	lfs      f0, 8(r4)
	stfs     f0, 8(r5)

lbl_801BAB94:
	lfs      f1, 0(r4)
	lfs      f0, 0x28(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801BABA8
	stfs     f1, 0x28(r3)

lbl_801BABA8:
	lfs      f1, 4(r4)
	lfs      f0, 0x2c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801BABBC
	stfs     f1, 0x2c(r3)

lbl_801BABBC:
	lfs      f1, 8(r4)
	lfs      f0, 0x30(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801BABD0
	stfs     f1, 0x30(r3)

lbl_801BABD0:
	lfs      f1, 0(r4)
	lfs      f0, 0x34(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_801BABE4
	stfs     f1, 0x34(r3)

lbl_801BABE4:
	lfs      f1, 4(r4)
	lfs      f0, 0x38(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_801BABF8
	stfs     f1, 0x38(r3)

lbl_801BABF8:
	lfs      f1, 8(r4)
	lfs      f0, 0x3c(r3)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f1, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BAC10
 * Size:	0000E8
 */
void ArrayContainer<Sys::Triangle>::addOne(Sys::Triangle&)
{
	/*
	lwz      r7, 0x1c(r3)
	lwz      r0, 0x20(r3)
	cmpw     r7, r0
	bgelr
	lwz      r6, 0x24(r3)
	addi     r5, r7, 1
	mulli    r0, r7, 0x60
	stw      r5, 0x1c(r3)
	lwz      r3, 0(r4)
	add      r5, r6, r0
	lwz      r0, 4(r4)
	stw      r3, 0(r5)
	stw      r0, 4(r5)
	lwz      r0, 8(r4)
	stw      r0, 8(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x18(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x24(r5)
	lfs      f0, 0x28(r4)
	stfs     f0, 0x28(r5)
	lfs      f0, 0x2c(r4)
	stfs     f0, 0x2c(r5)
	lfs      f0, 0x30(r4)
	stfs     f0, 0x30(r5)
	lfs      f0, 0x34(r4)
	stfs     f0, 0x34(r5)
	lfs      f0, 0x38(r4)
	stfs     f0, 0x38(r5)
	lfs      f0, 0x3c(r4)
	stfs     f0, 0x3c(r5)
	lfs      f0, 0x40(r4)
	stfs     f0, 0x40(r5)
	lfs      f0, 0x44(r4)
	stfs     f0, 0x44(r5)
	lfs      f0, 0x48(r4)
	stfs     f0, 0x48(r5)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x4c(r5)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x50(r5)
	lfs      f0, 0x54(r4)
	stfs     f0, 0x54(r5)
	lfs      f0, 0x58(r4)
	stfs     f0, 0x58(r5)
	lbz      r0, 0x5c(r4)
	stb      r0, 0x5c(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BACF8
 * Size:	000068
 */
void ArrayContainer<Sys::Triangle>::alloc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x60
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys8TriangleFv@ha
	mr       r7, r31
	addi     r4, r4, __ct__Q23Sys8TriangleFv@l
	li       r5, 0
	li       r6, 0x60
	bl       __construct_new_array
	stw      r3, 0x24(r30)
	li       r0, 0
	stw      r31, 0x20(r30)
	stw      r0, 0x1c(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801BAD60
 * Size:	000328
 */
void RoomMapMgr::traceMove_new(Game::MoveInfo&, f32)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stmw     r20, 0x50(r1)
	mr       r21, r4
	mr       r20, r3
	lwz      r25, 4(r4)
	lwz      r26, 0(r4)
	lfs      f0, 0(r25)
	lfs      f2, 4(r25)
	mr       r4, r26
	fmuls    f0, f0, f1
	lfs      f26, 0(r26)
	lfs      f3, 8(r25)
	fmuls    f2, f2, f1
	lfs      f27, 4(r26)
	fadds    f0, f26, f0
	lfs      f28, 8(r26)
	fmuls    f1, f3, f1
	fadds    f2, f27, f2
	stfs     f26, 8(r1)
	stfs     f0, 0(r26)
	fadds    f0, f28, f1
	stfs     f2, 4(r26)
	stfs     f0, 8(r26)
	lfs      f1, 4(r26)
	lfs      f2, 8(r26)
	lfs      f0, 0(r26)
	stfs     f27, 0xc(r1)
	stfs     f0, 0(r26)
	stfs     f1, 4(r26)
	stfs     f2, 8(r26)
	lwz      r3, 0x34(r3)
	stfs     f28, 0x10(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r20)
	addi     r29, r1, 0x44
	addi     r28, r1, 0x34
	mr       r24, r3
	lwz      r4, 0x18(r4)
	lwz      r23, 0x18(r4)
	b        lbl_801BB038

lbl_801BAE48:
	li       r22, 0
	li       r30, 0
	b        lbl_801BB028

lbl_801BAE54:
	lwz      r3, 0x34(r20)
	li       r0, 0
	lwz      r4, 0x24(r24)
	lwz      r3, 0x18(r3)
	lwzx     r27, r4, r30
	lwz      r4, 0x1c(r3)
	mulli    r3, r27, 0x60
	lwz      r4, 0x24(r4)
	stb      r0, 0x30(r1)
	add      r31, r4, r3
	stfs     f26, 0x14(r1)
	stfs     f27, 0x18(r1)
	stfs     f28, 0x1c(r1)
	lfs      f0, 0(r26)
	stfs     f0, 0x20(r1)
	lfs      f0, 4(r26)
	stfs     f0, 0x24(r1)
	lfs      f0, 8(r26)
	stfs     f0, 0x28(r1)
	lfs      f0, 0xc(r26)
	stfs     f0, 0x2c(r1)
	lbz      r0, 0x19(r21)
	cmplwi   r0, 0
	beq      lbl_801BAEBC
	li       r0, 1
	stb      r0, 0x30(r1)

lbl_801BAEBC:
	mr       r3, r31
	mr       r4, r23
	addi     r5, r1, 0x14
	bl
intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ33Sys8Triangle11SphereSweep
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB018
	lwz      r3, 0x3c(r20)
	slwi     r0, r27, 2
	lwzx     r0, r3, r0
	stw      r0, 0x98(r21)
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f1, 0x48(r1)
	lfs      f31, 0(r28)
	stfs     f0, 0x4c(r1)
	lfs      f30, 0x38(r1)
	lwz      r3, 0x10(r21)
	lfs      f29, 0x3c(r1)
	cmplwi   r3, 0
	beq      lbl_801BAF24
	lwz      r12, 0(r3)
	mr       r4, r29
	mr       r5, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801BAF24:
	lfs      f1, 0x38(r1)
	lfs      f0, 0x30(r21)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_801BAF58
	stw      r31, 0x44(r21)
	lfs      f0, 0(r28)
	stfs     f0, 0x50(r21)
	lfs      f0, 0x38(r1)
	stfs     f0, 0x54(r21)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x58(r21)
	b        lbl_801BAF8C

lbl_801BAF58:
	fabs     f1, f1
	lfs      f0, 0x2c(r21)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_801BAF8C
	stw      r31, 0x48(r21)
	lfs      f0, 0(r28)
	stfs     f0, 0x5c(r21)
	lfs      f0, 0x38(r1)
	stfs     f0, 0x60(r21)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x64(r21)

lbl_801BAF8C:
	lfs      f4, 0x38(r1)
	lfs      f7, 4(r25)
	lfs      f5, 0(r28)
	fmuls    f0, f4, f7
	lfs      f8, 0(r25)
	lfs      f3, 0x3c(r1)
	lfs      f6, 8(r25)
	fmadds   f2, f5, f8, f0
	lfs      f1, lbl_80519458@sda21(r2)
	lfs      f0, 8(r21)
	fmadds   f2, f3, f6, f2
	fadds    f0, f1, f0
	fmuls    f2, f0, f2
	fmuls    f1, f5, f2
	fmuls    f0, f4, f2
	fmuls    f3, f3, f2
	fsubs    f2, f8, f1
	fsubs    f1, f7, f0
	fsubs    f0, f6, f3
	stfs     f2, 0(r25)
	stfs     f1, 4(r25)
	stfs     f0, 8(r25)
	lfs      f4, 0x40(r1)
	lfs      f1, 0(r26)
	fmuls    f0, f31, f4
	lfs      f3, 4(r26)
	fmuls    f2, f30, f4
	lfs      f5, 8(r26)
	fmuls    f4, f29, f4
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0(r26)
	stfs     f1, 4(r26)
	stfs     f2, 8(r26)

lbl_801BB018:
	li       r0, 0
	addi     r22, r22, 1
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)
	addi     r30, r30, 4

lbl_801BB028:
	lwz      r0, 0x1c(r24)
	cmpw     r22, r0
	blt      lbl_801BAE54
	lwz      r24, 4(r24)

lbl_801BB038:
	cmplwi   r24, 0
	bne      lbl_801BAE48
	li       r3, 0
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	lmw      r20, 0x50(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BB088
 * Size:	000740
 */
void RoomMapMgr::traceMove_original(Game::MoveInfo&, f32)
{
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	lis      r6, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	li       r5, 0
	stw      r0, 0x154(r1)
	addi     r6, r6, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r0, r3, 0xac
	stmw     r14, 0x108(r1)
	mr       r15, r4
	li       r20, 0
	stw      r6, 0x38(r1)
	stw      r5, 0x44(r1)
	stw      r5, 0x3c(r1)
	stw      r0, 0x40(r1)
	lwz      r0, 4(r4)
	lwz      r19, 0(r4)
	mr       r3, r0
	stw      r0, 0xf4(r1)
	lfs      f0, 0(r3)
	lfs      f3, 4(r3)
	fmuls    f0, f0, f1
	lfs      f2, 0(r19)
	lfs      f5, 8(r3)
	fmuls    f3, f3, f1
	lfs      f4, 4(r19)
	fadds    f0, f2, f0
	fmuls    f1, f5, f1
	lfs      f5, 8(r19)
	fadds    f2, f4, f3
	stfs     f0, 0(r19)
	fadds    f1, f5, f1
	stfs     f2, 4(r19)
	stfs     f1, 8(r19)
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_801BB134
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB1C0

lbl_801BB134:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB1A4

lbl_801BB150:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BB1C0
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_801BB1A4:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB150

lbl_801BB1C0:
	addi     r0, r1, 0x68
	stw      r0, 0xf8(r1)
	addi     r0, r1, 0x88
	stw      r0, 0xfc(r1)
	addi     r0, r1, 0x48
	lwz      r14, 0xf8(r1)
	mr       r21, r0
	stw      r0, 0x100(r1)
	lwz      r22, 0xfc(r1)
	b        lbl_801BB5AC

lbl_801BB1E8:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lfs      f0, 8(r19)
	lfs      f1, 0x148(r3)
	lfs      f3, 0x140(r3)
	fsubs    f4, f1, f0
	lfs      f0, 0(r19)
	lfs      f2, 0x14c(r3)
	lfs      f1, 0xc(r19)
	fsubs    f3, f3, f0
	fmuls    f0, f4, f4
	fadds    f2, f2, f1
	fmadds   f1, f3, f3, f0
	fmuls    f0, f2, f2
	fcmpo    cr0, f1, f0
	bgt      lbl_801BB4F0
	lwz      r0, 0x138(r31)
	mr       r4, r19
	addi     r3, r31, 0x108
	addi     r5, r1, 0x20
	stw      r0, 0xf0(r1)
	bl       PSMTXMultVec
	lfs      f1, 0x24(r1)
	mr       r4, r19
	lfs      f2, 0x28(r1)
	lfs      f0, 0x20(r1)
	lwz      r3, 0xf0(r1)
	stfs     f0, 0(r19)
	stfs     f1, 4(r19)
	stfs     f2, 8(r19)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r25, r14
	mr       r24, r22
	mr       r18, r3
	mr       r23, r21
	b        lbl_801BB4B8

lbl_801BB298:
	lwz      r3, 0xf0(r1)
	mr       r28, r25
	mr       r27, r24
	mr       r26, r23
	lwz      r3, 0x28(r3)
	li       r16, 0
	li       r29, 0
	lwz      r17, 0x18(r3)
	b        lbl_801BB4A8

lbl_801BB2BC:
	lwz      r3, 0xf0(r1)
	lwz      r4, 0x24(r18)
	lwz      r5, 0x28(r3)
	lwzx     r3, r4, r29
	lwz      r4, 0x1c(r5)
	lbz      r0, 0x19(r15)
	mulli    r3, r3, 0x60
	lwz      r4, 0x24(r4)
	cmplwi   r0, 0
	add      r30, r4, r3
	beq      lbl_801BB300
	mr       r3, r30
	mr       r4, r17
	mr       r5, r19
	addi     r6, r15, 0x84
	bl
"intersectHard__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>"
	b        lbl_801BB314

lbl_801BB300:
	mr       r3, r30
	mr       r4, r17
	mr       r5, r19
	addi     r6, r15, 0x84
	bl
"intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6SphereR10Vector3<f>"

lbl_801BB314:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB498
	addi     r3, r31, 0xd8
	addi     r4, r15, 0x84
	addi     r5, r1, 0x14
	bl       PSMTXMultVec
	lfs      f1, 0x18(r1)
	lfs      f2, 0x1c(r1)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x84(r15)
	stfs     f1, 0x88(r15)
	stfs     f2, 0x8c(r15)
	lfs      f8, 0xc(r30)
	stfs     f8, 0x2c(r1)
	lfs      f7, 0x10(r30)
	stfs     f7, 0x30(r1)
	lfs      f6, 0x14(r30)
	stfs     f6, 0x34(r1)
	lfs      f2, 0x118(r31)
	lfs      f1, 0x11c(r31)
	lfs      f0, 0x120(r31)
	fmuls    f4, f7, f2
	lfs      f5, 0x108(r31)
	fmuls    f2, f7, f1
	lfs      f3, 0x10c(r31)
	fmuls    f0, f7, f0
	lfs      f1, 0x110(r31)
	fmadds   f4, f8, f5, f4
	lfs      f5, 0x128(r31)
	fmadds   f2, f8, f3, f2
	lfs      f3, 0x12c(r31)
	fmadds   f0, f8, f1, f0
	lfs      f1, 0x130(r31)
	fmadds   f4, f6, f5, f4
	fmadds   f2, f6, f3, f2
	fmadds   f0, f6, f1, f0
	stfs     f4, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x10(r15)
	cmplwi   r3, 0
	beq      lbl_801BB3D4
	lwz      r12, 0(r3)
	addi     r4, r15, 0x84
	addi     r5, r1, 0x2c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801BB3D4:
	cmpwi    r20, 8
	bge      lbl_801BB498
	blt      lbl_801BB3FC
	lis      r3, lbl_8047FCF4@ha
	lis      r5, lbl_8047FEEC@ha
	addi     r3, r3, lbl_8047FCF4@l
	li       r4, 0xb28
	addi     r5, r5, lbl_8047FEEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801BB3FC:
	lfs      f1, 4(r19)
	li       r0, 1
	lfs      f0, 0x10(r30)
	addi     r25, r25, 4
	lfs      f9, 0x2c(r1)
	addi     r24, r24, 0xc
	fmuls    f0, f1, f0
	lfs      f3, 0(r19)
	lfs      f2, 0xc(r30)
	addi     r23, r23, 4
	lfs      f8, 0x30(r1)
	addi     r14, r14, 4
	lfs      f7, 0x34(r1)
	fmadds   f0, f3, f2, f0
	lfs      f6, 0xc(r19)
	addi     r22, r22, 0xc
	lfs      f5, 8(r19)
	addi     r21, r21, 4
	lfs      f4, 0x14(r30)
	lfs      f1, 0x18(r30)
	addi     r20, r20, 1
	fmadds   f2, f5, f4, f0
	stfs     f9, 0(r27)
	stb      r0, 0x74(r15)
	fsubs    f1, f2, f1
	lfs      f0, 0x2c(r1)
	stfs     f8, 4(r27)
	fsubs    f1, f6, f1
	stfs     f0, 0x78(r15)
	lfs      f0, 0x30(r1)
	stw      r30, 0(r28)
	addi     r28, r28, 4
	stfs     f0, 0x7c(r15)
	lfs      f0, 0x34(r1)
	stfs     f7, 8(r27)
	addi     r27, r27, 0xc
	stfs     f1, 0(r26)
	addi     r26, r26, 4
	stfs     f0, 0x80(r15)

lbl_801BB498:
	li       r0, 0
	addi     r16, r16, 1
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)
	addi     r29, r29, 4

lbl_801BB4A8:
	lwz      r0, 0x1c(r18)
	cmpw     r16, r0
	blt      lbl_801BB2BC
	lwz      r18, 4(r18)

lbl_801BB4B8:
	cmplwi   r18, 0
	beq      lbl_801BB4C8
	cmpwi    r20, 8
	blt      lbl_801BB298

lbl_801BB4C8:
	mr       r4, r19
	addi     r3, r31, 0xd8
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r19)
	stfs     f1, 4(r19)
	stfs     f2, 8(r19)

lbl_801BB4F0:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_801BB51C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB5AC

lbl_801BB51C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801BB590

lbl_801BB53C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BB5AC
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_801BB590:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB53C

lbl_801BB5AC:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_801BB1E8
	cmpwi    r20, 0
	bne      lbl_801BB5DC
	li       r3, 0
	b        lbl_801BB7B4

lbl_801BB5DC:
	lfs      f5, lbl_80519440@sda21(r2)
	li       r4, 0
	fmr      f6, f5
	fmr      f7, f5
	fmr      f2, f5
	fmr      f4, f5
	mtctr    r20
	ble      lbl_801BB67C
	lfs      f0, lbl_80519480@sda21(r2)

lbl_801BB600:
	lwz      r3, 0x100(r1)
	lfs      f1, 0(r3)
	fcmpo    cr0, f1, f4
	blt      lbl_801BB654
	lwz      r3, 0xfc(r1)
	fadds    f2, f2, f1
	addi     r4, r4, 1
	lfs      f8, 4(r3)
	lfs      f3, 0(r3)
	lfs      f1, 8(r3)
	fadds    f6, f6, f8
	fcmpo    cr0, f8, f0
	fadds    f5, f5, f3
	fadds    f7, f7, f1
	ble      lbl_801BB654
	lwz      r3, 0xf8(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x44(r15)
	stfs     f3, 0x50(r15)
	stfs     f8, 0x54(r15)
	stfs     f1, 0x58(r15)

lbl_801BB654:
	lwz      r3, 0x100(r1)
	addi     r3, r3, 4
	stw      r3, 0x100(r1)
	lwz      r3, 0xfc(r1)
	addi     r3, r3, 0xc
	stw      r3, 0xfc(r1)
	lwz      r3, 0xf8(r1)
	addi     r3, r3, 4
	stw      r3, 0xf8(r1)
	bdnz     lbl_801BB600

lbl_801BB67C:
	cmpwi    r4, 0
	bne      lbl_801BB68C
	li       r3, 0
	b        lbl_801BB7B4

lbl_801BB68C:
	xoris    r3, r4, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	lfd      f1, lbl_80519470@sda21(r2)
	stw      r0, 0xe8(r1)
	lfs      f4, lbl_80519458@sda21(r2)
	lfd      f0, 0xe8(r1)
	lfs      f3, lbl_80519440@sda21(r2)
	fsubs    f0, f0, f1
	fdivs    f4, f4, f0
	fmuls    f0, f6, f4
	fmuls    f1, f7, f4
	fmuls    f11, f5, f4
	fmuls    f4, f0, f0
	fmuls    f5, f1, f1
	fmadds   f4, f11, f11, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_801BB6E8
	ble      lbl_801BB6EC
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_801BB6EC

lbl_801BB6E8:
	fmr      f4, f3

lbl_801BB6EC:
	lfs      f3, lbl_80519440@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_801BB70C
	lfs      f3, lbl_80519458@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f11, f11, f3
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3

lbl_801BB70C:
	xoris    r4, r4, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xec(r1)
	lwz      r3, 0xf4(r1)
	stw      r0, 0xe8(r1)
	lfd      f6, lbl_80519470@sda21(r2)
	lfd      f4, 0xe8(r1)
	lfs      f9, 4(r3)
	fsubs    f6, f4, f6
	lfs      f10, 0(r3)
	fmuls    f3, f0, f9
	lwz      r4, 0xf4(r1)
	lfs      f4, lbl_80519458@sda21(r2)
	li       r3, 0
	fdivs    f2, f2, f6
	lfs      f8, 8(r4)
	fmadds   f5, f11, f10, f3
	lfs      f3, 8(r15)
	fmadds   f7, f1, f8, f5
	fadds    f5, f4, f3
	fmuls    f4, f0, f2
	fmuls    f3, f11, f2
	fmuls    f6, f5, f7
	fmuls    f2, f1, f2
	fmuls    f5, f11, f6
	fmuls    f0, f0, f6
	fmuls    f6, f1, f6
	fsubs    f5, f10, f5
	fsubs    f1, f9, f0
	fsubs    f0, f8, f6
	stfs     f5, 0(r4)
	stfs     f1, 4(r4)
	stfs     f0, 8(r4)
	lfs      f0, 0(r19)
	lfs      f1, 4(r19)
	lfs      f5, 8(r19)
	fadds    f0, f0, f3
	fadds    f1, f1, f4
	fadds    f2, f5, f2
	stfs     f0, 0(r19)
	stfs     f1, 4(r19)
	stfs     f2, 8(r19)

lbl_801BB7B4:
	lmw      r14, 0x108(r1)
	lwz      r0, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BB7C8
 * Size:	0004F0
 */
bool RoomMapMgr::findRayIntersection(Sys::RayIntersectInfo&)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stmw     r24, 0x90(r1)
	lis      r6, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	li       r5, 0
	addi     r6, r6, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r0, r3, 0xac
	stw      r6, 0x60(r1)
	mr       r30, r4
	lfs      f4, lbl_8051945C@sda21(r2)
	stw      r5, 0x6c(r1)
	lfs      f0, lbl_80519440@sda21(r2)
	stw      r5, 0x64(r1)
	stw      r0, 0x68(r1)
	lfs      f2, 0(r4)
	stfs     f2, 0x54(r1)
	lfs      f1, 4(r4)
	stfs     f1, 0x58(r1)
	lfs      f3, 8(r4)
	stfs     f3, 0x5c(r1)
	lfs      f1, 0xc(r4)
	stfs     f1, 0x48(r1)
	fadds    f1, f2, f1
	lfs      f2, 0x10(r4)
	fmuls    f30, f1, f4
	stfs     f2, 0x4c(r1)
	lfs      f1, 0x14(r4)
	stfs     f1, 0x50(r1)
	fadds    f3, f3, f1
	lfs      f2, 4(r4)
	lfs      f1, 0x10(r4)
	fmuls    f29, f3, f4
	lfs      f4, 0(r4)
	fsubs    f5, f2, f1
	lfs      f3, 0xc(r4)
	lfs      f2, 8(r4)
	lfs      f1, 0x14(r4)
	fsubs    f3, f4, f3
	fmuls    f4, f5, f5
	fsubs    f2, f2, f1
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801BB8E8
	ble      lbl_801BB8EC
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801BB8EC

lbl_801BB8E8:
	fmr      f31, f0

lbl_801BB8EC:
	lwz      r0, 0x6c(r1)
	li       r31, 0
	lfs      f22, lbl_80519484@sda21(r2)
	cmplwi   r0, 0
	bne      lbl_801BB91C
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BBC1C

lbl_801BB91C:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BB98C

lbl_801BB938:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BBC1C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_801BB98C:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BB938
	b        lbl_801BBC1C

lbl_801BB9AC:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	lfs      f0, 0x148(r3)
	lfs      f1, 0x140(r3)
	fsubs    f3, f29, f0
	lfs      f0, 0x14c(r3)
	fsubs    f2, f30, f1
	fadds    f0, f0, f31
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_801BBB60
	lwz      r26, 0x138(r29)
	addi     r3, r29, 0x108
	addi     r4, r1, 0x54
	addi     r5, r1, 0x20
	bl       PSMTXMultVec
	lfs      f28, 0x20(r1)
	addi     r3, r29, 0x108
	lfs      f27, 0x24(r1)
	addi     r4, r1, 0x48
	lfs      f26, 0x28(r1)
	addi     r5, r1, 0x14
	bl       PSMTXMultVec
	lfs      f5, 0x18(r1)
	addi     r4, r1, 0x38
	lfs      f6, 0x1c(r1)
	lfs      f4, 0x14(r1)
	fadds    f1, f27, f5
	lfs      f2, lbl_8051945C@sda21(r2)
	fadds    f0, f26, f6
	fadds    f3, f28, f4
	stfs     f28, 0x70(r1)
	fmuls    f1, f1, f2
	fmuls    f0, f0, f2
	stfs     f27, 0x74(r1)
	fmuls    f2, f3, f2
	stfs     f26, 0x78(r1)
	stfs     f4, 0x7c(r1)
	stfs     f5, 0x80(r1)
	stfs     f6, 0x84(r1)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	stfs     f31, 0x44(r1)
	lwz      r3, 0x28(r26)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r25, r3
	b        lbl_801BBB58

lbl_801BBA90:
	li       r24, 0
	li       r27, 0
	b        lbl_801BBB48

lbl_801BBA9C:
	lwz      r4, 0x24(r25)
	mr       r3, r30
	lwz      r5, 0x28(r26)
	lwzx     r0, r4, r27
	lwz      r4, 0x1c(r5)
	mulli    r0, r0, 0x60
	lwz      r4, 0x24(r4)
	add      r28, r4, r0
	mr       r4, r28
	bl       condition__Q23Sys16RayIntersectInfoFRQ23Sys8Triangle
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBB40
	lfs      f1, 0x18(r30)
	mr       r3, r28
	addi     r4, r1, 0x70
	addi     r5, r1, 0x2c
	bl       "intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBB40
	lfs      f1, 0x30(r1)
	li       r31, 1
	lfs      f0, 0x2c(r1)
	fsubs    f3, f1, f27
	lfs      f1, 0x34(r1)
	fsubs    f2, f0, f28
	fsubs    f1, f1, f26
	fmuls    f0, f3, f3
	fmadds   f0, f2, f2, f0
	fmadds   f21, f1, f1, f0
	fcmpo    cr0, f21, f22
	bge      lbl_801BBB40
	addi     r3, r29, 0xd8
	addi     r4, r1, 0x2c
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f25, 8(r1)
	fmr      f22, f21
	lfs      f24, 0xc(r1)
	lfs      f23, 0x10(r1)
	lfs      f0, 0x10(r28)
	stfs     f0, 0x48(r30)

lbl_801BBB40:
	addi     r27, r27, 4
	addi     r24, r24, 1

lbl_801BBB48:
	lwz      r0, 0x1c(r25)
	cmpw     r24, r0
	blt      lbl_801BBA9C
	lwz      r25, 4(r25)

lbl_801BBB58:
	cmplwi   r25, 0
	bne      lbl_801BBA90

lbl_801BBB60:
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	bne      lbl_801BBB8C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BBC1C

lbl_801BBB8C:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_801BBC00

lbl_801BBBAC:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BBC1C
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_801BBC00:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBBAC

lbl_801BBC1C:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x64(r1)
	cmplw    r4, r3
	bne      lbl_801BB9AC
	stfs     f25, 0x34(r30)
	mr       r3, r31
	stfs     f24, 0x38(r30)
	stfs     f23, 0x3c(r30)
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	lmw      r24, 0x90(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BBCB8
 * Size:	00008C
 */
f32 RoomMapMgr::getMinY(Vector3f& pos)
{
	CurrTriInfo info;
	info.mPosition = pos;
	info._0C       = 0;
	getCurrTri(info);
	return info.mMinY;
}

/*
 * --INFO--
 * Address:	801BBD44
 * Size:	000770
 */
void RoomMapMgr::createTriangles(Sys::CreateTriangleArg&)
{
	/*
	stwu     r1, -0x2cd0(r1)
	mflr     r0
	stw      r0, 0x2cd4(r1)
	li       r0, 0x2cc8
	stfd     f31, 0x2cc0(r1)
	psq_stx  f31, r1, r0, 0, qr0
	stmw     r14, 0x2c78(r1)
	mr       r15, r4
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	lfs      f31, 0xc(r15)
	mr       r14, r3
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	addi     r3, r1, 0x864
	li       r5, 0
	li       r6, 0xc
	li       r7, 0x300
	bl       __construct_array
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r14, 0xac
	cmplwi   r0, 0
	stw      r4, 0x30(r1)
	li       r20, 0
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r3, 0x38(r1)
	bne      lbl_801BBDCC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BBE54

lbl_801BBDCC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BBE38

lbl_801BBDE4:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BBE54
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BBE38:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BBDE4

lbl_801BBE54:
	addi     r0, r1, 0x464
	addi     r14, r1, 0x64
	stw      r0, 0x2c68(r1)
	li       r0, 0
	stw      r0, 0x2c6c(r1)
	b        lbl_801BC294

lbl_801BBE6C:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lfs      f1, 8(r15)
	lfs      f2, 0x198(r3)
	lfs      f0, 0x19c(r3)
	fsubs    f3, f2, f1
	lfs      f2, 0x190(r3)
	lfs      f1, 0(r15)
	fadds    f0, f0, f31
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_801BC1D8
	lwz      r0, 0x138(r31)
	mr       r4, r15
	addi     r3, r31, 0x108
	addi     r5, r1, 0x14
	stw      r0, 0x2c64(r1)
	bl       PSMTXMultVec
	lfs      f2, 0x14(r1)
	addi     r4, r1, 0x20
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x20(r1)
	lwz      r3, 0x2c64(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f31, 0x2c(r1)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r24, 0x2c6c(r1)
	mr       r19, r3
	lwz      r23, 0x2c68(r1)
	mr       r22, r14
	b        lbl_801BC1D0

lbl_801BBF1C:
	mr       r27, r24
	mr       r26, r23
	mr       r25, r22
	li       r18, 0
	li       r28, 0
	b        lbl_801BC1C0

lbl_801BBF34:
	lwz      r3, 0x2c64(r1)
	addi     r5, r1, 0x20
	lwz      r4, 0x24(r19)
	lwz      r6, 0x28(r3)
	lwzx     r0, r4, r28
	lwz      r3, 0x1c(r6)
	mulli    r0, r0, 0x60
	lwz      r17, 0x18(r6)
	lwz      r3, 0x24(r3)
	mr       r4, r17
	add      r30, r3, r0
	mr       r3, r30
	bl       intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC1B8
	addi     r21, r1, 0x40
	mr       r29, r30
	li       r16, 0

lbl_801BBF7C:
	lwz      r0, 0(r29)
	mr       r4, r21
	lwz      r6, 0x24(r17)
	addi     r3, r31, 0xd8
	mulli    r0, r0, 0xc
	addi     r5, r1, 8
	add      r6, r6, r0
	lfs      f0, 0(r6)
	stfs     f0, 0(r21)
	lfs      f0, 4(r6)
	stfs     f0, 4(r21)
	lfs      f0, 8(r6)
	stfs     f0, 8(r21)
	bl       PSMTXMultVec
	lfs      f0, 8(r1)
	addi     r16, r16, 1
	lfs      f1, 0xc(r1)
	cmpwi    r16, 3
	stfs     f0, 0(r21)
	addi     r29, r29, 4
	lfs      f0, 0x10(r1)
	stfs     f1, 4(r21)
	stfs     f0, 8(r21)
	addi     r21, r21, 0xc
	blt      lbl_801BBF7C
	addi     r3, r1, 0x464
	addi     r4, r1, 0x64
	li       r5, 0
	mtctr    r20
	cmpwi    r20, 0
	ble      lbl_801BC020

lbl_801BBFF8:
	lwz      r0, 0(r3)
	cmplw    r30, r0
	bne      lbl_801BC014
	lwz      r0, 0(r4)
	cmplw    r31, r0
	bne      lbl_801BC014
	li       r5, 1

lbl_801BC014:
	addi     r3, r3, 4
	addi     r4, r4, 4
	bdnz     lbl_801BBFF8

lbl_801BC020:
	clrlwi.  r0, r5, 0x18
	bne      lbl_801BC1B8
	cmpwi    r20, 0x100
	bge      lbl_801BC1CC
	lfs      f5, 0x10(r30)
	lfs      f1, 0xec(r31)
	lfs      f3, 0xe8(r31)
	lfs      f0, 0xf0(r31)
	fmuls    f2, f5, f1
	lfs      f6, 0xc(r30)
	fmuls    f4, f5, f3
	lfs      f3, 0xdc(r31)
	fmuls    f0, f5, f0
	lfs      f5, 0xd8(r31)
	lfs      f1, 0xe0(r31)
	fmadds   f3, f6, f3, f2
	lfs      f7, 0x14(r30)
	fmadds   f5, f6, f5, f4
	lfs      f4, 0xfc(r31)
	fmadds   f1, f6, f1, f0
	lfs      f6, 0xf8(r31)
	lfs      f2, 0x100(r31)
	fmadds   f3, f7, f4, f3
	lfs      f0, 0x14(r15)
	fmadds   f4, f7, f6, f5
	fmadds   f1, f7, f2, f1
	fcmpo    cr0, f3, f0
	ble      lbl_801BC1B8
	lfs      f0, 0x10(r15)
	mulli    r3, r27, 0xc
	addi     r4, r1, 0x864
	stw      r30, 0(r26)
	fmuls    f11, f4, f0
	lfs      f4, 0x40(r1)
	fmuls    f10, f3, f0
	lfs      f5, 0x44(r1)
	add      r4, r4, r3
	fadds    f3, f4, f11
	fmuls    f9, f1, f0
	lfs      f6, 0x48(r1)
	fadds    f7, f5, f10
	stw      r31, 0(r25)
	frsp     f2, f3
	fadds    f8, f6, f9
	lfs      f4, 0x4c(r1)
	frsp     f1, f7
	stfs     f3, 0x40(r1)
	addi     r3, r3, 0xc
	fadds    f3, f4, f11
	stfs     f2, 0(r4)
	frsp     f0, f8
	lfs      f5, 0x50(r1)
	addi     r20, r20, 1
	stfs     f7, 0x44(r1)
	fadds    f7, f5, f10
	lfs      f6, 0x54(r1)
	stfs     f1, 4(r4)
	frsp     f2, f3
	lfs      f4, 0x58(r1)
	addi     r27, r27, 3
	stfs     f8, 0x48(r1)
	fadds    f8, f6, f9
	frsp     f1, f7
	lfs      f5, 0x5c(r1)
	stfs     f0, 8(r4)
	addi     r4, r1, 0x864
	add      r4, r4, r3
	stfs     f2, 0(r4)
	frsp     f0, f8
	lfs      f6, 0x60(r1)
	stfs     f3, 0x4c(r1)
	fadds    f3, f4, f11
	addi     r3, r3, 0xc
	addi     r26, r26, 4
	stfs     f1, 4(r4)
	frsp     f2, f3
	addi     r25, r25, 4
	addi     r24, r24, 3
	stfs     f7, 0x50(r1)
	fadds    f7, f5, f10
	addi     r23, r23, 4
	stfs     f0, 8(r4)
	addi     r4, r1, 0x864
	add      r4, r4, r3
	lwz      r3, 0x2c6c(r1)
	stfs     f8, 0x54(r1)
	fadds    f8, f6, f9
	addi     r3, r3, 3
	frsp     f1, f7
	stfs     f2, 0(r4)
	addi     r22, r22, 4
	frsp     f0, f8
	stw      r3, 0x2c6c(r1)
	addi     r14, r14, 4
	lwz      r3, 0x2c68(r1)
	stfs     f1, 4(r4)
	addi     r3, r3, 4
	stfs     f3, 0x58(r1)
	stfs     f7, 0x5c(r1)
	stfs     f8, 0x60(r1)
	stfs     f0, 8(r4)
	stw      r3, 0x2c68(r1)

lbl_801BC1B8:
	addi     r28, r28, 4
	addi     r18, r18, 1

lbl_801BC1C0:
	lwz      r0, 0x1c(r19)
	cmpw     r18, r0
	blt      lbl_801BBF34

lbl_801BC1CC:
	lwz      r19, 4(r19)

lbl_801BC1D0:
	cmplwi   r19, 0
	bne      lbl_801BBF1C

lbl_801BC1D8:
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_801BC204
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC294

lbl_801BC204:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC278

lbl_801BC224:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BC294
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BC278:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC224

lbl_801BC294:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_801BBE6C
	cmpwi    r20, 0
	ble      lbl_801BC490
	mulli    r14, r20, 3
	mulli    r3, r14, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r14
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	cmpwi    r14, 0
	stw      r3, 0x18(r15)
	li       r16, 0
	ble      lbl_801BC490
	cmpwi    r14, 8
	addi     r3, r14, -8
	ble      lbl_801BC448
	addi     r0, r3, 7
	addi     r5, r1, 0x864
	srwi     r0, r0, 3
	li       r4, 0
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_801BC448

lbl_801BC31C:
	lwz      r0, 0x18(r15)
	addi     r12, r4, 0xc
	lfs      f0, 0(r5)
	addi     r11, r4, 0x18
	add      r3, r0, r4
	addi     r10, r4, 0x24
	stfs     f0, 0(r3)
	addi     r9, r4, 0x30
	addi     r8, r4, 0x3c
	addi     r7, r4, 0x48
	lfs      f0, 4(r5)
	addi     r6, r4, 0x54
	addi     r4, r4, 0x60
	addi     r16, r16, 8
	stfs     f0, 4(r3)
	lfs      f0, 8(r5)
	stfs     f0, 8(r3)
	lwz      r0, 0x18(r15)
	lfs      f0, 0xc(r5)
	add      r12, r0, r12
	stfs     f0, 0(r12)
	lfs      f0, 0x10(r5)
	stfs     f0, 4(r12)
	lfs      f0, 0x14(r5)
	stfs     f0, 8(r12)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x18(r5)
	add      r11, r0, r11
	stfs     f0, 0(r11)
	lfs      f0, 0x1c(r5)
	stfs     f0, 4(r11)
	lfs      f0, 0x20(r5)
	stfs     f0, 8(r11)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x24(r5)
	add      r10, r0, r10
	stfs     f0, 0(r10)
	lfs      f0, 0x28(r5)
	stfs     f0, 4(r10)
	lfs      f0, 0x2c(r5)
	stfs     f0, 8(r10)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x30(r5)
	add      r9, r0, r9
	stfs     f0, 0(r9)
	lfs      f0, 0x34(r5)
	stfs     f0, 4(r9)
	lfs      f0, 0x38(r5)
	stfs     f0, 8(r9)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x3c(r5)
	add      r8, r0, r8
	stfs     f0, 0(r8)
	lfs      f0, 0x40(r5)
	stfs     f0, 4(r8)
	lfs      f0, 0x44(r5)
	stfs     f0, 8(r8)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x48(r5)
	add      r7, r0, r7
	stfs     f0, 0(r7)
	lfs      f0, 0x4c(r5)
	stfs     f0, 4(r7)
	lfs      f0, 0x50(r5)
	stfs     f0, 8(r7)
	lwz      r0, 0x18(r15)
	lfs      f0, 0x54(r5)
	add      r6, r0, r6
	stfs     f0, 0(r6)
	lfs      f0, 0x58(r5)
	stfs     f0, 4(r6)
	lfs      f0, 0x5c(r5)
	addi     r5, r5, 0x60
	stfs     f0, 8(r6)
	bdnz     lbl_801BC31C

lbl_801BC448:
	mulli    r4, r16, 0xc
	addi     r3, r1, 0x864
	subf     r0, r16, r14
	add      r3, r3, r4
	mtctr    r0
	cmpw     r16, r14
	bge      lbl_801BC490

lbl_801BC464:
	lwz      r0, 0x18(r15)
	lfs      f0, 0(r3)
	add      r5, r0, r4
	addi     r4, r4, 0xc
	stfs     f0, 0(r5)
	lfs      f0, 4(r3)
	stfs     f0, 4(r5)
	lfs      f0, 8(r3)
	addi     r3, r3, 0xc
	stfs     f0, 8(r5)
	bdnz     lbl_801BC464

lbl_801BC490:
	stw      r20, 0x1c(r15)
	li       r0, 0x2cc8
	psq_lx   f31, r1, r0, 0, qr0
	lfd      f31, 0x2cc0(r1)
	lmw      r14, 0x2c78(r1)
	lwz      r0, 0x2cd4(r1)
	mtlr     r0
	addi     r1, r1, 0x2cd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BC4B4
 * Size:	000460
 */
void RoomMapMgr::getCurrTri(Game::CurrTriInfo&)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lfs      f0, lbl_80519488@sda21(r2)
	stw      r0, 0x64(r1)
	li       r0, 0
	cmplwi   r0, 0
	stmw     r24, 0x40(r1)
	mr       r25, r3
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	mr       r26, r4
	stfs     f0, 0x18(r4)
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r25, 0xac
	stw      r4, 0x30(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r3, 0x38(r1)
	bne      lbl_801BC514
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC894

lbl_801BC514:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC580

lbl_801BC52C:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BC894
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BC580:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC52C
	b        lbl_801BC894

lbl_801BC5A0:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lfs      f0, 8(r26)
	lfs      f1, 0x198(r3)
	lfs      f4, 0x19c(r3)
	fsubs    f3, f1, f0
	lfs      f2, 0x190(r3)
	lfs      f1, 0(r26)
	fmuls    f0, f4, f4
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_801BC7D8
	lwz      r29, 0x138(r31)
	mr       r4, r26
	addi     r3, r31, 0x108
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f3, 8(r1)
	addi     r4, r1, 0x14
	lfs      f2, 0xc(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, lbl_80519440@sda21(r2)
	stfs     f3, 0x24(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f3, 0x14(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	lwz      r3, 0x28(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	b        lbl_801BC7D0

lbl_801BC648:
	li       r27, 0
	li       r30, 0
	b        lbl_801BC7C0

lbl_801BC654:
	lwz      r3, 0x24(r28)
	addi     r4, r1, 0x24
	lwz      r5, 0x28(r29)
	lwzx     r0, r3, r30
	lwz      r3, 0x1c(r5)
	mulli    r0, r0, 0x60
	lwz      r3, 0x24(r3)
	add      r24, r3, r0
	mr       r3, r24
	bl       "insideXZ__Q23Sys8TriangleFR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC7B8
	lfs      f10, 0x28(r1)
	lfs      f0, 0x18(r26)
	fcmpo    cr0, f0, f10
	ble      lbl_801BC720
	stfs     f10, 0x18(r26)
	lbz      r0, 0xc(r26)
	cmplwi   r0, 0
	beq      lbl_801BC720
	stw      r24, 0x14(r26)
	lfs      f0, 0xc(r24)
	stfs     f0, 0x20(r26)
	lfs      f0, 0x10(r24)
	stfs     f0, 0x24(r26)
	lfs      f0, 0x14(r24)
	stfs     f0, 0x28(r26)
	lfs      f7, 0x24(r26)
	lfs      f1, 0x118(r31)
	lfs      f0, 0x11c(r31)
	fmuls    f1, f7, f1
	lfs      f8, 0x20(r26)
	lfs      f4, 0x108(r31)
	fmuls    f2, f7, f0
	lfs      f0, 0x120(r31)
	lfs      f3, 0x10c(r31)
	fmadds   f5, f8, f4, f1
	lfs      f9, 0x28(r26)
	lfs      f6, 0x128(r31)
	fmuls    f0, f7, f0
	lfs      f1, 0x110(r31)
	fmadds   f3, f8, f3, f2
	lfs      f4, 0x12c(r31)
	fmadds   f5, f9, f6, f5
	lfs      f2, 0x130(r31)
	fmadds   f0, f8, f1, f0
	fmadds   f1, f9, f4, f3
	stfs     f5, 0x20(r26)
	fmadds   f0, f9, f2, f0
	stfs     f1, 0x24(r26)
	stfs     f0, 0x28(r26)

lbl_801BC720:
	lfs      f0, 0x1c(r26)
	fcmpo    cr0, f0, f10
	bge      lbl_801BC7B8
	stfs     f10, 0x1c(r26)
	lbz      r0, 0xc(r26)
	cmplwi   r0, 0
	bne      lbl_801BC7B8
	stw      r24, 0x14(r26)
	lfs      f0, 0xc(r24)
	stfs     f0, 0x20(r26)
	lfs      f0, 0x10(r24)
	stfs     f0, 0x24(r26)
	lfs      f0, 0x14(r24)
	stfs     f0, 0x28(r26)
	lfs      f7, 0x24(r26)
	lfs      f1, 0x118(r31)
	lfs      f0, 0x11c(r31)
	fmuls    f1, f7, f1
	lfs      f8, 0x20(r26)
	lfs      f4, 0x108(r31)
	fmuls    f2, f7, f0
	lfs      f0, 0x120(r31)
	lfs      f3, 0x10c(r31)
	fmadds   f5, f8, f4, f1
	lfs      f9, 0x28(r26)
	lfs      f6, 0x128(r31)
	fmuls    f0, f7, f0
	lfs      f1, 0x110(r31)
	fmadds   f3, f8, f3, f2
	lfs      f4, 0x12c(r31)
	fmadds   f5, f9, f6, f5
	lfs      f2, 0x130(r31)
	fmadds   f0, f8, f1, f0
	fmadds   f1, f9, f4, f3
	stfs     f5, 0x20(r26)
	fmadds   f0, f9, f2, f0
	stfs     f1, 0x24(r26)
	stfs     f0, 0x28(r26)

lbl_801BC7B8:
	addi     r30, r30, 4
	addi     r27, r27, 1

lbl_801BC7C0:
	lwz      r0, 0x1c(r28)
	cmpw     r27, r0
	blt      lbl_801BC654
	lwz      r28, 4(r28)

lbl_801BC7D0:
	cmplwi   r28, 0
	bne      lbl_801BC648

lbl_801BC7D8:
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_801BC804
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC894

lbl_801BC804:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_801BC878

lbl_801BC824:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BC894
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_801BC878:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC824

lbl_801BC894:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_801BC5A0
	lwz      r3, 0x2c(r25)
	bl       hasHiddenCollision__Q34Game4Cave9FloorInfoFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BC8E8
	lfs      f1, 0x1c(r26)
	lfs      f0, lbl_80519440@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801BC8E8
	stfs     f0, 0x1c(r26)
	addi     r0, r25, 0x40
	stfs     f0, 0x18(r26)
	stw      r0, 0x14(r26)
	b        lbl_801BC900

lbl_801BC8E8:
	lwz      r0, 0x14(r26)
	cmplwi   r0, 0
	bne      lbl_801BC900
	lfs      f0, lbl_80519440@sda21(r2)
	stfs     f0, 0x18(r26)
	stfs     f0, 0x1c(r26)

lbl_801BC900:
	lmw      r24, 0x40(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BC914
 * Size:	0016B8
 */
void RoomMapMgr::makeOneRoom(f32, f32, f32, char*, short, Game::RoomLink*, Game::ObjectLayoutInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2D0(r1)
	  mflr      r0
	  stw       r0, 0x2D4(r1)
	  stfd      f31, 0x2C0(r1)
	  psq_st    f31,0x2C8(r1),0,0
	  stfd      f30, 0x2B0(r1)
	  psq_st    f30,0x2B8(r1),0,0
	  stfd      f29, 0x2A0(r1)
	  psq_st    f29,0x2A8(r1),0,0
	  stfd      f28, 0x290(r1)
	  psq_st    f28,0x298(r1),0,0
	  stfd      f27, 0x280(r1)
	  psq_st    f27,0x288(r1),0,0
	  stmw      r20, 0x250(r1)
	  mr        r29, r3
	  lfs       f0, -0x4ED0(r2)
	  addi      r3, r29, 0xAC
	  lis       r8, 0x8048
	  lwz       r12, 0xAC(r29)
	  fmuls     f0, f0, f3
	  lfs       f3, -0x4ED4(r2)
	  fmr       f28, f1
	  lwz       r12, 0x7C(r12)
	  fmr       f27, f2
	  fmuls     f31, f3, f0
	  mr        r26, r4
	  mr        r21, r5
	  mr        r24, r6
	  mr        r20, r7
	  subi      r30, r8, 0x390
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  lis       r4, 0x804B
	  sth       r21, 0x184(r3)
	  lis       r3, 0x804B
	  subi      r23, r4, 0x5D0C
	  li        r27, 0
	  stw       r24, 0x180(r31)
	  subi      r22, r3, 0x5D48
	  stw       r20, 0xC4(r31)
	  b         .loc_0x1B8

	.loc_0xA8:
	  lwz       r3, 0xC4(r31)
	  mr        r5, r27
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r25, r3
	  sth       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stw       r23, 0x15C(r1)
	  li        r8, 0
	  li        r0, -0x1
	  li        r7, 0xFF
	  li        r6, 0x1
	  sth       r3, 0x8(r1)
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x15C
	  stw       r22, 0x15C(r1)
	  addi      r5, r1, 0x8
	  stb       r8, 0x178(r1)
	  sth       r8, 0x170(r1)
	  stb       r7, 0x172(r1)
	  stw       r8, 0x174(r1)
	  stb       r8, 0x173(r1)
	  stb       r6, 0x160(r1)
	  stb       r8, 0x179(r1)
	  stw       r0, 0x180(r1)
	  stw       r0, 0x17C(r1)
	  stb       r8, 0x17A(r1)
	  stb       r8, 0x17B(r1)
	  bl        -0x4EEB8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x15C
	  bl        -0x4F380
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x16C
	  lbz       r0, -0x7BE0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  addi      r3, r1, 0x15C
	  bl        0x809B0
	  b         .loc_0x174

	.loc_0x16C:
	  li        r0, 0
	  sth       r0, 0x8(r1)

	.loc_0x174:
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r3,0,24,31
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, -0x6E20(r13)
	  mr        r5, r20
	  li        r6, 0
	  bl        -0xAF270
	  addi      r27, r27, 0x1

	.loc_0x1B8:
	  lwz       r3, 0xC4(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r27, r3
	  blt+      .loc_0xA8
	  li        r20, 0
	  b         .loc_0x228

	.loc_0x1E0:
	  lwz       r3, 0xC4(r31)
	  mr        r5, r20
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x10C
	  bl        -0x560E4
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x10C
	  bl        -0x4F458
	  addi      r20, r20, 0x1

	.loc_0x228:
	  lwz       r3, 0xC4(r31)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r20, r3
	  blt+      .loc_0x1E0
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2A0
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2A0
	  lwz       r3, -0x7B88(r13)
	  addi      r4, r1, 0xC
	  bl        0x6B2C4
	  mr.       r4, r3
	  beq-      .loc_0x2A0
	  lwz       r0, 0xC(r1)
	  lwz       r3, -0x6CE0(r13)
	  lha       r5, 0x258(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x4DDFC
	  mr        r4, r3
	  addi      r3, r1, 0x134
	  bl        -0x56160
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x134
	  bl        -0x4F4D4

	.loc_0x2A0:
	  lfs       f0, -0x4F14(r2)
	  addi      r3, r1, 0x214
	  lfs       f1, -0x4F20(r2)
	  addi      r4, r1, 0xD0
	  fmuls     f2, f28, f0
	  stfs      f31, 0xC8(r1)
	  fmuls     f0, f27, f0
	  addi      r5, r1, 0xC4
	  stfs      f1, 0xD4(r1)
	  stfs      f2, 0xD0(r1)
	  stfs      f0, 0xD8(r1)
	  stfs      f1, 0xC4(r1)
	  stfs      f1, 0xCC(r1)
	  bl        0x26BCA0
	  lwz       r3, 0xA8(r29)
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5EE0
	  cmplwi    r0, 0
	  stw       r4, 0x38(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0x318
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x490

	.loc_0x318:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x384

	.loc_0x330:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x490
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x384:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x330
	  b         .loc_0x490

	.loc_0x3A4:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r21, r3
	  mr        r3, r26
	  lwz       r4, 0x8(r21)
	  bl        -0xF2618
	  cmpwi     r3, 0
	  bne-      .loc_0x3D4
	  b         .loc_0x4B4

	.loc_0x3D4:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x400
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x490

	.loc_0x400:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x474

	.loc_0x420:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x490
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x474:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x420

	.loc_0x490:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x3A4
	  li        r21, 0

	.loc_0x4B4:
	  stw       r21, 0x138(r31)
	  addi      r3, r1, 0x214
	  addi      r4, r31, 0xD8
	  bl        -0xD2B08
	  addi      r3, r1, 0x214
	  addi      r4, r31, 0x108
	  bl        -0xD29C4
	  li        r3, 0x14
	  bl        -0x198F44
	  mr.       r0, r3
	  beq-      .loc_0x4F4
	  lwz       r4, 0xC(r21)
	  lis       r5, 0x2
	  li        r6, 0x2
	  bl        0x2813D8
	  mr        r0, r3

	.loc_0x4F4:
	  stw       r0, 0x13C(r31)
	  li        r4, 0
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x1566B0
	  lwz       r3, 0x13C(r31)
	  li        r4, 0x200
	  lwz       r3, 0x8(r3)
	  bl        -0x156750
	  lwz       r4, 0x13C(r31)
	  addi      r3, r31, 0xD8
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0xD2B70
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x156554
	  lwz       r3, 0x13C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x156690
	  lwz       r0, 0xE8(r21)
	  stw       r0, 0xC8(r31)
	  lwz       r20, 0xC8(r31)
	  mulli     r3, r20, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x198EF0
	  lis       r4, 0x8016
	  mr        r7, r20
	  addi      r4, r4, 0x38EC
	  li        r5, 0
	  li        r6, 0xC
	  bl        -0xFB4C4
	  li        r20, 0
	  stw       r3, 0xCC(r31)
	  mr        r22, r20
	  mr        r23, r20
	  b         .loc_0x5E4

	.loc_0x5B8:
	  lwz       r3, 0xCC(r31)
	  lwz       r0, 0xEC(r21)
	  add       r3, r3, r23
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r22
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r22, r22, 0x10
	  addi      r23, r23, 0xC
	  addi      r20, r20, 0x1

	.loc_0x5E4:
	  lwz       r0, 0xC8(r31)
	  cmpw      r20, r0
	  blt+      .loc_0x5B8
	  lfs       f1, 0x7C(r21)
	  addi      r3, r1, 0x1E4
	  lfs       f0, -0x4F20(r2)
	  addi      r4, r1, 0xD0
	  stfs      f1, 0xF4(r1)
	  addi      r5, r1, 0xB8
	  lfs       f1, 0x80(r21)
	  stfs      f1, 0xF8(r1)
	  lfs       f1, 0x84(r21)
	  stfs      f1, 0xFC(r1)
	  lfs       f1, 0x88(r21)
	  stfs      f1, 0x100(r1)
	  lfs       f1, 0x8C(r21)
	  stfs      f1, 0x104(r1)
	  lfs       f1, 0x90(r21)
	  stfs      f1, 0x108(r1)
	  stfs      f0, 0xB8(r1)
	  stfs      f31, 0xBC(r1)
	  stfs      f0, 0xC0(r1)
	  bl        0x26B938
	  addi      r3, r1, 0xF4
	  addi      r4, r1, 0x1E4
	  bl        0x2560E0
	  lfs       f1, 0xF4(r1)
	  lfs       f0, 0xDC(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x660
	  stfs      f1, 0xDC(r29)

	.loc_0x660:
	  lfs       f1, 0xF8(r1)
	  lfs       f0, 0xE0(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x674
	  stfs      f1, 0xE0(r29)

	.loc_0x674:
	  lfs       f1, 0xFC(r1)
	  lfs       f0, 0xE4(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x688
	  stfs      f1, 0xE4(r29)

	.loc_0x688:
	  lfs       f1, 0x100(r1)
	  lfs       f0, 0xE8(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x69C
	  stfs      f1, 0xE8(r29)

	.loc_0x69C:
	  lfs       f1, 0x104(r1)
	  lfs       f0, 0xEC(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6B0
	  stfs      f1, 0xEC(r29)

	.loc_0x6B0:
	  lfs       f1, 0x108(r1)
	  lfs       f0, 0xF0(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6C4
	  stfs      f1, 0xF0(r29)

	.loc_0x6C4:
	  addi      r3, r1, 0xF4
	  addi      r4, r31, 0x140
	  bl        0x255F94
	  lfs       f0, 0xF8(r1)
	  addi      r3, r1, 0xDC
	  lfs       f2, 0x104(r1)
	  addi      r4, r31, 0x190
	  lfs       f5, 0xF4(r1)
	  lfs       f4, 0xFC(r1)
	  lfs       f3, 0x100(r1)
	  lfs       f1, 0x108(r1)
	  stfs      f0, 0xE0(r1)
	  lfs       f0, -0x4F20(r2)
	  stfs      f2, 0xEC(r1)
	  stfs      f5, 0xDC(r1)
	  stfs      f4, 0xE4(r1)
	  stfs      f3, 0xE8(r1)
	  stfs      f1, 0xF0(r1)
	  stfs      f0, 0xE0(r1)
	  stfs      f0, 0xEC(r1)
	  bl        0x255F4C
	  lwz       r4, 0x13C(r31)
	  addi      r3, r1, 0x78
	  bl        0x2816FC
	  lwz       r5, 0x13C(r31)
	  li        r4, 0
	  lfs       f30, 0x78(r1)
	  lwz       r0, 0xC(r5)
	  lfs       f29, 0x7C(r1)
	  lfs       f28, 0x80(r1)
	  lfs       f27, -0x4F20(r2)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x770

	.loc_0x74C:
	  lwz       r3, 0x10(r5)
	  addi      r0, r4, 0x18
	  lwzx      r3, r3, r0
	  lfs       f0, 0x38(r3)
	  fcmpo     cr0, f27, f0
	  bge-      .loc_0x768
	  fmr       f27, f0

	.loc_0x768:
	  addi      r4, r4, 0x3C
	  bdnz+     .loc_0x74C

	.loc_0x770:
	  mr        r3, r26
	  addi      r4, r30, 0x2BC
	  bl        -0xF29CC
	  cmpwi     r3, 0
	  bne-      .loc_0x78C
	  lfs       f0, -0x4F00(r2)
	  fadds     f27, f27, f0

	.loc_0x78C:
	  lfs       f0, 0xD0(r1)
	  addi      r3, r31, 0x160
	  lfs       f2, 0xD4(r1)
	  addi      r4, r1, 0xAC
	  fadds     f1, f30, f0
	  lfs       f3, 0xD8(r1)
	  fadds     f2, f29, f2
	  lfs       f0, -0x4ECC(r2)
	  fadds     f3, f28, f3
	  addi      r5, r1, 0xA0
	  stfs      f1, 0x150(r31)
	  stfs      f2, 0x154(r31)
	  stfs      f3, 0x158(r31)
	  stfs      f27, 0x15C(r31)
	  lfs       f3, 0x144(r31)
	  lfs       f1, 0x14C(r31)
	  lfs       f2, 0x140(r31)
	  fsubs     f0, f3, f0
	  lfs       f4, 0x148(r31)
	  stfs      f3, 0xA4(r1)
	  stfs      f2, 0xAC(r1)
	  stfs      f3, 0xB0(r1)
	  stfs      f4, 0xB4(r1)
	  stfs      f2, 0xA0(r1)
	  stfs      f4, 0xA8(r1)
	  stfs      f0, 0xA4(r1)
	  bl        0x26455C
	  lwz       r3, 0x10(r29)
	  addi      r4, r21, 0x34
	  addi      r5, r1, 0x214
	  bl        -0xD270
	  mr        r3, r29
	  mr        r4, r21
	  bl        0x109C
	  mr        r27, r3
	  lha       r0, 0x6C(r3)
	  sth       r0, 0x186(r31)
	  stw       r27, 0xC0(r31)
	  lwz       r0, 0x114(r3)
	  stw       r0, 0xD0(r31)
	  lwz       r20, 0xD0(r31)
	  rlwinm    r3,r20,4,0,27
	  addi      r3, r3, 0x10
	  bl        -0x1991A0
	  lis       r4, 0x801B
	  mr        r7, r20
	  addi      r4, r4, 0x76E4
	  li        r5, 0
	  li        r6, 0x10
	  bl        -0xFB774
	  stw       r3, 0xD4(r31)
	  li        r22, 0
	  li        r20, 0x1
	  lhz       r0, 0x6E(r27)
	  sth       r0, 0x188(r31)
	  b         .loc_0x8A4

	.loc_0x86C:
	  mr        r4, r22
	  addi      r3, r27, 0x118
	  bl        0x254514
	  mr        r4, r3
	  addi      r3, r21, 0xAC
	  lwz       r12, 0xAC(r21)
	  lwz       r0, 0x4C(r4)
	  lwz       r12, 0x2C(r12)
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  stb       r20, 0x6E(r3)
	  sth       r22, 0x76(r3)
	  addi      r22, r22, 0x1

	.loc_0x8A4:
	  lwz       r0, 0x114(r27)
	  cmpw      r22, r0
	  blt+      .loc_0x86C
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r4, r3, 0x2380
	  addi      r3, r21, 0xAC
	  cmplwi    r0, 0
	  stw       r4, 0x90(r1)
	  li        r28, 0
	  stw       r0, 0x9C(r1)
	  stw       r0, 0x94(r1)
	  stw       r3, 0x98(r1)
	  bne-      .loc_0x8F4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xA54

	.loc_0x8F4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x960

	.loc_0x90C:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA54
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x960:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x90C
	  b         .loc_0xA54

	.loc_0x980:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x9C(r1)
	  addi      r28, r28, 0x1
	  cmplwi    r0, 0
	  bne-      .loc_0x9C4
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xA54

	.loc_0x9C4:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xA38

	.loc_0x9E4:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA54
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0xA38:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x9E4

	.loc_0xA54:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x94(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x980
	  rlwinm    r3,r28,2,0,29
	  li        r4, -0x20
	  bl        -0x199398
	  stw       r3, 0x18C(r31)
	  li        r26, 0
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xAB0
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1268

	.loc_0xAB0:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0xB20

	.loc_0xACC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1268
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0xB20:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xACC
	  b         .loc_0x1268

	.loc_0xB40:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  lbz       r0, 0x6E(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x10A4
	  lwz       r4, 0x10(r24)
	  li        r23, 0
	  b         .loc_0xB8C

	.loc_0xB70:
	  lhz       r3, 0x18(r4)
	  lha       r0, 0x76(r25)
	  cmpw      r3, r0
	  bne-      .loc_0xB88
	  mr        r23, r4
	  b         .loc_0xB94

	.loc_0xB88:
	  lwz       r4, 0x4(r4)

	.loc_0xB8C:
	  cmplwi    r4, 0
	  bne+      .loc_0xB70

	.loc_0xB94:
	  cmplwi    r23, 0
	  bne-      .loc_0xBB0
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xD83
	  crclr     6, 0x6
	  bl        -0x192E80

	.loc_0xBB0:
	  lis       r3, 0x804B
	  li        r0, 0
	  lha       r21, 0x1C(r23)
	  addi      r4, r3, 0x5D28
	  addi      r3, r29, 0xAC
	  cmplwi    r0, 0
	  stw       r4, 0x28(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  bne-      .loc_0xBF4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xD64

	.loc_0xBF4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xC60

	.loc_0xC0C:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD64
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0xC60:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC0C
	  b         .loc_0xD64

	.loc_0xC80:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x184(r3)
	  cmpw      r0, r21
	  bne-      .loc_0xCA8
	  mr        r21, r3
	  b         .loc_0xD88

	.loc_0xCA8:
	  lwz       r0, 0x34(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xCD4
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xD64

	.loc_0xCD4:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0xD48

	.loc_0xCF4:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD64
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0xD48:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xCF4

	.loc_0xD64:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xC80
	  li        r21, 0

	.loc_0xD88:
	  lha       r4, 0x76(r25)
	  addi      r3, r27, 0x118
	  bl        0x253FF8
	  lwz       r20, 0x28C(r30)
	  cmplwi    r21, 0
	  lwz       r12, 0x290(r30)
	  mr        r22, r3
	  lwz       r11, 0x294(r30)
	  lwz       r10, 0x298(r30)
	  lwz       r9, 0x29C(r30)
	  lwz       r8, 0x2A0(r30)
	  lwz       r7, 0x2A4(r30)
	  lwz       r6, 0x2A8(r30)
	  lwz       r5, 0x2AC(r30)
	  lwz       r4, 0x2B0(r30)
	  lwz       r3, 0x2B4(r30)
	  lwz       r0, 0x2B8(r30)
	  stw       r20, 0x6C(r1)
	  stw       r12, 0x70(r1)
	  lfs       f11, 0x6C(r1)
	  stw       r11, 0x74(r1)
	  lfs       f10, 0x70(r1)
	  stw       r10, 0x60(r1)
	  lfs       f9, 0x74(r1)
	  stw       r9, 0x64(r1)
	  lfs       f8, 0x60(r1)
	  stw       r8, 0x68(r1)
	  lfs       f7, 0x64(r1)
	  stw       r7, 0x54(r1)
	  lfs       f6, 0x68(r1)
	  stw       r6, 0x58(r1)
	  lfs       f5, 0x54(r1)
	  stw       r5, 0x5C(r1)
	  lfs       f4, 0x58(r1)
	  stw       r4, 0x48(r1)
	  lfs       f3, 0x5C(r1)
	  stw       r3, 0x4C(r1)
	  lfs       f2, 0x48(r1)
	  stw       r0, 0x50(r1)
	  lfs       f1, 0x4C(r1)
	  lfs       f0, 0x50(r1)
	  stfs      f11, 0x1B4(r1)
	  stfs      f10, 0x1B8(r1)
	  stfs      f9, 0x1BC(r1)
	  stfs      f8, 0x1C0(r1)
	  stfs      f7, 0x1C4(r1)
	  stfs      f6, 0x1C8(r1)
	  stfs      f5, 0x1CC(r1)
	  stfs      f4, 0x1D0(r1)
	  stfs      f3, 0x1D4(r1)
	  stfs      f2, 0x1D8(r1)
	  stfs      f1, 0x1DC(r1)
	  stfs      f0, 0x1E0(r1)
	  bne-      .loc_0xF3C
	  lha       r4, 0x36(r25)
	  li        r3, 0
	  extsh.    r0, r4
	  blt-      .loc_0xE7C
	  cmpw      r4, r28
	  bge-      .loc_0xE7C
	  li        r3, 0x1

	.loc_0xE7C:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE98
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xD98
	  crclr     6, 0x6
	  bl        -0x193168

	.loc_0xE98:
	  li        r3, 0x78
	  bl        -0x19990C
	  mr.       r20, r3
	  beq-      .loc_0xEB0
	  bl        -0x4B11C
	  mr        r20, r3

	.loc_0xEB0:
	  lwz       r3, 0x8(r29)
	  mr        r4, r20
	  bl        -0x48F84
	  lha       r0, 0x36(r25)
	  addi      r3, r1, 0x214
	  lha       r7, 0x36(r20)
	  addi      r4, r25, 0x4C
	  lwz       r6, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  addi      r5, r1, 0x1C
	  stwx      r7, r6, r0
	  lfs       f0, 0x58(r25)
	  stfs      f0, 0x58(r20)
	  bl        -0xD2C20
	  lfs       f1, 0x20(r1)
	  lfs       f2, 0x24(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x4C(r20)
	  stfs      f1, 0x50(r20)
	  stfs      f2, 0x54(r20)
	  lbz       r0, 0x6E(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0xF18
	  lfs       f0, -0x4F20(r2)
	  stfs      f0, 0x50(r20)
	  b         .loc_0xF34

	.loc_0xF18:
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r20, 0x4C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r20)

	.loc_0xF34:
	  mr        r25, r20
	  b         .loc_0xFC8

	.loc_0xF3C:
	  lwz       r3, 0x138(r21)
	  lwzu      r12, 0xAC(r3)
	  lhz       r0, 0x1A(r23)
	  lwz       r12, 0x2C(r12)
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x18C(r21)
	  mr        r23, r3
	  cmplwi    r0, 0
	  bne-      .loc_0xF7C
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xDB0
	  crclr     6, 0x6
	  bl        -0x19324C

	.loc_0xF7C:
	  lha       r0, 0x36(r23)
	  lwz       r4, 0x18C(r21)
	  rlwinm    r3,r0,2,0,29
	  lha       r0, 0x36(r25)
	  lwzx      r4, r4, r3
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  stwx      r4, r3, r0
	  lwz       r3, 0x8(r29)
	  lha       r0, 0x36(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0x2C(r12)
	  lwzx      r0, r4, r0
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  mr        r25, r3

	.loc_0xFC8:
	  lwz       r0, 0xD4(r31)
	  li        r3, 0x1C
	  add       r21, r0, r26
	  addi      r26, r26, 0x10
	  stw       r25, 0x0(r21)
	  bl        -0x199A4C
	  mr.       r20, r3
	  beq-      .loc_0x1000
	  lha       r23, 0x184(r31)
	  bl        0x253A90
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2410
	  stw       r0, 0x0(r20)
	  sth       r23, 0x18(r20)

	.loc_0x1000:
	  mr        r4, r20
	  addi      r3, r25, 0x18
	  bl        0x253AEC
	  lfs       f0, -0x4F20(r2)
	  lis       r3, 0x8051
	  addi      r4, r3, 0x41E4
	  stfs      f31, 0x88(r1)
	  addi      r3, r1, 0x184
	  addi      r5, r1, 0x84
	  stfs      f0, 0x84(r1)
	  stfs      f0, 0x8C(r1)
	  bl        0x26AF48
	  lwz       r0, 0x44(r22)
	  addi      r3, r1, 0x1B4
	  lfs       f0, 0x194(r1)
	  mulli     r0, r0, 0xC
	  lfs       f2, 0x198(r1)
	  lfs       f1, 0x184(r1)
	  lfs       f3, 0x19C(r1)
	  add       r3, r3, r0
	  lfs       f6, 0x188(r1)
	  lfs       f4, 0x4(r3)
	  lfs       f8, 0x0(r3)
	  fmuls     f0, f4, f0
	  lfs       f9, 0x8(r3)
	  fmuls     f5, f4, f2
	  lfs       f2, 0x1A4(r1)
	  fmuls     f3, f4, f3
	  lfs       f4, 0x18C(r1)
	  fmadds    f0, f8, f1, f0
	  lfs       f7, 0x1A8(r1)
	  fmadds    f6, f8, f6, f5
	  lfs       f5, 0x1AC(r1)
	  fmadds    f1, f8, f4, f3
	  fmadds    f0, f9, f2, f0
	  fmadds    f2, f9, f7, f6
	  fmadds    f1, f9, f5, f1
	  stfs      f0, 0x4(r21)
	  stfs      f2, 0x8(r21)
	  stfs      f1, 0xC(r21)
	  b         .loc_0x11AC

	.loc_0x10A4:
	  lha       r4, 0x36(r25)
	  li        r3, 0
	  extsh.    r0, r4
	  blt-      .loc_0x10C0
	  cmpw      r4, r28
	  bge-      .loc_0x10C0
	  li        r3, 0x1

	.loc_0x10C0:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x10DC
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xDCA
	  crclr     6, 0x6
	  bl        -0x1933AC

	.loc_0x10DC:
	  li        r3, 0x78
	  bl        -0x199B50
	  mr.       r21, r3
	  beq-      .loc_0x10F4
	  bl        -0x4B360
	  mr        r21, r3

	.loc_0x10F4:
	  lwz       r3, 0x8(r29)
	  mr        r4, r21
	  bl        -0x491C8
	  lha       r0, 0x36(r25)
	  addi      r3, r1, 0x214
	  lha       r7, 0x36(r21)
	  addi      r4, r25, 0x4C
	  lwz       r6, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  addi      r5, r1, 0x10
	  stwx      r7, r6, r0
	  lfs       f0, 0x58(r25)
	  stfs      f0, 0x58(r21)
	  bl        -0xD2E64
	  lfs       f1, 0x14(r1)
	  lfs       f2, 0x18(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x4C(r21)
	  stfs      f1, 0x50(r21)
	  stfs      f2, 0x54(r21)
	  lbz       r0, 0x6E(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0x115C
	  lfs       f0, -0x4F20(r2)
	  stfs      f0, 0x50(r21)
	  b         .loc_0x1178

	.loc_0x115C:
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r21, 0x4C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x50(r21)

	.loc_0x1178:
	  li        r3, 0x1C
	  bl        -0x199BEC
	  mr.       r20, r3
	  beq-      .loc_0x11A0
	  lha       r22, 0x184(r31)
	  bl        0x2538F0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2410
	  stw       r0, 0x0(r20)
	  sth       r22, 0x18(r20)

	.loc_0x11A0:
	  mr        r4, r20
	  addi      r3, r21, 0x18
	  bl        0x25394C

	.loc_0x11AC:
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x11D8
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1268

	.loc_0x11D8:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x124C

	.loc_0x11F8:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1268
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x124C:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x11F8

	.loc_0x1268:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x94(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xB40
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x12B0
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x165C

	.loc_0x12B0:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1320

	.loc_0x12CC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x165C
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x1320:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x12CC
	  b         .loc_0x165C

	.loc_0x1340:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  lwz       r3, 0x8(r29)
	  lha       r0, 0x36(r22)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0x2C(r12)
	  lwzx      r0, r4, r0
	  extsh     r4, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x6E(r22)
	  mr        r24, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x14E4
	  lha       r23, 0x38(r24)
	  extsh.    r0, r23
	  bne-      .loc_0x145C
	  lha       r3, 0x38(r22)
	  li        r0, 0x2
	  mr        r5, r24
	  li        r6, 0
	  sth       r3, 0x38(r24)
	  li        r4, -0x1
	  mtctr     r0

	.loc_0x13B8:
	  lha       r0, 0x3A(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x13CC
	  sth       r4, 0x3A(r5)
	  b         .loc_0x13DC

	.loc_0x13CC:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3A(r5)

	.loc_0x13DC:
	  lha       r0, 0x3C(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x13F0
	  sth       r4, 0x3C(r5)
	  b         .loc_0x1400

	.loc_0x13F0:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3C(r5)

	.loc_0x1400:
	  lha       r0, 0x3E(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1414
	  sth       r4, 0x3E(r5)
	  b         .loc_0x1424

	.loc_0x1414:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3E(r5)

	.loc_0x1424:
	  lha       r0, 0x40(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1438
	  sth       r4, 0x40(r5)
	  b         .loc_0x1448

	.loc_0x1438:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x40(r5)

	.loc_0x1448:
	  addi      r22, r22, 0x8
	  addi      r5, r5, 0x8
	  addi      r6, r6, 0x3
	  bdnz+     .loc_0x13B8
	  b         .loc_0x15A0

	.loc_0x145C:
	  mr        r21, r22
	  li        r25, 0
	  b         .loc_0x14C8

	.loc_0x1468:
	  add       r20, r23, r25
	  cmpwi     r20, 0x8
	  blt-      .loc_0x1488
	  addi      r3, r30, 0x84
	  addi      r5, r30, 0xC8
	  li        r4, 0xDF4
	  crclr     6, 0x6
	  bl        -0x193758

	.loc_0x1488:
	  lha       r0, 0x3A(r21)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x14A8
	  rlwinm    r3,r20,1,0,30
	  li        r4, -0x1
	  addi      r0, r3, 0x3A
	  sthx      r4, r24, r0
	  b         .loc_0x14C0

	.loc_0x14A8:
	  lwz       r4, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  rlwinm    r3,r20,1,0,30
	  lwzx      r4, r4, r0
	  addi      r0, r3, 0x3A
	  sthx      r4, r24, r0

	.loc_0x14C0:
	  addi      r21, r21, 0x2
	  addi      r25, r25, 0x1

	.loc_0x14C8:
	  lha       r3, 0x38(r22)
	  cmpw      r25, r3
	  blt+      .loc_0x1468
	  lha       r0, 0x38(r24)
	  add       r0, r0, r3
	  sth       r0, 0x38(r24)
	  b         .loc_0x15A0

	.loc_0x14E4:
	  lha       r3, 0x38(r22)
	  li        r0, 0x2
	  mr        r5, r24
	  li        r6, 0
	  sth       r3, 0x38(r24)
	  li        r4, -0x1
	  mtctr     r0

	.loc_0x1500:
	  lha       r0, 0x3A(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1514
	  sth       r4, 0x3A(r5)
	  b         .loc_0x1524

	.loc_0x1514:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3A(r5)

	.loc_0x1524:
	  lha       r0, 0x3C(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1538
	  sth       r4, 0x3C(r5)
	  b         .loc_0x1548

	.loc_0x1538:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3C(r5)

	.loc_0x1548:
	  lha       r0, 0x3E(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x155C
	  sth       r4, 0x3E(r5)
	  b         .loc_0x156C

	.loc_0x155C:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x3E(r5)

	.loc_0x156C:
	  lha       r0, 0x40(r22)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x1580
	  sth       r4, 0x40(r5)
	  b         .loc_0x1590

	.loc_0x1580:
	  lwz       r3, 0x18C(r31)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  sth       r0, 0x40(r5)

	.loc_0x1590:
	  addi      r22, r22, 0x8
	  addi      r5, r5, 0x8
	  addi      r6, r6, 0x3
	  bdnz+     .loc_0x1500

	.loc_0x15A0:
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x15CC
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x165C

	.loc_0x15CC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)
	  b         .loc_0x1640

	.loc_0x15EC:
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x165C
	  lwz       r3, 0x98(r1)
	  lwz       r4, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x94(r1)

	.loc_0x1640:
	  lwz       r12, 0x90(r1)
	  addi      r3, r1, 0x90
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x15EC

	.loc_0x165C:
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x94(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1340
	  psq_l     f31,0x2C8(r1),0,0
	  lfd       f31, 0x2C0(r1)
	  psq_l     f30,0x2B8(r1),0,0
	  lfd       f30, 0x2B0(r1)
	  psq_l     f29,0x2A8(r1),0,0
	  lfd       f29, 0x2A0(r1)
	  psq_l     f28,0x298(r1),0,0
	  lfd       f28, 0x290(r1)
	  psq_l     f27,0x288(r1),0,0
	  lfd       f27, 0x280(r1)
	  lmw       r20, 0x250(r1)
	  lwz       r0, 0x2D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801BDFCC
 * Size:	0001F4
 */
void RoomMapMgr::deleteTemp()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r3, r3, 0xac
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__25Iterator<Q24Game7MapRoom>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BE01C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE18C

lbl_801BE01C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE088

lbl_801BE034:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BE18C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE088:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE034
	b        lbl_801BE18C

lbl_801BE0A8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r3, 0x18c(r3)
	bl       __dla__FPv
	li       r0, 0
	stw      r0, 0x18c(r31)
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BE0FC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE18C

lbl_801BE0FC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE170

lbl_801BE11C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BE18C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE170:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE11C

lbl_801BE18C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BE0A8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE1C0
 * Size:	000094
 */
void RoomMapMgr::getMUI(Game::MapUnit*)
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
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801BE224

lbl_801BE1F0:
	lwz      r4, 0xf8(r28)
	addi     r0, r31, 0x14
	lwz      r3, 8(r29)
	lwzx     r4, r4, r0
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801BE21C
	mulli    r0, r30, 0x16c
	lwz      r3, 0xf8(r28)
	add      r3, r3, r0
	b        lbl_801BE234

lbl_801BE21C:
	addi     r31, r31, 0x16c
	addi     r30, r30, 1

lbl_801BE224:
	lwz      r0, 0xf4(r28)
	cmpw     r30, r0
	blt      lbl_801BE1F0
	li       r3, 0

lbl_801BE234:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE254
 * Size:	000060
 */
void RoomMapMgr::doAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xac
	stw      r0, numRoomCulled__Q24Game10RoomMapMgr@sda21(r13)
	lwz      r12, 0xac(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_801BE2A0
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_801BE2A0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE2B4
 * Size:	0000DC
 */
void RoomMapMgr::doEntry()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_80519498@sda21
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801BE368
	lwz      r3, 0x10(r30)
	lwz      r31, 0x58(r4)
	cmplwi   r3, 0
	beq      lbl_801BE30C
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_801BE30C:
	mr       r3, r31
	li       r4, 2
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi
	addi     r3, r30, 0xac
	lwz      r12, 0xac(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_801BE35C
	mr       r3, r31
	li       r4, 6
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi
	lwz      r3, 0x24(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801BE35C:
	mr       r3, r31
	li       r4, 0
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi

lbl_801BE368:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519498@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE390
 * Size:	00007C
 */
void RoomMapMgr::doSetView(int viewportNumber)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xac
	lwz      r12, 0xac(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_801BE3E0
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl

lbl_801BE3E0:
	lwz      r3, 0x24(r30)
	cmplwi   r3, 0
	beq      lbl_801BE3F4
	mr       r4, r31
	bl       setCurrentViewNo__Q28SysShape5ModelFUl

lbl_801BE3F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE40C
 * Size:	000068
 */
void RoomMapMgr::doViewCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xac
	lwz      r12, 0xac(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_801BE450
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl

lbl_801BE450:
	lwz      r3, 0x24(r31)
	cmplwi   r3, 0
	beq      lbl_801BE460
	bl       viewCalc__Q28SysShape5ModelFv

lbl_801BE460:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE474
 * Size:	000004
 */
void RoomMapMgr::doSimulation(f32) { }

/*
 * --INFO--
 * Address:	801BE478
 * Size:	000210
 */
void RoomMapMgr::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       initPrimDraw__8GraphicsFP7Matrixf
	li       r0, 0
	lis      r3, "__vt__25Iterator<Q24Game7MapRoom>"@ha
	addi     r4, r3, "__vt__25Iterator<Q24Game7MapRoom>"@l
	addi     r3, r30, 0xac
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801BE4E0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE650

lbl_801BE4E0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE54C

lbl_801BE4F8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BE650
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE54C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE4F8
	b        lbl_801BE650

lbl_801BE56C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801BE5C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE650

lbl_801BE5C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801BE634

lbl_801BE5E0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801BE650
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801BE634:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801BE5E0

lbl_801BE650:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801BE56C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE688
 * Size:	000024
 */
void RoomMapMgr::getStartPosition(Vector3f& position, int index)
{
	position = mCourseInfo[index].mStartPosition;
	/*
	mulli    r0, r5, 0xc
	add      r3, r3, r0
	lfs      f0, 0xfc(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x100(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x104(r3)
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801BE6B4
 * Size:	000084
 */
Door::~Door()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801BE71C
	lis      r3, __vt__Q24Game4Door@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, __vt__Q24Game4Door@l
	stw      r0, 0(r30)
	beq      lbl_801BE700
	lis      r4, __vt__Q24Game8DoorLink@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__Q24Game8DoorLink@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_801BE700:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801BE71C
	mr       r3, r30
	bl       __dl__FPv

lbl_801BE71C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game
