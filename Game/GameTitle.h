//*--------------------------------------------------------------*//
//= @file   ���O:GameTitle.h
//=
//= @brief  �T�v:�^�C�g�������̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once


class GameTitle :public GameBase
{
private:
	int cnt;		//�t���[���J�E���g

public:
	//�R���X�g���N�^
	GameTitle();
	//�f�X�g���N�^
	~GameTitle();

	//�X�V����
	void Update();
	//�`�揈��
	void Render();
	
};

