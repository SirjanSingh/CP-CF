#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
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
        int a, b, c;
        cin >> a >> b >> c;
        int x[3] = {a, b, c};
        int k = 5;
        sort(x, x + 3);

        while (k--)
        {
            x[0]++;
            sort(x, x + 3);
        }
        cout << x[0] * x[1] * x[2];
        nl;
    }
    return 0;
}