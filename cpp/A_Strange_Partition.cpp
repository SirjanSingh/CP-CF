#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

int ceil(int n, int x)
{
    return (n + x - 1) / x;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        int mx = 0,sum=0;
        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            a[i] = temp; // % x;
            mx += ceil(temp, x);
            sum+=a[i];
        }
        f(i, 0, n)
        {
            // cout << a[i] << ' ';
        }
        int l = 0, r = n - 1;
        int mn = 0;
        while (l < r)
        {
            if (ceil(a[l]) + ceil(a[l + 1]) < ceil(a[l] + a[l + 1]))
            {
                mn = ceil(a[l] + a[l + 1]) - (ceil(a[l]) + ceil(a[l + 1]));
                l++;
            }
            if (ceil(a[r]) + ceil(a[r + 1]) < ceil(a[r] + a[r + 1]))
            {
                mn = ceil(a[r] + a[r + 1]) - (ceil(a[r]) + ceil(a[r + 1]));
                r--;
            }
            if (l == 0 && r == n - 1)
                break;
            // cout << l << ' ' << r << '\n'; 
        }
        // cout<< '\n';
        
        cout << ceil(sum,x) << ' ' << mx << '\n';

        // cout<< '\n';
    }
    return 0;
}