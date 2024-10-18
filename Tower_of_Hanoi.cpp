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
void prin(int n, int a, int b, int c)
{
    if (n == 1)
    {
        cout << a << ' ' << c << '\n';
        return;
    }
    else
    {
        prin(n - 1, a,c,b);
        cout << a << ' ' << c << '\n';
        prin(n - 1, b,a,c);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << '\n';
    prin(n, 1, 2, 3);
    return 0;
}