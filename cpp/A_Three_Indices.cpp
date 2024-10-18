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
        int n;
        cin >> n;

        vector<int> a(n), ans;

        f(i, 0, n)
        {
            cin >> a[i];
        }
        bool flag = false;
        f(i, 1, n - 1)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                yes;
                cout << '\n'
                     << i << " " << i + 1 << " " << i + 2;
                flag = true;
                break;
            }
        }
        if (!flag)
            no;
        cout << '\n';
    }
    return 0;
}