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
        int turn = 0;
        // 0 for alice 1 for bob
        int bob = 0, alice = 0;
        if (n % 2 == 1)
        {
        }
        mapii in;
        // cout << s << '\n';
        f(i, 0, n) if (s[i] == '0') in[i + 1]++;
        int c0 = in.size();
        if (c0 % 2 == 0 || c0 == 1)
            cout << "BOB";
        else
        {
            // if (s[(n + 1) / 2] == '0' && n%2==1)
            // {
            //     // turn = 1;
            //     alice++;
            //     cout << "BOB";
            //     s[(n + 1) / 2] = '1';
            
            // }else{
                cout << "ALICE";
            // }
        }
        // for (auto i : in)
        //     cout << i.x << '-' << i.y << '\n';
        // nl;
        nl;
    }
    return 0;
}