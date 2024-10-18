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
    
        vector<pii>a(n);
        vector<int>v(n),w(n),x(n);
        f(i, 0, n)
        {
            cin >> v[i];
        } f(i, 0, n)
        {
            cin >> w[i];
            a[i] = {v[i],w[i]};
            x[i] = w[i] - v[i];
        }
        sort(all(a));
        // for(auto i : a){
        //     cout << i.x << " " << i.y << "\n";
        // }
        sort(all(x));
        // for(auto i : x) cout << i <<  ' ';
        // nl;
        int l = 0;
        int r = n-1;
        int ans = 0;
        while(l<r){
            if(x[l] + x[r] >=0){
                ans++;
                l++;
                r--;
            }else{
                l++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}