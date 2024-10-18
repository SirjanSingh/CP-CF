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
        int n, k;
        cin >> n >> k;

        vector<vector<int>> a(n,vector<int>(n)),b;

        f(i, 0, n) f(j, 0, n) cin >> a[i][j];
        // f(i, 0, n){ f(j, 0, n) cout <<a[i][j] << ' ';  nl;}
        b=a;
        reverse(all(a));
        f(i,0,n) f(j,0,n/2) swap(a[i][j],a[i][n-1-j]);
        // nl;
        int ans = 0;
        f(i, 0, n){ f(j, 0, n){ 
            if(a[i][j] != b[i][j])  ans++;

            // cout <<a[i][j] << ' ';  
            }
            // nl;
            }
        // nl;
        // cout << ans <<'\n';
        ans/=2;
        if(ans <= k && ((k-ans)%2==0 || n%2!=0)) yes;
        else no;

    }
    return 0;
}