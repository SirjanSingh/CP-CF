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

        vector<int> a(n), b(n);
        vector<int> mn(n + 1, INT_MAX), mx(n + 1, 0);
        int mnn = INT_MAX;
        int mxx = -1;
        f(i, 0, n)
        {
            cin >> a[i];
            int temp = a[i];
            // if (mnn > a[i])
            //     mnn = a[i];
            // if (mxx < a[i])
            //     mxx = a[i];
            // mn[i] = mnn;
            // mx[i] = mxx;
        }
        f(i, 0, n)
        {
            cin >> b[i];
        }
        // f(i, 0, n) cout << mn[i] << ' ';
        // nl;
        // f(i, 0, n) cout << mx[i] << ' ';
        // nl;
        int l = 0;
        int r = n - 1;

        while (a[l] == b[l])
            l++;
        while (a[r] == b[r])
            r--;
        // cout << l + 1 << ' ' << r + 1 << '\n';

        // f(i, l, r + 1)
        // {
        //     if (mnn > a[i])
        //         mnn = a[i];
        //     if (mxx < a[i])
        //         mxx = a[i];
        // }
        // cout << mxx << ' ' << mnn << '\n';
        // int ll = l - 1;
        // int rr = r + 1;
        while (((b[l-1] <= b[l] )) && l > 0)
        {
            // cout << a[ll] << ' ' << ll << " inner ll" << '\n';
            l--;
        }
        while (( b[r+1] >= b[r]) && r < n-1)
        {
            // cout << a[rr] << ' ' <<rr << " inner rr" << '\n';
            r++;
        }
        cout << l + 1 << ' ' << r + 1   << '\n';
        // nl;
    }
    return 0;
}