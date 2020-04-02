#include<bits/stdc++.h>

using namespace std;

float area(int x1, int x2, int x3, int y1, int y2, int y3)
{
    return((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1-y2))/2.0);
}

int main()
{
    int x1, x2, x3;
    int y1, y2, y3;
    int p1, p2;

    cout<<"Enter the coordinates: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<"Enter the Point: ";
    cin>>p1>>p2;

    float total_area = area(x1,x2,x3,y1,y2,y3);
    float area1 = area(x1,x2,p1,y1,y2,p2);
    float area2 = area(x1,p1,x3,y1,p2,y3);
    float area3 = area(p1,x2,x3,p2,y2,y3);

    if(area1 + area2 + area3 == total_area)
        cout<<"YES";
    else
        cout<<"NO";
        
}