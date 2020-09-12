// SPOJ

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int x,y;
		cin>>x;
		cin>>y;
		if(x==y)
		{
			if(x%2 == 0)
			{
				cout<<x+y<<"\n";
			}
			else
			{
				cout<<x+y-1<<"\n";
			}
		}
		else if(x-y == 2)
		{
			if((x%2 == 0) && ((y%2 == 0) || (y == 0)))
			{
				cout<<x+y<<"\n";
			}
			else
			{
				cout<<x+y-1<<"\n";
			}
		}
		else
		{
			cout<<"No Number\n";
		}
		n--;
	}
}
