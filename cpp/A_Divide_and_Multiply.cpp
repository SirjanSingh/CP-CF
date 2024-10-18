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
        int p = 0;
        int mx = -1;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            while (a[i] != 1)
            {
                if (a[i] % 2 == 0)
                {
                    a[i] /= 2;
                    p++;
                }
                else
                    break;
            }
            mx = max(mx, a[i]);
        }
        // sort(all(a));
        int ans = pow(2, p) * mx;
        int pass = 0;
        f(i, 0, n) if (a[i] != mx || pass) ans += a[i];
        else pass = 1;
        cout << ans << '\n';
    }
    return 0;
}