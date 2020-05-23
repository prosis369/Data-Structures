// Codechef 

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l;
		cin>>l;
		//cout<<endl;
		char str[l];
		for(int i = 0; i<l; i++)
		{
			cin>>str[i];
		}
		//cout<<endl;
		int a[l];
		for(int i = 0; i<l;i++)
		{
			a[i] = str[i] - '0';
		}
		sort(a,a+l);
		int j = 0;
		while(a[j] != 1 && j<l)
		{
			j++;
		}
		if(j<l)
		{
			int c = l-j;
			int sum = 0;
			/*while(c)
			{
				sum = sum + c;
				c--;
			}
			*/
			sum = c*(c+1)/2;
			cout<<sum<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
}
