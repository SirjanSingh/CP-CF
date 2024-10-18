#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>
#define pii pair<int, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        int o = 0, e = 0;

        f(i, 0, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                e++;
            else
                o++;
        }

        if (o == 0)
        {
            no;
        }
        else if (x % 2 == 1)
        {
            if (o >= 1 && (o + e >= x))
            {
                yes;
            }
            else
            {
                no;
            }
        }
        else
        {
            if (o > 0 && e > 0 && (o + e >= x))
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }

    return 0;
}
