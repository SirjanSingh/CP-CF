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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        f(i, 0, n)
        {
            a[i] = 1;
        }
        // if(n>x){
        f(i, 0, y)
        {
            if(i%2 == (y%2)%2 )
            a[i] = -1;
        }
        f(i,x,n){
            if(i%2 == (x%2))
            a[i] = -1;
        }
        // }
        for (auto i : a)
            cout << i << ' ';
        nl;
    }
    return 0;
}