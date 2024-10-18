#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n = 2;
        vector<int> a(n), b(n);

        f(i, 0, n)
        {
            cin >> a[i];
        }
        f(i, 0, n)
        {
            cin >> b[i];
        }

        int sw = 0;
        sort(all(a));
        sort(all(b));
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                int sr = 0, lr = 0;

                if (a[0] > b[i])
                    sr++;
                else if (a[0] < b[i])
                    lr++;

                if (a[1] > b[1 - i])
                    sr++;
                else if (a[1] < b[1 - i])
                    lr++;

                if (sr > lr)
                    sw++;

                sr = 0;
                lr = 0;

                if (a[1] > b[i])
                    sr++;
                else if (a[1] < b[i])
                    lr++;

                if (a[0] > b[1 - i])
                    sr++;
                else if (a[0] < b[1 - i])
                    lr++;

                if (sr > lr)
                    sw++;
            }
        }

        cout << sw / 2 << '\n';
    }

    return 0;
}
