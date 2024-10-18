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

    int n, k, x;
    cin >> n >> k >> x;

    vector<int> b, d;
    vector<pair<int, pair<int, int>>> c;
    set<int> a;
    f(i, 0, n)
    {
        int temp;
        cin >> temp;
        //    a.insert(temp);
        b.push_back(temp);
    }
    sort(all(b));
    // f(i, 0, b.size()) cout << b[i] << ' ';
    // nl;
    int cpy = k;
    int ans = 1;
    f(i, 1, n)
    {
        if (b[i] - b[i - 1] > x)
        {
            // int ex = (b[i] + b[i - 1]) / 2;
            int ex1 = b[i] - b[i - 1];
            c.push_back({ex1, {b[i], b[i - 1]}});
            d.push_back((ex1 + x - 1) / x - 1);
            // cout << ex << ' ';
            // k--;
            ans++;
        }
    }
    // ans++;
    sort(all(c));
    sort(all(d));
    // cout << ans << '\n';
    // f(i, 0, k) if(c[i].x <= 2*x) b.push_back((c[i].y.x + c[i].y.y) / 2);
    f(i, 0, d.size()) if (d[i] <= k) k -= d[i], ans--;
    else
    {

        break;
    }
    sort(all(b));

    // f(i, 0, b.size()) cout << b[i] << ' ';
    // nl;
    // nl;
    // f(i, 0, d.size()) cout << d[i] << ' ';
    // nl;
    // nl;
   
        // f(i, 1, b.size())
        // {
        //     if (b[i] - b[i - 1] > x && b[i] - b[i-1 ] <= 2*x)
        //     {
        //         ans++;
        //     }
        // }
        cout << ans;
    
    nl;

    return 0;
}