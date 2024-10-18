#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int mn = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a[i] = temp;
            if (temp % k == 0)
                mn = 0;
            mn = min(mn, k-(temp%k));
            if(temp%2 == 0) count++;
        }

        if (k == 4)
        {            
            if (count == 0)
                mn = min(mn, 2);
            else if (count == 1)
                mn = min(mn, 1);
            else
                mn = min(mn, 0);
        }
        cout << mn << '\n';
    }

    return 0;
}
