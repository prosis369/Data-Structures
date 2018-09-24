#include <iostream>
#include <stack>
#include <queue>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n != 0)
	{
		stack <int> s;
		queue <int> q;
		int a;
		for(int i = 0 ; i<n ; i++)
		{
			cin>>a;
			q.push(a);
		}
		int c = 1;
		while(!s.empty() || !q.empty())
		{
			if(!q.empty() && q.front() == c)
			{
				q.pop();
				c++;
			}
			else 
			{
				if(!s.empty() && s.top() == c)
				{
					s.pop();
					c++;
				}
				else 
				{
					if(!q.empty())
					{
						int x = q.front();
						s.push(x);
						q.pop();
					}
					else
						break;
				}
			}
		}
		if(c == n+1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		cin>>n;
	}
	return 0;
}


