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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        mapci mp;
        int n = s.length();
        vector<char>v;
        f(i,0,n){
            mp[s[i]]++;
            if(mp[s[i]] == 1) v.push_back(s[i]);
        }
        // int dif = mp.size();
        // string ans = s.substr(0,dif);
        // cout <<ans << ' ' << dif << '\n';
        int req = 0;
        f(i,0,n){
            if(s[i] == v[i%v.size()] )
            req++;
        }
        int wow = 0;
        // if(n%dif!=0){
        //     cout << ' ' <<s.substr(n-n%dif) << ' ' ;
        //     if(ans.find(s.substr(n-n%dif )) != std::string::npos){
        //         wow++;
        //     }
        // }
        // else wow =1 ;
        // cout << req << ' ' << wow << '\n';
        if(req == n) yes;
        else no;
        // nl;
    }
    return 0;
}