#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

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

        vector<int> x(n - 1);
        vector<int> a(n);
        a[0] = 100000;
        f(i, 0, n - 1)
        {
            cin >> x[i];
            int temp = x[i];
            a[i+1] = a[i] + temp;
        }

        for(int i : a){
            cout << i << ' ' ;
        }cout << '\n';

    }
    return 0;
}