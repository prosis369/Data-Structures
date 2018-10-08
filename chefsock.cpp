#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long int jc,sc,m;
	cin>>jc;
	cin>>sc;
	cin>>m;
	long int money_left = m-jc;
	if(money_left >= sc)
	{
		long int l = money_left / sc; // Important
		if(l % 2 == 0)
		{
			cout<<"Lucky Chef"<<endl;
		}
		else
		{
			cout<<"Unlucky Chef"<<endl;
		}
	}
	else
	{
		cout<<"Unlucky Chef";
	}
}