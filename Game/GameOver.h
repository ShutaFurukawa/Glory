//*--------------------------------------------------------------*//
//= @file   ���O:GameOver.h
//=
//= @brief  �T�v:�Q�[���I�[�o�[�����̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once


class GameOver :public GameBase
{
private:
	int cnt;		//�t���[���J�E���g

public:
	//�R���X�g���N�^
	GameOver();
	//�f�X�g���N�^
	~GameOver();

	//�X�V����
	void Update();
	//�`�揈��
	void Render();
	
};

