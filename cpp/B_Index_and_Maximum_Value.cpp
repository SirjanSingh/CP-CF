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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int ans = 0;

        f(i, 0, n)
        {
            cin >> a[i];
            ans = max(ans, a[i]);
        }

        while (q--)
        {
            char x;
            int l, r;
            cin >> x;
            cin >> l >> r;

            if (l <= ans && ans <= r)
            {
                if (x == '+')
                    ans++;
                else
                    ans--;
            }
            
            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}
