#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

int mex(const set<int> &s)
{
    int mex = 0;
    while (s.find(mex) != s.end())
    {
        mex++;
    }
    return mex;
}

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
        vector<int> a(n);
        f(i, 0, n) cin >> a[i];
        // int i = 0;
        // // while(n--){int temp;cin>>temp;  cout<<i++<<" ";}
        // // cout<<'\n';
        // vector<int> p;
        // set<int> s;
        // for (int i = 0; i < n; ++i)
        // {
        //     int mex_val = mex(s);
        //     p.push_back(mex_val);
        //     s.insert(mex_val);
        // }

        ll p[n];
        ll mx = n;
        int i;
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                p[i] = mx - a[i];
                mx = p[i];
            }
            else
            {
                p[i] = (mx + abs(a[i]));
            }
        }
        f(i, 0, n) cout << p[i] << " ";
        cout << '\n';
    }
    return 0;
}
