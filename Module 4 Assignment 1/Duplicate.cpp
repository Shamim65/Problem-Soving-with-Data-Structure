#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>frequency(10001,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        frequency[v[i]]++;
    }
    bool Duplicate=false;
    for(int i=0;i<n;i++)
    {
        if(frequency[v[i]]>1)
        {
            Duplicate=true;
            break;
        }
    }
    if(Duplicate)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}