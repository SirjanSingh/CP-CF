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

int profit(int k, int a, int b, int n)
{
    return ((k * (2 * b - k + 1)) / 2) + (n - k) * a;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (b <= a)
            cout << n * a << "\n";
        else
        {
            int diff = b - a;
            int prft = 0;
            int k =min(n,b);
            // int ans = 0;
            // // f(i,0,k){
            if (diff + 1 > n){
                prft = max(prft, profit(k, a, b, n));
                    cout << prft << ' ' << '\n';
            }
            else
            {
                //     int temp = (b + a)*(b-a+1)/2;

                //     prft=(max(prft,temp + (n-(b-a+1) * n)));
                // }
                // }
                // cout << prft << '\n';
                // int ans = (2 * b + (diff - 1)) * (diff) / 2;
                int lstterm = b - diff + 1;
                int ans = ((b + a)) * (b - a + 1) / 2;
                int ad = 0;
                // if (n > b - a + 1)
                    ad = (n - (diff+1) ) * a;
                // cout << ans << ' ' << ad << ' ';
                cout << ans + ad << '\n';
            }
        }
    }
    return 0;
}