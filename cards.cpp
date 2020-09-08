// SPOJ

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int ans1 = n*(n+1);
		long long int ans2 = n*(n-1)/2;
		long long int ans = (ans1+ans2) % 1000007;
		cout<<ans<<endl;
	}
}
