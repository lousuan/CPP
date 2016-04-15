#include<iostream>
#include<cstddef>
using namespace std;

int main()
{
	/*
	0	1	2	3
	4	5	6	7
	8	9	10	11	
	*/
	/*
	int ia[3][4];
	int arr[10][20][30]={0};
	
	int ia[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
	*/
	int ia[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
	/*
	int ia[3][4]={{0},{4},{8}};
	
	int ia[3][4]={0,1,2,3};
	
	ia[2][3]=arr[0][0][0];
	int (&row)[4]=ia[1];//row是一个四维array，指向ia[1]({4,5,6,7})
	
	constexpr size_t rowCnt=3, colCnt=4;
	int ia[rowCnt][colCnt];
	for (size_t i=0; i!=rowCnt; ++i)
		for(size_t j=0; j!=colCnt; ++j)
			ia[i][j]=i*colCnt+j;

	size_t cnt=0;
	for (auto &row:ia)
		for(auto &col:row)
		{
			col=cnt;
			++cnt;
		} 
	
	for (const auto &row:ia)//除了最内层for循环，外面的均需定义为row 
		for (auto col:row)
			cout << col << endl;
			
	for (auto row:ia)
		for (auto col:row)//error:row是一个int*，不是数组
		
	int ia[3][4];
	int (*p)[4]=ia;//ia[0]({0,1,2,3})
	p=&ia[2]; 
	
	//输出开头的矩阵 
	for (auto p=ia; p!=ia+3; ++p) 
	{
		for (auto q=*p; q!=*p+4; ++q)
			cout << *q << ' ';
		cout << endl;
	}
	
	for (auto p=begin(ia); p!=end(ia); ++p)
	{
		for (Auto q=begin(*p);q!=end(*p); ++q)
			cout << *q << ' ';
		cout << endl;  
	} 
	*/
	//using int_array=int[4];
	typedef int int_array[4]; 
	for (int_array *p=ia; p!=ia+3; ++p)
	{
		for (int *q=*p; q!=*p+4; ++q)
			cout << *q << ' ';
		cout << endl; 
	}
	
	return 0;
}

