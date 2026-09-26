#include "JSystem/J3D/J3DSkinDeform.h"
#include "JSystem/J3D/J3DAnmCluster.h"

/**
 * @note Address: 0x8006A59C
 * @note Size: 0x24
 */
void J3DDeformData::deform(J3DModel* model)
{
	deform(model->getVertexBuffer());
}

/**
 * @note Address: 0x8006A5C0
 * @note Size: 0xD4
 */
void J3DDeformData::deform(J3DVertexBuffer* vtxbuffer)
{
	// Swap vtxbuffer positions
	vtxbuffer->swapVtxPosArrayPointer();
	vtxbuffer->swapVtxNrmArrayPointer();

	for (u16 i = 0; i < mClusterNum; i++) {
		mClusters[i].getDeformer()->deform(vtxbuffer, i);
	}

	DCStoreRangeNoSync(vtxbuffer->getVtxPosArrayPointer(0), vtxbuffer->getVertexData()->getVtxNum() * 12);
	DCStoreRangeNoSync(vtxbuffer->getVtxNrmArrayPointer(0), vtxbuffer->getVertexData()->getNrmNum() * 12);
	PPCSync();

	vtxbuffer->setCurrentVtxPos(vtxbuffer->getVtxPosArrayPointer(0));
	vtxbuffer->setCurrentVtxNrm(vtxbuffer->getVtxNrmArrayPointer(0));
}

/**
 * @note Address: 0x8006A694
 * @note Size: 0x168
 */
void J3DDeformer::deform(J3DVertexBuffer* vtxbuffer, u16 index)
{
	u16 size = 0;
	if (mAnmCluster) {
		for (u16 i = 0; i < index; i++) {
			size += mDeformData->getClusterPointer(i)->mSize;
		}

		u16 max = mDeformData->getClusterPointer(index)->mSize;
		for (u16 i = 0; i < max; i++) {
			mWeightList[i] = mAnmCluster->getWeight(size++);
		}
		deform(vtxbuffer, index, mWeightList);
	}
}

/**
 * @note Address: 0x8006A7FC
 * @note Size: 0x26C
 */
void J3DDeformer::deform_VtxPosF32(J3DVertexBuffer* vtxbuffer, J3DCluster* cluster, J3DClusterKey* key, f32* weights)
{
	int clusterCount;
	Vec* src;
	int clusterSize;
	f32* dst;
	u16* vtxIndices;

	clusterCount = cluster->mCount;
	clusterSize  = cluster->mSize;
	dst          = (f32*)vtxbuffer->getVtxPosArrayPointer(0);
	src          = (Vec*)mDeformData->getVtxPos();
	vtxIndices   = cluster->_18;

	for (int i = 0; i < clusterCount; i++) {
		int idx      = vtxIndices[i] * 3;
		dst[idx]     = 0.0f;
		dst[idx + 1] = 0.0f;
		dst[idx + 2] = 0.0f;
	}

	f32 weightModifiers[2] = { 1.0f, -1.0f };
	for (u16 i = 0; i < clusterCount; i++) {
		int idx = cluster->_18[i] * 3;
		for (u16 j = 0; j < clusterSize; j++) {
			int index = key[j]._04[i];
			f32 x     = src[index & ~0xE000].x;
			f32 y     = src[index & ~0xE000].y;
			f32 z     = src[index & ~0xE000].z;
			x *= weightModifiers[(index & 0x8000) >> 15];
			y *= weightModifiers[(index & 0x4000) >> 14];
			z *= weightModifiers[(index & 0x2000) >> 13];
			dst[idx] += x * weights[j];
			dst[idx + 1] += y * weights[j];
			dst[idx + 2] += z * weights[j];
		}
	}
}

/**
 * @note Address: 0x8006AA68
 * @note Size: 0x470
 */
