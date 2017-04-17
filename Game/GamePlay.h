//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/
//! @file   GameLogo.h
//!
//! @brief  �Q�[���v���C�̃w�b�_�t�@�C��
//!
//! @date   ���t
//!
//! @author ����Җ�
//__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/__/

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once

#include "Player.h"
#include "Enemy.h"

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

