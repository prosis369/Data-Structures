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
		int a[n];
		for(int i = 1; i<=n; i++)
		{
			cin>>a[i];
		}
		int flag = 0;
		for(int u = 1; u<5; u++)
		{
			for(int v = u+1; v<5; v++)
			{
				int count = 0;
				int temp = 0;
				for(int i = 1; i<=n; i++)
				{
					if(a[i] != (long long)(pow(i,v) - pow(i,u)))
					{
						count++;
						temp = a[i];
					}
				}
				if(count == 1)
				{
					cout<<"Incorrect "<<temp<<endl;
					flag = 1;
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(!flag)
		{
			cout<<"Correct"<<endl;
		}
	}
}