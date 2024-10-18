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

int sum(int l, int r)
{
    if (l > r)
        return 0;
    return (l + r) * (r - l + 1) / 2;
}
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int ans = 0;
        // f(a, 1, x + 1)
        // {
        //     f(b, 1,  n / a + 1)
        //     {
        //         int c1 = x - a - b;
        //         if (c1 < 1)
        //             continue;

        //         int c2 = (n - a * b) / (a + b);
        //         if (c2 < 1)
        //             continue;

        //         ans += max(0ll, min(c1, c2));
        //     }
        // }

        // cout << ans << "\n";
        int l = ((x * y) / __gcd(x, y));
        int p = n / l;
        int r = n / x - p;
        int b = n / y - p;
        // cout << r << " " << b << " " << p << "\n";

        int sumr = sum(n - r + 1, n);
        int sumb = sum(1, b);
        cout << sumr - sumb << '\n';
    }

    return 0;
}
