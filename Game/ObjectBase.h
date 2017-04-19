//*--------------------------------------------------------------*//
//= @file   ���O:ObjectBase.h
//=
//= @brief  �T�v:�I�u�W�F�N�g�x�[�X�̃w�b�_�t�@�C��
//=
//= @date   ���t:2016/2/4
//=
//= @author �����:ShutaFurukawa
//*--------------------------------------------------------------*//

//�w�b�_�t�@�C���̑��d�C���N���[�h�h�~
#pragma once

//�w�b�_�t�@�C���̃C���N���[�h
#include "..\Texture.h"
#include "..\DirectXTK.h"

//�N���X�̒�`
class ObjectBase
{
	//������J�����o
protected:
	Texture *handle;		//�O���t�B�b�N�n���h�� 
	int grp_x;				//���摜�̂����W 
	int grp_y;				//���摜�̂����W 
	int grp_w;				//���摜�̕� 
	int grp_h;				//���摜�̍��� 
	float pos_x;			//���Wx 
	float pos_y;			//���Wy 
	float spd_x;			//���xx 
	float spd_y;			//���xy 
	int state;				//���

	//���J�����o
public:
	//�R���X�g���N�^
	ObjectBase();
	//�f�X�g���N�^
	~ObjectBase();

	//�����o�֐�
	//�O���t�B�b�N�n���h���֌W�֐�
	Texture* GetHandle();
	void SetHandle(Texture* h);

	//���摜�̂����W�֌W�֐�
	int GetGrpX();
	void SetGrpX(int x);

	//���摜�̂����W�֌W�֐�
	int GetGrpY();
	void SetGrpY(int y);

	//���摜�̕��֌W�֐�
	int GetGrpW();
	void SetGrpW(int w);

	//���摜�̍����֌W�֐�
	int GetGrpH();
	void SetGrpH(int h);

	//���Wx�֌W�֐�
	float GetPosX();
	void SetPosX(float x);

	//���Wy�֌W�֐�
	float GetPosY();
	void SetPosY(float y);

	//���xx�֌W�֐�
	float GetSpdX();
	void SetSpdX(float sx);

	//���xy�֌W�֐�
	float GetSpdY();
	void SetSpdY(float sy);

	//��Ԋ֌W�֐�
	int GetState();
	void SetState(int state);

	//�X�V����
	void Update();
	//�`�揈��
	void Render();
};