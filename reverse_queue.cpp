#include<bits/stdc++.h>

void reverse(queue<int>q)
{
    queue<int>q1;
    int size = q1.size();
    for(int i = 0; i<q1.size(); i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
    int size1 = size;
    while(size1)
    {
        q1.push(q.pop());
        cout<<q1.front()<<" ";
        size1--;
    }
}

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverse(q);
}