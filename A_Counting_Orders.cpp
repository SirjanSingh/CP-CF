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

        vector<int> a(n), b(n), c, d(n + 1, 0);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        f(i, 0, n) cin >> b[i];
        sort(all(b), greater<int>());
        sort(all(a));
        int req = 0;
        // f(i, 0, n)
        // {
        //     if (a[i] <= b[i])
        //         req++;
        //     c.push_back(a[i] - b[i]);
        // }
        // // cout << req;
        // // nl;
        // if (req != 0)
        //     cout << 0 << '\n';
        // else
        // {
        int l = 0;
        int r = 0;
        int big = 0;
        // while(l<n)  {
        //     /*
        //         9 - 6 1
        //         8 - 6 1
        //         6 - 5 1
        //         5 - 4 2
        //         4 - 3 3
        //         2 - 2 4

        //     */
        //     if(a[l] > b[r]) {
        //         l++;
        //         big++;
        //     }else{
        //         d[r] = big;
        //         r++;
        //     }
        // }
        // while(r<n) d[r++] = big;
        // sort(all(c));
        // f(i, 0, n) cout << d[i] << ' ';
        l++;
        f(i, 0, n)
        {
            big = n - (upper_bound(all(a), b[i]) - a.begin());
            l = ((l * max(0ll, (big - i))) % ((int)1e9 + 7));
        }
        cout << l % ((int)1e9 + 7);
        nl;
        // }
    }
    return 0;
}