#include<iostream>
using namespace std;

int main()
{
	unsigned long quiz1=0;
	quiz |= 1UL << 27; //student 27 pass
	quiz1 &= ~(1UL << 27);//student 27 failed
	bool status=quiz1&(1UL << 27);//student 27 pass or not?
	//�ұߵõ�����һ��long����������������Ϊ0����ѧ���ҿ� 
	
	return 0;
}

