#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n = 4;

        vector<int> a(n);

        f(i, 0, n)
            cin >> a[i];
        
        int ans = 0;
        if(a[0] == 0){   cout << 1 << '\n';

        continue;}
        ans += a[0] + min(a[0],a[3])+  ((a[3] - a[0] > 0)? 1:0);
        ans += ((min(a[1], a[2]) == 0 && max(a[1],a[2]) != 0)?(min(a[0],max(a[2],a[1]))) + ((max(a[1],a[2]) - a[0] > 0)? 1:0) :(min(a[1],a[2]) * 2));
        cout << ans << '\n';

    }
    return 0;
}