#include<stdio.h>
#include<iostream>
using namespace std;

int exp(int x, int n)
{
	if(n==1)
	{
		return x;
	}
	if(n%2 == 0)
	{
		return (exp(x*x,n/2));
	}
	return(x*exp(x*x,n/2));
}

int main()
{
	int x;
	cout<<"Enter the base: ";
	cin>>x;
	int n;
	cout<<"Enter the exponent: ";
	cin>>n;
	int ans = exp(x,n);
	cout<<ans<<endl;
}