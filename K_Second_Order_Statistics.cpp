#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    set<int> s;
    while (t--)
    {
        int n;
        cin >> n;
        s.insert(n);
    }
    if(s.size() == 1 ) {cout<<"NO\n"; return 0;}
    auto it = next(s.begin(), 1);
    cout << *it << '\n';
    return 0;
}