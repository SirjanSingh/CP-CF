#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    map<int, int> mp;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 1 && mp[n - 1] > mp[n])
        {
            mp[n]++;
            // for (auto i : mp)
            // {
            //     cout << i.first << " " << i.second << '\n';
            // }
            // cout<<'\n';
        }
        if (n == 1)
            mp[n]++;
    }

    int min = INT_MAX;
    for (auto i : mp)
    {
        if (i.second < min)
            min = i.second;
        // cout << i.first << " " << i.second << '\n';
    }

    cout << min;
    return 0;
}