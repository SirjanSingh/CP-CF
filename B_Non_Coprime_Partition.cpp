#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "Yes\n"
#define no cout << "No \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n < 3)
        no;
    else
    {
        yes;
        if (n % 2 == 0)
        {
            int half = n / 2;
            cout << 1 << ' ' << half << '\n';
            cout << n - 1 << ' ';
            f(i, 1, n+1)
            {
                if (i == half)
                    continue;
                else
                    cout << i << ' ';
            }
        }
        else
        {
            int half = (n + 1) / 2;
            cout << 1 << ' ' << half << '\n';
            cout << n - 1 << ' ';
            f(i, 1, n+1)
            {
                if (i == half)
                    continue;
                else
                    cout << i << ' ';
            }
        }
    }

    return 0;
}