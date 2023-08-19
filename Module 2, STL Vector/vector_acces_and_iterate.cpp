#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,4,3,6,8,9,4};

    // cout<<v[v.size()-1]<<endl;
    // cout<<v.back()<<endl;//will use
    // cout<<v.front()<<endl;
    // cout<<v[0];//we will use
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}