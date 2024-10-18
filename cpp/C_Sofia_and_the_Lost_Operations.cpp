#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

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

        vector<int> a(n), b(n);
        int req = 0;
        map<int, int> mp;
        map<int,int> mp1;
        vector<int> reqi;
        int y = 0;
        int tot = 0;
        f(i, 0, n) cin >> a[i];
        f(i, 0, n)
        {
            cin >> b[i];
            if (a[i] != b[i])
            {
                req++;
                reqi.push_back(b[i]);
                // mp1[b[i]] = 0;
                y = i;
            }
                mp[b[i]]++;
        }
        int m;
        cin >> m;
        vector<int> d(m);
        int ans = 0;
        f(i, 0, m)
        {
            cin >> d[i];
            // cout << mp[d[i]] << ' ';
            // if (mp[d[i]] > 0)
            // mp[d[i]] = 0;
            mp1[d[i]]++;
        }
        int x = 0;
        // for (auto i : mp)
        //     cout << i.first << ' ' << i.second << '\n';
        // cout << '\n';
        // for (auto i : mp1)
        //     cout << i.first << ' ' << i.second << '\n';
        // cout << '\n';

        if (req > m)
            no;
        else
        {   
            f(i, 0, n)
            {
                // cout << a[cur] << ' ' << b[cur] << ' ' << d[i] << '\n';
                if (a[i] != b[i])
                {
                    // cout << b[i] << ' ' << mp1[b[i]] << ' ' << x << ' ' << req << '\n';
                    if (mp1[b[i]] == 0)
                    {
                        x = -1;
                        no;
                        break;
                    }
                    // else
                    // {
                    //     x++;
                    // }
                        mp1[b[i]]--;
                }
            }
            // cout << y << ' ';
            if (x != -1   )
            {
                int final = 0;
                // // f(i,0,n)    if(mp)
                // for(auto i : mp)cout << i.first <<'-'<<i.second << '\n';
                // cout << mp[d[m-1]] << ' ' << d[m-1] << '\n';
                if (mp[d[m - 1]] > 0)
                    yes;
                // else if (x == 0 && req == 0)
                //     yes; 
                else
                    no;
            }
        }
        // cout << '\n';

        // cout << '\n';
        // for (auto i : mp)
        //     cout << i.first << ' ' << i.second << '\n';
        // else
        // {
        //     int cur = 0;
        //     f(i, 0, m)
        //     {
        //         // cout << a[cur] << ' ' << b[cur] << ' ' << d[i] << '\n';
        //         if (a[cur] != b[cur])
        //         {
        //             if (d[i] == b[cur])
        //             {
        //                 a[cur] = d[i];
        //                 cur++;
        //             }
        //         }
        //         else if (cur != n - 1)
        //             cur++;
        //     }
        //     bool flag = false;
        //     f(i, 0, n) if (a[i] != b[i])
        //     {
        //         flag = true;
        //         break;
        //     }
        //     cout << cur << ' ';
        //     if (!flag)
        //         yes;
        //     else
        //         no;
        // }
        // cout << '\n';
    }
    return 0;
}