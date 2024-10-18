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

        vector<vector<char>> a(n + 1, vector<char>(n + 1));
        f(i, 1, n + 1) f(j, 1, n + 1) cin >> a[i][j];
        int ans = 0;
        // f(i, 1, n + 1)
        // {
        //     f(j, 1, n + 1)
        //     {
        //         cout << a[i][j];
        //     }
        //     nl;
        // }
        // nl;
        f(i,1,n-i+2){
            f(j,i,n-i+1){
                int tmp=a[i][j]+a[n-j+1][i]+a[n-i+1][n-j+1]+a[j][n-i+1]- 4*'0';
                ans+=min(tmp,4-tmp);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}