#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k;
		cin>>n;
		cin>>k;
		double a[n];
		for(long int i = 0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long int j = 0;
		double sum = 0.000000;
		double count = 0.000000;
		while(j < n)
		{
			if(j>=k && j<(n-k))
			{
				sum = sum + a[j];
				count++;
			}
			j++;
		}
		double avg = sum/count;
		printf("%.6f\n", avg);
	}
}