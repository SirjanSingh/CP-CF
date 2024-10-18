#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

double dist(int x, int y)
{
    return (sqrt(x * x + y * y));
}
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

        // vector<int> a(n);
        int ans = 0;
        if (n == 1)
            cout << 8 << '\n';
        else if (n == 2)
            cout << 16 << '\n';
        else
        {
            int h = n;
            f(i, 0, n + 1)
            {
                // f(k, 0, n + 1)
                // {
                    while (dist(i, h) >= (n + 1))
                    {
                        h--;
                        // cout << n << ',' << i << '\n';
                    }
                //     else
                //         break;
                // }
                int temp = h;
                // f(k, 0, n + 1)
                // {
                    while (dist(i,temp) >= n && temp > 0)
                    {
                        temp--;
                        ans++;
                        // cout << n << ',' << i << '\n';
                    }
                //     else
                //         break;
                //     if(temp == 0)   break;
                // }
            }
            cout << ans * 4<< '\n';
        }
    }
    return 0;
}