#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		cin>>k;	
		int count = 0;
		int a[n];
		for(int i = 0;i<n;i++)
		{
			cin>>a[i];
			a[i] = a[i] + k;
			if(a[i] % 7 == 0)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}