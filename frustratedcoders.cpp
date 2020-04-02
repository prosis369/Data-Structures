// tle

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int s[n];
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        s[i] = 1;
        sum+=a[i];
    }
    sort(a,a+n);
    for(int i = 1; i<n; i++)
    {
        // for(int j = 0; j<i; j++)
        int flag = 1;
        int j = 0;
        while(flag && j<i)
        {
            if(a[j] != -1 && a[j] < a[i] && s[i] == 1)
            {
                s[i] = 0;
                a[j] = -1;
                flag = 0; 
                sum-= a[j];
                break;
            }
            j++;
        }
    }
    cout<<sum<<endl;
}
