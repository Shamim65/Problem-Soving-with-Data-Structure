#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
     {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // Sort the array for efficient searching

    int count = 0;
    for (int i = 0; i < n; ++i) 
    {
        if (binary_search(a.begin(), a.end(), a[i] + 1)) {
            count++;
        }
    }

    cout << count <<endl;

    return 0;
}
