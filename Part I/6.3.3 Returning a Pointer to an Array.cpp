#include <iostream>
using namespace std;

typedef int arrT[10];
using arrT = int[10]; // same as the perivous line
arrT* func(inti); // func returns a pointer to an array of five ints

int arr[10];
int *p1[10]; // p1 is an array of ten pointers
int (*p2)[10] = &arr; // p2 points to an array of ten ints

// define func
int (*func(int))[10];
// call func to return a pointer pointing to an array of ten ints
// func(int) ~ p2

auto func(int i) -> int(*)[10]; // return a pointer to an array of ten ints

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
decltype(odd) *arrPtr(int i)
{
    return (1 % 2) ? &odd : &even;
}
