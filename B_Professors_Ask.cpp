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
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        // cout << s1 << ' ' << s2;
        // nl;
        int l = -1;
        f(i, 0, n)
        {
            // cout << s1[i] ;
            if (s1[i] != '1')
            {
                // cout << "im in";
                l = i;
                break;
            }
        }
        // int r = -1;
        // cout << l;
        // nl;
        // f(i, 0, m)
        // {
        //     cout << s2[i] ;
        //     if (s2[i] == '0')
        //     {
        //         cout << "im too in";
        //         r = i;
        //         break;
        //     }
        // }
        // nl;
        // cout <<r;
        // nl;
        if (l > n-m)
            cout << "-1\n";
        else
        {
            cout << l;
            nl;
        }
    }
    return 0;
}