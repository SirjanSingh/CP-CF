#include <bits/stdc++.h>

using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    return (a * b) / __gcd(a, b);
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
        set<int> factors;
        int ans = 1;
        for (int i = 2; i * i <= n; i++)  if (n % i == 0){  ans = n / i; break;}
        // {
            
                // cout << n << ' ' << i << ' ' << ans << '\n';
                // if ((n - i) % i == 0){
                    
                // }
            // }
            // factors.insert(i);
        // }
        cout << ans << ' ' << n - ans << '\n';
        // cout << '\n';
        // pair<int, int> ans;
        // int curlcm, lccm = INT_MAX;
        // for (auto i : factors)
        // {
        //     curlcm = lcm(i, n - i);
        //     // cout << curlcm << ' ' << lccm << '\n';
        //     if (curlcm < lccm)
        //     {
        //         lccm = curlcm;
        //         ans = {i, n - i};
        //         curlcm = 0;
        //     }
        //     // find min lcm by brute force and update the pair to find the least pair with least lcm
        // }
        // // cout << '\n';
        // cout << ans.first << " " << ans.second << '\n';
        // cout<< '\n';
    }
    return 0;
}