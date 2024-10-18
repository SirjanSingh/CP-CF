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
    int m, z;
    cin >> m >> z;

    int a[6][3] = {
        {0, 1, 2},
        {1, 0, 2},
        {1, 2, 0},
        {2, 1, 0},
        {2, 0, 1},
        {0, 2, 1}};

    cout << a[m % 6][z] << '\n';
    return 0;
}