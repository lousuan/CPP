#include<iostream>
using namespace std;

int main()
{
	unsigned cnt=42;
	constexpr unsigned sz=42;//const expression
	
	int *arr[10];
	int *parr[sz];
	string bad[cnt];
	string strs[get_size()];//legal when get_size is constexpr
	
	const unsigned sz=3;
	int ia1[sz]={0,1,2};
	int a2[]={0,1,2};
	int a3[5]={0,1,2};
	string a4[3]={"hi","bye"};
	int a5[2]={0,1,2}}
	
	char a1[]={'C','+','+'};
	char a2[]={'C','+','+','\0'};//a2 is the same as a3
	char a3[]="C++";
	const char a4[6]="Daniel";//error, no space for the "\0" 
	
	int a[]={0,1,2};
	int a2[]=a;//error:������һ��array��ʼ����һ�� 
	a2=a;
	
	int *ptrs[10];//pts��һ�����飬ÿ��Ԫ���� 
	int &refs[10]=/* ? */;
	int (*parray)[10]=&arr;//һ��ָ�룬ָ��һ��ʮ������Ԫ�ص�����
	int (&arrRef)[10]=arr;//һ�����ã�ָ��һ��ʮ������Ԫ�ص�����
	
	int *(&arry)[10]=ptrs;//һ�����ã�ָ��һ��ʮ��ָ������飬ָ��ָ��int 
	
	return 0; 
}
