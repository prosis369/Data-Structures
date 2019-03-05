#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	string str;
	while(cin>>str != EOF)
	{
		int n = stoi(str);
		if(n==0)
		{
			cout<<"0"<<endl;
		}
		else if (n==1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			int ans = 2*n -2;
			cout<<ans<<endl;
		}
		
	}
}