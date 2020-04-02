#include <iostream>
#include<string>
#include <stdio.h>
#include <ctype.h>

using namespace std;
void accum(string s)
{
    int len = s.length();
    for(int i = 0; i<len; i++)
    {
        putchar(toupper(s[i]));
        for(int j = 0; j<i; j++)
        {
            putchar(tolower(s[i]));
        }
        if(i+1 != len)
            cout<<"-";
    }
}

int main()
{
    accum("cwAt");
    return 0;
}
