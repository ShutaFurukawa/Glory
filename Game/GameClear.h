//*--------------------------------------------------------------*//
//= @file   ���O:GameClear.h
//=
//= @brief  �T�v:�N���A�����̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once


class GameClear :public GameBase
{
private:
	int cnt;		//�t���[���J�E���g
	GameMain* game;		//�Q�[�����C��

public:
	//�R���X�g���N�^
	GameClear();
	//�f�X�g���N�^
	~GameClear();

	//�X�V����
	void Update();
	//�`�揈��
	void Render();
	
};

