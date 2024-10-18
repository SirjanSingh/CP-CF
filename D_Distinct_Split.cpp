#include<bits/stdc++.h>
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

signed main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;cin>>s;
    vector<int> dis1,dis2;
    int req = 0;
    mapci m1,m2;
    for(auto i : s){ if(m1[i] == 0){m1[i]++,req++;} dis1.push_back(req);}
    reverse(all(s));
    req = 0;
    for(auto i : s){ if(m2[i] == 0){m2[i]++,req++;} dis2.push_back(req);}
    int mx = -1;
    int cur = 0;
    reverse(all(dis2));
    f(i,0,n-1){
        cur = dis2[i + 1] + dis1[i];
        mx = max(mx,cur);
    }
    cout << mx << '\n';
    }
    return 0;
}