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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<int>a(n);
        mapii mp;
        int ans = 0;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = log2(a[i]);
            // cout << temp << ' '  ;
            mp[temp + 1]++;
        }
        // nl;
        // f(i,0,n){
        //     int te  = log2(a[i]);
        //     cout << te << ' ' ;
        //     int temp = mp[te];
        //     if( temp > 1) ans++;
        // }
        for(auto i : mp){
            // cout << i.x << ' ' <<i.y << '\n';
            if(i.y > 1) ans+= (i.y)*(i.y-1)/2;
        }
        // nl;
        cout << ans;
        nl;
    }
    return 0;
}