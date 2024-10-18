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
        int n;
        cin >> n;

        vector<int> a(n);
        int ans = 0;
        int c0 = 0;
        int fnz = -1, lnz = -1;
        f(i, 0, n)
        {
            cin >> a[i];
            if (a[i] == 0)
                c0++;
            else
            {
                if (fnz == -1)
                {
                    fnz = i;
                }
                lnz = i;
            }
        }
        bool con = true;
        if (c0 == n){
            cout << 0 << '\n';
            continue;
        }
        else
        {
            f(i, fnz, lnz + 1)
            {
                if(a[i] == 0) {
                con = false;
                break;
            }
            }
            if(con) cout << 1 << '\n';
            else cout << 2 << '\n';
            continue;
        }
        
        bool flag = false;
        f(i, 0, n - 1)
        {
            if (!flag)
            {
                if (a[i] == 0 && a[i + 1] != 0)
                {
                    ans += 1;
                    flag = true;
                }
            }
            else
            {
                if (a[i] == 0 && a[i + 1] != 0)
                {
                    ans++;
                    break;
                }
            }
        }
        int nz = 0;
        if (n == 1 && a[0] != 0)
            ans++;
        else if (c0 == 0)
            ans++;
        if (!ans)
        {
            f(i, 0, n)
            {
                if (a[i] != 0 && a[i + 1] != 0)
                {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}