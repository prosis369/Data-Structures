#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 1; i<=n;i++)
	{
		cin>>a[i];
	}
	long long sum1 = 0;
	long long sum2 = 0;
	long long sum3 = 0;
	for(int i =1; i<=n; i+=3)
	{
		sum1+=a[i];
	}
	for(int i =2; i<=n; i+=3)
	{
		sum2+=a[i];
	}
	for(int i =3; i<=n; i+=3)
	{
		sum3+=a[i];
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
}