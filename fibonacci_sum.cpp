// Works but time limit exceeded.

#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

long long int* mult1(long long int* a,long long int* v)
{
	long long int* arr = new long long int[2];
	arr[0] = a[0]*v[0] + a[1]*v[1];
	arr[1] = a[2]*v[0] + a[3]*v[1];
	return arr;
}
long long int* mult2(long long int* a, long long int*v)
{
	long long int* arr = new long long int[4];
	arr[0] = a[0]*v[0] + a[1]*v[2];
	arr[1] = a[0]*v[1] + a[1]*v[3];
	arr[2] = a[2]*v[0] + a[3]*v[2];
	arr[3] = a[2]*v[1] + a[3]*v[3];
    return arr;
}
long long int* matrix_power(long long int* a,int x)
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
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int sum = 0;
		long long int A[4] = {1,1,1,0};
		long long int v[2] = {1,0};
		for(long long int i = a;i<b+1;i++)
		{
			//cout<<mult1(matrix_power(A,i-1),v)[0]<<endl;
			if(i>1)
			{
				sum = sum + (mult1(matrix_power(A,i-1),v)[0])%1000000007;
			}
			else if(i ==0)
			{
				sum = sum +0;
			}
			else
			{
				sum = sum +1;
			}
		}
		cout<<sum<<endl;
	}
}



