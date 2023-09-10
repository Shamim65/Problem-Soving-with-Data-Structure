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

    int half = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || j == N - 1 - i) {
                cout << "X";
            } else if (i < j && i + j < N - 1) {
                cout << " ";
            } else if (i > j && i + j > N - 1) {
                cout << " ";
            } else {
                cout << "\\";
            }
        }
        cout << endl;
    }

    return 0;
}
