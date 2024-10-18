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
        vector<int>sum;
        vector<map<int,int>>pres;
        map<int,int>mp;
        int sm = 0;
        int ans = 0;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            sm += a[i];
            sum.push_back(sm);
            mp[a[i]]++;
            if(sm/2 == (sm+1)/2)
            if(mp[sm/2] > 0) ans++;
            // pres[i][a[i]]++;
            // if(a[i] == 0) ans ++;
        } 
        // vector<int>b = a,sm2;
        // sort(all(b));
        // sm = 0;
        
        // for (auto i : b){sm+=i;sm2.push_back(sm);}
        // nl;
        // for(auto i : pres){ for(auto j : i)  cout << j.x << ' ' << j.y << '\n';nl;}
        // f(i,0,n){
        //     if((pres[i][sum[i]] > 0))   ans++;
        //     // cout << a[i] << ' ' << sum[i] - a[i] ; nl;
        // }
        // int ans2 = 0;
        // f(i,0,n){
        //     if(b[i] == (sm2[i]-b[i]))   ans2++;
        //     // cout << b[i] << ' ' << sum[i] - b[i] ; nl;
        // }
        cout << ans << " ";
        // cout << ans2 << "\n";
        nl;
    }
    return 0;
}