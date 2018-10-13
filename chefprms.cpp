#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int cSemiprime(int num) 
{ 
    int cnt = 0; 
    for (int i = 2; cnt < 2 && i * i <= num; ++i) 
        while (num % i == 0) 
            num /= i, ++cnt;
    if (num > 1) 
        ++cnt; 
    return cnt == 2; 
} 
int issemiprime(int n) 
{ 
    if (cSemiprime(n)) 
        return 1;
    else
        return 0;
} 
bool hasArrayTwoCandidates(vector <int> A, int arr_size, int sum) 
{ 
    int l, r; 
    //sort(A.begin(), A.end()); 
    l = 0; 
    r = arr_size - 1;  
    while (l <= r) 
    { 
        if(A[l] + A[r] == sum) 
            return 1;  
        else if(A[l] + A[r] < sum) 
            l++; 
        else
            r--; 
    }  
    return 0; 
} 
bool prime(int n) 
{  
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
bool PerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a;
        for( int x = 2; x < n; x++ )
        {
	       if(issemiprime(x) && !PerfectSquare(x))
           {
	           a.push_back(x);
           }
        }
        int s = a.size();
        /*for(int i = 0; i<s; i++)
        {
            cout<<a[i]<<" ";
        }*/
        if(hasArrayTwoCandidates(a, s, n)) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}