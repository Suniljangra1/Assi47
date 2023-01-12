// question 8
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int,int>> r;
    r.push(make_pair(1,10));
    r.push(make_pair(2,300));
    r.push(make_pair(4,650));
    r.push(make_pair(3,122));
    while(!r.empty())
    {
       pair<int,int>s= r.top();
       cout<<s.first<<" "<<s.second<<endl;
       r.pop();
    }
}