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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        f(i, 0, n) a[i] = i + 1;
        int mn = n - 1;
        int mx = n * (n - 1) / 2;
        if (k < mn || k > mx)
            cout << "-1\n";
        else
        {
            // 1 2 3 4 5 - 4
            //
            // 1 3 2 4 5 - 6
            // 1 3 4 2 5 - 8
            // 1 3 4 5 2 - 9
            // 1 3 5 4 2 - 10
            // 1 2 3 4 - 3
            // 1 3 2 4 - 4
            // 1 3 4 2 - 6
            // 1 2 3 4 5 6 - 5
            // 1 3 2 4 5 6 - 8
            // 1 3 4 2 5 6 - 9
            // 1 3 4 5 2 6 - 11
            // 1 3 4 5 6 2 - 12
            // 1 3 5 6 4 2 - 15
            // 1 3 5 4 6 2 -
            mapii mp;
            while(next_permutation(all(a)))
            {
                    int ans = 0;
                f(i, 0, n-1)
                {
                    int x = 0, y = 0;
                    f(j, 0, n)
                    {
                        if (a[j] == i + 1)
                        {
                            x = j + 1;
                        }
                        if (a[j] == i + 2)
                            y = j + 1;
                    }
                    ans += (abs(x - y));
                    // cout <<x << ' ' << y ;
                    // cout << " - " << ans << '\n';
                    // nl;
                }
                mp[ans]++;
                    if(ans >= 15){
                    // nl;nl;
                    // f(l, 0, n) cout << a[l] << ' ';
                    // cout << " - " << ans;
                    // nl;nl;
                    }
                
            }
            for(auto &i : mp) cout << i.x << ' ' << i.y << '\n';
            nl;
        }
    }
    return 0;
}