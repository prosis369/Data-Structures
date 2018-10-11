#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,q,val,j;
		cin>>k;
		cin>>q;
		long int a[k];
		long int b[k];
		for(int i = 0; i<k; i++)
		{
			cin>>a[i];
		}
		for(int i = 0; i<k; i++)
		{
			cin>>b[i];
		}
		int k_k = k*k;
		sort(a,a+k);
		sort(b,b+k);
		// long int c[k_k];
		// int count = 0;
		vector<long int> v; // Important
		for(int i = 0; i<k; i++)
		{
			j = 10001/(i+1); // Important
			val = min(j,k);
			for(int j = 0; j<val; j++)
			{
				// c[count + j] = a[i] + b[j];
				v.push_back(a[i] + b[j]);
			}
			// count = count + k;
		}
		// sort(c,c+k_k);
		sort(v.begin(),v.end());
		while(q--)
		{
			int qq;
			cin>>qq;
			cout<<v[qq-1]<<endl;
		}
	}
}