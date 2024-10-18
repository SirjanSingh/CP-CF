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
#define pb push_back

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, w;
        cin >> n >> m >> k;
        cin >> w;
        vector<int> a(w);
        f(i, 0, w)
        {
            cin >> a[i];
        }

        vector<int> l(max(n, k) + 1, 0), c(max(m, k) + 1, 0);

        f(i, 0, max(0LL, n - k + 1))
        {
            l[i]++;
            if (i + k <= n)
                l[i + k]--;
        }
        f(i, 0, max(0LL, m - k + 1))
        {
            c[i]++;
            if (i + k <= m)
                c[i + k]--;
        }
        for (auto i : l)
            cout << i << ' ';
        nl;
        for (auto i : c)
            cout << i << ' ';
        nl;

        f(i, 1, n + 1)
        {
            l[i] += l[i - 1];
        }
        f(i, 1, m + 1)
        {
            c[i] += c[i - 1];
        }
        for (auto i : l)
            cout << i << ' ';
        nl;
        for (auto i : c)
            cout << i << ' ';
        nl;
        vector<int> inf;
        f(i, 0, n)
        {
            f(j, 0, m)
            {
                if (i < l.size() && j < c.size())
                {
                    inf.pb(l[i] * c[j]);
                }
            }
        }

        sort(all(inf), greater<int>());
        sort(all(a), greater<int>());
        // for(auto i : inf) cout << i << ' ' ;nl
        int ans = 0;
        f(i, 0, min((int)a.size(), (int)inf.size()))
        {
            ans += a[i] * inf[i];
        }

        cout << ans << "\n";
    }
    return 0;
}
