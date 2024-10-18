#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

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
        int xr;
        cin >> xr;
        f(i, 1, n)
        {
            cin >> a[i];
            xr = xr ^ a[i];
            int temp = a[i];
        }
        if (n % 2)
        {
            cout << "4\n"
                 << 1 << ' ' << n - 1 << '\n'
                 << 1 << ' ' << n - 1 << '\n'
                 << n - 1 << ' ' << n << '\n'
                 << n - 1 << ' ' << n << '\n';
        }
        else
        {
            cout << "2\n" << 1 << ' ' << n  << '\n' << 1 << ' ' << n << '\n';
        }

        // cout << xr << '\n';
    }
    return 0;
}