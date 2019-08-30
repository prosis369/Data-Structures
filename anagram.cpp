#include<bits/stdc++.h>

using namespace std;

bool anagram(string a, string b)
{
    int len_a = a.length();
    int len_b = b.length();
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    char chars[] = " ";

    for (int i = 0; i < strlen(chars); ++i)
    {
        a.erase(remove(a.begin(), a.end(), chars[i]), a.end());
    }
    

    for (int i = 0; i < strlen(chars); ++i)
    {
        b.erase(remove(b.begin(), b.end(), chars[i]), b.end());
    }
    
    // cout<<a<<endl;
    // cout<<b<<endl;


    if(a == b)
        return true;
    else
        return false;
}

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);

    if(anagram(a,b))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}