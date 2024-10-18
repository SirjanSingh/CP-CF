#include <bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO \n"
#define all(vector) vector.begin(), vector.end()

// taken from gfgs
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n = 21000;
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; ++p)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; ++p)
    {
        if (isPrime[p])
        {
            primes.push_back(p);
        }
    }

    while (t--)
    {
        int d;
        cin >> d;
        int a = *lower_bound(primes.begin(), primes.end(), 1 + d);
        int b = *lower_bound(primes.begin(), primes.end(), a + d);

        cout << a * b << '\n';
        // cout << 10007 * 20011 << '\n';
    }
    return 0;
}