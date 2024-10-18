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

int check(vector<int> a)
{
    int l = 0, r = a.size() - 1;
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            return 0;
        }
        else
            l++, r--;
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        if (check(a))
            yes;
        else
        {
            int l = 0, r = n - 1;
            while (l <= r)
            {
                if (a[l] != a[r])
                {
                    break;
                }
                else
                    l++, r--;
            }
            vector<int>b,c;
            for(auto i : a) if(i != a[l]) b.push_back(i);
            for(auto i : a) if(i != a[r]) c.push_back(i);
            if(check(b) || check(c)) yes;
            else no;

        }
    }
    return 0;
}