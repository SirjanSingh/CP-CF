#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    int ans = 0;
    int carry = 0;
    f(i, 0, n)
    {
        int p = a[i] + carry;
        if (p >= k)
        {
            ans += (p) / k;
            carry = (p) % k;
        }
        else
        {
            if (p > 0)
            {
                if (carry > 0)
                {
                    ans++;
                    carry = 0;
                }
                else
                {
                    carry = a[i];
                }
            }
        }
    }
    ans += ceil((double)carry / (double)k);
    cout << ans << '\n';
}

