#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0||n<1)
    {
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || j==n-1-i)
            {
                cout<< "X";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}