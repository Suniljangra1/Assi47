// question 7 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> v{{1,4},{2,3},{3,6},{4,9},{5,88}};
    pair<int,int> p{3,6};
    vector<pair<int,int>>::iterator it;
    it = lower_bound(v.begin(),v.end(),p);
    it--;
    cout<<"lower bound key is "<<it->first;
    cout<<"\nlower bound valu is "<<it->second;
}