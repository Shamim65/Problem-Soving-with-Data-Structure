#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//-1
    cin>>n;//->1
    int a[n];//->1
    for(int i=0;i<n;i++)//->O(n)
    {
        cin>>a[i];
    }
    int s=0;
    for(int i=0;i<n;i+=2)//->O(n)
    {
        //if(i%2==0)//->n/2
        {
            s+=a[i];
        }
        
    }
    cout<<s<<endl;//->1
    return 0;
}