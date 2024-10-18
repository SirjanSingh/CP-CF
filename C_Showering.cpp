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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<pair<int, int>> a(n);
        vector<int> gap;

        f(i, 0, n)
        {
            cin >> a[i].x >> a[i].y;
            if (i == 0)
                gap.push_back(a[i].x - 0);
            if (i != 0)
                gap.push_back(a[i].x - a[i - 1].y);
            if (i == n - 1)
                gap.push_back(k - a[i].y);
        }
        int flag = 0;
        for (auto i : gap)
        {
            if (i >= m)
            {
                yes;
                flag = 1;
                break;
            }

            // cout << i << ' ' ;
        }
        if (flag == 0)
        {
            no;
        }

        // nl;
    }
    return 0;
}