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
typedef unsigned long long ull ;
void _print(int t) {cout << t;}void _print(string t) {cout << t;}void _print(char t) {cout << t;} void _print( long  double t) {cout << t;}void _print(double t) {cout << t;}void _print(ull t) {cout << t;}template <class T, class V> void _print(pair <T, V> p);template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";} void _print(auto x) { cout << x ;}

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
// gfgs
//  Function to print the divisors
void printDivisors(int n, vector<int> &a)
{
    // Note that this loop runs till square root
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one
            if (n / i == i)
                a.push_back(i);
            // cout << i << " ";
            else // Otherwise print both
            {
                a.push_back(i);
                a.push_back(n / i);
                // cout << i << " " << n / i << " ";
            }
        }
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
        int n, m;
        cin >> n >> m;

        // 999999733
        // 999999732
        vector<int> a,b;
        primeFactors(n, a);
        printDivisors(n, b);
        sort(all(a));

        sort(all(b),greater<int>());
        // for (auto i : a)
        // {
        //     // cout << i << ' ';
        // }
        // nl;
        int ans = 0;
        for(auto i : b){
            // cout << i  <<  ' ' ;
            if(i <= m){
                ans = i ;
                break;
            }
        }
        // nl;
        cout << n/ans << '\n';
        _print(b);
        nl;
    }
    return 0;
}