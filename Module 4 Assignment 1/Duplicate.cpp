#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 10;

int main()
{
    ll n, x;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}