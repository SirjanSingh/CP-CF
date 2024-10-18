#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
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
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];

        }
        int sum = 0;
        int ans = 0;
        int st = 0;
        f(i, 0, n)
        {
            sum += a[i];
            while (sum > r && st <= i)
            {
                sum  = sum - a[st];
                st++;
            }
            if (sum >= l && sum <= r)
            {
                st = i + 1;
                sum = 0;
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