void J3DDeformer::deform_VtxNrmF32(J3DVertexBuffer* vtxBuffer, J3DCluster* cluster, J3DClusterKey* key, f32* weights)
{
	Vec* vtxNorms;
	u16 i;
	u16 clusterSize;
	f32* vtxNormBuffer;
	f32* vecBuffer;
	int clusterUnk;
	u32 idx2;
	f32* currVec;

	vtxNormBuffer = (f32*)vtxBuffer->getVtxNrmArrayPointer(0);
	vtxNorms      = (Vec*)mDeformData->getVtxNrm();
	vecBuffer     = _0C;
	clusterSize   = cluster->mSize;
	clusterUnk    = cluster->_16;

	for (i = 0; i < cluster->_14; i++) {
		f32* sumVec = &vecBuffer[(int)(i * 3)];
		sumVec[0]   = 0.0f;
		sumVec[1]   = 0.0f;
		sumVec[2]   = 0.0f;
		for (u16 j = 0; j < clusterSize; j++) {
			u16 flag = key[j]._08[i];
			f32 xWeight;
			if (flag & 0x8000) {
				xWeight = -vtxNorms[flag & ~0xE000].x;
			} else {
				xWeight = vtxNorms[flag & ~0xE000].x;
			}
			f32 yWeight;
			if (flag & 0x4000) {
				yWeight = -vtxNorms[flag & ~0xE000].y;
			} else {
				yWeight = vtxNorms[flag & ~0xE000].y;
			}
			f32 zWeight;
			if (flag & 0x2000) {
				zWeight = -vtxNorms[flag & ~0xE000].z;
			} else {
				zWeight = vtxNorms[flag & ~0xE000].z;
			}

			sumVec[0] += xWeight * weights[j];
			sumVec[1] += yWeight * weights[j];
			sumVec[2] += zWeight * weights[j];
		}
		normalize(sumVec);
	}

	for (u16 i = 0; i < clusterUnk; i++) {
		J3DClusterKey* key = &cluster->mKeys[i];
		f32 vec[3]; // 0x8
		vec[0]  = 0.0f;
		vec[1]  = 0.0f;
		vec[2]  = 0.0f;
		f32 val = 1.0f / f32(key->_00);
		for (u16 j = 0; j < key->_00; j++) {
			f32* currVec = &vecBuffer[(int)(key->_04[j] * 3)];
			vec[0] += val * currVec[0];
			vec[1] += val * currVec[1];
			vec[2] += val * currVec[2];
		}

		normalize(vec);

		for (u16 j = 0; j < key->_00; j++) {
			u16 idx = key->_08[j];
			if (idx == 0xFFFF) {
				continue;
			}

			idx2        = key->_04[j];
			currVec     = &vecBuffer[(int)(idx2 * 3)];
			int idx3    = idx * 3; // r21
			f32 dotProd = vec[0] * currVec[0] + vec[1] * currVec[1] + vec[2] * currVec[2];
			if (dotProd >= 1.0f) {
				dotProd = 0.0f;
			} else if (dotProd > -1.0f) {
				dotProd = JMath::acosDegree(dotProd);
			} else {
				dotProd = 180.0f;
			}

			if (dotProd <= cluster->_04) {
				f32* norm = &vtxNormBuffer[idx3];
				norm[0]   = vec[0];
				norm[1]   = vec[1];
				norm[2]   = vec[2];
				continue;
			}

			if (dotProd > cluster->_00) {
				f32* nextNorm = &vecBuffer[idx2 * 3];
				f32* norm     = &vtxNormBuffer[idx3];
				norm[0]       = nextNorm[0];
				norm[1]       = nextNorm[1];
				norm[2]       = nextNorm[2];
				continue;
			}

			f32 factor = (dotProd - cluster->_04) / (cluster->_00 - cluster->_04);
			f32* norm  = &vtxNormBuffer[idx3];

			f32 inv = 1.0f - factor;
			norm[0] = factor * currVec[0] + inv * vec[0];
			norm[1] = factor * currVec[1] + inv * vec[1];
			norm[2] = factor * currVec[2] + inv * vec[2];
		}
	}
}

/**
 * @note Address: 0x8006AED8
 * @note Size: 0x1CC
 */
void J3DDeformer::deform(J3DVertexBuffer* vtxbuffer, u16 index, f32* weights)
{
	if (checkFlag(Active) && vtxbuffer->getVertexData()->getVtxPosType() == GX_F32) {

		J3DCluster* cluster = mDeformData->getClusterPointer(index);

		u16 size = 0;
		for (u16 i = 0; i < index; i++) {
			size += mDeformData->getClusterPointer(i)->mSize + 1;
		}

		J3DClusterKey* key = mDeformData->getClusterKeyPointer(size);
		normalizeWeight(cluster->mSize, weights);
		deform_VtxPosF32(vtxbuffer, cluster, key, weights);
		if (checkFlag(UseNrm) && cluster->_0C && vtxbuffer->getVertexData()->getVtxNrmType() == GX_F32) {
			deform_VtxNrmF32(vtxbuffer, cluster, key, weights);
		}
	}
}

/**
 * @note Address: 0x8006B0A4
 * @note Size: 0x15C
 */
void J3DDeformer::normalizeWeight(int count, f32* weights)
{
	f32 total = 0.0f;
	for (u16 i = 0; i < count; i++) {
		total += weights[i];
	}
	total = 1.0f / total;

	for (u16 i = 0; i < count; i++) {
		weights[i] *= total;
	}
}
