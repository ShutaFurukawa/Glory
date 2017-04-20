//*--------------------------------------------------------------*//
//= @file   ���O:GameMain.h
//=
//= @brief  �T�v:�Q�[���֘A�̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

// ���d�C���N���[�h�̖h�~ ==================================================
#pragma once

#ifndef _GAMEMAIN_
#define EXTERN extern
#else
#define EXTERN
#endif

#include <windows.h>
#include <d3d11.h>
#include <SimpleMath.h>
#include "..\DirectXTK.h"
#include "..\Texture.h"
#include "GameBase.h"

// �萔�̒�` ==============================================================

// �Q�[���^�C�g��
#define GAME_TITLE "Glory"

// �Q�[�����
#define SCREEN_WIDTH  640    // ��[pixel]
#define SCREEN_HEIGHT 480    // ����[pixel]

//�@�񋓌^�錾
enum SCENE
{
	BASE,
	LOGO,
	TITLE,
	PLAY,
	CLEAR,
	OVER
};

//�N���X�̒�`
class GameMain
{
	//����J�����o
private:
	int m_scene;				//�V�[���Ǘ�
	int m_NextScene;			//���̃V�[��

	int g_TimeCnt;				//���ԃJ�E���^
	int g_Time;					//�b��

	wchar_t m_buf[256];			//������ҏW�p

	GameBase *base;				//�Q�[���x�[�X�̃I�u�W�F�N�g

	//���J�����o
public:
	//�R���X�g���N�^
	GameMain();
	//�f�X�g���N�^
	~GameMain();

	// �Q�[���̍X�V����
	void UpdateGame(void);
	// �Q�[���̕`�揈��
	void RenderGame(void);
	// ���l�`�揈��
	void DrawNum(int x, int y, int n);
	// �V�[���J�ڏ���
	void Transition(int NextScene);
	// ������`�揈��
	void DrawString(int x, int y, std::string str);
};
