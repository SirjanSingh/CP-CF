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
        double m, a, b, c;
        cin >> m >> a >> b >> c;

        double amount = m * (pow(1 + (b) / 100, c / a));

        cout << fixed << setprecision(8) << amount << '\n';
    }
    return 0;
}