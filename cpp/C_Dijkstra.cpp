#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int step = 0;
        while (b != a)
        {
            if (b >= a)
            {
                if (b % 2 == 1)
                {
                    if ((b - 1) / 2 >= a)
                        b = (b - 1) / 2;
                    else
                        b /= 2;
                    step++;
                }
                else
                {
                    b /= 2;
                    step++;
                }
            }
            else
            {
                a/=2;
                step++;
            }
            if (b == a)
                break;
        }

        // if(b==a) cout << step;
        // else{
        //     while(b<=a){
        //         if(a==b) break;
        //         if(2*b+1 <= a){
        //             b = 2*b+1;
        //             step++;
        //         }
        //         else if(2*b <= a) {
        //             b*=2;
        //             step++;
        //         }
        //     }
        //     if(a==b) cout << step;
        // }
        cout << step;
        nl;
    }
    return 0;
}