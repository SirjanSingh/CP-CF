#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

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
        vector<string> s(n);
        f(i, 0, n) cin >> s[i];
        // f(i,0,n){ cout <<s[i] <<  '\n';}
        int ans = 0;
        f(i,0,n/2){
            f(j,0,n/2){
                
                int mx = max({s[i][j] , s[n-1-j][i], s[j][n-1-i], s[n-1-i][n-1-j] });

                // int diff = max({s[i][j] , s[n-1-i][j], s[i][n-1-j], s[n-1-i][n-1-j] }) - min({s[i][j] , s[n-1-i][j], s[i][n-1-j], s[n-1-i][n-1-j] } );
                ans += mx-s[i][j] +mx- s[n-1-j][i]+mx- s[j][n-1-i] + mx-s[n-1-i][n-1-j];
            }
        }

        cout << ans << '\n';

    }
    return 0;
}