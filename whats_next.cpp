#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	while(x!=0 || y!=0 || z!=0)
	{
		if((y-x)==(z-y))
		{
			cout<<"AP "<<(z-y)+z<<"\n";
		}
		else
		{
			cout<<"GP "<<(z/y)*z<<"\n";
		}
		cin>>x>>y>>z;
	}
}