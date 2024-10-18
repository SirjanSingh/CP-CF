#include <bits/stdc++.h>
using namespace std;

int chwhen0(int a, int b)
{
    int ans = a;
    int n = 0;
    if (b == 1)
    {
        return 99999999;
    }
    while (ans > 0)
    {
        ans = ans / b;
        n++;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans;
        int m = 99999999;
        // int copy = b;
        for (int i = 0; i < 30; i++)
        {
            // int cur = log(a) / log(b) + i; //
            int cur = chwhen0(a, b) + i;
            //cout << cur << ", ";
            m = min(cur, m);
            b++;
        }
        cout <<  m << '\n';
    }
    return 0;
}