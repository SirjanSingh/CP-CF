#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
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

        vector<int> a(n);
        mapii mp;
        bool flag = false;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            mp[a[i]]++;
            if (i > 0)
                if (mp[temp + 1] != 0 || mp[temp - 1] != 0){
                    // flag = false;
                }
                else flag = true;
            // // cout << flag ;
            // nl;
            // for(auto i : mp) cout << i.x << ' ' << i.y << '\n';
            // nl;
        }
        if (flag)
            no;
        else
            yes;
    }
    return 0;
}