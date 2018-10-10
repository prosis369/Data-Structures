#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m = sqrt(n);
		int i = m;
		while(i>=1)
		{
			if(n % i == 0)
			{
				cout<<n/i - i<<endl; // Important
				break;
			}
			i--;
		}
	}
}