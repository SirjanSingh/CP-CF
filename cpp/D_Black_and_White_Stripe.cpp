#include<bits/stdc++.h>
using namespace std;
#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define x first
#define y second
#define nl cout << '\n';
#define pb push_back
#define pob pop_back
#define mapii map<int, int>
#define mapci map<char, int>

signed  main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
   int t;cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    map<int,int>mp;
    vector<int>sum;
    int sm = 0;
    int cur = 0;
    sum.push_back(cur);
    for(char i : s){
        if(i == 'W') cur++;
        sum.push_back(cur);
    }
    int mn = INT_MAX;
    // for(auto i : sum)cout <<i << ' ';
    // nl;
    f(i,k,n+1){
        mn=min(mn,sum[i] - sum[i - k]);
    }
    cout << mn;
    nl;

    }
    return 0;
}