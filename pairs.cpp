#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		float a[n];
		for(int i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		//int i = 0;
		//int j = 1;
		int count = 0;
		sort(a,a+n);
		for(int i = 0;i<n;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				float c = (a[i]+a[j])/2;
				float *p = find(a+i,a+j,c);
				if(p != a+j)
				{
					//cout<<i<<" "<<j<<endl;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}