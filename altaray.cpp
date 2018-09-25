
#include <iostream>
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
		int a[n];
		int dp[n];

		for(int i = 0;i<n;i++)
		{
			cin>>a[i];
			dp[i] = 1;
		}

		int sign;
		if(a[n-1]>0)
			sign = 1;
		else
			sign = -1;

		for(int i = n-2;i>=0;i--)
		{
			int sign1;
			if(a[i]>0)
				sign1 = 1;
			else
				sign1 = -1;
			if(sign1 == (-1*sign))
			{
				dp[i]+=dp[i+1];
				sign = -1*sign;
				//cout<<dp[i]<<endl;
			}
		}

		for(int i = 0;i<n;i++)
		{
			cout<<dp[i]<<" ";
		}
		cout<<'\n';
	}
}
