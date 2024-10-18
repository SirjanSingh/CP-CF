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
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        f(i, 0, n)
        {
            f(j, 0, m)
                    cin >>
                a[i][j];
        }
        // f(i, 0, n)
        // {
        if (n != 1)
        {
            vector<int> tmp = a.back();
            a.pop_back();
            a.insert(a.begin(), tmp);
        }
        else if (n == 1 && m != 1)
        {
            int tmp = a[0].back();
            a[0].pop_back();
            a[0].insert(a[0].begin(), tmp);
        }
        else if (n == 1 && m == 1)
        {
            cout << "-1\n";
            continue;
        }
        // }
        f(i, 0, n)
        {
            f(j, 0, m)
                    cout
                << a[i][j] << ' ';
            nl;
        }
        // nl;
    }
    return 0;
}