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

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    f(i, 0, n)
    {
        cin >> a[i];
    }
    f(i, 0, n)
    {
        cin >> b[i];
    }
    int l = 0;
    int r = 0;
    int ans = 0;
    mapii mp;
    while (l < n && r < n)
    {
        // cout << ans << ' ' << l << ' ' << r << '\n';
        if (mp[a[l]] > 0)
        {
            l++;
            continue;
        }
        mp[b[r]]++;
        if (a[l] == b[r])
        {
            l++;
            r++;
        }
        else
        {
            ans++;
            r++;
            if (r == n)
                break;
        }
    }
    // cout << ans << ' ' << l << ' ' << r << '\n';

    cout << ans << '\n';

    return 0;
}