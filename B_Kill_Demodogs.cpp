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

#define p 1000000007
int ans(int x)
{
    return (2022%p * x%p)%p;
}
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

        int res = 0;
        int x = 1, y = 1;

        // while(x++<=n)
        // {
        //     res += x*y;
        // }
        // while(y++<=n)   res += x*y;
        x=n-1;
        // int fin = ((((((x%p)*((x+1)%p))%p)*((x+2)%p))%p)/3)%p ;
        // int res1 = ( (((((n%p)*((n+1)%p))%p)*((2*n+1)%p))%p)/6)%p;
        // res = fin + res1;
        res = (337 * ((((n*(n+1))%p)*(4*n-1))%p))%p;
        // cout <<fin << ' ' << res1;
        // nl;
        cout << res;
        nl;
    }
    return 0;
}