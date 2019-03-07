// #include<iostream>
// #include<stdlib.h>
// #include<math.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
// 	unsigned long long int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		unsigned long long int n;
// 		cin>>n;
// 		cout<<floor(n*(n+2)*((2*n)+1)/8)<<endl;
// 	}
// }


// above method is not accepted by spoj but gives the right answer.
// probably because of the cout statement it is not accepted. 
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long n;
        scanf("%llu",&n);
        unsigned long long ans;
        ans=(n*(n+2)*(2*n+1)/8);
        printf("%llu\n",ans);
    }
    return 0;
}
