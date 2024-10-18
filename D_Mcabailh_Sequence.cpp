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
    int x, y, m, a0;
    cin >> x >> y >> m >> a0;

    vector<int> arr(m, -69);
    int ai = a0;
    int i = 0;

    while (arr[ai] == -69)
    {
        arr[ai] = i;
        ai = (x * ai + y) % m;
        ++i;
    }
    cout << (i - arr[ai]) << endl;

    return 0;
}
