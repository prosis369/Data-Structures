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
		int p;
		//cout<<"enter p: "<<endl;
		cin>>p;
		int count = 0;
		while(p != 0)
		{
			int i = 0;
			while(p >= pow(2,i) && pow(2,i) <= 2048)
			{
				i++;
			}
			int b= i-1;
			p = p - pow(2,b);
			count++;
		}
		cout<<count<<endl;
	}
}