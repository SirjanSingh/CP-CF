#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d, k;
        cin >> n >> d >> k;
        vector<pair<int, int>> jobs(k);
        for (auto &job : jobs)
        {
            cin >> job.first >> job.second;
        }

        // Initialize difference array
        // The starting positions range from 1 to (n - d +1)
        // To handle multiple test cases efficiently, use a map if n is large
        // But assuming n <= 1e7, use a vector
        // Adjust according to problem constraints

        // Check n-d+1 is non-negative
        if (n < d)
        {
            // No valid interval, all counts are 0
            cout << "1 1\n";
            continue;
        }

        int max_i = n - d + 1;
        // To prevent excessive memory usage, limit max_i
        // Assuming max_i <= 1e7, adjust as needed
        // If max_i is too large (e.g., 1e9), use event-based processing

        // Here, we'll assume max_i <= 1e7
        // If not, we need to switch to a different approach
        // For safety, use a vector of int with size up to 1e7
        // If constraints are higher, reconsider

        // For now, proceed with vector
        // Initialize difference array with 0
        // To save memory, use a vector of int initialized to 0
        // If max_i is up to 1e7, it's acceptable

        // If max_i is too large, switch to event-based sweep
        vector<int> diff(max_i + 2, 0);
        for (auto &job : jobs)
        {
            int s = job.first;
            int e = job.second;
            // Calculate L and R for starting positions i
            int L = max(1LL, s - d + 1);
            int R = min(e, max_i);
            if (L > R)
                continue;
            diff[L] += 1;
            diff[R + 1] -= 1;
        }
        // Now compute prefix sums and find max and min
        int current = 0;
        int max_overlap = -1;
        int min_overlap = k + 1;
        int best_brother = 1, best_mother = 1;
        for (int i = 1; i <= max_i; i++)
        {
            current += diff[i];
            if (current > max_overlap)
            {
                max_overlap = current;
                best_brother = i;
            }
            if (current < min_overlap)
            {
                min_overlap = current;
                best_mother = i;
            }
        }
        cout << best_brother << " " << best_mother << "\n";
    }
    return 0;
}
