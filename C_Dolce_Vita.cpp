#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        sort(all(a));
        vector<int> s(n + 10, 0);
        f(i, 0, n)
        {
            s[i + 1] = a[i] + s[i];
        }
        int days = 0;
        int ans = 0;
        fr(i, n, 0)
        {
            if (s[i] + i * days <= k)
            {
                int diff = k - (s[i] + i * days);
                int times = 1 + diff / i;
                days += times;
                ans += times * i;
            }
            // cout << days << ' ';
        }
        // nl;
        cout << ans << '\n';
    }
    return 0;
}