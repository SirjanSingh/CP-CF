#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES"
#define no cout << "NO"

int numdig(int n)
{
    int c = 0;
    while (n > 0)
    {
        n = n / 10;
        c++;
    }
    return c;
}

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
        int a = n - 2, b = 3, e = 3, c = 3, d = 3;
        // int num = numdig(n);
        // c = pow(10, (num)) + 0.1;

        // d = 10 * (c - n);
        // // cout << num << '\n';
        if (n == 1)
            cout << "3 3 3 3 15\n";
        else if (n == 2)
            cout << "3 3 3 4 7\n";
        else if (n == 3)
            cout << "4 4 4 5 9\n";
        else if (n == 4)
            cout << "3 3 3 6 3\n";
        // else if(n==5)
        // else if(n==6)
        // else if(n==7)
        // else if(n==8)
        // else if(n==9)
        else
            cout << a << " " << b << " " << c << " " << d << " " << e << '\n';
        // cout << (((a+b)*c - d)/e)<< '\n';
    }
    return 0;
}