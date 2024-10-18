#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> a;
    a.push_back(2);
    a.push_back(5);
    f(i, 2, 100000)
    {
        a.push_back(abs(a[i - 1] * 4 - a[i - 2] * 3) % 107);
    }
    vector<int> sum;
    sum.push_back(0);
    int s = 0;
    for (auto i : a)
    {
        s += i;
        sum.push_back(s);
    }
    // for( int i :sum)  cout << i << '\n';

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << sum[x+y  -1] - sum[x -1] << '\n';
    }
    return 0;
}