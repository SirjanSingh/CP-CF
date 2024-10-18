#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n,k,m;
        cin>>n >> k >> m;
    
        vector<int>a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
   
        }
        sort(all(a),greater<int>());
        int ans = (k - k/(m+1) ) * (a[0] ) +( k/(m+1)) * a[1];
        cout << ans << '\n';
    
    return 0;
}