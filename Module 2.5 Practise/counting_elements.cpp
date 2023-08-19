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
    int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j] && j==i+1)
            {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}