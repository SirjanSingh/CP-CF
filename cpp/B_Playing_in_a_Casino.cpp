#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        f(i, 0, n)
        {
            f(j, 0, m)
                cin >> a[i][j];
        }
        
        int ans = 0;
        if (n == 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            f(j, 0, m)
            {
                vector<int> column(n);
                f(i, 0, n)
                    column[i] = a[i][j];

                sort(all(column));

                vector<int> prefixSum(n, 0);
                prefixSum[0] = column[0];
                f(i, 1, n)
                    prefixSum[i] = prefixSum[i-1] + column[i];

                f(i, 0, n)
                {
                    int leftSum = prefixSum[i] - column[i];
                    int rightSum = prefixSum[n-1] - prefixSum[i];
                    ans += column[i] * (2*i - n + 1) + rightSum - leftSum;
                }
            }
            cout << ans/2 << '\n';
        }
    }
    return 0;
}
