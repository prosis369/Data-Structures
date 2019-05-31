// A^(x-1)* v = [f(x),f(x-1)]. Fibonacci numbers.

#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int* mult1(int* a,int* v)
{
	int* arr = new int[2];
	arr[0] = a[0]*v[0] + a[1]*v[1];
	arr[1] = a[2]*v[0] + a[3]*v[1];
	return arr;
}
int* mult2(int* a, int*v)
{
	int* arr = new int[4];
	arr[0] = a[0]*v[0] + a[1]*v[2];
	arr[1] = a[0]*v[1] + a[1]*v[3];
	arr[2] = a[2]*v[0] + a[3]*v[2];
	arr[3] = a[2]*v[1] + a[3]*v[3];
    return arr;
}
int* matrix_power(int* a,int x)
{
	if(x == 1)
	{
		return a;
	}
	else if(x%2 == 0)
	{
		return(matrix_power(mult2(a,a),floor(x/2)));
	}
	else
	{
		return(mult2(a,matrix_power(mult2(a,a),floor(x/2))));
	}
}
int main()
{
	int x;
	cout<<"Number: ";
	cin>>x;	
	int A[4] = {1,1,1,0};
	int v[2] = {1,0};
	int* B = matrix_power(A,x-1);
	int ans = mult1(matrix_power(A,x-1),v)[0];
	cout<<ans<<endl;


}