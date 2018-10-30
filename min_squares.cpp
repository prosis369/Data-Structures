#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
bool square(double x) 
{   

  double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 
/*int count(int n)
{
	//cout<<3;
	//if(n == 1|| n==2 || n==3)
		//return n;
	//else
	if(n<=3)
		return n;
	int t = n;
	for(int i = 1;i<=n;i++)
	{
		int sq = i*i;
		if(sq>n)
		{
			break;
		}
		else
		{
			t = min(t,1+count(n-sq));
		}
	}
	return t;
	//return 0;
}*/
// Returns count of minimum squares that sum to n 
int count(int n) 
{ 
    int *a = new int[n+1];  
    a[0] = 0; 
    a[1] = 1; 
    a[2] = 2; 
    a[3] = 3;  
    for (int i = 4; i <= n; i++) 
    { 
        a[i] = i; 
        for (int x = 1; x <= i; x++) { 
            int sq = x*x; 
            if (sq > i) 
                break; 
            else a[i] = min(a[i], 1+a[i-sq]); 
        } 
    } 
    int res = a[n]; 
    //delete [] a; 
  
    return res; 
} 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//cout<<"123"<<endl;
		int n;
		//cout<<"sdd"<<endl;
		cin>>n;
		//cout<<"hi"<<endl;
		if(square(n))
			cout<<1<<endl;
		else
		{
			int c = count(n);
			cout<<c<<endl;
		}
	}
}

/*//#include<bits/stdc++.h> 
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std; 
  
// Returns count of minimum squares that sum to n 
int getMinSquares(unsigned int n) 
{ 
    // base cases 
    if (n <= 3) 
        return n; 
  
    // getMinSquares rest of the table using recursive 
    // formula 
    int res = n; // Maximum squares required is n (1*1 + 1*1 + ..) 
  
    // Go through all smaller numbers 
    // to recursively find minimum 
    for (int x = 1; x <= n; x++) 
    { 
        int temp = x*x; 
        if (temp > n) 
            break; 
        else
            res =  min(res, 1+getMinSquares(n - temp)); 
    } 
    return res; 
} 
  
// Driver program 
int main() 
{ 
    cout << getMinSquares(6); 
    return 0; 
} */