#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count = 0;
	for(int i = 1;i<=sqrt(n);i++)
	{
		for(int j =i;i*j<=n;j++)
		{
			count++;
		}
	}
	cout<<count<<endl;
}