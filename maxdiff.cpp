#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<numeric>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		//cout<<"enter the number of items:"<<endl;
		cin>>n;
		//cout<<"the group: "<<endl;
		cin>>k;
		int a[n];
		for(int i = 0; i<n ; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int sum1 = 0;
		int sum2 = 0;
		int sum3 = 0;
		int sum4 = 0;
		int res1 = accumulate(a,a+k,sum1);
		int res2 = accumulate(a+k,a+n,sum2);
		int res3 = accumulate(a,a+(n-k),sum3);
		int res4 = accumulate(a+(n-k),a+n,sum4);
		if((res2 - res1)>(res4 - res3))
		{
			cout<<(res2 - res1)<<endl;
		}
		else
		{
			cout<<(res4 - res3)<<endl;
		}
	}
}