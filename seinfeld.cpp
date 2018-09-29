#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
	char str[2000];
	cin>>str;
	int j = 1;
	while(str[0] != '-')
	{
		stack <char> s;
		char ch;
		int count = 0;
		int i = 0;
		while(str[i] != '\0')
		{
			ch = str[i];
			switch(ch)
			{
				case '{': 	s.push('{');break;
				default: 	if(s.empty() == 0)
							{
								if(s.top() == '{')
								{
									s.pop();
								}
								else
								{
									s.pop();
									//s.push('}');
									count++;
								}
							}
							else
							{
								s.push('{');
								count++;
							}
							break;

			}
			i++;
		}
		if(s.empty() == 0)
		{
			count = count + (s.size()/2);
		}
		cout<<j<<". "<<count<<endl;
		cin>>str;
		j++;
	}
}