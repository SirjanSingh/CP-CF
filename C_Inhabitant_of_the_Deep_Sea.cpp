#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"
#define all(vector) vector.begin(), vector.end()

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

        f(i, 0, n) cin >> a[i];

        int l = 0, r = n - 1;
        int count = 0;
        int mn;
        int temp = k/2;
        while (1)
        {
            
            mn = min(a[l], a[r]);
            if (a[l] > temp && temp%2!=0)
            {
                k-=2*a[l];
                l++;
                count++;
            }
            else if (a[r] > temp && temp%2==0)
            {
                k-=2*a[l];
                r--;
                count++;
            }
            
            temp = k/2;
        }
    }
    return 0;
}