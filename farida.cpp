// SPOJ
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std; 

long long int hval(long long int *a, long long int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return a[0];
	if(n == 2)
		return max(a[0],a[1]);

	long long int dp[n];
	dp[0] = a[0];
	dp[1] = max(a[0], a[1]);

	for(long long int i = 2; i<n; i++)
	{
		dp[i] = max(a[i] + dp[i-2], dp[i-1]);
	}
	return dp[n-1];
}

int main()
{
	long long int t;
	long long int count = 0;
	cin>>t;
	while(t--)
	{
		count++;
		long long int n;
		cin>>n;
		long long int a[n];
		for(long long int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		long long int result = hval(a,n);
		cout<<"Case "<<count<<": "<<result<<"\n";
	}

}
