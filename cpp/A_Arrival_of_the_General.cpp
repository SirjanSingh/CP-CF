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
    int mxi = 0, mx = -1, mni = 0, mn = INT_MAX;
    f(i, 0, n)
    {
        cin >> a[i];
        int temp = a[i];
        if (mx < temp)
        {
            mx = temp, mxi = i + 1;
        }
        if (mn >= temp)
        {
            mn = temp, mni = i + 1;
        }
    }
    // cout << mxi << ' ' << mni ;
    // nl;
    // cout << mx << ' ' << mn ;
    // nl;
    if(a[0] == mx && a[n-1] == mn) cout << 0;
    else if(a[0] == mx ) cout << n-mni;
    else if( a[n-1] == mn ) cout << mxi - 1;
    else if (mxi > mni)
        cout <<  mxi - 2 + n - mni;
    else
        cout << mxi - 1 + n - mni;

    return 0;
}