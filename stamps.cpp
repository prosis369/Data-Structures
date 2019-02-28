//sort the array in descending order, then check if it adds upto sum.

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count = 1;
	while(n--)
	{
		int st,fr;
		cin>>st>>fr;
		int a[fr];
		for(int i = 0 ;i<fr;i++)
		{
			cin>>a[i];
		}
		sort(a,a+fr,greater<int>()); // greater<int>() : for descending order
		int sum = 0;
		for(int i = 0 ; i<fr;i++)
		{
			sum+=a[i];
			if(sum>=st)
			{
				cout<<"Scenario #"<<count<<":"<<endl;
				cout<<i+1;
				break;
			}
		}
		if(sum<st)
		{
			cout<<"Scenario #"<<count<<":"<<endl;
			cout<<"impossible";
		}
		cout<<endl<<endl;
		count++;

	}
}