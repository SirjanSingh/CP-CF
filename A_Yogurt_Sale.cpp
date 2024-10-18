#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (2 * a < b)
        {
            cout << n * a << '\n';
        }
        else
        {
            cout << (n % 2) * a + (n / 2) * b << '\n';
        }
    }
    return 0;
}