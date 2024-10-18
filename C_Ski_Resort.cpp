#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

unsigned long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    if (r > n / 2)
        r = n - r;

    unsigned long long result = 1;
    for (int i = 0; i < r; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n, k, q;
        cin >> n >> k >> q;
        vector<int> a(n);
        f(i, 0, n) cin >> a[i];
        int consi = 0;
        vector<int> posi;
        f(i, 0, n)
        {
            if (a[i] <= q)
            {
                consi++;
                // cout << a[i] << " " << k;
            }
            if (a[i] > q) // && consi >= k)
            {
                if (consi >= k)
                    posi.push_back(consi);
                consi = 0;
            }
        }
        if (consi != 0 && consi >= k)
            posi.push_back(consi);
        // cout << '\n';
        ll total = 0;
        if (posi.size() == 0)
        {
            cout << "0\n";
            continue;
        }
        for (int i : posi)
        {
            // cout << i << " ";
            // while (1)
            // {
            //     k++;
            //     if(k>i) break;

                total += nCr(i-k + 2,i - k);
            // }
        }
        cout << total << '\n';
    }
    return 0;
}