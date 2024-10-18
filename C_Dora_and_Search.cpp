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
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
    }
    int mn = 1;
    int mx = n;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {

        if (a[l] == mn || a[l] == mx || a[r] == mx || a[r] == mn)
        {
            if(a[l] == mx)  l++,mx--;
            else if(a[l] == mn) l++,mn++;
            if(a[r] == mn) r--,mn++;
            else if(a[r] == mx) r--,mx--;
        }
        else
        {
            cout << l + 1 << ' ' << r + 1 << '\n';
            return;
        }
        // cout << l << ' ' << r;
        // nl;
    }
    cout << -1;
    nl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}