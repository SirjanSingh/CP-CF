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
    int t;
    cin >> t;

    vector<int> a(n+1,0);
    vector<int> sum(n+1,0), rsum;
    int sm = 0;
    int a1 = 0, a2 = 0;
    f(i, 1, n+1)
    {
        cin >> a[i];
        sm += a[i];
        sum[i] = sm;
        // cout << sm << ' ';
        // if(sm <= t) a1++;
    }
    nl;

    int l = 0, r = 1;
    while (l <= n && r <= n)
    {
        if (sum[r] - sum[l] <= t)
        {
            a1 = max(a1, r - l);
            r++;
        }
        else
            l++;
    }
    // f(i,0,n){
    //     rsum.push_back(sm);
    //     cout << sm << ' ';
    //     sm -=a[i];
    // }nl;
    // reverse(all(rsum));
    // f(i,0,n) {
    //     if(rsum[i] <= t) a2++;
    // }
    // cout << a1 << ' ' << a2 << '\n';
    //     cout << max(a1,a2) << '\n';
    cout << a1;

    return 0;
}