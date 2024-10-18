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
            mp[temp]++;
        }
        int req = a[n-1];
        if(mp[req] == n) cout << 0 << '\n';
        else{
            int ans = 0;
            int r = n-2;
            int i = 1;
            while(r>=0){
                
                    if(a[r] == req){r--;
                        i++; continue;}
                    else {
                        ans++;
                        r-=i;
                        i*=2;
                    }
                
            }
            cout << ans << '\n';
        }
        // int mx = -1,mxx = -1;
        // for(auto i:mp ){
        //     if(i.y > mx) mx=i.y,mxx=i.x;
        // }
        // cout << mx  << ' ' << mxx << '\n';
    }
    return 0;
}