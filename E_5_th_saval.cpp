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
        string tmp;
        tmp = s;
        sort(all(tmp));
        int l = 0;
        string a = "";
        string b = "";
        string ans = "";
        f(i, 0, n)
        {
            if (s[i] == tmp[l])
            {
                a.push_back(tmp[l++]);
                ans.push_back('1');
            }
            else
            {
                b.push_back(s[i]);
                ans.push_back('2');
            }
        }

        if (a + b == tmp)
        {
            cout << ans;
            // yes;
        }
        else
        {
            cout << '-';
            // no;
        }
            nl;
    }
    return 0;
}