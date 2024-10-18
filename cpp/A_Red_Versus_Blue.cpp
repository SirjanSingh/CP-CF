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
        int n, r, b;
        cin >> n >> r >> b;
        // write a loop to divide r by b and print the result.
        int req = 0;
        int q = r / (b + 1);
        int rem = r % (b + 1);
        req = q + ((rem == 0) ? 0 : 1);
        // for(int i=b+1;i<=r;i+=b+1)
        //     req++;
        // cout << q << ' ' <<  rem << ' ';
        // cout << req << '\n';
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << "R";
            }
            if(rem != 0) {cout << "R"; rem--;}
            cout << "B";
        }
         for (int j = 0; j < q; j++)
            {
                cout << "R";
            }
        cout << '\n';
        // for(int i = 0; i < b)
    }
    return 0;
}