#pragma once
class Status
{
	//�����o�ϐ�
	int lv, hp, atk, def; //�e�p�����[�^
	//�����o�֐�
public:
	void SetLv(int i);
	void Calc();
	int GetHp();
	int GetAtk();
	int GetDef();
	int GetLv();
};

