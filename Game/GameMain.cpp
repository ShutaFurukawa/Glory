//*--------------------------------------------------------------*//
//= @file   ���O:GameMain.cpp
//=
//= @brief  �T�v:�Q�[���֘A�̃\�[�X�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// �w�b�_�t�@�C���̓ǂݍ��� ================================================
#define _GAMEMAIN_
#include "GameMain.h"

#include<fstream>
#include<iostream>
#include<string>
#include<sstream>

#include "..\ADX2Le.h"
#include "CueSheet_0.h"

#include "GameLogo.h"
#include "GameTitle.h"
#include "GamePlay.h"
#include "GameClear.h"
#include "GameOver.h"

#pragma comment(lib,"cri_ware_pcx86_LE_import.lib")

//���O���
using namespace DirectX::SimpleMath;
using namespace DirectX;
using namespace std;

//----------------------------------------------------------------------
//! @brief �R���X�g���N�^
//!
//! @param[in] �Ȃ�
//----------------------------------------------------------------------
GameMain::GameMain()
{
	m_scene = PLAY;
	m_NextScene = m_scene;

	base = new GamePlay;

	//���̓ǂݍ���
	//g_se = LoadSoundMem("Resources\\Sounds\\SE00.ogg");
	//ADX2Le::Initialize("Resources\\Sounds\\NewProject.acf");
	//ADX2Le::LoadAcb("Resources\\Sounds\\CueSheet_0.acb");
	//ADX2Le::Play(CRI_CUESHEET_0__CUE_ID_0);

}

//----------------------------------------------------------------------
//! @brief �f�X�g���N�^
//----------------------------------------------------------------------
GameMain::~GameMain()
{
	//ADX2Le::Finalize();
	delete base;
}

//----------------------------------------------------------------------
//! @brief �Q�[���̍X�V����
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void GameMain::UpdateGame(void)
{
	ADX2Le::Update();

	//�V�[���Ǘ�
	if (m_scene != m_NextScene)
	{
		m_scene = m_NextScene;

		//�V�[������
		switch (m_scene)
		{
		case LOGO:
			base = new GameLogo();
			break;
		case TITLE:
			base = new GameTitle();
			break;
		case PLAY:
			base = new GamePlay();
			break;
		case CLEAR:
			base = new GameClear();
			break;
		case OVER:
			base = new GameOver();
			break;
		}
	}

	base->Update();
}

//----------------------------------------------------------------------
//! @brief �Q�[���̕`�揈��
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void GameMain::RenderGame(void)
{
	base->Render();
}

//----------------------------------------------------------------------
//! @brief ���l�`�揈��
//!
//! @param[in] xy���W�C���lw
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void GameMain::Transition(SCENE scene)
{
	m_NextScene = scene;
}

//----------------------------------------------------------------------
//! @brief ���l�`�揈��
//!
//! @param[in] xy���W�C���lw
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
SCENE GameMain::GetScene()
{
	return m_NextScene;
}

//----------------------------------------------------------------------
//! @brief ���l�`�揈��
//!
//! @param[in] xy���W�C���lw
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void GameMain::DrawNum(int x, int y, int n)
{
	int w = n;		//�v�Z�p
	int i = 0;		//������

	if (w == 0)
	{
	//	//DrawRectGraph(x, y, 0, 48, 25, 32, g_PongImage, TRUE, FALSE);
	}
	else
	{
		while (w)
		{
	//		//DrawRectGraph(x - i * 25, y,
	//		//	(w % 10) * 25, 48, 25, 32, g_PongImage, TRUE, FALSE);
			w = w / 10;
			i++;
		}
	}

}

//----------------------------------------------------------------------
//! @brief ������`�揈��
//!
//! @param[in] �Ȃ�
//!
//! @return �Ȃ�
//----------------------------------------------------------------------
void GameMain::DrawString(int x,int y,string str)
{
	//������ҏW
	swprintf_s(m_buf, 256, L"%s", str);
	//�����̕`��
	g_spriteFont->DrawString(g_spriteBatch.get(), m_buf, Vector2(x, y));
}
