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

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            if(mp[temp] < i+1) mp[temp]= i+1;
        }
        int cur=0,ans=-1;
        for(auto i : mp){
            for(auto j : mp){
            // cout << i.x << ' ' << j.x <<" " << __gcd(i.x,j.x) << '-' << i.y+ j.y;
            // nl;
                if(__gcd(i.x,j.x) == 1) cur = i.y+ j.y;
            ans = max(cur, ans);
            }
            // cout << ans << ' ' << cur;
            // nl;
            cur =0;
        }
        cout << ((ans==0)?-1:ans);
        nl;
    }
    return 0;
}