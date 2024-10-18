#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

typedef struct ans
{
    int p;
    int q;
    int r;

    bool operator<(const ans &other) const
    {
        if (p != other.p)
            return p < other.p;
        if (q != other.q)
            return q < other.q;
        return r < other.r;
    }

} ans;

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
        vector<ans> x;
        f(i, 0, n)
        {
            cin >> a[i];
        }
        int bp = 0;
        f(i, 0, n - 2)
        {
            int t = 0;
            ans t1 = {-1, a[i + 1], a[i + 2]};
            ans t2 = {a[i], -1, a[i + 2]};
            ans t3 = {a[i], a[i + 1], -1};
            ans t4 = {a[i], a[i + 1], a[i + 2]};
            x.push_back(t1);
            x.push_back(t2);
            x.push_back(t3);
            x.push_back(t4);
            // if(a[i] != a[i+1]) t++;
            // if(a[i+1] != a[i+2]) t++;
            // if(a[i+2] != a[i+3]) t++;
            // if(t==1)    bp++;
        }
        // cout << bp << '\n';
        map<ans, int> mp;
        for (auto i : x)
        {
            mp[i]++;
            // cout << i.p << ' ' << i.q << ' ' << i.r << '\n';
        }
        ans temp;
        int tot = 0;
        int flag = false;
        f(i, 0, n - 2)
        {
            int a1 = a[i];
            int a2 = a[i + 1];
            int a3 = a[i + 2];
            int tempo = mp[{a1, a2, a3}];
            tot += mp[{a1, a2, -1}] - tempo;
            tot += mp[{a1, -1, a3}] - tempo;
            tot += mp[{-1, a2, a3}] - tempo;
        }
        cout << tot/2 << '\n';
        // for (auto i : mp)
        // {
        //     int t1 = i.first.p;
        //     int t2 = i.first.q;
        //     int t3 = i.first.r;

        //     if (flag)
        //     {
        //         // if()
        //     }
        //     cout << i.first.p << ' ' << i.first.q << ' ' << i.first.r << "   " << i.second << '\n';
        //     temp = {i.first.p,
        //             i.first.q,
        //             i.first.r};
        //     flag = true;
        // }
        // cout << '\n';
    }
    return 0;
}