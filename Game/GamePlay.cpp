//*--------------------------------------------------------------*//
//= @file   ���O:GamePlay.cpp
//=
//= @brief  �T�v:�v���C�����̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// �w�b�_�t�@�C���̓ǂݍ��� ================================================
#include "GameMain.h"
#include "GamePlay.h"
#include "ObjectBase.h"
#include "Player.h"

#include <time.h>

//���O���
using namespace DirectX::SimpleMath;
using namespace DirectX;

//----------------------------------------------------------------------
//! @brief �R���X�g���N�^
//!
//! @param[in] �Ȃ�
//----------------------------------------------------------------------
GamePlay::GamePlay()
{
	//�����_�������擾
	srand((unsigned int)time(NULL));

	//�v���C���[�̓I�u�W�F�N�g�N���X�̔h���N���X�ł���
	player = new Player();
	//�G�l�~�[�|�C���^����邱�ƂŔz�񉻂����Ă���
	enemy = new Enemy();
}

//----------------------------------------------------------------------
//! @brief �f�X�g���N�^
//----------------------------------------------------------------------
GamePlay::~GamePlay(void)
{
	delete player;
	delete enemy;

}


//----------------------------------------------------------------------
//! @brief �Q�[���v���C����
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void GamePlay::Update(void)
{
	//int i;					//�J�E���^

	//�����Őݒ肷��̂͑��x

	//�L�[���͊֌W

	//�v���C���[�̍��W�ύX
	player->Update();
	enemy->Update();

	//�X�y�[�X�L�[�Ńv���C�ɑJ��
	if (g_keyTracker->pressed.Space)
	{
		game->Transition(TITLE);
		game->UpdateGame();
	}
}

//----------------------------------------------------------------------
//! @brief �Q�[���v���C�`�揈��
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void GamePlay::Render(void)
{
	//�v���C���[�̕`�揈��
	player->Render();
	enemy->Render();
}
