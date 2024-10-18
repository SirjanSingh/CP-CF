#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

unsigned long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    if (r > n / 2)
        r = n - r;

    unsigned long long result = 1;
    for (int i = 0; i < r; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
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
        int i = (n - 1) ;
        // cout << nCr(n * n, 2) << ' '<< i*i *2  << '\n';
        int ans = nCr(n * n, 2) - (i * i) * 2;
        cout<<ans<<'\n';
    }
    return 0;
}