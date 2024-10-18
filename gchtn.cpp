#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a;

    f(i, 0, m)
    {
        int t1, t2;
        cin >> t1 >> t2;
        a.push_back({t1, t2});
    }
    sort(a.begin(), a.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return (a.first < b.first) || (a.first == b.first && a.second < b.second); });
    for (auto i : a)
        cout << i.first << ' ' << i.second << '\n';
    return 0;
}