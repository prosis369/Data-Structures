#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	//scanf("%d",&t);
	cin>>t;
	while(t--)
	{
		int n,k;
		//scanf("%d",&n);
		//scanf("%d",&k);
		cin>>n;
		cin>>k;
		int a[n];
		for(int i = 0;i<n;i++)
		{
			//scanf("%d",&a[i]);
			cin>>a[i];
		}
		sort(a,a+n);
		int count = k;
		int e = n-k;
		int c = 0;
		while(a[n-k-1] == a[e] && n!=k)
		{
			c++;
			k++;
			//cout<<"k:"<<k<<endl;
		}
		//printf("%d\n",count+c);
		cout<<(count+c)<<endl;
	}
	return 0;
}