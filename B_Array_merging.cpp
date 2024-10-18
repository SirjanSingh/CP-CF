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

        vector<int> a(n), b(n);
        mapii mp1, mp2;
        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            a[i] = temp;
        }
        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            b[i] = temp;
        }
        int mx = -1;
        int cur = 1;
        // mp1[a[0]] = cur;

        // f(i,1,n){
        //     if(a[i] == a[i-1]) cur++;
        //     else{
        //         cout <<"Cur " << cur << ' ' << a[i];
        //         nl;
        //         mx = max(cur, mx);
        //         mp1[a[i]] = max(cur,mp1[a[i-1]]);
        //         cur = 1;
        //     }

        // }
        // if(cur!=1) mp1[a[n-1]] = cur;
        // int cur = 1;
        mp1[a[0]] = 1;

        f(i, 1, n)
        {
            if (a[i] == a[i - 1])
                cur++;
            else
            {
                mp1[a[i - 1]] = max(cur, mp1[a[i - 1]]);
                cur = 1;
            }
        }
        // For the last element sequence
        mp1[a[n - 1]] = max(cur, mp1[a[n - 1]]);

        nl;
        // for (auto i : mp1)
        //     cout << i.x << ' ' << i.y << '\n';
        nl;
        cur = 1;
        mp2[b[0]] = 1;

        f(i, 1, n)
        {
            if (b[i] == b[i - 1])
                cur++;
            else
            {
                mp2[b[i - 1]] = max(cur, mp2[b[i - 1]]);
                cur = 1;
            }
        }
        // For the last element sequence
        mp2[b[n - 1]] = max(cur, mp2[b[n - 1]]);

        nl;
        // for (auto i : mp2)
        //     cout << i.x << ' ' << i.y << '\n';
        nl;
        int mx2 = -1;
        cur = 0;
        f(i, 0, n)
        {
            mx2 = max(mx2, mp1[a[i]] + mp2[a[i]]);
            mx2 = max(mx2, mp1[b[i]] + mp2[b[i]]);
            // cout << mx2 << ' ';
        }
        nl;
        cout << mx2 << '\n';
        nl;
    }
    return 0;
}