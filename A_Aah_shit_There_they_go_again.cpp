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
        int n, m, k, w;
        cin >> n >> m >> k >> w;
        // n = n % 2;
        // m = m % 2;
        // if (!w)
        // {
        //     if (n % 2 == 0 && k % 2 != 0)
        //         cout << "Alice\n";
        //     else
        //         cout << "Bob\n";
        // }
        // else
        // {
        //     if (n % 2 != 0 && k % 2 != 0)
        //         cout << "Alice\n";
        //     else
        //         cout << "Bob\n";
        // }
        cout<<((k%2!=0)?"Alice\n":"Bob\n");
    }
    return 0;
}