#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,d;
	int count = 0;
	cin>>n;
	cin>>d;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	/*for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}*/
	for(int i = 0;i<n-1;)
	{
		if((a[i+1]-a[i]) <= d)
		{
			i = i+2;
			count++;
		}
		else
		{
			i++;
		}
	}
	cout<<count;

}