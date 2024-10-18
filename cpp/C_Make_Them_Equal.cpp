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
        char x;
        cin >> n;
        cin >> x;

        string s;
        cin >> s;
        vector<int> need;
        mapii nd;

        f(i, 0, n)
        {
            if (s[i] != x)
            {
                need.push_back(i + 1);
                nd[i + 1]++;
            }
        }
        // cout << need.size();
        // nl;
        int flg = 0;
        if (need.size() != 0)
        {
            f(i, 2, n + 1)
            {
                int c = 0;
                f(j, i, n + 1)
                {
                    if (s[j - 1] != x)
                        c++;
                    j += i-1;
                }
                if (c == 0)
                {
                    cout << 1 << '\n'
                         << i;
                    nl;
                    flg = 1;
                    break;
                }
            }
            if (!flg)
            {
                cout << 2 << '\n'
                     << n << ' ' << n - 1;
                nl;
            }
        }
        else
            cout << 0 << '\n';
    }
    return 0;
}