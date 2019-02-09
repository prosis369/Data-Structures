#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	char a[201];
	cin>>a;
	int x = 0;
	int y = 0;
	for(int i = 0;a[i] != '\0';i++)
	{
		if(a[i] == 'L')
		{
			x--;
		}
		else if(a[i] == 'R')
		{
			x++;
		}
		else if(a[i] == 'D')
		{
			y--;
		}
		else
		{
			y++;
		}
	}
	cout<<x<<" "<<y<<endl;
}