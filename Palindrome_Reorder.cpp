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
    mapci mp;
    for (auto i : s)
        mp[i]++;
    int n = s.length();
    vector<char> ans(n, '\0');
    // if (n % 2 == 1)
    // {
    char tr;
    int num = 0;
    for (auto i : mp)
        if (i.y % 2 == 1)
        {
            tr = i.x;
            num++;
            // break;
        }
    // cout << tr << '\n';
    if (num > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    else
    {
        int l = 0;
        int r = n - 1;
        for (auto &i : mp)
        {
            if (1)
            {
                while (i.y > 0)
                {
                    if (i.y == 1)
                    {
                        ans[n / 2] = tr;
                        i.y--;
                    }
                    else
                    {
                        ans[l] = i.x;
                        ans[r] = i.x;
                        l++;
                        r--;
                        i.y -= 2;
                    }
                }
            }
            // cout << i.x << ' ' << i.y << ' ' << l << ' ' << r << '\n';
        }
        f(i, 0, n) cout << ans[i];
    }
    // }
    // else
    // {
    //     char tr;
    //     int num = 0;
    //     for (auto i : mp)
    //         if (i.x % 2 == 1)
    //         {
    //             tr = i.y;
    //             num++;
    //             // break;
    //         }
    //     if (num > 1)
    //     {
    //         cout << "NO SOLUTION";
    //         return 0;
    //     }
    //     else
    //     {
    //     }
    // }
    return 0;
}