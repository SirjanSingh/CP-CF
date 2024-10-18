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
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b;

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        int req = 0;
        int pres = 0;
        // int j = 1;
        mapii st;
        set<int>mp;
        f(j, 0, n-1) if (a[j+1] < a[j])
        {
            // req += a[i] - a[i+1] + 1;
            // st[a[i] - a[i + 1]]++;
            b.push_back(a[j] - a[j+1]);
            req += a[j] - a[j+1];

            pres++;
            // cout << a[i] << ' '<<  a[i + 1] << '\n';
            a[j+1] = a[j];
            // j++;
        }
        // 10 8 5 0
        // 2 3 5 = 2*3 + 1*2 + 2 *1
        // 2*2 + 
        int des = 0;
        if (pres == 0)
            cout << 0;
        else
        {
            int cur = 0;
            for (auto i : st)
                des += i.y;

            // for (auto i : mp)
            // {
            //     b.push_back(i);
            // }
            sort(all(b));
            int l = b.size();
            req+=b[l-1];
            for (auto i : b)
                // cout << i << ' ';
            // nl;
            int mn = 0;
            for(int i = l-1;i>0;i--)
            {
                b[i] = b[i]-b[i-1];
            }
            for (auto i : b)
                // cout << i << ' ';
            // nl;

            f(i, 0, b.size())
            {
                // req += b[i] * l + 1;
                l--;
                // req +=( b[i]-cur)*l + 1;
                // cout << req << ';' << cur << ' ' << l << '\n';
                // l--;
                // cur = b[i];
            }

            cout << req;
        }
        // nl;
        nl;
    }
    return 0;
}