#include <bits/stdc++.h>
using namespace std;

int w[100010]; // Array to store the elements after modulo operation

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int c = __gcd(a, b); // Compute the gcd of a and b

    for (int i = 1; i <= n; i++) {
        cin >> w[i];
        w[i] %= c; // Modulo operation with gcd to limit the range of possible values
    }

    sort(w + 1, w + n + 1); // Sort the array to facilitate minimum range calculation

    int ans = w[n] - w[1]; // Initially, consider the range between the maximum and minimum values

    // Check if a smaller range can be found by adjusting elements considering the wrap-around
    for (int i = 1; i < n; i++) {
        ans = min(ans, w[i] + c - w[i + 1]); // Considering potential minimal wrap-around differences
    }

    cout << ans << '\n'; // Output the minimum possible range
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        solve(); // Solve each test case
    }
    return 0;
}
