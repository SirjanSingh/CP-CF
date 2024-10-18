#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
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

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    int sum = 0;
    mapii mp;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        sum += a[i];
        mp[i] = a[i];
    }
    int v[3] = {0};
    int nw = 0;
    int n2 = 0;
    while (q--)
    {
        int t;
        cin >> t;
        v[t]++;
        if (t == 1)
        {
            int i, x;
            cin >> i >> x;
            i--;
            if (mp[i] == 0)
            {
                // cout << sum - nw + x << '\n';
                // sum = sum - nw + x;
                sum-=nw;
            }
            else
            {
                // cout << sum - a[i - 1] + x << '\n';
                // a[i - 1] = x;
                sum-=mp[i];
            }
            mp[i] = x;
            sum+=mp[i];
            cout << sum << '\n';
        }
        else
        {
            int x;
            cin >> x;
            nw = x;
            cout << x * n << '\n';
            mp.clear();
            n2 = x * n;
            sum = n2;
        }
    }

    return 0;
}