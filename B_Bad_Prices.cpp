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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = 0;
        int mini = a[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > mini)
            {
                c++;
                // cout<<a[i]<<" "<<a[j]<<'\n';
                continue;
            }
            else
                mini = a[i];
        }

        cout << c << '\n';
    }
    return 0;
}