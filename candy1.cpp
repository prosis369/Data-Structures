//important case: when all bags have equal number of candies.

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n != -1)
	{
		int a[n];
		int sum = 0;
		for(int i =0;i<n;i++)
		{
			cin>>a[i];
			/*if(a[i]<0)
			{
				exit(1);
			}*/
			sum+=a[i];
		}
		int count = 0;
		if(sum % n == 0)
		{
			int mean = sum/n;
			for(int i =0;i<n;i++)
			{
				while(a[i]<mean)
				{
					count++;
					a[i]++;
				}
			}
		}
		else
		{
			count = -1;
		}
		cout<<count<<endl;
		cin>>n;
	}
}