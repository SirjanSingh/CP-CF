#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c1 = 0;
        int l = s.length();
        for (auto i : s)
            if (i == '1')
                c1++;
        int c0 = l - c1;
        // cout << c0  << ' ' << c1 << ' ';
        if (l == 1)
            cout << "YES\n";
        else  if (l == 2 && (c1 == 1 && c0 == 1))
        {
            cout << "YES\n";
        }
        // else if (c0 % 2 * c1 % 2 == 0 && c0 % 2 + c1 % 2 == 1)
        // {
        //     cout << "YES\n";
        // }
        else
            cout << "NO\n";
    }
    return 0;
}