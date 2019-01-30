#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		char s[200];
		cin>>s;
		int len = strlen(s);
		char *a = s;
		int i = 0;
		int k = 1;
		//int n1 = 0;
		while(i != n)
		{
			int j = i;
			int step = 2;
			while(j<len)
			{
				if(step % 2 == 0)
				{
					cout<<a[j];
					j = j + ((2*n)-k);
					step++;
				}
				else
				{
					cout<<a[j];
					j = j + k;
					step++;
				}
			}
			i++;
			k+=2;
		}
		cout<<endl;
		cin>>n;
	}
}