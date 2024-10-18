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

    vector<int> a(n);
    mapii mp;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        mp[temp - i] += temp;
    }
    int ans = -1;
    for (auto i : mp)
        ans = max(ans, i.y);
    cout << ans << '\n';

    return 0;
}
