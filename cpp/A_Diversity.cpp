#include <bits/stdc++.h>
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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n;
    cin >> n;
    int l = s.length();
    int free = 0;
    int occ = 0;
    mapci mp;
    for(auto i : s) if(mp[i] == 0) {occ++;mp[i]++;} else free++;
    int req = n - occ;
    if(req == 0) cout << 0 ;
    else if(req<0){
        cout << 0;
    }
    else{
        // cout <<free << ' ' << req;nl;
        if(free>=req)cout << req;
        else cout << "impossible";
    }
    nl;
     return 0;
}