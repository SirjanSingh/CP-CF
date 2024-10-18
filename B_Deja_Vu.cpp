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
int fun(int x, int y)
{
    int p = 2;
    while (p <= y)
    {
        x += p;
        p *= 2;
    }
    return x;
}
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

        vector<int> a, b(k);

        // int l = 0;
        f(i, 0, n)
        {
            int temp;
            cin >> temp;
            // if (temp % 2 == 0)
            // {
            a.push_back(temp);
            // l++;
            // }
        }
        f(i, 0, k)
        {
            cin >> b[i];
            // b[i] = pow(2, b[i]);
        }
        // sort(all(a));
        // sort(all(b));
        // int low ,j=k-1;
        // for(int i  = n-1; i >= 0; i--){
        //     if(a[i] > b[j])j++;
        // }
        // cout << b[j-1];
        // cout << low;
        int mn = 1e9;
        int l = -1;
        while (k--){
            l++;
            if(b[l] >= mn) continue;
            mn = b[l];
            f(i, 0, n)
            {
                if (a[i] % (1<<b[l]) == 0)
                    a[i] += 1<<(b[l]-1);
            }
        }
        // cout << l << endl;
        for (auto i : a)
            cout << i << ' ';

        nl;
        // f(i, 0, l)
        // {
        //     // if()

        //     auto it = *lower_bound(all(b), a[i]);
        //     cout << a[i] << ' ' << it << '\n';
        // }
        // nl;
    }
    return 0;
}