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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n, 0);

        f(i, 0, n)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (i + a[i] < n)
            {
                b[i] = a[i] + b[i + a[i]];
            }
            else
            {
                b[i] = a[i];
            }
            ans = max(ans, b[i]);
        }

        cout << ans << '\n';
    }
    return 0;
}
