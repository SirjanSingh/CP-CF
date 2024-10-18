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

int log3(int a)
{
    int b = 3;
    int ans = 0;
    while (a > 0)
    {
        a /= 3;
        ans++;
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int p[200010] = {0};
    int ans = 0;
    f(i, 1, 200005)
    {
        ans = log3(i);
        // cout << ans << '\n';
        p[i] = p[i - 1] + ans;
        // cout << min1 << ' ' << i << '\n';
        // ans += min1;
        // cout << p[i] - p[i-1] << '\n';
    }

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        // m++;
        // n++;
        int extra =  log3(n );
        cout << p[m] - p[n-1] + extra << endl;
        // vector<int> a(n);

        // int min1 = log3(n) + 1;
        // int up = pow(3, min1);
        // cout << up << ' ';
        // f(i, n + 1, m + 1)
        // {
        // ans = 2*(log3(n)+1);
        //     // ans += (log2(i) / log2(3))+1;
        //     if (i == up)
        //     {
        //         up *= 3;
        //         min1++;
        //     }
        //     cout << min1 << ' ' << i << '\n';
        //     ans += min1;
        // }
        // while (m>n)
        // {
        //     int q = pow(3, log3(m));
        //     int tmp = m - max(q, n + 1);
        //     ans += ((log3(m) + 1) * (tmp + 1));
        //     m = q - 1;
        // }
        // cout <<log3(20000);
        // cout << ans << '\n';
        // nl;
    }
    return 0;
}