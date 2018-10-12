#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
	string m;
	cin>>m;
	// cout<<m<<endl;
	int i = 0;
	int ans = 0;
	char ch,tt;
	int c;
	stack <int> s;
	while(m[i] != '\0')
	{
		ch = m[i];
		switch(ch)
		{
			case 'C': s.push(12);break;
			case 'H': s.push(1);break;
			case 'O': s.push(16);break;
			case '(': s.push((int)ch);break;
			case ')': 	c = s.top();
						s.pop();
						ans = ans + c;
						tt = '(';
						while(s.top() != ((int)tt))
						{
							c = s.top();
							s.pop();
							ans+= (int)c;
						}
						s.pop();
						s.push(ans);
						ans = 0;
						break;
			case '2':if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*2;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(2*c);
					}
					break;
			case '3': if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*3;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(3*c);
					}
					break;
			case '4': if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*4;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(4*c);
					}
					break;
			case '5': if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*5;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(5*c);
					}
					break;
			case '6': if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*6;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(6*c);
					}
					break;
			case '7': if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*7;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(7*c);
					}
					break;
			case '8': if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*8;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(8*c);
					}
					break;
			case '9': if(s.top() != 1 && s.top() != 12 && s.top() != 16)
					{
						c = s.top();
						s.pop();
						ans = c*9;
						s.push(ans);
						ans = 0;
					}
					else
					{
						c = s.top();
						s.pop();
						s.push(9*c);
					}
					break;
			default : break;
		}
		i++;
	}
	if(s.size() == 1)
		cout<<s.top()<<endl;
	else
	{
		while(s.empty() != 1)
		{
			ans = ans + s.top();
			s.pop();
		}
		cout<<ans<<endl;
	}
}