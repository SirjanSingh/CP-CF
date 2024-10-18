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
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int>mp(m,0);
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            a[i] = a[i] % m;
            mp[a[i]]++;
        }
        // for (auto i : mp)
        //     cout << i.x << ' ' << i.y << '\n';
        int ans = 0;
        if (mp[0] != 0)
            ans++;
        if (m % 2 == 0 && mp[m / 2] != 0)
            ans++;
        f(i, 1, (m + 1) / 2)
        {
            // if (mp[i] == 0)
            //     continue;
            if (mp[i] != 0 && mp[m - i] != 0)
            {
                if (mp[i] == mp[m - i])
                    ans++;
                else
                {
                    ans += abs(mp[i] - mp[m - i]);
                }
            }
            // else if (i == m - i)
            // {
            //     if (mp[i] != 0)
            //         ans++;
            // }
            else if (mp[i] != 0 || mp[m - i] != 0)
            {
                ans += max(mp[i], mp[m - i]);
            }
            // cout << i << ' ' << mp[i] << ' ' << mp[m - i] << ' ' << ans << '\n';
        }
        cout << ans;
        nl;
    }
    return 0;
}