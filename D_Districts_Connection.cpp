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
        mapii mp;
        map<int, set<int>> st;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            mp[temp]++;
            st[temp].insert(i + 1);
        }
        if (mp.size() > 1)
        {
            yes;
            auto it = st.begin();
            auto tgt = it->second;
            int f = *tgt.begin();
            it++;
            int s = *(it->second).begin();
            for (; it != st.end(); it++)
            {
                for (auto j : it->second)
                    cout << f << ' ' << j << '\n';
                // nl;
            }
            for (auto i : tgt)
            {
                if (i != f)
                    cout << s << ' ' << i << '\n';
            }

            // nl;
        }
        else
        {
            no;
        }
    }
    return 0;
}