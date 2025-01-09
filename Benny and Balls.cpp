#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q; // Number of test cases
    cin >> Q;

    while (Q--) {
        // Input for each test case
        int N; // Number of baskets
        cin >> N;

        vector<int> p(N); // Threshold for each basket
        for (int i = 0; i < N; i++) {
            cin >> p[i];
        }

        int x1, a, b, t;
        cin >> x1 >> a >> b >> t;

        vector<int> count(N, 0); // Ball count in each basket
        int open_count = 0; // Number of times the bottom opens

        int current_index = x1;

        for (int i = 1; i <= t; i++) {
            count[current_index]++;
            if (count[current_index] >= p[current_index]) {
                count[current_index] = 0; // Reset basket
                open_count++; // Increment the bottom open count
            }
            // Update current index using the formula
            current_index = (1LL * a * current_index + b) % N;
        }

        // Output the result for this test case
        cout << open_count << endl;
    }

    return 0;
}
