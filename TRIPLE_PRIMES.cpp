#include<bits/stdc++.h>
using namespace std;

#define f(i, x, y) for (int i = x; i < y; i++)
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(vector) vector.begin(),vector.end()
#define nl cout << "\n"
#define x first
#define y second
#define mapii map<int,int>
#define mapci map<char,int>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

string solve(int n) {
    map<int,int> primes;
    for (int i = 3; i <= n - 4; ++i) {
        if (is_prime(i)) {
            primes[i*i]++;
            // cout << i << ' ';
        }
    }
    
    for (auto p : primes) {
        // cout << n-4-p.x << ' '  << primes[n-4-p.x] << '\n';
        if(primes[(n-4-p.x)] > 0){
            return "Yes";
        }
    }
    return "No";
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}
