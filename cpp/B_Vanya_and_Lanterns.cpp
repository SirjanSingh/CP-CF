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

    double n, l;
    cin >> n >> l;
    mapii mp;
    vector<pair<double, double>> a(n + 1), b;
    a[0].x = 0;
    f(i, 1, n + 1)
    {
        cin >> a[i].x;
        a[i].y = i;
        mp[a[i].x]++;
    }
    cout << setprecision(10) << fixed;
    sort(all(a));
    b = a;
    // f(i, 0, b.size()) cout << b[i].x << ' ' << b[i].y << '\n';
    // nl;
    // nl;
    double mx = -1;
    if (mp[0] == 0)
        mx = a[1].x;
     if (mp[l] == 0)
        mx = max(mx,l - a[n].x);
    // cout << mx << '\n';
    f(i, 2, n + 1)
    {
        // cout << a[i].x << ' ' << a[i - 1].x << ' ' << mx << '\n';
        mx = max(mx, abs(a[i].x - a[i - 1].x) / 2);
    }
    cout << mx;

    return 0;
}