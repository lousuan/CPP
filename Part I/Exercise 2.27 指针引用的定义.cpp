#include<iostream>
using namespace std;

int main()
{
	int q=2;
	//int i=-1,&r=0;不能建立对常量的引用，需要加const（看第四行） 
	/*int i2;
	int *const p2=&i2;*///i2需要单独定义
	const int i=-1,&r=0;
	//const int *const p3=&i2; //i2需要单独定义
	//const int *p1=&i2;//i2需要单独定义
	//const int &const r2=i;//r2需要初始化。r2不是对象，不能加类型？ 
	const int i2=i,&r=1;//合法 

	getchar();
	getchar();
	return 0;
}

