#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b%a,a);
}

int phi(int n)
{
    int result = 1;
    for(int i = 2; i<n; i++)
    {
        if(gcd(i,n) == 1)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    int t;
    cin>>t;   
    while(t--)
    {
        int n;
        cin>>n;
        int result = phi(n);
        cout<<result<<endl;
    }
    return 0;
}