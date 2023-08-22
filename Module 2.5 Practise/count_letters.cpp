#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    vector<int> frequency(26, 0); // Initialize a vector of size 26 for lowercase English letters

    for (char c : S) {
        frequency[c - 'a']++; // Increment the frequency of the corresponding letter
    }

    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            cout << char('a' + i) << " : " << frequency[i] << endl;
        }
    }
    return 0;
}