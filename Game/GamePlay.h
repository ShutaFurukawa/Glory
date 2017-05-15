//*--------------------------------------------------------------*//
//= @file   ���O:GamePlay.h
//=
//= @brief  �T�v:�v���C�����̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once

#include "Player.h"
#include "Enemy.h"
#include "GameMain.h"

class GamePlay :public GameBase
{
private:
	//�}�E�X���W
	int mx;
	int my;

	//�v���C���[�I�u�W�F�N�g
	Player* player;
	//�G�l�~�[�I�u�W�F�N�g
	Enemy* enemy;

public:

	//�R���X�g���N�^
	GamePlay();
	//�f�X�g���N�^
	~GamePlay();

	//�X�V����
	void Update();
	//�`�揈��
	void Render();
	
};

