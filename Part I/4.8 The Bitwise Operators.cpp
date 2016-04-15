#include<iostream>
using namespace std;

int main()
{
	unsigned long quiz1=0;
	quiz |= 1UL << 27; //student 27 pass
	quiz1 &= ~(1UL << 27);//student 27 failed
	bool status=quiz1&(1UL << 27);//student 27 pass or not?
	//右边得到的是一个long整数。如果这个整数为0，则学生挂科 
	
	return 0;
}

