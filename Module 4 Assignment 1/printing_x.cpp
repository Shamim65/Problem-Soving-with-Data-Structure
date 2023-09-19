#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Check if N is an odd positive integer
    if (N % 2 == 0 || N < 1) {
        cout << "Invalid input. N should be a positive odd integer." << endl;
        return 1;  // Exit with an error code
    }

    int spacesBefore = 0;
    int spacesBetween = N - 2;

    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= spacesBefore; j++) {
            cout << " ";
        }

        