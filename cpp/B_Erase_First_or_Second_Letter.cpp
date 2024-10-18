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
        int n;
        cin >> n;
        string s;
        cin >> s;
        // ababa
        // aaba
        // aba 
        // aa 
        // a
        // baba 
        // bba 
        // ba 
        // b
        int ans = 0;
        mapci mp;
        int l = n;
        for(auto i : s){
            mp[i]++;
            if(mp[i] == 1) ans += l;
            l--;
        }
        cout << ans << "\n";

        
    }
    return 0;
}