// question 3
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<pair<int,int>> d{
        {1,10},{2,20},{3,30},{4,40}
    };
    for(int i=0;i <d.size(); i++)
    cout<<d[i].first<<" "<<d[i].second<<"\n";
}