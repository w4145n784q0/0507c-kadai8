#pragma once
class Status
{
	//�����o�ϐ�
	int lv, hp, atk, def; //�e�p�����[�^
	//�����o�֐�
public:
	bool SetLv(int i);
	void Calc();
	int GetHp();
	int GetAtk();
	int GetDef();
	int GetLv();
};

