#include<iostream>
#include<cstddef>
using namespace std;

int main()
{
	string nums[]={"one","two","three"};
	string *p=&nums[0];//arrayҲ��һ��pointer,array����ָ��array[0]��ָ��
	
	string *p2=nums;//p2=&num[0]; 
	
	int ia[]={0,1,2,3,4,5,6,7,8,9};
	auto ia2(ia);//ia2��ָ��ia[0]��pointer 
	ia2=42;//error
	
	auto ia2(&ia[0]);
	
	decltype(ia) ia3={0,1,2,3,4,5,6,7,8,9};
	ia3=p;//error��������array��pointer��ֵ ������������
	ia3[4]=i; 
	
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int *p=arr;//pָ��arr[0] 
	++p;//pָ��arr[1]
	
	int *e=&arr[10];//eָ��arr���һ��Ԫ�ص���һ����ַ 
	
	for (int *b=arr; b!=e, ++b)
		cout << *b << endl;//����iteartor
	
	int ia[]={0,1,2,3,4,5,6,7,8,9};
	int *beg=begin(ia);
	int *last=end(ia); 
	
	int *pbeg=begin(arr), *pend=end(arr);
	while (pbeg!=pend && *pbeg>=0)
		++pbeg;//�ҵ���һ������
	
	constexpr size_t sz=5;
	int arr[sz]={1,2,3,4,5};
	int *ip=arr;
	int *ip2=ip+4;
	
	int *p=arr+sz;
	int *p2=arr+10;//error ������Χ 
	
	auto n=end(arr)-begin(arr);
	
	int *b=arr, *e=arr+sz;
	while (b<e) 
		++b;
		
	int i=0,sz=42;
	int *p=&i, *e=sz;//error ���ܱȽ�������ͬarray��pointer
	while (p<e)
	
	int ia[]={0,2,4,6,8};
	int last=*(ia+4);//lastָ��ia[4]
	
	last=*ia+4;
	
	int ia[]={0,2,4,6,8};
	
	int i=ia[2];
	//ʵ����������Ĵ��� 
	int *p=ia;
	i=*(p+2);
	
	int *p=&ia[2];
	int j=p[1];
	int k=p[-2];//ia[0]
	
	return 0;
}

