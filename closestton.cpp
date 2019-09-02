// Find the number closest to n and divisible by m

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n>0)
    {
        int q = n/m;
        int x = q*m;
        int y = (q+1)*m;
        if(abs(n-x) < abs(n-y))
            cout<<x;
        else if(abs(n-x) > abs(n-y))
            cout<<y;
        else
            cout<<n;
    }
    else
    {
        n = abs(n);
        int q = n/m;
        int x = q*m;
        int y = (q+1)*m;
        if(x != n && y!= n)
        {
            if(abs(n-x) > abs(n-y))
                cout<<-x;
            else if(abs(n-x) < abs(n-y))
                cout<<-y;
        }
        else
            cout<<-n;
    }
    
}