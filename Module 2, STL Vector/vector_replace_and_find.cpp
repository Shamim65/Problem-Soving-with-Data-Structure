#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //Replace
    // vector<int>v={1,2,3,2,4,2,6,2};
    // // replace(v.begin(),v.end(),2,100);
    // replace(v.begin(),v.end()-1,2,100);

    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
vector<int>v={1,2,3,2,4,2,6,2};
auto it=find(v.begin(),v.end(),3);
if(it==v.end())cout<<"Not found";
else
cout<<"found"<<endl;
cout<<*it;
    
    return 0;
}