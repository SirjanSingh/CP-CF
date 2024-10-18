#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int t = n;
    vector<int> a, b;
    while (t--)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    t = m;
    int diffKind = 0;
    unordered_map<string, int> mp;
    while (t--)
    {
        string temp;
        cin >> temp;
        mp[temp]++;
    }

    cout << '\n';
    for (auto i : mp)
    {
        b.push_back(i.second);
    } // now b has all the frequencies

    sort(b.begin(), b.end(), greater<int>());
    sort(a.begin(), a.end());
    double sum = 0;
    for (int i = 0; i < b.size(); i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum << " ";
    sum = 0;
    for (int i = 0; i < b.size(); i++)
    {
        sum += a[--n] * b[i];
    }
    cout << sum;
    return 0;
}