#include <iostream>
#include "Status.h"
int main()
{
	int lv;
	Status st;
	while (true)
	{
		std::cout << "���x������́�";
		std::cin >> lv;
		st.SetLv(lv);
		//if (!st.SetLv(lv)) break;
		if (st.GetLv() <= 0)
			break;
		
		st.Calc();
		std::cout << " �g�o =" << st.GetHp() << "\n";
		std::cout << "�U����=" << st.GetAtk() << "\n";
		std::cout << "�h���=" << st.GetDef() << "\n";
	}
	std::cout << "�v���O�������I�����܂�\n";
}