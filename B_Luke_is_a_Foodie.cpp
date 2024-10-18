#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
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
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        int k = 0;
        int l = a[0] - x;
        int r = a[0] + x;
        f(i, 0, n)
        {
            l = max(a[i] - x, l);
            r = min(a[i] + x, r);
            if (l > r)
            {
                l = a[i] - x;
                r = a[i] + x;
                k++;
            }
        }
        cout << k << "\n";
    }
    return 0;
}