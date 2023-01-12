// question 6
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<pair<int,int>> 
    p{{1,2},{2,5},{3,8},{4,9}};
    pair<int,int>r = {2,5};
    vector<pair<int,int>>::iterator up;
     up = upper_bound(p.begin(),p.end(),r);
    cout<<"uper bound key is "<<up->first<<"\nuper bound value is "<<up->second;
}