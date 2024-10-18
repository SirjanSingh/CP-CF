#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    f(i, 0, n) cin >> a[i];
    f(i, 0, m) cin >> b[i];

    sort(all(a));
    
    int tempans = 0;
    f(i,0,n-1) tempans = __gcd(tempans , a[i+1] - a[i]);
    f(i, 0, m) cout << __gcd(tempans , a[0] + b[i]) << ' ';
    return 0;
}