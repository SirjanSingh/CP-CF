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
#define pii pair<int, int>

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

        vector<int> a(n), b(n);

        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
        }
        b = a;
        sort(all(b));
        // for(auto i : b)cout << i << ' '  ;
        // nl;

        if (a[n-2] > a[n-1])
            cout << -1 << '\n';
        else
        {
            // if (n == 3)
            // {
            //     if (a[1] > a[2])
            //         cout << -1 << '\n';
            //     else
            //         cout << 1 << '\n'
            //              << "1 2 3\n";
            // }
            // else
            // {
            if ( a[n - 1] >= 0)
            {
                int ans = 0;
                cout << n - 2 << '\n';
                f(i, 0, n - 2)
                {
                    cout << i + 1 << ' ' << n - 1 << ' ' << n << '\n';
                }
            }
            else if(a[n-1] < 0){
                if(b==a) cout << 0 ;
                else cout << -1;
                nl;
            }
            else
            {
                cout << -1 << '\n';
            }
            // }
        }
    }
    return 0;
}