// question 2 
#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main()
{
    vector<pair<int,int>> vect;
    int arr[]={1,2,8,6};
    int ar1[]={10,20,30,40};
    int n= sizeof(arr)-1;
    for(int i=0; i<n; i++)
    {
       vect.push_back(make_pair(arr[i],ar1[i]));
    }
    sort(vect.begin(), vect.end());
   
    for(int i=0; i<vect.size(); i++)  // all about is good but printing problem facing 
    {
        cout<<vect[i].first<<" ";
        cout<<vect[i].second<<"\n";
    }
    cout<<"\nsize is "<<vect.size();
}