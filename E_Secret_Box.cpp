#include <bits/stdc++.h>
using namespace std;


#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

typedef struct dim
{
    int a;
    int b;
    int c;
} dim;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, k;
        cin >> x >> y >> z >> k;

        int ans = 0;
        for (int l = 1; l * l * l <= k; ++l)
        {
            if (k % l != 0)
                continue;
            int rv = k / l;

            for (int w = 1; w * w <= rv; ++w)
            {
                int h = rv / w;
                if (rv % w != 0)
                    continue;
                // cout << rv << ' ';
                struct dim d[6];

                d[0] = {l, w, h};
                d[1] = {l, h, w};
                d[2] = {w, l, h};
                d[3] = {w, h, l};
                d[4] = {h, l, w};
                d[5] = {h, w, l};
                // for(auto i : d) cout << i.a << ' ' << i.b << ' ' << i.c << '\n';
                // nl;
                for (int i = 0; i < 6; ++i)
                {
                    if (d[i].a < x + 1 && d[i].b <= y && d[i].c <= z)
                    {
                        int p = (x - d[i].a + 1) * (y - d[i].b + 1) * (z - d[i].c + 1);
                        // cout << (x - d[i].a + 1) << ' ' << (y - d[i].b + 1) << ' '  << (z - d[i].c + 1) << '\n';
                        // cout << ans; nl;
                        ans = max(ans, p);
                    }
                }
                // cout << "imdone\n";
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
