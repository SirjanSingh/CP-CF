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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int s1 = 0, s2 = 0;
        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            a[i] = (temp);
        }
        int i = 0;
        sort(a.rbegin(), a.rend());
        for (auto j : a)
        {
            if (i % 2 == 1)
                s1 += j;
            else
                s2 += j;
            i++;
        }
        int ans = s2 - s1;
        if (n % 2 == 0)
        {
            cout << max(ans - k, 0ll);
        }
        else
        {
            cout << max(ans - k, a[n - 1]);
        }
        // cout << ' ' << a[n-1];
        // cout << s2-s1;
        nl;
    }
    return 0;
}