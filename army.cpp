#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		int ng,nm;
		cin>>ng>>nm;
		int g[ng],m[nm];
		for(int i = 0;i<ng;i++)
		{
			cin>>g[i];
		}
		for(int i = 0;i<nm;i++)
		{
			cin>>m[i];
		}
		int* g_max = max_element(g,g+ng);
		int* m_max = max_element(m,m+nm);
		if(*(g_max) == *(m_max))
		{
			cout<<"Godzilla"<<endl;
		}
		else
		{
			if(*(g_max)>*(m_max))
			{
				cout<<"Godzilla"<<endl;
			}
			else
			{
				cout<<"MechaGodzilla"<<endl;
			}
		}
	}
}