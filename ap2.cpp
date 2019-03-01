#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long th,th_l,sum;
		cin>>th>>th_l>>sum;
		long long n = (2*sum)/(th+th_l);
		long long d = (th_l - th)/(n-5);
		long long a = th - (2*d);
		cout<<n<<endl;
		long long count = 0;
		while(count != n)
		{
			cout<<a+(count*d)<<" ";
			count++;
		}

	}
}
