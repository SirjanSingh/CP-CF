#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>
#define pii pair<int,int>

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
        int mn = INT_MAX;
        int mx = -1;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            mp[a[i]]++;
            mx = max(mx,a[i]);
            mn = min(mn, a[i]);
        }
        if(mn != mx)
        cout << mp[mx]*mp[mn]*2;
        else 
        {
            if(mp[mx] == 0) cout << mp[mx]*(mp[mx] -1);
            else cout << (mp[mn] -1)*mp[mn];
        }
        nl;
    }
    return 0;
}