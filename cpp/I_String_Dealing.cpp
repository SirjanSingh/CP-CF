#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

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
        int dist1;
        bool flag = false;
        for (char i = 'a'; i <= 'z'; i++)
        {
            dist1 = 0;
            for (auto j : s)
            {
                dist1 += j - i;
            }
            // cout << dist1 << " ";
            if (abs(dist1) % 26 == 0)
            {
                flag = true;
                break;
            }
        }
        // cout << '\n';
        if (flag)
            yes;
        else
            no;
        cout << '\n';
    }
    return 0;
}