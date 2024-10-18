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

    int n;
    cin >> n;

    vector<int> a(n);

    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
    }
    sort(all(a));
    int l = 0, r = n - 1;
    int sl = a[l], sr = 0;
    int res = INT_MAX;
    while (l < r)
    {
        if (sl <= sr)
        {
            sl += a[l];
            res = min(res, abs(sl - sr));
            l++;
        }
        else
        {
            sr += a[r];
            res = min(res, abs(sl - sr));
            r--;
        }
    }
    cout << res;

    return 0;
}