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
        double n, k;
        cin >> n >> k;
        // double pro = k * k;
        double sq = sqrt(n);
        if ((int)n % 2 == (int)k % 2 && k <= sq)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}