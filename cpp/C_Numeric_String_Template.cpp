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
        f(i, 0, n)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                no;
            }
            else
            {
                bool flag = true;
                map<int, char> m2;
                map<char, int> m1;

                f(i, 0, a.size())
                {
                    int x = a[i];
                    char y = s[i];

                    if (m2.count(x) && m2[x] != y)
                    {
                        flag = false;
                        break;
                    }
                    if (m1.count(y) && m1[y] != x)
                    {
                        flag = false;
                        break;
                    }

                    m1[y] = x;
                    m2[x] = y;
                }
                if (!flag)
                    no;
                else
                    yes;
            }
        }
    }

    return 0;
}
