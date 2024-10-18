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

        vector<int> a(n);
        int diff = INT_MAX;
        f(i, 0, n)
        {
            cin >> a[i];
        }
        f(i, 0, n-1)
        {
            diff = min ( diff, a[i + 1] -  a[i]);
            if(diff < 0){
                break;
            }
        }
        if(diff < 0)    cout << 0 << '\n';
        else    cout << diff/2 + 1 << '\n' ;//+ ((diff == 0)? 1:0)<< '\n';
    }
    return 0;
}