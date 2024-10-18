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
    int n = 1000000;
    vector<bool> prime(n + 1, true);

    prime[0] = false;
    prime[1] = false;
    // int c = 
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    // int counter = 0;
    // for(auto i : prime){ cout << counter << ' '<< i << '\n'; counter++;}
    while (t--)
    {
        double n;
        cin >> n;
        double sq = sqrt(n);
        // cout << sq << ' ' << n << ' ' << prime[sq] << '\n';
        if (sq == (int)sq)
        {
            if (prime[sq])
                yes;
            else
                no;
        }
        else
        {
            no;
        }
    }
    return 0;
}