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
        int x, n;
        cin >> x >> n;
        int ans = 0;
        if (n % 4 == 0)
            ans = 0;
        else if (n % 4 == 1)
            ans = -n;
        else if (n % 4 == 2)
            ans = 1;
        else if (n % 4 == 3)
            ans = n + 1;

        cout << x + ((x % 2 == 0) ? ans : -ans) << '\n';
    }
    return 0;
}