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
Door* MapUnitInterface::getDoor(int idx)
{
	return (Door*)mDoor.getChildAt(idx);
}

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
DoorLink* Door::getLink(int idx)
{
	return static_cast<DoorLink*>(mRootLink.getChildAt(idx));
}

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
	FOREACH_NODE(DoorLink, mRootLink.mChild, link)
	{
		link->write(stream);
	}
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

	unit->mModelData = J3DModelLoaderDataBase::load(viewModelData, J3DMLF_Material_PE_FogOff);
	unit->mModelData->newSharedDisplayList(J3DMLF_UseSingleSharedDL);
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
	for (int i = 0; i < mObjectLayoutInfo->getCount(1); i++) {
		ObjectLayoutNode* node = mObjectLayoutInfo->getNode(1, i);

		PelletIndexInitArg initArg(node->getObjectId());
		pelletMgr->setUse(&initArg);
	}

	if (gameSystem && gameSystem->isVersusMode()) {
		PelletList::cKind kind;
		PelletConfig* config = PelletList::Mgr::getConfigAndKind(const_cast<char*>(VsOtakaraName::cCoin), kind);

		if (config) {
			int index = pelletMgr->encode(kind, config->mParams.mIndex);
			PelletIndexInitArg initArg(index);
			pelletMgr->setUse(&initArg);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x170
 */
void MapRoom::countEnemys()
{
	for (int i = 0; i < mObjectLayoutInfo->getCount(0); i++) {
		ObjectLayoutNode* node = mObjectLayoutInfo->getNode(0, i);
		u8 num;
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

		num = node->getBirthCount();

		generalEnemyMgr->addEnemyNum(node->getObjectId(), num, nullptr);
	}
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
					f32 dir                = JMAAtan2Radian(doorinfo->mLookAtPos.x, doorinfo->mLookAtPos.z);
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
void MapRoom::getCenterPosition(Vector3f& pos)
{
	pos = mBoundingSphere.mPosition;
}

/**
 * @note Address: N/A
 * @note Size: 0x16C
 */
void MapRoom::create(MapUnit* unit, Matrixf& mtx)
{
	mUnit = unit;
	PSMTXCopy(mtx.mMatrix.mtxView, mRoomSpaceMtx.mMatrix.mtxView);
	PSMTXInverse(mtx.mMatrix.mtxView, mInvRoomSpaceMtx.mMatrix.mtxView);
	mModel = new SysShape::Model(unit->mModelData, J3DMODEL_CreateNewDL, 2);
	mModel->mJ3dModel->newDifferedTexMtx(TEXDIFF_Material);
	mModel->mJ3dModel->newDifferedDisplayList(0x200);

	PSMTXCopy(mRoomSpaceMtx.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->makeDL();
	mModel->mJ3dModel->lock();

	mAnimationCount = unit->mAnimationCount;
	mAnimators      = new Sys::MatLoopAnimator[mAnimationCount];

	for (int i = 0; i < mAnimationCount; i++) {
		mAnimators[i].start(&unit->mAnimations[i]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
RoomDoorInfo* MapRoom::createDoorInfo(MapUnitInterface* mui)
{
	mInterface = mui;
	mDoorInfos = new RoomDoorInfo[mui->mDoorCount];
	return mDoorInfos;
}

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
void MapRoom::doViewCalc()
{
	mModel->viewCalc();
}

/**
 * @note Address: 0x801B7AF8
 * @note Size: 0x4
 */
void MapRoom::doSimulation(f32)
{
}

/**
 * @note Address: 0x801B7AFC
 * @note Size: 0x4
 */
void MapRoom::doDirectDraw(Graphics&)
{
}

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
CaveVRBox::CaveVRBox()
{
	mModel = nullptr;
}

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
				J3DModelData* model = J3DModelLoaderDataBase::load(res, J3DMLF_Material_PE_FogOff);
				model->newSharedDisplayList(J3DMLF_UseSingleSharedDL);
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

	void* unitFile = JKRDvdToMainRam(unitFileName, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
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
		void* lightingFile
		    = JKRDvdToMainRam(lightingFileName, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);

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
	CI_LOOP(iter)
	{
		(*iter)->mIndex = -1;
	}
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
	WayPoint** wp = wps;
	for (int i = 0; i < 2; i++, wp++) {
		ItemDownFloor::Item* seesaw = static_cast<ItemDownFloor::Item*>(ItemDownFloor::mgr->birth());
		if (seesaw) {
			Vector3f position      = (*wp)->getPosition();
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
void RoomMapMgr::getBoundBox(BoundBox& boundbox)
{
	boundbox = mBoundbox;
}

/**
 * @note Address: 0x801B9B9C
 * @note Size: 0x4
 */
void RoomMapMgr::drawCollision(Graphics&, Sys::Sphere&)
{
}

/**
 * @note Address: 0x801B9BA0
 * @note Size: 0x1F0
 */
Sys::TriIndexList* RoomMapMgr::traceMove(MoveInfo& moveInfo, f32 rate)
{
	int counter = 1;
	Sys::TriIndexList* list;
	f32 len   = rate;
	f32 rad   = moveInfo.mMoveSphere->mRadius;
	f32 speed = moveInfo.mVelocity->length();

	do {
		if (len * speed > rad) {
			counter *= 2;
			len *= 0.5f;
			continue;
		}
		break;
	} while (counter <= 4);

	for (int i = 0; i < counter; i++) {
		list = traceMove_new(moveInfo, len);
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
}

/**
 * @note Address: 0x801B9D90
 * @note Size: 0x24
 */
bool RoomMapMgr::hasHiddenCollision()
{
	return mFloorInfo->hasHiddenCollision();
}

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

	int count21  = 0;
	int count20  = 0;
	int triIndex = 0;

	Iterator<MapRoom> iterCreate(&mRoomMgr);
	CI_LOOP(iterCreate)
	{
		MapRoom* room            = *iterCreate;
		Matrixf& mtx             = room->mRoomSpaceMtx;
		Sys::VertexTable* verts  = room->mUnit->mCollision.mDivider->mVertexTable;   // r26
		Sys::TriangleTable* tris = room->mUnit->mCollision.mDivider->mTriangleTable; // r19
		for (int i = 0; i < verts->mLimit; i++) {
			Vector3f preVert = *verts->getVertex(i);
			Vector3f vert    = mtx.mtxMult(preVert);
			vertTable->addOne(vert);
			count21++;
		}

		for (int i = 0; i < tris->mLimit; i++) {
			Sys::Triangle* postTri = triTable->getTriangle(triIndex);
			Sys::Triangle* preTri  = tris->getTriangle(i);
			postTri->mVertices[0]  = preTri->mVertices[0] + count20;
			postTri->mVertices[1]  = preTri->mVertices[1] + count20;
			postTri->mVertices[2]  = preTri->mVertices[2] + count20;
			postTri->mCode         = preTri->mCode;
			postTri->makePlanes(*vertTable);
			postTri->createSphere(*vertTable);
			mRoomTriIndices[triIndex] = room->mIndex;
			triIndex++;
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
}

/**
 * @note Address: 0x801BAD60
 * @note Size: 0x328
 */
Sys::TriIndexList* RoomMapMgr::traceMove_new(MoveInfo& info, f32 step)
{
	Sys::Sphere* moveSphere    = info.mMoveSphere;
	Vector3f* velocity         = info.mVelocity;
	const Vector3f& oldPos     = Vector3f(moveSphere->mPosition); // lol
	Vector3f startPos          = oldPos;
	moveSphere->mPosition      = moveSphere->mPosition + *velocity * step;
	Vector3f newPos            = moveSphere->mPosition;
	moveSphere->mPosition      = newPos;
	Sys::TriIndexList* triList = mMapCollision->mDivider->findTriLists(*moveSphere);

	Sys::VertexTable* vertTable = mMapCollision->mDivider->mVertexTable; // r23

	for (triList; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
		for (int i = 0; i < triList->getNum(); i++) {
			int index          = triList->getIndex(i);
			Sys::Triangle* tri = mMapCollision->mDivider->mTriangleTable->getTriangle(triList->getIndex(i));
			Sys::Triangle::SphereSweep sweep;
			sweep.mStartPos = startPos;
			sweep.mSphere   = *moveSphere;
			if (info.mDoHardIntersect) {
				sweep.mSweepType = Sys::Triangle::SphereSweep::ST_SphereIntersectPlane;
			}

			if (tri->intersect(*vertTable, sweep)) {
				info.mRoomIndex = mRoomTriIndices[index];
				// hate this, but something has to reuse some registers here, and this seems
				// the least egregious
				sweep.mIntersectionPoint = sweep.mIntersectionPoint;
				Vector3f normal          = sweep.mNormal;
				if (info.mIntersectCallback) {
					info.mIntersectCallback->invoke(sweep.mIntersectionPoint, sweep.mNormal);
				}

				if (sweep.mNormal.y >= info.mFloorThreshold) {
					info.mFloorTriangle = tri;
					info.mFloorNormal   = sweep.mNormal;
				} else if (absF(sweep.mNormal.y) <= info.mWallThreshold) {
					info.mWallTriangle = tri;
					info.mWallNormal   = sweep.mNormal;
				}

				f32 impactAmt         = sweep.mNormal.dot(*velocity);
				f32 elasticFactor     = 1.0f + info.mRestitution;
				*velocity             = *velocity - sweep.mNormal * (elasticFactor * impactAmt);
				moveSphere->mPosition = moveSphere->mPosition + normal * sweep.mDistanceFromRadius;
			}

			Sys::Triangle::debug = false;
		}
	}

	return nullptr;
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
		Vector3f sep  = room->mBoundingSphere.mPosition - moveSphere->mPosition;
		f32 radius    = room->mBoundingSphere.mRadius + moveSphere->mRadius;
		if (sep.x * sep.x + sep.z * sep.z > SQUARE(radius)) {
			continue;
		}
		MapUnit* unit         = room->mUnit;
		moveSphere->mPosition = room->mInvRoomSpaceMtx.mtxMult(moveSphere->mPosition);

		Sys::TriIndexList* list = unit->mCollision.mDivider->findTriLists(*moveSphere);

		for (Sys::TriIndexList* triList = list; triList && count < 8; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
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
	Vector3f sumVec = Vector3f(0.0f);
	f32 floatSum    = 0.0f;
	for (int i = 0; i < count; i++) {
		if (floatArray[i] < 0.0f) {
			continue;
		}
		count2++;
		floatSum += floatArray[i];
		const Vector3f& currVec = vecArray[i]; // lol
		sumVec                  = sumVec + currVec;
		if (currVec.y > 0.6f) {
			info.mFloorTriangle = triArray[i];
			info.mFloorNormal   = currVec;
		}
	}

	if (count2 == 0) {
		return nullptr;
	}

	f32 norm = 1.0f / (f32)count2;
	sumVec   = sumVec * norm;
	sumVec.normalise();

	floatSum /= (f32)count2;

	f32 impactAmt         = sumVec.dot(*velocity);
	f32 elasticFactor     = 1.0f + info.mRestitution;
	*velocity             = *velocity - sumVec * (elasticFactor * impactAmt);
	moveSphere->mPosition = moveSphere->mPosition + (sumVec * floatSum);
	return nullptr;
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
						f32 dist                 = directionVector.sqrLength();
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
	int n     = 0; // is this just count? yes. is it necessary to get the registers to work? also yes.
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

				Vector3f transRoomVec(0.0f);
				transRoomVec = room->mRoomSpaceMtx.multTranspose(tri->mTrianglePlane.mNormal);
				if (transRoomVec.y > createArg.mScaleLimit) {
					f32 scaleFactor = createArg.mScale;
					for (int k = 0; k < 3; k++) {
						vertices[k].add(vertices[k], transRoomVec * scaleFactor);
						vecs[3 * n + k] = vertices[k];
					}
					triArray[n]  = tri;
					roomArray[n] = room;
					count++;
					n++;
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

	Matrixf mtx1;
	Matrixf boundMtx;
	Vector3f doorDirs[4];
	Matrixf mtx2;

	room->countEnemys();
	room->countItems();

	f32 cellSize = 170.0f;
	Vector3f translation(centreX * cellSize, 0.0f, centreY * cellSize); // 0xD0
	Vector3f rotation1(0.0f, faceAngle, 0.0f);                          // 0xC4
	mtx1.makeTR(translation, rotation1);

	MapUnit* unit = mMapUnitMgr->findMapUnit(unitName); // r22

	room->create(unit, mtx1);

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

	f32 cylinderRadius = room->mBoundingSphere.mRadius;
	Vector3f center;
	room->getCenterPosition(center);
	Vector3f startCyl = center;
	Vector3f endCyl   = center;
	endCyl.y -= 100.0f;

	room->mRoomVisibilityCylinder.set(startCyl, endCyl, cylinderRadius);

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

			doorDirs[0] = (Vector3f) { 0.0f, 0.0f, 1.0f };
			doorDirs[1] = (Vector3f) { 1.0f, 0.0f, 0.0f };
			doorDirs[2] = (Vector3f) { 0.0f, 0.0f, -1.0f };
			doorDirs[3] = (Vector3f) { -1.0f, 0.0f, 0.0f };

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

			Vector3f rotation3(0.0f, faceAngle, 0.0f);
			mtx2.makeTR(Vector3f::zero, rotation3);

			Vector3f doorDirection = doorDirs[door->mDir];
			doorDirection          = mtx2.multTranspose(doorDirection);
			doorInfo->mLookAtPos   = doorDirection;

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
void RoomMapMgr::doSimulation(f32)
{
}

/**
 * @note Address: 0x801BE478
 * @note Size: 0x210
 */
void RoomMapMgr::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	Iterator<MapRoom> iter(&mRoomMgr);
	CI_LOOP(iter)
	{
		(*iter)->doDirectDraw(gfx);
	}
}
} // namespace Game
