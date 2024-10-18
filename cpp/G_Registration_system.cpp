#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int t = n;
    unordered_map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] > 1)
        {
            cout << s << mp[s] - 1 << '\n';
        }
        else
            cout << "OK\n";
    }
    return 0;
}