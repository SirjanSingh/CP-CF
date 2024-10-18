#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long int a[n];
        long long int pro = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pro *= (a[i] % k);
            // cout<<pro<<'\n';
        }
        pro = pro % k;
        string s;
        cin >> s;
        // cout<<pro<<'\n';
        int f = 0, b = n - 1;
        for (char ch : s)
        {
            cout << pro % k << " ";
            if (ch == 'L')
            {
                pro = pro / a[f];
                f++;
            }
            else
            {
                pro = pro / a[b];
                b--;
            }
        }
        cout << '\n';
    }
    return 0;
}