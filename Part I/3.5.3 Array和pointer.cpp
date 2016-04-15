#include<iostream>
#include<cstddef>
using namespace std;

int main()
{
	string nums[]={"one","two","three"};
	string *p=&nums[0];//array也是一种pointer,array名是指向array[0]的指针
	
	string *p2=nums;//p2=&num[0]; 
	
	int ia[]={0,1,2,3,4,5,6,7,8,9};
	auto ia2(ia);//ia2是指向ia[0]的pointer 
	ia2=42;//error
	
	auto ia2(&ia[0]);
	
	decltype(ia) ia3={0,1,2,3,4,5,6,7,8,9};
	ia3=p;//error，可以用array给pointer赋值 ，反过来不行
	ia3[4]=i; 
	
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int *p=arr;//p指向arr[0] 
	++p;//p指向arr[1]
	
	int *e=&arr[10];//e指向arr最后一个元素的下一个地址 
	
	for (int *b=arr; b!=e, ++b)
		cout << *b << endl;//类似iteartor
	
	int ia[]={0,1,2,3,4,5,6,7,8,9};
	int *beg=begin(ia);
	int *last=end(ia); 
	
	int *pbeg=begin(arr), *pend=end(arr);
	while (pbeg!=pend && *pbeg>=0)
		++pbeg;//找到第一个负数
	
	constexpr size_t sz=5;
	int arr[sz]={1,2,3,4,5};
	int *ip=arr;
	int *ip2=ip+4;
	
	int *p=arr+sz;
	int *p2=arr+10;//error 超出范围 
	
	auto n=end(arr)-begin(arr);
	
	int *b=arr, *e=arr+sz;
	while (b<e) 
		++b;
		
	int i=0,sz=42;
	int *p=&i, *e=sz;//error 不能比较两个不同array的pointer
	while (p<e)
	
	int ia[]={0,2,4,6,8};
	int last=*(ia+4);//last指向ia[4]
	
	last=*ia+4;
	
	int ia[]={0,2,4,6,8};
	
	int i=ia[2];
	//实际上是下面的代码 
	int *p=ia;
	i=*(p+2);
	
	int *p=&ia[2];
	int j=p[1];
	int k=p[-2];//ia[0]
	
	return 0;
}

