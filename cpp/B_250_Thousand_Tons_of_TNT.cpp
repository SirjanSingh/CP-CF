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
        int n;
        cin >> n;

        vector<int> a(n + 1, 0);
        mapii mp;
        f(i, 1, n + 1)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        int ans = 0;
        f(k, 1, (n + 1))
        {
            if (n % k == 0)
            {
                // ans = 0;
                int mn = 1e18, mx = -1e18;
                for (int i = k; i < n + 1; i += k)
                {
                    int cur = a[i] - a[i - k];
                    mn = min(mn, cur);
                    mx = max(mx, cur);
                    // i+=k-1;
                }
                ans = max(ans, mx - mn);
            }
        }
        cout << ans << '\n';
        // vector<int>b;
        // for(auto i : mp) b.push_back(i.x);
        // cout << b[b.size()-1] - b[0] << '\n';
    }
    return 0;
}