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

        vector<pii> a(n);

        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            a[i] = {temp, i + 1};
        }
        sort(all(a));
        int ans = 0;

        f(i, 0, n)
        {
            f(j, i + 1, n)
            {
                if (a[i].x * a[j].x == a[i].y + a[j].y)
                    ans++;
                if (a[i].x * a[j].x > 2 * n)
                    break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}