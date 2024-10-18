#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int t = n;
    map<int, int> mp;
    vector<int>a;
    while (t--)
    {
        int n;
        cin >> n;
        mp[n]++;
        a.push_back(n);
    }

    return 0;
}