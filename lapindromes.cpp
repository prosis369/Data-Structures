#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int flag = 0;
		int a[26];
		int b[26];
		fill_n(a,26,0);
		fill_n(b,26,0);
		int l = s.length();
		for(int i = 0;i < (l/2);i++)
		{
			a[s[i] - 'a']++; //important
			b[s[l-1-i] - 'a']++; //important
		}
		for(int i = 0; i<26; i++)
		{
			if(a[i] != b[i])
			{
				flag = 1;
				break;
			}

		}
		if(flag)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}

	}
}
