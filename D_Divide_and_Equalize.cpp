#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define fr(i, x, y) for (int i = x; i > y; i--)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(), vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int, int>
#define mapci map<char, int>
#define pii pair<int, int>

// taken from gfgs
void primeFactors(int n, vector<int> &a)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        a.push_back(2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            // cout << i << " ";
            a.push_back(i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        // cout << n << " ";
        a.push_back(n);
    }
}

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

        vector<int> a(n), b;
        mapii mp;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            primeFactors(temp, b);
            // nl;
            for (auto i : b)
            {
                mp[i]++;
                // cout << i << ' ';
            }
            b={};
        }
        int ans = 0;
        for (auto i : mp){
            // cout << i.first << " " << i.second << "\n";
            if(i.second % n != 0){
                ans = -1;
                break;
            }
        }
        if(ans == -1) no;
        else yes;
        // nl;
    }
    return 0;
}