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

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> a(100000,0);
    mapii mp;
    f(i, 0, n)
    {
        int temp; cin >> temp;
        a[temp]++;
        mp[temp]++;
    }
    if (mp.size() > 2)
        no;
    else
    {
        if(mp.size() == 1){
            yes;
            return;
        }
        vector<int>v;
        for(int i : a)  {
            if(i != 0)  v.push_back(i);
        }
        sort(all(v),greater<int>());
        // for(auto i : v)cout << i << ' ' ;
        // nl;
        // cout << (n+1)/2 << ' ' << n/2;
        // nl;
        // cout << a[0] << ' ' << a[1] ;
        // nl;
        if(v[0] == (n+1)/2 && v[1] == n/2)
            yes;
        else no;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}