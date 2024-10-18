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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    string s;
    cin >> s;
    int n = s.length();
    int l = 0;
    int r = n - 1;
    vector<int> a, b;
    int pres = 0;

    while (l < r)
    {

        if (s[l] == '(' && s[r] == ')')
        {
            a.push_back(l + 1);
            b.push_back(r + 1);
            // pres++;
            l++;
            r--;
        }
        // if ()
        // {
        //     // if(pres)
        //     // pres--;
        // }
        if (s[l] != '(')
            l++;
        if (s[r] != ')')
            r--;
    }
    if (a.size() == 0 || b.size() == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1 << '\n';
        cout << min(a.size(), b.size()) * 2 << '\n';
        int mn = min(a.size(), b.size());
        f(i, 0, mn) cout << a[i] << ' ';
        reverse(all(b));
        f(i, 0, mn) cout << b[i] << ' ';
    }
    // for(auto i : a) cout << i << ' ' ;
    // nl;
    // for(auto i : b) cout << i << ' ' ;
    // nl;
    return 0;
}