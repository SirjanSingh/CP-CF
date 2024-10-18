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
        string s;
        cin >> s;
        int mn = INT_MAX;
        char ch = 'a';
        int tmp = 0;
        f(i, 0, 26)
        {
            int l = 0;
            int r = n - 1;
            tmp = 0;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (s[l] == ch)
                    {
                        l++;
                        tmp++;
                    }
                    else if (s[r] == ch)
                    {
                        r--;
                        tmp++;
                    }
                    else
                    {
                        tmp = INT_MAX;
                        break;
                    }
                }
            }
            // cout << tmp << ' ' << mn << '\n';
            // if(tmp != 0)
            if (tmp != INT_MAX)
                mn = min(tmp, mn);
            tmp = INT_MAX;

            ch++;
        }
        if (mn == INT_MAX)
            std::cout << -1;
        else
            std::cout << mn;
        std::nl;
    }
    return 0;
}