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
        if (n == k)
        {
            while (n--)
                cout << "1 ";
            cout << '\n';
        }
        else if (k == 1)
        {
            int i = 1;
            while (n--)
                cout << i++ << " ";
            cout << '\n';
        }
        else
            cout << "-1\n";
    }
    return 0;
}