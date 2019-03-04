// check powers of 2 using ceil, floor and log2 functions. check for cases less than or equal to 1
// don't forget to use long long int as n is a very large number.

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n>1)
	{
		if(ceil(log2(n)) == floor(log2(n)))
		{
			cout<<"TAK"<<endl;
		}
		else
		{
			cout<<"NIE"<<endl;
		}
	}
	else
	{
		cout<<"NIE"<<endl;
	}
}