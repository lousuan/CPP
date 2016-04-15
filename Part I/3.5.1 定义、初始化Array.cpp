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
	int a2[]=a;//error:不能用一个array初始化另一个 
	a2=a;
	
	int *ptrs[10];//pts是一个数组，每个元素是 
	int &refs[10]=/* ? */;
	int (*parray)[10]=&arr;//一个指针，指向一个十个整数元素的数组
	int (&arrRef)[10]=arr;//一个引用，指向一个十个整数元素的数组
	
	int *(&arry)[10]=ptrs;//一个引用，指向一个十个指针的数组，指针指向int 
	
	return 0; 
}
