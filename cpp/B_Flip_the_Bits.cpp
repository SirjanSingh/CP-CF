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

int solve()
{
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1 >> s2;
    int c0[n] = {0}, c1[n] = {0};
    int o = 0, z = 0;
    f(i, 0, n)
    {
        if (s1[i] == '1')
            o++;
        else
            z++;
        c0[i] = z;
        c1[i] = o;
    }
    // for (auto i : c0)
    //     cout << i << " ";
    // nl;
    // for (auto i : c1)
    //     cout << i << " ";
    // nl;
    int l = n - 1;
    int ex = 0;
    int x ,y;
    while (l >= 0)
    {
         x=(int)(s1[l]) - (int)'0';
         y=(int)(s2[l]) - (int)'0';
        // cout << x << ' ' << y ;
        // nl;
        if ((x + ex)%2 == y)
            l--;
        else
        {
            if (c0[l] == c1[l])
            {
                l--;
                ex++;
                continue;
            }
            else
            {
                no;
                return 0;
            }
        }
    }
    yes;
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