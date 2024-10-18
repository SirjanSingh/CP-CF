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

int dist(int a,int b,int x,int y){
    return (abs(((a-x))) + abs((b-y)));
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<int> x(n), y(n);

        f(i, 0, n)
        {
            cin >> x[i] >> y[i];
        }
        if( a <=k && b<= k) cout << 0 <<'\n';
        else{
            int mn = 1e14;
            int mn1 = 1e14;
            int ans = dist(x[a-1],y[a-1],x[b-1],y[b-1]);
            f(i,0,k){
                // cout << dist(x[i],y[i],x[b-1],y[b-1]) << ' '; 
                // if(i == b-1)continue;
                    mn = min(mn,dist(x[i],y[i],x[b-1],y[b-1])) ;
                
            }
            nl;
            f(i,0,k){
                // cout << dist(x[i],y[i],x[a-1],y[a-1]) << ' '; 

                // if(i==a-1)continue;
                mn1 = min(mn1,dist(x[i],y[i],x[a-1],y[a-1]) );
            }
            nl;
            // cout << mn << ' ' << mn1 ;
            nl;
            cout << min(mn+mn1,ans)<<'\n';

        }
        nl;
    }
    return 0;
}