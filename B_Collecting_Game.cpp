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
        int n;
        cin >> n;

        vector<pair<int, int>> a(n + 1);
        vector<int> c(n + 1, 0), sum(n + 1, 0), ind(0, 0);
        f(i, 1, n + 1)
        {
            cin >> c[i];
            a[i].x = c[i];
            a[i].y = i;
        }
        sort(all(c));
        sort(all(a));
        mapii mp;
        int sm = 0;
        f(i, 1, n + 1)
        {
            if (a[i].x > sm)
            {
                ind.push_back(i);
            }
            sm += a[i].x;
        }
        ind.push_back(n + 1);
        f(i, 1, n + 1)
        {
            int ans = upper_bound(all(ind), i) - ind.begin();
            // cout << ind[i] << ' ' << ans << ' ' <<  a[i].y << ' ' << '\n';
            mp[a[i].y] = ind[ans] - 2;
            // cout << i  << ' ' << ans << '\n';
        }
        nl;
        for (auto i : mp)
            cout << i.y << ' ';
        nl;
    }
    return 0;
}