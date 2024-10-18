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
        int l, r;
        cin >> l >> r;

        if (l % 2 == 0)
            l++;
        if (r % 2 == 0)
            r--;
        int ans = 0;
        // f(i,l,r+1){
        //     if(i < r+1 && i +1 < r+1 && i+2 < r+1){
        //         ans ++;
        //         i+=2;
        //     }
        // }
        int count = 0;
        for (int i = l; i + 2 <= r; i += 4)
        {
            count++;
        }
        cout << count << '\n';
    }
    return 0;
}