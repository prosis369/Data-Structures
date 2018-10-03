#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sum = 0;
		int a[n],b[n];
		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i = 0; i<n; i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i = 0; i<n ; i++)
		{
			sum = sum + (a[i]*b[i]);
		}
		cout<<sum<<endl;
	}
}