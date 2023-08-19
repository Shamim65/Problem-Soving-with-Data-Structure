#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v;// type 1
    //vector<int>v(5);//type 2
    //vector<int>v(5,10);//type 3
    // vector<int>v2(5,100);
    // vector<int>v(v2);//copy v2 in v  type 4
    // int a[6]={1,2,3,4,5,6};
    // vector<int> v(a,a+6);
    vector<int>v={2,4,6,5,7};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    return 0;
}