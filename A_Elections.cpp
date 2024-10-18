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

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(m);

    f(i, 0, m)
    {
        pair<int, int> mx = {INT_MIN, 0};
        f(i, 0, n)
        {
            pair<int, int> tm;
            cin >> tm.x;
            tm.y = i + 1;
            if (mx.x < tm.x)
                mx = tm;
        }

        a[i] = mx;
    }
    sort(all(a), greater<pair<int, int>>());
    mapii mp;
    int target = 0;
    for (auto i : a)
    {
        mp[i.y]++;
    }
    int ans = INT_MIN;
    for (auto i : mp)
    {
        // cout << i.x << ' ' << i.y << '\n';
        if (i.y > target)
        {
            target = i.y;
            ans = i.x;
        }
        // break;
    }
    cout << ans << '\n';
    nl;

    return 0;
}