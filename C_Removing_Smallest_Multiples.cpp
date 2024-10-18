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
        int cost = 0;
        vector<int> v;
        f(i, 0, n) if (s[i] == '0') v.push_back(i + 1);
        int k = 0;
        vector<int>ct(n+1);
        fr(i, n,0-1)
        {
            // if (s[i] == '0')
            // {
            // cost += i + 1;
            for (int j = i; j < n; j += (i + 1))
            {
                if (s[j] == '0')
                {
                    // s[j] = '1';
                    cost += (i + 1);
                    ct[j] = i+1;
                }
                else
                    break;
                // cout << cost << ' ' << j;
                // nl;
                // }
            }
            // cout << s << ' ' << cost;
            // nl;
        }
        cost = 0;
        for(auto i : ct) cost+=i;
        cout << cost << "\n";
        nl;
        nl;
        nl;
    }
    return 0;
}