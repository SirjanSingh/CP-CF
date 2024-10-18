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
        long long a, b;
        cin >> a >> b;
        cout << (((min(a, b) * 2) > max(a, b)) ? (min(a, b) * 2) * (min(a, b) * 2) : max(a, b) * max(a, b)) << '\n';
    }
    return 0;
}