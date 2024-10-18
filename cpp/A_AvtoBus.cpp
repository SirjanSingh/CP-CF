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
        int num1 = n / 4;
        int num2 = n / 6;
        if (n % 2 == 1 || n == 2)
            cout << "-1\n";
        else if (n == 4 || n == 6)
            cout << "1 1\n";
        else{
            cout << ((n % 6 == 0) ? num2 : num2 + 1) << ' ' << num1 << '\n';
        }
    }
    return 0;
}