#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> a(n * n);

        f(i, 0, n * n) cin >> a[i];

        sort(a.begin(), a.end());
        // for (int i : a)
        //     cout << i << ' ' ;
        // cout << '\n';
        int cc = 0, dc = 0;
        int v[n][n] = {0};
        v[0][0] = a[0];

        f(i, 0, n - 1)
        {
            f(j, 0, n - 1)
            {
                v[i][j + 1] = v[i][j] + d;
                v[i + 1][j] = v[i][j] + c;
                // cout << v[i][j] << ' ';
            }
            // cout << '\n';
        }

        v[n - 1][n - 1] = v[n - 2][n - 1] + c;
        // cout << '\n';

        vector<int> ans;
        f(i, 0, n)
        {
            f(j, 0, n)
            {
                ans.push_back(v[i][j]);
                // cout << v[i][j] << ' ';
            }
            // cout << '\n';
        }
        sort(ans.begin(), ans.end());
        bool flag = false;
        // for (int i : ans)
        //     cout << i << ' ';
        // cout << '\n';
        // for (int i : a)
        //     cout << i << ' ';
        // cout << '\n';
        f(i, 0, n * n)
        {
            // cout << a[i] << ' ' << ans[i] << '\n';
            if (a[i] != ans[i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            yes;
        else
            no;
        // cout << '\n';
        cout << '\n';
    }
    return 0;
}