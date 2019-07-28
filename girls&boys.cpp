#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std; 

int main()
{
	while(true)
	{
		double g,b;
		cin>>g;
		cin>>b;
		if(g != -1 && b!= -1)
		{
			double minimum = min(g,b);
			double maximum = max(g,b);
			double res = maximum/(minimum + 1);
			int result = ceil(res);
			cout<<result<<endl;
		}
		else
			break;
	}
}