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
        int n;
        cin >> n;

        vector<int> a(n), b(n + 1, 0);
        int sum = 0;
        mapii mp;
        int lr = -1;

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            mp[temp]++;
            if (mp[temp] > 1 && temp > lr)
                b[i + 1] = temp, lr = temp;
            else
                b[i + 1] = b[i];
            sum += temp;
        }
        int bsum = 0;
        for (auto i : b)
        {
            bsum+=i;
            cout << i << ' ';
        }
        nl;
        int psum = sum;
        f(i, 1, n + 1)
        {
            bsum -= b[i];
            psum = psum + (bsum);
            cout << psum << ' ' << bsum << ' ' << b[i] << '\n';
        }
        cout << psum << '\n';
        nl;
    }
    return 0;
}