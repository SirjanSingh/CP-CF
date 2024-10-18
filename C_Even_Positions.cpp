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

        vector<int> a;
        int ans = 0;
        f(i, 0, n)
        {
            if (i % 2 != 0)
            {
                if (s[i] == '(')
                    a.push_back(i);
                else
                {
                    ans += i - a.back();
                    a.pop_back();
                }
            }
            else
            {
                if (a.empty())
                    a.push_back(i);
                else
                {
                    ans += i - a.back();
                    a.pop_back();
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}