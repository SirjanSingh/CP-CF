#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(),vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        vector<pair<int,int>>a(n);
        map<int,int>mp;
        f(i, 0, n)
        {
            cin >> a[i].second;
            mp[a[i].second]++;
            a[i].first = mp[a[i].second];
        }
        sort(all(a),greater<pair<int,int>>());
        int mx = -1;
        for(auto i : mp){
            mx = max(i.second,mx);
        }
        // cout << mx << '\n';

        if(mx == n) cout << 0 << '\n';
        // else if( mx == 1)   cout << n+1 << '\n';
        else{
            int ans = 0;
            int cur = mx;
            int left = n - mx;
            while(left > 0){
                ans++;
                ans +=min(mx,left);
                left -= mx;
                mx = mx*2;

            }
            cout << ans << '\n';
        }
        // for(auto i : mp) cout << i.first << ' ' << i.second << '\n';
        // int ans=0;
        // cout << '\n';
        // cout << ans << '\n';
    }
    return 0;
}