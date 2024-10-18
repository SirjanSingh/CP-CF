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
    
        vector<int>a(n);

        f(i, 0, n)
        {
             cin >> a[i];
             int temp = a[i];
        }
        string s; cin >> s;
        vector<pair<char,int>>v;
        f(i,0,n)    v.push_back({s[i],a[i]});
        sort(all(v));
        // for(auto i : v) cout << i.first << ' ' << i.second << '\n';
        int ans = 1;
        for(auto i : v){
            if(i.first == 'B'){
                if(i.second >= ans) ans++;
            }else{
                if(i.second <= ans) ans++;
            }
        }
            if(ans == n + 1)    yes;
            else no;
        // cout<<'\n';
    }
    return 0;
}