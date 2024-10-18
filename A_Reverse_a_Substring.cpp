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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first = 2;
    int ans = 0;
    f(i, 1, n)
    {
        if (s[i] < s[i - 1])
        {
            ans = i;
            break;
        }
    }
    if (ans == 0)
        no;
    else
    {
        yes;
        cout << ans << ' ' << ans + 1 << '\n';
    }
    return 0;
}