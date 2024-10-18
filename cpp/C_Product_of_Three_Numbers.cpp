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
        int mn = 1;
        pair<int, int> present;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                mn = i;
                present.first = i;
                n /= i;
                break;
            }
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && present.first != i)
            {
                mn = i;
                present.second = i;
                n /= i;
                break;
            }
        }
        int a = present.first, b = present.second;

        if ((a == 0 || b == 0 || n == 1) || (a == n || b == n))
            no;
        else
        {
            yes;
            cout << a << ' ' << b << ' ' << n << '\n';
        }
    }
    return 0;
}