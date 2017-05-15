//*--------------------------------------------------------------*//
//= @file   ���O:GameBase.h
//=
//= @brief  �T�v:�Q�[���x�[�X�̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once

class GameBase
{
public:

	virtual ~GameBase(){};

	//�������z�֐��Ƃ��Ď���
	virtual void Update() = 0;
	virtual void Render() = 0;

};


