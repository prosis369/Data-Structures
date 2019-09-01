// strings have different characters. Does not work for repeating characters in strings.

#include<bits/stdc++.h>
using namespace std;

// bool isinterleaving(char s1[], char s2[], char s3[], int len_s1, int len_s2, int len_s3)
bool isinterleaving(string s1, string s2, string s3, int len_s1, int len_s2, int len_s3)

{
    int j = 0;
    int k = 0;
    int i = 0;
    for(i = 0; i<len_s3; i++)
    {
        if(s3[i] == s1[j])
            j++;
        else if(s3[i] == s2[k])
            k++;
        else
            return false;
    }
    if(i == len_s3)
        return true;
}

int main()
{
    // char s1[100], s2[100], s3[100];
    string s1,s2,s3;
    cout<<"Enter string A and string B: ";
    cin>>s1>>s2;
    cout<<"Enter string C: ";
    cin>>s3;

    // bool result = isinterleaving(s1, s2, s3, strlen(s1), strlen(s2), strlen(s3));
    bool result = isinterleaving(s1, s2, s3, s1.length(), s2.length(), s3.length());

    if(result)
        cout<<"TRUE"; 
    else
        cout<<"FALSE";


}