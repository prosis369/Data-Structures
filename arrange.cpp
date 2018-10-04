#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long int a[n];
		for(long int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int c = count(a,a+n,1);
		if(c != 0 )
		{
			for(int i = 0; i<c; i++)
			{
				cout<<1<<" ";
			}
		}
		if((n-c) == 2 && a[c] == 2 && a[c+1] == 3)
		{
			cout<<2<<" "<<3;
		}
		else
		{
			for(long int i = n-1; i>=c; i--)
			{
					cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}