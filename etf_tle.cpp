#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm>

using namespace std;

set<int> factors(int a)
{
    // int n = sqrt(a);
    set<int> list;
    for(int i = 1; i<=a; i++)
    {
        if(a%i == 0)
        {
            list.insert(i);
            // cout<<i<<" ";
        }
    }
    // cout<<endl;
    return list;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        int count = 0;
        for(int i = 1; i<=n; i++)
        {
            set<int> result = factors(i);
            set<int> result1 = factors(n);
            vector<int> v(10);
            vector<int>::iterator it, ls;
            ls = set_intersection(result.begin(), result.end(), result1.begin(), result1.end(), v.begin());
            if(ls-v.begin() == 1)
                count++;
            // cout<<ls-v.begin()<<endl;
            // for(it = v.begin(); it != ls; it++)
            // {
            //     cout<<*it<<endl;
            // }
        }
        cout<<count<<endl;
    }
}