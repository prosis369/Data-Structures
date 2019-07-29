#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,w;
		cin>>h>>w;
		int dp[h][w+2];
		int a[h][w+2];
		for(int i = 0; i<h; i++)
		{
			for(int j = 1; j<w+1; j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i = 0; i<h; i++)
		{
			a[i][0] = 0;
			dp[i][0] = 0;
			a[i][w+1] = 0;
			dp[i][w+1] = 0;
		}
		for(int i = 1; i<w+1; i++)
		{
			dp[0][i] = a[0][i];
			// cout<<dp[0][i]<<" ";
		}
		// cout<<endl;
		for(int i =1; i<h; i++)
		{
			for(int j = 1; j<w+1; j++)
			{
				dp[i][j] = a[i][j] + max(dp[i-1][j+1],max(dp[i-1][j-1],dp[i-1][j]));
				// cout<<dp[i][j]<<" ";
			}
			// cout<<endl;
		}
		int maximum = dp[h-1][1];
		// cout<<maximum;
		for(int i = 2; i<=w; i++)
		{
			// cout<<dp[h-1][i];
			if(dp[h-1][i] > maximum)
			{
				maximum = dp[h-1][i];
			}
		}
		cout<<maximum<<endl;
	}	
	
}