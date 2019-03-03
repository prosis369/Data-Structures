// used dp to solve. https://www.youtube.com/watch?v=We3YDTzNXEk watch this video for reference.

#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int t[2002][2002];
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		char s[2001], p[2001];
		cin>>s;
		cin>>p;
		int s_l = strlen(s);
		int p_l = strlen(p);
		memset(t,0,sizeof(t[0][0])*(s_l+1)*(p_l+1));
		for(int i = 0;i<=s_l;i++)
		{
			t[i][0] = i;
		}
		for(int j = 0;j<=p_l;j++)
		{
			t[0][j] = j;
		}
		for(int i = 1;i<=s_l;i++)
		{
			for(int j = 1;j<=p_l;j++)
			{
				if(s[i-1] == p[j-1])
				{
					t[i][j] = t[i-1][j-1];
				}
				else
				{
					t[i][j] = min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]))+1;
				}
			}
		}

		for(int i =0;i<30;i++)
        {
        	for (int j = 0; i < j; j++)
        	{
        		cout<<t[i][j];
        	}
        }
		cout<<t[s_l][p_l]<<endl;
	}
}
