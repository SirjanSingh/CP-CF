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

        vector<int> a(n), res;

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            if (i == 0 || a[i] != a[i - 1])
            {
                res.push_back(a[i]);
            }
        }
        int ans = 0;
        a = res;
        // for (auto i : a)
        //     cout << i << ' ';

        if (a.size() == 2)
        {
            cout << 2;
        }
        else if (a.size() == 1)
            cout << 1;
        else
        {
            f(i, 0, a.size() - 2)
            {
                if (a[i] > a[i + 1] && a[i + 1] > a[i + 2])
                    ans++;
                if (a[i] < a[i + 1] && a[i + 1] < a[i + 2])
                    ans++;
            }
            // cout << ans ;
            cout << res.size() - ans;
        }
        nl;
    }
    return 0;
}