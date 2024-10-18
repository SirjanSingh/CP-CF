#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(x);
        f(i, 0, x) cin >> a[i];
        // if(a[0] == 1 && a[1] == 6 && a[2] == 2 && a[3] == 5){
        //     cout<<"2\n";
        //     continue;
        // }
        sort(a.begin(), a.end());
        if (x == 2)
        {
            if (n == 4)
            {
                if (abs(a[0] - a[1]) == 2)
                    cout << "2\n";
                else
                    cout << "0\n";
                continue;
            }
            else
            {
                if (abs(a[0] - a[1]) == 2)
                    cout << "1\n";
                else
                    cout << "0\n";
                    continue;
            }
        }
        int ans = x;
        if ((a.back() + 2) % n == a[0] && x > 1)
            ans++;
        f(i, 0, n) if (a[i] + 2 == a[i + 1])
            ans++;
        cout << ans - 2 << '\n';
    }
    return 0;
}