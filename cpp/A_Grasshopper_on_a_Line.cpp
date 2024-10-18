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
        int x, k;
        cin >> x >> k;

        if (x % k == 0)
        {            
            cout << "2\n" << x-1 <<  ' ' << 1 << "\n";
        }
        else
        {
            cout << "1\n" << x << '\n';
        }
    }
    return 0;
}