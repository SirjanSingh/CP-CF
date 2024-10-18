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

        vector<int> a(n + 1, 0);

        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            a[i + 1] = a[i] + temp;
        }
        int ans = 0;
        // for (auto i : a)
        //     cout << i << ' ';
        nl;
        f(i, 0, n-1)
        {
            ans = max(ans, __gcd(a[n] - a[i + 1], a[i + 1]));
            // cout << a[n] - a[i + 1] << ' ' <<  a[i + 1];
            nl;
        }
        cout << ans;
        nl;
    }
    return 0;
}