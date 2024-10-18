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
#define print(a)                           \
    for (auto i : a)                       \
        cout << i.x << ' ' << i.y << "\n"; \
    nl;
#define printv(a)    \
    for (auto i : a) \
        cout << i << "\n";

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k *= 2;

        vector<int> a(n + n);
        vector<pair<int, int>> mp1, mp2;
        mapii x1, x2;
        f(i, 0, n)
        {
            cin >> a[i];
            x1[a[i]]++;
        }
        for (auto i : x1)
            if (i.y != 0)
                mp1.push_back(make_pair(i.y, i.x));
        f(i, n, n + n)
        {
            cin >> a[i];
            x2[a[i]]++;
        }

        for (auto i : x2)
            if (i.y != 0)
                mp2.push_back(make_pair(i.y, i.x));
        sort(all(mp1), greater<pair<int, int>>());
        sort(all(mp2), greater<pair<int, int>>());
        vector<int>f1,f2;
        // print(mp1)
        for (auto i : mp1){
            int tmp = i.x;
            while(tmp--)
                f1.push_back(i.y);
                // cout << i.x << ' ' << i.y << "\n";
        }
        // nl;
        // nl;
        for (auto i : mp2){
            int tmp = i.x;
            while(tmp--)
                f2.push_back(i.y);
                // cout << i.x << ' ' << i.y << "\n";
        }
        // nl;
        // nl;
        f(i,0,k) cout << f1[i] << ' ' ;
        nl;
        f(i,0,k) cout << f2[i] << ' ' ;
nl;
        
        // print(mp2)
    }
    return 0;
}