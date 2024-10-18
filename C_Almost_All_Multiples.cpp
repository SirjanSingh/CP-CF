#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

// taken from gfgs
#define MAXN 200001
vector<int> spf(MAXN + 1, 1);
void sieve()
{
    spf[0] = 0;
    for (int i = 2; i <= MAXN; i++)
    {
        if (spf[i] == 1)
        {
            for (int j = i; j <= MAXN; j += i)
            {
                if (spf[j] == 1)
                    spf[j] = i;
            }
        }
    }
}

vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n % x != 0)
        {
            cout << "-1\n";
        }
        else
        {
            vector<int> factor = getFactorization(n/x);
            cout << x << ' ';
            int req = 0;

            bool flag = false;
            f(i, 2, n){
                if (i == x){
                    x *= factor[req];
                    cout << x << ' ';
                    req++;
                }
                else
                    cout << i << ' ';
            }
            cout << 1 << '\n';
        }
    }
    return 0;
}