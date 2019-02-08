#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	int n;
	cin>>n;
	while(n--)
	{
		int w,h;
		cin>>w>>h;
		if(w<l || h<l)
		{
			cout<<"UPLOAD ANOTHER"<<endl;
		}
		if(w>=l && h>=l)
		{
			if(w == h)
			{
				cout<<"ACCEPTED"<<endl;
			}
			else
			{
				cout<<"CROP IT"<<endl;
			}
		}
	}
}