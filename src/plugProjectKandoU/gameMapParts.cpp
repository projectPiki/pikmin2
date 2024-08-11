#include "Game/mapParts.h"
#include "types.h"
#include "Vector3.h"
#include "Game/Entities/Item.h"
#include "Game/EnemyBase.h"
#include "Game/CurrTriInfo.h"
#include "Game/gamePlayData.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Cave/Node.h"
#include "Game/PelletBirthBuffer.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "Dolphin/rand.h"
#include "Sys/TriangleTable.h"
#include "Sys/RayIntersectInfo.h"
#include "VsOtakaraName.h"
#include "nans.h"

namespace Game {

static const int unusedArray[] = { 0, 0, 0 };
static const char unusedName[] = "gameMapParts";

int RoomMapMgr::numRoomCulled            = 0;
bool RoomMapMgr::mUseCylinderViewCulling = false;

/**
 * @note Address: 0x801B6468
 * @note Size: 0x24
 */
Door* MapUnitInterface::getDoor(int idx) { return (Door*)mDoor.getChildAt(idx); }

/**
 * @note Address: 0x801B648C
 * @note Size: 0x1C
 */
void MapUnitInterface::getCellSize(int& x, int& y)
{
	x = mMapUnit->mCellSize.x;
	y = mMapUnit->mCellSize.y;
}

/**
 * @note Address: 0x801B64A8
 * @note Size: 0x24
 */
DoorLink* Door::getLink(int idx) { return static_cast<DoorLink*>(mRootLink.getChildAt(idx)); }

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void DoorLink::write(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(mDistance);
	stream.writeInt(mDoorID);
	stream.writeInt(mTekiFlags);
	stream.textWriteText("\t# dist/door-id/tekiflag\r\n");
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void DoorLink::read(Stream& stream)
{
	mDistance  = stream.readFloat();
	mDoorID    = stream.readInt();
	int v0     = stream.readInt();
	mTekiFlags = v0 != 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x124
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

/**
 * @note Address: 0x801B64CC
 * @note Size: 0x104
 */
void Door::read(Stream& stream)
{
	mIndex     = stream.readInt();
	mDir       = stream.readInt();
	mOffs      = stream.readInt();
	mWpIndex   = stream.readInt();
	mLinkCount = stream.readInt();
	for (int i = 0; i < mLinkCount; i++) {
		DoorLink* link = new DoorLink();
		link->read(stream);

		mRootLink.add(link);
	}
}

/**
 * @note Address: 0x801B65D0
 * @note Size: 0xAC
 */
MapUnit::MapUnit()
{
	mModelData    = nullptr;
	mUnusedIdx    = -1;
	mHasCollision = false;
	mCellSize.y   = 0;
	mCellSize.x   = 0;
	mTexture      = nullptr;
	mImgResource  = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void MapUnit::setupSizeInfo()
{
	mCollision.getBoundBox(mBoundingBox);
	mBoundingBox.mMax.x = 170.0f; // this float is used in here somewhere, and this is inlined in makeOneRoom
	                              // UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void MapUnit::save(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeShort(mCellSize.x);
	stream.writeShort(mCellSize.y);
	stream.textWriteText("\t# dX/dZ ; cell size\r\n");
}

/**
 * @note Address: 0x801B66AC
 * @note Size: 0x4C
 */
void MapUnit::load(Stream& stream)
{
	mCellSize.x = stream.readShort();
	mCellSize.y = stream.readShort();
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
MapUnitMgr::MapUnitMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801B6918
 * @note Size: 0x88
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

/**
 * @note Address: N/A
 * @note Size: 0x20C
 */
MapUnit* MapUnitMgr::findMapUnit(char* unitName)
{
	Iterator<MapUnit> iter(this);
	CI_LOOP(iter)
	{
		MapUnit* unit = *iter;
		if (strcmp(unitName, unit->mName) != 0) {
			continue;
		}

		return unit;
	}

	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void MapUnitMgr::testConstruct()
{
	JUT_PANICLINE(500, "もう使わない\n"); // 'don't use it anymore'
	JUT_PANICLINE(501, "%s : not found !\n", nullptr);
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void MapUnitMgr::loadShape(char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801B69EC
 * @note Size: 0x440
 * TODO
 */
void MapUnitMgr::makeUnit(MapUnit* unit, char* folder)
{
	char path[512];

	sprintf(path, "%s/arc.szs", folder);
	JKRArchive* archive = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
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
	archive = JKRMountArchive(path, JKRArchive::EMM_Mem, JKRHeap::sCurrentHeap, JKRArchive::EMD_Tail);
	P2ASSERTLINE(777, archive);

	void* gridResource = archive->getResource("grid.bin");
	if (gridResource) {
		RamStream stream(gridResource, -1);
		unit->mCollision.read(stream);
		delete[] gridResource;

		unit->mCollision.getBoundBox(unit->mBoundingBox);
		unit->mHasCollision = true;
	} else {
		unit->mHasCollision = false;
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
		stream.setMode(STREAM_MODE_TEXT, 1);
		unit->mSeaMgr.read(stream);
	}

	// Load route data
	void* routeResource = archive->getResource("route.txt");
	if (routeResource) {
		RamStream stream(routeResource, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		unit->mRouteMgr.read(stream);
	}

	archive->unmount();
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void MapUnitMgr::load(char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801B6E2C
 * @note Size: 0xDC
 */
MapRoom::MapRoom()
{
	mModel = nullptr;
	mUnit  = nullptr;
	PSMTXIdentity(mRoomSpaceMtx.mMatrix.mtxView);
	mIndex     = -1;
	mLink      = nullptr;
	mWpIndices = nullptr;
	mIsVisited = false;
	mInterface = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
void MapRoom::countItems()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x170
 */
void MapRoom::countEnemys()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801B6F10
 * @note Size: 0x7B8
 */
void MapRoom::placeObjects(Cave::FloorInfo* floorInfo, bool isFinalFloor)
{
	if (!mObjectLayoutInfo) {
		return;
	}
	for (int nodeType = 0; nodeType < OBJLAYOUT_TypeCount; nodeType++) {
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
						triInfo.mUpdateOnNewMaxY = 0;
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
							static_cast<RoomMapMgr*>(mapMgr)->mWraith = waterwraith;
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

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void MapRoom::getCenterPosition(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x16C
 */
void MapRoom::create(MapUnit*, Matrixf&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
RoomDoorInfo* MapRoom::createDoorInfo(MapUnitInterface*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801B76E4
 * @note Size: 0x4
 */
RoomDoorInfo::RoomDoorInfo() { }

/**
 * @note Address: 0x801B76E8
 * @note Size: 0xD4
 */
void MapRoom::doAnimation()
{
	if (RoomMapMgr::mUseCylinderViewCulling) {
		Graphics* gfx  = sys->mGfx;
		bool isVisible = false;
		for (int i = 0; i < gfx->mActiveViewports; i++) {
			Viewport* vp = gfx->getViewport(i);
			if (vp->viewable() && vp->mCamera->isCylinderVisible(mRoomVisibilityCylinder)) {
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

/**
 * @note Address: 0x801B77BC
 * @note Size: 0x1F4
 */
void MapRoom::doEntry()
{
	if (RoomMapMgr::mUseCylinderViewCulling) {
		Graphics* gfx  = sys->getGfx();
		bool isVisible = false;
		for (int i = 0; i < gfx->mActiveViewports; i++) {
			Viewport* vp = gfx->getViewport(i);
			if (vp->viewable() && vp->mCamera->isCylinderVisible(mRoomVisibilityCylinder)) {
				isVisible = true;
				break;
			}
		}
		if (isVisible) {
			mModel->mJ3dModel->entry();
		}
	} else {
		bool isVisible = false;
		Graphics* gfx  = sys->getGfx();

		for (int i = 0; i < gfx->mActiveViewports; i++) {
			Viewport* vp = gfx->getViewport(i);
			if (vp->viewable() && vp->mCamera->isVisible(mRoomVisibilitySphere)) {
				isVisible = true;
				break;
			}
		}

		if (isVisible) {
			if (!gameSystem->paused()) {
				for (int i = 0; i < mAnimationCount; i++) {
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
}

/**
 * @note Address: 0x801B79B0
 * @note Size: 0x124
 */
void MapRoom::doSetView(int viewportNumber)
{
	mModel->setCurrentViewNo((u16)viewportNumber);
	bool isVisible = false;
	Graphics* gfx  = sys->mGfx;
	for (int i = 0; i < gfx->mActiveViewports; i++) {
		if (i != viewportNumber) {
			continue;
		}

		Viewport* vp = gfx->getViewport(i);
		if (vp->viewable()) {
			LookAtCamera* cam = vp->mCamera;
			if (RoomMapMgr::mUseCylinderViewCulling) {
				if (cam->isCylinderVisible(mRoomVisibilityCylinder)) {
					isVisible = true;
				}
				break;
			}

			if (cam->isVisible(mRoomVisibilitySphere)) {
				isVisible = true;
			}
		}
		break;
	}

	if (Creature::usePacketCulling) {
		if (isVisible) {
			mModel->showPackets();
		} else {
			mModel->hidePackets();
		}
		return;
	}

	mModel->showPackets();
}

/**
 * @note Address: 0x801B7AD4
 * @note Size: 0x24
 */
void MapRoom::doViewCalc() { mModel->viewCalc(); }

/**
 * @note Address: 0x801B7AF8
 * @note Size: 0x4
 */
void MapRoom::doSimulation(f32) { }

/**
 * @note Address: 0x801B7AFC
 * @note Size: 0x4
 */
void MapRoom::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x801B7B00
 * @note Size: 0x1E8
 */
RoomMapMgr::RoomMapMgr(Cave::CaveInfo* info)
{
	mStartPositions[0] = Vector3f(0.0f);
	mStartPositions[1] = Vector3f(0.0f);

	mMapUnitMgr = new MapUnitMgr;

	mBoundbox.mMin = Vector3f(SHORT_FLOAT_MAX);
	mBoundbox.mMax = Vector3f(-SHORT_FLOAT_MAX);

	mCaveInfo                        = info;
	mFloorInfo                       = nullptr;
	mSublevel                        = 0;
	mTriangle.mTrianglePlane.mNormal = Vector3f(0.0f, 1.0f, 0.0f);

	mWraith = nullptr;
}

/**
 * @note Address: 0x801B7D88
 * @note Size: 0x1FC
 */
MapRoom* RoomMapMgr::getMapRoom(s16 idx)
{
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter)
	{
		MapRoom* room = *iter;
		if (room->mIndex == idx) {
			return room;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x801B7FD0
 * @note Size: 0xC
 */
CaveVRBox::CaveVRBox() { mModel = nullptr; }

/**
 * @note Address: N/A
 * @note Size: 0x158
 */
void CaveVRBox::create(char* name)
{
	char vrBoxFileName[512];
	sprintf(vrBoxFileName, "user/Kando/map/vrbox/%s.szs", name);
	if (DVDConvertPathToEntrynum(vrBoxFileName) != -1) {
		JKRArchive* vrBoxArc = JKRMountArchive(vrBoxFileName, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
		if (vrBoxArc) {
			void* res = vrBoxArc->getResource("model.bmd");
			if (res) {
				J3DModelData* model = J3DModelLoaderDataBase::load(res, 0x20000000);
				model->newSharedDisplayList(0x40000);
				model->makeSharedDL();
				mModel = new SysShape::Model(model, 0, 2);
				Matrixf mtx;
				PSMTXIdentity(mtx.mMatrix.mtxView);
				PSMTXCopy(mtx.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
				mModel->mJ3dModel->calc();
				mModel->mJ3dModel->calcMaterial();
				mModel->mJ3dModel->makeDL();
				mModel->mJ3dModel->lock();

			} else {
				JUT_PANICLINE(1552, "no model.bmd in %s\n", vrBoxFileName);
			}
		}
	}
}

/**
 * @note Address: 0x801B7FDC
 * @note Size: 0xA48
 */
void RoomMapMgr::createRandomMap(int floorNum, Cave::EditMapUnit* edit)
{
	// set floor info and level
	Cave::FloorInfo* floorInfo = mCaveInfo->getFloorInfo(floorNum);
	mFloorInfo                 = floorInfo;
	mSublevel                  = floorNum;

	// probably printed debug info
	floorInfo->getTekiMax();
	floorInfo->getTekiInfoNum();
	floorInfo->getTekiWeightSum();
	floorInfo->getItemMax();
	floorInfo->getItemInfoNum();
	floorInfo->getItemWeightSum();
	floorInfo->getGateMax();
	floorInfo->getGateInfoNum();
	floorInfo->getGateWeightSum();

	// get map unit file
	char unitFileName[512];
	sprintf(unitFileName, "user/Mukki/mapunits/units/%s", floorInfo->mParms.mCaveUnitFile.mValue);

	void* unitFile
	    = JKRDvdRipper::loadToMainRAM(unitFileName, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	JUT_ASSERTLINE(1609, unitFile, "%s not found !\n", unitFileName);

	RamStream unitStream(unitFile, -1);
	unitStream.setMode(STREAM_MODE_TEXT, 1);

	// set up map unit interfaces
	int interfaceCount           = unitStream.readInt();
	MapUnitInterface* interfaces = new MapUnitInterface[interfaceCount];
	for (int i = 0; i < interfaceCount; i++) {
		interfaces[i].read(unitStream);
	}

	mMapUnitInterface      = interfaces;
	mMapUnitInterfaceCount = interfaceCount;

	// set up lighting information
	char lightingFileName[512];
	sprintf(lightingFileName, "user/Abe/cave/%s", floorInfo->mParms.mLightingFile.mValue);

	if (DVDConvertPathToEntrynum(lightingFileName) != -1) {
		void* lightingFile = JKRDvdRipper::loadToMainRAM(lightingFileName, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0,
		                                                 nullptr, nullptr);

		if (lightingFile) {
			RamStream lightingStream(lightingFile, -1);
			lightingStream.setMode(STREAM_MODE_TEXT, 1);
			gameSystem->getLightMgr()->loadParm(lightingStream);
			delete[] lightingFile;
		} else {
			JUT_PANICLINE(1649, "no light file (%s)\n", lightingFileName);
		}
	}

	// set up VR box
	mVRBox.create(floorInfo->mParms.mVrBox.mValue);

	for (int i = 0; i < interfaceCount; i++) {
		char layoutName[512];
		sprintf(layoutName, "user/Mukki/mapunits/arc/%s/texts.szs", interfaces[i].mName);
		JKRArchive* layoutArc = JKRMountArchive(layoutName, JKRArchive::EMM_Mem, JKRGetCurrentHeap(), JKRArchive::EMD_Tail);
		JUT_ASSERTLINE(1687, layoutArc, "no textARc !\n");
		void* res = layoutArc->getResource("layout.txt");
		if (res) {
			RamStream layoutStream(res, -1);
			layoutStream.setMode(STREAM_MODE_TEXT, 1);
			interfaces[i].mBaseGen->read(layoutStream);
		}

		layoutArc->unmount();
	}

	PelletBirthBuffer::clear();

	// make map.
	sys->heapStatusStart("246-CreateRandomMap", nullptr);
	bool isFinalFloor = mCaveInfo->isFinalFloor(floorNum);
	nishimuraCreateRandomMap(interfaces, interfaceCount, floorInfo, isFinalFloor, edit);
	sys->heapStatusEnd("246-CreateRandomMap");

	delete[] unitFile;

	// set models and collision
	sys->heapStatusStart("Model and Collision", nullptr);
	completeUnitData();
	sys->heapStatusEnd("Model and Collision");

	mRouteMgr = new EditorRouteMgr();

	// place rooms
	sys->heapStatusStart("246-PlaceRooms", nullptr);
	nishimuraPlaceRooms();
	mRouteMgr->makeInvertLinks();
	sys->heapStatusEnd("246-PlaceRooms");

	mCount = 0;

	// count up how many rooms we have
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter)
	{
		if ((*iter)->mUnitKind == Cave::UNITKIND_Room) {
			mCount++;
		}
	}

	// arrange rooms in list
	mRoomList   = new MapRoom*[mCount];
	int roomIdx = 0;
	CI_LOOP(iter)
	{
		if ((*iter)->mUnitKind == Cave::UNITKIND_Room) {
			mRoomList[roomIdx++] = (*iter);
		}
	}

	// set up VR box matrix
	if (mVRBox.mModel) {
		Matrixf mtx;
		Vector3f scale(1.0f);
		Vector3f translation = (mBoundbox.mMin + mBoundbox.mMax) * 0.5f;
		translation.y        = 0.0f;
		mtx.makeST(scale, translation);
		PSMTXCopy(mtx.mMatrix.mtxView, mVRBox.mModel->mJ3dModel->mPosMtx);
		mVRBox.mModel->mJ3dModel->calc();
	}

	// set map boundaries
	Vector3f minPoint = mBoundbox.mMin;
	minPoint.x -= 320.0f;
	minPoint.z -= 320.0f;
	mBoundbox.include(minPoint);

	Vector3f maxPoint = mBoundbox.mMax;
	maxPoint.x += 320.0f;
	maxPoint.z += 320.0f;
	mBoundbox.include(maxPoint);

	deleteTemp();
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

/**
 * @note Address: 0x801B8C28
 * @note Size: 0x224
 */
void RoomMapMgr::completeUnitData()
{
	Iterator<MapUnit> iter(mMapUnitMgr);
	CI_LOOP(iter)
	{
		MapUnit* unit = *iter;
		char unitName[512];
		sprintf(unitName, "user/Mukki/mapunits/arc/%s", unit->mName);
		mMapUnitMgr->makeUnit(unit, unitName);
	}
}

/**
 * @note Address: 0x801B8E4C
 * @note Size: 0x234
 */
void RoomMapMgr::setupJUTTextures()
{
	Iterator<MapUnit> iter(mMapUnitMgr);
	CI_LOOP(iter)
	{
		MapUnit* unit  = *iter;
		unit->mTexture = new JUTTexture(unit->mImgResource);
	}

	nishimuraSetTexture();
}

/**
 * @note Address: 0x801B9080
 * @note Size: 0x2BC
 */
void RoomMapMgr::useUnit(char* unitName)
{
	MapUnit* unit     = mMapUnitMgr->findMapUnit(unitName);
	MapUnit* currUnit = unit; // ??
	if (unit) {               // ??
		return;
	}

	TObjectNode<MapUnit>* node = new TObjectNode<MapUnit>;

	for (int i = 0; i < mMapUnitInterfaceCount; i++) {
		if (strcmp(unitName, mMapUnitInterface[i].mMapUnit->mName) == 0) {
			currUnit = mMapUnitInterface[i].mMapUnit;
		}
	}

	JUT_ASSERTLINE(1884, currUnit, "no such unit %s\n", unitName);

	node->mContents = currUnit;
	mMapUnitMgr->mNode.add(node);
}

/**
 * @note Address: 0x801B933C
 * @note Size: 0x210
 */
JUTTexture* RoomMapMgr::getTexture(char* unitName)
{
	Iterator<MapUnit> iter(mMapUnitMgr);
	CI_LOOP(iter)
	{
		MapUnit* unit = *iter;
		if (strcmp(unit->mName, unitName) == 0) {
			return unit->mTexture;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x801B954C
 * @note Size: 0x1F4
 */
void RoomMapMgr::allocRooms(int count)
{
	mRoomMgr.alloc(count);
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter) { (*iter)->mIndex = -1; }
}

/**
 * @note Address: 0x801B9740
 * @note Size: 0x50
 */
void RoomMapMgr::makeRoom(char* unitName, f32 centreX, f32 centreY, int direction, int index, RoomLink* link, ObjectLayoutInfo* layoutInfo)
{
	makeOneRoom(centreX, centreY, -90.0f * (f32)direction, unitName, index, link, layoutInfo);
}

/**
 * @note Address: 0x801B9790
 * @note Size: 0x3B4
 */
void RoomMapMgr::placeObjects()
{
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter)
	{
		MapRoom* room = *iter;
		room->placeObjects(mFloorInfo, mSublevel == mCaveInfo->getFloorMax() - 1);
	}

	// oh boy
	if (!mRouteMgr) {
		return;
	}

	// last chance to get out before we make a GLITCHY SEESAW
	if (mFloorInfo->mParms.mGlitchySeesaw.mValue == 0) {
		return;
	}

	// don't say I didn't warn you.
	int wpCount = mRouteMgr->mCount;

	// find some random waypoint indices that aren't the same
	int idx2 = -1;
	int idx1 = -1;
	while (idx1 == idx2) {
		idx1 = (f32)wpCount * randFloat();
		idx2 = (f32)wpCount * randFloat();
	}

	// these poor waypoints are gonna suffer
	WayPoint* wps[2];
	wps[0] = mRouteMgr->getWayPoint(idx1);
	wps[1] = mRouteMgr->getWayPoint(idx2);

	// place seesaws.
	for (int i = 0; i < 2; i++) {
		ItemDownFloor::Item* seesaw = static_cast<ItemDownFloor::Item*>(ItemDownFloor::mgr->birth());
		if (seesaw) {
			Vector3f position      = wps[i]->getPosition();
			seesaw->mBagMaxWeight  = 20;
			seesaw->mModelType     = DFMODEL_LargeBlock;
			seesaw->mDownFloorType = DFTYPE_DownBlock;
			seesaw->mIsDemoBlock   = true;
			seesaw->mID.setID('0000');
			seesaw->init(nullptr);
			seesaw->mFaceDir = 0.0f;
			seesaw->setPosition(position, false);
		}
	}
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

/**
 * @note Address: 0x801B9B44
 * @note Size: 0x24
 */
void RoomMapMgr::getBoundBox2d(BoundBox2d& boundbox)
{
	boundbox.mMin = Vector2f(mBoundbox.mMin.x, mBoundbox.mMin.z);
	boundbox.mMax = Vector2f(mBoundbox.mMax.x, mBoundbox.mMax.z);
}

/**
 * @note Address: 0x801B9B68
 * @note Size: 0x34
 */
void RoomMapMgr::getBoundBox(BoundBox& boundbox) { boundbox = mBoundbox; }

/**
 * @note Address: 0x801B9B9C
 * @note Size: 0x4
 */
void RoomMapMgr::drawCollision(Graphics&, Sys::Sphere&) { }

/**
 * @note Address: 0x801B9BA0
 * @note Size: 0x1F0
 */
Sys::TriIndexList* RoomMapMgr::traceMove(MoveInfo& moveInfo, f32 rate)
{
	int counter = 1;
	Sys::TriIndexList* list;
	f32 rad   = moveInfo.mMoveSphere->mRadius;
	f32 speed = moveInfo.mVelocity->length();

	do {
		if (rate * speed > rad) {
			counter *= 2;
			rate *= 0.5f;
			continue;
		}
		break;
	} while (counter <= 4);

	for (int i = 0; i < counter; i++) {
		list = traceMove_new(moveInfo, rate);
	}

	if (mFloorInfo->hasHiddenCollision() && !moveInfo.mFloorTriangle
	    && (moveInfo.mMoveSphere->mPosition.y - moveInfo.mMoveSphere->mRadius) < 0.0f) {

		// pop to "floor" (center of move sphere at least one radius above 0)
		moveInfo.mMoveSphere->mPosition.y = moveInfo.mMoveSphere->mRadius;
		if (moveInfo.mVelocity->y < 0.0f) {
			// slow fall based on how elastic we are
			// - perfectly elastic, stop falling
			// - inelastic, reduce by some amount
			// - perfectly inelastic, keep falling at same speed
			moveInfo.mVelocity->y = -moveInfo.mVelocity->y * (moveInfo.mRestitution - 1.0f);
		}

		Vector3f bottomSpherePos = moveInfo.mMoveSphere->mPosition;
		bottomSpherePos.y -= moveInfo.mMoveSphere->mRadius;

		moveInfo.mFloorTriangle = &mTriangle;
		moveInfo.mFloorNormal   = Vector3f(0.0f, 1.0f, 0.0f);
		moveInfo.mUnusedNormal  = Vector3f(0.0f, 1.0f, 0.0f);

		moveInfo.mBaseSpherePos = bottomSpherePos;

		if (moveInfo.mIntersectCallback) {
			Vector3f up(0.0f, 1.0f, 0.0f);
			moveInfo.mIntersectCallback->invoke(bottomSpherePos, up);
		}
	}

	return list;
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

/**
 * @note Address: 0x801B9D90
 * @note Size: 0x24
 */
bool RoomMapMgr::hasHiddenCollision() { return mFloorInfo->hasHiddenCollision(); }

/**
 * @note Address: 0x801B9DB4
 * @note Size: 0x8C
 */
void RoomMapMgr::constraintBoundBox(Sys::Sphere& boundSphere)
{
	if (boundSphere.mPosition.x - boundSphere.mRadius <= mBoundbox.mMin.x) {
		boundSphere.mPosition.x = mBoundbox.mMin.x + boundSphere.mRadius;
	} else if (boundSphere.mPosition.x + boundSphere.mRadius >= mBoundbox.mMax.x) {
		boundSphere.mPosition.x = mBoundbox.mMax.x - boundSphere.mRadius;
	}

	if (boundSphere.mPosition.z - boundSphere.mRadius <= mBoundbox.mMin.z) {
		boundSphere.mPosition.z = mBoundbox.mMin.z + boundSphere.mRadius;
	} else if (boundSphere.mPosition.z + boundSphere.mRadius >= mBoundbox.mMax.z) {
		boundSphere.mPosition.z = mBoundbox.mMax.z - boundSphere.mRadius;
	}
}

/**
 * @note Address: 0x801B9E40
 * @note Size: 0x1F4
 */
void RoomMapMgr::entryToMapRoomCellMgr()
{
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter)
	{
		MapRoom* room = *iter;
		if (mapRoomCellMgr) {
			mapRoomCellMgr->entry(room, room->_190);
		}
	}
}

/**
 * @note Address: 0x801BA034
 * @note Size: 0x128
 */
s16 RoomMapMgr::findRoomIndex(Sys::Sphere& sphere)
{
	CellIteratorArg iterArg(sphere);
	iterArg.mCellMgr  = mapRoomCellMgr;
	iterArg.mOptimise = true;
	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		MapRoom* room = static_cast<MapRoom*>(*iter);
		Vector3f pos  = sphere.mPosition;
		pos           = room->mInvRoomSpaceMtx.mtxMult(pos);

		Vector2f min(room->mUnit->mBoundingBox.mMin.x, room->mUnit->mBoundingBox.mMin.z);
		min.x -= sphere.mRadius;
		min.y -= sphere.mRadius;
		Vector2f max(room->mUnit->mBoundingBox.mMax.x, room->mUnit->mBoundingBox.mMax.z);
		max.x += sphere.mRadius;
		max.y += sphere.mRadius;

		if (min.x <= pos.x && min.y <= pos.z && pos.x <= max.x && pos.z <= max.y) {
			return room->mIndex;
		}
	}

	return -1;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void MapRoom::createGlobalCollision()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801BA15C
 * @note Size: 0x9FC
 */
void RoomMapMgr::createGlobalCollision()
{
	if (BaseHIOParms::sMapRoomFinal == 0) {
		P2DEBUG("Before: %d", JKRGetCurrentHeap()->getTotalFreeSize());
		Iterator<MapRoom> iter(&mRoomMgr);
		CI_LOOP(iter)
		{
			MapRoom* room    = *iter;
			room->mCollision = room->mUnit->mCollision.clone(room->mRoomSpaceMtx);
		}
		P2DEBUG("After: %d", JKRGetCurrentHeap()->getTotalFreeSize());
		return;
	}

	P2DEBUG("Before: %d", JKRGetCurrentHeap()->getTotalFreeSize());
	Sys::VertexTable* vertTable  = new Sys::VertexTable();
	Sys::TriangleTable* triTable = new Sys::TriangleTable();
	BoundBox box;

	int vertCount = 0;
	int triCount  = 0;

	Iterator<MapRoom> iterAlloc(&mRoomMgr);
	CI_LOOP(iterAlloc)
	{
		Sys::TriDivider* divider = (*iterAlloc)->mUnit->mCollision.mDivider;
		vertCount += divider->mVertexTable->mLimit;
		triCount += divider->mTriangleTable->mLimit;
	}

	vertTable->alloc(vertCount);
	triTable->alloc(triCount);

	mTriCount       = triCount;
	mRoomTriIndices = new int[mTriCount];

	for (int i = 0; i < triCount; i++) {
		Sys::Triangle tri;
		triTable->addOne(tri);
	}

	int count21 = 0;
	int count20 = 0;

	Iterator<MapRoom> iterCreate(&mRoomMgr);
	CI_LOOP(iterCreate)
	{
		MapRoom* room            = *iterCreate;
		Matrixf& mtx             = room->mRoomSpaceMtx;
		Sys::VertexTable* verts  = room->mUnit->mCollision.mDivider->mVertexTable;   // r26
		Sys::TriangleTable* tris = room->mUnit->mCollision.mDivider->mTriangleTable; // r19
		for (int i = 0; i < verts->getNum(); i++) {
			Vector3f preVert = *verts->getVertex(i);
			Vector3f vert    = mtx.mtxMult(preVert);
			vertTable->addOne(vert);
			count21++;
		}

		for (int i = 0; i < tris->getNum(); i++) {
			Sys::Triangle* preTri  = tris->getTriangle(i);
			Sys::Triangle* postTri = triTable->getTriangle(i);
			postTri->mVertices[0]  = preTri->mVertices[0] + count20;
			postTri->mVertices[1]  = preTri->mVertices[1] + count20;
			postTri->mVertices[2]  = preTri->mVertices[2] + count20;
			postTri->mCode         = preTri->mCode;
			postTri->makePlanes(*vertTable);
			postTri->createSphere(*vertTable);
			mRoomTriIndices[i] = room->mIndex;
		}
		count20 = count21;
	}

	box      = vertTable->mBoundBox;
	box.mMin = box.mMin - Vector3f(10.0f);
	box.mMax = box.mMax + Vector3f(10.0f);

	mMapCollision           = new MapCollision;
	mMapCollision->mDivider = new Sys::GridDivider;
	int countX              = 48;
	int countZ              = 48;

	int altX = (f32)((int)absF(box.mMax.x - box.mMin.x)) / 64;
	int altZ = (f32)((int)absF(box.mMax.z - box.mMin.z)) / 64;
	if (altX < 48) {
		countX = altX;
	}

	if (altZ < 48) {
		countZ = altZ;
	}
	static_cast<Sys::GridDivider*>(mMapCollision->mDivider)->create(box, countX, countZ, vertTable, triTable);

	P2DEBUG("After: %d", JKRGetCurrentHeap()->getTotalFreeSize());
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

/**
 * @note Address: 0x801BAD60
 * @note Size: 0x328
 */
Sys::TriIndexList* RoomMapMgr::traceMove_new(MoveInfo& info, f32 step)
{
	Vector3f* velocity         = info.mVelocity;   // r25
	Sys::Sphere* moveSphere    = info.mMoveSphere; // r26
	Vector3f startPos          = moveSphere->mPosition;
	moveSphere->mPosition      = moveSphere->mPosition + *info.mVelocity * step;
	moveSphere->mPosition      = moveSphere->mPosition;
	Sys::TriIndexList* triList = mMapCollision->mDivider->findTriLists(*moveSphere);

	Sys::Sphere sphere44; // r29
	Sys::Sphere sphere34; // r28

	Sys::VertexTable* vertTable = mMapCollision->mDivider->mVertexTable; // r23

	for (triList; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
		for (int i = 0; i < triList->getNum(); i++) {
			int index          = triList->getIndex(i);
			Sys::Triangle* tri = mMapCollision->mDivider->mTriangleTable->getTriangle(index);
			Sys::Triangle::SphereSweep sweep;
			sweep.mStartPos = startPos;
			sweep.mSphere   = *moveSphere;
			if (info.mDoHardIntersect) {
				sweep.mSweepType = Sys::Triangle::SphereSweep::ST_SphereIntersectPlane;
			}

			if (tri->intersect(*vertTable, sweep)) {
				info.mRoomIndex    = mRoomTriIndices[index];
				sphere34.mPosition = sphere34.mPosition;
				Vector3f old34     = sphere34.mPosition;
				if (info.mIntersectCallback) {
					info.mIntersectCallback->invoke(sphere44.mPosition, sphere34.mPosition);
				}

				if (sphere34.mPosition.y >= info.mFloorThreshold) {
					info.mFloorTriangle = tri;
					info.mFloorNormal   = sphere34.mPosition;
				} else if (absF(sphere34.mPosition.y) <= info.mWallThreshold) {
					info.mWallTriangle = tri;
					info.mWallNormal   = sphere34.mPosition;
				}

				f32 impactAmt         = sphere34.mPosition.dot(*velocity);
				impactAmt             = (1.0f + info.mRestitution) * impactAmt;
				*velocity             = *velocity - sphere34.mPosition * impactAmt;
				moveSphere->mPosition = moveSphere->mPosition + old34 * sphere34.mRadius;
			}

			Sys::Triangle::debug = false;
		}
	}

	return nullptr;
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

/**
 * @note Address: 0x801BB088
 * @note Size: 0x740
 */
Sys::TriIndexList* RoomMapMgr::traceMove_original(MoveInfo& info, f32 step)
{
	Iterator<MapRoom> iterRoom(&mRoomMgr);
	int count               = 0;
	Vector3f* velocity      = info.mVelocity;
	Sys::Sphere* moveSphere = info.mMoveSphere; // r19
	Vector3f startPos       = moveSphere->mPosition;
	moveSphere->mPosition   = moveSphere->mPosition + *velocity * step;

	Vector3f vecArray[8];       // 0x88, 0xFC, r22/r24/r27
	Sys::Triangle* triArray[8]; // 0x68, 0xF8, r14/r25/r28
	f32 floatArray[8];          // 0x48, 0x100, r21/r23/r26

	CI_LOOP(iterRoom)
	{
		MapRoom* room = *iterRoom; // r31
		if (sqrDistanceXZ(room->mBoundingSphere.mPosition, moveSphere->mPosition)
		    > SQUARE(room->mBoundingSphere.mRadius + moveSphere->mRadius)) {
			continue;
		}
		MapUnit* unit         = room->mUnit;
		moveSphere->mPosition = room->mInvRoomSpaceMtx.mtxMult(moveSphere->mPosition);

		Sys::TriIndexList* triList = unit->mCollision.mDivider->findTriLists(*moveSphere); // r18

		for (triList; triList && count < 8; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
			Sys::VertexTable* vertTable = unit->mCollision.mDivider->mVertexTable;
			for (int i = 0; i < triList->getNum(); i++) {
				Sys::Triangle* tri = unit->mCollision.mDivider->mTriangleTable->getTriangle(triList->getIndex(i));

				if ((info.mDoHardIntersect) ? tri->intersectHard(*vertTable, *moveSphere, info.mBaseSpherePos)
				                            : tri->intersect(*vertTable, *moveSphere, info.mBaseSpherePos)) {
					info.mBaseSpherePos = room->mRoomSpaceMtx.mtxMult(info.mBaseSpherePos);

					Vector3f triNorm = tri->mTrianglePlane.mNormal;
					triNorm          = room->mInvRoomSpaceMtx.multTranspose(triNorm);
					if (info.mIntersectCallback) {
						info.mIntersectCallback->invoke(info.mBaseSpherePos, triNorm);
					}

					if (count < 8) {
						JUT_ASSERTLINE(2856, count < 8, "siboudesu !\n"); // 'it's dead!' lol
						triArray[count] = tri;
						vecArray[count] = triNorm;
						floatArray[count]
						    = moveSphere->mRadius - (moveSphere->mPosition.dot(tri->mTrianglePlane.mNormal) - tri->mTrianglePlane.mOffset);
						info.mUnused3      = true;
						info.mUnusedNormal = triNorm;
						count++;
					}
				}
				Sys::Triangle::debug = false;
			}
		}

		moveSphere->mPosition = room->mRoomSpaceMtx.mtxMult(moveSphere->mPosition);
	}

	if (count == 0) {
		return nullptr;
	}

	int count2      = 0;
	f32 floatSum    = 0.0f;
	Vector3f sumVec = Vector3f(0.0f);
	for (int i = 0; i < count; i++) {
		if (floatArray[i] < 0.0f) {
			continue;
		}
		count2++;
		floatSum += floatArray[i];
		Vector3f currVec = vecArray[i];
		sumVec += currVec;
		if (currVec.y > 0.6f) {
			info.mFloorTriangle = triArray[i];
			info.mFloorNormal   = currVec;
		}
	}

	if (count2 == 0) {
		return nullptr;
	}

	f32 norm              = 1.0f / (f32)count2;
	Vector3f lineOfImpact = sumVec * norm;
	lineOfImpact.normalise();

	floatSum /= (f32)count2;

	f32 impactAmt         = lineOfImpact.dot(*velocity);
	f32 elasticFactor     = 1.0f + info.mRestitution;
	*velocity             = *velocity - lineOfImpact * (elasticFactor * impactAmt);
	moveSphere->mPosition = moveSphere->mPosition + (lineOfImpact * floatSum);
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

/**
 * Finds the intersection of a ray with the map rooms.
 *
 * @param info The ray intersection information.
 * @return True if an intersection is found, false otherwise.
 *
 * @note Address: 0x801BB7C8
 * @note Size: 0x4F0
 */
bool RoomMapMgr::findRayIntersection(Sys::RayIntersectInfo& info)
{
	Iterator<MapRoom> iterRoom(&mRoomMgr);
	Vector3f intersectPos;
	Vector3f startPos = info.mIntersectEdge.mStartPos;
	Vector3f endPos   = info.mIntersectEdge.mEndPos;
	Vector3f midPos   = Vector3f((startPos.x + endPos.x) / 2, 0.0f, (startPos.z + endPos.z) / 2);

	f32 rayLen  = info.mIntersectEdge.mStartPos.distance(info.mIntersectEdge.mEndPos);
	bool result = false; // r31
	f32 minDist = 12800000.0f;

	CI_LOOP(iterRoom)
	{
		MapRoom* room               = *iterRoom;
		Vector3f distanceFromCenter = midPos - room->mBoundingSphere.mPosition;
		f32 radius                  = room->mBoundingSphere.mRadius + rayLen;

		// Check if the ray is outside the room's bounding sphere
		if (distanceFromCenter.x * distanceFromCenter.x + distanceFromCenter.z * distanceFromCenter.z > SQUARE(radius)) {
			continue;
		}

		MapUnit* unit = room->mUnit;

		// Convert it to room space
		Vector3f transformedStartPos = room->mInvRoomSpaceMtx.mtxMult(startPos);
		Vector3f transformedEndPos   = room->mInvRoomSpaceMtx.mtxMult(endPos);

		// Create a new ray
		Sys::Edge newRay;
		newRay.mStartPos = transformedStartPos;
		newRay.mEndPos   = transformedEndPos;

		Vector3f transformedMidPos
		    = Vector3f((transformedStartPos.x + transformedEndPos.x) / 2, (transformedStartPos.y + transformedEndPos.y) / 2,
		               (transformedStartPos.z + transformedEndPos.z) / 2);

		Sys::Sphere boundSphere;
		boundSphere.mPosition = transformedMidPos;
		boundSphere.mRadius   = rayLen;

		Sys::TriIndexList* triList = unit->mCollision.mDivider->findTriLists(boundSphere);

		for (triList; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
			for (int i = 0; i < triList->getNum(); i++) {
				Sys::Triangle* tri = unit->mCollision.mDivider->mTriangleTable->getTriangle(triList->getIndex(i));
				if (info.condition(*tri)) {
					Vector3f intersectionPoint;
					if (tri->intersect(newRay, info.mRadius, intersectionPoint)) {
						result                   = true;
						Vector3f directionVector = intersectionPoint - transformedStartPos;
						f32 dist                 = directionVector.sqrMagnitude();
						if (dist < minDist) {
							intersectPos  = room->mRoomSpaceMtx.mtxMult(intersectionPoint);
							minDist       = dist;
							info.mNormalY = tri->mTrianglePlane.mNormal.y;
						}
					}
				}
			}
		}
	}

	info.mIntersectPosition = intersectPos;
	return result;
}

/**
 * @note Address: 0x801BBCB8
 * @note Size: 0x8C
 */
f32 RoomMapMgr::getMinY(Vector3f& pos)
{
	CurrTriInfo info;
	info.mPosition        = pos;
	info.mUpdateOnNewMaxY = 0;
	getCurrTri(info);
	return info.mMinY;
}

/**
 * @note Address: 0x801BBD44
 * @note Size: 0x770
 */
void RoomMapMgr::createTriangles(Sys::CreateTriangleArg& createArg)
{
	f32 rad = createArg.mBoundingSphere.mRadius;
	Vector3f vecs[768];           // 0x864
	Sys::Triangle* triArray[256]; // 0x464
	MapRoom* roomArray[256];      // 0x64
	Iterator<MapRoom> iter(&mRoomMgr);
	int count = 0;
	CI_LOOP(iter)
	{
		MapRoom* room = *iter;
		Vector3f sep2 = room->_190.mPosition - createArg.mBoundingSphere.mPosition;
		f32 radius    = room->_190.mRadius + rad;
		if (sep2.x * sep2.x + sep2.z * sep2.z > SQUARE(radius)) {
			continue;
		}
		MapUnit* unit = room->mUnit;
		Sys::Sphere boundSphere;
		boundSphere.mPosition      = room->mInvRoomSpaceMtx.mtxMult(createArg.mBoundingSphere.mPosition);
		boundSphere.mRadius        = rad;
		Sys::TriIndexList* triList = unit->mCollision.mDivider->findTriLists(boundSphere);

		for (triList; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
			for (int i = 0; i < triList->getNum(); i++) {
				Sys::Triangle* tri          = unit->mCollision.mDivider->mTriangleTable->getTriangle(triList->getIndex(i));
				Sys::VertexTable* vertTable = unit->mCollision.mDivider->mVertexTable;
				if (!tri->intersect(*vertTable, boundSphere)) {
					continue;
				}
				Vector3f vertices[3]; // 0x40
				for (int j = 0; j < 3; j++) {
					vertices[j] = *vertTable->getVertex(tri->mVertices[j]);
					vertices[j] = room->mRoomSpaceMtx.mtxMult(vertices[j]);
				}

				bool isAlreadySet = false;
				for (int j = 0; j < count; j++) {
					if (tri == triArray[j] && room == roomArray[j]) {
						isAlreadySet = true;
					}
				}

				if (isAlreadySet) {
					continue;
				}

				if (count >= 256) {
					break;
				}

				Vector3f transRoomVec = room->mRoomSpaceMtx.multTranspose(tri->mTrianglePlane.mNormal);
				if (transRoomVec.y > createArg.mScaleLimit) {
					Vector3f addVec  = transRoomVec * createArg.mScale;
					triArray[count]  = tri;
					roomArray[count] = room;
					for (int k = 0; k < 3; k++) {
						vertices[k] += addVec;
						vecs[3 * count + k] = addVec;
					}
					count++;
				}
			}
		}
	}

	if (count > 0) {
		createArg.mVertices = new Vector3f[count * 3];

		for (int i = 0; i < count * 3; i++) {
			createArg.mVertices[i] = vecs[i];
		}
	}

	createArg.mCount = count;
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

/**
 * @note Address: 0x801BC4B4
 * @note Size: 0x460
 */
void RoomMapMgr::getCurrTri(CurrTriInfo& info)
{
	info.mMaxY = 328000.0f;
	Iterator<MapRoom> iterRoom(&mRoomMgr);
	CI_LOOP(iterRoom)
	{
		MapRoom* room = *iterRoom;
		f32 rad       = room->_190.mRadius;
		Vector3f sep  = room->_190.mPosition - info.mPosition;
		if (sep.x * sep.x + sep.z * sep.z > rad * rad) {
			continue;
		}
		MapUnit* unit = room->mUnit;
		Vector3f pos  = room->mInvRoomSpaceMtx.mtxMult(info.mPosition);
		Sys::Sphere boundSphere(pos, 0.0f);
		Sys::TriIndexList* triList = unit->mCollision.mDivider->findTriLists(boundSphere);
		for (triList; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
			for (int i = 0; i < triList->getNum(); i++) {
				Sys::Triangle* tri = unit->mCollision.mDivider->mTriangleTable->getTriangle(triList->getIndex(i));
				if (!tri->insideXZ(pos)) {
					continue;
				}

				f32 height = pos.y;
				if (info.mMaxY > height) {
					info.mMaxY = height;
					if (info.mUpdateOnNewMaxY) {
						info.mTriangle  = tri;
						info.mNormalVec = tri->mTrianglePlane.mNormal;
						info.mNormalVec = room->mInvRoomSpaceMtx.multTranspose(info.mNormalVec);
					}
				}

				if (info.mMinY < height) {
					info.mMinY = height;
					if (!info.mUpdateOnNewMaxY) {
						info.mTriangle  = tri;
						info.mNormalVec = tri->mTrianglePlane.mNormal;
						info.mNormalVec = room->mInvRoomSpaceMtx.multTranspose(info.mNormalVec);
					}
				}
			}
		}
	}

	if (mFloorInfo->hasHiddenCollision() && info.mMinY < 0.0f) {
		info.mMinY     = 0.0f;
		info.mMaxY     = 0.0f;
		info.mTriangle = &mTriangle;
		return;
	}

	if (!info.mTriangle) {
		info.mMaxY = 0.0f;
		info.mMinY = 0.0f;
	}
}

/**
 * @note Address: 0x801BC914
 * @note Size: 0x16B8
 */
void RoomMapMgr::makeOneRoom(f32 centreX, f32 centreY, f32 direction, char* unitName, s16 roomIdx, RoomLink* link,
                             ObjectLayoutInfo* layoutInfo)
{
	f32 faceAngle           = TORADIANS(direction); // f31
	MapRoom* room           = mRoomMgr.birth();     // r31
	room->mIndex            = roomIdx;
	room->mLink             = link;
	room->mObjectLayoutInfo = static_cast<Cave::ObjectLayout*>(layoutInfo);

	for (int i = 0; i < room->mObjectLayoutInfo->getCount(0); i++) {
		ObjectLayoutNode* node = room->mObjectLayoutInfo->getNode(0, i);
		PelletMgr::OtakaraItemCode itemCode;
		itemCode.mValue = node->getExtraCode();

		PelletInitArg initArg;

		if (pelletMgr->makePelletInitArg(initArg, itemCode)) {
			if (pelletMgr->setUse(&initArg)) {
				if (Pellet::sFromTekiEnable) {
					PelletBirthBuffer::entry(initArg);
				}
			} else {
				itemCode.mValue = 0;
			}
		}

		u8 num = node->getBirthCount();

		generalEnemyMgr->addEnemyNum(node->getObjectId(), num, nullptr);
	}

	for (int i = 0; i < room->mObjectLayoutInfo->getCount(1); i++) {
		ObjectLayoutNode* node = room->mObjectLayoutInfo->getNode(1, i);

		PelletIndexInitArg initArg(node->getObjectId());
		pelletMgr->setUse(&initArg);
	}

	if (gameSystem && gameSystem->isVersusMode()) {
		PelletList::cKind kind;
		PelletConfig* config = PelletList::Mgr::getConfigAndKind(const_cast<char*>(VsOtakaraName::cCoin), kind);

		if (config) {
			PelletIndexInitArg initArg(pelletMgr->encode(kind, config->mParams.mIndex));
			pelletMgr->setUse(&initArg);
		}
	}

	Matrixf mtx1;                                                   // 0x214
	Vector3f translation(centreX * 170.0f, 0.0f, centreY * 170.0f); // 0xD0
	Vector3f rotation1(0.0f, faceAngle, 0.0f);                      // 0xC4
	mtx1.makeTR(translation, rotation1);

	MapUnit* unit = mMapUnitMgr->findMapUnit(unitName); // r22

	room->mUnit = unit;
	PSMTXCopy(mtx1.mMatrix.mtxView, room->mRoomSpaceMtx.mMatrix.mtxView);
	PSMTXInverse(mtx1.mMatrix.mtxView, room->mInvRoomSpaceMtx.mMatrix.mtxView);
	room->mModel = new SysShape::Model(unit->mModelData, J3DMODEL_CreateNewDL, 2);
	room->mModel->mJ3dModel->newDifferedTexMtx(TEXDIFF_Material);
	room->mModel->mJ3dModel->newDifferedDisplayList(0x200);

	PSMTXCopy(room->mRoomSpaceMtx.mMatrix.mtxView, room->mModel->mJ3dModel->mPosMtx);
	room->mModel->mJ3dModel->calc();
	room->mModel->mJ3dModel->calcMaterial();
	room->mModel->mJ3dModel->makeDL();
	room->mModel->mJ3dModel->lock();

	room->mAnimationCount = unit->mAnimationCount;
	room->mAnimators      = new Sys::MatLoopAnimator[room->mAnimationCount];

	for (int i = 0; i < room->mAnimationCount; i++) {
		room->mAnimators[i].start(&unit->mAnimations[i]);
	}

	Matrixf boundMtx;                          // 0x1E4
	BoundBox bBox(unit->mBoundingBox);         // 0xF4
	Vector3f rotation2(0.0f, faceAngle, 0.0f); // 0xB8
	boundMtx.makeTR(translation, rotation2);

	bBox.transform(boundMtx);

	mBoundbox.include(bBox);

	bBox.makeBoundSphere(room->mBoundingSphere);

	BoundBox bBox2(bBox);
	bBox2.mMin.y = 0.0f;
	bBox2.mMax.y = 0.0f;
	bBox2.makeBoundSphere(room->_190);

	Vector3f modelCenter = room->mModel->getRoughCenter(); // f30, f29, f28

	f32 val = 0.0f;
	for (int i = 0; i < room->mModel->mJointCount; i++) {
		if (val < room->mModel->mJoints[i].mJ3d->mBoundingSphereRadius) {
			val = room->mModel->mJoints[i].mJ3d->mBoundingSphereRadius;
		}
	}

	if (strcmp(unitName, "cap_conc") == 0) {
		val += 30.0f;
	}

	room->mRoomVisibilitySphere.mPosition = modelCenter + translation;
	room->mRoomVisibilitySphere.mRadius   = val;

	Vector3f startCyl = Vector3f(room->mBoundingSphere.mPosition);
	Vector3f endCyl   = Vector3f(room->mBoundingSphere.mPosition);
	endCyl.y -= 100.0f;

	room->mRoomVisibilityCylinder.set(startCyl, endCyl, room->mBoundingSphere.mRadius);

	mSeaMgr->addSeaMgr(&unit->mSeaMgr, mtx1);
	MapUnitInterface* mui = getMUI(unit); // r27

	room->mUnitKind  = mui->mUnitKind;
	room->mInterface = mui;
	room->mDoorNum   = mui->mDoorCount;

	room->mDoorInfos = new RoomDoorInfo[room->mDoorNum];

	room->mFlags = mui->mFlags;

	for (int i = 0; i < mui->mDoorCount; i++) {
		Door* door   = mui->getDoor(i);
		WayPoint* wp = unit->mRouteMgr.getWayPoint(door->mWpIndex);

		wp->mDoFloorSnap = 1;
		wp->mDoorIndex   = i;
	}

	int counter = 0;
	Iterator<WayPoint> iterWP(&unit->mRouteMgr);
	CI_LOOP(iterWP)
	{
		*iterWP;
		counter++;
	}

	room->mWpIndices = new (-0x20) int[counter];

	int nextIdx = 0;

	CI_LOOP(iterWP)
	{
		WayPoint* wp = *iterWP; // r25
		if (wp->mDoFloorSnap) {
			RoomLink* targetLink = nullptr; // r23
			FOREACH_NODE(RoomLink, link->mChild, linkNode)
			{
				if (linkNode->mLinkIndex == wp->mDoorIndex) {
					targetLink = linkNode;
					break;
				}
			}

			P2ASSERTLINE(3459, targetLink);
			MapRoom* aliveRoom = getMapRoom(targetLink->mAliveMapIndex); // r21

			Door* door = mui->getDoor(wp->mDoorIndex); // r22

			Vector3f doorDirs[4] = { (Vector3f) { 0.0f, 0.0f, 1.0f }, (Vector3f) { 1.0f, 0.0f, 0.0f }, (Vector3f) { 0.0f, 0.0f, -1.0f },
				                     (Vector3f) { -1.0f, 0.0f, 0.0f } }; // 0x1B4

			if (!aliveRoom) {
				P2ASSERTBOOLLINE(3480, wp->mIndex >= 0 && wp->mIndex < counter);

				WayPoint* newWP = new WayPoint();

				static_cast<EditorRouteMgr*>(mRouteMgr)->addWayPoint(newWP);

				room->mWpIndices[wp->mIndex] = newWP->mIndex;

				newWP->mRadius   = wp->mRadius;
				newWP->mPosition = mtx1.mtxMult(wp->mPosition);

				if (wp->mDoFloorSnap) {
					newWP->mPosition.y = 0.0f;
				} else {
					newWP->mPosition.y = mapMgr->getMinY(newWP->mPosition);
				}

				wp = newWP;

			} else {
				WayPoint* newWP = aliveRoom->mUnit->mRouteMgr.getWayPoint(targetLink->mBirthDoorIndex); // r23
				P2ASSERTLINE(3504, aliveRoom->mWpIndices);

				room->mWpIndices[wp->mIndex] = aliveRoom->mWpIndices[newWP->mIndex];

				wp = mRouteMgr->getWayPoint(room->mWpIndices[wp->mIndex]);
			}

			RoomDoorInfo* doorInfo = &room->mDoorInfos[nextIdx++];
			doorInfo->mWaypoint    = wp;

			WayPoint::RoomList* roomList = new WayPoint::RoomList(room->mIndex);

			wp->mRoomList.add(roomList);

			Matrixf mtx2;
			Vector3f rotation3(0.0f, faceAngle, 0.0f);
			mtx2.makeTR(Vector3f::zero, rotation3);

			doorInfo->mLookAtPos = mtx2.getColumn(3) + (Vector3f)(doorDirs[door->mDir]); // not right, just a placeholder

		} else {
			P2ASSERTBOOLLINE(3530, wp->mIndex >= 0 && wp->mIndex < counter);

			WayPoint* newWP = new WayPoint();

			static_cast<EditorRouteMgr*>(mRouteMgr)->addWayPoint(newWP);

			room->mWpIndices[wp->mIndex] = newWP->mIndex;

			newWP->mRadius   = wp->mRadius;
			newWP->mPosition = mtx1.mtxMult(wp->mPosition);

			if (wp->mDoFloorSnap) {
				newWP->mPosition.y = 0.0f;
			} else {
				newWP->mPosition.y = mapMgr->getMinY(newWP->mPosition);
			}

			WayPoint::RoomList* roomList = new WayPoint::RoomList(room->mIndex);

			newWP->mRoomList.add(roomList);
		}
	}

	CI_LOOP(iterWP)
	{
		WayPoint* wp1 = *iterWP;                                               // r22
		WayPoint* wp2 = mRouteMgr->getWayPoint(room->mWpIndices[wp1->mIndex]); // r24

		if (wp1->mDoFloorSnap) {
			int numFromLinks = wp2->mNumFromLinks;
			if (wp2->mNumFromLinks == 0) {
				wp2->mNumFromLinks = wp1->mNumFromLinks;
				for (int i = 0; i < 8; i++) {
					if (wp1->mFromLinks[i] == -1) {
						wp2->mFromLinks[i] = -1;
					} else {
						wp2->mFromLinks[i] = room->mWpIndices[wp1->mFromLinks[i]];
					}
				}
			} else {
				for (int i = 0; i < wp1->mNumFromLinks; i++) {
					int totalLinks = numFromLinks + i;
					P2ASSERTLINE(3572, totalLinks < 8);
					if (wp1->mFromLinks[i] == -1) {
						wp2->mFromLinks[totalLinks] = -1;
					} else {
						wp2->mFromLinks[totalLinks] = room->mWpIndices[wp1->mFromLinks[i]];
					}
				}

				wp2->mNumFromLinks += wp1->mNumFromLinks;
			}
		} else {
			wp2->mNumFromLinks = wp1->mNumFromLinks;
			for (int i = 0; i < 8; i++) {
				if (wp1->mFromLinks[i] == -1) {
					wp2->mFromLinks[i] = -1;
				} else {
					wp2->mFromLinks[i] = room->mWpIndices[wp1->mFromLinks[i]];
				}
			}
		}
	}

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

/**
 * @note Address: 0x801BDFCC
 * @note Size: 0x1F4
 */
void RoomMapMgr::deleteTemp()
{
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter)
	{
		MapRoom* room = *iter;
		delete[] room->mWpIndices;
		room->mWpIndices = nullptr;
	}
}

/**
 * @note Address: 0x801BE1C0
 * @note Size: 0x94
 */
MapUnitInterface* RoomMapMgr::getMUI(MapUnit* unit)
{
	for (int i = 0; i < mMapUnitInterfaceCount; i++) {
		if (strcmp(unit->mName, mMapUnitInterface[i].mName) == 0) {
			return &mMapUnitInterface[i];
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x801BE254
 * @note Size: 0x60
 */
void RoomMapMgr::doAnimation()
{
	numRoomCulled = 0;
	mRoomMgr.doAnimation();
	if (mSeaMgr) {
		mSeaMgr->doAnimation();
	}
}

/**
 * @note Address: 0x801BE2B4
 * @note Size: 0xDC
 */
void RoomMapMgr::doEntry()
{
	sys->mTimers->_start("ENT-MAP", true);

	if (gameSystem) {
		BaseGameSection* section = gameSystem->getSection();
		if (mSeaMgr) {
			mSeaMgr->doEntry();
		}

		section->setDrawBuffer(DB_MapLayer);
		mRoomMgr.doEntry();
		if (mVRBox.mModel) {
			section->setDrawBuffer(DB_FirstLayer);
			mVRBox.mModel->mJ3dModel->entry();
		}

		section->setDrawBuffer(DB_NormalLayer);
	}

	sys->mTimers->_stop("ENT-MAP");
}

/**
 * @note Address: 0x801BE390
 * @note Size: 0x7C
 */
void RoomMapMgr::doSetView(int viewportNumber)
{
	mRoomMgr.doSetView(viewportNumber);
	if (mSeaMgr) {
		mSeaMgr->doSetView(viewportNumber);
	}

	if (mVRBox.mModel) {
		mVRBox.mModel->setCurrentViewNo(viewportNumber);
	}
}

/**
 * @note Address: 0x801BE40C
 * @note Size: 0x68
 */
void RoomMapMgr::doViewCalc()
{
	mRoomMgr.doViewCalc();
	if (mSeaMgr) {
		mSeaMgr->doViewCalc();
	}

	if (mVRBox.mModel) {
		mVRBox.mModel->viewCalc();
	}
}

/**
 * @note Address: 0x801BE474
 * @note Size: 0x4
 */
void RoomMapMgr::doSimulation(f32) { }

/**
 * @note Address: 0x801BE478
 * @note Size: 0x210
 */
void RoomMapMgr::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter) { (*iter)->doDirectDraw(gfx); }
}

} // namespace Game
