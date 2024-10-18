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

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    mapii mp, mp1;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        if (mp[temp] > 0)
            mp1[temp] = i + 1;
        if (mp[temp] == 0)
            mp[temp] = i + 1;
    }
//     for(auto i : mp) cout <<i.x << ' ' << i.y<<'\n';
//     nl;
//     for(auto i : mp1) cout <<i.x << ' ' << i.y<<'\n';
// nl;

    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (mp[x - a[i]] > 0)
        {
            if (a[i] == x - a[i])
            {
                if (mp1[x - a[i]] > 0)
                {
                    // cout << 'p';
                    cout << mp1[x - a[i]] << ' ' << mp[a[i]];
                    break;
                }
                else
                    continue;
            }
            else
            {
                cout << mp[a[i]] << ' ' << mp[x - a[i]];
                break;
            }
        }
    }
    if (i == n)
        cout << "IMPOSSIBLE";

    return 0;
}