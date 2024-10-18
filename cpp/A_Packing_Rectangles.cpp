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
typedef unsigned long long ull;
void _print(int t) { cout << t; }
void _print(string t) { cout << t; }
void _print(char t) { cout << t; }
void _print(long double t) { cout << t; }
void _print(double t) { cout << t; }
void _print(ull t) { cout << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cout << '{';
    _print(p.ff);
    cout << ',';
    _print(p.ss);
    cout << '}';
}
template <class T>
void _print(vector<T> v)
{
    cout << '[';
    for (T i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
template <class T>
void _print(set<T> v)
{
    cout << '[';
    for (T i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
template <class T>
void _print(multiset<T> v)
{
    cout << ']';
    for (T i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
template <class T, class V>
void _print(map<T, V> v)
{
    cout << '[';
    for (auto i : v)
    {
        _print(i);
        cout << ' ';
    }
    cout << ']';
}
void _print(auto x) { cout << x; }

bool fx(int n, int a, int b, int x)
{
    int nll = x / a;
    int nbb = x / b;
    // cout << nll << ' ' << nbb << '\n';
    int nn = nll * nbb;
    // cout << nn << '\n';
    return n <= nn;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n;
    cin >> a >> b >> n;
    int l = 0;
    int r = 1;
    while(!fx(n,a,b,r)) r*=2;
    // cout << r << '\n';
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (fx(n, a, b, mid))
        {
            r = mid;
        }
        else
        {
            l = mid+1;
        }
        // cout << l << ' ' << mid << ' ' << r << '\n';
    }
    // f(i,0,n+1) cout << fx(n,a,b,i) << ' ' << i << '\n';
    cout << l << '\n';

    return 0;
}