//*--------------------------------------------------------------*//
//= @file   ���O:GameLogo.h
//=
//= @brief  �T�v:���S�����̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once


class GameLogo :public GameBase
{
private:
	int cnt;		//�t���[���J�E���g
	int* p;			//�������[���[�N���ؗp

public:
	//�R���X�g���N�^
	GameLogo();
	//�f�X�g���N�^
	~GameLogo();

	//�X�V����
	void Update();
	//�`�揈��
	void Render();
	
};

