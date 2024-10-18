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
#define pii pair<int, int>

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

        vector<int> a(n);
        mapii mp;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            mp[temp]++;
        }
        int ans = 0;
        // for (auto i : mp)
        // {
        //     if (mp[i.x + 1] != 0)
        //     {
        //         ans++;
        //     }
        //     else
        //     {
        //         if (i.x - mp[i.x + 1] > 0)
        //             ans += i.x - mp[i.x + 1];
        //     }
        //     cout << i.x << ' ' << i.y << '\n';
        // }
        for (auto i : mp)
        {
            if (mp.count(i.x + 1))
            {
                ans += max(0ll, mp[i.x] - mp[i.x + 1]);
            }
            else
            {
                ans += mp[i.x];
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}