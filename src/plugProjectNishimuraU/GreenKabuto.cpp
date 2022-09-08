#include "types.h"
#include "Game/Entities/Kabuto.h"
#include "JSystem/J3D/J3DSys.h"

namespace Game {
namespace GreenKabuto {

/*
 * --INFO--
 * Address:	802FFBC8
 * Size:	000090
 */
Obj::Obj() { }

/*
 * --INFO--
 * Address:	802FFC58
 * Size:	0001A4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = m_model->m_j3dModel;
	modelData          = j3dModel->m_modelData;
	ResTIMG* texture   = static_cast<Mgr*>(m_mgr)->getChangeTexture();

	j3dModel->calcMaterial();
	ResTIMG* newTexture;
	J3DTexture* j3dTexture = m_model->m_j3dModel->m_modelData->m_materialTable.m_texture;
	newTexture             = j3dTexture->_04;

	newTexture->m_textureFormat     = texture->m_textureFormat;
	newTexture->m_transparency      = texture->m_transparency;
	newTexture->m_sizeX             = texture->m_sizeX;
	newTexture->m_sizeY             = texture->m_sizeY;
	newTexture->m_wrapS             = texture->m_wrapS;
	newTexture->m_wrapT             = texture->m_wrapT;
	newTexture->m_paletteFormat     = texture->m_paletteFormat;
	newTexture->m_lutFormat         = texture->m_lutFormat;
	newTexture->m_paletteEntryCount = texture->m_paletteEntryCount;
	newTexture->m_paletteOffset     = texture->m_paletteOffset;
	newTexture->_10                 = texture->_10;
	newTexture->_11                 = texture->_11;
	newTexture->_12                 = texture->_12;
	newTexture->_13                 = texture->_13;
	newTexture->m_magFilterType     = texture->m_magFilterType;
	newTexture->m_minFilterType     = texture->m_minFilterType;
	newTexture->_16                 = texture->_16;
	newTexture->_17                 = texture->_17;
	newTexture->m_totalImageCount   = texture->m_totalImageCount;
	newTexture->_19                 = texture->_19;
	newTexture->_1A                 = texture->_1A;
	newTexture->m_imageDataOffset   = texture->m_imageDataOffset;

	j3dTexture->setImageOffset((u32)texture);
	j3dTexture->setPaletteOffset((u32)texture);

	for (u16 i = 0; i < modelData->m_materialTable.m_count1; i++) {
		J3DMatPacket* packet  = &j3dModel->m_matPackets[i & 0x3FFFF];
		j3dSys.m_matPacket    = packet;
		J3DMaterial* material = modelData->m_materialTable.m_materials1[i & 0x3FFFF];
		material->diff(packet->_2C->_34);
	}
}
} // namespace GreenKabuto
} // namespace Game
