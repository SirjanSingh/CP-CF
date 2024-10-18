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
int nearest1(vector<int> a, int i, char ch)
{
    int ans = 0;
    if (ch == 'f')
    {
    }
    else
    {
    }

    return ans;
}
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

        vector<int> a(n), b;

        int sum = 0;
        vector<int> pfx(n+1, 0);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            sum += a[i];
            pfx[i+1] = sum;
            if (a[i] == 1)
                b.push_back(i + 1);
        }
        if (sum == m)
            cout << 0;
        else if (sum < m)
            cout << -1;
        else
        {
            int l = 0;
            int r = n - 1;
            int ans = INT_MAX;
            f(j, 1, n+1 )
            {
                auto it = lower_bound(pfx.begin(), pfx.end(), pfx[j] - m);
                if (*it == pfx[j] - m)
                {
                    int idx = it - pfx.begin();
                    ans = min(ans, idx + (n - j));
                }
            }
            cout << ans;
            nl;
        }
        // while (l < n)
        // {

        // cout << ans;
        nl;
        nl;
        nl;
        // l++;
        // }
    }
    nl;

return 0;
}