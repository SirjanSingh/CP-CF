#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int>a;
    multiset<int>ms;
    map<int,int>mp;
    while (t--)
    {
        int n;
        cin >> n;
        a.push_back(n);
        ms.insert(n);
        mp[n]++;
    }

    for(auto i :ms)cout<<i<<" ";
    cout<<'\n'<<'\n';
    for(auto i :mp)cout<<i.first<< " " <<i.second<<'\n';


    return 0;
}