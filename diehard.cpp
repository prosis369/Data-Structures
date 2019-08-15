#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,a;
		cin>>h>>a;
		int f = 0;
		int ha = 3;
		int aa = 2;
		int hw = -5;
		int aw = -10;
		int hf = -20;
		int af =  5;
		int count = 0;
		while(1)
		{
			if(h<=0 || a<=0)
				break;
			if(f == 1)
				count++;
			h = h+ha;
			a = a+aa;
			count++;
			if(a>10)
			{
				h = h+hw;
				a = a+aw;
			}
			else
			{
				h = h+hf;
				a = a+af;
			}
			f = 1;
		}
		cout<<count<<endl;
	}
}


