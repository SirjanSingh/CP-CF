#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, K, H;
        cin >> N >> K >> H;

        int count = 0;

        for (int A = 1; A <= N; A++) {
            // Maximum height the frog can reach with jumping power A in K seconds
            int max_height = A * K;

            // Calculate the maximum B such that the frog can escape within K seconds
            int max_B = max(0LL, abs(H - max_height));
            max_B =  min(A,max_B);
            // Count valid pairs (A, B) where B <= N and B <= A
            if (max_B <= N && max_B <= A) {
                count += min(A , max_B );
            }
            cout << A << " " << max_B  << ' ' << count<< "\n";
        }

        cout << count << "\n";
    }

    return 0;
}
