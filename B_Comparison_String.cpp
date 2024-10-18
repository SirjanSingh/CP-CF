#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

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
        map<int, int> mp;
        vector<int> a;
        int cur = 0, cost = 0;
        char l = s[0];
        int mx = INT_MIN;
        f(i,0,n-1)
        {
            if (s[i] == s[i+1])
            {
                cur++;
            }
            else
            {
                mx = max(cur, mx);
                cur = 0;
            }
        }

        mx = max(cur, mx);
        cout << mx +2 << '\n';
    }
    return 0;
}