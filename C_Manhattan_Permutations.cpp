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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        f(i, 0, n) a[i] = i + 1;
        if (k % 2 == 0)
        {
            if (n % 2 == 0)
            {
                if (k <= 2 * (n / 2) * (n / 2))
                {
                    yes;
                    int l = 0, r = n - 1;
                    while (l < r && k > 0)
                    {
                        if (k >= 2 * abs(a[l] - a[r]))
                        {
                            k -= 2 * abs(a[l] - a[r]);
                            swap(a[l], a[r]);
                            l++;
                            r--;
                        }
                        else
                            l++;
                    }
                    for (auto i : a)
                        cout << i << ' ';
                    nl;
                }
                else
                    no;
            }
            else
            {
                if (k <= (2 * (n / 2) * (n / 2) + n))
                {
                    yes;
                    int l = 0, r = n - 1;
                    while (l < r && k > 0)
                    {
                        if (k >= 2 * abs(a[l] - a[r]))
                        {
                            k -= 2 * abs(a[l] - a[r]);
                            swap(a[l], a[r]);
                            l++;
                            r--;
                        }
                        else
                            l++;
                    }
                    for (auto i : a)
                        cout << i << ' ';
                    nl;
                }
                else
                    no;
            }
        }
        else
            no;
        // f(i, 0, n)
        // {
        //     cin >> a[i];
        //     int temp = a[i];

        // }
    }
    return 0;
}