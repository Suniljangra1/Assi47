// Question 4 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> A{{1,3},{2,3},{3,1}};
    int  j[3],r;
    
    for(int  i=1;i<=3; i++)
       j[i]=(A[i].second);
    for(int  i=1;i<3; i++)
    {
        if(j[i]!=j[i+1])
        {
            r = j[i-1];
        }
    }
    cout<<r;
}
 