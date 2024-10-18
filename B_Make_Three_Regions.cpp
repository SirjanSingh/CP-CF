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

bool check(string a, string b, int i)
{
    i--;
    if (a[i + 1] == '.' && b[i + 1] == '.')
    {
        if ((a[i + 2] == '.' && a[i] == '.' && b[i] == 'x' && b[i + 2] == 'x') || (b[i + 2] == '.' && b[i] == '.' && a[i] == 'x' && a[i + 2] == 'x'))
            return true;
        else
            return false;
    }
    else
        return false;
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

        string a, b;
        cin >> a >> b;

        if (n < 3)
            cout << 0 << '\n';
        else
        {
            int x = 0;
            f(i, 0, n - 1)
            {
                if (a[i + 1] == '.' && b[i + 1] == '.')
                {
                    if ((a[i + 2] == '.' && a[i] == '.' && b[i] == 'x' && b[i + 2] == 'x') || (b[i + 2] == '.' && b[i] == '.' && a[i] == 'x' && a[i + 2] == 'x'))
                        x++;
                }
                
            }
            cout << x << '\n';
        }
    }
    return 0;
}