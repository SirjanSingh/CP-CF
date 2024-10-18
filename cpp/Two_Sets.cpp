#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
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
    cin >> t;
    int sm = t * (t + 1) / 2;
    if (sm % 2)
        no;
    else
    {
        yes;
        set<int,greater<int>> s1, s2, s;
        f(i, 1, t + 1) s.insert(i);
        sm/=2;
        for (auto i : s)
            if (i <= sm )
                s1.insert(i),sm-=i;
            else
                s2.insert(i);
        cout << s1.size();
        nl;
        for (auto i : s1)
            cout << i << ' ';
        nl;
        cout << s2.size();
        nl;
        for (auto i : s2)
            cout << i << ' ';
        nl;
    }
    return 0;
}