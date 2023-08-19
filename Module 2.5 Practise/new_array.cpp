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
    vector<int>B(n);
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    vector<int>ans(B);
    ans.insert(ans.end(),A.begin(),A.end());
    
    for(int i=0;i<2*n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}