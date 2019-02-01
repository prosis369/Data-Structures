// Sum of squares till n = number of squares in gride.

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int sum = 0;
		while(n)
		{
			sum+=(n*n);
			n--;
		}
		cout<<sum<<endl;
		cin>>n;
	}
}