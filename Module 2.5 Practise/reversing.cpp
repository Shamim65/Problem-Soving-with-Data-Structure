#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    vector<int>reverse;
    for(int i=n-1;i>=0;i--)
    {
        reverse.push_back(A[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<reverse[i]<<" ";
    }
    return 0;
}